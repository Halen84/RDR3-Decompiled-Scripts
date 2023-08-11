#pragma region Local_Variables
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 4;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
#pragma endregion

void __SCRIPT()
{
	func_1();
	if (func_2(&iLocal_0) == 1)
	{
		func_3(&iLocal_0);
	}
	if (func_4(&iLocal_0) == 1)
	{
		func_3(&iLocal_0);
	}
	func_5(&iLocal_0);
	func_3(&iLocal_0);
}

void func_1()
{
	TELEMETRY::_TELEMETRY_START_GUN_LOCKER_INTERACTION();
}

int func_2(int* iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return 1;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_6(iParam0, joaat("WEAPON_LOCKER_PAGE_TYPE_INVALID"));
	if (!func_7(iParam0))
	{
		return 1;
	}
	if (!func_8(iParam0))
	{
		return 1;
	}
	func_9(iParam0, joaat("WEAPON_LOCKER_PAGE_TYPE_WEAPONS"));
	func_10(iParam0);
	return 0;
}

void func_3(int iParam0)
{
	func_11(0, -1);
	func_12();
	func_13(iParam0);
	if (!func_14(iParam0))
	{
	}
	if (!func_15(iParam0))
	{
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_4(int iParam0)
{
	if (!func_16(joaat("WEAPON_LOCKER")))
	{
		return 1;
	}
	return 0;
}

void func_5(int* iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = true;
		}
		if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("WEAPON_LOCKER")))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			func_17(iParam0);
			func_9(iParam0, UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(joaat("WEAPON_LOCKER")));
			func_18(iParam0);
		}
		BUILTIN::WAIT(0);
	}
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_7(var uParam0)
{
	uParam0->f_94 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_94))
	{
		return false;
	}
	uParam0->f_94.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_94, "header_text", MISC::VAR_STRING(2, "WL_HEADER"));
	uParam0->f_94.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_94, "footer_text", "");
	uParam0->f_94.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_94, "footer_color", joaat("COLOR_WHITE"));
	return true;
}

bool func_8(var uParam0)
{
	var uVar0;
	char* sVar6;
	int iVar7;

	if (!func_19(uParam0, &(uParam0->f_94)))
	{
		return false;
	}
	if (!func_20(&(uParam0->f_2.f_2), &(uParam0->f_2), &uVar0))
	{
		return false;
	}
	if (func_21(&(uParam0->f_2.f_13), &(uParam0->f_2), joaat("WEAPON_FILTER")))
	{
		func_22(&(uParam0->f_2.f_13));
		iVar7 = 0;
		while (iVar7 < 4)
		{
			sVar6 = func_23(iVar7);
			sVar6 = MISC::VAR_STRING(2, sVar6);
			if (!func_24(&(uParam0->f_2.f_13), &(uParam0->f_2.f_21), iVar7, sVar6))
			{
			}
			iVar7++;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_9(int* iParam0, int iParam1)
{
	if (func_25(iParam0) != iParam1)
	{
		func_6(iParam0, iParam1);
		func_26(iParam0, func_25(iParam0));
		func_27(iParam0, func_25(iParam0));
	}
	func_28(iParam0, func_25(iParam0));
	func_29(iParam0, func_25(iParam0));
}

void func_10(int* iParam0)
{
	var uVar0;
	struct<22> /*176*/ sVar4;
	int iVar26;
	bool bVar27;

	sVar4.f_9 = joaat("SLOTID_NONE");
	iVar26 = 0;
	while (iVar26 < 29)
	{
		bVar27 = func_30(Global_35, iVar26, 1, 0);
		if (func_31(bVar27))
		{
			if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, iVar26, &uVar0) && INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &uVar0, &sVar4, 22, 1))
			{
				if (!sVar4.f_21)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iVar26, false, false);
				}
			}
		}
		iVar26++;
	}
	WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, false);
}

void func_11(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_32(&Global_0, 8);
	}
	if (!func_33() || func_34() != -1)
	{
		return;
	}
	func_32(&Global_0, 1);
}

void func_12()
{
	TELEMETRY::_TELEMETRY_GUN_LOCKER();
}

void func_13(int iParam0)
{
	if (!UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		return;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("WEAPON_LOCKER"));
	GRAPHICS::_0x26DD2FB0A88CC412("WheelHUDIn", "WheelHUDOut", 0, 0);
	MISC::SET_TIME_SCALE(1.0f);
}

bool func_14(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_94))
	{
		return false;
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_94);
	return true;
}

bool func_15(int iParam0)
{
	if (!func_35(iParam0))
	{
	}
	return true;
}

bool func_16(int iParam0)
{
	if (!UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(iParam0))
	{
		return false;
	}
	switch (UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		default:
			break;
	}
	return false;
}

void func_17(int* iParam0)
{
	struct<4> /*32*/ sVar0;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(1600976403))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(1600976403, &sVar0))
		{
			func_36(iParam0, &sVar0);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(1600976403);
		}
	}
	if (func_37(iParam0))
	{
		sVar0 = { func_38(iParam0) /*4*/ };
		func_36(iParam0, &sVar0);
		func_39(iParam0);
	}
}

void func_18(int* iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_37(iParam0))
	{
		sVar0 = { func_38(iParam0) /*4*/ };
		func_36(iParam0, &sVar0);
		func_39(iParam0);
	}
}

bool func_19(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_2))
	{
		return false;
	}
	uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "weapon_list");
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_2.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2.f_1);
	}
	uParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "weapon_list_hint_visible", false);
	uParam0->f_2.f_91 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2, "weapon_list_hint_label", 0);
	return true;
}

