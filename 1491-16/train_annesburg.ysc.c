#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	Vector3 vLocal_5 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_8 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	int iScriptParam_0 = 0;
#pragma endregion

void __SCRIPT()
{
	vLocal_5 = { 2941.792f, 1377.969f, 43.1f /*3*/ };
	vLocal_8 = { 2314.011f, -1512.919f, 44.9053f /*3*/ };
	iLocal_12 = -1;
	iLocal_2 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1()
{
	int iVar0;

	func_3(7, (1 << 9));
	if (bLocal_11)
	{
		func_4(7);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_3(iVar0, (1 << 14));
		iVar0++;
	}
	return true;
}

bool func_2()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (iLocal_0 > 0 && iLocal_0 < 6)
	{
		if (func_5())
		{
			iLocal_0 = 6;
		}
	}
	switch (iLocal_0)
	{
		case 0:
			if (!func_6())
			{
				iLocal_0 = 6;
				return false;
			}
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				func_4(iVar0);
				func_7(iVar0, (1 << 14));
				iVar0++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2))
			{
				iLocal_0 = 6;
				return false;
			}
			if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[7 /*373*/].f_1))
			{
				iLocal_0 = 6;
				return false;
			}
			if (func_8(7, 2))
			{
				iLocal_0 = 6;
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
			{
				iLocal_3 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[7 /*373*/].f_1);
				return false;
			}
			iLocal_12 = AUDIO::GET_SOUND_ID();
			func_9(iLocal_2, 0, iLocal_12);
			iLocal_1 = 2;
			iLocal_0 = 1;
			break;
		case 1:
			func_9(iLocal_2, 0, iLocal_12);
			if (func_10(iLocal_3, Global_35, 1) < 2500.0f)
			{
				if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(joaat("TRAINS_INTERSECTION1_ANN"), 2940.988f, 1374.5f, 43.1838f, &iVar1))
				{
					VEHICLE::_0x3ABFA128F5BF5A70(joaat("TRAINS_INTERSECTION1_ANN"), iVar1, true);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3, true);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(iLocal_3, "DANGER", true, false);
				iLocal_4 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iLocal_1);
				func_7(7, (1 << 9));
				bLocal_11 = true;
				iLocal_0 = 2;
			}
			break;
		case 2:
			func_9(iLocal_2, 0, iLocal_12);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4))
			{
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(iLocal_3, "ACKNOWLEDGE", true, false);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, func_11(0));
				VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(iLocal_3, false);
				func_12();
				func_3(7, (1 << 9));
				iLocal_0 = 4;
				return false;
			}
			if (func_13(iLocal_4, vLocal_5, 1) < 0.25f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.0f);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(iLocal_3, "ACKNOWLEDGE", true, false);
				iLocal_0 = 3;
			}
			break;
		case 3:
			fVar2 = func_9(iLocal_2, 1, iLocal_12);
			if (fVar2 >= 0.999f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(iLocal_3, "DANGER", true, false);
				iLocal_1++;
				iLocal_4 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iLocal_1);
				iLocal_0 = 2;
			}
			break;
		case 4:
			if (func_13(iLocal_3, vLocal_8, 1) < 160000.0f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 5.0f);
				iLocal_0 = 5;
			}
			break;
		case 5:
			if (func_13(iLocal_3, vLocal_8, 1) < 1.0f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.0f);
				iLocal_0 = 6;
			}
			break;
		case 6:
			if (func_5())
			{
				if (func_1())
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] -= (Global_40.f_11029[iParam0 /*5*/] & iParam1);
}

int func_4(int iParam0)
{
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(Global_1425371[iParam0 /*373*/].f_1);
		Global_1425371[iParam0 /*373*/].f_1 = 0;
	}
	return 1;
}

bool func_5()
{
	if (func_15(0, 0, 1))
	{
		return true;
	}
	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[7 /*373*/].f_1))
	{
		return true;
	}
	if (func_8(7, 2))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	int iVar0;

	if (func_15(0, 0, 1))
	{
		return false;
	}
	if (func_16(54) | func_17(54) || func_18(54))
	{
		return false;
	}
	if ((func_19(69, 0) || func_20(69)) || func_21(69))
	{
		return false;
	}
	if (func_22(0, 2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iVar0 /*373*/].f_1)))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_7(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] |= iParam1;
}

bool func_8(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] & iParam1) != 0;
}

