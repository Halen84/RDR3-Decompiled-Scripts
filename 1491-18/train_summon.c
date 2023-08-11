#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	char[] cLocal_3[8] = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	Vector3 vLocal_11 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_14 = { 0.0f, 0.0f, 0.0f };
	float fLocal_17 = 0.0f;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
#pragma endregion

void __SCRIPT()
{
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

int func_1()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_3(iVar0, (1 << 14));
		iVar0++;
	}
	if (iLocal_18 != -1)
	{
		func_4(iLocal_18);
		func_3(iLocal_18, (1 << 10));
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	return 1;
}

bool func_2()
{
	int iVar0;

	if (func_5())
	{
		func_6(6);
	}
	switch (iLocal_0)
	{
		case 0:
			iLocal_1 = func_7();
			if (!func_8(iLocal_1))
			{
				func_6(6);
				return false;
			}
			iLocal_18 = func_9(iLocal_1);
			func_10(iLocal_18);
			func_11(iLocal_18, (1 << 10));
			func_3(iLocal_18, 2);
			if (func_12(iLocal_1, &iLocal_2, &cLocal_3, &vLocal_11, &fLocal_17, &iLocal_20))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				func_6(1);
			}
			else
			{
				func_6(6);
				return false;
			}
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return false;
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				iLocal_19 = TASK::CREATE_SCENARIO_POINT_HASH(iLocal_2, vLocal_11, fLocal_17, 0.0f, 0.0f, false);
				TASK::_SET_SCENARIO_POINT_FLAG(iLocal_19, 23, true);
				TASK::_SET_SCENARIO_POINT_FLAG(iLocal_19, 25, true);
				return false;
			}
			if (!func_13(Global_35, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
			{
				MISC::CLEAR_AREA(vLocal_11, 2.0f, 2442122);
				TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_19, &cLocal_3, 0, false, true, 0, false, -1.0f, false);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (iVar0 != iLocal_18)
					{
						func_14(iVar0);
						func_11(iVar0, (1 << 14));
					}
					iVar0++;
				}
				CLOCK::SET_CLOCK_TIME(iLocal_20, 0, 0);
				func_15(vLocal_11, 150.0f, 0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				func_6(2);
			}
			break;
		case 2:
			if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
			{
				func_6(3);
			}
			break;
		case 3:
			vLocal_14 = { func_16(iLocal_1) /*3*/ };
			if (func_17(vLocal_14))
			{
				func_6(6);
				return false;
			}
			if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_18 /*373*/].f_1))
			{
				func_6(6);
				return false;
			}
			VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_18 /*373*/].f_1, vLocal_14, func_18(iLocal_1));
			iLocal_21 = MISC::GET_GAME_TIMER() + 15000;
			func_6(4);
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_18 /*373*/].f_1)))
			{
				if (iLocal_21 > MISC::GET_GAME_TIMER())
				{
					VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_18 /*373*/].f_1, vLocal_14, func_18(iLocal_1));
					return false;
				}
			}
			VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_18 /*373*/].f_1, 4.0f);
			VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_18 /*373*/].f_1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_19(iLocal_1), 1.0f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_20(joaat("DOCUMENT_TRAIN_TICKET") /* GXTEntry: "Train Ticket" */, 1, joaat("REMOVE_REASON_DEFAULT"), 0, 0);
			func_6(5);
			break;
		case 5:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_19))
				{
					return false;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_18 /*373*/].f_1)))
			{
				return false;
			}
			func_6(6);
			break;
		case 6:
			return func_1();
	}
	return false;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_21(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] -= (Global_40.f_11029[iParam0 /*5*/] & iParam1);
}

void func_4(int iParam0)
{
	func_3(iParam0, 16);
}

bool func_5()
{
	if (func_22() != -1)
	{
		return true;
	}
	if (func_23(0, 0, 1))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	return false;
}

void func_6(int iParam0)
{
	iLocal_0 = iParam0;
}

var func_7()
{
	return Global_1894899.f_2;
}

bool func_8(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return true;
		case 23:
			return true;
		case 28:
			return true;
		case 69:
			return true;
		case 75:
			return true;
		case 76:
			return true;
		case 78:
			return true;
		case 105:
			return true;
		default:
			break;
	}
	return false;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		return 0;
	}
	func_11(iParam0, 16);
	return VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iParam0 /*373*/].f_1);
}

