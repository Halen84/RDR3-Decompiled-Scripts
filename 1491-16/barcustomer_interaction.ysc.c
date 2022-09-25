#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	bVar0 = func_12(iLocal_17, 0);
	bVar1 = func_13(iLocal_28);
	bVar2 = ENTITY::DOES_ENTITY_EXIST(iLocal_18);
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		iLocal_16 = 6;
		return;
	}
	if (iLocal_16 <= 1 && func_14(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)) >= 1600.0f)
	{
		return;
	}
	if (iLocal_16 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_35) >= 8.0f)
	{
		return;
	}
	if ((iLocal_16 > 1 && iLocal_16 != 6) && Global_1935369.f_51)
	{
		func_15();
		iLocal_16 = 2;
		bLocal_25 = true;
	}
	if (iLocal_16 > 1 && iLocal_16 != 6)
	{
		if ((iLocal_16 != 5 && iLocal_16 != 2) && !bVar0)
		{
			func_15();
			if (bLocal_20)
			{
				iLocal_16 = 5;
				iLocal_15 = 0;
			}
			else
			{
				iLocal_16 = 2;
			}
			return;
		}
		if (!bVar2)
		{
			iLocal_16 = 6;
			return;
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_18, 0))
		{
			iLocal_16 = 6;
			return;
		}
	}
	func_16();
	func_17(bVar0);
	switch (iLocal_16)
	{
		case 0:
			iVar3 = func_18();
			iLocal_39 = func_20(func_19(), iVar3);
			if (iLocal_39 == -1)
			{
				return;
			}
			bLocal_19 = false;
			bLocal_26 = false;
			STREAMING::REQUEST_MODEL(joaat("P_COIN01X"), false);
			bLocal_25 = false;
			iLocal_14 = 0;
			if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
			{
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEBEER01X"), false);
				iVar4 = joaat("WORLD_HUMAN_BARTENDER_BEER");
				iLocal_5 = joaat("CUSTOMER_GRAB_BEER");
				iLocal_6 = joaat("CUSTOMER_GRAB_BEER_MALE_B");
				iLocal_8 = joaat("BARFRONT_TRANS_UNDER_BEER");
				iLocal_9 = joaat("UNDERBAR_TRANS_OVERBAR_BEER");
				iLocal_10 = joaat("BARTENDER_RETURN_TO_IDLE");
				iLocal_11 = joaat("BARTENDER_CLEAN_BEER_OVER_BAR");
				iLocal_12 = -1931194237;
				iLocal_13 = joaat("BARTENDER_CLEAN_BEER_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BARTENDER_BEER"), (1 << 18), 0, 0);
			}
			else
			{
				iVar4 = joaat("WORLD_HUMAN_BARTENDER_WHISKEY");
				iLocal_5 = joaat("CUSTOMER_GRAB_WHISKEY");
				iLocal_6 = joaat("CUSTOMER_GRAB_WHISKEY_MALE_B");
				iLocal_8 = joaat("BARFRONT_TRANS_UNDER_WHISKEY");
				iLocal_9 = joaat("UNDER_TRANS_OVER_WHISKEY");
				iLocal_10 = joaat("UNDER_TRANS_BARFRONT_WHISKEY");
				iLocal_11 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_BAR");
				iLocal_12 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_TRANS_UNDER_BAR");
				iLocal_13 = joaat("BARTENDER_CLEAN_WHISKEY_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BARTENDER_WHISKEY"), (1 << 18), 0, 0);
				STREAMING::REQUEST_MODEL(joaat("P_SHOTGLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
			}
			fVar5 = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true);
			iLocal_29 = TASK::CREATE_SCENARIO_POINT_HASH(iVar4, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), fVar5, func_21()), (fVar5 - 180.0f), 0.0f, 0.0f, false);
			TASK::_SET_SCENARIO_POINT_HEADING(iLocal_29, (fVar5 - 180.0f), true);
			TASK::_0xA7479FB665361EDB(iLocal_29, 0);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_29, 0);
			iLocal_17 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			iLocal_28 = func_22(iLocal_39);
			if (func_23(iLocal_28))
			{
				iLocal_18 = func_24(iLocal_28);
			}
			iLocal_16 = 1;
			func_25(&uLocal_33, 1);
			break;
		case 2:
			if (((!func_26() && !bVar1) && !Global_1935369.f_51) && bVar0)
			{
				iLocal_15 = 0;
				iLocal_16 = 3;
				if (bLocal_20)
				{
					iLocal_16 = 5;
				}
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
			{
				return;
			}
			if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEBEER01X")))
				{
					return;
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BARTENDER_BEER"), false))
				{
					return;
				}
			}
			else
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SHOTGLASS01X")))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
				{
					return;
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BARTENDER_WHISKEY"), false))
				{
					return;
				}
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_29))
			{
				return;
			}
			if (!func_12(iLocal_17, 0))
			{
				iLocal_17 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				return;
			}
			if (!bVar2)
			{
				if (func_23(iLocal_28))
				{
					iLocal_18 = func_24(iLocal_28);
				}
				return;
			}
			func_25(&uLocal_30, 1);
			iLocal_15 = 0;
			iLocal_16 = 3;
			break;
		case 3:
			func_27(bVar0, bVar1, bVar2);
			break;
		case 4:
			func_28();
			break;
		case 5:
			func_29(bVar0, bVar1, bVar2);
			break;
		case 6:
			iLocal_0 = 0;
			break;
	}
}