bool func_20(var uParam0, var uParam1, var uParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, "weapon_stat_visible", *uParam2);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponPowerNew", uParam2->f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponRangeNew", uParam2->f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponAccuracyNew", uParam2->f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponFireRateNew", uParam2->f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponReloadNew", uParam2->f_5);
	return true;
}

bool func_21(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_7 = iParam2;
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

void func_22(var uParam0)
{
	uParam0->f_4 = 0;
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WL_FILTER_ALL";
		case 1:
			return "WL_FILTER_LOCKER";
		case 2:
			return "WL_FILTER_HORSE";
		case 3:
			return "WL_FILTER_EQUIPPED";
		default:
			break;
	}
	return "INVALID_LABEL";
}

bool func_24(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	int iVar0;

	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		return false;
	}
	if (!uParam0->f_5)
	{
		return false;
	}
	(*uParam1)[uParam0->f_4 /*17*/] = iParam2;
	(uParam1[uParam0->f_4 /*17*/])->f_1 = { func_40(sParam3) /*16*/ };
	uParam0->f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

int func_25(int* iParam0)
{
	return iParam0->f_1;
}

void func_26(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_LOCKER_PAGE_TYPE_WEAPONS"):
			func_41(uParam0);
			break;
	}
}

void func_27(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_LOCKER_PAGE_TYPE_WEAPONS"):
			func_42(&(uParam0->f_2.f_13));
			break;
	}
}

void func_28(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_LOCKER_PAGE_TYPE_WEAPONS"):
			func_43(iParam0);
			break;
	}
}

void func_29(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_LOCKER_PAGE_TYPE_WEAPONS"):
			func_44(&(iParam0->f_2.f_13), &(iParam0->f_2.f_21));
			break;
	}
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_31(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_A_GUN(bParam0) && !WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return false;
	}
	return true;
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_33()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_34()
{
	return Global_1572887.f_12;
}

bool func_35(int iParam0)
{
	return true;
}

void func_36(int* iParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_2;
	switch (*uParam1)
	{
		case joaat("ITEM_UNFOCUSED"):
			func_46(iParam0);
			break;
		case joaat("ITEM_FOCUSED"):
			if (func_47(&(iParam0->f_2.f_13)))
			{
			}
			else
			{
				func_48(iParam0, uParam1);
				switch (iVar0)
				{
					case -2060496899:
					case -1694113483:
					case -1174213347:
					case -337881065:
						if (!func_49(iParam0, &(uParam1->f_3)))
						{
						}
						if (!func_50(&(iParam0->f_2.f_2), &(uParam1->f_3)))
						{
						}
						break;
				}
				func_51(iParam0, iVar0);
			}
			break;
		case joaat("ITEM_SELECTED"):
			switch (iVar0)
			{
				case -1313710397:
					if (func_52(&(uParam1->f_3), 2))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -1756222973:
					if (func_52(&(uParam1->f_3), 3))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -1073027202:
					if (func_54(&(uParam1->f_3)))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -1103499950:
					if (func_55(&(uParam1->f_3)))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -946029012:
					if (func_52(&(uParam1->f_3), 10))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case 1554581363:
					if (func_52(&(uParam1->f_3), 9))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case 941907253:
					if (func_52(&(uParam1->f_3), 4))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -466398939:
					if (func_52(&(uParam1->f_3), 7))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -260514364:
					if (func_52(&(uParam1->f_3), 8))
					{
						func_53(iParam0, 0, 1);
					}
					break;
			}
			break;
		case joaat("TAB_PAGE_DECREMENT"):
		case joaat("TAB_PAGE_INCREMENT"):
			switch (iVar0)
			{
				case 752670436:
					func_42(&(iParam0->f_2.f_13));
					func_56(iParam0);
					break;
			}
			break;
	}
}

bool func_37(int* iParam0)
{
	return iParam0->f_98 != 0;
}

struct<4> /*32*/ func_38(int* iParam0)
{
	return iParam0->f_98;
}

void func_39(int* iParam0)
{
	var uVar0;

	iParam0->f_98 = 0;
	iParam0->f_98.f_2 = 0;
	iParam0->f_98.f_1 = 0;
	iParam0->f_98.f_3 = uVar0;
}

struct<16> /*128*/ func_40(char* sParam0)
{
	char cVar0[128];

	strcpy_s(&cVar0, 128, sParam0);
	return cVar0;
}

void func_41(var uParam0)
{
}

void func_42(var uParam0)
{
	if (!uParam0->f_5)
	{
		return;
	}
	uParam0->f_6 = 1;
}

void func_43(int* iParam0)
{
	int iVar0;

	if (func_47(&(iParam0->f_2.f_13)))
	{
		func_53(iParam0, 0, 1);
	}
	if (func_57(iParam0, 0))
	{
		func_53(iParam0, 0, 0);
		iVar0 = func_58(iParam0);
		if (!func_59(iParam0, iVar0))
		{
		}
		func_60(iParam0);
		func_61(iParam0, iVar0);
		func_62(iParam0, iVar0);
	}
}

void func_44(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!uParam0->f_6)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		uParam0->f_6 = 0;
		return;
	}
	iVar0 = func_63(uParam0);
	if (iVar0 == -1)
	{
		uParam0->f_6 = 0;
		return;
	}
	iVar1 = *uParam1;
	iVar2 = func_64(uParam0);
	iVar3 = (iVar2 - 1);
	if (iVar0 < 0 || iVar0 > iVar3)
	{
		uParam0->f_6 = 0;
		return;
	}
	if (iVar1 < iVar2)
	{
		uParam0->f_6 = 0;
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, &((uParam1[iVar0 /*17*/])->f_1));
	uParam0->f_6 = 0;
}

