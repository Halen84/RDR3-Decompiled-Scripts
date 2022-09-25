#pragma region Local_Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0.0f;
	float fLocal_8 = 0.0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	bool bLocal_21 = false;
	Vector3 vLocal_22 = { 0.0f, 0.0f, 0.0f };
	float fLocal_25 = 0.0f;
	float fLocal_26 = 0.0f;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_19 = -1;
	vLocal_22 = { -1338.12f, 2434.522f, 307.2562f /*3*/ };
	func_1();
	iLocal_15 = iScriptParam_0;
	while (true)
	{
		if (func_2())
		{
			func_3();
		}
		switch (iLocal_14)
		{
			case 0:
				if (7 == iLocal_15)
				{
					sLocal_20 = "DONT_LEAVE_CAMP";
					func_4(1);
					iLocal_17 = func_5(sLocal_20, 0, 0, 1);
				}
				iLocal_14 = 1;
				break;
			case 1:
				func_6();
				if (func_7(Global_35, Global_1897952.f_38, 1, 0))
				{
					iLocal_14 = 2;
				}
				break;
			case 2:
				if (func_8())
				{
					func_3();
				}
				if (!func_7(Global_35, Global_1897952.f_38, 1, 0))
				{
					iLocal_14 = 1;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
}

bool func_2()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	if (func_9(0, 0, 1))
	{
		return true;
	}
	if (func_10(128))
	{
		return true;
	}
	if (7 == iLocal_15)
	{
		if (func_11(3))
		{
			return true;
		}
	}
	else if (8 == iLocal_15)
	{
		if (!func_11(38) || func_11(43))
		{
			return true;
		}
	}
	return false;
}

void func_3()
{
	Global_1897952.f_40 = 0;
	if (iLocal_19 != -1)
	{
		func_12(iLocal_19, 128);
	}
	func_4(1);
	MISC::SET_WIND_SPEED(-1.0f);
	MISC::SET_WIND_DIRECTION(-1.0f);
	MISC::_SET_SNOW_LEVEL(-1.0f);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(int iParam0)
{
	func_13(1);
}

int func_5(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_14(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

void func_6()
{
	int iVar0;
	float fVar1;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (8 == iLocal_15)
	{
		if (PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(iVar0, true);
				VEHICLE::EXPLODE_VEHICLE(iVar0, false, false, 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iLocal_18 = PED::GET_MOUNT(Global_35);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_18, true, false);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_18))
		{
			func_15(iLocal_18, 0, 0);
		}
	}
	else if (7 == iLocal_15)
	{
		if (!func_16(iLocal_17))
		{
			func_4(1);
			iLocal_17 = func_5(sLocal_20, 0, 0, 1);
		}
		fVar1 = func_17(vLocal_22, Global_36);
		if (fVar1 < 0.0f)
		{
			fVar1 += 360.0f;
		}
		MISC::SET_WIND_DIRECTION(fVar1);
		fLocal_25 = MISC::GET_WIND_SPEED();
		fLocal_25 = func_18(fLocal_25 < 100.0f, (fLocal_25 + 1.0f), 100.0f);
		MISC::SET_WIND_SPEED(fLocal_25);
		fLocal_26 = MISC::GET_SNOW_LEVEL();
		fLocal_26 = func_18(fLocal_26 < 1.0f, (fLocal_26 + 0.01f), 1.0f);
		MISC::_SET_SNOW_LEVEL(fLocal_26);
		if (iLocal_16 < MISC::GET_GAME_TIMER())
		{
			ENTITY::SET_ENTITY_HEALTH(Global_35, (ENTITY::GET_ENTITY_HEALTH(Global_35) - 1), 0);
			iLocal_16 = MISC::GET_GAME_TIMER() + 200;
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::GET_MOUNT(Global_35) != iLocal_18)
				{
					iLocal_18 = PED::GET_MOUNT(Global_35);
					iLocal_19 = func_19(iLocal_18);
					if (iLocal_19 != -1)
					{
						func_20(iLocal_19, 128);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_18))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_18))
				{
					if (!bLocal_21)
					{
						func_4(1);
						sLocal_20 = "DONT_LEAVE_CAMP_HORSE_DIED";
						bLocal_21 = true;
					}
				}
				else
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_18, (ENTITY::GET_ENTITY_HEALTH(iLocal_18) - 3), 0);
				}
			}
		}
	}
}

bool func_7(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_8()
{
	if (func_16(iLocal_17))
	{
		func_4(1);
	}
	if (7 == iLocal_15)
	{
		fLocal_25 = MISC::GET_WIND_SPEED();
		fLocal_25 = func_18(fLocal_25 > 0.0f, (fLocal_25 - 0.5f), 0.0f);
		MISC::SET_WIND_SPEED(fLocal_25);
		fLocal_26 = MISC::GET_SNOW_LEVEL();
		fLocal_26 = func_18(fLocal_26 > 0.0f, (fLocal_26 - 0.01f), 0.0f);
		MISC::_SET_SNOW_LEVEL(fLocal_26);
		if (fLocal_25 > 5.0f)
		{
			return false;
		}
	}
	return true;
}

bool func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_21())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_22(Global_1898164.f_1[0 /*5*/]);
		if (func_23(iVar0) && func_24(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_25(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if (Global_1935630 & 40959 & (-1 - iParam0) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & (1 << 9) == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_10(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_11(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_26(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_12(int iParam0, int iParam1)
{
	iParam0 = func_27(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 -= Global_1900383[iParam0 /*45*/].f_24 & iParam1;
}

void func_13(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

int func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&sVar0, &sVar13, bParam5);
	return iVar15;
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_16(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_28(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

float func_17(Vector3 vParam0, Vector3 vParam3)
{
	Vector3 vVar0;

	vVar0 = { vParam3 - vParam0 /*3*/ };
	if (vVar0.y == 0.0f)
	{
		if (vVar0.x < 0.0f)
		{
			return -90.0f;
		}
		else
		{
			return 90.0f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

float func_18(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_19(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_20(int iParam0, int iParam1)
{
	iParam0 = func_27(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 |= iParam1;
}

bool func_21()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return -1;
	}
	return func_30(func_29(iParam0));
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_24(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_25(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_26(int iParam0, bool bParam1)
{
	switch (func_31(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 != 0;
}

int func_29(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_30(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_31(int iParam0)
{
	if (!func_25(iParam0))
	{
		return -1;
	}
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_33(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40431 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40431 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40431.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40431.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