void func_7()
{
	func_15();
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		TASK::_0x4161648394262FDF(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0.15f);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_29))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_29);
	}
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
		func_30(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_31(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_32(&iVar0);
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
	if (func_33(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_34(iParam0, 1);
}

float func_14(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_15()
{
	int iVar0;

	if (!Global_1935369.f_51)
	{
		if (Global_1935369.f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1935369.f_50 = 0;
		}
		if (func_13(iLocal_28))
		{
			return;
		}
		iVar0 = func_35(iLocal_28);
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			PERSCHAR::_0xA2B18FF8D39F6D87(iVar0);
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
	}
	else
	{
		Global_1935369.f_50 = 0;
	}
}

void func_16()
{
	if (bLocal_21 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
		{
			OBJECT::DELETE_OBJECT(&iLocal_42);
		}
		bLocal_21 = false;
	}
	if (bLocal_22 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 2131322378))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
		{
			PED::_GIVE_PED_SCENARIO_PROP(iLocal_18, iLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", true);
		}
		bLocal_22 = false;
	}
}

void func_17(bool bParam0)
{
	int iVar0;

	if (bLocal_24 && PED::_IS_PED_DOING_SCENARIO_TRANSITION(iLocal_17))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_17, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_17, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_17, 0, 1);
	}
	if ((!bLocal_19 && bLocal_25) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_17, 864365833))
	{
		if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_GIVE_PED_SCENARIO_PROP(iLocal_17, iLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_24 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_GIVE_PED_SCENARIO_PROP(iLocal_17, iLocal_41, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_24 = false;
			}
		}
	}
	if (bLocal_23 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_17, 350240706))
	{
		iLocal_41 = PED::_GET_PED_REGISTER_PROP(iLocal_17, "p_shotGlass01x_PH_L_Hand", true);
		bLocal_23 = false;
	}
	if (bParam0)
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(iLocal_17);
	}
	if (((bLocal_27 && !bLocal_19) && !bLocal_20) && (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A") || iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A")))
	{
		if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_GIVE_PED_SCENARIO_PROP(iLocal_17, iLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_27 = false;
				bLocal_24 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_GIVE_PED_SCENARIO_PROP(iLocal_17, iLocal_41, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_27 = false;
				bLocal_24 = false;
			}
		}
	}
	if (((bLocal_27 && !bLocal_19) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(iLocal_17, iLocal_5)) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(iLocal_17, iLocal_6))
	{
		PED::_ADD_SCENARIO_TRANSITION(iLocal_17);
		if (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_A"))
		{
			PED::_GIVE_PED_HASH_COMMAND(iLocal_17, iLocal_5, 3.0f);
			bLocal_24 = true;
		}
		else if (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_B"))
		{
			PED::_GIVE_PED_HASH_COMMAND(iLocal_17, iLocal_6, 3.0f);
			bLocal_24 = true;
		}
	}
}

int func_18()
{
	switch (func_19())
	{
		case 76:
			if (func_37(func_36(0), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 38:
		case 92:
		case 115:
		case 120:
			return 0;
		case 5:
			if (func_37(func_36(2), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 105:
			return 2;
	}
	return -1;
}

int func_19()
{
	return Global_1894899.f_2;
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_21()
{
	return { -0.235327f, 1.850775f, 0.0f };
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 443;
		case 0:
			return 508;
		case 4:
			return 351;
		case 7:
			return 432;
		default:
			break;
	}
	return -1;
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_24(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (!func_34(iParam0, 2))
	{
		return 0;
	}
	if (func_39(func_38(iParam0)))
	{
		return func_40(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_41(iParam0), 0);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_42(uParam0))
	{
		func_43(uParam0);
	}
}

bool func_26()
{
	if (Global_1935369.f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (Global_1935369.f_50 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (Global_1935369.f_51)
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (Global_1935369.f_51)
	{
		return;
	}
	switch (iLocal_15)
	{
		case 0:
			bVar0 = PED::IS_PED_USING_THIS_SCENARIO(iLocal_17, iLocal_3);
			if (!bVar0 && !TASK::IS_PED_EXITING_SCENARIO(iLocal_17, true))
			{
				func_15();
				iLocal_16 = 5;
				iLocal_15 = 0;
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_17, 1))
			{
				iLocal_42 = PED::_GET_PED_REGISTER_PROP(iLocal_17, "p_coin01x", true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(iLocal_42, 2, false);
				}
				bLocal_21 = true;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_17, 0) && bVar0)
			{
				if ((bParam1 && !func_44(iLocal_28)) || func_26())
				{
					iLocal_16 = 2;
					return;
				}
				else
				{
					func_45();
				}
				iVar1 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(iLocal_17);
				if ((iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_A") && iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_B")) && iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_ARTHUR"))
				{
					iLocal_16 = 5;
					iLocal_15 = 0;
					bLocal_20 = true;
					func_15();
					return;
				}
				if (!Global_1935369.f_51)
				{
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_18);
					TASK::TASK_USE_SCENARIO_POINT(iLocal_18, iLocal_29, 0, 0, true, false, 0, false, -1.0f, false);
					iLocal_15 = 1;
				}
			}
			break;
		case 1:
			bVar2 = PED::IS_PED_USING_THIS_SCENARIO(iLocal_18, iLocal_29);
			if (!bVar2 && !func_46(iLocal_18, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
			{
				iLocal_15 = 0;
			}
			bVar0 = PED::IS_PED_USING_THIS_SCENARIO(iLocal_17, iLocal_3);
			if (!bVar0 && !TASK::IS_PED_EXITING_SCENARIO(iLocal_17, true))
			{
				func_15();
				iLocal_16 = 5;
				iLocal_15 = 0;
				return;
			}
			if (!bVar2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_18, 0))
			{
				return;
			}
			if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(iLocal_18, iLocal_8))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_18);
				PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_8, 3.0f);
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
				iLocal_14++;
			}
			if (iLocal_14 > 5)
			{
				func_15();
				iLocal_15 = 0;
			}
			if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(iLocal_18))
			{
				func_25(&uLocal_36, 1);
				iLocal_15 = 3;
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_9, 3.0f);
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_WHISKEY"))
				{
					iLocal_8 = joaat("OVER_TRANS_UNDER_WHISKEY");
				}
				func_25(&uLocal_36, 1);
				iLocal_15 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 595016159) && !bLocal_26)
			{
				func_48();
			}
			if (func_47())
			{
				if (!bLocal_26)
				{
					func_48();
				}
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					iLocal_15 = 6;
					iLocal_40 = PED::_GET_PED_REGISTER_PROP(iLocal_18, "p_bottleBeer01x_PH_R_HAND", false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
					{
					}
				}
				else
				{
					iLocal_15 = 5;
					iLocal_41 = PED::_GET_PED_REGISTER_PROP(iLocal_18, "p_shotGlass01x_PH_L_HAND", false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
					{
					}
				}
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_10, 3.0f);
				}
				else
				{
					PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_8, 3.0f);
				}
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
				bLocal_25 = true;
				bLocal_27 = true;
				func_25(&uLocal_36, 1);
			}
			break;
		case 5:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_10, 3.0f);
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
				func_25(&uLocal_36, 1);
				iLocal_15 = 7;
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_36);
				iLocal_16 = 5;
				iLocal_15 = 0;
				bLocal_20 = true;
			}
			break;
		case 6:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_36);
				iLocal_16 = 5;
				iLocal_15 = 0;
				bLocal_20 = true;
			}
			break;
	}
}