bool func_45(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_46(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_94.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_94.f_2, "");
	return 1;
}

bool func_47(var uParam0)
{
	return uParam0->f_6;
}

int func_48(var uParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return 0;
	}
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_102), uParam1, 4);
	return 1;
}

bool func_49(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	sVar2 = { func_66(bVar0, func_65(0), iVar1, 0) /*4*/ };
	if (!func_67(&sVar2))
	{
		return false;
	}
	func_68(uParam0, sVar2);
	return true;
}

bool func_50(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_damage"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_range"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_accuracy"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_firerate"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_reload"));
	return true;
}

void func_51(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_69(uParam0, iParam1))
			{
				func_46(uParam0);
			}
			break;
		default:
			func_46(uParam0);
			break;
	}
}

bool func_52(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_45(bVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	if (!func_70(bVar0, iVar1, iParam1))
	{
		return false;
	}
	return true;
}

void func_53(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_71(iParam0, iParam1);
	}
	else
	{
		func_72(iParam0, iParam1);
	}
}

bool func_54(var uParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_45(bVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	sVar2 = { func_66(bVar0, func_65(0), iVar1, 0) /*4*/ };
	if (!func_67(&sVar2))
	{
		return false;
	}
	if (!func_73(&sVar2))
	{
		return false;
	}
	return true;
}

bool func_55(var uParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_45(bVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	sVar2 = { func_66(bVar0, func_65(0), iVar1, 0) /*4*/ };
	if (!func_67(&sVar2))
	{
		return false;
	}
	if (!func_74(&sVar2))
	{
		return false;
	}
	return true;
}

void func_56(int* iParam0)
{
	func_75(&(iParam0->f_2.f_9));
}

bool func_57(int* iParam0, int iParam1)
{
	return func_76(*iParam0, iParam1);
}

int func_58(int* iParam0)
{
	return func_77(&(iParam0->f_2.f_13), &(iParam0->f_2.f_21));
}

bool func_59(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> /*80*/ sVar2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	if (!func_78("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 1))
	{
		return false;
	}
	sVar2.f_9 = joaat("SLOTID_NONE");
	iVar17 = 0;
	iVar19 = 0;
	while (iVar19 < 7)
	{
		iVar18 = 0;
		while (iVar18 < iVar1)
		{
			if (!func_79(&sVar2, iVar18, iVar0, iVar1))
			{
			}
			else if (!func_31(sVar2.f_4))
			{
			}
			else if (func_80(sVar2.f_4, sVar2.f_9))
			{
			}
			else if (func_81(sVar2.f_4) != iVar19)
			{
			}
			else
			{
				iVar16 = func_82(&sVar2);
				if (iParam1 != 0)
				{
					switch (iVar16)
					{
						case -1:
							Jump @255; // curOff = 180
							Jump @222; // curOff = 183
							if (iParam1 != 3)
							{
							}
							else
							{
								Jump @222; // curOff = 195
								if (iParam1 != 2)
								{
								}
								else
								{
									Jump @222; // curOff = 207
									if (iParam1 != 1)
									{
									}
									else if (!func_83(iParam0, iVar17, sVar2.f_4, sVar2.f_9, iVar16, iParam1))
									{
									}
									else
									{
										iVar17++;
									}
								}
							}
							iVar18++;
							iVar19++;
							if (!func_84(iParam0, iVar17))
							{
							}
							if (!func_85(iVar0))
							{
							}
							return true;
						}
					}
				}
			}
		}

void func_60(int* iParam0)
{
	int iVar0;

	iVar0 = func_86(iParam0);
	func_87(&(iParam0->f_2.f_2), func_86(iParam0) > 0);
	if (iVar0 == 0)
	{
		func_88(&(iParam0->f_2.f_2));
	}
}

void func_61(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_86(iParam0);
	switch (iParam1)
	{
		case 1:
			func_89(iParam0, iVar0 == 0);
			func_90(iParam0, -2012945523);
			break;
		case 2:
			func_89(iParam0, iVar0 == 0);
			func_90(iParam0, -1705332461);
			break;
		default:
			func_89(iParam0, 0);
			break;
	}
}

void func_62(int* iParam0, int iParam1)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_86(iParam0);
	if (iVar0 > 0)
	{
		sVar1.f_0 = joaat("ITEM_FOCUSED");
		if (func_47(&(iParam0->f_2.f_13)))
		{
			sVar1.f_1 = 0;
		}
		else
		{
			sVar1.f_1 = func_91(iParam0);
			if (sVar1.f_1 >= iVar0)
			{
				sVar1.f_1 = (iVar0 - 1);
			}
		}
		sVar1.f_2 = func_92(iParam1);
		if (!func_93(iParam0, sVar1.f_1, &(sVar1.f_3)))
		{
		}
		if (!func_94(iParam0, &sVar1))
		{
		}
	}
}

int func_63(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return DATABINDING::DATABINDING_READ_INT(uParam0->f_3);
}

int func_64(var uParam0)
{
	return uParam0->f_4;
}

struct<4> /*32*/ func_65(bool bParam0)
{
	int iVar0;

	iVar0 = func_95(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_66(joaat("CARRIED_WEAPONS"), func_96(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_66(joaat("CARRIED_WEAPONS"), func_96(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_66(joaat("CARRIED_WEAPONS"), func_96(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

struct<4> /*32*/ func_66(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_45(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_95(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_67(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_67(&uParam1))
	{
		return 0;
	}
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

bool func_69(var uParam0, int iParam1)
{
	char* sVar0;
	struct<4> /*32*/ sVar1;
	struct<10> /*80*/ sVar5;

	switch (iParam1)
	{
		case -1174213347:
			break;
		case -1694113483:
			sVar0 = "WL_NUMBER_STORED_IN_WL";
			break;
		case -337881065:
			sVar0 = "WL_NUMBER_STOWED_ON_HORSE";
			break;
		case -2060496899:
			sVar0 = "WL_NUMBER_EQUIPPED";
			break;
		default:
			return false;
	}
	sVar1 = { func_97(uParam0) /*4*/ };
	if (func_67(&sVar1))
	{
		sVar5.f_9 = joaat("SLOTID_NONE");
		if (INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &sVar1, &sVar5, 22, 1))
		{
		}
		switch (func_98(&sVar1))
		{
			case 3:
				func_99(uParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return true;
			case 4:
				if (!func_100(func_30(Global_35, 2, 1, 0)))
				{
					func_99(uParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				}
				return true;
			case 5:
				func_99(uParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return true;
		}
	}
	if (func_86(uParam0) > 0)
	{
		func_99(uParam0, MISC::VAR_STRING(2, sVar0, func_86(uParam0)));
	}
	else
	{
		func_46(uParam0);
	}
	return true;
}

bool func_70(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	struct<15> /*120*/ sVar5;
	int iVar27;
	struct<15> /*120*/ sVar28;
	var uVar50;
	bool bVar54;

	sVar1 = { func_66(bParam0, func_65(0), iParam1, 0) /*4*/ };
	sVar5.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &sVar1, &sVar5, 22, 1))
	{
		return false;
	}
	iVar0 = sVar5.f_14;
	sVar28.f_9 = joaat("SLOTID_NONE");
	if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, iParam2, &uVar50) && func_31(func_30(Global_35, iParam2, 1, 0)))
	{
		if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &uVar50, &sVar28, 22, 1))
		{
			return false;
		}
		bVar54 = func_30(Global_35, iParam2, 1, 0);
		iVar27 = sVar28.f_14;
	}
	else if (WEAPON::IS_WEAPON_BOW(bParam0) || WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		if (WEAPON::IS_WEAPON_BOW(bParam0))
		{
			switch (iVar0)
			{
				case 8:
					iVar27 = 9;
					break;
				case 7:
					iVar27 = 10;
					break;
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
		{
			switch (iVar0)
			{
				case 10:
					iVar27 = 7;
					break;
				case 9:
					iVar27 = 8;
					break;
			}
		}
		bVar54 = func_30(Global_35, iVar27, 1, 0);
		if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, iVar27, &uVar50) && func_31(bVar54))
		{
			if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &uVar50, &sVar28, 22, 1))
			{
				return false;
			}
			if (WEAPON::IS_WEAPON_BOW(bVar54))
			{
				switch (iVar27)
				{
					case 8:
						iVar0 = 7;
						break;
					case 7:
						iVar0 = 8;
						break;
				}
			}
			else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
			{
				switch (iVar27)
				{
					case 10:
						iVar0 = 9;
						break;
					case 9:
						iVar0 = 10;
						break;
				}
			}
		}
	}
	if (func_82(&sVar5) == 2)
	{
		func_101(sVar5.f_4);
	}
	if (func_102(&sVar1, &iParam2, 1))
	{
	}
	if (func_67(&uVar50))
	{
		if (func_103(bVar54, iVar27, iVar0))
		{
			if (func_102(&sVar28, &iVar0, 1))
			{
			}
		}
	}
	return true;
}

void func_71(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_72(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_73(var uParam0)
{
	struct<22> /*176*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, uParam0, &sVar0, 22, 1))
	{
		return false;
	}
	sVar0.f_21 = 0;
	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(1, uParam0, &sVar0, 22))
	{
		return false;
	}
	func_104(sVar0.f_4);
	if ((ENTITY::DOES_ENTITY_EXIST(func_105(0)) && func_100(WEAPON::_0xAFFD0CCF31F469B8(func_105(0)))) && WEAPON::_0xAFFD0CCF31F469B8(func_105(0)) == sVar0.f_4)
	{
		WEAPON::_0xD4C6E24D955FF061(func_105(0));
	}
	if ((ENTITY::DOES_ENTITY_EXIST(func_105(1)) && func_100(WEAPON::_0xAFFD0CCF31F469B8(func_105(1)))) && WEAPON::_0xAFFD0CCF31F469B8(func_105(1)) == sVar0.f_4)
	{
		WEAPON::_0xD4C6E24D955FF061(func_105(1));
	}
	if (sVar0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, sVar0.f_14, false, false);
	}
	return true;
}

bool func_74(var uParam0)
{
	struct<22> /*176*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, uParam0, &sVar0, 22, 1))
	{
		return false;
	}
	sVar0.f_21 = 1;
	if (func_82(&sVar0) == 2)
	{
		func_101(sVar0.f_4);
	}
	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(1, uParam0, &sVar0, 22))
	{
		return false;
	}
	if (sVar0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, sVar0.f_14, false, false);
	}
	return true;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_76(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

int func_77(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!uParam0->f_5)
	{
		return -1;
	}
	iVar0 = *uParam1;
	iVar1 = DATABINDING::DATABINDING_READ_INT(uParam0->f_3);
	if (iVar1 < 0 || iVar1 >= iVar0)
	{
		return -1;
	}
	return (*uParam1)[iVar1 /*17*/];
}

bool func_78(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_95(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_79(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_80(bool bParam0, int iParam1)
{
	struct<10> /*80*/ sVar0;
	var uVar22;

	if (!func_100(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_106(bParam0, &uVar22, &sVar0, iParam1))
	{
		return false;
	}
	return func_107(bParam0, &sVar0, iParam1);
}

int func_81(bool bParam0)
{
	if (!func_31(bParam0))
	{
		return -1;
	}
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		return 0;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		return 1;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		return 2;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(bParam0))
	{
		return 3;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		return 4;
	}
	else if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return 5;
	}
	return 6;
}

int func_82(var uParam0)
{
	struct<22> /*176*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, uParam0, &sVar0, 22, 1))
	{
		return -1;
	}
	if (!sVar0.f_21)
	{
		return 2;
	}
	else if (sVar0.f_21 && sVar0.f_14 != -1)
	{
		return 0;
	}
	else if (sVar0.f_21 && sVar0.f_14 == -1)
	{
		return 1;
	}
	return -1;
}

bool func_83(int* iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> /*56*/ sVar0;
	bool bVar47;
	var uVar48;

	if (!func_31(bParam2))
	{
		return false;
	}
	sVar0 = 1;
	sVar0.f_1 = 1;
	sVar0.f_2 = joaat("COLOR_WHITE");
	sVar0.f_4 = -1;
	sVar0.f_5 = -1134602452;
	sVar0.f_6 = 1276832712;
	if (!func_108(bParam2, iParam3, &sVar0, iParam4, iParam5))
	{
		return false;
	}
	bVar47 = true;
	if (iParam1 < func_86(iParam0))
	{
		if (func_93(iParam0, iParam1, &uVar48))
		{
			if (func_109(&uVar48, &sVar0))
			{
				bVar47 = false;
			}
		}
	}
	if (bVar47)
	{
		if (!func_110(iParam0, &sVar0))
		{
			return false;
		}
	}
	return true;
}

bool func_84(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iParam1 < 0 || iParam1 > iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(iParam0->f_2.f_1, iVar1);
		iVar1 += -1;
	}
	return true;
}

bool func_85(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return false;
	}
	return true;
}

int func_86(int* iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
}

int func_87(var uParam0, bool bParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_88(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, 0);
	return 1;
}

int func_89(int* iParam0, bool bParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2.f_90))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2.f_90, bParam1);
	return 1;
}

int func_90(int* iParam0, int iParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2.f_91))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0->f_2.f_91, iParam1);
	return 1;
}

var func_91(int* iParam0)
{
	return iParam0->f_102.f_1;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1174213347;
		case 1:
			return -1694113483;
		case 2:
			return -337881065;
		case 3:
			return -2060496899;
		default:
			break;
	}
	return 0;
}

bool func_93(int* iParam0, int iParam1, var uParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1))
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2.f_1, iParam1);
	return true;
}

