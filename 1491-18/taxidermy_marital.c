#pragma region Local_Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> /*16*/ sLocal_3 = { 0, 0 } ;
	var uLocal_5 = 1;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	Vector3 vLocal_9 = { 0.0f, 0.0f, 0.0f };
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	iLocal_12 = sScriptParam_0.f_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
	{
		func_2(&sLocal_3);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_2(&sLocal_3);
	}
	iLocal_13 = sScriptParam_0.f_1;
	vLocal_9 = { TASK::_GET_SCENARIO_POINT_COORDS(sScriptParam_0.f_1, true) /*3*/ };
	iLocal_14 = func_3();
	iLocal_16 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_9);
	if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05") || iLocal_14 == joaat("TAXIDERMY_MARITAL_07"))
	{
		func_4(iLocal_14, &iLocal_15);
	}
	while (func_5())
	{
		if (func_6())
		{
			func_2(&sLocal_3);
		}
		if (iLocal_14 == joaat("TAXIDERMY_MARITAL_01"))
		{
			func_7(&sLocal_3);
		}
		if ((((iLocal_14 == joaat("TAXIDERMY_MARITAL_02") || iLocal_14 == joaat("TAXIDERMY_MARITAL_03")) || iLocal_14 == joaat("TAXIDERMY_MARITAL_04")) || iLocal_14 == joaat("TAXIDERMY_MARITAL_05")) || iLocal_14 == joaat("TAXIDERMY_MARITAL_06"))
		{
			func_8(&sLocal_3);
		}
		if (iLocal_14 != joaat("TAXIDERMY_MARITAL_07"))
		{
		}
		else
		{
			func_9(&sLocal_3);
		}
		BUILTIN::WAIT(0);
	}
	func_2(&sLocal_3);
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(var uParam0)
{
	if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05") || iLocal_14 == joaat("TAXIDERMY_MARITAL_07"))
	{
		func_10(uParam0);
	}
	else if (INTERIOR::IS_VALID_INTERIOR(iLocal_16))
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_16, func_11(iLocal_14, 11)) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_16, func_11(iLocal_14, 11)))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_16, func_11(iLocal_14, 11), true);
		}
	}
	if (iLocal_14 == joaat("TAXIDERMY_MARITAL_01"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_17))
		{
			TASK::_MAKE_OBJECT_CARRIABLE(iLocal_17);
		}
	}
	SCRIPTS::_0xE7282390542F570D(iLocal_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_13))
	{
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_13));
	}
	return COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("TAXIDERMY"), joaat("TAXIDERMY_MARITAL"));
}

void func_4(int iParam0, int iParam1)
{
	*iParam1 = COLLECTION::_COLLECTABLE_GET_IPL(iParam0);
}

bool func_5()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&sLocal_3);
		return false;
	}
	return true;
}

bool func_6()
{
	if (func_1() != -1)
	{
		return true;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	return false;
}

int func_7(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76) && func_14(52))
			{
				if (func_15() < 1)
				{
					func_16(joaat("TAXIDERMY_MARITAL_01"));
					func_17(joaat("TAXIDERMY_MARITAL_01"));
					func_18(joaat("TAXIDERMY_MARITAL_01"));
				}
				func_19(uParam0, 1);
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 1:
			if (func_15() == func_20() && !func_21(joaat("PROVISION_TM_SQUIRREL_STATUE") /* GXTEntry: "Squirrel Statue" */, 1, 0))
			{
				if ((func_15() == 6 && func_20() == 6) && func_22(joaat("TAXIDERMY_MARITAL_06")))
				{
					func_2(&sLocal_3);
				}
				else if (func_23(uParam0))
				{
					func_19(uParam0, 16);
				}
			}
			else if (func_24(0, 0, 1))
			{
				func_2(&sLocal_3);
			}
			else
			{
				func_19(uParam0, 2);
			}
			break;
		case 2:
			if (func_21(joaat("PROVISION_TM_SQUIRREL_STATUE") /* GXTEntry: "Squirrel Statue" */, 1, 0))
			{
				func_19(uParam0, 3);
			}
			break;
		case 3:
			func_25();
			func_19(uParam0, 4);
			break;
		case 4:
			if (func_26())
			{
				func_19(uParam0, 5);
			}
			break;
		case 5:
			if (func_27(&(sLocal_3.f_1), "COL_CTX_TAX_MARITAL_PLACE" /* GXTEntry: "Place Statue" */, vLocal_9, 0, joaat("INPUT_CONTEXT_X"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, joaat("SHORT_TIMED_EVENT"), 0))
			{
				if (func_15() == 2)
				{
					func_18(joaat("TAXIDERMY_MARITAL_02"));
					func_16(joaat("TAXIDERMY_MARITAL_02"));
				}
				else if (func_15() == 3)
				{
					func_18(joaat("TAXIDERMY_MARITAL_03"));
					func_16(joaat("TAXIDERMY_MARITAL_03"));
				}
				else if (func_15() == 4)
				{
					func_18(joaat("TAXIDERMY_MARITAL_04"));
					func_16(joaat("TAXIDERMY_MARITAL_04"));
				}
				else if (func_15() == 5)
				{
					func_18(joaat("TAXIDERMY_MARITAL_05"));
					func_16(joaat("TAXIDERMY_MARITAL_05"));
				}
				else if (func_15() == 6)
				{
					func_18(joaat("TAXIDERMY_MARITAL_06"));
					func_16(joaat("TAXIDERMY_MARITAL_06"));
				}
				else if (func_15() == 7)
				{
					func_18(joaat("TAXIDERMY_MARITAL_07"));
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1638.493f, -1361.41f, 83.4157f, 1.0f, 20000, 0.25f, 0, 40000.0f);
				func_28(48);
				func_29(0, 10);
				BUILTIN::SETTIMERA(0);
				func_19(uParam0, 6);
			}
			break;
		case 6:
			if (func_30(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) || BUILTIN::TIMERA() > 1000)
			{
				if (func_31(&sLocal_3, 0))
				{
					func_19(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_30(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				return 0;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			func_32(&sLocal_3, 0);
			if (func_33(&sLocal_3, 0, 1, 1, 1))
			{
				func_19(uParam0, 8);
			}
			break;
		case 8:
			if (func_34(joaat("PROVISION_TM_SQUIRREL_STATUE") /* GXTEntry: "Squirrel Statue" */, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0))
			{
				func_19(uParam0, 16);
			}
			break;
		case 16:
			iLocal_19 = 4;
			iLocal_18 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("S_SQUIRRELMARSTON01X"), -1638.0f, -1360.66f, 85.35f, 1 | iLocal_19);
			func_19(uParam0, 17);
			break;
		case 17:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_18))
			{
				iLocal_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_18));
				func_19(uParam0, 18);
			}
			break;
		case 18:
			if (iLocal_14 == joaat("TAXIDERMY_MARITAL_01"))
			{
				TASK::MAKE_OBJECT_NOT_CARRIABLE(iLocal_17);
			}
			func_19(uParam0, 10);
			break;
		case 10:
			break;
	}
	return 0;
}