void func_28()
{
}

void func_29(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (Global_1935369.f_51)
	{
		return;
	}
	switch (iLocal_15)
	{
		case 0:
			if (bParam0)
			{
				bVar0 = PED::IS_PED_USING_THIS_SCENARIO(iLocal_17, iLocal_3);
			}
			else
			{
				bVar0 = false;
			}
			if ((bParam1 && !func_44(iLocal_28)) || func_26())
			{
				iLocal_16 = 2;
				return;
			}
			if (!bLocal_23 && TASK::IS_PED_EXITING_SCENARIO(iLocal_17, false))
			{
				bLocal_23 = true;
			}
			if ((bParam0 && bVar0) && !bLocal_20)
			{
				iLocal_16 = 0;
				iLocal_15 = 0;
				return;
			}
			if ((bParam0 && !bVar0) && !TASK::IS_PED_EXITING_SCENARIO(iLocal_17, false))
			{
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					if (!TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iLocal_3))
					{
						iLocal_16 = 6;
						return;
					}
				}
				else if (!bLocal_20)
				{
					iLocal_16 = 6;
					return;
				}
				bLocal_22 = true;
				if (!Global_1935369.f_51)
				{
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_18);
					TASK::TASK_USE_SCENARIO_POINT(iLocal_18, iLocal_29, 0, 0, true, false, 0, false, -1.0f, false);
					iLocal_15 = 1;
				}
			}
			break;
		case 1:
			if ((bParam1 && !func_44(iLocal_28)) || func_26())
			{
				iLocal_16 = 2;
				iLocal_15 = 0;
				return;
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_18, iLocal_29))
			{
				return;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_18, 0) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(iLocal_18, iLocal_11))
			{
				func_45();
				PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_11, 3.0f);
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
			}
			if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(iLocal_18))
			{
				func_25(&uLocal_36, 1);
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_12, 3.0f);
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
				iLocal_15 = 3;
				func_25(&uLocal_36, 1);
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(iLocal_18, iLocal_13, 3.0f);
				PED::_ADD_SCENARIO_TRANSITION(iLocal_18);
				iLocal_15 = 7;
				func_25(&uLocal_36, 1);
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_16 = 6;
			}
			break;
	}
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