bool func_94(int* iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return false;
	}
	if (iParam0->f_98 != 0)
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(&(iParam0->f_98), uParam1, 4);
	return true;
}

int func_95(bool bParam0)
{
	if (func_34() == -1)
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

struct<4> /*32*/ func_96(bool bParam0)
{
	return func_66(joaat("CHARACTER"), func_111(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_97(var uParam0)
{
	return uParam0->f_2.f_9;
}

int func_98(var uParam0)
{
	struct<15> /*120*/ sVar0;
	int iVar22;

	if (!func_67(uParam0))
	{
		return 1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(0), uParam0, &sVar0, 22, 1))
	{
		return 2;
	}
	iVar22 = sVar0.f_14;
	switch (iVar22)
	{
		case 3:
			return 4;
		case 2:
			return 5;
		case 4:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_99(var uParam0, char* sParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_94.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_94.f_2, sParam1);
	return 1;
}

bool func_100(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_101(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED(bParam0);
	return 1;
}

bool func_102(var uParam0, int iParam1, bool bParam2)
{
	struct<4> /*32*/ sVar0;
	struct<13> /*104*/ sVar22;
	var uVar38;
	int iVar44;
	char cVar45[64];
	char cVar53[64];

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, uParam0, &sVar0, 22, 1))
	{
		return false;
	}
	sVar0.f_21 = 1;
	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(1, uParam0, &sVar0, 22))
	{
		return false;
	}
	sVar22.f_7 = joaat("ADD_REASON_DEFAULT");
	sVar22.f_8 = 1056964608;
	sVar22.f_9 = 1065353216;
	sVar22.f_4 = sVar0.f_4;
	sVar22 = { sVar0 /*4*/ };
	sVar22.f_6 = *iParam1;
	sVar22.f_12 = 1;
	if (WEAPON::GIVE_WEAPON_TO_PED_WITH_OPTIONS(Global_35, &sVar22, &uVar38))
	{
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		if (func_112(sVar22.f_6, &iVar44))
		{
			strcpy_s(&cVar45, 64, func_113(sVar22.f_4));
			strcpy_s(&cVar53, 64, HUD::GET_STRING_FROM_HASH_KEY(iVar44));
			func_114(MISC::VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &cVar45, &cVar53), -2, 0, 0, 0, 1);
		}
	}
	return true;
}

bool func_103(bool bParam0, int iParam1, int iParam2)
{
	if (!func_45(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		if (iParam1 == 8 && iParam2 == 7)
		{
			return true;
		}
		if (iParam2 == 8 && iParam1 == 7)
		{
			return true;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
		{
			return true;
		}
		if (iParam2 == 10 && iParam1 == 9)
		{
			return true;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (iParam1 == 3 && iParam2 == 2)
		{
			return true;
		}
		if (iParam2 == 3 && iParam1 == 2)
		{
			return true;
		}
	}
	return false;
}

int func_104(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_STORED(bParam0);
	return 1;
}

int func_105(int iParam0)
{
	iParam0 = func_115(iParam0);
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

bool func_106(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_95(0);
	*uParam1 = { func_66(bParam0, func_65(0), iParam3, 0) /*4*/ };
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

bool func_107(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_106(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

bool func_108(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	struct<5> /*40*/ sVar0;

	if (!func_31(bParam0))
	{
		return false;
	}
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_95(1), bParam0, false) > 1)
	{
		if (func_116(iParam1, &(uParam2->f_22), &(uParam2->f_21)))
		{
			uParam2->f_23 = 1;
		}
	}
	uParam2->f_4 = 1600976403;
	switch (iParam4)
	{
		case 0:
			uParam2->f_5 = -1174213347;
			break;
		case 3:
			uParam2->f_5 = -2060496899;
			break;
		case 2:
			uParam2->f_5 = -337881065;
			break;
		case 1:
			uParam2->f_5 = -1694113483;
			break;
	}
	strcpy_s(&(uParam2->f_10), 64, func_113(bParam0));
	if (!func_117(bParam0, &sVar0, iParam1))
	{
	}
	uParam2->f_24 = sVar0.f_0;
	uParam2->f_25 = sVar0.f_1;
	uParam2->f_26 = sVar0.f_4;
	uParam2->f_27 = sVar0.f_2;
	uParam2->f_28 = sVar0.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;
	if (!func_118(bParam0, iParam1, uParam2))
	{
		return false;
	}
	if (!func_119(iParam3, uParam2))
	{
		return false;
	}
	uParam2->f_45 = bParam0;
	uParam2->f_46 = iParam1;
	return true;
}

bool func_109(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_120(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_120(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(53), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(54), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(56), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(55), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(57), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_120(58), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_120(59), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(9), uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(10), uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_120(11), uParam1->f_23);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(*uParam0, func_120(15), &(uParam1->f_10));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(21), uParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_120(22), uParam1->f_19);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_120(23), uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_damage", uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_range", uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_accuracy", uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_firerate", uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_reload", uParam1->f_28);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_label", uParam1->f_35);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_hash", uParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam1->f_39);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam1->f_38);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam1->f_40);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_label", uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam1->f_42);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam1->f_44);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item", uParam1->f_45);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot", uParam1->f_46);
	return true;
}

bool func_110(int* iParam0, var uParam1)
{
	char cVar0[64];
	int iVar8;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2))
	{
		return false;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	strcpy_s(&cVar0, 64, "Entry_");
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1), 64);
	func_121(&iVar8, iParam0->f_2.f_1, cVar0, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", iVar8);
	return true;
}

