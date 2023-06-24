#include "pch.h"

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

using namespace CG;
typedef void(__thiscall* tProcessEvent)(UObject*, UFunction*, void*, void*);
typedef void(__thiscall* tpost_render)(UGameViewportClient*, UCanvas*);
tpost_render post_render_orig = nullptr;
UFont* defaultfont = nullptr;
FLinearColor white(1.f, 1.f, 1.f, 1.f);
FLinearColor black(0.f, 0.f, 0.f, 1.f);
bool no_ability_cooldown = false;
bool unlimited_ammo = false;
bool god_mode = false;


void post_render_hook(UGameViewportClient* viewport_client, UCanvas* canvas)
{
	if (canvas && viewport_client)
	{
		do
		{
			canvas->K2_DrawText(defaultfont, FString(L"Aspect - UpGun made by bditt"), FVector2D(10, 10), FVector2D(1, 1), white, 1.f, black, FVector2D(1.f, 1.f), false, true, true, black);
			auto is_no_ability_cooldown_enabled = no_ability_cooldown ? FString(L"No Ability Cooldown (F1) - Enabled") : FString(L"No Ability Cooldown (F1) - Disabled");
			auto is_unlimited_ammo_enabled = unlimited_ammo ? FString(L"Unlimited Ammo (F2) - Enabled") : FString(L"Unlimited Ammo (F2) - Disabled");

			if (GetAsyncKeyState(VK_F1) & 1)
				no_ability_cooldown = !no_ability_cooldown;

			if (GetAsyncKeyState(VK_F2) & 1)
				unlimited_ammo = !unlimited_ammo;

			canvas->K2_DrawText(defaultfont, is_no_ability_cooldown_enabled, FVector2D(10, 30), FVector2D(1, 1), white, 1.f, black, FVector2D(1.f, 1.f), false, true, true, black);
			canvas->K2_DrawText(defaultfont, is_unlimited_ammo_enabled, FVector2D(10, 50), FVector2D(1, 1), white, 1.f, black, FVector2D(1.f, 1.f), false, true, true, black);
			canvas->K2_DrawText(defaultfont, FString(L"Max Current Skill Levels (F3)"), FVector2D(10, 70), FVector2D(1, 1), white, 1.f, black, FVector2D(1.f, 1.f), false, true, true, black);


			auto local_player = viewport_client->World->OwningGameInstance->LocalPlayers[0];
			if (!local_player)
				break;
			
			auto player_controller = local_player->PlayerController;
			if (!player_controller)
				break;

			auto player_character = (CG::AUpGunBaseCharacter*)player_controller->AcknowledgedPawn;
			if (!player_character)
				break;

			if (GetAsyncKeyState(VK_F3) & 1)
			{
				auto player_state = player_character->UpGunPlayerState;
				if (!player_state)
					break;

				auto stat_manager = player_state->SkillManager;
				if (!stat_manager)
					break;

				auto stat_data = stat_manager->Skills;
				if (stat_data.Count() == 0)
					break;

				std::cout << std::endl;
				for (int i = 0; i < stat_data.Count(); i++)
				{
					auto skill = stat_data[i].Skill;
					if (!skill)
						continue;

					auto level = (int)stat_data[i].Level;

					auto stat_id = skill->ID;
					auto stat_tagname = stat_id.TagName.GetName();
					auto stat_name = skill->Name.ToString();
					auto stat_value = (int)skill->LevelCount;
					stat_data[i].Level = skill->LevelCount;
				}
			}

			if (no_ability_cooldown)
			{
				do {
					auto ability_system = player_character->AbilitySystem;
					if (!ability_system)
						break;

					ability_system->ResetCooldowns();
				} while (false);
			}

			if (unlimited_ammo)
			{
				do
				{
					auto weapon_manager = player_character->WeaponManager;
					if (!weapon_manager)
						break;

					auto current_weapon = weapon_manager->GetCurrentWeapon();
					if (!current_weapon)
						break;
					
					current_weapon->Ammo = current_weapon->Magazine;
				} while (false);
			}
		} while (false);
	}
	post_render_orig(viewport_client, canvas);
}

void CreateConsole()
{
	//*
	if (!AllocConsole()) {
		//Add some error handling here.
		//You can call GetLastError() to get more info about the error.
		return;
	}

	//std::cout, std::clog, std::cerr, std::cin
	FILE* fDummy;
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	std::cout.clear();
	std::clog.clear();
	std::cerr.clear();
	std::cin.clear();

	//std::wcout, std::wclog, std::wcerr, std::wcin
	HANDLE hConOut = CreateFileW((L"CONOUT$"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	HANDLE hConIn = CreateFileW((L"CONIN$"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	SetStdHandle(STD_OUTPUT_HANDLE, hConOut);
	SetStdHandle(STD_ERROR_HANDLE, hConOut);
	SetStdHandle(STD_INPUT_HANDLE, hConIn);
	std::wcout.clear();
	std::wclog.clear();
	std::wcerr.clear();
	std::wcin.clear();
	//*/
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	CreateConsole();

	if (CG::InitSdk())
	{
		defaultfont = UObject::FindObject<UFont>("Font Roboto.Roboto");
		auto viewport_client = CG::UGameViewportClient::StaticClass();
		if (!viewport_client)
			return FALSE;

		//auto post_render_func = GetVFunction<void(*)(UGameViewportClient*, UCanvas*)>(viewport_client, POST_RENDER_INDEX);
		//post_render_orig = post_render_func;
		//post_render_func = post_render_hook;

		UWorld* World = *CG::UWorld::GWorld;
		if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.Count())
		{
			UGameViewportClient* Viewport = World->OwningGameInstance->LocalPlayers[0]->ViewportClient;
			if (Viewport && Viewport->IsA(CG::UGameViewportClient::StaticClass()))
			{
				PVOID* VTable = (PVOID*)Viewport->VfTable;
				PVOID PostRenderObject = (PVOID)&VTable[POST_RENDER_INDEX];

				DWORD Old;
				VirtualProtect(PostRenderObject, sizeof(PVOID), PAGE_READWRITE, &Old);
				*(PVOID*)&post_render_orig = *(PVOID*)PostRenderObject;
				*(PVOID*)PostRenderObject = &post_render_hook;
				VirtualProtect(PostRenderObject, sizeof(PVOID), Old, &Old);
			}
		}
	}
	// TODO: Fill your code here

	return TRUE;
}