void func_32(int iParam0)
{
}

bool func_33(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_34(int iParam0, int iParam1)
{
	if (func_51() != -1)
	{
		return false;
	}
	if (!func_23(iParam0))
	{
		return false;
	}
	return Global_24887[iParam0 /*2*/] & iParam1 != 0;
}

int func_35(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_36(int iParam0)
{
	int iVar0;

	switch (func_19())
	{
		case 76:
			if (iParam0 == 0)
			{
				return VOLUME::CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0.0f, 0.0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			}
			else
			{
				return VOLUME::CREATE_VOLUME_BOX(-241.294f, 770.0f, 118.14f, 0.0f, 0.0f, 110.709f, 8.286f, 7.345f, 5.0f);
			}
			break;
		case 92:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2946.662f, 523.323f, 46.02f, 0.0f, 0.0f, 180.0f, 9.627f, 13.43f, 3.143f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2939.132f, 523.346f, 46.02f, 0.0f, 0.0f, 180.0f, 5.235f, 9.883f, 3.143f);
			return iVar0;
		case 120:
			return VOLUME::CREATE_VOLUME_BOX(-3701.056f, -2595.456f, -14.37373f, 0.0f, 0.0f, 0.0f, 21.94766f, 22.09092f, 14.36038f);
		case 115:
			return VOLUME::CREATE_VOLUME_BOX(-5514.454f, -2910.941f, 0.196263f, 0.0f, 0.0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f);
		case 38:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -818.523f, -1319.681f, 46.59f, 0.0f, 0.0f, 90.0f, 15.6f, 16.0f, 8.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -809.672f, -1319.568f, 48.818f, 0.0f, 0.0f, 90.0f, 15.5f, 2.0f, 4.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -809.672f, -1324.85f, 44.569f, 0.0f, 0.0f, 90.0f, 5.2f, 2.0f, 3.8f);
			return iVar0;
		case 5:
			if (iParam0 == 2)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2629.396f, -1221.905f, 54.83224f, 0.0f, 0.0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2628.751f, -1228.086f, 54.83224f, 0.0f, 0.0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2635.506f, -1227.165f, 54.83224f, 0.0f, 0.0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
				return iVar0;
			}
			else
			{
				return VOLUME::CREATE_VOLUME_BOX(2796.705f, -1167.971f, 48.56161f, 0.0f, 0.0f, -120.25f, 13.49097f, 10.18626f, 3.324371f);
			}
			break;
		case 105:
			return VOLUME::CREATE_VOLUME_BOX(1345.534f, -1375.4f, 81.161f, 0.0f, 0.0f, 80.2f, 11.601f, 14.755f, 3.376f);
	}
	return VOLUME::CREATE_VOLUME_BOX(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}