struct<4> /*32*/ func_111()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			*iParam1 = 825261881;
			return true;
		case 3:
			*iParam1 = -2078679563;
			return true;
		case 2:
			*iParam1 = 258571561;
			return true;
		case 7:
		case 9:
			*iParam1 = 1282885388;
			return true;
		case 8:
		case 10:
			*iParam1 = -1522249011;
			return true;
		default:
			break;
	}
	return false;
}

char* func_113(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_122(bParam0));
}

int func_114(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar17;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = sParam0;
	iVar17 = UIFEED::_UI_FEED_POST_FEED_TICKER(&sVar0, &sVar13, bParam5);
	return iVar17;
}

int func_115(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_116(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case joaat("SLOTID_WEAPON_0"):
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("CLUB");
			return true;
		case joaat("SLOTID_WEAPON_1"):
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("DIAMOND");
			return true;
		default:
			break;
	}
	return false;
}

bool func_117(bool bParam0, var uParam1, int iParam2)
{
	struct<2> /*16*/ sVar0;
	Vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	struct<2> /*16*/ sVar35;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<4> /*32*/ sVar41;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;

	if (!func_45(bParam0, 0))
	{
		return false;
	}
	if (!func_123(bParam0))
	{
		return false;
	}
	sVar0.f_1 = 20;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam0, &sVar0))
	{
		return false;
	}
	if (sVar0.f_0 <= 0)
	{
		return false;
	}
	fVar34 = 100.0f;
	sVar35 = { func_124(joaat("SKILL"), WEAPON::_GET_WEAPON_STAT_ID(bParam0)) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::STAT_ID_GET_FLOAT(&sVar35, &fVar34);
	}
	iVar37 = 0;
	while (iVar37 < sVar0.f_0)
	{
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar0.f_1[iVar37], &vVar22))
		{
			if (vVar22.y == -266488916)
			{
				iVar29 += vVar22.z;
			}
			else if (vVar22.y == 1648497600)
			{
				iVar30 += vVar22.z;
			}
			else if (vVar22.y == -1856731002)
			{
				iVar31 += vVar22.z;
			}
			else if (vVar22.y == 2038990430)
			{
				iVar32 += vVar22.z;
			}
			else if (vVar22.y == 983649838)
			{
				iVar33 += vVar22.z;
			}
			if (vVar22.y == 1465168878)
			{
				iVar30 += BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100.0f)));
			}
			else if (vVar22.y == -1103443887)
			{
				iVar32 += BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100.0f)));
			}
			else if (vVar22.y == -800430237)
			{
				iVar33 += BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100.0f)));
			}
		}
		iVar37++;
	}
	iVar38 = 0;
	iVar39 = 0;
	iVar40 = 0;
	sVar41 = { func_66(bParam0, func_65(0), iParam2, 0) /*4*/ };
	iVar45 = func_125(bParam0);
	iVar46 = 0;
	while (iVar46 < iVar45)
	{
		iVar47 = func_126(bParam0, iVar46);
		if (iVar47 != 0)
		{
			bVar48 = func_127(sVar41, iVar47, 0);
			if (func_45(bVar48, 0))
			{
				if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar48, &sVar0))
				{
					iVar37 = 0;
					iVar37 = 0;
					while (iVar37 < sVar0.f_0)
					{
						if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar0.f_1[iVar37], &vVar22))
						{
						}
						else if (vVar22.y == 1999781523)
						{
							iVar38 += vVar22.z;
						}
						else if (vVar22.y == 1173003838)
						{
							iVar40 += vVar22.z;
						}
						else if (vVar22.y == -1657343230)
						{
							iVar39 += vVar22.z;
						}
						iVar37++;
					}
				}
			}
		}
		iVar46++;
	}
	iVar49 = (iVar29 + iVar38);
	iVar50 = (iVar30 + iVar39);
	iVar51 = (iVar33 + iVar40);
	*uParam1 = iVar49;
	uParam1->f_1 = iVar50;
	uParam1->f_4 = iVar51;
	uParam1->f_2 = iVar31;
	uParam1->f_3 = iVar32;
	return true;
}