void func_11(int iParam0, int iParam1)
{
	if (!func_21(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] |= iParam1;
}

bool func_12(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			strcpy_s(sParam2, 64, "PROP_PLAYER_SEAT_CHAIR_GENERIC");
			*uParam3 = { 2682.599f, -1458.432f, 45.757f /*3*/ };
			*uParam4 = -155.0f;
			*uParam5 = 20;
			return true;
		case 23:
			*uParam1 = joaat("WORLD_HUMAN_LEAN_RAILING");
			strcpy_s(sParam2, 64, "WORLD_HUMAN_LEAN_RAILING_MALE_C");
			*uParam3 = { -1099.38f, -578.48f, 81.4f /*3*/ };
			*uParam4 = 138.954f;
			*uParam5 = 11;
			return true;
		case 28:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			strcpy_s(sParam2, 64, "PROP_PLAYER_SEAT_CHAIR_GENERIC");
			*uParam3 = { -1304.61f, 402.07f, 94.88f /*3*/ };
			*uParam4 = -155.0f;
			*uParam5 = 16;
			return true;
		case 69:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			strcpy_s(sParam2, 64, "PROP_PLAYER_SEAT_CHAIR_GENERIC");
			*uParam3 = { 1520.34f, 437.09f, 90.18f /*3*/ };
			*uParam4 = -90.0f;
			*uParam5 = 8;
			return true;
		case 75:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			strcpy_s(sParam2, 64, "PROP_PLAYER_SEAT_CHAIR_GENERIC");
			*uParam3 = { -346.205f, -368.456f, 87.519f /*3*/ };
			*uParam4 = -65.272f;
			*uParam5 = 22;
			return true;
		case 76:
			*uParam1 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
			strcpy_s(sParam2, 64, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
			*uParam3 = { -167.44f, 638.81f, 113.03f /*3*/ };
			*uParam4 = -126.192f;
			*uParam5 = 6;
			return true;
		case 78:
			*uParam1 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
			strcpy_s(sParam2, 64, "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D");
			*uParam3 = { 2941.49f, 1274.77f, 43.64f /*3*/ };
			*uParam4 = 156.696f;
			*uParam5 = 14;
			return true;
		case 105:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			strcpy_s(sParam2, 64, "PROP_PLAYER_SEAT_CHAIR_GENERIC");
			*uParam3 = { 1214.081f, -1293.024f, 76.372f /*3*/ };
			*uParam4 = 90.766f;
			*uParam5 = 2;
			return true;
		default:
			break;
	}
	return false;
}

bool func_13(int iParam0, int iParam1)
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

int func_14(int iParam0)
{
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(Global_1425371[iParam0 /*373*/].f_1);
		Global_1425371[iParam0 /*373*/].f_1 = 0;
	}
	return 1;
}

void func_15(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

Vector3 func_16(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return { 2613.5f, -1477.1f, 45.1f };
		case 23:
			return { -1154.2f, -535.7f, 86.4f };
		case 28:
			return { -1276.9f, 486.7f, 92.7f };
		case 69:
			return { 1529.7f, 530.7f, 89.4f };
		case 75:
			return { -353.0f, -356.1f, 86.4f };
		case 76:
			return { -200.5f, 562.7f, 112.8f };
		case 78:
			return { 2886.5f, 1213.8f, 44.1f };
		case 105:
			return { 1192.5f, -1277.5f, 75.6f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_17(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 23:
		case 28:
		case 75:
		case 76:
		case 78:
		case 105:
			return 0;
		case 69:
			return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -67.5789f;
		case 23:
			return -80.0869f;
		case 28:
			return -61.4596f;
		case 69:
			return 0.5378f;
		case 75:
			return 138.6132f;
		case 76:
			return -85.0f;
		case 78:
			return 13.9649f;
		case 105:
			return -10.0f;
	}
	return 0.0f;
}

bool func_20(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_24(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_25(bParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_26(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	sVar5 = { func_27(bParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_28(bParam0, &sVar5, &sVar0, iParam1, iParam2, iParam3, bParam4);
}

bool func_21(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_22()
{
	return Global_1572887.f_12;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
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
		if (func_29())
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
		iVar0 = func_30(Global_1898164.f_1[0 /*5*/]);
		if (func_31(iVar0) && func_32(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_33(Global_1898164.f_1[0 /*5*/]))
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

bool func_24(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

struct<5> /*40*/ func_25(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_34(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_35(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_27(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_36(bParam1) /*4*/ };
			if (bParam2 && func_37(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_38(bParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else if (!func_38(bParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
				else if (func_39(bParam0, &sVar5, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
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
			sVar0 = { func_40(bParam1) /*4*/ };
			switch (func_41(bParam0))
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
			if (func_42(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_27(joaat("KIT_CAMP") /* GXTEntry: "Camp" */, sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP") /* GXTEntry: "Camp" */);
			}
			else if (func_42(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_27(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_43(sVar0, &sVar27, bParam1, 0))
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

bool func_26(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (func_44(bParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_45(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_46(bParam4), bParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> /*32*/ func_27(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_24(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_46(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_28(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_44(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_43(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_45(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_46(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_29()
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

int func_30(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_48(func_47(iParam0));
}

bool func_31(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_32(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_33(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

struct<4> /*32*/ func_34(bool bParam0)
{
	return func_27(joaat("CHARACTER"), func_49(), joaat("SLOTID_NONE"), bParam0);
}

int func_35(bool bParam0)
{
	Vector3 vVar0;

	if (!func_24(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_36(bool bParam0)
{
	int iVar0;

	iVar0 = func_46(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_27(joaat("CARRIED_WEAPONS"), func_34(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_27(joaat("CARRIED_WEAPONS"), func_34(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_27(joaat("CARRIED_WEAPONS"), func_34(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_37(bool bParam0, bool bParam1)
{
	if (func_41(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_50(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_38(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_51(bParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_39(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_52(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_40(bool bParam0)
{
	int iVar0;

	iVar0 = func_46(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_27(joaat("EMOTE_ITEM"), func_34(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_27(joaat("EMOTE_ITEM"), func_34(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_41(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_24(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_42(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_41(bParam0);
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

bool func_43(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_46(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_44(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_45(bool bParam0)
{
	if (func_22() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_46(bParam0));
}

int func_46(bool bParam0)
{
	if (func_22() == -1)
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

int func_47(int iParam0)
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

int func_48(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

struct<4> /*32*/ func_49()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_50(int iParam0)
{
	if (!func_53(iParam0))
	{
		return false;
	}
	return func_54(iParam0);
}

int func_51(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_24(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_27(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_46(bParam6), &sVar0, false);
	return iVar4;
}

bool func_52(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_46(0);
	*uParam1 = { func_27(bParam0, func_36(0), iParam3, 0) /*4*/ };
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

bool func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

