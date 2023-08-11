#pragma region Local_Variables
	struct<7> /*56*/ sLocal_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&sScriptParam_0, &sLocal_0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_1(&sScriptParam_0, &sLocal_0);
	}
	while (func_2(&sScriptParam_0, &sLocal_0))
	{
		switch (sLocal_0.f_0)
		{
			case 0:
				if (func_3(&sScriptParam_0, &sLocal_0))
				{
					func_4(&sLocal_0, 1);
				}
				break;
			case 1:
				if (func_5(&sScriptParam_0, &sLocal_0))
				{
					func_4(&sLocal_0, 2);
				}
				break;
			case 2:
				if (func_6(&sScriptParam_0, &sLocal_0))
				{
					func_4(&sLocal_0, 3);
				}
				break;
			case 3:
				if (func_7(&sScriptParam_0, &sLocal_0))
				{
					if (sLocal_0.f_3 >= sLocal_0.f_4)
					{
						func_8(&sLocal_0);
						func_4(&sLocal_0, 4);
					}
					else
					{
						sLocal_0.f_6 = 0;
						func_4(&sLocal_0, 2);
					}
				}
				break;
			case 4:
				func_1(&sScriptParam_0, &sLocal_0);
				func_4(&sLocal_0, 5);
				break;
			case 5:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&sScriptParam_0, &sLocal_0);
}

void func_1(var uParam0, var uParam1)
{
	func_8(uParam1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
	{
		PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam1->f_7);
		PLAYER::_0xDC5E09D012D759C4(uParam1->f_7, uParam1->f_7, 0);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(uParam1->f_8))
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam1->f_8);
	}
	SCRIPTS::_0xE7282390542F570D(*uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, var uParam1)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return false;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (func_9(0, 0, 1))
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_10(uParam0) /*3*/ };
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam1->f_9[0]))
	{
		iParam1->f_9[0] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("RANSACK_REACH_IN_CRAYSISH_HOLE"), vVar0 - Vector(0.0f, 0.3f, 0.0f), 0.0f, 0.0f, 0.0f, false);
	}
	STREAMING::REQUEST_MODEL(func_11(), false);
	iParam1->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iParam1->f_1 = func_12(uParam0->f_1);
	return true;
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_5(var uParam0, int iParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_11()))
	{
		return false;
	}
	return true;
}

bool func_6(var uParam0, int iParam1)
{
	Vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		vVar0 = { func_13(uParam0) /*3*/ };
		if (!func_14(vVar0))
		{
			iParam1->f_6 = OBJECT::CREATE_OBJECT(func_11(), vVar0, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		return false;
	}
	if (iParam1->f_1 != -1 && !func_15(iParam1, 1065353216))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam1->f_7, false);
		PLAYER::_0x6ECFC621A168424C(iParam1->f_7, iParam1->f_7, 0, 0.0f);
	}
	return true;
}

bool func_7(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (func_16(joaat("UPGRADE_FSH_BAIT_CRAYFISH")) && !iParam1->f_5)
	{
		iParam1->f_3++;
		iParam1->f_5 = 1;
	}
	if (iParam1->f_5 & func_17())
	{
		iParam1->f_5 = 0;
		func_19(joaat("AT_CRAYFISH"), joaat("A_C_CRAWFISH_01"), func_18(PLAYER::PLAYER_ID()), 1, 1);
		sVar0 = { func_20(joaat("COLLECTED"), joaat("AT_CRAYFISH")) /*2*/ };
		STATS::_STAT_ID_INCREMENT_INT(&sVar0, 1);
		return true;
	}
	return false;
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		iVar1 = iVar0;
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9[iVar1]))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_9[iVar1]);
		}
		iVar0++;
	}
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

Vector3 func_10(var uParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		return TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true);
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_11()
{
	return joaat("P_CRAYFISH01X");
}

int func_12(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		return -1;
	}
	vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0, true) /*3*/ };
	fVar5 = 9999999.0f;
	fVar6 = 9999999.0f;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (17 - 1))
	{
		iVar3 = iVar7;
		fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_26(iVar3), true);
		if (fVar5 < fVar6)
		{
			fVar6 = fVar5;
			iVar4 = iVar3;
		}
		iVar7++;
	}
	return iVar4;
}