bool func_118(bool bParam0, int iParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_31(bParam0))
	{
		return false;
	}
	sVar0 = { func_66(bParam0, func_65(0), iParam1, 0) /*4*/ };
	if (!func_67(&sVar0))
	{
		return false;
	}
	if (func_80(bParam0, iParam1))
	{
		return false;
	}
	iVar5 = func_128(bParam0);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (!func_129(bParam0, iVar6, &iVar4))
		{
		}
		else if (iVar6 == 0)
		{
			uParam2->f_30 = func_130(iVar4);
			uParam2->f_29 = (uParam2->f_30 && func_131(&sVar0, iVar4) == 0);
			if (!func_132(iVar4, &(uParam2->f_31)))
			{
			}
			if (!func_133(iVar4, &(uParam2->f_32)))
			{
			}
		}
		else if (iVar6 == 1)
		{
			uParam2->f_34 = func_130(iVar4);
			uParam2->f_33 = (uParam2->f_34 && func_131(&sVar0, iVar4) == 0);
			if (!func_132(iVar4, &(uParam2->f_35)))
			{
			}
			if (!func_133(iVar4, &(uParam2->f_36)))
			{
			}
		}
		iVar6++;
	}
	uParam2->f_38 = 1;
	uParam2->f_37 = func_134(&sVar0) == 0;
	uParam2->f_39 = 1039601264;
	uParam2->f_40 = -1073027202;
	uParam2->f_42 = 1;
	uParam2->f_41 = func_135(&sVar0) == 0;
	uParam2->f_43 = 1901059961;
	uParam2->f_44 = -1103499950;
	return true;
}

