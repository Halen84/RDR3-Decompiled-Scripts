#pragma region Local_Variables
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#pragma endregion

void __EntryFunction__()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	switch (sScriptParam_0.f_0)
	{
		case 2:
			if (sScriptParam_0.f_1 == joaat("LAUNCHMP") || sScriptParam_0.f_1 == -968517323)
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
				{
					return;
				}
				CAM::DO_SCREEN_FADE_OUT(0);
				func_1(0);
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (sScriptParam_0.f_1 == -1214041525 || sScriptParam_0.f_1 == -118730902)
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
				{
					return;
				}
				func_1(1);
				CAM::DO_SCREEN_FADE_OUT(0);
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (sScriptParam_0.f_1 == joaat("LAUNCHSP"))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_2();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (sScriptParam_0.f_1 == joaat("LAUNCHMISSIONCREATOR"))
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
				{
					return;
				}
				if (func_3())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					HUD::SET_FRONTEND_ACTIVE(false);
				}
			}
			break;
		default:
			break;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	func_4(68);
	if (bParam0)
	{
		func_5(joaat("FREEROAM"), 16);
	}
	else
	{
		func_5(joaat("FREEROAM"), 0);
	}
	func_6(3);
}

void func_2()
{
	func_4(4);
	func_6(2);
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_7(joaat("BENCHMARK"))))
	{
		Global_43893 = 1;
	}
	func_5(joaat("SINGLE_PLAYER"), 0);
}

bool func_3()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			NETWORK::NETWORK_SHOW_PSN_UGC_RESTRICTION();
			return false;
		}
	}
	func_4(68);
	func_5(joaat("MISSION_CREATOR"), 2);
	func_6(3);
	return true;
}

void func_4(int iParam0)
{
	Global_1572864.f_3 |= iParam0;
}

void func_5(int iParam0, int iParam1)
{
	Global_1572887.f_182 = iParam0;
	Global_1572887.f_182.f_1 = iParam1;
	func_8(28);
}

void func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

char* func_7(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("DEMO"):
			sVar0 = "demo";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("PRIVATE"):
			sVar0 = "private";
			break;
		case joaat("FRIENDLY"):
			sVar0 = "friendly";
			break;
		case joaat("HARDCORE"):
			sVar0 = "hardcore";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_POSSE"):
			sVar0 = "random_posse";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("SPAWN_LOCATION"):
			sVar0 = "spawn_location";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case joaat("HANDHELD"):
			sVar0 = "handheld";
			break;
		case joaat("BENCHMARK"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_8(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887.f_182.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887.f_182.f_2 != -1)
	{
	}
	if (Global_1572887.f_182.f_3 != -1)
	{
	}
	if (Global_1572887.f_182.f_4 != -1)
	{
	}
	if (Global_1572887.f_182.f_5 != -1)
	{
	}
	if (Global_1572887.f_182.f_6 != -1)
	{
	}
	if (Global_1572887.f_182.f_8 != 0)
	{
	}
}