int func_8(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76))
			{
				func_19(uParam0, 11);
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 11:
			if (func_21(joaat("PROVISION_TM_SQUIRREL_STATUE") /* GXTEntry: "Squirrel Statue" */, 1, 0))
			{
				func_2(uParam0);
			}
			else if (func_15() == func_20())
			{
				func_2(uParam0);
			}
			else if (func_15() == 2)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_02"))
				{
					if (func_24(0, 0, 1))
					{
						func_2(&sLocal_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 3)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_03"))
				{
					if (func_24(0, 0, 1))
					{
						func_2(&sLocal_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 4)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_04"))
				{
					if (func_24(0, 0, 1))
					{
						func_2(&sLocal_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 5)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05"))
				{
					if (func_24(0, 0, 1))
					{
						func_2(&sLocal_3);
					}
					else
					{
						func_19(uParam0, 13);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (func_15() == 6)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_06"))
				{
					if (func_24(0, 0, 1))
					{
						func_2(&sLocal_3);
					}
					else
					{
						func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			break;
		case 13:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (func_35(uParam0))
				{
					func_19(uParam0, 15);
				}
			}
			break;
		case 14:
			if (func_23(uParam0))
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_03"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL_CHIMNEY", true);
				}
				func_19(uParam0, 15);
			}
			break;
		case 15:
			if (func_21(joaat("PROVISION_TM_SQUIRREL_STATUE") /* GXTEntry: "Squirrel Statue" */, 1, 0))
			{
				func_28(48);
				func_29(0, 10);
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_03"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL_CHIMNEY", false);
				}
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05"))
				{
					func_19(uParam0, 19);
				}
				else
				{
					func_2(uParam0);
				}
			}
			break;
		case 19:
			break;
	}
	return 0;
}

int func_9(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76))
			{
				if ((func_15() == 6 && func_20() == 6) && func_22(joaat("TAXIDERMY_MARITAL_06")))
				{
					func_19(uParam0, 12);
				}
				else
				{
					func_2(uParam0);
				}
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 12:
			if (func_24(0, 0, 1))
			{
				func_2(&sLocal_3);
			}
			else
			{
				func_19(uParam0, 13);
			}
			break;
		case 13:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (func_35(uParam0))
				{
					func_19(uParam0, 15);
				}
			}
			break;
		case 15:
			if (func_21(joaat("PROVISION_TM_SQUIRREL_STATUE") /* GXTEntry: "Squirrel Statue" */, 1, 0))
			{
				func_28(48);
				func_29(0, 10);
				func_36(15, 1);
				func_17(joaat("TAXIDERMY_MARITAL_07"));
				func_19(uParam0, 19);
			}
			break;
		case 19:
			break;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (func_37(iLocal_15))
	{
		func_38(iLocal_15);
	}
	return 1;
}

char* func_11(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<8> /*64*/ sVar5;

	if (!func_39(17, &sVar0))
	{
		return "";
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&sVar5, &sVar0);
	return func_40(sVar5);
}

int func_12(var uParam0)
{
	return *uParam0;
}

bool func_13(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_41(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_14(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_42(iParam0))
	{
		return 0;
	}
	return func_41(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_15()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_43(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_MARITAL"))))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_16(int iParam0)
{
	Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/] = func_44();
	func_46(&(Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/]), 0, 0, func_45(iParam0, 16), func_45(iParam0, 17), 0, 0, 0);
}

void func_17(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_18(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_20()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_47(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_MARITAL"))))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_21(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_48(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_49(bParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_50(bParam0, 1))
		{
			return false;
		}
	}
	return func_51(bParam0, 0, bParam2) >= iParam1;
}

bool func_22(int iParam0)
{
	if (func_52(Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/]))
	{
		if (func_53(Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/], 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_23(var uParam0)
{
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(func_54(iLocal_14), 10.0f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_16))
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_16, func_11(iLocal_14, 11)))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_16, func_11(iLocal_14, 11)))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_16, func_11(iLocal_14, 11), 0);
			}
		}
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_16, func_11(iLocal_14, 11)))
	{
		return true;
	}
	return false;
}

