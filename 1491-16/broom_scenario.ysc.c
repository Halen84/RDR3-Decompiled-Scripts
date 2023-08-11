#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	struct<13> /*104*/ sLocal_6[5];
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	float fLocal_78 = 0.0f;
	bool bLocal_79 = false;
	var uLocal_80[1] = { 0 };
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __SCRIPT()
{
	iLocal_0 = 1;
	iLocal_74 = 5;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
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
	int iVar0;
	int iVar1;

	switch (iLocal_5)
	{
		case 0:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
			iLocal_72 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			if (!func_12(iLocal_72, 0))
			{
				iLocal_5 = 7;
				return;
			}
			bLocal_79 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iLocal_72));
			if (!bLocal_79)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_3, &uLocal_80, 1);
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_80[0]))
				{
					iLocal_5 = 7;
					return;
				}
			}
			iVar0 = BUILTIN::FLOOR(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_3));
			if (!func_13(iVar0, iLocal_4))
			{
				iLocal_5 = 7;
				return;
			}
			iLocal_5 = 1;
			break;
		case 1:
			if (!func_12(Global_35, 0))
			{
				iLocal_5 = 7;
				return;
			}
			if (!func_12(iLocal_72, 0))
			{
				iLocal_5 = 7;
				return;
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
			if (func_14(Global_35, iLocal_72, 1) > 1225.0f)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 9.5f)
			{
				iLocal_5 = 2;
				return;
			}
			else
			{
				iLocal_5 = 7;
				return;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (sLocal_6[iVar1 /*13*/].f_1 == 0)
				{
					iLocal_74 = iVar1;
				}
				else
				{
					if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_6[iVar1 /*13*/]))
					{
						if (iVar1 > 0)
						{
							sLocal_6[iVar1 /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(sLocal_6[(iVar1 - 1) /*13*/], true), TASK::_GET_SCENARIO_POINT_HEADING(sLocal_6[(iVar1 - 1) /*13*/], true), sLocal_6[iVar1 /*13*/].f_4) /*3*/ };
							sLocal_6[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(sLocal_6[(iVar1 - 1) /*13*/], true) + sLocal_6[iVar1 /*13*/].f_10);
						}
						else
						{
							sLocal_6[iVar1 /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), sLocal_6[iVar1 /*13*/].f_4) /*3*/ };
							sLocal_6[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + sLocal_6[iVar1 /*13*/].f_10);
						}
						sLocal_6[iVar1 /*13*/] = TASK::CREATE_SCENARIO_POINT_HASH(sLocal_6[iVar1 /*13*/].f_1, sLocal_6[iVar1 /*13*/].f_7, sLocal_6[iVar1 /*13*/].f_11, 0.0f, 0.0f, false);
						TASK::_0xE69FDA40AAC3EFC0(sLocal_6[iVar1 /*13*/], 0);
						TASK::_0xA7479FB665361EDB(sLocal_6[iVar1 /*13*/], 0);
					}
					iVar1++;
				}
			}
			iLocal_5 = 3;
			break;
		case 3:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (!func_16(&uLocal_75))
			{
				func_17(&uLocal_75, 0);
			}
			if (func_18(&uLocal_75, fLocal_78) && TASK::_PED_IS_IN_SCENARIO_BASE(iLocal_72))
			{
				iLocal_5 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (TASK::_0x79197F7D2BB5E73A(iLocal_72, sLocal_6[iLocal_73 /*13*/], sLocal_6[iLocal_73 /*13*/].f_2, sLocal_6[iLocal_73 /*13*/].f_3, 0, 0))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, sLocal_6[iLocal_73 /*13*/]))
				{
					fLocal_78 = sLocal_6[iLocal_73 /*13*/].f_12;
					iLocal_73++;
					func_19(&uLocal_75);
					if (iLocal_73 < iLocal_74)
					{
						iLocal_5 = 3;
					}
					else
					{
						iLocal_5 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (!func_16(&uLocal_75))
			{
				func_17(&uLocal_75, 0);
			}
			if (func_18(&uLocal_75, fLocal_78) && TASK::_PED_IS_IN_SCENARIO_BASE(iLocal_72))
			{
				iLocal_5 = 6;
			}
			break;
		case 6:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (!bLocal_79)
			{
				if (!func_20(iLocal_72, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
				{
					TASK::CLEAR_PED_TASKS(iLocal_72, true, false);
					TASK::TASK_USE_SCENARIO_POINT(iLocal_72, uLocal_80[0], 0, 0, true, false, 0, false, -1.0f, false);
					PED::SET_PED_KEEP_TASK(iLocal_72, true);
				}
				if (PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, uLocal_80[0]))
				{
					iLocal_5 = 7;
				}
			}
			else
			{
				iLocal_5 = 7;
			}
			break;
		case 7:
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
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_23(&iVar0);
	}
}

bool func_12(int iParam0, int iParam1)
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
	if (func_24(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_24(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_24(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_13(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("SC_WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_78 = 10.0f;
					if (PED::IS_PED_MALE(iLocal_72))
					{
						func_25(&(sLocal_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10.0f);
						func_25(&(sLocal_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10.0f);
						func_25(&(sLocal_6[2 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10.0f);
					}
					else
					{
						func_25(&(sLocal_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10.0f);
						func_25(&(sLocal_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10.0f);
						func_25(&(sLocal_6[2 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10.0f);
					}
					return true;
				case 1:
					fLocal_78 = 10.0f;
					if (PED::IS_PED_MALE(iLocal_72))
					{
						func_25(&(sLocal_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 1, 10.0f);
						func_25(&(sLocal_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 1, 10.0f);
					}
					else
					{
						func_25(&(sLocal_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 0, 10.0f);
						func_25(&(sLocal_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 0, 10.0f);
					}
					return true;
			}
			break;
		case joaat("SC_WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_78 = 10.0f;
					func_25(&(sLocal_6[0 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10.0f);
					func_25(&(sLocal_6[1 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10.0f);
					func_25(&(sLocal_6[2 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10.0f);
					func_25(&(sLocal_6[3 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10.0f);
					return true;
				case 1:
					fLocal_78 = 10.0f;
					func_25(&(sLocal_6[0 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10.0f);
					func_25(&(sLocal_6[1 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10.0f);
					func_25(&(sLocal_6[2 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10.0f);
					return true;
			}
			break;
	}
	return false;
}

float func_14(int iParam0, int iParam1, bool bParam2)
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
	return func_26(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_15()
{
	if (!func_12(Global_35, 0))
	{
		return true;
	}
	if (!func_12(iLocal_72, 0))
	{
		return true;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		return true;
	}
	if (iLocal_73 <= 0)
	{
		if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, iLocal_3) && !PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, sLocal_6[iLocal_73 /*13*/]))
		{
			return true;
		}
	}
	else if (iLocal_73 >= iLocal_74)
	{
		if (!bLocal_79)
		{
			if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, sLocal_6[(iLocal_73 - 1) /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, uLocal_80[0]))
			{
				return true;
			}
		}
	}
	else if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, sLocal_6[(iLocal_73 - 1) /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(iLocal_72, sLocal_6[iLocal_73 /*13*/]))
	{
		return true;
	}
	return false;
}

bool func_16(var uParam0)
{
	return func_27(*uParam0, 1);
}

void func_17(var uParam0, bool bParam1)
{
	if (bParam1 || !func_16(uParam0))
	{
		func_28(uParam0);
	}
}

bool func_18(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		return false;
	}
	if (func_29(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_20(int iParam0, int iParam1)
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

void func_21(int iParam0)
{
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

bool func_24(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) /*3*/ };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
}

float func_26(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_27(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_28(var uParam0)
{
	func_34(uParam0, 0.0f);
}

float func_29(var uParam0)
{
	if (!func_16(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_35(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_36() - uParam0->f_1);
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			if (PED::IS_PED_MALE(iLocal_72))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				case 4:
					return { 0.53823f, 0.0f, 0.0f };
				case 2:
					return { 0.380574f, -0.380598f, 0.0f };
				case 3:
					return { 0.380598f, 0.380574f, 0.0f };
				case 5:
					return { -0.53823f, 0.0f, 0.0f };
				case 6:
					return { -0.380574f, -0.380598f, 0.0f };
				case 7:
					return { -0.380598f, 0.380574f, 0.0f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 90.0f;
				case 1:
					return -90.0f;
				case 4:
					return 0.0f;
				case 2:
					return 0.0f;
				case 3:
					return 0.0f;
				case 5:
					return 0.0f;
				case 6:
					return 0.0f;
				case 7:
					return 0.0f;
				default:
					break;
			}
			break;
	}
	return 0.0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_36() - fParam1);
	func_37(uParam0, 1);
	func_38(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_35(var uParam0)
{
	return func_27(*uParam0, 2);
}

float func_36()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