bool func_119(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (!func_136(iParam0, &uVar0, &uVar1))
	{
		uParam1->f_20 = 0;
		return false;
	}
	uParam1->f_20 = 1;
	uParam1->f_19 = uVar0;
	uParam1->f_18 = uVar1;
	return true;
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

int func_121(int iParam0, int iParam1, char[32] cParam2, var uParam10)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam1))
	{
		return 0;
	}
	func_137(iParam0, iParam1, cParam2, *uParam10);
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*iParam0))
	{
		return 0;
	}
	iParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(9), uParam10->f_21);
	iParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(10), uParam10->f_22);
	iParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_120(11), uParam10->f_23);
	iParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_damage", uParam10->f_24);
	iParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_range", uParam10->f_25);
	iParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_accuracy", uParam10->f_26);
	iParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_firerate", uParam10->f_27);
	iParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "stat_reload", uParam10->f_28);
	iParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_toggle_label", uParam10->f_31);
	iParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_toggle_enabled", uParam10->f_29);
	iParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_toggle_visible", uParam10->f_30);
	iParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_toggle_hash", uParam10->f_32);
	iParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_option_label", uParam10->f_35);
	iParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_33);
	iParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_34);
	iParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_option_hash", uParam10->f_36);
	iParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dleft_label", uParam10->f_39);
	iParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dleft_enabled", uParam10->f_37);
	iParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dleft_visible", uParam10->f_38);
	iParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dleft_hash", uParam10->f_40);
	iParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dright_label", uParam10->f_43);
	iParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dright_enabled", uParam10->f_41);
	iParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "dynamic_list_item_prompt_dright_visible", uParam10->f_42);
	iParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "dynamic_list_item_prompt_dright_hash", uParam10->f_44);
	iParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "inventory_item", uParam10->f_45);
	iParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, "inventory_item_slot", uParam10->f_46);
	return 1;
}

