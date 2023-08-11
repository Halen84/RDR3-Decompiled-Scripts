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
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	Vector3 vLocal_21 = { 0.0f, 0.0f, 0.0f };
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_11 = sScriptParam_0.f_0;
	iLocal_13 = sScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
	{
		func_2(&uLocal_9);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_2(&uLocal_9);
	}
	iLocal_12 = func_3();
	iLocal_19 = func_4(iLocal_12);
	sLocal_20 = "PrimaryItem";
	vLocal_21 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_13, true) /*3*/ };
	iLocal_24 = func_5(iLocal_12);
	if (iLocal_12 < 6)
	{
		iLocal_14 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(func_6(), joaat("EXOTIC_ITEMS"), 0);
	}
	else if (iLocal_12 > 5 && iLocal_12 < 12)
	{
		iLocal_14 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(func_7(), joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_9(func_8(iLocal_14, 20), 1, 0))
		{
			func_2(&uLocal_9);
		}
	}
	else if (iLocal_12 != 12)
	{
		if (iLocal_12 != 13)
		{
			if (iLocal_12 == 14)
			{
			}
		}
	}
	while (func_10())
	{
		if (iLocal_12 != 14)
		{
			if (func_11(&uLocal_9))
			{
				func_2(&uLocal_9);
			}
		}
		else if (func_12(&uLocal_9))
		{
			func_13(&uLocal_9);
		}
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_9);
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(var uParam0)
{
	SCRIPTS::_0xE7282390542F570D(iLocal_11);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_13))
	{
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_13));
	}
	return iVar0;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 1:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 2:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 3:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 4:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 5:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 6:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 7:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 8:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 9:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 10:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 11:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 12:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		case 13:
			return joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X_SCT");
		default:
			break;
	}
	return 0;
}

int func_5(int iParam0)
{
	int iVar0;

	if (iParam0 < 6)
	{
		iVar0 = joaat("DOCUMENT_RARE_ORCHID_ORDER_1"); /* GXTEntry: "Rare Orchids Order" */
	}
	else if (iParam0 > 5 && iParam0 < 12)
	{
		iVar0 = func_8(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(func_7(), joaat("TAXIDERMY"), 0), 10);
	}
	else if (iParam0 == 12)
	{
		iVar0 = joaat("DOCUMENT_TS_GIDEON_BOUNTY_POSTER"); /* GXTEntry: "Gideon Bennett Bounty Poster" */
	}
	else if (iParam0 == 13)
	{
		iVar0 = joaat("DOCUMENT_TS_POSTER_VANHORN"); /* GXTEntry: "Missing Person Poster" */
	}
	return iVar0;
}

int func_6()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_14(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_7()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
}

