#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_6 = -1;
	iLocal_7 = -1;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case joaat("EVENT_SCENARIO_ADD_PED"):
				func_9(iVar0);
				break;
			case joaat("EVENT_SCENARIO_REMOVE_PED"):
				func_10(iVar0);
				break;
			case joaat("EVENT_SCENARIO_DESTROY_PROP"):
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	switch (iLocal_5)
	{
		case 0:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 6;
				return;
			}
			bLocal_11 = func_12() == func_13();
			iLocal_8 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			iLocal_9 = TASK::_GET_SCENARIO_POINT_TYPE(iLocal_3);
			if (func_14(iLocal_8, 0) && !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iLocal_8)))
			{
				iLocal_5 = 6;
				return;
			}
			iLocal_5 = 1;
			break;
		case 1:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_8, 0))
				{
					iLocal_5 = 2;
				}
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_8, 1))
			{
				iLocal_5 = 2;
			}
			break;
		case 2:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				iLocal_7 = func_16(iLocal_9);
			}
			else
			{
				iLocal_6 = func_17(iLocal_9, iLocal_8);
				iLocal_10 = func_18();
				if (iLocal_10 == -1)
				{
					iLocal_5 = 6;
					return;
				}
			}
			if (func_19(iLocal_6) || func_20(iLocal_7))
			{
				iLocal_5 = 3;
			}
			else
			{
				iLocal_5 = 6;
				return;
			}
			break;
		case 3:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				func_21(iLocal_7, 1, 1, 0, 0);
				iLocal_5 = 6;
			}
			else if (func_22())
			{
				iLocal_5 = 4;
			}
			break;
		case 4:
			if (func_23())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1415419.f_9721[iLocal_10 /*8*/].f_1, 523);
				iLocal_5 = 5;
				return;
			}
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425179[iLocal_10 /*8*/].f_1, false))
			{
				iLocal_5 = 5;
			}
			break;
		case 5:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425179[iLocal_10 /*8*/].f_1, false))
			{
				func_24();
				iLocal_5 = 6;
			}
			break;
		case 6:
			iLocal_0 = 0;
			return;
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_25(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_26(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_27(&iVar0);
	}
}

int func_12()
{
	return Global_1894899.f_2;
}

int func_13()
{
	return Global_40.f_4283.f_1;
}

bool func_14(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_28(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_28(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_28(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_28(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_15()
{
	if (func_29() && !func_30())
	{
		return true;
	}
	if (!func_14(Global_35, 0))
	{
		return true;
	}
	if (!func_14(iLocal_8, 0))
	{
		return true;
	}
	if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_8, iLocal_3))
	{
		return true;
	}
	if (!Global_1415419.f_4 && !bLocal_11)
	{
		return true;
	}
	return false;
}

int func_16(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("SC_CAMP_VIG_PEARSON_CALLOVER"):
		case joaat("WORLD_HUMAN_CAULDRON"):
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(260, 265 + 1);
			return iVar0;
		case joaat("SC_CAMP_VIG_FIRE_POKE"):
			return 13;
		case joaat("SC_CAMP_VIG_FIRE_BLOW"):
			return 12;
		case joaat("SC_CAMP_VIG_SORE_JOINTS_MALE"):
			return 18;
		case joaat("SC_CAMP_VIG_DUTCH_START_PHONOGRAPH"):
			return 20;
	}
	return -1;
}

int func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SC_AMB_VIG_VOMIT_WALL"):
			if (PED::IS_PED_MALE(iParam1))
			{
				return 26;
			}
			else
			{
				return 25;
			}
			break;
	}
	return -1;
}