Vector3 func_13(var uParam0)
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { func_10(uParam0) /*3*/ };
	fVar3 = 0.0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, true))
	{
		vVar0.f_2 = (fVar3 + 0.1f);
		return vVar0;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_14(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_15(int iParam0, int iParam1)
{
	if (iParam0->f_8 == 0)
	{
		iParam0->f_8 = ENTITY::PIN_CLOSEST_MAP_ENTITY(func_27(iParam0->f_1), func_26(iParam0->f_1), 11);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(iParam0->f_8))
	{
		iParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iParam0->f_8));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		return false;
	}
	return true;
}

bool func_16(int iParam0)
{
	Vector3 vVar0;
	int iVar10;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == joaat("EVENT_OBJECT_INTERACTION"))
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

int func_17()
{
	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_18(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_19(int iParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_MAP_DISCOVER_REGION(iVar1);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, bParam6);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_39 == joaat("PLAYER_ZERO"))
		{
			iVar2 = func_28(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_29(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_28(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = func_28(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_29(iVar2, 0);
					}
				}
			}
		}
	}
}

struct<2> /*16*/ func_20(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
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
	if (Global_1051043 == -1 && (Global_1572887.f_6 & 1) != 0)
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
	return func_31(func_30(iParam0));
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_24(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_25(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

Vector3 func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 2027.162f, -1722.432f, 40.62656f };
		case 1:
			return { 2045.327f, -1785.859f, 40.69251f };
		case 2:
			return { 2021.431f, -1789.314f, 40.40718f };
		case 3:
			return { 2087.09f, -1859.742f, 40.49999f };
		case 4:
			return { 2058.266f, -1866.586f, 40.5274f };
		case 5:
			return { 2042.225f, -1885.971f, 40.49999f };
		case 6:
			return { 1672.345f, -826.9699f, 39.77722f };
		case 7:
			return { 1710.503f, -850.5192f, 40.24175f };
		case 8:
			return { 1693.874f, -942.7992f, 40.27774f };
		case 9:
			return { 1756.451f, -1017.704f, 40.73364f };
		case 10:
			return { 2339.37f, -544.2522f, 40.72062f };
		case 11:
			return { 2301.896f, -515.7421f, 40.62392f };
		case 12:
			return { 2253.715f, -549.9788f, 40.5689f };
		case 13:
			return { 2281.221f, -640.3717f, 40.46832f };
		case 14:
			return { 2215.952f, -679.2456f, 40.62037f };
		case 15:
			return { 2176.255f, -693.6794f, 40.68019f };
		case 16:
			return { 2258.821f, -720.3987f, 40.47908f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DIS_BAY_CATFISHHOLE01_DECAL");
		case 1:
			return joaat("DIS_BAY_CATFISHHOLE02_DECAL");
		case 2:
			return joaat("DIS_BAY_CATFISHHOLE03_DECAL");
		case 3:
			return joaat("DIS_BAY_CATFISHHOLE04_DECAL");
		case 4:
			return joaat("DIS_BAY_CATFISHHOLE05_DECAL");
		case 5:
			return joaat("DIS_BAY_CATFISHHOLE06_DECAL");
		case 6:
			return joaat("DIS_BAY_CATFISHHOLE07_DECAL");
		case 7:
			return joaat("DIS_BAY_CATFISHHOLE08_DECAL");
		case 8:
			return joaat("DIS_BAY_CATFISHHOLE09_DECAL");
		case 9:
			return joaat("DIS_BAY_CATFISHHOLE10_DECAL");
		case 10:
			return joaat("DIS_BAY_CATFISHHOLE11_DECAL");
		case 11:
			return joaat("DIS_BAY_CATFISHHOLE12_DECAL");
		case 12:
			return joaat("DIS_BAY_CATFISHHOLE13_DECAL");
		case 13:
			return joaat("DIS_BAY_CATFISHHOLE14_DECAL");
		case 14:
			return joaat("DIS_BAY_CATFISHHOLE15_DECAL");
		case 15:
			return joaat("DIS_BAY_CATFISHHOLE16_DECAL");
		case 16:
			return joaat("DIS_BAY_CATFISHHOLE17_DECAL");
		default:
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("AT_ARMADILLO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_JN");
			}
			break;
		case joaat("AT_BADGER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BADGER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BADGER_JN");
			}
			break;
		case joaat("AT_BAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAT_JN");
			}
			break;
		case joaat("AT_BEAR_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_GRIZZLY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAVER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_JN");
			}
			break;
		case joaat("AT_BEAVER_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_JN");
			}
			break;
		case joaat("AT_BLUEJAY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_JN");
			}
			break;
		case joaat("AT_BOAR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_JN");
			}
			break;
		case joaat("AT_BOAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_JN");
			}
			break;
		case joaat("AT_BUCK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_JN");
			}
			break;
		case joaat("AT_BUCK_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_JN");
			}
			break;
		case joaat("AT_BUFFALO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BISON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BISON_JN");
			}
			break;
		case joaat("AT_BUFFALO_TATANKA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_JN");
			}
			break;
		case joaat("AT_BUFFALO_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_JN");
			}
			break;
		case joaat("AT_BULL_ANGUS"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULL_JN");
			}
			break;
		case joaat("AT_BULL_DEVON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_JN");
			}
			break;
		case joaat("AT_BULL_HEREFORD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_JN");
			}
			break;
		case joaat("AT_BULLFROG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_JN");
			}
			break;
		case joaat("AT_CALIFORNIACONDOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_JN");
			}
			break;
		case joaat("AT_CARDINAL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_JN");
			}
			break;
		case joaat("AT_CAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CAT_JN");
			}
			break;
		case joaat("AT_CEDARWAXWING"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_JN");
			}
			break;
		case joaat("AT_CHICKEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_PRAIRIE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_LEGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_JAVA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHIPMUNK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_JN");
			}
			break;
		case joaat("AT_CORMORANT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_JN");
			}
			break;
		case joaat("AT_CORMORANT_NEO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_JN");
			}
			break;
		case joaat("AT_COUGAR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_JN");
			}
			break;
		case joaat("AT_COUGAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_JN");
			}
			break;
		case joaat("AT_COW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_JN");
			}
			break;
		case joaat("AT_COYOTE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_JN");
			}
			break;
		case joaat("AT_COYOTE_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_JN");
			}
			break;
		case joaat("AT_CRAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAB_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAB_JN");
			}
			break;
		case joaat("AT_CRANE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_JN");
			}
			break;
		case joaat("AT_CRANE_SAND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			break;
		case joaat("AT_CRAYFISH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_JN");
			}
			break;
		case joaat("AT_CROW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_JN");
			}
			break;
		case joaat("AT_DEER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEER_JN");
			}
			break;
		case joaat("AT_DOG_AUSTRALIAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_JN");
			}
			break;
		case joaat("AT_DOG_BLOODHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BLUETICK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BORDER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_JN");
			}
			break;
		case joaat("AT_DOG_CATAHOULA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_JN");
			}
			break;
		case joaat("AT_DOG_CHESAPEAKE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_JN");
			}
			break;
		case joaat("AT_DOG_FOXHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_JN");
			}
			break;
		case joaat("AT_DOG_HUSKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_JN");
			}
			break;
		case joaat("AT_DOG_LAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_JN");
			}
			break;
		case joaat("AT_DOG_MUTT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUTT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUTT_JN");
			}
			break;
		case joaat("AT_DOG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_JN");
			}
			break;
		case joaat("AT_DOG_POODLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POODLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POODLE_JN");
			}
			break;
		case joaat("AT_DONKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_JN");
			}
			break;
		case joaat("AT_DUCK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_JN");
			}
			break;
		case joaat("AT_DUCK_PEKIN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_JN");
			}
			break;
		case joaat("AT_EAGLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_JN");
			}
			break;
		case joaat("AT_EAGLE_GOLDEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_JN");
			}
			break;
		case joaat("AT_EGRET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_JN");
			}
			break;
		case joaat("AT_EGRET_LITTLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_JN");
			}
			break;
		case joaat("AT_EGRET_SNOWY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_JN");
			}
			break;
		case joaat("AT_ELK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_JN");
			}
			break;
		case joaat("AT_ELK_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_JN");
			}
			break;
		case joaat("AT_ELK_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_JN");
			}
			break;
		case joaat("AT_FOX"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_JN");
			}
			break;
		case joaat("AT_FOX_GRAY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_JN");
			}
			break;
		case joaat("AT_FOX_SILVER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_JN");
			}
			break;
		case joaat("AT_FOX_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_JN");
			}
			break;
		case joaat("AT_GATOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_JN");
			}
			break;
		case joaat("AT_GATOR_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_JN");
			}
			break;
		case joaat("AT_GILAMONSTER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_JN");
			}
			break;
		case joaat("AT_GOAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_JN");
			}
			break;
		case joaat("AT_GOOSE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_JN");
			}
			break;
		case joaat("AT_HAWK_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HAWK_JN");
			}
			break;
		case joaat("AT_HAWK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_JN");
			}
			break;
		case joaat("AT_HAWK_ROUGH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_JN");
			}
			break;
		case joaat("AT_HERON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HERON_TRI"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HORSE"):
			if (((iParam1 == joaat("A_C_HORSE_AMERICANPAINT_OVERO") || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE")) || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_TOBIANO")) || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_JN");
				}
			}
			else if (((iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK") || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN")) || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE")) || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_ANDALUSIAN_DARKBAY") || iParam1 == joaat("A_C_HORSE_ANDALUSIAN_PERLINO")) || iParam1 == joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_APPALOOSA_BLANKET") || iParam1 == joaat("A_C_HORSE_APPALOOSA_LEOPARD")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_ARABIAN_BLACK") || iParam1 == joaat("A_C_HORSE_ARABIAN_REDCHESTNUT")) || iParam1 == joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY")) || iParam1 == joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC")) || iParam1 == joaat("A_C_HORSE_ARABIAN_WHITE"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_ARDENNES_BAYROAN") || iParam1 == joaat("A_C_HORSE_ARDENNES_IRONGREYROAN")) || iParam1 == joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT") || iParam1 == joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN") || iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN")) || iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY") || iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT")) || iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK") || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_GREY")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE") || iParam1 == joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_MORGAN_BAY") || iParam1 == joaat("A_C_HORSE_MORGAN_BAYROAN")) || iParam1 == joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC")) || iParam1 == joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")) || iParam1 == joaat("A_C_HORSE_MORGAN_PALOMINO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_MUSTANG_GRULLODUN") || iParam1 == joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY")) || iParam1 == joaat("A_C_HORSE_MUSTANG_WILDBAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_NOKOTA_BLUEROAN") || iParam1 == joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN")) || iParam1 == joaat("A_C_HORSE_NOKOTA_WHITEROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_SHIRE_DARKBAY") || iParam1 == joaat("A_C_HORSE_SHIRE_LIGHTGREY")) || iParam1 == joaat("A_C_HORSE_SHIRE_RAVENBLACK"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT") || iParam1 == joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_JN");
				}
			}
			else if ((((((iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO") || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT") || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BRINDLE")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_TURKOMAN_DARKBAY") || iParam1 == joaat("A_C_HORSE_TURKOMAN_GOLD")) || iParam1 == joaat("A_C_HORSE_TURKOMAN_SILVER"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_JN");
				}
			}
			break;
		case joaat("AT_IGUANA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_JN");
			}
			break;
		case joaat("AT_IGUANA_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_JN");
			}
			break;
		case joaat("AT_JAVELINA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_JN");
			}
			break;
		case joaat("AT_LOON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_JN");
			}
			break;
		case joaat("AT_LOON_PACIFIC"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_JN");
			}
			break;
		case joaat("AT_LOON_YELLOW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_JN");
			}
			break;
		case joaat("AT_MOOSE_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_JN");
			}
			break;
		case joaat("AT_MOOSE_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_JN");
			}
			break;
		case joaat("AT_MULE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MULE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MULE_JN");
			}
			break;
		case joaat("AT_MUSKRAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_JN");
			}
			break;
		case joaat("AT_ORIOLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_JN");
			}
			break;
		case joaat("AT_ORIOLE_HOODED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_JN");
			}
			break;
		case joaat("AT_OWL_NORTH"):
		case joaat("AT_OWL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_JN");
			}
			break;
		case joaat("AT_OWL_CALI"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_JN");
			}
			break;
		case joaat("AT_OX"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OXEN_JN");
			}
			break;
		case joaat("AT_OX_DEVON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_JN");
			}
			break;
		case joaat("AT_PANTHER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_JN");
			}
			break;
		case joaat("AT_PANTHER_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_JN");
			}
			break;
		case joaat("AT_PARROT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PARROT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PARROT_JN");
			}
			break;
		case joaat("AT_PARROT_GREEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_JN");
			}
			break;
		case joaat("AT_PARROT_SCARLET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_JN");
			}
			break;
		case joaat("AT_PELICAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_JN");
			}
			break;
		case joaat("AT_PELICAN_BROWN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_JN");
			}
			break;
		case joaat("AT_PHEASANT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_JN");
			}
			break;
		case joaat("AT_PHEASANT_CHINESE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_JN");
			}
			break;
		case joaat("AT_PIG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIG_JN");
			}
			break;
		case joaat("AT_PIG_CHINA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_JN");
			}
			break;
		case joaat("AT_PIG_SPOT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_JN");
			}
			break;
		case joaat("AT_PIGEON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_JN");
			}
			break;
		case joaat("AT_PIGEON_BAND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_JN");
			}
			break;
		case joaat("AT_POSSUM"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_JN");
			}
			break;
		case joaat("AT_PRONGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_BAJA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_SONO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_JN");
			}
			break;
		case joaat("AT_QUAIL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_JN");
			}
			break;
		case joaat("AT_RABBIT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_JN");
			}
			break;
		case joaat("AT_RACCOON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_ROCKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_JN");
			}
			break;
		case joaat("AT_RAM_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_JN");
			}
			break;
		case joaat("AT_RAM_ROCKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAM_SIERRA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_SIERRA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_JN");
			}
			break;
		case joaat("AT_RAM_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_JN");
			}
			break;
		case joaat("AT_RAT_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAT_JN");
			}
			break;
		case joaat("AT_RAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_JN");
			}
			break;
		case joaat("AT_RAVEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_JN");
			}
			break;
		case joaat("AT_REDFOOTEDBOOBY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_JN");
			}
			break;
		case joaat("AT_ROBIN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_JN");
			}
			break;
		case joaat("AT_ROOSTER_JAVA"):
		case joaat("AT_ROOSTER"):
		case joaat("AT_ROOSTER_LEGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_JN");
			}
			break;
		case joaat("AT_ROSESPOONBILL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_JN");
			}
			break;
		case joaat("AT_SEAGULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_JN");
			}
			break;
		case joaat("AT_SEAGULL_LAUGH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_JN");
			}
			break;
		case joaat("AT_SEAGULL_RING"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_JN");
			}
			break;
		case joaat("AT_SHEEP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_JN");
			}
			break;
		case joaat("AT_SKUNK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_JN");
			}
			break;
		case joaat("AT_SNAKE_BOA"):
		case joaat("AT_SNAKE_BOA_RAINBOW"):
		case joaat("AT_SNAKE_BOA_SUN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_JN");
			}
			break;
		case joaat("AT_SNAKE_FERDELANCE"):
		case joaat("AT_SNAKE_COPPER_NORTH"):
		case joaat("AT_SNAKE_COPPER_SOUTH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_TAIL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACKTAILED_RATTLE_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_COTTON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_DIAMOND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_JN");
			}
			break;
		case joaat("AT_SONGBIRD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_JN");
			}
			break;
		case joaat("AT_SONGBIRD_SCARLET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_JN");
			}
			break;
		case joaat("AT_SPARROW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_JN");
			}
			break;
		case joaat("AT_SPARROW_EURO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_JN");
			}
			break;
		case joaat("AT_SPARROW_GOLD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_JN");
			}
			break;
		case joaat("AT_SQUIRREL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_JN");
			}
			break;
		case joaat("AT_SQUIRREL_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_JN");
			}
			break;
		case joaat("AT_SQUIRREL_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_JN");
			}
			break;
		case joaat("AT_TOAD"):
		case joaat("AT_TOAD_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TOAD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TOAD_JN");
			}
			break;
		case joaat("AT_TURKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_JN");
			}
			break;
		case joaat("AT_TURKEY_RIO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_JN");
			}
			break;
		case joaat("AT_TURTLE_SEA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_JN");
			}
			break;
		case joaat("AT_TURTLE_SNAP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_JN");
			}
			break;
		case joaat("AT_VULTURE_EAST"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_JN");
			}
			break;
		case joaat("AT_VULTURE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_JN");
			}
			break;
		case joaat("AT_WOLF"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOLF_JN");
			}
			break;
		case joaat("AT_WOLF_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_JN");
			}
			break;
		case joaat("AT_WOLF_TIMBER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_JN");
			}
			break;
		case joaat("AT_WOODPECKER_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_JN");
			}
			break;
		case joaat("AT_WOODPECKER_PILEATED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_JN");
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_29(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_33(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_30(int iParam0)
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

int func_31(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

void func_32(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_34(1);
	}
}

void func_33(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; // curOff = 52
		}
		else
		{
			func_32(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_34(1);
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_35(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_36(&(Global_40.f_12019.f_42), 1);
	}
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