int func_8(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_15(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

bool func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_16(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_17(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
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
		if (!func_18(iParam0, 1))
		{
			return false;
		}
	}
	return func_19(iParam0, 0, bParam2) >= iParam1;
}

bool func_10()
{
	if (!bLocal_25)
	{
		if (func_20())
		{
			bLocal_25 = true;
		}
	}
	else if (!func_20())
	{
		func_21(&uLocal_9, 0);
		bLocal_25 = false;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&uLocal_9);
		return false;
	}
	if (func_22(Global_1935630, (1 << 21)))
	{
		return false;
	}
	return true;
}

bool func_11(var uParam0)
{
	switch (func_23(uParam0))
	{
		case 0:
			if (iLocal_12 == 12)
			{
				iLocal_16 = joaat("UI_POSTER_ANNESBURG_GIDEON");
			}
			else if (iLocal_12 == 13)
			{
				iLocal_16 = joaat("UI_POSTER_VANHORN");
			}
			else
			{
				iLocal_16 = func_24(iLocal_14);
			}
			TXD::REQUEST_STREAMED_TXD(iLocal_16, false);
			func_21(uParam0, 1);
			break;
		case 1:
			if (TXD::HAS_STREAMED_TXD_LOADED(iLocal_16))
			{
				func_21(uParam0, 2);
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_15))
			{
				if (DECORATOR::DECOR_EXIST_ON(iLocal_15, "letter_item"))
				{
					func_21(uParam0, 3);
				}
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_18))
			{
				iLocal_18 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_25(iLocal_12), iLocal_19, 10.0f, 0, false);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
			{
				iLocal_17 = TASK::GET_PROP_FOR_SCENARIO_POINT(iLocal_18, sLocal_20);
				iLocal_15 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_17);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_15))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iLocal_15, "letter_item"))
				{
					DECORATOR::DECOR_SET_INT(iLocal_15, "letter_item", iLocal_24);
				}
				else
				{
					OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(iLocal_15, iLocal_16, 0, 0);
				}
			}
			break;
		case 3:
			if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, func_4(iLocal_12)) && func_26(Global_35, vLocal_21, 1.5f, 1, 1))
			{
				func_21(uParam0, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_USING_SCENARIO_HASH(Global_35, func_4(iLocal_12)))
			{
				func_21(uParam0, 5);
			}
			break;
		case 5:
			if (!func_9(iLocal_24, 1, 0))
			{
				if (iLocal_24 == joaat("DOCUMENT_RARE_ORCHID_ORDER_1"))
				{
					func_27(iLocal_24, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				return true;
			}
			break;
	}
	return false;
}

bool func_12(var uParam0)
{
	int iVar0;

	switch (func_23(uParam0))
	{
		case 0:
			if (func_28(&(uParam0->f_1), "DISCO_EXAMINE" /* GXTEntry: "Inspect" */, vLocal_21, 0, joaat("INPUT_CONTEXT_Y"), 2.5f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, joaat("SHORT_TIMED_EVENT"), 0))
			{
				func_21(uParam0, 6);
			}
			break;
		case 6:
			if (!Global_40.f_9045.f_6)
			{
				Global_40.f_9045.f_6 = 1;
				if (func_29())
				{
					iVar0 = joaat("JOURNAL_TOWN_SECRET_ANNESBURG_AR");
				}
				else
				{
					iVar0 = joaat("JOURNAL_TOWN_SECRET_ANNESBURG_JN");
				}
				func_30(iVar0, 0);
				if (func_31())
				{
					Global_1357518 = iVar0;
				}
			}
			return true;
	}
	return false;
}

void func_13(var uParam0)
{
	SCRIPTS::_0xE7282390542F570D(iLocal_11);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_15(int iParam0, var uParam1)
{
	if (!func_32(iParam0))
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

bool func_16(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_17(int iParam0)
{
	Vector3 vVar0;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_16(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_33(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_34("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_35(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_36(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_37(iVar1);
				return true;
			}
			iVar3++;
		}
		func_37(iVar1);
	}
	return false;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_17(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_33(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_38(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_39(bParam2), iParam0, false);
	return iVar2;
}

bool func_20()
{
	return func_22(Global_1935630, (1 << 12));
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_22(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_23(var uParam0)
{
	return *uParam0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			return joaat("UI_NOTE_TAXI1") /* GXTEntry: @"Hunters Sought!~n~~n~If you are proficient with gun or arrow, we seek animals for a wildlife art exhibition.~n~Specimens must be in perfect condition. Low caliber kills only.~n~Ship at our expense the following:~n~One Adult Rabbit~n~One Average Squirrel~n~Send to the attention of Ms. L Hobbs, Strawberry" */;
		case joaat("TAXIDERMY_ORDER_02"):
			return joaat("UI_NOTE_TAXI2") /* GXTEntry: @"Hunters Sought!~n~~n~If you are proficient with gun or arrow, we seek animals for a wildlife art exhibition.~n~Specimens must be in perfect condition. Low caliber kills only.~n~Ship at our expense the following:~n~One Cardinal (Adult)~n~One Large Rat~n~One Adult Woodpecker~n~Send to the attention of Ms. L Hobbs, Strawberry" */;
		case joaat("TAXIDERMY_ORDER_03"):
			return joaat("UI_NOTE_TAXI3") /* GXTEntry: @"Hunters Sought!~n~~n~If you are proficient with gun or arrow, we seek animals for a wildlife art exhibition.~n~Specimens must be in perfect condition. Low caliber kills only.~n~Ship at our expense the following:~n~One Cedar Waxwing~n~One Adult Bat~n~One Bluejay~n~One Crow~n~One Adult Beaver~n~Send to the attention of Ms. L Hobbs, Strawberry" */;
		case joaat("TAXIDERMY_ORDER_04"):
			return joaat("UI_NOTE_TAXI4") /* GXTEntry: @"Hunters Sought!~n~~n~If you are proficient with gun or arrow, we seek animals for a wildlife art exhibition.~n~Specimens must be in perfect condition. Low caliber kills only.~n~Ship at our expense the following:~n~One Songbird~n~One Sparrow~n~One Toad~n~One Skunk~n~One Bullfrog~n~Send to the attention of Ms. L Hobbs, Strawberry" */;
		case joaat("TAXIDERMY_ORDER_05"):
			return joaat("UI_NOTE_TAXI5") /* GXTEntry: @"Hunters Sought!~n~~n~If you are proficient with gun or arrow, we seek animals for a wildlife art exhibition.~n~Specimens must be in perfect condition. Low caliber kills only.~n~Ship at our expense the following:~n~One Chipmunk~n~One Opossum~n~One Oriole~n~One Robin~n~Send to the attention of Ms. L Hobbs, Strawberry" */;
		case joaat("EXOTIC_STAGE_02"):
			return joaat("UI_NOTE_ORCHID1") /* GXTEntry: "Lady of the Night Orchid" */;
		case joaat("EXOTIC_STAGE_03"):
			return joaat("UI_NOTE_ORCHID1") /* GXTEntry: "Lady of the Night Orchid" */;
		case joaat("EXOTIC_STAGE_04"):
			return joaat("UI_NOTE_ORCHID1") /* GXTEntry: "Lady of the Night Orchid" */;
		case joaat("EXOTIC_STAGE_05"):
			return joaat("UI_NOTE_ORCHID1") /* GXTEntry: "Lady of the Night Orchid" */;
		case joaat("EXOTIC_STAGE_06"):
			return joaat("UI_NOTE_ORCHID1") /* GXTEntry: "Lady of the Night Orchid" */;
		default:
			break;
	}
	return 2;
}

Vector3 func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -3732.461f, -2605.977f, -13.91241f };
		case 1:
			return { 1236.721f, -1296.441f, 75.90266f };
		case 2:
			return { 2728.906f, -1403.663f, 45.202f };
		case 3:
			return { -1769.455f, -382.164f, 156.7495f };
		case 4:
			return { -179.8508f, 620.9136f, 113.0321f };
		case 5:
			return { 2980.859f, 571.5723f, 43.63646f };
		case 6:
			return { -3733.848f, -2600.76f, -13.92551f };
		case 7:
			return { 1229.999f, -1294.989f, 75.90269f };
		case 8:
			return { 2730.457f, -1406.999f, 45.20212f };
		case 9:
			return { -1759.404f, -381.9014f, 156.756f };
		case 10:
			return { -178.1234f, 638.183f, 113.0897f };
		case 11:
			return { 2983.473f, 573.9523f, 43.60193f };
		case 12:
			return { 2932.617f, 1266.367f, 43.64105f };
		case 13:
			return { 2952.36f, 519.3206f, 44.4904f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_26(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_40(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_27(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	if (!func_41(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_42(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_43(iParam0, bParam2);
	iVar2 = 0;
	if (func_19(iParam0, 0, 0) == 0)
	{
		if (func_44(iParam0))
		{
			iVar5 = func_45(iParam0);
			iVar6 = func_46(iVar5);
			iVar7 = func_47(iVar6) + 1;
			func_48(iVar5);
			if (func_49(38))
			{
				func_50(483, 0);
			}
			else
			{
				func_50(482, 0);
			}
			if (iVar7 == func_51(iVar6))
			{
				func_27(func_52(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_53() && func_54(4))
				{
					if (func_53() && (func_55(38) || func_49(38)))
					{
						func_57(38, func_52(iVar6), 0, 0, func_56(), 0, -1, 0);
						func_58(2);
					}
					else
					{
						func_57(38, func_52(iVar6), 0, 0, func_56(), 0, -1, 0);
						func_58(1);
					}
				}
			}
			else if (func_53() && func_54(4))
			{
				if (func_53() && (func_55(38) || func_49(38)))
				{
					func_57(38, 0, 0, 0, func_56(), 0, -1, 0);
					func_58(2);
				}
				else
				{
					func_57(38, 0, 0, 0, func_56(), 0, -1, 0);
					func_58(1);
				}
			}
			if (func_53() && func_54(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_53() && (func_55(38) || func_49(38)))
					{
						func_59(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_59(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_17(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_60(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_60(iParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_60(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_61(iParam0, (1 << 23)) && !func_62(28))
	{
		func_63(28);
	}
	if (!bVar3)
	{
		if (func_60(iParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_64(iParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				iVar1 = func_66(func_65(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_1() == -1)
					{
						func_67(iVar1);
					}
					if (func_68(0) && func_69(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_70(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_1() == -1)
					{
						func_67(iParam0);
					}
					if (func_68(0) && func_69(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_70(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_17(iParam0) == joaat("WEAPON"))
		{
			if (!func_71(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_17(iParam0) == joaat("AMMO") && func_72(iParam0))
		{
			if (!func_73(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_74(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_75(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_77(func_76(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_77(func_78(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_60(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_79(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_50(498, 0);
				}
			}
			if (func_60(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_60(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_80(iParam0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_60(iParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_USED")) && func_60(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_50(484, 0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_60(iParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_60(iParam0, 589988438))
		{
			if (func_81())
			{
				func_82(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_60(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_83(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_84(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_85(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_60(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_86(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_87();
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_88(iParam0, iParam1);
			func_89(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_60(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_90(iParam0, 0, 0, 0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_60(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_80(iParam0);
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_1() != -1)
			{
				return 0;
			}
			func_91(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE") /* GXTEntry: "Special Lake Lure" */:
					if (!func_9(joaat("DOCUMENT_PAMPHLET_SPECIAL_LAKE_LURE") /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_27(joaat("DOCUMENT_PAMPHLET_SPECIAL_LAKE_LURE") /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER") /* GXTEntry: "Special River Lure" */:
					if (!func_9(joaat("DOCUMENT_PAMPHLET_SPECIAL_RIVER_LURE") /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_27(joaat("DOCUMENT_PAMPHLET_SPECIAL_RIVER_LURE") /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP") /* GXTEntry: "Special Swamp Lure" */:
					if (!func_9(joaat("DOCUMENT_PAMPHLET_SPECIAL_SWAMP_LURE") /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_27(joaat("DOCUMENT_PAMPHLET_SPECIAL_SWAMP_LURE") /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE") /* GXTEntry: "Lake Lure" */:
					if (!func_9(joaat("DOCUMENT_PAMPHLET_LAKE_LURE") /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_27(joaat("DOCUMENT_PAMPHLET_LAKE_LURE") /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER") /* GXTEntry: "River Lure" */:
					if (!func_9(joaat("DOCUMENT_PAMPHLET_RIVER_LURE") /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_27(joaat("DOCUMENT_PAMPHLET_RIVER_LURE") /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP") /* GXTEntry: "Swamp Lure" */:
					if (!func_9(joaat("DOCUMENT_PAMPHLET_SWAMP_LURE") /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_27(joaat("DOCUMENT_PAMPHLET_SWAMP_LURE") /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_61(iParam0, 4))
		{
			if (!func_49(42))
			{
				func_92(iParam0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_93(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1") /* GXTEntry: "Legend of the East Satchel" */:
					iVar8 = joaat("KIT_POUCH_LEGENDARY"); /* GXTEntry: "Legend of the East Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1") /* GXTEntry: "Tonics Satchel" */:
					iVar8 = joaat("KIT_POUCH_REMEDIES"); /* GXTEntry: "Tonics Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1") /* GXTEntry: "Ingredients Satchel" */:
					iVar8 = joaat("KIT_POUCH_INGREDIENTS"); /* GXTEntry: "Ingredients Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1") /* GXTEntry: "Kit Satchel" */:
					iVar8 = joaat("KIT_POUCH_KIT"); /* GXTEntry: "Kit Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1") /* GXTEntry: "Provisions Satchel" */:
					iVar8 = joaat("KIT_POUCH_PROVISIONS"); /* GXTEntry: "Provisions Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1") /* GXTEntry: "Materials Satchel" */:
					iVar8 = joaat("KIT_POUCH_MATERIALS"); /* GXTEntry: "Materials Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1") /* GXTEntry: "Valuables Satchel" */:
					iVar8 = joaat("KIT_POUCH_VALUABLES"); /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_27(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE") /* GXTEntry: "Bundle of Arrows" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE") /* GXTEntry: "Poison Throwing Knives" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN") /* GXTEntry: "Live Crickets" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN") /* GXTEntry: "Live Worms" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER") /* GXTEntry: "Upgraded Off-Hand Holster" */:
				func_63(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_94(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER") /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_95(&iVar9, 0))
				{
					func_69(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER") /* GXTEntry: "Upgraded Bandolier" */:
				if (func_1() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_94(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER") /* GXTEntry: "Upgraded Bandolier" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS") /* GXTEntry: "Binoculars" */:
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT") /* GXTEntry: "The Legend Of The East" */:
				func_50(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_96();
				Global_40.f_11095.f_61 += 0.1f;
				func_97();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_98();
				Global_40.f_11095.f_63 += 0.1f;
				func_99();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_100();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED") /* GXTEntry: "Map" */:
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01") /* GXTEntry: "Jack Hall Gang Map 1" */:
				func_101(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_102(499813453, 0);
				func_103(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02") /* GXTEntry: "Jack Hall Gang Map 2" */:
				func_101(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_102(499813453, 0);
				func_103(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03") /* GXTEntry: "Jack Hall Gang Map 3" */:
				func_101(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_102(499813453, 0);
				func_103(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04") /* GXTEntry: "High Stakes Treasure Map 1" */:
				func_101(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_102(666607663, 0);
				func_104(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05") /* GXTEntry: "High Stakes Treasure Map 2" */:
				func_101(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_102(666607663, 0);
				func_104(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06") /* GXTEntry: "High Stakes Treasure Map 3" */:
				func_101(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_102(666607663, 0);
				func_104(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07") /* GXTEntry: "The Poisonous Trail Map 1" */:
				func_101(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_102(-220219788, 0);
				func_105(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08") /* GXTEntry: "The Poisonous Trail Map 2" */:
				func_101(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_102(-220219788, 0);
				func_105(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09") /* GXTEntry: "The Poisonous Trail Map 3" */:
				func_101(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_102(-220219788, 0);
				func_105(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10") /* GXTEntry: "Le Tresor des Morts Map 1" */:
				func_101(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_102(218622660, 0);
				func_106(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11") /* GXTEntry: "Le Tresor des Morts Riddle Note" */:
				func_101(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_102(218622660, 0);
				func_106(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13") /* GXTEntry: "The Elemental Trail Map 1" */:
				func_101(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_102(390004462, 0);
				func_107(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14") /* GXTEntry: "The Elemental Trail Map 2" */:
				func_101(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_102(390004462, 0);
				func_107(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15") /* GXTEntry: "The Elemental Trail Map 3" */:
				func_101(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_102(390004462, 0);
				func_107(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16") /* GXTEntry: "Landmarks of Riches Map 1" */:
				func_101(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_102(6410548, 0);
				func_108(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17") /* GXTEntry: "Landmarks of Riches Map 2" */:
				func_101(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_102(6410548, 0);
				func_108(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18") /* GXTEntry: "Landmarks of Riches Map 3" */:
				func_101(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_102(6410548, 0);
				func_108(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19") /* GXTEntry: "Landmarks of Riches Map 4" */:
				func_101(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_102(6410548, 0);
				func_108(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM") /* GXTEntry: "Aged Pirate Rum" */:
				func_110(242, func_109(joaat("CONSUMABLE_AGED_PIRATE_RUM") /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER") /* GXTEntry: "Ginseng Elixir" */:
				func_110(240, func_109(joaat("CONSUMABLE_GINSENG_ELIXIER") /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT") /* GXTEntry: "Valerian Root" */:
				func_110(241, func_109(joaat("CONSUMABLE_VALERIAN_ROOT") /* GXTEntry: "Valerian Root" */), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED") /* GXTEntry: "Special Health Cure" */:
			case joaat("CONSUMABLE_POTENT_MEDICINE") /* GXTEntry: "Potent Health Cure" */:
			case joaat("CONSUMABLE_MEDICINE") /* GXTEntry: "Health Cure" */:
			case joaat("CONSUMABLE_MOONSHINE") /* GXTEntry: "Moonshine" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_111(594, joaat("TF_FORTIFY_TANK1") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE") /* GXTEntry: "Potent Bitters" */:
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM") /* GXTEntry: "Cocaine Gum" */:
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED") /* GXTEntry: "Special Bitters" */:
			case joaat("CONSUMABLE_RESTORATIVE") /* GXTEntry: "Bitters" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_111(594, joaat("TF_FORTIFY_TANK2") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL") /* GXTEntry: "Snake Oil" */:
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL") /* GXTEntry: "Potent Snake Oil" */:
			case joaat("CONSUMABLE_CHEWING_TOBACCO") /* GXTEntry: "Chewing Tobacco" */:
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED") /* GXTEntry: "Special Snake Oil" */:
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_111(594, joaat("TF_FORTIFY_TANK3") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED") /* GXTEntry: "Special Miracle Tonic" */:
			case joaat("CONSUMABLE_TONIC") /* GXTEntry: "Miracle Tonic" */:
			case joaat("CONSUMABLE_POTENT_TONIC") /* GXTEntry: "Potent Miracle Tonic" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_111(594, joaat("TF_FORTIFY_TANK4") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART") /* GXTEntry: "Lamb Heart" */:
			case joaat("CONSUMABLE_MEAL_PRIME_RIB") /* GXTEntry: "Prime Rib" */:
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH") /* GXTEntry: "High Quality Beef Stew" */:
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL") /* GXTEntry: "Regional Beef Stew" */:
			case joaat("CONSUMABLE_MEAL_CONSOMME") /* GXTEntry: "Consomme" */:
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH") /* GXTEntry: "Fried Catfish" */:
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN") /* GXTEntry: "Prairie Chicken" */:
			case joaat("CONSUMABLE_MEAL_LAMB_FRY") /* GXTEntry: "Lamb Fry" */:
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW") /* GXTEntry: "Oyster Stew" */:
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP") /* GXTEntry: "Turtle Soup" */:
			case joaat("CONSUMABLE_MEAL_OATMEAL") /* GXTEntry: "Oatmeal" */:
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH") /* GXTEntry: "Corned Beef Hash" */:
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF") /* GXTEntry: "Roast Beef" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_111(595, joaat("TF_FORTIFY_CORE1") /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS") /* GXTEntry: "High Quality Beef and Eggs Stew" */:
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS") /* GXTEntry: "Regional Beef and Eggs Stew" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_111(595, joaat("TF_FORTIFY_CORE2") /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC") /* GXTEntry: "Hair Tonic" */:
				func_50(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE") /* GXTEntry: "Hair Pomade" */:
				func_50(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX") /* GXTEntry: "Premium Cigarettes" */:
				func_50(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_27(func_112(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_27(func_113(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG") /* GXTEntry: "Ground Coffee" */:
				if (func_62(1))
				{
					func_50(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL") /* GXTEntry: "Gun Oil" */:
				func_50(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE") /* GXTEntry: "Mortar and Pestle" */:
				if (func_1() == -1)
				{
					iParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP"); /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT") /* GXTEntry: "Coffee Percolator" */:
				func_50(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_114(&iVar10);
		if (!func_115(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_68(0))
		{
			return 1;
		}
		if (func_17(iParam0) == joaat("CLOTHING"))
		{
			func_116(iParam0);
		}
		if (func_60(iParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_117(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_68(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_27(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_118(iVar2, 0);
		}
	}
	sVar35 = { func_119(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_120(iParam0);
	if (fParam6 > 0.0f)
	{
		if (func_60(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_121(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_122(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_28(var uParam0, char* sParam1, Vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_123(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_124(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, (1 << 30), 0, iParam18, 0, 0);
			func_125(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_126(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		else
		{
			if (func_127(vParam2))
			{
				return false;
			}
			*uParam0 = func_128(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		if (fParam8 != 0.0f)
		{
			func_129(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_130(1))
			{
				func_131(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_132(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_133(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_131(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_131(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0.0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_130(1))
		{
			func_131(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_123(*uParam0))
			{
				func_134(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_135(*uParam0, 1)) || (bParam17 && func_136(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0.0f)
			{
				func_137(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0.0f)
			{
				func_138(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_134(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_29()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_30(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_139(1);
	}
}

bool func_31()
{
	int iVar0;

	if (!func_9(joaat("DOCUMENT_PLAYER_JOURNAL") /* GXTEntry: "Journal" */, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!func_140(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_141(Global_35, joaat("SCRIPT_TASK_ENTER_ANIM_SCENE")))
	{
		return false;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_Y"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_B"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_RT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
	{
		return false;
	}
	iVar0 = joaat("DOCUMENT_PLAYER_JOURNAL"); /* GXTEntry: "Journal" */
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_39(0), iVar0, false))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_142();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, joaat("BOOK@W15-8_H20-6_INFINITE_PAGES_UNHOLSTER"), 1, 0, -1.0f);
	return true;
}

bool func_32(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_17(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_60(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_143(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_34(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_39(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_35(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_36(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_37(int iParam0)
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

int func_38(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_144(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_146(&sVar0, func_145(0));
	}
	if (!func_147(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_37(iVar18);
	return iVar19;
}

int func_39(bool bParam0)
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

float func_40(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_41(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_148(iParam0) && func_149(iParam0))
		{
			func_150(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_42(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_151(iParam0, iParam1);
	sVar0 = { func_152(iParam0, 0, 1) /*5*/ };
	iVar5 = func_153(iParam0, &sVar0, 0, 0);
	iVar6 = func_154(iParam0, 0);
	if ((iVar5 > 1 && !func_155()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_60(iParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_50(583, 1);
		}
		else
		{
			func_50(582, 0);
		}
	}
	if (func_156(iParam0, &sVar0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_157(iParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
		case -1239610997:
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_CARD_W6_5_H10_7"):
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
		case 10252101:
		case joaat("CI_TAG_CARD_W10_7_H6_5"):
		case joaat("CI_TAG_PAPER_NEWSPAPER"):
		case 632545869:
		case joaat("CI_TAG_PAPER_W10_16_H15_24"):
		case joaat("CI_TAG_PAPER_D2_H32_ROLLED"):
		case joaat("CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL"):
		case joaat("CI_TAG_PAPER_W17_78_H12_7"):
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_44(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_45(iParam0) != 0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_158())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_159(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_46(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_158())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_46(iVar0))
		{
			if (func_9(func_159(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_48(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_160(48);
	func_161(0, -1);
}

bool func_49(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_79(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_162(iParam0, &iVar0, &iVar1);
	if (!func_163(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_164(iVar0, iVar1);
}

int func_51(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_52(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_53()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_54(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_79(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_55(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_165(iParam0))
	{
		return false;
	}
	return func_166(Global_1347702[iParam0 /*49*/].f_15);
}

int func_56()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_9(func_167(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_53() && (func_55(38) || func_49(38)))
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
			if (func_53() && (func_55(39) || func_49(39)))
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
			iVar9 = func_168(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO"); /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_53() && (func_55(41) || func_49(41)))
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
			if (func_53() && (func_55(49) || func_49(49)))
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
			iVar9 = func_168(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS"); /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = joaat("COL_TX_INTRO"); /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_169(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_170(iParam0, iVar13, iVar14))
	{
	}
	if (func_171(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_172(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_173(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_174(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_175(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_58(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_53() && (func_55(38) || func_49(38)))
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
			if (func_53() && (func_55(39) || func_49(39)))
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
			if (func_53() && (func_55(49) || func_49(49)))
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
		if (func_53() && (func_55(38) || func_49(38)))
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
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */;
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_178(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_177(func_52(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_53() && (func_55(39) || func_49(39)))
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
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_53() && (func_55(49) || func_49(49)))
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
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_176(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_60(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, joaat("TAG_ITEM_PROPERTY")))
	{
		return true;
	}
	return false;
}

bool func_61(int iParam0, int iParam1)
{
	if (!func_16(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

bool func_62(int iParam0)
{
	if (!func_179(iParam0))
	{
		return false;
	}
	return func_180(iParam0);
}

void func_63(int iParam0)
{
	if (!func_179(iParam0))
	{
		return;
	}
	func_181(iParam0);
	func_182(iParam0);
}

int func_64(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES") /* GXTEntry: "Throwing Knife" */:
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES"); /* GXTEntry: "Throwing Knife" */
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED") /* GXTEntry: "Improved Throwing Knife" */:
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES"); /* GXTEntry: "Throwing Knife" */
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON") /* GXTEntry: "Poison Throwing Knife" */:
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES"); /* GXTEntry: "Throwing Knife" */
			break;
		case joaat("AMMO_DYNAMITE") /* GXTEntry: "Dynamite" */:
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE"); /* GXTEntry: "Dynamite" */
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE") /* GXTEntry: "Dynamite - Volatile" */:
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE"); /* GXTEntry: "Dynamite" */
			break;
		case joaat("AMMO_MOLOTOV") /* GXTEntry: "Fire Bottle" */:
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV"); /* GXTEntry: "Fire Bottle" */
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE") /* GXTEntry: "Fire Bottle - Volatile" */:
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV"); /* GXTEntry: "Fire Bottle" */
			break;
		case joaat("AMMO_TOMAHAWK") /* GXTEntry: "Tomahawk" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK"); /* GXTEntry: "Tomahawk" */
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT") /* GXTEntry: "Ancient Tomahawk" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT"); /* GXTEntry: "Ancient Tomahawk" */
			break;
		case joaat("AMMO_TOMAHAWK_HOMING") /* GXTEntry: "Tomahawk - Homing" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK"); /* GXTEntry: "Tomahawk" */
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED") /* GXTEntry: "Tomahawk - Improved" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK"); /* GXTEntry: "Tomahawk" */
			break;
		case joaat("AMMO_HATCHET") /* GXTEntry: "Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET"); /* GXTEntry: "Hatchet" */
			break;
		case joaat("AMMO_HATCHET_HUNTER") /* GXTEntry: "Hunter Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER"); /* GXTEntry: "Hunter Hatchet" */
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED") /* GXTEntry: "Rusted Hunter Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED"); /* GXTEntry: "Rusted Hunter Hatchet" */
			break;
		case joaat("AMMO_HATCHET_ANCIENT") /* GXTEntry: "Stone Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET"); /* GXTEntry: "Stone Hatchet" */
			break;
		case joaat("AMMO_HATCHET_CLEAVER") /* GXTEntry: "Cleaver" */:
			iVar0 = joaat("WEAPON_MELEE_CLEAVER"); /* GXTEntry: "Cleaver" */
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT") /* GXTEntry: "Double Bit Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT"); /* GXTEntry: "Double Bit Hatchet" */
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED") /* GXTEntry: "Rusted Double Bit Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED"); /* GXTEntry: "Rusted Double Bit Hatchet" */
			break;
		case joaat("AMMO_HATCHET_HEWING") /* GXTEntry: "Hewing Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING"); /* GXTEntry: "Hewing Hatchet" */
			break;
		case joaat("AMMO_HATCHET_VIKING") /* GXTEntry: "Viking Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING"); /* GXTEntry: "Viking Hatchet" */
			break;
		default:
			break;
	}
	if (func_16(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_183(iVar0) || func_184(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_66(int iParam0, bool bParam1)
{
	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_67(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_36(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_68(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_39(bParam0));
}

bool func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_152(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_185((398 + iVar28), 1);
			if (func_186(iParam0, &sVar0, iVar5, 0))
			{
				if (func_187(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_188(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_189(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_68(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_70(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_190(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return true;
			}
		}
	}
}

bool func_70(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_72(iParam0))
	{
		return false;
	}
	if (!func_68(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_71(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_66(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_1() == -1)
		{
			func_67(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_191(iVar0);
			}
		}
		if (!func_156(iParam0, &uVar1, 1, 0, 0))
		{
			func_150(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_192(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_69(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_69(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_69(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_193())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_194(iVar0))
				{
					func_69(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_69(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_195(Global_35, 2, 0, 1);
				if ((((func_36(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_62(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_36(iVar7) && func_62(24))
				{
					if (!func_69(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_69(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_69(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_50(480, 1);
	}
	return true;
}

bool func_72(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_72(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_36(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_9(joaat("PROVISION_TRINKET_CROW_BEAK") /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
	{
		iVar6 = BUILTIN::CEIL(((float)iVar6 * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_110(func_196(iParam0), func_109(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_79(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_50(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_68(0))
	{
		if (func_70(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_115(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_74(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_197()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_198(Global_35, iParam0, &uVar0))
		{
			func_94(PLAYER::PLAYER_PED_ID(), iParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH") /* GXTEntry: "Alligator Tooth Talisman" */:
			Global_40.f_11095.f_50 += 0.1f;
			func_100();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW") /* GXTEntry: "Bear Claw Talisman" */:
			Global_40.f_11095.f_49 += 0.1f;
			func_100();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN") /* GXTEntry: "Bison Horn Talisman" */:
			Global_40.f_11095.f_51 += 0.1f;
			func_100();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON") /* GXTEntry: "Eagle Talon Talisman" */:
			Global_40.f_11095.f_58 += 0.5f;
			func_98();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW") /* GXTEntry: "Raven Claw Talisman" */:
			Global_40.f_11095.f_60 += 0.2f;
			func_96();
			break;
	}
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH") /* GXTEntry: "Beaver Tooth Trinket" */:
			Global_40.f_11095.f_60 += 0.1f;
			func_96();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN") /* GXTEntry: "Tatanka Bison Horn Trinket" */:
			Global_40.f_11095.f_61 += 0.1f;
			func_97();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG") /* GXTEntry: "Cougar Fang Trinket" */:
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG") /* GXTEntry: "Coyote Fang Trinket" */:
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW") /* GXTEntry: "Fox Claw Trinket" */:
			Global_40.f_11095.f_58 += 0.5f;
			func_98();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE") /* GXTEntry: "Iguana Scale Trinket" */:
			Global_40.f_11095.f_63 += 0.1f;
			func_99();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW") /* GXTEntry: "Lion\'s Paw Trinket" */:
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER") /* GXTEntry: "Moose Antler Trinket" */:
			Global_40.f_11095.f_55 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER") /* GXTEntry: "Owl Feather Trinket" */:
			Global_40.f_11095.f_49 += 0.15f;
			Global_40.f_11095.f_50 += 0.15f;
			Global_40.f_11095.f_51 += 0.15f;
			func_100();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON") /* GXTEntry: "Hawk Talon Trinket" */:
			Global_40.f_11095.f_64 += 0.3f;
			func_199();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH") /* GXTEntry: "Shark Tooth Trinket" */:
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL") /* GXTEntry: "Turtle Shell Trinket" */:
			Global_40.f_11095.f_69 += 0.1f;
			func_200();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE") /* GXTEntry: "Cat Eye Trinket" */:
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_76(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> /*16*/ func_78(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

bool func_79(int iParam0, bool bParam1)
{
	switch (func_201(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_80(int iParam0)
{
	bool bVar0;

	bVar0 = func_60(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_202() < 3)
	{
		if (bVar0)
		{
			if (func_204(func_203(iParam0), iParam0))
			{
				func_110(79, func_109(func_203(iParam0)), 1);
			}
			else
			{
				func_110(78, func_109(func_203(iParam0)), 1);
			}
		}
		else
		{
			func_110(80, func_109(func_205(iParam0)), 1);
		}
	}
}

bool func_81()
{
	if (((((func_206(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1") /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_206(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2") /* GXTEntry: "Bounty Notice" */, 400)) || func_206(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1") /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_206(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2") /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_206(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1") /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_206(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2") /* GXTEntry: "Bounty Page" */, 400))
	{
		return true;
	}
	return false;
}

int func_82(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_207(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_208(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_209(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_83(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY") /* GXTEntry: "Letter from Ms. Hobbs" */:
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_59(51, 0, 0, 0, 0, -1, 0);
			func_210((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY") /* GXTEntry: "Invitation from Ms. Hobbs" */:
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_59(51, 0, 0, 0, 0, -1, 0);
			func_210((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES") /* GXTEntry: "Invitation from Deborah MacGuiness" */:
			func_57(39, 0, 0, 0, 0, 0, 1, 0);
			func_59(39, 0, 0, 0, 0, -1, 0);
			func_211(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH") /* GXTEntry: "Invitation from Jeremy Gill" */:
			func_57(41, 0, 0, 0, 0, 0, 1, 0);
			func_59(41, 0, 0, 0, 0, -1, 0);
			func_212(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS") /* GXTEntry: "Invitation from Francis Sinclair" */:
			func_57(49, 0, 0, 0, 0, 0, 1, 0);
			func_59(49, 0, 0, 0, 0, -1, 0);
			func_213(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01") /* GXTEntry: "Exotic Collector\'s List" */:
			func_57(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_214(1), 0, -1, 0);
			func_215(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02") /* GXTEntry: "Exotic Collector\'s List" */:
			func_57(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_214(2), 0, -1, 0);
			func_215(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03") /* GXTEntry: "Exotic Collector\'s List" */:
			func_57(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_214(4), 0, -1, 0);
			func_215(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04") /* GXTEntry: "Exotic Collector\'s List" */:
			func_57(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_214(8), 0, -1, 0);
			func_215(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05") /* GXTEntry: "Exotic Collector\'s List" */:
			func_57(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_214(16), 0, -1, 0);
			func_215(16);
			break;
	}
}

void func_84(int iParam0)
{
	if (func_216() == 1)
	{
		if (func_49(39))
		{
			func_50(342, 0);
		}
		else
		{
			func_50(343, 0);
			func_211(1);
		}
	}
	if (func_216() >= 30)
	{
		func_50(344, 0);
	}
	func_57(39, 0, 0, 0, 0, 0, -1, 0);
	func_59(39, 0, 0, func_216(), 30, 1, 0);
}

void func_85(int iParam0)
{
	if (func_217() == 1)
	{
		if (func_49(49))
		{
			func_50(409, 0);
		}
		else
		{
			func_50(410, 0);
			func_213(1);
		}
	}
	if (func_217() >= 10)
	{
		func_50(411, 0);
	}
	func_57(49, 0, 0, 0, 0, 0, -1, 0);
	func_59(49, 0, 0, func_217(), 10, 1, 0);
}

void func_86(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_50(437, 0);
			func_50(440, 0);
			func_218(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") /* GXTEntry: "Perfect Squirrel Carcass" */, &cVar0, 1, 0, 0);
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_59(51, 0, 0, cVar0, func_168(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_210(1);
			func_219(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_218(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") /* GXTEntry: "Perfect Cardinal Carcass" */, &cVar0, 1, 0, 0);
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_59(51, 0, 0, cVar0, func_168(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_210(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_218(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") /* GXTEntry: "Perfect Chipmunk Carcass" */, &cVar0, 1, 0, 0);
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_59(51, 0, 0, cVar0, func_168(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_210(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_218(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") /* GXTEntry: "Perfect Songbird Carcass" */, &cVar0, 1, 0, 0);
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_59(51, 0, 0, cVar0, func_168(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_210((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_50(438, 0);
			func_218(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &cVar0, 1, 0, 0);
			func_57(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_59(51, 0, 0, cVar0, func_168(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_210((1 << 15));
			Jump @494; // curOff = 480
			func_50(439, 0);
		}

void func_87()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_49(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_50(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_50(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_50(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_50(400, 0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_01")))
		{
			func_220(joaat("EXOTIC_STAGE_01"));
			if (func_6() == 0)
			{
				func_161(0, 10);
				iVar1 = func_221(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_222(iParam0) < func_223(iParam0))
					{
						func_57(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_59(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_49(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_50(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_50(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_50(401, 0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_02")))
		{
			func_220(joaat("EXOTIC_STAGE_02"));
			if (func_6() == 1)
			{
				func_161(0, 10);
				iVar1 = func_221(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_222(iParam0) < func_223(iParam0))
					{
						func_57(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_59(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_49(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_50(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_50(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_50(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_50(398, 0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_03")))
		{
			func_220(joaat("EXOTIC_STAGE_03"));
			if (func_6() == 2)
			{
				func_161(0, 10);
				iVar1 = func_221(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_224(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_225(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_160(48);
					}
					if (func_222(iParam0) < func_223(iParam0))
					{
						func_57(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_59(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_222(iParam0) < func_223(iParam0))
					{
						func_57(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_59(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_49(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_50(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_50(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_50(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_50(406, 0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_04")))
		{
			func_220(joaat("EXOTIC_STAGE_04"));
			if (func_6() == 3)
			{
				func_161(0, 10);
				iVar1 = func_221(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_222(iParam0) < func_223(iParam0))
					{
						func_57(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_59(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_49(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_50(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_50(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_50(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_50(403, 0);
			}
		}
		else if (func_60(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_05")))
		{
			func_220(joaat("EXOTIC_STAGE_05"));
			if (func_6() == 4)
			{
				func_161(0, 10);
				iVar1 = func_221(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_222(iParam0) < func_223(iParam0))
					{
						func_57(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_59(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_89(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_224(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_225(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_160(48);
		}
	}
}

void func_90(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_9(func_8(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_226(iParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_227(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_82(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR") /* GXTEntry: "$1.00" */:
			func_82(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS") /* GXTEntry: "$5.00" */:
			func_82(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS") /* GXTEntry: "$10.00" */:
			func_82(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD") /* GXTEntry: "Bill Fold" */:
			func_82(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML") /* GXTEntry: "Small Bill Fold" */:
			func_82(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK") /* GXTEntry: "Bill Stack" */:
			func_82(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN") /* GXTEntry: "Coin" */:
			func_82(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE") /* GXTEntry: "Coin Purse" */:
			func_82(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK") /* GXTEntry: "Coin Sack" */:
			func_82(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK") /* GXTEntry: "Coin Stack" */:
			func_82(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP") /* GXTEntry: "Money Clip" */:
			func_82(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK") /* GXTEntry: "Money Stack" */:
			func_82(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE") /* GXTEntry: "Money Pile" */:
			if (!func_228())
			{
				func_82(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM") /* GXTEntry: "Change Cup" */:
			func_82(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG") /* GXTEntry: "Coin Cup" */:
			func_82(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH") /* GXTEntry: "Money" */:
			func_82(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON") /* GXTEntry: "$50.00" */:
			func_82(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE") /* GXTEntry: "$100.00" */:
			func_82(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL") /* GXTEntry: "$200.00" */:
			func_82(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH") /* GXTEntry: "$45.00" */:
			func_82(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1") /* GXTEntry: "$50.00" */:
			func_82(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2") /* GXTEntry: "$70.00" */:
			func_82(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3") /* GXTEntry: "$100.00" */:
			func_82(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4") /* GXTEntry: "$120.00" */:
			func_82(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5") /* GXTEntry: "$150.00" */:
			func_82(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER") /* GXTEntry: "$350.00" */:
			func_82(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_92(int iParam0)
{
	if (func_49(41))
	{
		func_50(363, 0);
	}
	else
	{
		func_50(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY") /* GXTEntry: "Legendary Bullhead Catfish" */:
			func_229(joaat("LEGENDARY_FISH_01"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY") /* GXTEntry: "Legendary Chain Pickerel" */:
			func_229(joaat("LEGENDARY_FISH_02"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY") /* GXTEntry: "Legendary Lake Sturgeon" */:
			func_229(joaat("LEGENDARY_FISH_03"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY") /* GXTEntry: "Legendary Largemouth Bass" */:
			func_229(joaat("LEGENDARY_FISH_04"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY") /* GXTEntry: "Legendary Longnose Gar" */:
			func_229(joaat("LEGENDARY_FISH_05"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY") /* GXTEntry: "Legendary Muskie" */:
			func_229(joaat("LEGENDARY_FISH_06"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY") /* GXTEntry: "Legendary Perch" */:
			func_229(joaat("LEGENDARY_FISH_07"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY") /* GXTEntry: "Legendary Redfin Pickerel" */:
			func_229(joaat("LEGENDARY_FISH_08"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY") /* GXTEntry: "Legendary Rock Bass" */:
			func_229(joaat("LEGENDARY_FISH_09"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY") /* GXTEntry: "Legendary Smallmouth Bass" */:
			func_229(joaat("LEGENDARY_FISH_10"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY") /* GXTEntry: "Legendary Sockeye Salmon" */:
			func_229(joaat("LEGENDARY_FISH_11"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY") /* GXTEntry: "Legendary Steelhead Trout" */:
			func_229(joaat("LEGENDARY_FISH_12"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY") /* GXTEntry: "Legendary Bluegill" */:
			func_229(joaat("LEGENDARY_FISH_13"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_161(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY") /* GXTEntry: "Legendary Northern Pike" */:
			func_229(joaat("LEGENDARY_FISH_14"));
			func_230(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_231(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_93(int iParam0, int iParam1)
{
	var uVar0;

	func_143(iParam0, iParam1, &uVar0);
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_152(iParam1, 1, 0) /*5*/ };
		iParam3 = func_232(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_234(iParam1, iParam2, func_233(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_235(1, (func_1() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_233(iParam3, 1) /*11*/])
			{
				func_236(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_237((1 << 15)) && iParam1 != Global_1946054.f_57[func_233(iParam3, 1) /*11*/])
			{
				func_238();
				func_236(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_236(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_239(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_236(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_240(0);
			func_241(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_236(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar17;
	int iVar18;
	int iVar19;

	sVar3.f_9 = joaat("SLOTID_NONE");
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_195(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_195(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_34("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_35(&sVar3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar3.f_4))
				{
					if (!bParam1)
					{
						if (sVar3.f_4 == iVar18 || sVar3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = sVar3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_37(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_96()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_97()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_98()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_99()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_100()
{
	func_242();
	func_243();
	func_244();
}

void func_101(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	Vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar3 = "COL_TH_SUB_JACK_HALL" /* GXTEntry: "Jack Hall Gang Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL"); /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar3 = "COL_TH_SUB_HIGH_STAKES" /* GXTEntry: "High Stakes Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES"); /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL" /* GXTEntry: "The Poisonous Trail Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL"); /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS" /* GXTEntry: "Le Tresor des Morts Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS"); /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL" /* GXTEntry: "The Elemental Trail Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL"); /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES" /* GXTEntry: "Landmarks Of Riches Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES"); /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01" /* GXTEntry: "You\'ve acquired a Map that is said to show the location of the notorious Jack Hal" +
    "l Gang\'s lost Treasure." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02" /* GXTEntry: "The first Map leads to a narrow cliff on the side of Caliban\'s Seat, where a seco" +
    "nd Map and the next part of the Treasure\'s trail is found." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03" /* GXTEntry: "Having reached inside what looks to be a crudely made Inuksuk at Cotorra Springs," +
    " you discover the final Jack Hall Gang Treasure Map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04" /* GXTEntry: "Following all the clues to the Jack Hall Gang Treasure you uncover 2 Gold Bars bu" +
    "ried on a small island at O\'Creagh\'s Run." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01" /* GXTEntry: "You\'ve acquired a Map leading to a Treasure that is rumored to be cursed. Many ha" +
    "ve died looking for it." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02" /* GXTEntry: "You have found another Treasure Map in an alcove behind Cumberland Falls." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03" /* GXTEntry: "After crossing the snowy West Grizzlies, you reach Barrow Lagoon where you discov" +
    "er another Map and some Loot inside a log bridge." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04" /* GXTEntry: "Using the final Map and navigating a treacherous path along a cliff edge between " +
    "Bacchus and Fort Wallace, you find 3 Gold Bars in a small crevice." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01" /* GXTEntry: "A Map is discovered inside a small chest nestled under the bed in an old shack ne" +
    "ar Cairn Lake." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02" /* GXTEntry: "The first Map leads you to a hill west of Ringneck Creek where you find a second " +
    "Map hidden within the hollow of an old decaying stump." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03" /* GXTEntry: "The second map guides you to a Serpent Mound, near Kamassa River in Roanoke Ridge" +
    ". Reaching into the eye of the serpent, you find a third Map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04" /* GXTEntry: "The third Map leads you through a network of tunnels hidden behind the waterfall " +
    "at the polluted Elysian Pool. At the end of your path, you find 4 Gold Bars hidd" +
    "en behind a pile of rocks." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01" /* GXTEntry: "You discover a Map in an old jail cell that lies on the edge of a small settlemen" +
    "t that was destroyed by fire." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL" /* GXTEntry: "Use the riddle to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02" /* GXTEntry: "Reaching up into a high ledge in an old smugglers tunnel, you discover a Riddle w" +
    "hich you can only guess is a clue that will lead to the Treasure\'s location." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03" /* GXTEntry: "Deciphering the Riddle has led you to a crypt in the St. Denis cemetery. Pulling " +
    "off a loose plaque reveals 6 Gold Bars hidden within the wall of the crypt." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01" /* GXTEntry: "Suspended in the air, hanging from the side of a cliff, a dead explorer met his u" +
    "nfortunate end after getting tangled up and stuck. After freeing the corpse and " +
    "looting it, a map was discovered." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02" /* GXTEntry: "Reaching up the fire-scorched, blackened chimney in the ruins at Grunhollow, a se" +
    "cond map was found." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03" /* GXTEntry: "After carefully navigating across the raised trough near the old water tower at B" +
    "enedict Point, another map was uncovered in the gap between the planks." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04" /* GXTEntry: "By following the final map, a gold bar and Crow\'s Beak trinket were unearthed ben" +
    "eath a rock at Coot\'s Chapel Cemetery." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01" /* GXTEntry: "A gold earring and treasure map were discovered hidden behind a plaque on the obe" +
    "lisk west of Owanjila." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02" /* GXTEntry: "Following the directions on the map led to a miniature church. Searching the stee" +
    "ple on its roof revealed a silver earring and another map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03" /* GXTEntry: "Having discovered the mysterious hill home, a gold-jointed bracelet and third tre" +
    "asure map were discovered after reaching through one of the shattered windows." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04" /* GXTEntry: "Reaching into the hole at the base of an old tree trunk at Bolger Glade uncovered" +
    " a silver chain bracelet and a map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05" /* GXTEntry: "One of the western side stones that make up the base of the sundial on Mount Shan" +
    "n was lifted to reveal a hole containing 6 gold bars." */;
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE" /* GXTEntry: "You have completed Jack Hall Gang Treasure" */;
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE" /* GXTEntry: "You have completed High Stakes Treasure" */;
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE" /* GXTEntry: "You have completed The Poisonous Trail Treasure" */;
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE" /* GXTEntry: "You have completed Le Tresor des Morts Treasure" */;
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE" /* GXTEntry: "You have completed The Elemental Trail Treasure" */;
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE" /* GXTEntry: "You have completed Landmarks Of Riches Treasure" */;
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_102(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_JACK_HALL" /* GXTEntry: "Jack Hall Gang Treasure" */;
			iVar0 = joaat("COL_TH_SUB_JACK_HALL"); /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_HIGH_STAKES" /* GXTEntry: "High Stakes Treasure" */;
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES"); /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL" /* GXTEntry: "The Poisonous Trail Treasure" */;
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL"); /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS" /* GXTEntry: "Le Tresor des Morts Treasure" */;
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS"); /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL" /* GXTEntry: "The Elemental Trail Treasure" */;
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL"); /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES" /* GXTEntry: "Landmarks Of Riches Treasure" */;
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES"); /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */;
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE" /* GXTEntry: "Mission Complete" */;
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_176(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_103(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_104(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_105(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_106(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_107(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_108(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

int func_109(int iParam0)
{
	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_162(iParam0, &iVar0, &iVar1);
	if (!func_163(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_245(iParam0, (1 << 10)))
	{
		return;
	}
	func_164(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_111(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_162(iParam0, &iVar0, &iVar1);
	if (!func_163(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_245(iParam0, (1 << 10)))
	{
		return;
	}
	func_164(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_158())
	{
		return func_113();
	}
	iVar4 = (func_158() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_158())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_246(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_159(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_113()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_158());
	return func_159(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_114(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED") /* GXTEntry: "Opened Cigarettes" */:
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX"); /* GXTEntry: "Premium Cigarettes" */
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO"); /* GXTEntry: "Chewing Tobacco" */
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED") /* GXTEntry: "Opened Cigarettes" */:
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP"); /* GXTEntry: "Cigarettes" */
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM"); /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	sVar0 = { func_152(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_188(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_247(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return;
	}
	switch (func_64(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (iParam0 == joaat("KIT_BANDANA") && func_248(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_236(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_236(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_249(iParam0);
			if (func_250(iVar0))
			{
				func_251(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_236(30, iParam0, 0, 0, 0);
			}
			if (func_252() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_252() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */:
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */:
					case joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */:
						func_236(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_252() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */:
						func_236(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_253(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_254(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &iVar1))
				{
					func_236(33, iVar1, 0, 0, 0);
				}
			}
			func_236(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_255(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_94(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_63(24);
		if (func_95(&iVar2, 0))
		{
			func_69(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_117(int iParam0)
{
	if (func_60(iParam0, 943695443))
	{
		func_256(0, iParam0);
	}
	else if (func_60(iParam0, -2096528786))
	{
		func_256(1, iParam0);
	}
	else if (func_60(iParam0, -1094167013))
	{
		func_256(2, iParam0);
	}
	else if (func_60(iParam0, 1936654645))
	{
		func_256(3, iParam0);
	}
	else if (func_60(iParam0, 1306489306))
	{
		func_256(4, iParam0);
	}
	else if (func_60(iParam0, 435762317))
	{
		func_256(5, iParam0);
	}
	else if (func_60(iParam0, 1259363210))
	{
		func_256(6, iParam0);
	}
	else if (func_60(iParam0, 881398259))
	{
		func_256(7, iParam0);
	}
	else if (func_60(iParam0, -541549214))
	{
		func_256(8, iParam0);
	}
	else if (func_60(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_256(-1, iParam0);
	}
}

int func_118(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_257(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_258(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_119(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_16(iParam0, 0))
	{
		return sVar0;
	}
	if (func_60(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_1() == -1)
		{
			if (func_60(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_259(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_259(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_60(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_259(joaat("MEDICINE_ITEMS"));
	}
	if (func_60(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_259(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT") /* GXTEntry: "Flight Feather" */:
			if (func_1() == -1)
			{
				if (func_79(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_50(109, 1);
				}
			}
			break;
	}
}

void func_121(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_261(func_260(0));
	func_263(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP" /* GXTEntry: "~1w~ ~2~" */, sParam1, sVar0), "inventory_items", func_262(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_122(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_16(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_264())
	{
		func_265(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_266(iVar1 == 1, "ITEM_GET_PUMP" /* GXTEntry: "~1~" */, "ITEM_GET_PUMP_MULT" /* GXTEntry: "~2~x ~1~" */));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_266(iVar1 == 1, "ITEM_GET_PUMP" /* GXTEntry: "~1~" */, "ITEM_GET_PUMP_MULT" /* GXTEntry: "~2~x ~1~" */));
		}
		else if (bParam2 && func_61(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT" /* GXTEntry: "~2~x READ ~1~" */);
		}
		bVar0 = true;
	}
	iVar6 = func_17(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		sVar7.f_0 = "ITEMTYPE_UPGRADES";
		sVar7.f_1 = "itemtype_textures";
	}
	else if (!func_267(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(iParam0))
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
	sVar15 = func_268(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_109(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_60(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_109(iParam0));
	}
	func_263(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_123(int iParam0)
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

int func_124(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_269(iVar0, 2))
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
				func_270(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_125(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_123(iParam0))
	{
		return;
	}
	if (fParam1 <= 0.0f)
	{
		return;
	}
	iVar0 = func_271(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_126(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
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
		if (func_269(iVar0, 2))
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
		func_270(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0.0f, 0.0f, 0.0f, 0.0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_127(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_128(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_127(vParam2))
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
		if (func_269(iVar0, 2))
		{
			if (func_272(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
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
		func_270(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_129(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_123(iParam0))
	{
		return;
	}
	iVar0 = func_271(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

int func_130(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_131(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_123(iParam0))
	{
		return;
	}
	iVar0 = func_271(iParam0);
	if (bParam1)
	{
		func_273(iParam0, 4);
		func_274(iVar0, 1);
		func_275(iVar0, 1);
	}
	else
	{
		func_276(iParam0, 4);
		func_275(iVar0, 0);
	}
}

void func_132(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_123(iParam0))
	{
		return;
	}
	iVar0 = func_271(iParam0);
	func_274(iVar0, bParam1);
}

bool func_133(int iParam0, bool bParam1)
{
	if (bParam1 && !func_123(iParam0))
	{
		return false;
	}
	return !func_269(iParam0, 4);
}

void func_134(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_123(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_271(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_277(iVar0);
	*uParam0 = 0;
}

bool func_135(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_123(iParam0))
	{
		return false;
	}
	iVar0 = func_271(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_136(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_123(iParam0))
	{
		return false;
	}
	iVar0 = func_271(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_137(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_278(iParam0);
	if (bParam3)
	{
		func_279(iParam0, sParam1, iParam2);
	}
}

void func_138(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_208(iParam0, sParam4, iParam5);
	}
	func_209(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		func_280(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_281(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_140(int iParam0)
{
	return func_282(iParam0);
}

bool func_141(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_142()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_ACTION"), false);
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX") /* GXTEntry: "Revolver Cartridges - Regular" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED") /* GXTEntry: "Opened Revolver Cartridges" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS") /* GXTEntry: "Revolver Cartridges - Express" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS"); /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Revolver Cartridges - High Velocity" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY"); /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX") /* GXTEntry: "Pistol Cartridges - Regular" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED") /* GXTEntry: "Opened Pistol Cartridges" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS") /* GXTEntry: "Pistol Cartridges - Express" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS"); /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Pistol Cartridges - High Velocity" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY"); /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Regular" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED") /* GXTEntry: "Opened Rifle Cartridges" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS") /* GXTEntry: "Rifle Cartridges - Express" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS"); /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Rifle Cartridges - High Velocity" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY"); /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX") /* GXTEntry: "Repeater Cartridges - Regular" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED") /* GXTEntry: "Opened Repeater Cartridges" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS") /* GXTEntry: "Repeater Cartridges - Express" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS"); /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Repeater Cartridges - High Velocity" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY"); /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX") /* GXTEntry: "Shotgun Shells - Regular" */:
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED") /* GXTEntry: "Opened Shotgun Shells" */:
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG") /* GXTEntry: "Shotgun - Slug" */:
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG"); /* GXTEntry: "Shotgun - Slug" */
			break;
		case joaat("AMMO_22_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Varmint" */:
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22"); /* GXTEntry: "Rifle Cartridges - Varmint" */
			break;
	}
}

struct<18> /*144*/ func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (iParam0 != 0)
	{
		sVar0.f_0 = iParam0;
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

struct<4> /*32*/ func_145(bool bParam0)
{
	int iVar0;

	iVar0 = func_39(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_188(joaat("CARRIED_WEAPONS"), func_283(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_188(joaat("CARRIED_WEAPONS"), func_283(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_188(joaat("CARRIED_WEAPONS"), func_283(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_146(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_147(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_39(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_148(int iParam0)
{
	return func_17(iParam0) == joaat("WEAPON");
}

bool func_149(int iParam0)
{
	var uVar0;

	if (func_1() != -1)
	{
		return false;
	}
	if (func_61(iParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_156(iParam0, &uVar0, 1, 0, 0);
	}
	return func_9(iParam0, 1, 0);
}

void func_150(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_17(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_66(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_184(iVar0))
	{
		if (func_1() == -1)
		{
			func_67(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_19(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_122(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_151(int iParam0, int iParam1)
{
	int iVar0;

	if (func_60(iParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_284(iParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

struct<5> /*40*/ func_152(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_283(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_17(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_188(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_145(bParam1) /*4*/ };
			if (bParam2 && func_285(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_186(iParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else if (!func_186(iParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
				else if (func_187(iParam0, &sVar5, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
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
			sVar0 = { func_286(bParam1) /*4*/ };
			switch (func_64(iParam0))
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
			if (func_287(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_188(joaat("KIT_CAMP") /* GXTEntry: "Camp" */, sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP") /* GXTEntry: "Camp" */);
			}
			else if (func_287(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_188(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_288(sVar0, &sVar27, bParam1, 0))
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
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

int func_153(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	if (!func_68(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_289(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_39(bParam3), iParam0);
}

int func_154(int iParam0, bool bParam1)
{
	if (func_72(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_39(bParam1), iParam0, false);
}

bool func_155()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_53())
	{
		return false;
	}
	if (!func_79(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_79(Global_1835011[2 /*74*/].f_1, 1) && func_79(Global_1347702[120 /*49*/].f_15, 1)) && !func_79(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_79(Global_1835011[37 /*74*/].f_1, 1) && !func_79(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_79(Global_1835011[57 /*74*/].f_1, 1) && !func_79(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_79(Global_1835011[26 /*74*/].f_1, 1) && !func_79(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_79(Global_1835011[62 /*74*/].f_1, 1) && func_79(Global_1835011[63 /*74*/].f_1, 1)) && !func_79(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_79(Global_1835011[75 /*74*/].f_1, 1) && !func_79(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_79(Global_1835011[76 /*74*/].f_1, 1) && !func_79(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_79(Global_1835011[40 /*74*/].f_1, 1) && func_79(Global_1835011[41 /*74*/].f_1, 1)) && !func_79(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_79(Global_1835011[62 /*74*/].f_1, 1) && func_79(Global_1835011[63 /*74*/].f_1, 1)) && !func_79(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_79(Global_1835011[65 /*74*/].f_1, 1) && func_79(Global_1835011[66 /*74*/].f_1, 1)) && !func_79(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_290(&iParam0);
	if (!func_16(iParam0, 0))
	{
		return false;
	}
	if (!func_68(0))
	{
		bParam3 = true;
	}
	if (func_148(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_145(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_186(iParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_187(iParam0, &sVar4, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_285(iParam0, 1))
			{
				if (!func_186(iParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_187(iParam0, &sVar4, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_291(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_153(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_289(iParam0))
	{
		iVar28 = func_292(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_39(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_157(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(iParam0, &sVar0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (sVar0[iVar42 /*2*/].f_1 == iParam1)
			{
				return sVar0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_158()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

int func_159(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_160(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_293(iParam0);
	fVar1 = func_294(iParam0);
	if ((Global_1347477.f_117 || !func_62(31)) || !func_295(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_296(iVar0) >= 7)
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
	func_297(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_263(MISC::VAR_STRING(6, func_298(iParam0), fVar1), "itemtype_textures", func_299(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_161(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_300(&Global_0, 8);
	}
	if (!func_53() || func_1() != -1)
	{
		return;
	}
	func_300(&Global_0, 1);
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_301(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_302(iParam0))
	{
		return false;
	}
	if (func_303(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_245(iParam0, 1)) || func_304((1 << 15)))
	{
		if (!func_245(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_305())
	{
		return false;
	}
	return true;
}

void func_164(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_165(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_166(int iParam0)
{
	int iVar0;

	iVar0 = func_201(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_167(int iParam0)
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

int func_168(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_15(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_169(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_56() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */, func_306(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Found" */, func_307(), 12);
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
			else if (func_216() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Dinosaur Bones Posted" */, func_308(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Dinosaur Bones Found" */, func_216(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ" /* GXTEntry: "~1~ of ~2~ Legendary Fish Caught and Posted" */, func_309(), 13);
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
			else if (func_217() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Rock Faces Posted" */, func_310(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Rock Faces Found" */, func_217(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ" /* GXTEntry: "~1~ of ~2~ Carcasses Collected" */, sParam4, func_168(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_170(int iParam0, int iParam1, int iParam2)
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

bool func_171(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_172(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == joaat("CIGARETTE_CARDS"))
		{
			iVar2 = func_311(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_9(iVar2, 1, 0) || func_313(func_312(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_177(func_311(iVar0))), func_177(func_311(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_216() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_314(iVar0)), func_314(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_308() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_314(iVar0)), func_314(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_314(iVar0)), func_314(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			iVar2 = func_8(iParam3, func_315(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_222(iVar2) - iParam7) >= func_168(iParam3, func_316(iVar0));
				}
				else
				{
					bVar1 = func_222(iVar2) >= func_168(iParam3, func_316(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_222(iVar2) + iParam7) >= func_168(iParam3, func_316(iVar0));
			}
			else
			{
				bVar1 = func_222(iVar2) >= func_168(iParam3, func_316(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_317(iVar2)), func_317(iVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_318(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_319(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_319(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_217() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_320(iVar0)), func_320(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_310() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_320(iVar0)), func_320(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_320(iVar0)), func_320(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_8(iParam3, func_315(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_222(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_321(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_321(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_322(iVar2)), func_322(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_174(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_309() >= 13)
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

bool func_175(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_324(func_323(0)) && ((func_325(0) == 1 || func_325(0) == 8) || func_325(0) == 6))
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

int func_176(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_177(int iParam0)
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

int func_178(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

bool func_179(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_182(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_326(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_327(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_327(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_327(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_328(1);
			break;
		case 34:
			func_329(1);
			break;
		case 35:
			func_330(1);
			break;
		case 36:
			break;
		case 37:
			func_331(0);
			break;
		case 38:
			func_332(0);
			break;
		case 39:
			func_333(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && func_53()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_178("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_MANUAL_PAINT" /* GXTEntry: "Manual Painting" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_50(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_53()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_178("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_STAY_ACTIVE" /* GXTEntry: "Continued Free Fire" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_50(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_53()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_178("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_FATAL" /* GXTEntry: "Fatal Region Highlights" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_50(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_53()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_178("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_CRITICAL" /* GXTEntry: "Critical Region Highlights" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_50(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_1() == -1)
			{
				if (!func_255(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_334(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_193())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000"); /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_9(iVar0, 1, 0))
					{
						func_115(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_94(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_1() == -1)
			{
				if (!func_9(1013902307, 1, 0))
				{
					func_115(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_1() == -1)
			{
				if (!func_9(1013902307, 1, 0))
				{
					func_115(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_9(142640135, 1, 0))
				{
					func_115(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_1() == -1)
			{
				if (!func_9(786809402, 1, 0))
				{
					func_115(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_1() == -1)
			{
				if (!func_9(786809402, 1, 0))
				{
					func_115(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_9(-518019409, 1, 0))
				{
					func_115(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_335();
			break;
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_183(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_184(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -1783281882;
		case 2:
			return 1704602624;
		case 3:
			return 1214181762;
		case 4:
			return 1520605650;
		case 5:
			return 551482925;
		case 6:
			return 843929315;
		case 7:
			return 1974334822;
		case 8:
			return -1963435638;
		case 9:
			return -430578371;
		case 10:
			return -730381952;
		case 11:
			return -1500304973;
		case 12:
			return -253503777;
		case 13:
			return 1352275534;
		case 14:
			return 1666399168;
		case 15:
			return joaat("SLOTID_CAMP_DOG");
		case 16:
			return joaat("SLOTID_CAMP_DOG_COAT");
		case 17:
			return -1774867076;
		case 18:
			return joaat("SLOTID_CAMP_FLAG");
		case 19:
			return joaat("SLOTID_CAMP_FOLLOWER");
		case 20:
			return joaat("SLOTID_CAMP_FOLLOWER_OUTFIT");
		case 21:
			return joaat("SLOTID_CAMP_LOCKBOX");
		case 22:
			return joaat("SLOTID_CAMP_MUSIC");
		case 23:
			return joaat("SLOTID_CAMP_TENT");
		case 24:
			return joaat("SLOTID_CAMP_THEME");
		case 25:
			return joaat("SLOTID_CAMP_UPGRADE");
		case 26:
			return -6605744;
		case 27:
			return 953047564;
		case 28:
			return 769706682;
		case 29:
			return joaat("SLOTID_CARD_PROGRESSION");
		case 30:
			return -2047978619;
		case 31:
			return -586319254;
		case 32:
			return 249896112;
		case 33:
			return joaat("SLOTID_CARDS");
		case 34:
			return joaat("SLOTID_CARDS_DEADEYE");
		case 35:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_1");
		case 36:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_2");
		case 37:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_3");
		case 38:
			return joaat("SLOTID_CARRIED_WEAPONS");
		case 39:
			return joaat("SLOTID_CARRIED_WEAPONS_MODS");
		case 40:
			return joaat("SLOTID_CHALLENGE_PROGRESSION");
		case 41:
			return joaat("SLOTID_CHARACTER_0");
		case 42:
			return joaat("SLOTID_CHARACTER_1");
		case 43:
			return -382216265;
		case 44:
			return joaat("SLOTID_CHIPS_GAME");
		case 45:
			return 1704297235;
		case 46:
			return -1139016418;
		case 47:
			return 897705377;
		case 48:
			return 17961769;
		case 49:
			return 205582207;
		case 50:
			return 900740963;
		case 51:
			return -1369589344;
		case 52:
			return -1695823795;
		case 53:
			return -41453074;
		case 54:
			return 539767227;
		case 55:
			return 1210490314;
		case 56:
			return -399684751;
		case 57:
			return 2138893455;
		case 58:
			return -1617010487;
		case 59:
			return -832377028;
		case 60:
			return -428040245;
		case 61:
			return 1279288897;
		case 62:
			return -594897905;
		case 63:
			return -1360459240;
		case 64:
			return 1838428396;
		case 65:
			return -1467846997;
		case 66:
			return -490610263;
		case 67:
			return -1885413079;
		case 68:
			return 708884155;
		case 69:
			return -134459952;
		case 70:
			return -1912136700;
		case 71:
			return -1268031552;
		case 72:
			return 1177953227;
		case 73:
			return 2130805296;
		case 74:
			return 38093490;
		case 75:
			return -269153218;
		case 76:
			return -1995068011;
		case 77:
			return -164284834;
		case 78:
			return 1446463345;
		case 79:
			return 1501315823;
		case 80:
			return -750379482;
		case 81:
			return -929560937;
		case 82:
			return 608323241;
		case 83:
			return 1030796013;
		case 84:
			return 1915057434;
		case 85:
			return -1582276476;
		case 86:
			return 692059311;
		case 87:
			return 2062839241;
		case 88:
			return -1884531872;
		case 89:
			return -866434534;
		case 90:
			return -1252192421;
		case 91:
			return 1243288963;
		case 92:
			return -1953772189;
		case 93:
			return 754411745;
		case 94:
			return 545309006;
		case 95:
			return -1089810811;
		case 96:
			return 1957869400;
		case 97:
			return -241412332;
		case 98:
			return -1548010959;
		case 99:
			return 550150488;
		case 100:
			return 946565453;
		case 101:
			return 434443248;
		case 102:
			return -1709914938;
		case 103:
			return 366686112;
		case 104:
			return -1370063350;
		case 105:
			return 2126829550;
		case 106:
			return 226552910;
		case 107:
			return 721193431;
		case 108:
			return -315672460;
		case 109:
			return 623544501;
		case 110:
			return 259556714;
		case 111:
			return -2125361825;
		case 112:
			return 1078230356;
		case 113:
			return 1885364811;
		case 114:
			return 1630382737;
		case 115:
			return 1738245512;
		case 116:
			return 1540262216;
		case 117:
			return 1016871472;
		case 118:
			return 13829069;
		case 119:
			return 737051352;
		case 120:
			return 1734614610;
		case 121:
			return -208715295;
		case 122:
			return 1435062936;
		case 123:
			return 1483055553;
		case 124:
			return 380335002;
		case 125:
			return -1079385677;
		case 126:
			return 676610411;
		case 127:
			return 2145419552;
		case 128:
			return 657238733;
		case 129:
			return 1850579281;
		case 130:
			return -1923957384;
		case 131:
			return -1142828108;
		case 132:
			return -1400618531;
		case 133:
			return -1433857135;
		case 134:
			return 209987206;
		case 135:
			return joaat("SLOTID_COACH_INSURANCE");
		case 136:
			return joaat("SLOTID_COACH_LIVERY");
		case 137:
			return -59178517;
		case 138:
			return 2134884601;
		case 139:
			return 651707517;
		case 140:
			return -633788535;
		case 141:
			return 116394463;
		case 142:
			return -1196973875;
		case 143:
			return 801752086;
		case 144:
			return 184475332;
		case 145:
			return -1880922659;
		case 146:
			return -898138634;
		case 147:
			return -2107418444;
		case 148:
			return -679970099;
		case 149:
			return -1531392549;
		case 150:
			return 1612483376;
		case 151:
			return 463930900;
		case 152:
			return -632148238;
		case 153:
			return 55303249;
		case 154:
			return 2108322089;
		case 155:
			return -1358896714;
		case 156:
			return 74475632;
		case 157:
			return -28710953;
		case 158:
			return -1791599168;
		case 159:
			return 1605938169;
		case 160:
			return 1255242276;
		case 161:
			return 636467727;
		case 162:
			return -1567688525;
		case 163:
			return -77886679;
		case 164:
			return -1057900679;
		case 165:
			return -1960888134;
		case 166:
			return -1719717295;
		case 167:
			return -1779244911;
		case 168:
			return joaat("SLOTID_COACH_STALL_01");
		case 169:
			return 223362311;
		case 170:
			return 1150824567;
		case 171:
			return 974471191;
		case 172:
			return 1989683968;
		case 173:
			return 254804477;
		case 174:
			return 192057609;
		case 175:
			return 1553957817;
		case 176:
			return 2099829015;
		case 177:
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC") /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 178:
			return -1948423372;
		case 179:
			return 981083654;
		case 180:
			return 1283289876;
		case 181:
			return -606884489;
		case 182:
			return -100418572;
		case 183:
			return 663645231;
		case 184:
			return 1442217033;
		case 185:
			return 1410986244;
		case 186:
			return 847409839;
		case 187:
			return 923926911;
		case 188:
			return 109995826;
		case 189:
			return -747412737;
		case 190:
			return 1114341727;
		case 191:
			return -539456939;
		case 192:
			return 45887121;
		case 193:
			return 913271624;
		case 194:
			return -1652812715;
		case 195:
			return -1791365775;
		case 196:
			return -979299941;
		case 197:
			return 713062001;
		case 198:
			return -575045963;
		case 199:
			return 1852965262;
		case 200:
			return -1398836354;
		case 201:
			return -1829885298;
		case 202:
			return -1773850357;
		case 203:
			return -564258009;
		case 204:
			return 2016532685;
		case 205:
			return -1070563798;
		case 206:
			return -1619221343;
		case 207:
			return -345571691;
		case 208:
			return 544288390;
		case 209:
			return 159578294;
		case 210:
			return -76852849;
		case 211:
			return 1110295244;
		case 212:
			return 2104563477;
		case 213:
			return 1947827651;
		case 214:
			return -933072766;
		case 215:
			return 2104388648;
		case 216:
			return -1677140601;
		case 217:
			return -2133097881;
		case 218:
			return -826678792;
		case 219:
			return -513522325;
		case 220:
			return 1970588249;
		case 221:
			return -2080032591;
		case 222:
			return 1758847745;
		case 223:
			return 895010282;
		case 224:
			return joaat("SLOTID_COMPENDIUM");
		case 225:
			return joaat("SLOTID_COMPENDIUM_PAGE");
		case 226:
			return joaat("SLOTID_COMPENDIUM_STAMP");
		case 227:
			return joaat("SLOTID_COUPONS");
		case 228:
			return joaat("SLOTID_CURRENCY");
		case 229:
			return joaat("SLOTID_DEFAULT_STABLE");
		case 230:
			return joaat("SLOTID_DEFAULT_STABLE_STALLS");
		case 231:
			return -1578397674;
		case 232:
			return joaat("SLOTID_EMOTE_ACTION");
		case 233:
			return joaat("SLOTID_EMOTE_GREET");
		case 234:
			return joaat("SLOTID_EMOTE_ITEM");
		case 235:
			return joaat("SLOTID_EMOTE_REACT");
		case 236:
			return joaat("SLOTID_EMOTE_TAUNT");
		case 237:
			return joaat("SLOTID_EMOTE_TWIRL_GUN");
		case 238:
			return joaat("SLOTID_FEES");
		case 239:
			return joaat("SLOTID_FME_HERBS_EXPAND");
		case 240:
			return joaat("SLOTID_HANDGUN_BARREL");
		case 241:
			return 24047176;
		case 242:
			return joaat("SLOTID_HANDGUN_HAMMER");
		case 243:
			return joaat("SLOTID_HONOR");
		case 244:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 245:
			return joaat("SLOTID_HORSE_BLANKET");
		case 246:
			return joaat("SLOTID_HORSE_CANTLE");
		case 247:
			return joaat("SLOTID_HORSE_FENDER");
		case 248:
			return joaat("SLOTID_HORSE_HORN");
		case 249:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 250:
			return joaat("SLOTID_HORSE_LANTERN");
		case 251:
			return joaat("SLOTID_HORSE_MANE");
		case 252:
			return joaat("SLOTID_HORSE_MASK");
		case 253:
			return joaat("SLOTID_HORSE_MOUSTACHE");
		case 254:
			return joaat("SLOTID_HORSE_REINS");
		case 255:
			return joaat("SLOTID_HORSE_SADDLE");
		case 256:
			return joaat("SLOTID_HORSE_SADDLE_01");
		case 257:
			return joaat("SLOTID_HORSE_SADDLE_02");
		case 258:
			return joaat("SLOTID_HORSE_SADDLE_03");
		case 259:
			return joaat("SLOTID_HORSE_SADDLE_04");
		case 260:
			return joaat("SLOTID_HORSE_SADDLE_05");
		case 261:
			return joaat("SLOTID_HORSE_SADDLE_06");
		case 262:
			return joaat("SLOTID_HORSE_SADDLE_07");
		case 263:
			return joaat("SLOTID_HORSE_SADDLE_08");
		case 264:
			return joaat("SLOTID_HORSE_SADDLE_09");
		case 265:
			return joaat("SLOTID_HORSE_SADDLE_10");
		case 266:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 267:
			return joaat("SLOTID_HORSE_SATCHEL");
		case 268:
			return joaat("SLOTID_HORSE_SEAT");
		case 269:
			return joaat("SLOTID_HORSE_SEX");
		case 270:
			return joaat("SLOTID_HORSE_SKIRT");
		case 271:
			return joaat("SLOTID_HORSE_STALL_01");
		case 272:
			return joaat("SLOTID_HORSE_STALL_02");
		case 273:
			return joaat("SLOTID_HORSE_STALL_03");
		case 274:
			return joaat("SLOTID_HORSE_STALL_04");
		case 275:
			return joaat("SLOTID_HORSE_STALL_05");
		case 276:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 277:
			return joaat("SLOTID_HORSE_TAIL");
		case 278:
			return joaat("SLOTID_HUNTING_WAGON");
		case 279:
			return 1132377945;
		case 280:
			return 739936401;
		case 281:
			return 1201880974;
		case 282:
			return 819728896;
		case 283:
			return 1746010219;
		case 284:
			return 1433393959;
		case 285:
			return -1287636759;
		case 286:
			return -706917073;
		case 287:
			return -2166805;
		case 288:
			return -1391602433;
		case 289:
			return 1782075221;
		case 290:
			return 1282544585;
		case 291:
			return 1732594027;
		case 292:
			return -1058817012;
		case 293:
			return joaat("SLOTID_MINIGAME");
		case 294:
			return joaat("SLOTID_MISSION_TIMERS");
		case 295:
			return -1783120823;
		case 296:
			return -1535745896;
		case 297:
			return joaat("SLOTID_MOONSHINE_COOK");
		case 298:
			return joaat("SLOTID_MOONSHINE_RECIPE");
		case 299:
			return joaat("SLOTID_MOONSHINE_STILL");
		case 300:
			return joaat("SLOTID_MOONSHINER_BAR_PHOTO");
		case 301:
			return joaat("SLOTID_MOONSHINER_CRAFT_FLAVOR");
		case 302:
			return joaat("SLOTID_MOONSHINER_CRAFT_INPUT");
		case 303:
			return 1111816631;
		case 304:
			return joaat("SLOTID_MOONSHINER_LOCATION");
		case 305:
			return joaat("SLOTID_MOONSHINER_THEME");
		case 306:
			return joaat("SLOTID_MOONSHINER_UPGRADE");
		case 307:
			return joaat("SLOTID_NOTORIETY");
		case 308:
			return joaat("SLOTID_OWNED_CONTENT");
		case 309:
			return joaat("SLOTID_PLAYER_BODY_TYPE");
		case 310:
			return joaat("SLOTID_PLAYER_GENDER");
		case 311:
			return joaat("SLOTID_PLAYER_VOICE");
		case 312:
			return -708312114;
		case 313:
			return 688823508;
		case 314:
			return -1622147240;
		case 315:
			return 830292162;
		case 316:
			return 226276782;
		case 317:
			return -678416628;
		case 318:
			return -1098528034;
		case 319:
			return -629387103;
		case 320:
			return 316207340;
		case 321:
			return -1909200748;
		case 322:
			return -939652363;
		case 323:
			return joaat("SLOTID_PROGRESSION");
		case 324:
			return 2011227407;
		case 325:
			return joaat("SLOTID_PROPERTY");
		case 326:
			return joaat("SLOTID_PURCHASED_CONTENT");
		case 327:
			return joaat("SLOTID_ROLE_ITEMS");
		case 328:
			return joaat("SLOTID_SAMPLE");
		case 329:
			return joaat("SLOTID_SATCHEL");
		case 330:
			return -1045471300;
		case 331:
			return 1617414719;
		case 332:
			return -787761753;
		case 333:
			return -490616606;
		case 334:
			return joaat("SLOTID_STABLE");
		case 335:
			return -1360128126;
		case 336:
			return joaat("SLOTID_UPGRADE");
		case 337:
			return joaat("SLOTID_VOUCHERS");
		case 338:
			return joaat("SLOTID_WARDROBE");
		case 339:
			return joaat("SLOTID_WARDROBE_AGEING");
		case 340:
			return joaat("SLOTID_WARDROBE_BEARD");
		case 341:
			return joaat("SLOTID_WARDROBE_BLUSH");
		case 342:
			return joaat("SLOTID_WARDROBE_COMPLEXION");
		case 343:
			return joaat("SLOTID_WARDROBE_COMPLEXION_2");
		case 344:
			return joaat("SLOTID_WARDROBE_EYEBROWS");
		case 345:
			return joaat("SLOTID_WARDROBE_EYELINER");
		case 346:
			return joaat("SLOTID_WARDROBE_EYES");
		case 347:
			return joaat("SLOTID_WARDROBE_EYESHADOW");
		case 348:
			return joaat("SLOTID_WARDROBE_EYEWEAR");
		case 349:
			return joaat("SLOTID_WARDROBE_FACE_PAINT");
		case 350:
			return -1994943603;
		case 351:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_1");
		case 352:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_2");
		case 353:
			return joaat("SLOTID_WARDROBE_FOUNDATION");
		case 354:
			return joaat("SLOTID_WARDROBE_FRECKLES");
		case 355:
			return 755611221;
		case 356:
			return joaat("SLOTID_WARDROBE_GLOVES");
		case 357:
			return joaat("SLOTID_WARDROBE_GRIME");
		case 358:
			return joaat("SLOTID_WARDROBE_GUNBELT");
		case 359:
			return joaat("SLOTID_WARDROBE_HAIR");
		case 360:
			return joaat("SLOTID_WARDROBE_HEAD");
		case 361:
			return -246340825;
		case 362:
			return joaat("SLOTID_WARDROBE_HEADWEAR");
		case 363:
			return joaat("SLOTID_WARDROBE_LIPSTICK");
		case 364:
			return joaat("SLOTID_WARDROBE_LOADOUT_1");
		case 365:
			return joaat("SLOTID_WARDROBE_LOADOUT_2");
		case 366:
			return joaat("SLOTID_WARDROBE_LOADOUT_3");
		case 367:
			return joaat("SLOTID_WARDROBE_LOADOUT_4");
		case 368:
			return joaat("SLOTID_WARDROBE_LOADOUT_5");
		case 369:
			return joaat("SLOTID_WARDROBE_LOADOUT_6");
		case 370:
			return joaat("SLOTID_WARDROBE_LOADOUT_7");
		case 371:
			return joaat("SLOTID_WARDROBE_LOADOUT_8");
		case 372:
			return joaat("SLOTID_WARDROBE_LOADOUT_9");
		case 373:
			return joaat("SLOTID_WARDROBE_LOWER_BODY");
		case 374:
			return joaat("SLOTID_WARDROBE_LOWER_GARB");
		case 375:
			return -1384685096;
		case 376:
			return -2026728113;
		case 377:
			return joaat("SLOTID_WARDROBE_MOLES");
		case 378:
			return joaat("SLOTID_WARDROBE_NECKWEAR_1");
		case 379:
			return joaat("SLOTID_WARDROBE_NECKWEAR_2");
		case 380:
			return joaat("SLOTID_WARDROBE_OUTFIT");
		case 381:
			return joaat("SLOTID_WARDROBE_SATCHEL");
		case 382:
			return joaat("SLOTID_WARDROBE_SCAR");
		case 383:
			return joaat("SLOTID_WARDROBE_SKIN_MOTTLING");
		case 384:
			return joaat("SLOTID_WARDROBE_SPOTS");
		case 385:
			return joaat("SLOTID_WARDROBE_TEETH");
		case 386:
			return joaat("SLOTID_WARDROBE_UPPER_BODY");
		case 387:
			return joaat("SLOTID_WARDROBE_UPPER_GARB");
		case 388:
			return -1034549620;
		case 389:
			return -1293064293;
		case 390:
			return -1540142553;
		case 391:
			return -1769886012;
		case 392:
			return -1983081126;
		case 393:
			return -1106117124;
		case 394:
			return -1873108338;
		case 395:
			return -2097543219;
		case 396:
			return 155413195;
		case 397:
			return joaat("SLOTID_WATCH");
		case 398:
			return joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */;
		case 399:
			return joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */;
		case 400:
			return joaat("SLOTID_WEAPON_2");
		case 401:
			return joaat("SLOTID_WEAPON_3");
		case 402:
			return 1570861011;
		case 403:
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
		case 404:
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
		case 405:
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
		case 406:
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
		case 407:
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
		case 408:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
		case 409:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
		case 410:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
		case 411:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
		case 412:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
		case 413:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
		case 414:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
		case 415:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
		case 416:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
		case 417:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
		case 418:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
		case 419:
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
		case 420:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
		case 421:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
		case 422:
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
		case 423:
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
		case 424:
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
		case 425:
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
		case 426:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
		case 427:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
		case 428:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
		case 429:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
		case 430:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
		case 431:
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
		case 432:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
		case 433:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
		case 434:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
		case 435:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
		case 436:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
		case 437:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
		case 438:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
		case 439:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
		case 440:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
		case 441:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
		case 442:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
		case 443:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
		case 444:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
		case 445:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_CLIP");
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_LEVER");
		case 451:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
		case 452:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
		case 453:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
		case 454:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
		case 455:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
		case 456:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
		case 457:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
		case 458:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_LEVER");
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_CLIP");
		case 462:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_GRIP");
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_LEVER");
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_CLIP");
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_CLIP");
		case 475:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
		case 476:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
		case 477:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
		case 478:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
		case 479:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
		case 480:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
		case 481:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
		case 482:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
		case 483:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
		case 484:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
		case 485:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
		case 486:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
		case 487:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
		case 488:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
		case 489:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
		case 490:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_CLIP");
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SCOPE");
		case 493:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
		case 494:
			return -62390436;
		case 495:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
		case 496:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
		case 497:
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
		case 498:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
		case 499:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_CLIP");
		case 500:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
		case 501:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
		case 502:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
		case 503:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
		case 504:
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
		case 505:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
		case 506:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
		case 507:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
		case 508:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
		case 509:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
		case 510:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
		case 511:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
		case 512:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
		case 513:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
		case 514:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
		case 515:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
		case 516:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
		case 517:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
		case 518:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
		case 519:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
		case 520:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
		case 521:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
		case 522:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
		case 523:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
		case 524:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
		case 525:
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
		case 526:
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
		case 527:
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
		case 528:
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
		case 529:
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
		case 530:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
		case 531:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP");
		case 532:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP_EXOTIC");
		case 533:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
		case 534:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
		case 535:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
		case 536:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
		case 537:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
		case 538:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
		case 539:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
		case 540:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
		case 541:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
		case 542:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
		case 543:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
		case 544:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
		case 545:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
		case 546:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
		case 547:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
		case 548:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
		case 549:
			return -1150323212;
		case 550:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
		case 551:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
		case 552:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
		case 553:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
		case 554:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
		case 555:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
		case 556:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
		case 557:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
		case 558:
			return 1254273765;
		case 559:
			return -792172668;
		case 560:
			return 1905987493;
		case 561:
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
		case 562:
			return -1693422950;
		case 563:
			return -205873076;
		case 564:
			return -2143114654;
		case 565:
			return -1420574021;
		case 566:
			return -1959250381;
		case 567:
			return -1088328663;
		case 568:
			return 513602003;
		case 569:
			return joaat("SLOTID_WEB_INBOX");
		case 570:
			return joaat("SLOTID_WEB_INBOX_AMMO");
		case 571:
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
		case 572:
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
		case 573:
			return joaat("SLOTID_WEB_INBOX_GIFTS");
		case 574:
			return 1084576580;
		case 575:
			return joaat("SLOTID_WEB_INBOX_HORSES");
		case 576:
			return joaat("SLOTID_WEB_INBOX_KIT");
		case 577:
			return joaat("SLOTID_WEB_INBOX_OFFERS");
		case 578:
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
		case 579:
			return -386012962;
		case 580:
			return joaat("SLOTID_CARAVAN_UPGRADE");
		case 581:
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
		case 582:
			return -352578118;
		case 583:
			return 1426626782;
		case 584:
			return -714081520;
		case 585:
			return 74547781;
		case 586:
			return 1271463052;
		case 587:
			return 1983140194;
		case 588:
			return 677262775;
		case 589:
			return joaat("SLOTID_TEMPORARY_HORSE");
		case 590:
			return -319249747;
		case 591:
			return -16955722;
		case 592:
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
		case 593:
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
		case 594:
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
		case 595:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
		case 596:
			return joaat("SLOTID_WARDROBE_LOADOUT");
		case 597:
			return joaat("SLOTID_WARDROBE_MISC");
		case 598:
			return 1843035435;
		case 599:
			return -304127320;
		case 600:
			return 122470371;
		case 601:
			return 0;
		case 602:
			return joaat("SLOTID_NONE");
		case 603:
			return joaat("SLOTID_ANY");
		case 604:
			return -1150938404;
		case 605:
			return joaat("SLOTID_EMOTE_DANCE");
		case 606:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_186(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_292(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_187(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_336(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_188(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_16(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_39(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_189(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_337(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_288(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_68(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_39(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_338(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_191(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_339();
	func_340(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_341(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW") /* GXTEntry: "Arrows" */) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 -= iVar1;
		}
	}
	return iVar0;
}

bool func_193()
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

bool func_194(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_195(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_196(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_62(50))
			{
				if (!func_62(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_62(51))
			{
				if (!func_62(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_197()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_198(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_16(iParam1, 0))
	{
		return false;
	}
	if (func_17(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_1() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_64(iParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_342(iParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_60(iParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_233(iVar4, 1);
		if (func_343(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_META_PED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES"); /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = func_64(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS"); /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_60(iParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS"); /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS"); /* GXTEntry: "You are currently not wearing any boots." */
				return false;
			}
			if (PED::_IS_META_PED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS"); /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_344(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_345(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_345(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_64(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_60(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS"); /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_346(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS"); /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS"); /* GXTEntry: "You are currently not wearing any boots." */
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_199()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_200()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1.0f - fVar0));
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - fVar0));
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - fVar1));
}

int func_201(int iParam0)
{
	if (!func_324(iParam0))
	{
		return -1;
	}
	return func_347(iParam0);
}

int func_202()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_9(func_348(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD") /* GXTEntry: "Gold Jointed Bracelet" */:
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS") /* GXTEntry: "Vintage Civil War Handcuffs" */:
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH") /* GXTEntry: "Legendary Alligator Tooth" */:
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH") /* GXTEntry: "Alligator Tooth Talisman" */;
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW") /* GXTEntry: "Legendary Bear Claw" */:
		case joaat("PROVISION_BRACELET_SILVER") /* GXTEntry: "Silver Chain Bracelet" */:
		case joaat("PROVISION_RC_QUARTZ_CHUNK") /* GXTEntry: "Quartz Chunk" */:
			return joaat("PROVISION_TALISMAN_BEAR_CLAW") /* GXTEntry: "Bear Claw Talisman" */;
		case joaat("PROVISION_RF_WOOD_COBALT") /* GXTEntry: "Cobalt Petrified Wood" */:
		case joaat("PROVISION_EARRING_GOLD") /* GXTEntry: "Gold Earring" */:
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY") /* GXTEntry: "Legendary Boar Tusk" */:
			return joaat("PROVISION_TALISMAN_BOAR_TUSK") /* GXTEntry: "Boar Tusk Talisman" */;
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY") /* GXTEntry: "Legendary Bison Horn" */:
		case joaat("PROVISION_EARRING_SILVER") /* GXTEntry: "Silver Earring" */:
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT") /* GXTEntry: "Abalone Shell Fragment" */:
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN") /* GXTEntry: "Bison Horn Talisman" */;
		case joaat("PROVISION_OLD_BRASS_COMPASS") /* GXTEntry: "Old Brass Compass" */:
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW") /* GXTEntry: "Raven Claw Talisman" */;
	}
	return 0;
}

bool func_204(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH") /* GXTEntry: "Alligator Tooth Talisman" */:
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS"); /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = joaat("PROVISION_BRACELET_GOLD"); /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"); /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = joaat("PROVISION_BRACELET_GOLD"); /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"); /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS"); /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW") /* GXTEntry: "Bear Claw Talisman" */:
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK"); /* GXTEntry: "Quartz Chunk" */
				iVar1 = joaat("PROVISION_BRACELET_SILVER"); /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW"); /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = joaat("PROVISION_BRACELET_SILVER"); /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW"); /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK"); /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK") /* GXTEntry: "Boar Tusk Talisman" */:
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT"); /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = joaat("PROVISION_EARRING_GOLD"); /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY"); /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = joaat("PROVISION_EARRING_GOLD"); /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY"); /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT"); /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN") /* GXTEntry: "Bison Horn Talisman" */:
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"); /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = joaat("PROVISION_EARRING_SILVER"); /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY"); /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = joaat("PROVISION_EARRING_SILVER"); /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY"); /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"); /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_9(iVar0, 1, 0) && func_9(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY") /* GXTEntry: "Legendary Beaver Tooth" */:
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH") /* GXTEntry: "Beaver Tooth Trinket" */;
		case joaat("PROVISION_BISON_HORN_LEGENDARY") /* GXTEntry: "Legendary Tatanka Bison Horn" */:
			return joaat("PROVISION_TRINKET_BISON_HORN") /* GXTEntry: "Tatanka Bison Horn Trinket" */;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Buck Antler" */:
			return joaat("PROVISION_TRINKET_BUCK_ANTLER") /* GXTEntry: "Buck Antler Trinket" */;
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY") /* GXTEntry: "Legendary Cougar Fang" */:
			return joaat("PROVISION_TRINKET_COUGAR_FANG") /* GXTEntry: "Cougar Fang Trinket" */;
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY") /* GXTEntry: "Legendary Coyote Fang" */:
			return joaat("PROVISION_TRINKET_COYOTE_FANG") /* GXTEntry: "Coyote Fang Trinket" */;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Elk Antler" */:
			return joaat("PROVISION_TRINKET_ELK_ANTLER") /* GXTEntry: "Elk Antler Trinket" */;
		case joaat("PROVISION_FOX_CLAW_LEGENDARY") /* GXTEntry: "Legendary Fox Claw" */:
			return joaat("PROVISION_TRINKET_FOX_CLAW") /* GXTEntry: "Fox Claw Trinket" */;
		case joaat("PROVISION_LIONS_PAW") /* GXTEntry: "Lion\'s Paw" */:
			return joaat("PROVISION_TRINKET_LION_PAW") /* GXTEntry: "Lion\'s Paw Trinket" */;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Moose Antler" */:
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER") /* GXTEntry: "Moose Antler Trinket" */;
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY") /* GXTEntry: "Legendary Panther Eye" */:
			return joaat("PROVISION_TRINKET_PANTHER_EYE") /* GXTEntry: "Panther\'s Eye Trinket" */;
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Pronghorn Horn" */:
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER") /* GXTEntry: "Pronghorn Horn Trinket" */;
		case joaat("PROVISION_RAM_HORN_LEGENDARY") /* GXTEntry: "Legendary Ram Horn" */:
			return joaat("PROVISION_TRINKET_RAM_HORN") /* GXTEntry: "Ram Horn Trinket" */;
		case joaat("PROVISION_WOLF_HEART_LEGENDARY") /* GXTEntry: "Legendary Wolf Heart" */:
			return joaat("PROVISION_TRINKET_WOLF_HEART") /* GXTEntry: "Wolf Heart Trinket" */;
		default:
			break;
	}
	return 0;
}

bool func_206(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_349(iParam0);
	if (iVar0 != -15)
	{
		func_340(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_350(iVar0, 1);
	}
	return false;
}

int func_207(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1.0f;
	if (bParam1 && func_9(joaat("PROVISION_TRINKET_ELK_ANTLER") /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
	{
		fVar0 += 0.1f;
	}
	sVar1.f_1 = 10;
	sVar1.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, iParam0, &sVar1, 0);
	iVar24 = 0;
	while (iVar24 < sVar1.f_0)
	{
		if (sVar1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
		}
		else
		{
			iVar25 = sVar1.f_1[iVar24];
			if (func_16(iVar25, 0) && func_60(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_208(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN" /* GXTEntry: "~1$~" */;
	}
	func_263(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_209(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_351())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_263(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN" /* GXTEntry: "Total Take ~1$~" */, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_352(iVar0);
			func_353(iVar0, 0, 0);
		}
		func_263(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN" /* GXTEntry: "Your Share ~1$~" */, iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_77(func_259(joaat("CAREER_CASH")), iVar1);
	}
}

void func_210(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_211(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_212(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_213(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_214(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE"); /* GXTEntry: "Little Egret Plume" */
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH"); /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY"); /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"); /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER"); /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"); /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN"); /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG"); /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"); /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR"); /* GXTEntry: "Cigar Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST"); /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER"); /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"); /* GXTEntry: "Night Scented Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL"); /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER"); /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL"); /* GXTEntry: "Clamshell Orchid" */
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS"); /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS"); /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS"); /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_222(iVar9);
	iVar2 = func_222(iVar10);
	iVar3 = func_222(iVar11);
	iVar5 = func_223(iVar9);
	iVar6 = func_223(iVar10);
	iVar7 = func_223(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_222(iVar12);
		iVar8 = func_223(iVar12);
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
	if (iParam0 != 2)
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

void func_215(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_216()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_354(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_217()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_218(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"); /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"); /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"); /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"); /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"); /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"); /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"); /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"); /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_321(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_321(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_321(iVar0))
		{
			*sParam2++;
		}
		if (func_321(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_321(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_321(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_321(iVar0))
		{
			*sParam2++;
		}
		if (func_321(iVar1))
		{
			*sParam2++;
		}
		if (func_321(iVar0) && func_321(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_321(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_321(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_321(iVar0))
		{
			*sParam2++;
		}
		if (func_321(iVar1))
		{
			*sParam2++;
		}
		if (func_321(iVar2))
		{
			*sParam2++;
		}
		if ((func_321(iVar0) && func_321(iVar1)) && func_321(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_321(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_321(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_321(iVar0))
		{
			*sParam2++;
		}
		if (func_321(iVar1))
		{
			*sParam2++;
		}
		if (func_321(iVar2))
		{
			*sParam2++;
		}
		if (func_321(iVar3))
		{
			*sParam2++;
		}
		if (((func_321(iVar0) && func_321(iVar1)) && func_321(iVar2)) && func_321(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_219(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_355(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_356(joaat("WS_DOWNS_RANCH_EDITH"));
			func_356(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_356(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_356(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_355(joaat("WS_DOWNS_RANCH_EDITH"));
			func_356(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_356(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_356(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_356(joaat("WS_DOWNS_RANCH_EDITH"));
			func_355(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_356(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_356(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_356(joaat("WS_DOWNS_RANCH_EDITH"));
			func_356(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_355(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_356(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_356(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_356(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_355(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_357();
			func_355(iParam0);
			break;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
		case joaat("WS_BEECHERS_SHACK"):
		case joaat("WS_BEECHERS_BARN_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			func_358();
			func_355(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_356(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_356(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_355(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_356(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_356(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_355(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_356(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_356(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_355(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_356(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_356(joaat("WS_RHODES_GRAVE_OPEN"));
			func_355(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_356(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_356(joaat("WS_RHODES_GRAVE_OPEN"));
			func_355(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_356(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_356(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_355(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_356(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_355(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_356(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_355(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_356(joaat("WS_UTOPIA_TREE_MISSION"));
			func_356(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_356(joaat("WS_UTOPIA_TREE_STUMP"));
			func_355(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_356(joaat("WS_UTOPIA_TREE_STANDING"));
			func_356(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_356(joaat("WS_UTOPIA_TREE_STUMP"));
			func_355(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_356(joaat("WS_UTOPIA_TREE_STANDING"));
			func_356(joaat("WS_UTOPIA_TREE_MISSION"));
			func_356(joaat("WS_UTOPIA_TREE_STUMP"));
			func_355(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_356(joaat("WS_UTOPIA_TREE_STANDING"));
			func_356(joaat("WS_UTOPIA_TREE_MISSION"));
			func_356(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_355(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_356(joaat("WS_MICAH_CAMP"));
			func_356(joaat("WS_MICAH_CAMP_POST"));
			func_355(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_356(joaat("WS_MICAH_CAMP_EMPTY"));
			func_356(joaat("WS_MICAH_CAMP_POST"));
			func_355(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_356(joaat("WS_MICAH_CAMP_EMPTY"));
			func_356(joaat("WS_MICAH_CAMP"));
			func_355(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_356(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_355(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_356(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_356(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_359(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_355(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_356(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_356(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_355(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_356(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_355(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_356(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_355(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_356(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_355(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_356(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_355(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_356(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_355(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_356(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_356(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_355(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_356(joaat("WS_NEW_COM_BANK_START"));
			func_356(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_356(joaat("WS_NEW_COM_BANK_AFTER"));
			func_356(joaat("WS_NEW_COM_BANK_POST"));
			func_355(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_356(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_356(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_356(joaat("WS_NEW_COM_BANK_AFTER"));
			func_356(joaat("WS_NEW_COM_BANK_POST"));
			func_355(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_356(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_356(joaat("WS_NEW_COM_BANK_START"));
			func_356(joaat("WS_NEW_COM_BANK_AFTER"));
			func_356(joaat("WS_NEW_COM_BANK_POST"));
			func_355(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_356(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_356(joaat("WS_NEW_COM_BANK_START"));
			func_356(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_356(joaat("WS_NEW_COM_BANK_POST"));
			func_355(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_356(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_356(joaat("WS_NEW_COM_BANK_START"));
			func_356(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_356(joaat("WS_NEW_COM_BANK_AFTER"));
			func_355(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_356(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_355(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_356(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_355(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_356(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_355(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_356(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_356(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_355(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_355(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_355(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_355(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_356(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_355(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_355(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_355(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_355(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_355(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_356(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_355(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_356(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_355(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_356(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_355(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_356(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_355(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_356(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_355(0);
			func_356(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_356(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_355(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_356(0);
			func_356(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_355(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_356(0);
			func_356(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_355(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_356(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_355(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_356(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_355(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_355(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_355(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_355(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_356(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_355(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_356(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_356(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_356(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_355(joaat("WS_SHADY_BELLE_ABANDON"));
			func_356(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_356(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_355(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_356(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_356(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_355(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_356(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_355(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_356(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_359(iParam0))
				{
					func_355(iParam0);
				}
			}
			else if (func_359(iParam0))
			{
				func_356(iParam0);
			}
			break;
	}
}

void func_220(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_361(func_360(iParam0));
	}
}

int func_221(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE"); /* GXTEntry: "Little Egret Plume" */
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH"); /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY"); /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"); /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER"); /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"); /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN"); /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG"); /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"); /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR"); /* GXTEntry: "Cigar Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST"); /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER"); /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"); /* GXTEntry: "Night Scented Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL"); /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER"); /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL"); /* GXTEntry: "Clamshell Orchid" */
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS"); /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS"); /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS"); /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_222(iVar9);
	iVar2 = func_222(iVar10);
	iVar3 = func_222(iVar11);
	iVar5 = func_223(iVar9);
	iVar6 = func_223(iVar10);
	iVar7 = func_223(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_222(iVar12);
		iVar8 = func_223(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 += iVar5;
		}
		else
		{
			iVar0 += (iVar1 + iParam1);
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 += iVar6;
		}
		else
		{
			iVar0 += (iVar2 + iParam1);
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 += iVar7;
		}
		else
		{
			iVar0 += (iVar3 + iParam1);
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 += iVar8;
			}
			else
			{
				iVar0 += (iVar4 + iParam1);
			}
		}
		else if (iVar4 >= iVar8)
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

int func_222(int iParam0)
{
	int iVar0;

	if (func_9(iParam0, 1, 0))
	{
		iVar0 = func_19(iParam0, 0, 0);
	}
	return iVar0;
}

int func_223(int iParam0)
{
	switch (iParam0)
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

int func_224(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_225(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

void func_226(int iParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_8(iParam1, 5) || iParam0 == func_8(iParam1, 6)) || iParam0 == func_8(iParam1, 7)) || iParam0 == func_8(iParam1, 8)) || iParam0 == func_8(iParam1, 9))
	{
		func_218(iParam1, iParam0, &cParam2, 0, iParam3, bParam4);
		func_57(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_59(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_227(int iParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((iParam0 == func_8(iParam1, 5) || iParam0 == func_8(iParam1, 6)) || iParam0 == func_8(iParam1, 7)) || iParam0 == func_8(iParam1, 8)) || iParam0 == func_8(iParam1, 9))
	{
		if (func_218(iParam1, iParam0, &cVar0, 0, 0, 0))
		{
			func_57(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_59(51, 0, 0, cVar0, func_168(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_57(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_59(51, 0, 0, cVar0, func_168(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_228()
{
	if (func_166(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_229(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_230(int iParam0)
{
	if (!func_362(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_231(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

int func_232(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_363(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_8"):
			return 32;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_9"):
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			return 22;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_3"):
			return 38;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5"):
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6"):
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3"):
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4"):
			return 18;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
			return 29;
		case joaat("MP_COMPONENT_TYPE_END"):
			return 39;
		case joaat("MP_COMPONENT_TYPE_EYEWEAR"):
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7"):
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1"):
			return 34;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			return 10;
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
			return 23;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2"):
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_2"):
			return 13;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1"):
			return 15;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			return 30;
		case joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE"):
			return 14;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			return 37;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2"):
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_234(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_364();
	if (iParam2 == 39)
	{
		sVar0 = { func_152(iParam0, 1, 0) /*5*/ };
		iParam2 = func_233(func_232(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_60(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_343(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_237((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_365(func_363(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_366(iParam2);
	func_367(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_368(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_368(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_369(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_370(iParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_371(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_371(&(Global_1946054.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946054.f_2589)
		{
			if (Global_1946054.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946054.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_372(func_363(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_235(bool bParam0, bool bParam1, bool bParam2)
{
	func_373(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_374((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_375(sVar0);
}

bool func_237(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_238()
{
	func_376(&(Global_1946054.f_2776));
	func_377((1 << 15));
	func_372(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_233(iParam0, 1);
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/] || Global_1946054.f_1378.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_240(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_378(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_379(sVar0);
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_379(sVar0);
}

float func_242()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_380())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_381(2);
	}
	if (Global_1347477.f_119)
	{
		return func_381(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_382();
	fVar2 = func_383();
	fVar3 = func_384();
	fVar4 = func_385();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_386());
	fVar7 = (func_381(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_387(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_388(3, fVar9, fVar9 > 100.0f);
	return func_389(fVar7, -100.0f, 100.0f);
}

float func_243()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_380())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_381(1);
	}
	if (Global_1347477.f_119)
	{
		return func_381(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_382();
	fVar2 = func_383();
	fVar3 = func_384();
	fVar4 = func_385();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_386());
	fVar7 = (func_381(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_387(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_388(2, fVar9, fVar9 > 100.0f);
	return func_389(fVar7, -100.0f, 100.0f);
}

float func_244()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_380())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_381(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_390())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_391())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_381(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_382();
	fVar2 = func_383();
	fVar3 = func_384();
	fVar4 = func_385();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_386());
	fVar7 = (func_381(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_387(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_388(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_381(0);
	}
	return func_389(fVar7, -100.0f, 100.0f);
}

bool func_245(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_246(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_247(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_16(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_156(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_68(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_39(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_248(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return Global_1946054.f_2657.f_21;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return Global_1946054.f_2657.f_23;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return Global_1946054.f_2657.f_22;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return Global_1946054.f_2657.f_24;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return Global_1946054.f_2657.f_25;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (bParam1)
			{
				return Global_1946054.f_2657.f_20;
			}
			else
			{
				return func_392();
			}
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT") /* GXTEntry: "Fancy Suit" */:
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */:
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT") /* GXTEntry: "Winter Outfit" */:
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */:
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT") /* GXTEntry: "Island Outfit" */:
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT") /* GXTEntry: "Robbery Outfit" */:
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT") /* GXTEntry: "The Wittemore" */:
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT") /* GXTEntry: "Police Outfit" */:
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT") /* GXTEntry: "Custom Outfit" */:
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001") /* GXTEntry: "Brawler\'s Outfit" */:
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002") /* GXTEntry: "The Ruffian" */:
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003") /* GXTEntry: "The Rebel" */:
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005") /* GXTEntry: "The Innocent" */:
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006") /* GXTEntry: "The Pursuer" */:
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001") /* GXTEntry: "The Grizzlies Outlaw" */:
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001") /* GXTEntry: "The Nuevo Paraiso" */:
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */:
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE") /* GXTEntry: "Saved Custom Outfit One" */:
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO") /* GXTEntry: "Saved Custom Outfit Two" */:
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE") /* GXTEntry: "Saved Custom Outfit Three" */:
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR") /* GXTEntry: "Saved Custom Outfit Four" */:
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE") /* GXTEntry: "Saved Custom Outfit Five" */:
			return 5;
		case 1902428294 /* GXTEntry: "The Wittemore" */:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332 /* GXTEntry: "Island Outfit" */:
			return 11;
		case 1788874135 /* GXTEntry: "Island Outfit Shackles" */:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555 /* GXTEntry: "The Homesteader" */:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER") /* GXTEntry: "The Winter Cowboy" */:
			return 70;
		case 890706995 /* GXTEntry: "The Cowhand" */:
			return 93;
		case 1156438275 /* GXTEntry: "The Rancher" */:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT") /* GXTEntry: "The Rancher" */:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM") /* GXTEntry: "The Homesteader" */:
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H") /* GXTEntry: "The Chevalier" */:
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L") /* GXTEntry: "The Heartlands" */:
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H") /* GXTEntry: "The Gambler" */:
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L") /* GXTEntry: "The Earl" */:
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H") /* GXTEntry: "The McLaughlin" */:
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L") /* GXTEntry: "The Josiah" */:
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H") /* GXTEntry: "The Farrier" */:
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L") /* GXTEntry: "The Donegal" */:
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H") /* GXTEntry: "The Bulldogger" */:
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L") /* GXTEntry: "The Ranch Hand" */:
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H") /* GXTEntry: "The Scrapper" */:
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L") /* GXTEntry: "The Armadillo" */:
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H") /* GXTEntry: "The Valentine" */:
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L") /* GXTEntry: "The Vaquero" */:
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H") /* GXTEntry: "The Dewberry Creek" */:
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L") /* GXTEntry: "The Clairmont" */:
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H") /* GXTEntry: "The Roscoe" */:
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L") /* GXTEntry: "The Estate Boss" */:
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H") /* GXTEntry: "The Drover" */:
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L") /* GXTEntry: "The Calumet" */:
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H") /* GXTEntry: "The Cowpuncher" */:
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L") /* GXTEntry: "The Tumbleweed" */:
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H") /* GXTEntry: "The Drifter" */:
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L") /* GXTEntry: "The Leatherman" */:
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H") /* GXTEntry: "The Cumberland" */:
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L") /* GXTEntry: "The Millesani" */:
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H") /* GXTEntry: "The Faulkton" */:
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L") /* GXTEntry: "The Dolton" */:
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H") /* GXTEntry: "The Corson" */:
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L") /* GXTEntry: "The Saint Denis" */:
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H") /* GXTEntry: "The Deauville" */:
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L") /* GXTEntry: "The Bretagne" */:
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_250(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_251(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_250(iParam0))
	{
		return;
	}
	if (func_393(iParam0))
	{
		return;
	}
	if (!func_394(iParam0))
	{
		func_395(iParam0, 1, 0);
	}
	iVar0 = func_396(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_397(iParam0, (1 << 9)))
		{
			func_236(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_398() && !bParam1) && !func_399(0, 0, 1))
	{
		func_400(MISC::VAR_STRING(10, "OUT_JOURN_DONE" /* GXTEntry: "~1~ completed." */, MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_401(iParam0, 6);
	if (bParam2)
	{
		if (!func_399(0, 0, 1))
		{
			func_161(1, 4);
		}
	}
}

int func_252()
{
	return Global_1946054.f_1;
}

bool func_253(int iParam0, bool bParam1)
{
	return func_248(iParam0, 0) < func_402(iParam0, bParam1);
}

bool func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_64(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_255(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_233(iParam0, 1) /*3*/] != Global_1946054.f_57[func_233(iParam0, 1) /*11*/];
}

void func_256(int iParam0, int iParam1)
{
	if (func_60(iParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_403(iParam1, 0);
	}
	else if (func_60(iParam1, 930141731))
	{
		func_403(iParam1, 1);
		func_404(iParam0);
	}
}

void func_257(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_258(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> /*112*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_405(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_406(uParam2, iParam0, sVar1);
	return 1;
}

struct<2> /*16*/ func_259(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_260(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL" /* GXTEntry: "Bluegill" */;
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH" /* GXTEntry: "Bullhead Catfish" */;
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL" /* GXTEntry: "Chain Pickerel" */;
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH" /* GXTEntry: "Channel Catfish" */;
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON" /* GXTEntry: "Lake Sturgeon" */;
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS" /* GXTEntry: "Largemouth Bass" */;
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR" /* GXTEntry: "Longnose Gar" */;
		case 7:
			return "PROVISION_FISH_MUSKIE" /* GXTEntry: "Muskie" */;
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE" /* GXTEntry: "Northern Pike" */;
		case 9:
			return "PROVISION_FISH_PERCH" /* GXTEntry: "Perch" */;
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL" /* GXTEntry: "Redfin Pickerel" */;
		case 11:
			return "PROVISION_FISH_ROCK_BASS" /* GXTEntry: "Rock Bass" */;
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS" /* GXTEntry: "Smallmouth Bass" */;
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON" /* GXTEntry: "Sockeye Salmon" */;
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT" /* GXTEntry: "Steelhead Trout" */;
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_262(int iParam0)
{
	var uVar0;

	if (!func_407(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_263(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	int iVar20;

	sVar0 = -2;
	sVar0.f_1 = sParam5;
	sVar0.f_2 = sParam6;
	sVar0.f_3 = iParam7;
	sVar0.f_0 = 450;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = iParam2;
	sVar13.f_4 = iParam3;
	sVar13.f_5 = iParam4;
	sVar13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&sVar0, &sVar13, bParam8);
	func_408(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_264()
{
	return !Global_1911774;
}

void func_265(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_266(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_267(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &sVar3))
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

char* func_268(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING" /* GXTEntry: "~HC_~1p~~~2~~s~" */, MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_269(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_270(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_274(iParam0, 1);
	func_275(iParam0, 1);
	func_276(iParam0, 128);
}

int func_271(int iParam0)
{
	return iParam0;
}

bool func_272(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_273(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_274(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_269(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_275(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_276(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_277(int iParam0)
{
	if (!func_409(iParam0))
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

void func_278(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_130(1) < iParam0)
	{
		iParam0 = func_130(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_259(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_279(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND" /* GXTEntry: "-~1$~" */;
	}
	func_263(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_280(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_282(int iParam0)
{
	return func_410(Global_1935496.f_27, iParam0);
}

struct<4> /*32*/ func_283(bool bParam0)
{
	return func_188(joaat("CHARACTER"), func_411(), joaat("SLOTID_NONE"), bParam0);
}

int func_284(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &sVar0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = sVar0.f_1;
	return 1;
}

bool func_285(int iParam0, bool bParam1)
{
	if (func_64(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_62(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_286(bool bParam0)
{
	int iVar0;

	iVar0 = func_39(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_188(joaat("EMOTE_ITEM"), func_283(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_188(joaat("EMOTE_ITEM"), func_283(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_64(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_288(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_39(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_289(int iParam0)
{
	if (func_412(iParam0, joaat("DEFAULT") /* GXTEntry: "_" */) == 0)
	{
		return false;
	}
	return true;
}

int func_290(int iParam0)
{
	if (!func_16(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN") /* GXTEntry: "Live Crickets" */:
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET"); /* GXTEntry: "Cricket Bait" */
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN") /* GXTEntry: "Live Worms" */:
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM"); /* GXTEntry: "Worm Bait" */
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM"); /* GXTEntry: "Cocaine Gum" */
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO"); /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED") /* GXTEntry: "Opened Cigarettes" */:
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX"); /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_291(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_16(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_152(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_185((398 + iVar29), 1);
		if (func_186(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_187(iParam0, &sVar6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_292(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_16(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_188(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_39(bParam6), &sVar0, false);
	return iVar4;
}

int func_293(int iParam0)
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

float func_294(int iParam0)
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
			return func_413(iParam0);
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
			return func_413(iParam0);
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
			return func_413(iParam0);
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

bool func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_62(18);
		case 2:
			return func_62(20);
		case 1:
			return func_62(19);
		default:
			break;
	}
	return true;
}

int func_296(int iParam0)
{
	return func_414(Global_40.f_11095.f_11[iParam0]);
}

void func_297(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_62(31))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_296(iParam0);
	if (func_415(iParam0) & func_416(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_417(fVar1, fParam1);
			if (fParam1 > (float)func_418(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_50(func_419(iParam0), 0);
					}
					func_420(iParam0, iVar2, iVar3);
					func_421(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_298(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN" /* GXTEntry: "+~1~" */;
}

int func_299(int iParam0)
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

void func_300(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_301(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_302(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_245(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_245(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_245(iParam0, (1 << 16)) && !func_245(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_245(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_245(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_304(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_305()
{
	return Global_1905944.f_5694;
}

int func_306()
{
	return func_422(Global_40.f_12019);
}

int func_307()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_167(iVar1);
		if (func_9(iVar2, 1, 0) || func_313(func_312(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_308()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_423(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_309()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_318(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_310()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_311(int iParam0)
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

int func_312(int iParam0)
{
	switch (iParam0)
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

bool func_313(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_314(int iParam0)
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

int func_315(int iParam0)
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

int func_316(int iParam0)
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

char* func_317(int iParam0)
{
	switch (iParam0)
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

bool func_318(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_319(int iParam0)
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

char* func_320(int iParam0)
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

bool func_321(int iParam0)
{
	if (func_424(iParam0) && func_9(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_425(iParam0) & func_426(iParam0))
	{
		return true;
	}
	return false;
}

char* func_322(int iParam0)
{
	if (!func_16(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_109(iParam0));
}

int func_323(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_324(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_325(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_326(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_327(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
		if (iVar0 == Global_1954819.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
}

void func_328(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440 /*PCF_0xDBD31C9C*/, !bParam0);
}

void func_329(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439 /*PCF_0x8519377E*/, !bParam0);
}

void func_330(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438 /*PCF_0x14013CF9*/, !bParam0);
}

void func_331(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("HUD_CTX_SP_INTRO_HORSE_ITEMS_RESTRICTED");
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(iVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(iVar0);
	}
}

void func_332(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_333(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

int func_334(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_233(iParam0, 1) /*3*/];
}

void func_335()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_427();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_67(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN") /* GXTEntry: "John\'s Cattleman Revolver" */);
		func_115(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN") /* GXTEntry: "John\'s Cattleman Revolver" */, 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN") /* GXTEntry: "John\'s Cattleman Revolver" */, true, 2, false, false);
		func_67(joaat("WEAPON_MELEE_KNIFE_JOHN") /* GXTEntry: "John\'s Knife" */);
		func_115(joaat("WEAPON_MELEE_KNIFE_JOHN") /* GXTEntry: "John\'s Knife" */, 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN") /* GXTEntry: "John\'s Knife" */, true, 4, false, false);
	}
}

bool func_336(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_39(0);
	*uParam1 = { func_188(iParam0, func_145(0), iParam3, 0) /*4*/ };
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

bool func_337(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_338(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_339()
{
	return Global_1899515;
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_428(*iParam0);
	iVar1 = func_429(*iParam0);
	iVar2 = func_430(*iParam0);
	iVar3 = func_431(*iParam0);
	iVar4 = func_432(*iParam0);
	iVar5 = func_433(*iParam0);
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
	iVar6 = func_434(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_434(iVar1, iVar0);
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
	func_435(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_341(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_342(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_152(iParam0, 1, 0) /*5*/ };
	return func_232(sVar0.f_4);
}

int func_343(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_344(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_233(func_436(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_64(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_345(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_233(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_237((1 << 19)))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 += PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

bool func_346(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2") /* GXTEntry: "Legendary Moose Moccasins" */:
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3") /* GXTEntry: "Moccasins" */:
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4") /* GXTEntry: "Two Toned Moccasins" */:
			return true;
		default:
			break;
	}
	return false;
}

int func_347(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_437(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY") /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY") /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY") /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY") /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY") /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return joaat("PROVISION_LIONS_PAW") /* GXTEntry: "Lion\'s Paw" */;
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY") /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY") /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY") /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH") /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS") /* GXTEntry: "Vintage Civil War Handcuffs" */;
		case 15:
			return joaat("PROVISION_BRACELET_GOLD") /* GXTEntry: "Gold Jointed Bracelet" */;
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW") /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK") /* GXTEntry: "Quartz Chunk" */;
		case 18:
			return joaat("PROVISION_BRACELET_SILVER") /* GXTEntry: "Silver Chain Bracelet" */;
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY") /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT") /* GXTEntry: "Cobalt Petrified Wood" */;
		case 21:
			return joaat("PROVISION_EARRING_GOLD") /* GXTEntry: "Gold Earring" */;
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY") /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT") /* GXTEntry: "Abalone Shell Fragment" */;
		case 24:
			return joaat("PROVISION_EARRING_SILVER") /* GXTEntry: "Silver Earring" */;
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS") /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_349(int iParam0)
{
	return func_438(iParam0, -1);
}

bool func_350(int iParam0, bool bParam1)
{
	return func_439(func_339(), iParam0, bParam1);
}

bool func_351()
{
	if (func_197())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_352(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_440((Global_40.f_4283.f_325 + iParam0));
}

void func_353(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN" /* GXTEntry: "Gang Share ~1$~" */;
	}
	if (func_351())
	{
		func_263(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_263(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_354(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_441(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40497[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_441(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_357()
{
	func_356(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_356(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_356(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_356(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_356(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_356(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_356(joaat("WS_COLTER_STAGE_MP"));
}

void func_358()
{
	func_356(joaat("WS_BEECHERS_SHACK"));
	func_356(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_356(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_356(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_356(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_356(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_356(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_356(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_356(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_356(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_359(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_441(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

int func_360(int iParam0)
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

void func_361(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_362(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_363(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return joaat("MP_COMPONENT_TYPE_HEADWEAR");
		case 11:
			return joaat("MP_COMPONENT_TYPE_EYEWEAR");
		case 12:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_1");
		case 13:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_2");
		case 14:
			return joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE");
		case 15:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1");
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2");
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3");
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4");
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5");
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6");
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7");
			return joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE");
			return joaat("MP_COMPONENT_TYPE_HAND_ATTIRE");
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_5");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_6");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_7");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_8");
			return joaat("MP_COMPONENT_TYPE_LOADOUT_9");
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1");
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2");
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_1");
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_2");
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_3");
			return joaat("MP_COMPONENT_TYPE_END");
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

void func_364()
{
	int iVar0;

	Global_1946054.f_1378 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

void func_365(int iParam0)
{
	func_372(iParam0, 8, 6);
}

void func_366(int iParam0)
{
	func_442(&(Global_1946054.f_2589), iParam0);
}

void func_367(int iParam0, int iParam1)
{
	func_443(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_368(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_369(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_64(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_444(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_367(iVar1, iVar3);
		}
	}
	if (func_255(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_444(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_367(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case joaat("CI_CATEGORY_WARDROBE_VEST"):
			if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
			}
			func_445(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_445(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_445(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_445(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_445(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_445(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; // curOff = 807
				if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_367(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_367(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_64(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_367(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_346(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_64(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_367(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_60(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_346(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_60(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_367(iVar1, iVar3);
					}
				}
			}
			switch (func_64(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_64(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_367(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_64(uParam0->f_1[iVar1 /*3*/]) || func_60(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_367(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_370(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = func_446(0);
	if (iParam2 != 0 && func_447(iParam0, bVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_448(iParam0, func_363(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_371(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_1() != -1;
	iVar7 = func_446(0);
	if (func_237((1 << 15)))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946054.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_363(iVar0, 1);
			if (func_449(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_449(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_345(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_450(uParam0);
				if (iVar3 > 0)
				{
					if (!func_237((1 << 19)))
					{
						func_374((1 << 19));
						iVar1 -= iVar8;
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946054.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_363(iVar0, 1);
							if (func_449(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_449(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_345(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_367(iVar0, iParam2);
									}
								}
								iVar1 += iVar4;
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_377((1 << 19));
				}
			}
		}
	}
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_233(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_233(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_373(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_451(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_452(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_396(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_396(Global_40.f_7729);
				Global_1946054.f_1378 = func_396(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_453(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_454(0, 1);
	}
}

void func_374(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_375(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	switch (sParam0.f_0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
			{
				return;
			}
			if (func_455(sParam0.f_0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946054.f_850)
				{
					iVar1 = ((Global_1946054.f_855 + iVar0) % 25);
					if ((Global_1946054.f_668[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_668[iVar1 /*4*/].f_1 == sParam0.f_1) && Global_1946054.f_668[iVar1 /*4*/].f_2 == sParam0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_456(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_374(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
			{
				return;
			}
			if (func_455(sParam0.f_0))
			{
				return;
			}
			func_456(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_374(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_241(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_376(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_377(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

bool func_378(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_379(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_455(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_455(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_456(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_374(8);
}

bool func_380()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_381(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_382()
{
	float fVar0;
	int iVar1;

	fVar0 = func_457(13);
	iVar1 = func_458(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0.0f;
}

float func_383()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_384()
{
	if (func_197())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_385()
{
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 0.0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0.0f;
}

float func_386()
{
	return Global_1954815.f_3;
}

void func_387(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_459(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_388(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_459(iParam0, 2, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100.0f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100.0f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

float func_389(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_390()
{
	return func_457(12) <= -99.0f;
}

bool func_391()
{
	return func_457(12) >= 99.0f;
}

int func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_64(iVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_460() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_393(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	if (func_397(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_394(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	if (func_397(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_250(iParam0))
	{
		return;
	}
	if (!func_394(iParam0))
	{
		func_401(iParam0, 2);
		if (bParam2)
		{
			if (!func_399(0, 0, 1))
			{
				func_161(1, 4);
			}
		}
		if ((!func_398() && !bParam1) && !func_399(0, 0, 1))
		{
			func_400(MISC::VAR_STRING(10, "OUT_JOURN_ADD" /* GXTEntry: "~1~ discovered." */, func_461(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT") /* GXTEntry: "Fancy Suit" */;
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */;
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT") /* GXTEntry: "Winter Outfit" */;
		case 8:
			return joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT") /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT") /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT") /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT") /* GXTEntry: "Police Outfit" */;
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT") /* GXTEntry: "Custom Outfit" */;
		case 1:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_ONE") /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_TWO") /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_THREE") /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR") /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE") /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return joaat("CLOTHING_OUTFIT_OWNED_001") /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return joaat("CLOTHING_OUTFIT_OWNED_002") /* GXTEntry: "The Ruffian" */;
		case 26:
			return joaat("CLOTHING_OUTFIT_OWNED_003") /* GXTEntry: "The Rebel" */;
		case 27:
			return joaat("CLOTHING_OUTFIT_OWNED_005") /* GXTEntry: "The Innocent" */;
		case 28:
			return joaat("CLOTHING_OUTFIT_OWNED_006") /* GXTEntry: "The Pursuer" */;
		case 21:
			return joaat("CLOTHING_SP_OUTFIT_SONY_001") /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001") /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return joaat("CLOTHING_SP_NUDE");
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER") /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT") /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM") /* GXTEntry: "The Homesteader" */;
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H") /* GXTEntry: "The Chevalier" */;
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L") /* GXTEntry: "The Heartlands" */;
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H") /* GXTEntry: "The Gambler" */;
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L") /* GXTEntry: "The Earl" */;
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H") /* GXTEntry: "The McLaughlin" */;
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L") /* GXTEntry: "The Josiah" */;
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H") /* GXTEntry: "The Farrier" */;
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L") /* GXTEntry: "The Donegal" */;
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H") /* GXTEntry: "The Bulldogger" */;
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L") /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H") /* GXTEntry: "The Scrapper" */;
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L") /* GXTEntry: "The Armadillo" */;
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H") /* GXTEntry: "The Valentine" */;
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L") /* GXTEntry: "The Vaquero" */;
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H") /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L") /* GXTEntry: "The Clairmont" */;
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H") /* GXTEntry: "The Roscoe" */;
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L") /* GXTEntry: "The Estate Boss" */;
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H") /* GXTEntry: "The Drover" */;
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L") /* GXTEntry: "The Calumet" */;
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H") /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L") /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H") /* GXTEntry: "The Drifter" */;
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L") /* GXTEntry: "The Leatherman" */;
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H") /* GXTEntry: "The Cumberland" */;
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L") /* GXTEntry: "The Millesani" */;
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H") /* GXTEntry: "The Faulkton" */;
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L") /* GXTEntry: "The Dolton" */;
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H") /* GXTEntry: "The Corson" */;
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L") /* GXTEntry: "The Saint Denis" */;
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H") /* GXTEntry: "The Deauville" */;
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L") /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_397(int iParam0, int iParam1)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_398()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_399(int iParam0, bool bParam1, bool bParam2)
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
		if (func_462())
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
		iVar0 = func_463(Global_1898164.f_1[0 /*5*/]);
		if (func_165(iVar0) && func_464(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_324(Global_1898164.f_1[0 /*5*/]))
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

int func_400(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_401(int iParam0, int iParam1)
{
	if (!func_250(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_402(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			iVar0 = Global_1946054.f_2657.f_26.f_1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			iVar0 = Global_1946054.f_2657.f_26.f_2;
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = Global_1946054.f_2657.f_26;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (iVar0 > 0 && !bParam1)
			{
				iVar0--;
			}
			break;
	}
	return iVar0;
}

void func_403(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_465(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_63(50);
			}
			else
			{
				func_63(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_63(51);
			}
			else
			{
				func_63(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_466(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_96();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_96();
			}
			break;
		case 3:
			func_63(24);
			if (bParam1)
			{
				if (!func_466(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_96();
				}
			}
			break;
	}
}

void func_404(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_467(0))
			{
				iVar0++;
			}
			if (func_467(2))
			{
				iVar0++;
			}
			if (func_467(4))
			{
				iVar0++;
			}
			if (!func_468(16))
			{
				if (iVar0 == 1)
				{
					func_469();
					func_50(456, 1);
					func_470(16);
				}
			}
			if (!func_468(32))
			{
				if (iVar0 >= 3)
				{
					func_469();
					func_50(456, 1);
					func_470(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_467(1))
			{
				iVar0++;
			}
			if (func_467(3))
			{
				iVar0++;
			}
			if (func_467(7))
			{
				iVar0++;
			}
			if (!func_468(1))
			{
				if (iVar0 == 1)
				{
					func_471();
					func_50(457, 1);
					func_470(1);
				}
			}
			if (!func_468(2))
			{
				if (iVar0 >= 3)
				{
					func_471();
					func_50(457, 1);
					func_470(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_467(5))
			{
				iVar0++;
			}
			if (func_467(6))
			{
				iVar0++;
			}
			if (func_467(8))
			{
				iVar0++;
			}
			if (!func_468(4))
			{
				if (iVar0 == 1)
				{
					func_472();
					func_50(455, 1);
					func_470(4);
				}
			}
			if (!func_468(8))
			{
				if (iVar0 >= 3)
				{
					func_472();
					func_50(455, 1);
					func_470(8);
				}
			}
			break;
	}
}

void func_405(var uParam0)
{
	func_257(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_257(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_257(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_406(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_473(uParam0))
	{
		return;
	}
	if (Global_1223851 < 20)
	{
		Global_1223851++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223851.f_1[iVar0 /*21*/] = { Global_1223851.f_1[iVar0 + 1 /*21*/] /*21*/ };
			iVar0++;
		}
	}
	sVar1.f_7.f_2.f_1 = 10;
	sVar1 = { *uParam0 /*4*/ };
	sVar1.f_4 = iParam1;
	sVar1.f_6 = 1;
	sVar1.f_7 = { sParam2 /*14*/ };
	Global_1223851.f_1[(Global_1223851 - 1) /*21*/] = { sVar1 /*21*/ };
}

bool func_407(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &sVar3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/]))
			{
				Jump @230; // curOff = 56
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
					Jump @230; // curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; // curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; // curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_408(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_409(int iParam0)
{
	return func_269(iParam0, 2);
}

bool func_410(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

struct<4> /*32*/ func_411()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_412(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

float func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_293(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_414(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_474(iVar6) - func_474(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_414(float fParam0)
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

int func_415(int iParam0)
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

int func_416(int iParam0)
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

int func_417(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_414(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_474(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_474(iVar0 + 1));
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

int func_418(int iParam0)
{
	int iVar0;

	if (func_475(iParam0, &iVar0))
	{
		return func_474(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_476())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_476())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_476())
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

int func_419(int iParam0)
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

void func_420(int iParam0, int iParam1, int iParam2)
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
	iVar3 += func_477(iParam0);
	sVar4 = func_479(func_478(iVar3, iParam2));
	sVar6 = func_480(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_481(iParam0));
	iVar8 = func_482(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_483(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_176(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, func_484(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_421(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_422(int iParam0)
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

bool func_423(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_424(int iParam0)
{
	switch (iParam0)
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

int func_425(int iParam0)
{
	switch (iParam0)
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

int func_426(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_485(&iVar0, 0, iVar95, &sVar1) && !func_485(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_486(iVar0, &sVar1);
			if (func_16(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_427()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_487(Global_35, &iVar0);
	sVar30 = { func_283(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_488(0);
	func_489(7);
	func_490(joaat("KIT_BANDANA") /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_252() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_490(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000") /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_490(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_491(Global_35, &iVar0);
}

int func_428(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_492(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_429(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_430(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_431(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_432(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_433(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_434(int iParam0, int iParam1)
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

void func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_493(iParam0, iParam6);
	func_494(iParam0, iParam5);
	func_495(iParam0, iParam4);
	func_496(iParam0, iParam3);
	func_497(iParam0, iParam2);
	func_498(iParam0, iParam1);
}

int func_436(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_232(iVar0);
}

int func_437(int iParam0)
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

int func_438(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_39(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_493(&uVar6, iVar0);
	func_494(&uVar6, iVar1);
	func_495(&uVar6, iVar2);
	func_496(&uVar6, iVar3);
	func_497(&uVar6, iVar4);
	func_498(&uVar6, iVar5);
	return uVar6;
}

bool func_439(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_499(iParam1) || !func_499(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_440(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_259(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_441(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MICAH_HIDEOUT_ABANDON"):
			return 292;
		case joaat("WS_RIDE_THE_LIGHTNING_CHAIR"):
			return 104;
		case joaat("WS_FAST_TRAVEL_MARKERS"):
			return 195;
		case joaat("WS_RHODES_SADIE3_COVER_ON"):
			return 59;
		case joaat("WS_SHOWS_SD_MOV_01"):
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case joaat("WS_CLAY_EXIST"):
			return 197;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
			return 49;
		case joaat("WS_HIDEOUT_SIX_POINT_LIGHTS"):
			return 92;
		case joaat("WS_GRAND_KORRIGAN_LOW_RAILING"):
			return 265;
		case joaat("WS_NBX_BUILDING_FUNDED"):
			return 112;
		case joaat("WS_RHODES_BANK_WALL_INTACT"):
			return 278;
		case joaat("WS_WAR_VETERAN_WOLF_TROPHY_ON"):
			return 208;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01_END"):
			return 165;
		case joaat("WS_DEWCLM_DOMINOES_SEATS"):
			return 276;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case joaat("WS_SHOWS_SD_VAUD_02"):
			return 10;
		case joaat("WS_SAINT_DENIS_BOATS_FOUND"):
			return 376;
		case joaat("WS_SWA_CHAIRS_CINEMATIC"):
			return 289;
		case joaat("WS_SHOWS_SD_MOV_02"):
			return 26;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			return 57;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			return 56;
		case joaat("WS_VALENTINE_BANK_WINDOWS"):
			return 123;
		case joaat("WS_ANTENOR_DOCKED"):
			return 266;
		case joaat("WS_GRZ_WEST_CAMP_SITE"):
			return 277;
		case joaat("WS_FIN1_DISABLE_VANHORN_FIRE"):
			return 253;
		case joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED"):
			return 257;
		case joaat("WS_FEUD1_WATER_TOWER_UP"):
			return 372;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS"):
			return 141;
		case joaat("WS_RHODES_BANK_LIGHTS_OFF"):
			return 64;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			return 3;
		case joaat("WS_SHOWS_SD_MAG_04"):
			return 23;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			return 61;
		case joaat("WS_SHOWS_SD_VAUD_05"):
			return 13;
		case joaat("WS_INDUSTRY3_POKER_TABLES"):
			return 233;
		case joaat("WS_MP_PROPERTY_LOCATIONS"):
			return 53;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			return 55;
		case joaat("WS_GUARMA_RUIN1_FLOOR_INTACT"):
			return 33;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON"):
			return 146;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON_DOORS"):
			return 147;
		case joaat("WS_THOMAS_DOWNES"):
			return 301;
		case -1556423728:
			return 218;
		case joaat("WS_BEAVER_HOLLOW_HIDEOUT"):
			return 116;
		case joaat("WS_CRD_CHIMNEY_OFF"):
			return 311;
		case joaat("WS_STRAWBERRY_JAIL_INTACT"):
			return 209;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS"):
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case joaat("WS_MP_LAKAY"):
			return 215;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_02"):
			return 172;
		case joaat("WS_SHOWS_SD_VAUD_04"):
			return 12;
		case joaat("WS_ROCKY_SEVEN_ENDLESS"):
			return 32;
		case joaat("WS_SHOWS_SD_MAG_03"):
			return 22;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			return 73;
		case joaat("WS_RIDE_THE_LIGHTNING_WAGON"):
			return 105;
		case joaat("WS_MP_HIDEOUT_HANGING_DOG"):
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON"):
			return 140;
		case -1318987693:
			return 222;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case joaat("WS_ON_THE_RUN_SHACK_HELPED_CONVICT"):
			return 270;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_01"):
			return 171;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			return 98;
		case joaat("WS_SHOWS_SD_MAG_02"):
			return 21;
		case joaat("WS_GRAVE_SUSAN"):
			return 300;
		case joaat("WS_VALENTINE_JAIL_INTACT"):
			return 235;
		case joaat("WS_STD_GALA_BALCONY_HIGH_MEM"):
			return 113;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_03"):
			return 170;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			return 126;
		case joaat("WS_VALENTINE_LOCKDOWN_BANK"):
			return 131;
		case joaat("WS_MP_HIDEOUT_TWIN_ROCKS"):
			return 333;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON"):
			return 156;
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
			return 45;
		case joaat("WS_VALENTINE_LOCKDOWN_JAIL"):
			return 136;
		case joaat("WS_COLTER_STAGE_FIRES_LIT"):
			return 46;
		case joaat("WS_RHODES_JAIL_INTACT"):
			return 234;
		case joaat("WS_VALENTINE_SALOON_WINDOWS"):
			return 124;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			return 100;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			return 242;
		case joaat("WB_DISCO_ALCHEMIST_HOUSE"):
			return 29;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			return 378;
		case joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED"):
			return 194;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS"):
			return 151;
		case joaat("WS_ORCHIDS_APPLESEED"):
			return 79;
		case joaat("WS_CHELONIAN_CAMP"):
			return 239;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
			return 176;
		case joaat("WS_RHODES_GRAYS3_COVER_ON"):
			return 58;
		case joaat("WS_RIDE_THE_LIGHTNING_BARRELS"):
			return 106;
		case joaat("WS_SWA_CHAIRS_REGULAR"):
			return 288;
		case joaat("WS_THIEVES_LANDING_BOAT"):
			return 251;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			return 36;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS"):
			return 152;
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
			return 44;
		case -939114198:
			return 221;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH"):
			return 236;
		case joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE"):
			return 84;
		case joaat("WS_HIDEOUT_HANGING_DOG_INACTIVE"):
			return 83;
		case joaat("WS_RHODES_SHERIFF_LOCKED"):
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case joaat("WS_BACCHUS_BRIDGE_DESTROYED"):
			return 260;
		case joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER"):
			return 245;
		case joaat("WS_HIDEOUT_TWIN_ROCKS_INACTIVE"):
			return 88;
		case joaat("WS_SHADY_BELLE_DOMINO_SEATS"):
			return 254;
		case joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER"):
			return 262;
		case joaat("WS_SAINTDENIS_BOAT"):
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case joaat("WS_NEW_COM_BANK_VAULT_RF"):
			return 228;
		case joaat("WS_TAXIDERMY_NOTICES"):
			return 78;
		case joaat("WS_RHODES_SALOON_POST_BRAITHWAITES"):
			return 60;
		case joaat("WS_SEAN_1_TENT"):
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case joaat("WS_BRAITHWAITES_3_ACTIVE"):
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case joaat("WS_RARE_FISH_CABIN_END"):
			return 80;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON_DOORS"):
			return 157;
		case joaat("WS_RHODES_ENDLESS_SUMMER"):
			return 67;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			return 191;
		case joaat("WS_RHODES_FENCE_OPEN"):
			return 261;
		case joaat("WS_MP_EVENT_AREAS"):
			return 214;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
			return 185;
		case joaat("WS_VALENTINE_GENSTORE_LIGHTS_OFF"):
			return 71;
		case joaat("WS_NATIVE1_ARMY_CAMP"):
			return 370;
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
			return 187;
		case joaat("WS_BGV_SHACK_LADDER_DOWN"):
			return 377;
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
			return 175;
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			return 174;
		case joaat("WS_VALENTINE_SALOON_BED_BLOODY"):
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			return 117;
		case joaat("WS_POST_CARAVAN_SHADY"):
			return 364;
		case joaat("WS_VALENTINE_SHOOTOUT"):
			return 238;
		case joaat("WS_FLAG_BRONTE_ADD_SP_DRESSING"):
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			return 8;
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
			return 186;
		case joaat("WS_NBX_MAUSOLEUM_PLUNDERED"):
			return 111;
		case joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN"):
			return 268;
		case joaat("WS_MP_HIDEOUT_MILLESANI_CLAIM"):
			return 316;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			return 225;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			return 205;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 143;
		case joaat("WS_WAPITI_TENT_OPEN"):
			return 272;
		case joaat("WS_MOB3_TROLLEY_DAMAGE"):
			return 368;
		case joaat("WS_SERIAL_KILLER_CABIN_OPEN"):
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case joaat("WS_BOOBY_TRAP_GUAMA_01"):
			return 162;
		case joaat("WS_POST_CARAVAN_HORSESHOE"):
			return 362;
		case joaat("WS_WATSON_GRAVE"):
			return 69;
		case joaat("WS_SISIKA_WINDOW_COVER"):
			return 361;
		case joaat("WS_MP_SDS_WELL_COVER"):
			return 360;
		case joaat("WS_VANHORN_BOATS_FOUND"):
			return 375;
		case joaat("WS_MP_STRAWBERRY_DR_MILO"):
			return 213;
		case joaat("WS_NEW_MRK_04_HIDEFORIND3"):
			return 267;
		case joaat("WS_DISCO_DEAD_SNAKE"):
			return 30;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			return 244;
		case joaat("WS_VALENTINE_LOCKDOWN_DOCTOR"):
			return 132;
		case joaat("WS_VALENTINE_WAGON"):
			return 121;
		case joaat("WS_CLM_DOMINOES_LANTERN"):
			return 273;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			return 204;
		case joaat("WS_VALENTINE_LOCKDOWN_RESTAURANT"):
			return 139;
		case joaat("WS_RHODES_LOCKDOWN_SALOON_DOORS"):
			return 149;
		case joaat("WS_PRONGHORN_RANCH_BURNED"):
			return 177;
		case joaat("WS_RID_CHIMNEY_OFF"):
			return 309;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			return 97;
		case -144653976:
			return 219;
		case joaat("WS_SHOWS_SD_VAUD_03"):
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND"):
			return 28;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02_END"):
			return 167;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON_DOORS"):
			return 145;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON"):
			return 154;
		case joaat("WS_TRAINROB1_SHOOTOUT"):
			return 373;
		case joaat("WS_VALENTINE_GENSTORE_ACTIVE"):
			return 258;
		case joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS"):
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case joaat("WS_SHOWS_SD_MAG_05"):
			return 24;
		case joaat("WS_FIN2_EXT_P19_FRAMES"):
			return 290;
		case joaat("WS_VALENTINE_HOTEL_CURTAINS_MUD3"):
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 153;
		case joaat("WS_GRAVE_HOSEA"):
			return 297;
		case joaat("WS_FLAG_BRONTE_ADD_MP_DRESSING"):
			return 248;
		case joaat("WS_VALENTINE_SHOOTOUT_START"):
			return 237;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			return 74;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			return 243;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case joaat("WS_MICAH_HIDEOUT"):
			return 291;
		case joaat("WS_UTP1_COVER01"):
			return 101;
		case joaat("WS_STD_DOCTORS_OFFICE"):
			return 114;
		case joaat("WS_HIDEOUT_SMUGGLER_DOCKS_INACTIVE"):
			return 86;
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
			return 183;
		case 171107021:
			return 381;
		case joaat("WS_ROANOKE_BOOBY_TRAP_HOLES"):
			return 283;
		case joaat("WS_SHOWS_VAL_MAG_03"):
			return 16;
		case joaat("WS_SHOWS_VAL_MAG_01"):
			return 14;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			return 241;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			return 62;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS"):
			return 142;
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case joaat("WS_CRN1_BURNT_BARN"):
			return 286;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01"):
			return 164;
		case joaat("WS_CARMODY_DELL_ABANDONED"):
			return 54;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE"):
			return 81;
		case joaat("WS_MICAH_CAMP"):
			return 95;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			return 119;
		case joaat("WS_SHB_DOMINOES_LANTERN"):
			return 275;
		case joaat("WS_VALENTINE_LOCKDOWN_RENT"):
			return 138;
		case joaat("WS_MP_BLACKWATER"):
			return 216;
		case joaat("WS_SADIE_BEDROLL"):
			return 198;
		case joaat("WS_VALENTINE_LOCKDOWN_GENERAL_STORE"):
			return 133;
		case joaat("WS_RHODES_GUNSMITH_FIRE_OFF"):
			return 66;
		case joaat("WS_FIN1_BURNT_LADDER"):
			return 287;
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
			return 47;
		case joaat("WS_FUSSAR2_LIGHTING"):
			return 281;
		case joaat("WS_GUARMA_EXISTS"):
			return 188;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS"):
			return 90;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			return 34;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_03"):
			return 173;
		case joaat("WS_GRAVE_EAGLE_FLIES"):
			return 293;
		case joaat("WS_SHOWS_VAL_MAG_04"):
			return 17;
		case joaat("WS_HSO_TABLE_SEATS"):
			return 303;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			return 42;
		case joaat("WS_SHOWS_VAL_MAG_02"):
			return 15;
		case joaat("WS_TANNERSREACH_BURNT"):
			return 199;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			return 108;
		case joaat("WS_DROUGHT_ENDED"):
			return 31;
		case joaat("WS_HSO_DOMINOES_SEATS"):
			return 302;
		case joaat("WS_NEW_COM_BANK_POST"):
			return 227;
		case joaat("WS_COLTER_STAGE_MP"):
			return 52;
		case joaat("WS_RE_MUC_ROCK_SCENE"):
			return 231;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			return 2;
		case joaat("WS_RE_MUC_KNIFE_SCENE"):
			return 232;
		case joaat("WS_RHODES_LOCKDOWN_SALOON"):
			return 148;
		case joaat("WS_COOTS_GRAVE_2_DUG"):
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case joaat("WS_STRAWBERRY_IGNORE_NEM_HOUSE"):
			return 246;
		case joaat("WS_SAINT_DENIS_DOCK_TRAINS"):
			return 279;
		case joaat("WS_MP_FETCH_OTH_MAC"):
			return 355;
		case joaat("WS_BLACKWATER_BURIAL"):
			return 159;
		case joaat("WS_STD_GAMBLING_DEN"):
			return 115;
		case joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES"):
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
			return 179;
		case joaat("WS_TAXIDERMY_MARITAL"):
			return 77;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			return 128;
		case joaat("WS_GRAVE_KIERAN"):
			return 294;
		case joaat("WS_GUARMA_WATER"):
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case joaat("WS_MP_HIDEOUT_LAKE_SHORE"):
			return 327;
		case joaat("WS_VALENTINE_LOCKDOWN_GUNSMITH"):
			return 134;
		case joaat("WS_WAR_VETERAN_FISH_TROPHY_ON"):
			return 207;
		case joaat("WS_BEECHERS_SHACK"):
			return 178;
		case joaat("WS_GRAND_KORRIGAN_DOCKED_INTERIOR"):
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
			return 48;
		case joaat("WS_FOR_MY_ART_NOBARPROPS"):
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case joaat("WS_SHOWS_VAL_MAG_05"):
			return 18;
		case joaat("WS_ANNES_SETTLERS_CLOSED_OFF"):
			return 240;
		case joaat("WS_RE_SP_SAVAGEWARNING_02"):
			return 285;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case joaat("WS_MP_HIDEOUT_MANTECA_FALLS"):
			return 335;
		case joaat("WS_NEW_COM_BANK_START"):
			return 224;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			return 298;
		case joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS"):
			return 247;
		case joaat("WS_SHOWS_VAL_MAG_CLOSED"):
			return 19;
		case joaat("WS_PAI_CHIMNEY_OFF"):
			return 310;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			return 7;
		case joaat("WS_VALENTINE_MAGIC_LANTERN_DOOR"):
			return 122;
		case joaat("WS_RE_SP_SAVAGEWARNING_01"):
			return 284;
		case joaat("WS_NBX_ART_RC_MASON_PASSED"):
			return 110;
		case joaat("WS_MP_HIDEOUT_BRANDYWINE"):
			return 319;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON"):
			return 144;
		case joaat("WS_SHOWS_SD_MOV_05"):
			return 27;
		case joaat("WS_VALENTINE_RES_CURTAINS_CLOSED"):
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case joaat("WS_VALENTINE_LOCKDOWN_HOTEL"):
			return 135;
		case joaat("WS_RHODES_BURIAL"):
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case joaat("WS_MFR_CHIMNEY_OFF"):
			return 307;
		case joaat("WS_CINCO_TORRES_DOOR_INTACT"):
			return 38;
		case joaat("WS_RE_MUC_TREE_SCENE"):
			return 230;
		case joaat("WS_BEECHERS_BARN_FINISHED"):
			return 184;
		case joaat("WS_HSO_DOMINOES_LANTERN"):
			return 274;
		case joaat("WS_HIDEOUT_SIX_POINT_INACTIVE"):
			return 85;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_02"):
			return 169;
		case joaat("WS_HORSESHOE_BARREL"):
			return 160;
		case 1216784232:
			return 269;
		case joaat("WS_PHONOGRAPH_BOAT_FOUND"):
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case joaat("WS_VALENTINE_BUTCHER_ACTIVE"):
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case joaat("WS_SHOWS_SD_MAG_01"):
			return 20;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			return 75;
		case joaat("WS_ON_THE_RUN_SHACK_REWARD_FOUND"):
			return 271;
		case joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED"):
			return 263;
		case joaat("WS_HIDEOUT_FORT_MERCER_INACTIVE"):
			return 82;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			return 223;
		case joaat("WS_STRAWBERRY_JAIL_IGNORE"):
			return 210;
		case joaat("WS_HUNTING_2_ABANDONED_CAMP"):
			return 217;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02"):
			return 166;
		case joaat("WS_TRELAWNY_1_HOUSE_TRASHED"):
			return 211;
		case 1446719356:
			return 380;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			return 125;
		case joaat("WS_SHADY_BELLE_EXTRA_BLOCKER"):
			return 120;
		case joaat("WS_SEAN_1_CAMP"):
			return 367;
		case joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR"):
			return 50;
		case joaat("WS_NATIVE_SON2_TREE_FALLEN"):
			return 102;
		case joaat("WS_GRAVE_SEAN"):
			return 295;
		case joaat("WS_MP_VALENTINE_AMBIENT"):
			return 212;
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			return 5;
		case joaat("WS_VALENTINE_AUCTION_GATES_OPEN"):
			return 72;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			return 35;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_01"):
			return 168;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			return 206;
		case joaat("WS_SAINT_DENIS_DOCK_BOATS"):
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case joaat("WS_BOOBY_TRAP_GUAMA_01_END"):
			return 163;
		case joaat("WS_NEW_GAR_BRON_MPCOVER_01"):
			return 359;
		case joaat("WS_COOTS_GRAVE_1_DUG"):
			return 304;
		case joaat("WS_POST_CARAVAN_BEAVERHOLLOW"):
			return 365;
		case joaat("WS_SHOWS_SD_VAUD_01"):
			return 9;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			return 107;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			return 118;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			return 127;
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
			return 181;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON"):
			return 150;
		case joaat("WS_HIDEOUT_HANGING_DOG_MARSTON4"):
			return 93;
		case 1672143046:
			return 383;
		case joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED"):
			return 68;
		case joaat("WS_MP_HIDEOUT_MOSSY_FLATS"):
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case joaat("WS_VALENTINE_LOCKDOWN_LAW_OFFICE"):
			return 137;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			return 94;
		case joaat("WS_POST_CARAVAN_CLEMENS"):
			return 363;
		case 1804403874:
			return 382;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			return 200;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			return 99;
		case joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"):
			return 196;
		case joaat("WS_VALENTINE_POKER_LESS_CHAIRS"):
			return 70;
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			return 51;
		case joaat("WS_MICAH_CAMP_POST"):
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case joaat("WS_CLEMENS_POINT_BARREL"):
			return 161;
		case joaat("WS_NBD1_ABANDONED_BUILDING_INTERIOR"):
			return 229;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			return 203;
		case joaat("WS_POISONED_WELL_BLOCKED_ENTRY"):
			return 371;
		case joaat("WS_HIDEOUT_SIX_POINT_TABLE"):
			return 91;
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			return 180;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			return 6;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			return 190;
		case joaat("WS_GUARMA3_GUARDS_DISABLED"):
			return 193;
		case joaat("WS_NATIVE1_COH_DESTROYED"):
			return 369;
		case joaat("WS_MAC_CHIMNEY_OFF"):
			return 308;
		case joaat("WS_RHODES_SALOON2_GRAVE"):
			return 63;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			return 299;
		case joaat("WS_COOTS_GRAVE_FILLED_IN"):
			return 306;
		case joaat("WS_FUSSAR2_NOCLIMB"):
			return 282;
		case joaat("WS_CRASHED_BOAT"):
			return 39;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case joaat("WS_SHADY_BELLE_SHUTTERS_CLOSED"):
			return 255;
		case joaat("WS_HIDEOUT_THIEVES_LANDING_INACTIVE"):
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_442(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;

	sVar2 = 39;
	sVar4 = 10;
	sVar4.f_1 = 39;
	sVar4.f_1.f_2 = 39;
	sVar4.f_1.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_500(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_500(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_501(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				sVar4[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] /*2*/ };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar4[iVar0 /*2*/] /*2*/ };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_443(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_502(uParam0, 1))
	{
		func_503(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_444(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_445(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_367(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_367(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_367(iVar2, iVar0);
		}
	}
}

int func_446(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_252();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_447(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(iParam0, bParam1, bParam3))
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(iParam0, iVar0, bParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_448(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_449(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_233(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_450(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_451(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_1() == -1)
	{
		func_504(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_505(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_452(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] & iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] & iParam0) != 0;
	}
	return false;
}

void func_453(int iParam0, bool bParam1, int iParam2)
{
	func_506(&(Global_1946054.f_1378), iParam0);
	func_507(2, iParam0, 6);
	if (bParam1)
	{
		func_454(0, 1);
	}
}

void func_454(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_508(0);
	}
	if (bParam0)
	{
		func_374(8);
		func_374((1 << 9));
	}
	else
	{
		func_374(8);
		func_374(16);
	}
}

bool func_455(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_456(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_457(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_458(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_459(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR" /* GXTEntry: "Fair" */;
					}
					else
					{
						return func_266(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD" /* GXTEntry: "Cold" */, "PMPLAYER_CONDITION_TEMPERATURE_HOT" /* GXTEntry: "Hot" */);
					}
					break;
				case 2:
					return func_266(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD" /* GXTEntry: "Good" */, "PMPLAYER_CONDITION_HONOR_BAD" /* GXTEntry: "Bad" */);
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE" /* GXTEntry: "~1~%" */;
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES" /* GXTEntry: "~1~ minutes" */;
				case 2:
					return "PMPLAYER_CORE_PC_VALUE" /* GXTEntry: "~1~%" */;
				default:
					break;
			}
			break;
	}
	return "";
}

int func_460()
{
	return Global_1946054.f_1497;
}

char* func_461(int iParam0)
{
	int iVar0;

	iVar0 = func_396(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_322(iVar0);
}

bool func_462()
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

int func_463(int iParam0)
{
	if (!func_324(iParam0))
	{
		return -1;
	}
	return func_510(func_509(iParam0));
}

bool func_464(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_465(int iParam0)
{
	int iVar0;

	if (func_511(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_512(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_513(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_514(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_466(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_9(func_515(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_467(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_9(func_516(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_468(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_469()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_115(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_296(1);
	func_420(1, iVar0, 0);
}

void func_470(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_471()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_115(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_296(2);
	func_420(2, iVar0, 0);
}

void func_472()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_115(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_296(0);
	func_420(0, iVar0, 0);
}

bool func_473(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_474(int iParam0)
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

bool func_475(int iParam0, int iParam1)
{
	return false;
}

bool func_476()
{
	return false;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_39(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_39(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_39(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_478(int iParam0, int iParam1)
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

char* func_479(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_480(int iParam0)
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

char* func_481(int iParam0)
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

int func_482(int iParam0)
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

int func_483(int iParam0)
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

int func_484(int iParam0)
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

bool func_485(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_517(iParam1) && !func_518(iParam1))
	{
		iVar0 = func_519(iParam1);
	}
	else
	{
		return false;
	}
	func_520(uParam3);
	iVar5 = func_521(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, iVar0, iVar5, 0))
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

void func_486(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_522(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_523(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_487(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::COPY_SCRIPT_STRUCT(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_36(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_488(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_16(iVar1, 0))
		{
			func_524(iVar1, 0, bParam0);
		}
		Global_1946054.f_2657[iVar0] = 0;
		iVar0 += -1;
	}
	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
}

void func_489(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_1() == -1)
	{
		func_525(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar2 = Global_1946054.f_2657[iVar0];
		if (func_64(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_526(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_527(iVar2, 0))
		{
			func_528(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_490(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_64(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_530(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_530(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_530(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_530(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_530(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_530(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_531(0))
	{
		func_532(iParam0, 1);
		if (func_252() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_532(func_531(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_532(func_531(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_533();
	if (func_534(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_39(0), iParam0, 0);
	}
	func_528(iParam0, bParam3);
	if (bParam2)
	{
		func_454(0, 0);
	}
}

void func_491(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*iParam1)[iVar0], 0, false))
			{
				if (func_184((*iParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*iParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*iParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_492(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_493(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= (*iParam0 & (1 << 31));
	}
}

void func_494(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_495(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_429(*iParam0);
	iVar1 = func_428(*iParam0);
	if (iParam1 < 1 || iParam1 > func_434(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_496(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_497(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_498(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_499(int iParam0)
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
	iVar0 = func_433(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_432(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_431(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_428(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_429(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_430(iParam0);
	if (iVar5 < 1 || iVar5 > func_434(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_500(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_501(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_502(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_503(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_504(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_505(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_506(var uParam0, int iParam1)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_504(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_505(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_507(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] |= iParam0;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] |= iParam0;
	}
}

void func_508(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

int func_509(int iParam0)
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

int func_510(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_511(int iParam0)
{
	if (!func_16(iParam0, 0))
	{
		return false;
	}
	if (func_60(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_512(int iParam0)
{
	if (!func_16(iParam0, 0))
	{
		return false;
	}
	if (func_60(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_513(int iParam0)
{
	if (!func_16(iParam0, 0))
	{
		return false;
	}
	if (func_60(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_514(int iParam0)
{
	if (!func_16(iParam0, 0))
	{
		return false;
	}
	if (func_60(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_515(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_535(iParam0);
		case 1:
			return func_536(iParam0);
		case 2:
			return func_537(iParam0);
		case 3:
			return func_538(iParam0);
	}
	return 0;
}

int func_516(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_539(iParam0);
		case 1:
			return func_540(iParam0);
		case 2:
			return func_541(iParam0);
		case 3:
			return func_542(iParam0);
		case 4:
			return func_543(iParam0);
		case 5:
			return func_544(iParam0);
		case 6:
			return func_545(iParam0);
		case 7:
			return func_546(iParam0);
		case 8:
			return func_547(iParam0);
	}
	return 0;
}

bool func_517(int iParam0)
{
	iParam0 = func_548(iParam0);
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

bool func_518(int iParam0)
{
	int iVar0;

	iParam0 = func_548(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_517(iParam0))
	{
		return false;
	}
	iVar0 = func_519(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_519(int iParam0)
{
	iParam0 = func_548(iParam0);
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

void func_520(var uParam0)
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

int func_521(int iParam0)
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

void func_522(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_523(int iParam0, int iParam1, int iParam2, int iParam3)
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
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return bVar2;
}

void func_524(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_64(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_549(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_549(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_549(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_549(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_549(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_549(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_533();
	}
	if (bParam1)
	{
		func_454(0, 0);
	}
}

void func_525(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;

	sVar2 = -1;
	sVar2.f_1 = -1;
	sVar2.f_2 = -1;
	sVar2.f_3 = -1;
	sVar2.f_4 = -1;
	sVar2.f_5 = -1;
	sVar2.f_6 = -1;
	sVar2.f_7 = -1;
	sVar2.f_8 = -1;
	sVar2.f_13 = -1;
	sVar2.f_14 = -1;
	sVar2.f_15 = -1;
	sVar2.f_16 = -1;
	sVar2.f_17 = -1;
	sVar2 = { func_144(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_147(&sVar2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
		func_37(iVar0);
	}
}

void func_526(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_550(iParam2, *uParam0);
	func_551(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_527(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_152(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_188(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_292(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_39(0), &sVar5, bParam1);
	return true;
}

void func_528(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_152(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_188(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_292(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_39(0), &sVar5, bParam1);
}

bool func_529(int iParam0)
{
	if (func_1() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_530(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_552(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_527(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_64(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_526(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_531(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_252();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000") /* GXTEntry: "John\'s Classic Hat" */;
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000") /* GXTEntry: "Arthur\'s Hat" */;
}

int func_532(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_152(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_188(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_292(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_39(0), &sVar5);
	return 1;
}

void func_533()
{
	int iVar0;

	if (func_1() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946054.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946054.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
}

bool func_534(int iParam0)
{
	return func_554(func_553(iParam0));
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR") /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR") /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR") /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO") /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR") /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER") /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER") /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT") /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE") /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR") /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR") /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR") /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO") /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR") /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER") /* GXTEntry: "Horseman Gun Belt" */;
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER") /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT") /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE") /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR") /* GXTEntry: "Bandit Holster" */;
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR") /* GXTEntry: "Explorer Holster" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR") /* GXTEntry: "Gambler Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO") /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR") /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER") /* GXTEntry: "Horseman Holster" */;
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER") /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT") /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE") /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR") /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR") /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR") /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO") /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR") /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER") /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER") /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT") /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE") /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR") /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR") /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR") /* GXTEntry: "Bandit Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR") /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR") /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR") /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR") /* GXTEntry: "Explorer Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR") /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR") /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR") /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR") /* GXTEntry: "Gambler Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR") /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO") /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO") /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO") /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO") /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR") /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR") /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR") /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR") /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER") /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER") /* GXTEntry: "Horseman Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER") /* GXTEntry: "Horseman Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER") /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER") /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER") /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER") /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER") /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT") /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT") /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT") /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT") /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE") /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE") /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE") /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE") /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_548(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_549(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_552(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_64(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_555(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_64(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_555(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_527(iParam0, 1);
	return 1;
}

void func_550(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_551(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_556(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_233(func_342(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_557(uParam0);
	}
}

bool func_552(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return 2;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return 16;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return 4;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return 8;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_554(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

void func_555(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_558(iParam1);
	func_559(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_560(&(uParam0->f_26), iVar1);
		if (func_561(uParam0->f_26, &iVar0))
		{
			func_562(iVar0, iVar1);
		}
	}
}

void func_556(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_563(&(uParam0->f_3));
}

void func_557(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_564(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_558(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_559(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_560(var uParam0, int iParam1)
{
	*uParam0--;
	func_556(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_561(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_562(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_563(var uParam0)
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_564(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_565(func_252());
	if (*uParam0)
	{
		func_563(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(iVar0, uParam1, 0, func_1() != -1, iParam2);
	*uParam0 = 1;
}

int func_565(int iParam0)
{
	if (func_1() == -1)
	{
		switch (iParam0)
		{
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR"):
				return 0;
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"):
				return 0;
			case joaat("MPC_PLAYER_TYPE_SP_MARSTON"):
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