bool func_122(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

bool func_123(bool bParam0)
{
	return func_138(bParam0) == joaat("WEAPON");
}

struct<2> /*16*/ func_124(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

int func_125(bool bParam0)
{
	int iVar0;

	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_139(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_126(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (bParam0 != 0)
	{
		iVar0 = func_139(bParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_125(bParam0))
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_127(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_140(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

int func_128(bool bParam0)
{
	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		return 2;
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129(bool bParam0, int iParam1, int iParam2)
{
	if (!func_45(bParam0, 0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 8;
				return true;
			case 1:
				*iParam2 = 7;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(bParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 10;
				return true;
			case 1:
				*iParam2 = 9;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 2;
				return true;
			case 1:
				*iParam2 = 3;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0))
	{
		*iParam2 = 4;
		return true;
	}
	return false;
}

bool func_130(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_141();
	}
	return true;
}

int func_131(var uParam0, int iParam1)
{
	struct<10> /*80*/ sVar0;
	var uVar22;

	if (!func_67(uParam0))
	{
		return 1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(0), uParam0, &sVar0, 22, 1))
	{
		return 2;
	}
	if (!WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, iParam1, &uVar22))
	{
	}
	if (func_82(uParam0) == 0)
	{
		if (func_67(&uVar22))
		{
			if (func_142(uParam0, &uVar22))
			{
				return 3;
			}
		}
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar0.f_4) && iParam1 == 3)
	{
		if (!func_141())
		{
			return 4;
		}
		if (func_82(uParam0) == 0)
		{
			if (!func_100(func_30(Global_35, iParam1, 1, 0)))
			{
				return 4;
			}
		}
		else if (!func_100(func_30(Global_35, 2, 1, 0)))
		{
			return 4;
		}
	}
	return 0;
}

bool func_132(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 1000849983;
			return true;
		case 3:
			*uParam1 = -327947319;
			return true;
		case 2:
			*uParam1 = 1588146127;
			return true;
		case 7:
		case 9:
			*uParam1 = 297513196;
			return true;
		case 8:
		case 10:
			*uParam1 = 108789798;
			return true;
		default:
			break;
	}
	return false;
}

bool func_133(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 941907253;
			return true;
		case 3:
			*uParam1 = -1756222973;
			return true;
		case 2:
			*uParam1 = -1313710397;
			return true;
		case 9:
			*uParam1 = 1554581363;
			return true;
		case 10:
			*uParam1 = -946029012;
			return true;
		case 7:
			*uParam1 = -466398939;
			return true;
		case 8:
			*uParam1 = -260514364;
			return true;
		default:
			break;
	}
	return false;
}

int func_134(var uParam0)
{
	struct<10> /*80*/ sVar0;

	if (!func_67(uParam0))
	{
		return 1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(0), uParam0, &sVar0, 22, 1))
	{
		return 2;
	}
	if (func_82(uParam0) == 2)
	{
		return 3;
	}
	if (func_82(uParam0) == 0)
	{
		switch (func_143(uParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

int func_135(var uParam0)
{
	struct<10> /*80*/ sVar0;

	if (!func_67(uParam0))
	{
		return 1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(0), uParam0, &sVar0, 22, 1))
	{
		return 1;
	}
	if (func_82(uParam0) == 1)
	{
		return 3;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(sVar0.f_4))
	{
		return 5;
	}
	if (func_82(uParam0) == 0)
	{
		switch (func_143(uParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

bool func_136(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_HOLSTER");
			return true;
		case 1:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_ON_HORSE");
			return true;
		case 2:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = -229529296;
			return true;
		default:
			break;
	}
	return false;
}

void func_137(int iParam0, int iParam1, char[32] cParam2, struct<21> /*168*/ sParam10)
{
	func_144(iParam0, iParam1, cParam2, sParam10);
	iParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam0, func_120(15), &(sParam10.f_10));
	iParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(21), sParam10.f_18);
	iParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(22), sParam10.f_19);
	iParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_120(23), sParam10.f_20);
}

int func_138(bool bParam0)
{
	Vector3 vVar0;

	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_139(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_45(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_140(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_95(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_145(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_141()
{
	if (!func_146(24))
	{
		return false;
	}
	if (func_147() < 2)
	{
		return false;
	}
	return true;
}

bool func_142(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_143(var uParam0)
{
	struct<15> /*120*/ sVar0;
	int iVar22;
	var uVar23;
	struct<10> /*80*/ sVar27;

	if (!func_67(uParam0))
	{
		return 1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(0), uParam0, &sVar0, 22, 1))
	{
		return 2;
	}
	iVar22 = sVar0.f_14;
	if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar0.f_4))
	{
		WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, 2, &uVar23);
		sVar27.f_9 = joaat("SLOTID_NONE");
		INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(0), &uVar23, &sVar27, 22, 1);
		if (iVar22 == 3)
		{
			if (!func_100(sVar27.f_4) || func_80(sVar27.f_4, sVar27.f_9))
			{
				return 3;
			}
		}
		if (iVar22 == 2)
		{
			return 3;
		}
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(sVar0.f_4))
	{
		if (iVar22 == 4)
		{
			return 3;
		}
	}
	return 0;
}

void func_144(int iParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> /*80*/ sParam10)
{
	*iParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	iParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_120(0), sParam10.f_0);
	iParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_120(1), sParam10.f_1);
	iParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(2), sParam10.f_2);
	iParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(53), sParam10.f_3);
	iParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(54), sParam10.f_4);
	iParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(56), sParam10.f_5);
	iParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(55), sParam10.f_6);
	if (sParam10.f_7 == 0)
	{
		sParam10.f_7 = joaat("IB_SELECT");
	}
	iParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam0, func_120(57), sParam10.f_7);
	iParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_120(58), sParam10.f_8);
	iParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, func_120(59), sParam10.f_9);
}

bool func_145(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_95(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_146(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return func_149(iParam0);
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_78("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_79(&sVar4, iVar2, iVar0, iVar1))
			{
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		func_85(iVar0);
	}
	return iVar3;
}

bool func_148(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