bool func_24(int iParam0, bool bParam1, bool bParam2)
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
		if (func_55())
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
		iVar0 = func_56(Global_1898164.f_1[0 /*5*/]);
		if (func_42(iVar0) && func_57(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_58(Global_1898164.f_1[0 /*5*/]))
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

void func_25()
{
	STREAMING::REQUEST_MODEL(joaat("S_SQUIRRELMARSTON01X"), false);
}

bool func_26()
{
	return STREAMING::HAS_MODEL_LOADED(joaat("S_SQUIRRELMARSTON01X"));
}

bool func_27(var uParam0, char* sParam1, Vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_59(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_60(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, (1 << 30), 0, iParam18, 0, 0);
			func_61(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_62(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		else
		{
			if (func_63(vParam2))
			{
				return false;
			}
			*uParam0 = func_64(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		if (fParam8 != 0.0f)
		{
			func_65(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_66(1))
			{
				func_67(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_68(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_69(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_67(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_67(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0.0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_66(1))
		{
			func_67(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_59(*uParam0))
			{
				func_70(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_71(*uParam0, 1)) || (bParam17 && func_72(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0.0f)
			{
				func_73(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0.0f)
			{
				func_74(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_70(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_28(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_75(iParam0);
	fVar1 = func_76(iParam0);
	if ((Global_1347477.f_117 || !func_77(31)) || !func_78(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_79(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_57);
	}
	else if (iVar0 == 0)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_55);
	}
	else if (iVar0 == 2)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_56);
	}
	fVar1 *= (float)Global_1347477.f_182;
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_80(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_83(MISC::VAR_STRING(6, func_81(iParam0), fVar1), "itemtype_textures", func_82(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_29(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_84(&Global_0, 8);
	}
	if (!func_85() || func_1() != -1)
	{
		return;
	}
	func_84(&Global_0, 1);
}

bool func_30(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == joaat("SCRIPT_TASK_DRIVE_BY") && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_31(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2[iParam1]))
	{
		uParam0->f_2[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_86(iParam1), 0, 0, false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2[iParam1]))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2[iParam1], true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2[iParam1]);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2[iParam1], true, false))
	{
		return false;
	}
	if (!func_87(uParam0, iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (func_88())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2[iParam1], "JOHN", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2[iParam1], "squirrel", uParam0->f_5, 0);
			uParam0->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			break;
	}
	return true;
}

void func_32(var uParam0, int iParam1)
{
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2[iParam1], false))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_2[iParam1]);
	}
}

bool func_33(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_2[iParam1], func_89(iParam2)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2[iParam1], func_89(iParam2)))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_2[iParam1], func_89(iParam2));
			return false;
		}
	}
	if (bParam4)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2[iParam1], func_89(iParam2)))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_2[iParam1], func_89(iParam2), true);
			return true;
		}
	}
	return false;
}

bool func_34(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_48(bParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	bVar3 = func_90(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar3);
		iVar4 -= iParam1;
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_91(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_21(bParam0, 1, bParam4))
	{
		return false;
	}
	sVar5 = { func_92(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_51(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_51(bParam0, 0, 0) - iParam1) < 0)
		{
			func_34(bParam0, func_51(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_49(bParam0) == joaat("WEAPON"))
	{
		if (!func_93(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_94(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_95(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_91(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_96(bParam0, iParam1);
	return true;
}

bool func_35(var uParam0)
{
	func_97(iLocal_15);
	return true;
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_98(iParam0))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (!func_99(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_37(int iParam0)
{
	return iParam0 != 0;
}

void func_38(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

bool func_39(int iParam0, var uParam1)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

char* func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_41(int iParam0, bool bParam1)
{
	switch (func_101(iParam0))
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

bool func_42(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_43(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_44()
{
	return Global_1899515;
}

int func_45(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_39(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_102(*uParam0);
	iVar1 = func_103(*uParam0);
	iVar2 = func_104(*uParam0);
	iVar3 = func_105(*uParam0);
	iVar4 = func_106(*uParam0);
	iVar5 = func_107(*uParam0);
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
	iVar6 = func_108(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_108(iVar1, iVar0);
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
	func_109(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_47(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_48(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_49(bool bParam0)
{
	Vector3 vVar0;

	if (!func_48(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_50(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_48(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_90(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_110("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_111(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_112(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_113(iVar1);
				return true;
			}
			iVar3++;
		}
		func_113(iVar1);
	}
	return false;
}

int func_51(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_48(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_49(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_90(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_114(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(bParam2), bParam0, false);
	return iVar2;
}

bool func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_106(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_105(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_103(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_104(iParam0);
	if (iVar5 < 1 || iVar5 > func_108(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0, bool bParam1)
{
	return func_116(func_44(), iParam0, bParam1);
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TAXIDERMY_MARITAL_02"):
			return { -1636.28f, -1354.913f, 84.3f };
		case joaat("TAXIDERMY_MARITAL_03"):
			return { -1637.18f, -1359.381f, 84.3f };
		case joaat("TAXIDERMY_MARITAL_04"):
			return { -1646.48f, -1355.488f, 86.7f };
		case joaat("TAXIDERMY_MARITAL_06"):
			return { -1599.82f, -1417.758f, 84.7f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_55()
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

int func_56(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_118(func_117(iParam0));
}

bool func_57(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_58(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_59(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((Global_1945188[iParam0 /*18*/].f_1 & 2) == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

int func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_119(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945188[iVar0 /*18*/].f_11 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945188[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; // curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_120(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_61(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_59(iParam0))
	{
		return;
	}
	if (fParam1 <= 0.0f)
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_62(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_119(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_120(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0.0f, 0.0f, 0.0f, 0.0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_63(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_64(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_63(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0.0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_119(iVar0, 2))
		{
			if (func_122(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_120(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_65(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_59(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

int func_66(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_59(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (bParam1)
	{
		func_123(iParam0, 4);
		func_124(iVar0, 1);
		func_125(iVar0, 1);
	}
	else
	{
		func_126(iParam0, 4);
		func_125(iVar0, 0);
	}
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_59(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	func_124(iVar0, bParam1);
}

bool func_69(int iParam0, bool bParam1)
{
	if (bParam1 && !func_59(iParam0))
	{
		return false;
	}
	return !func_119(iParam0, 4);
}

void func_70(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_59(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_121(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_127(iVar0);
	*uParam0 = 0;
}

bool func_71(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_59(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_72(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_59(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_73(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_128(iParam0);
	if (bParam3)
	{
		func_129(iParam0, sParam1, iParam2);
	}
}

void func_74(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_130(iParam0, sParam4, iParam5);
	}
	func_131(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_75(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_76(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5.0f;
		case 2:
			return 20.0f;
		case 3:
			return 10.0f;
		case 4:
			return 10.0f;
		case 5:
			return 20.0f;
		case 6:
			return 10.0f;
		case 7:
			return 15.0f;
		case 8:
			return 15.0f;
		case 9:
			return 20.0f;
		case 10:
			return 5.0f;
		case 11:
			return 5.0f;
		case 12:
			return 10.0f;
		case 13:
			return 20.0f;
		case 14:
			return 30.0f;
		case 15:
			return 5.0f;
		case 16:
			return 5.0f;
		case 17:
			return 3.0f;
		case 18:
			return 20.0f;
		case 19:
			return func_132(iParam0);
		case 20:
			return 25.0f;
		case 21:
			return 50.0f;
		case 22:
			return 100.0f;
		case 23:
			return 150.0f;
		case 24:
			return 20.0f;
		case 25:
			return 10.0f;
		case 26:
			return 20.0f;
		case 27:
			return 20.0f;
		case 28:
			return 20.0f;
		case 29:
			return 20.0f;
		case 30:
			return func_132(iParam0);
		case 31:
			return 25.0f;
		case 32:
			return 50.0f;
		case 33:
			return 100.0f;
		case 34:
			return 150.0f;
		case 35:
			return 1.0f;
		case 36:
			return 5.0f;
		case 37:
			return 1.0f;
		case 38:
			return 3.0f;
		case 39:
			return 1.0f;
		case 40:
			return 1.0f;
		case 41:
			return 1.0f;
		case 42:
			return 5.0f;
		case 43:
			return 10.0f;
		case 49:
			return 20.0f;
		case 44:
			return 5.0f;
		case 45:
			return 5.0f;
		case 46:
			return 10.0f;
		case 47:
			return 10.0f;
		case 48:
			return 5.0f;
		case 50:
			return func_132(iParam0);
		case 51:
			return 25.0f;
		case 52:
			return 50.0f;
		case 53:
			return 100.0f;
		case 54:
			return 150.0f;
		case 55:
			return 5.0f;
		default:
			break;
	}
	return 0.0f;
}

bool func_77(int iParam0)
{
	if (!func_133(iParam0))
	{
		return false;
	}
	return func_134(iParam0);
}

bool func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_77(18);
		case 2:
			return func_77(20);
		case 1:
			return func_77(19);
		default:
			break;
	}
	return true;
}

int func_79(int iParam0)
{
	return func_135(Global_40.f_11095.f_11[iParam0]);
}

void func_80(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_77(31))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_79(iParam0);
	if (func_136(iParam0) & func_137(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_138(fVar1, fParam1);
			if (fParam1 > (float)func_139(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_141(func_140(iParam0), 0);
					}
					func_142(iParam0, iVar2, iVar3);
					func_143(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_81(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN" /* GXTEntry: "+~1~" */;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_83(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	int iVar20;

	sVar0 = -2;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam7;
	sVar0.f_0 = 450;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = iParam2;
	sVar13.f_4 = iParam3;
	sVar13.f_5 = iParam4;
	sVar13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&sVar0, &sVar13, bParam8);
	func_144(sParam0, sParam1, iParam2);
	return iVar20;
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_85()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

char* func_86(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@rcm@txd@ig@ig2_squirrel_on_mantel";
			break;
	}
	return sVar0;
}

bool func_87(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				uParam0->f_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("S_SQUIRRELMARSTON01X"), -1637.467f, -1365.527f, 83.4029f, true, true, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_88()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

char* func_89(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_IG2_MAIN_ACTION";
			break;
		case 1:
			sVar0 = "pl_IG2_PLACE_SQUIRREL";
			break;
		case 2:
			sVar0 = "pl_IG2_PLACE_SQUIRREL2";
			break;
		case 3:
			sVar0 = "pl_IG2_PLACE_SQUIRREL3";
			break;
		case 4:
			sVar0 = "pl_IG2_PLACE_SQUIRREL4";
			break;
	}
	return sVar0;
}

bool func_90(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_48(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_49(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_145(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_146(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

void func_91(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> /*16*/ sVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (bParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_48(bParam0, 0))
	{
		return;
	}
	if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_147())
	{
		func_148(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_149(iVar1 == 1, "ITEM_GET_PUMP" /* GXTEntry: "~1~" */, "ITEM_GET_PUMP_MULT" /* GXTEntry: "~2~x ~1~" */));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_149(iVar1 == 1, "ITEM_GET_PUMP" /* GXTEntry: "~1~" */, "ITEM_GET_PUMP_MULT" /* GXTEntry: "~2~x ~1~" */));
		}
		else if (bParam2 && func_150(bParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT" /* GXTEntry: "~2~x READ ~1~" */);
		}
		bVar0 = true;
	}
	iVar6 = func_49(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		sVar7.f_0 = "ITEMTYPE_UPGRADES";
		sVar7.f_1 = "itemtype_textures";
	}
	else if (!func_151(bParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		sVar7.f_0 = "_PLACEHOLDER";
		sVar7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(sVar7.f_0) == 121560594)
	{
		sVar7.f_0 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar7.f_0))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_153(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_152(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_145(bParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_152(bParam0));
	}
	func_83(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> /*16*/ func_92(bool bParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_48(bParam0, 0))
	{
		return sVar0;
	}
	if (func_145(bParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_1() == -1)
		{
			if (func_145(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_154(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_154(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_145(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_154(joaat("MEDICINE_ITEMS"));
	}
	if (func_145(bParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_154(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

bool func_93(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;
	struct<10> /*80*/ sVar20;
	struct<4> /*32*/ sVar34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	sVar0 = { func_155(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_157(&sVar0, func_156(0));
	}
	if (!func_158(&sVar0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	sVar20.f_9 = joaat("SLOTID_NONE");
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_111(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_159(bParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_113(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_94(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_48(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_160(bParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_161(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_162(bParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_159(bParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

bool func_95(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_115(bParam0));
}

void func_96(bool bParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_145(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_163(bParam0, iParam1);
		}
		if (func_145(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_145(bParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_164(bParam0, iParam1, 1, 0);
		}
	}
}

void func_97(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

bool func_98(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_99(int iParam0, var uParam1, var uParam2)
{
	if (!func_98(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_101(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_165(iParam0);
}

int func_102(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_166(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_103(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_104(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_105(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_106(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_107(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_108(int iParam0, int iParam1)
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

void func_109(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_167(uParam0, iParam6);
	func_168(uParam0, iParam5);
	func_169(uParam0, iParam4);
	func_170(uParam0, iParam3);
	func_171(uParam0, iParam2);
	func_172(uParam0, iParam1);
}

bool func_110(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_115(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_111(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_112(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_113(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_114(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_155(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_157(&sVar0, func_156(0));
	}
	if (!func_158(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_113(iVar18);
	return iVar19;
}

int func_115(bool bParam0)
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_116(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_52(iParam1) || !func_52(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_117(int iParam0)
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

int func_118(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_119(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_120(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1945188[iParam0 /*18*/].f_4 = iParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = iParam10;
	Global_1945188[iParam0 /*18*/].f_11 = iParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0.0f, 0.0f, 0.0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, true);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1945188[iParam0 /*18*/].f_3 = iVar0;
	func_124(iParam0, 1);
	func_125(iParam0, 1);
	func_126(iParam0, 128);
}

int func_121(int iParam0)
{
	return iParam0;
}

bool func_122(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0.0f)
	{
		fParam6 = 0.0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_124(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_119(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_125(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_126(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_127(int iParam0)
{
	if (!func_173(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);
	}
	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = 0.0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1.0f;
}

void func_128(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_66(1) < iParam0)
	{
		iParam0 = func_66(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_154(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_129(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND" /* GXTEntry: "-~1$~" */;
	}
	func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_130(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN" /* GXTEntry: "~1$~" */;
	}
	func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_131(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_174())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_83(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN" /* GXTEntry: "Total Take ~1$~" */, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_175(iVar0);
			func_176(iVar0, 0, 0);
		}
		func_83(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN" /* GXTEntry: "Your Share ~1$~" */, iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_177(func_154(joaat("CAREER_CASH")), iVar1);
	}
}

float func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_75(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_135(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_178(iVar6) - func_178(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

bool func_133(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_135(float fParam0)
{
	if (fParam0 <= (float)-1)
	{
		return -1;
	}
	if (fParam0 < (float)50)
	{
		return 0;
	}
	if (fParam0 < (float)100)
	{
		return 1;
	}
	if (fParam0 < (float)200)
	{
		return 2;
	}
	if (fParam0 < (float)350)
	{
		return 3;
	}
	if (fParam0 < (float)550)
	{
		return 4;
	}
	if (fParam0 < (float)800)
	{
		return 5;
	}
	if (fParam0 < (float)1100)
	{
		return 6;
	}
	return 7;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_138(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_135(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_178(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_178(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4.0f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4.0f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_139(int iParam0)
{
	int iVar0;

	if (func_179(iParam0, &iVar0))
	{
		return func_178(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_180())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_180())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_180())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_181(iParam0, &iVar0, &iVar1);
	if (!func_182(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_183(iVar0, iVar1);
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> /*48*/ sVar10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST" /* GXTEntry: "~1~" */;
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY" /* GXTEntry: "~1~% to Level ~2~" */, iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST" /* GXTEntry: "~1~ Increased" */;
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY" /* GXTEntry: "Level ~1~" */, iVar3);
		bVar2 = true;
	}
	iVar3 += func_184(iParam0);
	sVar4 = func_186(func_185(iVar3, iParam2));
	sVar6 = func_187(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_188(iParam0));
	iVar8 = func_189(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_190(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_192(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, func_191(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_143(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_144(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_145(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, joaat("TAG_ITEM_PROPERTY")))
	{
		return true;
	}
	return false;
}

void func_146(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX") /* GXTEntry: "Revolver Cartridges - Regular" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED") /* GXTEntry: "Opened Revolver Cartridges" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS") /* GXTEntry: "Revolver Cartridges - Express" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS"); /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Revolver Cartridges - High Velocity" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY"); /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX") /* GXTEntry: "Pistol Cartridges - Regular" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED") /* GXTEntry: "Opened Pistol Cartridges" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS") /* GXTEntry: "Pistol Cartridges - Express" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS"); /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Pistol Cartridges - High Velocity" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY"); /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Regular" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED") /* GXTEntry: "Opened Rifle Cartridges" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS") /* GXTEntry: "Rifle Cartridges - Express" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS"); /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Rifle Cartridges - High Velocity" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY"); /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX") /* GXTEntry: "Repeater Cartridges - Regular" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED") /* GXTEntry: "Opened Repeater Cartridges" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS") /* GXTEntry: "Repeater Cartridges - Express" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS"); /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Repeater Cartridges - High Velocity" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY"); /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX") /* GXTEntry: "Shotgun Shells - Regular" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED") /* GXTEntry: "Opened Shotgun Shells" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG") /* GXTEntry: "Shotgun - Slug" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG"); /* GXTEntry: "Shotgun - Slug" */
			break;
		case joaat("AMMO_22_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Varmint" */:
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22"); /* GXTEntry: "Rifle Cartridges - Varmint" */
			break;
	}
}

bool func_147()
{
	return !Global_1911774;
}

void func_148(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = bParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_149(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_150(bool bParam0, int iParam1)
{
	if (!func_48(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_151(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &sVar3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/]))
			{
				Jump @227; // curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(sVar3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(sVar3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && sVar3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; // curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; // curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; // curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { sVar3.f_2[iVar0 /*3*/] /*3*/ };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_152(bool bParam0)
{
	if (!func_48(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

char* func_153(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING" /* GXTEntry: "~HC_~1p~~~2~~s~" */, MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<2> /*16*/ func_154(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

struct<18> /*144*/ func_155(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<18> /*144*/ sVar0;

	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_3 = -1;
	sVar0.f_4 = -1;
	sVar0.f_5 = -1;
	sVar0.f_6 = -1;
	sVar0.f_7 = -1;
	sVar0.f_8 = -1;
	sVar0.f_13 = -1;
	sVar0.f_14 = -1;
	sVar0.f_15 = -1;
	sVar0.f_16 = -1;
	sVar0.f_17 = -1;
	if (bParam0 != 0)
	{
		sVar0.f_0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
	{
		sVar0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
	{
		sVar0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
	{
		sVar0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		sVar0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		sVar0.f_5 = iParam5;
	}
	return sVar0;
}

struct<4> /*32*/ func_156(bool bParam0)
{
	int iVar0;

	iVar0 = func_115(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_162(joaat("CARRIED_WEAPONS"), func_193(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_162(joaat("CARRIED_WEAPONS"), func_193(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_162(joaat("CARRIED_WEAPONS"), func_193(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_157(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_158(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_115(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_159(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_194(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_195(*uParam1, &sVar0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = sVar0.f_11;
	}
	else if (iParam3 > sVar0.f_11)
	{
		iParam3 = sVar0.f_11;
	}
	if (!func_95(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_115(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<5> /*40*/ func_160(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_193(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_49(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_162(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_156(bParam1) /*4*/ };
			if (bParam2 && func_196(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_197(bParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else if (!func_197(bParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
				else if (func_198(bParam0, &sVar5, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			sVar0.f_4 = joaat("SLOTID_ACTIVE_HORSE");
			break;
		case joaat("EMOTE"):
			sVar0.f_4 = -813824107;
			sVar0 = { func_199(bParam1) /*4*/ };
			switch (func_200(bParam0))
			{
				case 664784405:
					sVar0.f_4 = -1150938404;
					break;
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_DANCE");
					break;
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_GREET");
					break;
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_TAUNT");
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_201(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_162(joaat("KIT_CAMP") /* GXTEntry: "Camp" */, sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP") /* GXTEntry: "Camp" */);
			}
			else if (func_201(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_162(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_195(sVar0, &sVar27, bParam1, 0))
				{
					sVar0.f_4 = 0;
				}
				else
				{
					sVar0 = { sVar27.f_5 /*4*/ };
					sVar0.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else
			{
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

bool func_161(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_194(bParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_95(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_115(bParam4), bParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> /*32*/ func_162(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_48(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_115(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

void func_163(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_1() == -1)
	{
		if (func_202(43))
		{
			if (func_145(bParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_01")))
			{
				func_203(joaat("EXOTIC_STAGE_01"));
				if (func_204() == 0)
				{
					func_29(0, 10);
					iVar0 = func_205(bParam0, iParam1, 1);
					if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_206(bParam0) < func_207(bParam0))
						{
							func_208(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_202(44))
		{
			if (func_145(bParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_02")))
			{
				func_203(joaat("EXOTIC_STAGE_02"));
				if (func_204() == 1)
				{
					func_29(0, 10);
					iVar0 = func_205(bParam0, iParam1, 2);
					if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_206(bParam0) < func_207(bParam0))
						{
							func_208(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_202(45))
		{
			if (func_145(bParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_03")))
			{
				func_203(joaat("EXOTIC_STAGE_03"));
				if (func_204() == 2)
				{
					func_29(0, 10);
					iVar0 = func_205(bParam0, iParam1, 4);
					if (((bParam0 == joaat("PROVISION_GATOR_EGG") || bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_206(bParam0) < func_207(bParam0))
						{
							func_208(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_202(46))
		{
			if (func_145(bParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_04")))
			{
				func_203(joaat("EXOTIC_STAGE_04"));
				if (func_204() == 3)
				{
					func_29(0, 10);
					iVar0 = func_205(bParam0, iParam1, 8);
					if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_206(bParam0) < func_207(bParam0))
						{
							func_208(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_202(47))
		{
			if (func_145(bParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_05")))
			{
				func_203(joaat("EXOTIC_STAGE_05"));
				if (func_204() == 4)
				{
					func_29(0, 10);
					iVar0 = func_205(bParam0, iParam1, 16);
					if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_206(bParam0) < func_207(bParam0))
						{
							func_208(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_164(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_21(func_209(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_210(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_211(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_165(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_166(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*uParam0 |= (1 << 31);
	}
	else
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*uParam0 -= (*uParam0 & (1 << 31));
	}
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 62914560);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_103(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_108(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= (*uParam0 & 4063232);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_170(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 126976);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_171(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 4032);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 63);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_173(int iParam0)
{
	return func_119(iParam0, 2);
}

bool func_174()
{
	if (func_213())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_175(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_214((Global_40.f_4283.f_325 + iParam0));
}

void func_176(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN" /* GXTEntry: "Gang Share ~1$~" */;
	}
	if (func_174())
	{
		func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_177(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_179(int iParam0, int iParam1)
{
	return false;
}

bool func_180()
{
	return false;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_182(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_215(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_216(iParam0))
	{
		return false;
	}
	if (func_217(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_218(iParam0, 1)) || func_219((1 << 15)))
	{
		if (!func_218(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_220())
	{
		return false;
	}
	return true;
}

void func_183(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_185(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	strcpy_s(&cVar0, 32, "TOAST_RPG_LEVEL_");
	StringIntConCat(&cVar0, iParam0, 32);
	strcat_s(&cVar0, 32, "_");
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_186(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA" /* GXTEntry: "Stamina" */;
		case 0:
			return "RPG_HEALTH" /* GXTEntry: "Health" */;
		case 2:
			return "RPG_DEADEYE" /* GXTEntry: "Dead Eye" */;
		default:
			break;
	}
	return "";
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("STATS_HEALTH");
		case 1:
			return joaat("STATS_STAMINA");
		case 2:
			return joaat("STATS_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_192(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam7;
	sVar0.f_1 = sParam8;
	sVar0.f_2 = sParam9;
	sVar0.f_3 = iParam11;
	sVar0.f_4 = iParam4;
	sVar0.f_4.f_1 = iParam6;
	sVar0.f_4.f_2 = sParam5;
	sVar13.f_7 = 1;
	sVar13.f_0 = iParam10;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&sVar0, &sVar13, bParam12, bParam13);
	return iVar21;
}

struct<4> /*32*/ func_193(bool bParam0)
{
	return func_162(joaat("CHARACTER"), func_221(), joaat("SLOTID_NONE"), bParam0);
}

bool func_194(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_195(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_115(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_196(bool bParam0, bool bParam1)
{
	if (func_200(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_77(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_197(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_222(bParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_198(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_223(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_199(bool bParam0)
{
	int iVar0;

	iVar0 = func_115(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_162(joaat("EMOTE_ITEM"), func_193(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_162(joaat("EMOTE_ITEM"), func_193(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_200(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_48(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_201(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_200(bParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_202(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_41(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_203(int iParam0)
{
	if (!func_224(iParam0))
	{
		func_226(func_225(iParam0));
	}
}

int func_204()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_224(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_205(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE"); /* GXTEntry: "Little Egret Plume" */
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH"); /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY"); /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"); /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER"); /* GXTEntry: "Heron Plume" */
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"); /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN"); /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG"); /* GXTEntry: "Gator Egg" */
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"); /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR"); /* GXTEntry: "Cigar Orchid" */
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST"); /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER"); /* GXTEntry: "Spoonbill Plume" */
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"); /* GXTEntry: "Night Scented Orchid" */
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL"); /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER"); /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL"); /* GXTEntry: "Clamshell Orchid" */
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS"); /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS"); /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS"); /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_206(bVar9);
	iVar2 = func_206(bVar10);
	iVar3 = func_206(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_206(bVar12);
	}
	iVar5 = func_207(bVar9);
	iVar6 = func_207(bVar10);
	iVar7 = func_207(bVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_207(bVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 += iVar8;
		}
		else
		{
			iVar0 += iVar4;
		}
	}
	return iVar0;
}

int func_206(bool bParam0)
{
	int iVar0;

	if (func_21(bParam0, 1, 0))
	{
		iVar0 = func_51(bParam0, 0, 0);
	}
	return iVar0;
}

int func_207(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE") /* GXTEntry: "Little Egret Plume" */:
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH") /* GXTEntry: "Reddish Egret Plume" */:
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY") /* GXTEntry: "Snowy Egret Plume" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT") /* GXTEntry: "Lady of the Night Orchid" */:
			return 15;
		case joaat("PROVISION_HERON_FEATHER") /* GXTEntry: "Heron Plume" */:
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER") /* GXTEntry: "Lady Slipper Orchid" */:
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN") /* GXTEntry: "Moccasin Flower Orchid" */:
			return 10;
		case joaat("PROVISION_GATOR_EGG") /* GXTEntry: "Gator Egg" */:
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") /* GXTEntry: "Acuna\'s Star Orchid" */:
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR") /* GXTEntry: "Cigar Orchid" */:
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST") /* GXTEntry: "Ghost Orchid" */:
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER") /* GXTEntry: "Spoonbill Plume" */:
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED") /* GXTEntry: "Night Scented Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL") /* GXTEntry: "Rat Tail Orchid" */:
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER") /* GXTEntry: "Spider Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL") /* GXTEntry: "Clamshell Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS") /* GXTEntry: "Dragon\'s Mouth Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS") /* GXTEntry: "Queen\'s Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS") /* GXTEntry: "Sparrow\'s Egg Orchid" */:
			return 10;
		default:
			break;
	}
	return 0;
}

void func_208(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	Vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_85() && (func_227(38) || func_202(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02" /* GXTEntry: @"Phineas T. Ramsbottom is a keen collector and trader of cigarette cards which are found inside Premium Cigarette packs and combine to create 12-card sets each with its own theme. He informed you that these cards are valuable to the right buyer and is willing to pay well for each completed set mailed to him." */;
				sVar5 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO"); /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01" /* GXTEntry: "You have found a cigarette card. Look out for more of these on your travels. You " +
    "can collect them to create 12-card sets or some stores will buy them off you." */;
				sVar5 = "COL_CC_INTRO_PRE" /* GXTEntry: "A New Hobby" */;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE"); /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE" /* GXTEntry: "Cigarette Cards" */;
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = 12;
			iVar14 = joaat("CIGARETTE_CARDS");
			break;
		case 39:
			if (func_85() && (func_227(39) || func_202(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02" /* GXTEntry: "Deborah MacGuiness has requested your help in finding dinosaur bones.~n~The locat" +
    "ion of each bone can be mailed back to Deborah from any Post Office." */;
				sVar5 = "COL_DB_INTRO" /* GXTEntry: "A Test of Faith" */;
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH"); /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = joaat("COL_DB_INTRO"); /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01" /* GXTEntry: "You have found a dinosaur bone. Look out for more of these on your travels. They " +
    "might be of use to you at some point." */;
				sVar5 = "COL_DB_INTRO_PRE" /* GXTEntry: "Digging up the Past" */;
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE"); /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE" /* GXTEntry: "Dinosaur Bones" */;
			vVar6 = { 122.7758f, -185.4978f, 116.4383f /*3*/ };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC" /* GXTEntry: "Algernon Wasp, a fashion designer and collector of exotic flora and fauna, asks f" +
    "or assistance in tracking down some rare items for several commissions." */;
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC" /* GXTEntry: "Algernon Wasp asks for further materials to be used in a commission for Baroness " +
    "Von Buchwald." */;
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC" /* GXTEntry: "The Contessa Di Bellagio has commissioned Wasp to find materials for a display ca" +
    "binet of curios." */;
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC" /* GXTEntry: "Wasp needs more orchids for a display cabinet that he is making for a girl in New" +
    " York." */;
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC" /* GXTEntry: "Having fallen for the Contessa, Algernon needs more orchids to woo her." */;
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE" /* GXTEntry: "Exotics" */;
			sVar5 = "COL_EX_INTRO" /* GXTEntry: "Duchesses and Other Animals" */;
			vVar6 = { 2585.668f, -1009.616f, 44.97972f /*3*/ };
			iVar9 = func_45(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO"); /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_85() && (func_227(41) || func_202(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01" /* GXTEntry: "Jeremy Gill has asked if you can catch and post 13 Legendary Fish to him. They ar" +
    "e spread around in various fishing spots.~n~Once caught, the Legendary Fish can " +
    "be mailed from any Post Office." */;
			sVar4 = "COL_LF_TITLE" /* GXTEntry: "Legendary Fish" */;
			sVar5 = "COL_LF_INTRO" /* GXTEntry: "A Fisher of Fish" */;
			vVar6 = { 337.3075f, -684.5404f, 41.8362f /*3*/ };
			iVar9 = 13;
			iVar14 = joaat("LEGENDARY_FISH");
			iVar11 = joaat("BLIP_RC_JEREMY_GILL"); /* GXTEntry: "Jeremy Gill" */
			iVar13 = joaat("COL_LF_INTRO"); /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_85() && (func_227(49) || func_202(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02" /* GXTEntry: "Francis Sinclair asked you to help find rock carvings hidden throughout the world" +
    ", for reasons he can\'t explain.~n~Once found the carving locations can be mailed" +
    " back to Francis from any Post Office." */;
				sVar5 = "COL_RC_INTRO" /* GXTEntry: "Geology for Beginners" */;
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES"); /* GXTEntry: "Francis Sinclair" */
				iVar13 = joaat("COL_RC_INTRO"); /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01" /* GXTEntry: "You have found a mysterious rock carving. Look out for more of these on your trav" +
    "els. Maybe one day you will discover some deeper meaning behind them." */;
				sVar5 = "COL_RC_INTRO_PRE" /* GXTEntry: "Rock Carvings" */;
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE"); /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE" /* GXTEntry: "Rock Carvings" */;
			vVar6 = { -2178.646f, -245.6886f, 191.1569f /*3*/ };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01" /* GXTEntry: "You found a poster requesting perfect animal carcasses for use in a Wildlife Art " +
    "Exhibition. The carcasses were to be sent to Ms L. Hobbs from a Post Office." */;
			sVar4 = "COL_TX_TITLE" /* GXTEntry: "Wildlife Art Exhibition" */;
			sVar5 = "COL_TX_INTRO" /* GXTEntry: "A Better World, A New Friend" */;
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = func_45(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS"); /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = joaat("COL_TX_INTRO"); /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_228(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_229(iParam0, iVar13, iVar14))
	{
	}
	if (func_230(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_231(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_232(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_233(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_234(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

bool func_209(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_39(17, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_210(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_209(iParam1, 5) || bParam0 == func_209(iParam1, 6)) || bParam0 == func_209(iParam1, 7)) || bParam0 == func_209(iParam1, 8)) || bParam0 == func_209(iParam1, 9))
	{
		func_235(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_208(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_236(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_211(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_209(iParam1, 5) || bParam0 == func_209(iParam1, 6)) || bParam0 == func_209(iParam1, 7)) || bParam0 == func_209(iParam1, 8)) || bParam0 == func_209(iParam1, 9))
	{
		if (func_235(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_208(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_236(51, 0, 0, iVar0, func_45(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_208(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_236(51, 0, 0, iVar0, func_45(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_212(int iParam0)
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

bool func_213()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_214(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_154(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

bool func_215(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_216(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_218(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_218(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_218(iParam0, (1 << 16)) && !func_218(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_218(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_218(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_218(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_219(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_220()
{
	return Global_1905944.f_5694;
}

struct<4> /*32*/ func_221()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_222(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_48(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_162(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_115(bParam6), &sVar0, false);
	return iVar4;
}

bool func_223(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_115(0);
	*uParam1 = { func_162(bParam0, func_156(0), iParam3, 0) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_224(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EXOTIC_STAGE_01"):
			return 1;
		case joaat("EXOTIC_STAGE_02"):
			return 2;
		case joaat("EXOTIC_STAGE_03"):
			return 4;
		case joaat("EXOTIC_STAGE_04"):
			return 8;
		case joaat("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_226(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_227(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_42(iParam0))
	{
		return false;
	}
	return func_237(Global_1347702[iParam0 /*49*/].f_15);
}

char* func_228(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE" /* GXTEntry: "You have completed Smoking and Other Hobbies" */;
			}
			else if (func_238() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */, func_239(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Found" */, func_240(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION" /* GXTEntry: "Read invitation from Deborah" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT" /* GXTEntry: "Visit Deborah MacGuiness" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE" /* GXTEntry: "You have completed A Test of Faith" */;
			}
			else if (func_241() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Dinosaur Bones Posted" */, func_242(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Dinosaur Bones Found" */, func_241(), 30);
			}
			break;
		case joaat("EXOTIC_ITEMS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE" /* GXTEntry: "You have completed Duchesses and Other Animals" */;
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ" /* GXTEntry: "~1~ of ~2~ Exotic Items Collected" */, sParam4, sParam5);
			}
			break;
		case joaat("LEGENDARY_FISH"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION" /* GXTEntry: "Read invitation from Jeremy" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT" /* GXTEntry: "Visit Jeremy Gill" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE" /* GXTEntry: "You have completed A Fisher of Fish" */;
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ" /* GXTEntry: "~1~ of ~2~ Legendary Fish Caught and Posted" */, func_243(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION" /* GXTEntry: "Read invitation from Francis" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT" /* GXTEntry: "Visit Francis Sinclair" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE" /* GXTEntry: "You have completed Geology for Beginners" */;
			}
			else if (func_244() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Rock Faces Posted" */, func_245(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Rock Faces Found" */, func_244(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION" /* GXTEntry: "Read letter from Ms. Hobbs" */);
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION" /* GXTEntry: "Ms. Hobbs has gone on vacation" */);
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION" /* GXTEntry: "Read invitation from Ms. Hobbs" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT" /* GXTEntry: "Visit Ms. Hobbs" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE" /* GXTEntry: "You have completed Wildlife Art Exhibition" */;
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ" /* GXTEntry: "~1~ of ~2~ Carcasses Collected" */, sParam4, func_45(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_229(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE") /* GXTEntry: "A New Hobby" */))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE") /* GXTEntry: "A New Hobby" */);
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE") /* GXTEntry: "Digging up the Past" */))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE") /* GXTEntry: "Digging up the Past" */);
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE") /* GXTEntry: "Rock Carvings" */))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE") /* GXTEntry: "Rock Carvings" */);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_230(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_231(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_232(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == joaat("CIGARETTE_CARDS"))
		{
			bVar2 = func_246(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_21(bVar2, 1, 0) || func_248(func_247(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_249(func_246(iVar0))), func_249(func_246(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_241() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_250(iVar0)), func_250(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_242() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_250(iVar0)), func_250(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_250(iVar0)), func_250(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			bVar2 = func_209(iParam3, func_251(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_206(bVar2) - iParam7) >= func_45(iParam3, func_252(iVar0));
				}
				else
				{
					bVar1 = func_206(bVar2) >= func_45(iParam3, func_252(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_206(bVar2) + iParam7) >= func_45(iParam3, func_252(iVar0));
			}
			else
			{
				bVar1 = func_206(bVar2) >= func_45(iParam3, func_252(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_253(bVar2)), func_253(bVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_254(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_255(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_255(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_244() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_256(iVar0)), func_256(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_245() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_256(iVar0)), func_256(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_256(iVar0)), func_256(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			bVar2 = func_209(iParam3, func_251(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_206(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_257(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_257(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_258(bVar2)), func_258(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_233(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED" /* GXTEntry: "All Card Sets Posted" */), "COL_CC_ITEMS_DELIVERED" /* GXTEntry: "All Card Sets Posted" */, bVar0, true, false);
	}
	if (iParam2 == joaat("EXOTIC_ITEMS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED" /* GXTEntry: "All Items Delivered" */), "COL_EX_ITEMS_DELIVERED" /* GXTEntry: "All Items Delivered" */, bVar0, true, false);
	}
	if (iParam2 == joaat("LEGENDARY_FISH"))
	{
		if (func_243() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED" /* GXTEntry: "All Legendary Fish Posted" */), "COL_LF_ITEMS_DELIVERED" /* GXTEntry: "All Legendary Fish Posted" */, bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED" /* GXTEntry: "All Carcasses Mailed" */), "COL_TX_CARCASSES_MAILED" /* GXTEntry: "All Carcasses Mailed" */, bVar0, true, false);
	}
	return true;
}

bool func_234(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_58(func_259(0)) && ((func_260(0) == 1 || func_260(0) == 8) || func_260(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == joaat("LEGENDARY_FISH")) || iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

bool func_235(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"); /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"); /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"); /* GXTEntry: "Perfect Rat Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"); /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"); /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"); /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"); /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"); /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_257(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_257(bVar0))
		{
			*iParam2++;
		}
		if (func_257(bVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_257(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_257(bVar0))
		{
			*iParam2++;
		}
		if (func_257(bVar1))
		{
			*iParam2++;
		}
		if (func_257(bVar0) && func_257(bVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_257(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_257(bVar0))
		{
			*iParam2++;
		}
		if (func_257(bVar1))
		{
			*iParam2++;
		}
		if (func_257(bVar2))
		{
			*iParam2++;
		}
		if ((func_257(bVar0) && func_257(bVar1)) && func_257(bVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_257(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_257(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_257(bVar0))
		{
			*iParam2++;
		}
		if (func_257(bVar1))
		{
			*iParam2++;
		}
		if (func_257(bVar2))
		{
			*iParam2++;
		}
		if (func_257(bVar3))
		{
			*iParam2++;
		}
		if (((func_257(bVar0) && func_257(bVar1)) && func_257(bVar2)) && func_257(bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE" /* GXTEntry: "Cigarette Cards" */;
			sVar3 = "COL_CC_CARD_FOUND" /* GXTEntry: "~1~ of ~2~ Cards Found" */;
			iVar7 = joaat("CIGARETTE_CARDS");
			if (func_85() && (func_227(38) || func_202(38)))
			{
				sVar1 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE" /* GXTEntry: "A New Hobby" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO"); /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE" /* GXTEntry: "Dinosaur Bones" */;
			sVar3 = "COL_DB_FOUND" /* GXTEntry: "~1~ of ~2~ Found" */;
			iVar7 = joaat("DINO_BONES");
			if (func_85() && (func_227(39) || func_202(39)))
			{
				sVar1 = "COL_DB_INTRO" /* GXTEntry: "A Test of Faith" */;
				iVar4 = joaat("BLIP_RC_DEBORAH"); /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE" /* GXTEntry: "Digging up the Past" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO"); /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE" /* GXTEntry: "Exotics" */;
			sVar3 = "COL_EX_ITEMS_COLLECTED" /* GXTEntry: "~1~ of ~2~ Items Collected" */;
			sVar1 = "COL_EX_INTRO" /* GXTEntry: "Duchesses and Other Animals" */;
			iVar7 = joaat("EXOTIC_ITEMS");
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO"); /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE" /* GXTEntry: "Legendary Fish" */;
			sVar3 = "COL_LF_CAUGHT" /* GXTEntry: "~1~ of ~2~ Caught and Posted" */;
			sVar1 = "COL_LF_INTRO" /* GXTEntry: "A Fisher of Fish" */;
			iVar7 = joaat("LEGENDARY_FISH");
			iVar4 = joaat("BLIP_RC_JEREMY_GILL"); /* GXTEntry: "Jeremy Gill" */
			iVar6 = joaat("COL_LF_INTRO"); /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE" /* GXTEntry: "Rock Carvings" */;
			sVar3 = "COL_RC_FOUND" /* GXTEntry: "~1~ of ~2~ Found" */;
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_85() && (func_227(49) || func_202(49)))
			{
				sVar1 = "COL_RC_INTRO" /* GXTEntry: "Geology for Beginners" */;
				iVar4 = joaat("BLIP_SCM_FRANCES"); /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE" /* GXTEntry: "Rock Carvings" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO"); /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE" /* GXTEntry: "Wildlife Art Exhibition" */;
			sVar3 = "COL_TX_CARCASS_COLLECTED" /* GXTEntry: "~1~ of ~2~ Carcasses collected" */;
			sVar1 = "COL_TX_INTRO" /* GXTEntry: "A Better World, A New Friend" */;
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS"); /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = joaat("COL_TX_INTRO"); /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE" /* GXTEntry: "Mission Complete" */;
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED" /* GXTEntry: "Log Updated" */;
	}
	sVar2 = "COL_CTX_PLAYER_LOG" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */;
	if (iVar7 == joaat("CIGARETTE_CARDS"))
	{
		if (func_85() && (func_227(38) || func_202(38)))
		{
			iVar6 = joaat("COL_CC_INTRO"); /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE"); /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */;
			iParam3 = 12;
			iParam4 = 12;
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */;
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_262(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_249(func_261(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_85() && (func_227(39) || func_202(39)))
		{
			iVar6 = joaat("COL_DB_INTRO"); /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE"); /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_85() && (func_227(49) || func_202(49)))
		{
			iVar6 = joaat("COL_RC_INTRO"); /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE"); /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_192(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_237(int iParam0)
{
	int iVar0;

	iVar0 = func_101(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_238()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_21(func_263(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_239()
{
	return func_264(Global_40.f_12019);
}

int func_240()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_263(iVar1);
		if (func_21(bVar2, 1, 0) || func_248(func_247(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_241()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_265(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_242()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_266(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_243()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_254(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_244()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

int func_245()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_247(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */:
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */:
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */:
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */:
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */:
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */:
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */:
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */:
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */:
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */:
			return (1 << 9);
		case joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */:
			return (1 << 10);
		case joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */:
			return (1 << 11);
		default:
			break;
	}
	return 0;
}

bool func_248(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */:
			return "COL_CC_GUN_SET" /* GXTEntry: "Famous Gunslingers Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */:
			return "COL_CC_ART_SET" /* GXTEntry: "Artists & Poets Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */:
			return "COL_CC_LND_SET" /* GXTEntry: "Vistas of America Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */:
			return "COL_CC_GRL_SET" /* GXTEntry: "Gems Of Beauty Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */:
			return "COL_CC_PLT_SET" /* GXTEntry: "Flora of America Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */:
			return "COL_CC_ACT_SET" /* GXTEntry: "Stars of the Stage Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */:
			return "COL_CC_AML_SET" /* GXTEntry: "Fauna of North America Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */:
			return "COL_CC_VEH_SET" /* GXTEntry: "Marvels of Travel Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */:
			return "COL_CC_SPT_SET" /* GXTEntry: "World\'s Champions Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */:
			return "COL_CC_INV_SET" /* GXTEntry: "Amazing Inventions Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */:
			return "COL_CC_HOR_SET" /* GXTEntry: "Breeds of Horses Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */:
			return "COL_CC_PAM_SET" /* GXTEntry: "Prominent Americans Card Set" */;
		default:
			break;
	}
	return "";
}

char* func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND" /* GXTEntry: "30 of 30 Dinosaur Bones Found" */;
		case 1:
			return "COL_DB_SEND" /* GXTEntry: "Send all locations to Deborah MacGuiness" */;
		case 2:
			return "COL_DB_COLLECT" /* GXTEntry: "Collect your reward from Deborah MacGuiness" */;
		default:
			break;
	}
	return "";
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_253(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE") /* GXTEntry: "Little Egret Plume" */:
			return "COL_EP_LITTLE_FOUND" /* GXTEntry: "5 of 5 Little Egret Plumes" */;
		case joaat("PROVISION_EGRET_PLUME_REDDISH") /* GXTEntry: "Reddish Egret Plume" */:
			return "COL_EP_REDDISH_FOUND" /* GXTEntry: "5 of 5 Reddish Egret Plumes" */;
		case joaat("PROVISION_EGRET_PLUME_SNOWY") /* GXTEntry: "Snowy Egret Plume" */:
			return "COL_EP_SNOWY_FOUND" /* GXTEntry: "5 of 5 Snowy Egret Plumes" */;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT") /* GXTEntry: "Lady of the Night Orchid" */:
			return "COL_RO_LADY_OF_NIGHT_FOUND" /* GXTEntry: "15 of 15 Lady of the Night Orchids" */;
		case joaat("PROVISION_HERON_FEATHER") /* GXTEntry: "Heron Plume" */:
			return "COL_HF_FOUND" /* GXTEntry: "20 of 20 Heron Plumes" */;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER") /* GXTEntry: "Lady Slipper Orchid" */:
			return "COL_RO_LADY_SLIPPER_FOUND" /* GXTEntry: "7 of 7 Lady Slipper Orchids" */;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN") /* GXTEntry: "Moccasin Flower Orchid" */:
			return "COL_RO_MOCCASIN_FOUND" /* GXTEntry: "10 of 10 Moccasin Flower Orchids" */;
		case joaat("PROVISION_GATOR_EGG") /* GXTEntry: "Gator Egg" */:
			return "COL_GF_FOUND" /* GXTEntry: "25 of 25 Gator Eggs" */;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") /* GXTEntry: "Acuna\'s Star Orchid" */:
			return "COL_RO_ACUNAS_STAR_FOUND" /* GXTEntry: "3 of 3 Acuna\'s Star Orchids" */;
		case joaat("PROVISION_RO_FLOWER_CIGAR") /* GXTEntry: "Cigar Orchid" */:
			return "COL_RO_CIGAR_FOUND" /* GXTEntry: "7 of 7 Cigar Orchids" */;
		case joaat("PROVISION_RO_FLOWER_GHOST") /* GXTEntry: "Ghost Orchid" */:
			return "COL_RO_GHOST_FOUND" /* GXTEntry: "5 of 5 Ghost Orchids" */;
		case joaat("PROVISION_SPOONBILL_FEATHER") /* GXTEntry: "Spoonbill Plume" */:
			return "COL_SF_FOUND" /* GXTEntry: "30 of 30 Spoonbill Plumes" */;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED") /* GXTEntry: "Night Scented Orchid" */:
			return "COL_RO_NIGHT_SCENTED_FOUND" /* GXTEntry: "5 of 5 Night Scented Orchids" */;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL") /* GXTEntry: "Rat Tail Orchid" */:
			return "COL_RO_RAT_TAIL_FOUND" /* GXTEntry: "10 of 10 Rat Tail Orchids" */;
		case joaat("PROVISION_RO_FLOWER_SPIDER") /* GXTEntry: "Spider Orchid" */:
			return "COL_RO_SPIDER_FOUND" /* GXTEntry: "5 of 5 Spider Orchids" */;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL") /* GXTEntry: "Clamshell Orchid" */:
			return "COL_RO_CLAMSHELL_FOUND" /* GXTEntry: "5 of 5 Clamshell Orchids" */;
		case joaat("PROVISION_RO_FLOWER_DRAGONS") /* GXTEntry: "Dragon\'s Mouth Orchid" */:
			return "COL_RO_DRAGONS_FOUND" /* GXTEntry: "5 of 5 Dragon\'s Mouth Orchids" */;
		case joaat("PROVISION_RO_FLOWER_QUEENS") /* GXTEntry: "Queen\'s Orchid" */:
			return "COL_RO_QUEENS_FOUND" /* GXTEntry: "5 of 5 Queen\'s Orchids" */;
		case joaat("PROVISION_RO_FLOWER_SPARROWS") /* GXTEntry: "Sparrow\'s Egg Orchid" */:
			return "COL_RO_SPARROWS_FOUND" /* GXTEntry: "10 of 10 Sparrow\'s Egg Orchids" */;
		default:
			break;
	}
	return "";
}

bool func_254(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY" /* GXTEntry: "Legendary Bullhead Catfish" */;
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY" /* GXTEntry: "Legendary Chain Pickerel" */;
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY" /* GXTEntry: "Legendary Lake Sturgeon" */;
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY" /* GXTEntry: "Legendary Largemouth Bass" */;
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY" /* GXTEntry: "Legendary Longnose Gar" */;
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY" /* GXTEntry: "Legendary Muskie" */;
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY" /* GXTEntry: "Legendary Perch" */;
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY" /* GXTEntry: "Legendary Redfin Pickerel" */;
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY" /* GXTEntry: "Legendary Rock Bass" */;
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY" /* GXTEntry: "Legendary Smallmouth Bass" */;
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY" /* GXTEntry: "Legendary Sockeye Salmon" */;
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY" /* GXTEntry: "Legendary Steelhead Trout" */;
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY" /* GXTEntry: "Legendary Bluegill" */;
		default:
			break;
	}
	return "";
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND" /* GXTEntry: "10 of 10 Rock Faces Found" */;
		case 1:
			return "COL_RC_SEND" /* GXTEntry: "Send all locations to Francis Sinclair" */;
		case 2:
			return "COL_RC_COLLECT" /* GXTEntry: "Collect your reward from Francis Sinclair" */;
		default:
			break;
	}
	return "";
}

bool func_257(bool bParam0)
{
	if (func_267(bParam0) && func_21(bParam0, 1, 0))
	{
		return true;
	}
	else if (func_268(bParam0) & func_269(bParam0))
	{
		return true;
	}
	return false;
}

char* func_258(bool bParam0)
{
	if (!func_48(bParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_152(bParam0));
}

int func_259(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_260(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_261(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_262(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> /*32*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam4;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam8;
	sVar13.f_7 = 1;
	sVar13.f_0 = iParam7;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&sVar0, &sVar13, bParam9, bParam10);
	return iVar21;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 & (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_265(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_266(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_267(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") /* GXTEntry: "Perfect Squirrel Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") /* GXTEntry: "Perfect Cardinal Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT") /* GXTEntry: "Perfect Rat Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT") /* GXTEntry: "Perfect Woodpecker Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") /* GXTEntry: "Perfect Chipmunk Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT") /* GXTEntry: "Perfect Oriole Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT") /* GXTEntry: "Perfect Robin Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") /* GXTEntry: "Perfect Songbird Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT") /* GXTEntry: "Perfect Sparrow Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT") /* GXTEntry: "Perfect Toad Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT") /* GXTEntry: "Perfect Crow Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") /* GXTEntry: "Perfect Cedar Waxwing Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT") /* GXTEntry: "Perfect Bat Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT") /* GXTEntry: "Perfect Blue Jay Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT") /* GXTEntry: "Perfect Bullfrog Carcass" */:
			return true;
		default:
			break;
	}
	return false;
}

int func_268(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT") /* GXTEntry: "Perfect Rabbit Carcass" */:
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT") /* GXTEntry: "Perfect Opossum Carcass" */:
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") /* GXTEntry: "Perfect Skunk Carcass" */:
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT") /* GXTEntry: "Perfect Beaver Carcass" */:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_269(bool bParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_270(&iVar0, 0, iVar95, &sVar1) && !func_270(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_271(iVar0, &sVar1);
			if (func_48(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_270(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_272(iParam1) && !func_273(iParam1))
	{
		bVar0 = func_274(iParam1);
	}
	else
	{
		return false;
	}
	func_275(uParam3);
	iVar5 = func_276(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, bVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = sVar1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

void func_271(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_277(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_278(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_272(int iParam0)
{
	iParam0 = func_279(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

bool func_273(int iParam0)
{
	int iVar0;

	iParam0 = func_279(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_272(iParam0))
	{
		return false;
	}
	iVar0 = func_274(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_274(int iParam0)
{
	iParam0 = func_279(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_275(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_277(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_278(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(bParam0, iParam1, iParam2);
	return bVar2;
}

int func_279(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