bool func_37(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

int func_38(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_39(int iParam0)
{
	return iParam0 != 0;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_35(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

int func_41(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

bool func_42(var uParam0)
{
	return func_52(*uParam0, 1);
}

void func_43(var uParam0)
{
	func_53(uParam0, 0.0f);
}

bool func_44(int iParam0)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_45()
{
	int iVar0;

	if (Global_1935369.f_51)
	{
		return;
	}
	Global_1935369.f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar0 = func_35(iLocal_28);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		PERSCHAR::_0x406808610220405B(func_35(iLocal_28));
	}
}

bool func_46(int iParam0, int iParam1)
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

bool func_47()
{
	if (((!Global_1935369.f_51 && func_54(&uLocal_36) > 1250) && !TASK::IS_PED_SCENARIO_REACT_LOOKING(iLocal_18, true)) && (!PED::_IS_PED_DOING_SCENARIO_TRANSITION(iLocal_18) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 1004907005)))
	{
		return true;
	}
	return false;
}

void func_48()
{
	if (!bLocal_26)
	{
		if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEBEER01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
				PED::_GIVE_PED_SCENARIO_PROP(iLocal_18, iLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
				bLocal_26 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40) && !ENTITY::DOES_ENTITY_EXIST(iLocal_41))
		{
			iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			PED::_GIVE_PED_SCENARIO_PROP(iLocal_18, iLocal_40, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
			PED::_GIVE_PED_SCENARIO_PROP(iLocal_18, iLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
			bLocal_26 = true;
		}
	}
}

bool func_49()
{
	if ((!PED::_IS_PED_DOING_SCENARIO_TRANSITION(iLocal_18) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 1004907005)) && func_54(&uLocal_36) > 1250)
	{
		return true;
	}
	return false;
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

int func_51()
{
	return Global_1572887.f_12;
}

bool func_52(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_55() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_54(var uParam0)
{
	if (!func_42(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_58(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_59() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

float func_55()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_58(var uParam0)
{
	return func_52(*uParam0, 2);
}

int func_59()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