float func_9(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, "props_misc@annesburg_coal", "annchute01_full");
	if (bParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
		ENTITY::_SET_ENTITY_ANIM_SPEED(iParam0, "props_misc@annesburg_coal", "annchute01_full", 1.5f);
		if (fVar0 >= 0.125f && fVar0 < 0.21f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1.0f);
			func_23(iParam2, vVar1);
		}
		else if (fVar0 >= 0.485f && fVar0 < 0.52f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 1.0f);
			func_23(iParam2, vVar1);
		}
		else if (fVar0 >= 0.64f && fVar0 < 0.73f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1.0f);
			func_23(iParam2, vVar1);
		}
		else
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0.0f);
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0.0f);
			func_24(iParam2);
		}
	}
	else
	{
		if (fVar0 != 0.0f)
		{
			ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iParam0, "props_misc@annesburg_coal", "annchute01_full", 0.0f);
			ENTITY::_SET_ENTITY_ANIM_SPEED(iParam0, "props_misc@annesburg_coal", "annchute01_full", 0.0f);
		}
		GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0.0f);
		GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0.0f);
		func_24(iParam2);
		fVar0 = 0.0f;
	}
	return fVar0;
}

float func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0.0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_25(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

float func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11.0f;
		case 1:
			return 11.0f;
		case 2:
			return 11.0f;
		case 3:
			return 11.0f;
		case 6:
			return 0.0f;
		case 7:
			return 0.0f;
		case 8:
			return 3.5f;
		case 9:
			return 3.5f;
		case 10:
			return 3.5f;
		case 11:
			return 3.5f;
		case 12:
			return 3.5f;
		case 5:
			return 0.0f;
		case 4:
			return 11.0f;
		default:
			break;
	}
	return 5.0f;
}

void func_12()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = joaat("FREIGHT_GROUP");
	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(iVar1, 2855.288f, -1314.826f, 45.0838f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, true);
	}
	iVar0 = 0;
	iVar1 = joaat("TRAINS_NB1");
	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(iVar1, 2748.4f, -1434.3f, 45.0f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, true);
	}
	iVar0 = 0;
	iVar1 = joaat("TRAINS_NB1");
	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(iVar1, 2624.2f, -1477.2f, 45.0f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, true);
	}
	iVar0 = 0;
	iVar1 = joaat("FREIGHT_GROUP");
	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(iVar1, 2520.551f, -1482.221f, 45.2577f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, false);
	}
}

float func_13(int iParam0, Vector3 vParam1, bool bParam4)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_25(vVar0, vParam1);
}

bool func_14(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_15(int iParam0, bool bParam1, bool bParam2)
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
		if (func_26())
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
		iVar0 = func_27(Global_1898164.f_1[0 /*5*/]);
		if (func_28(iVar0) && func_29(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_30(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 & (40959 & (-1 - iParam0))) != 0)
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
			return (iParam0 & 1) == 0;
		case 4:
			return (iParam0 & 2) == 0;
		case 6:
			return (iParam0 & 4) == 0;
		case 2:
			return (iParam0 & 16) == 0;
		case 5:
			return (iParam0 & 32) == 0;
		case 9:
			return (iParam0 & 64) == 0;
		case 8:
			return (iParam0 & 8) == 0;
		case 10:
			return (iParam0 & (1 << 9)) == 0;
		case 3:
			return (iParam0 & 128) == 0;
		case 11:
			return (iParam0 & 256) == 0;
		default:
			break;
	}
	return false;
}

int func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_31(Global_1835011[iParam0 /*74*/].f_1);
}

int func_17(int iParam0)
{
	int iVar0;

	if (!func_32(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_18(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_33(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_19(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_34() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (Global_1347702[iVar0 /*49*/].f_13 & (1 << 14)) == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_20(int iParam0)
{
	if (func_34() != -1)
	{
		return false;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_33(Global_1347702[iParam0 /*49*/].f_15)) && !func_35(Global_1347702[iParam0 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	if (!func_19(iParam0, 0))
	{
		return false;
	}
	if (func_35(Global_1347702[iParam0 /*49*/].f_13, 64))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_36(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_23(int iParam0, Vector3 vParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (AUDIO::PREPARE_SOUND("Coal_Fall", "Annesburg_Coal_Chute_Sounds", -2) && AUDIO::_HAS_SOUND_ID_FINISHED(iParam0))
	{
		AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(iParam0, "Coal_Fall", vParam1, "Annesburg_Coal_Chute_Sounds", false, 0, true);
	}
}

void func_24(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0))
	{
		AUDIO::_STOP_SOUND_WITH_ID(iParam0);
	}
}

float func_25(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_26()
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
	if (Global_1051043 == -1 && (Global_1572887.f_6 & 1) != 0)
	{
		return true;
	}
	return false;
}

int func_27(int iParam0)
{
	if (!func_30(iParam0))
	{
		return -1;
	}
	return func_38(func_37(iParam0));
}

bool func_28(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_29(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_30(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_31(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_39(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_32(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_33(int iParam0)
{
	int iVar0;

	iVar0 = func_40(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_34()
{
	return Global_1572887.f_12;
}

bool func_35(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_36(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

int func_37(int iParam0)
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

int func_38(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_39(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_41(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_40(int iParam0)
{
	if (!func_30(iParam0))
	{
		return -1;
	}
	return func_39(iParam0);
}

int func_41(int iParam0)
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