int func_18()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!Global_1425179[iVar0 /*8*/].f_2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_19(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

int func_21(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_31(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19574)
	{
		if (func_32(iVar0))
		{
		}
		else
		{
			Global_1327590.f_19574[iVar0 /*8*/] = iParam0;
			Global_1327590.f_19574[iVar0 /*8*/].f_7 = iParam1;
			Global_1327590.f_19574[iVar0 /*8*/].f_3 = iParam2;
			Global_1327590.f_19574[iVar0 /*8*/].f_1 = iParam3;
			Global_1327590.f_19574[iVar0 /*8*/].f_2 = iParam4;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_22()
{
	struct<12> /*96*/ sVar0;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[iLocal_6 /*12*/]);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(Global_1415419.f_19[iLocal_6 /*12*/]))
	{
		func_33(iLocal_6);
		sVar0 = -1;
		sVar0.f_11 = -1;
		sVar0.f_0 = iLocal_6;
		sVar0.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) /*3*/ };
		sVar0.f_4 = { 0.0f, 0.0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) /*3*/ };
		sVar0.f_10 = 1;
		sVar0.f_8 = iLocal_8;
		Global_1425179[iLocal_10 /*8*/] = iLocal_6;
		Global_1425179[iLocal_10 /*8*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Global_1415419.f_19[iLocal_6 /*12*/], &sVar0, 13, (1 << 10));
		Global_1425179[iLocal_10 /*8*/].f_2 = 1;
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[iLocal_6 /*12*/]);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_23()
{
	if (func_29() && !func_30())
	{
		return true;
	}
	if (!func_14(Global_35, 0))
	{
		return true;
	}
	return false;
}

void func_24()
{
	Global_1425179[iLocal_10 /*8*/] = -1;
	Global_1425179[iLocal_10 /*8*/].f_1 = 0;
	Global_1425179[iLocal_10 /*8*/].f_2 = 0;
}

void func_25(int iParam0)
{
}

void func_26(int iParam0)
{
}

void func_27(int iParam0)
{
}

bool func_28(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_29()
{
	return Global_1898164.f_163;
}

bool func_30()
{
	return func_34(Global_1415419.f_3, 1);
}

bool func_31(int iParam0)
{
	if (func_35(iParam0))
	{
		return true;
	}
	if (func_36() == iParam0)
	{
		return true;
	}
	if (func_37(iParam0))
	{
		return true;
	}
	return false;
}

bool func_32(int iParam0)
{
	if (!func_38(iParam0))
	{
		return false;
	}
	return Global_1327590.f_19574[iParam0 /*8*/] != -1;
}

void func_33(int iParam0)
{
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_39();
	if (iParam0 <= 74)
	{
		Global_1415419.f_7 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1415419.f_8 = MISC::GET_GAME_TIMER();
	}
	func_40(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 12, 0, 0, 0, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_1++;
	Global_32074.f_2697++;
}

bool func_34(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_35(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19574)
	{
		if (func_41(iVar0) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_36()
{
	return Global_1327590.f_19615;
}

bool func_37(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_38(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < Global_1327590.f_19574);
}

var func_39()
{
	return Global_1899515;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_42(*uParam0);
	iVar1 = func_43(*uParam0);
	iVar2 = func_44(*uParam0);
	iVar3 = func_45(*uParam0);
	iVar4 = func_46(*uParam0);
	iVar5 = func_47(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_48(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_48(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	if (!bParam7)
	{
		iVar0 += iParam6;
	}
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_41(int iParam0)
{
	if (!func_38(iParam0))
	{
		return -1;
	}
	return Global_1327590.f_19574[iParam0 /*8*/];
}

var func_42(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_50(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_43(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_44(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_45(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_46(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_47(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_51(uParam0, iParam6);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_54(uParam0, iParam3);
	func_55(uParam0, iParam2);
	func_56(uParam0, iParam1);
}

int func_50(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*uParam0 |= (1 << 31);
	}
	else
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*uParam0 -= *uParam0 & (1 << 31);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 62914560;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_43(*uParam0);
	iVar1 = func_42(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 4063232;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= *uParam0 & 126976;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 4032;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 63;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

