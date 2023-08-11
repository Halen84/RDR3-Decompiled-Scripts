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
	var uLocal_14 = 0;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	char* sLocal_28 = NULL;
	int iLocal_29 = 0;
	int iScriptParam_0 = 0;
#pragma endregion

void __SCRIPT()
{
	var uVar0;
	struct<4> /*32*/ sVar3;
	var uVar7;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_15 = "mech_skin@BUCK_BUTCHER";
	sLocal_16 = "PBL_BASE";
	sLocal_17 = "PBL_DUMP";
	sLocal_18 = "PBL_DROP_IN";
	sLocal_28 = "beat_gang_camp_reminder";
	iLocal_29 = 23;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar7, HUD::_0x0501D52D24EA8934(1), 1);
	func_2();
	func_3(&uVar0);
	func_4();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_5(&uVar0);
	}
	func_6(1);
	func_8(&uVar0, 2185);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_35) || PED::IS_PED_FALLING_OVER(Global_35)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || func_9())
		{
			func_10(0);
		}
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if (Global_1935689.f_4)
		{
			func_11();
			func_12();
			func_13(Global_1935689.f_9439);
			if (Global_1935689.f_15 != 0)
			{
				func_14(Global_1935689.f_15);
			}
			func_4();
			Global_1935689.f_4 = 0;
			Global_1935689.f_5 = 0;
			Global_1935689.f_15 = 0;
		}
		if (func_15())
		{
			func_16(Global_1935689.f_9445, &(sVar3.f_3), &uVar0);
			func_4();
			func_17(0);
			func_18(0);
			Global_1935689.f_7 = 0;
		}
		while (UIEVENTS::EVENTS_UI_IS_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iScriptParam_0, &sVar3))
			{
				Global_1935689.f_7 = 0;
				switch (sVar3.f_0)
				{
					case joaat("ITEM_FOCUSED"):
						Global_1935689.f_9445 = sVar3.f_1;
						switch (sVar3.f_2)
						{
							case joaat("COLLECTION_ITEM"):
								func_19(sVar3.f_1, &(sVar3.f_3));
								break;
							case joaat("USABLE_ITEM"):
							case 1086195311:
								ATTRIBUTE::STOP_ITEM_PREVIEW();
								if (!func_20())
								{
									func_16(sVar3.f_1, &(sVar3.f_3), &uVar0);
								}
								break;
							case joaat("FOLDER_ITEM"):
								ATTRIBUTE::STOP_ITEM_PREVIEW();
								func_21(sVar3.f_1, &(sVar3.f_3));
								break;
						}
						func_6(2);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case joaat("TAB_PAGE_DECREMENT"):
					case joaat("TAB_PAGE_INCREMENT"):
						func_22();
						func_4();
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case joaat("ITEM_SELECTED"):
						switch (sVar3.f_2)
						{
							case joaat("USABLE_ITEM"):
							case joaat("BREAKABLE_ITEM"):
							case 1086195311:
								if (func_23() || func_24())
								{
									if (func_25(Global_1935689.f_9440, 0, 0, 0, 1, 0, 0))
									{
										func_10(0);
									}
									func_6(4);
								}
								else if (func_26())
								{
									func_6(4);
								}
								else if (!func_27(0))
								{
									func_28();
								}
								else
								{
									func_6(4);
								}
								break;
							case joaat("DROP_ITEM"):
								func_29(Global_1935689.f_9440, 1);
								break;
							case joaat("DISCARD_ALL"):
								if (func_27(0))
								{
									func_6(32);
								}
								else
								{
									func_30(Global_1935689.f_9440);
								}
								break;
							case 1329361007:
								func_6(64);
								break;
						}
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case joaat("NEW_ACTIVITY"):
						func_6(16);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case joaat("NEW_PAGE"):
						func_6(8);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					default:
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_5(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	func_31(iParam1);
	bVar0 = func_32(1);
	if (func_34(uParam0, iParam1, 1, 8373) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(2);
	if (func_34(uParam0, iParam1, 2, 8500) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = func_32((1 << 13));
	if (func_34(uParam0, iParam1, (1 << 13), 8513) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = (func_32(4) || func_32(8));
	if (!func_37())
	{
		func_38(4);
		func_38(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_39(joaat("CI_CATEGORY_WARDROBE_MASK")) || func_40(4))
		{
			func_38(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_39(joaat("CI_CATEGORY_WARDROBE_BIG_MASK")) || func_40(8))
		{
			func_38(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_42(uParam0, iParam1, 0, func_41()))
			{
				if (!bVar0)
				{
					Global_1935496.f_70.f_1 = 1;
				}
				if (bVar1)
				{
					func_43(4);
				}
				if (bVar2)
				{
					func_43(8);
				}
			}
			else
			{
				func_38(4);
				func_38(8);
				if (bVar0)
				{
					Global_1935496.f_70.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_32(16);
	if (func_34(uParam0, iParam1, 16, 9853) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(256);
	if (func_34(uParam0, iParam1, 256, 9866) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = func_32((1 << 9));
	if (func_34(uParam0, iParam1, (1 << 9), 9878) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = func_32((1 << 10));
	if (func_34(uParam0, iParam1, (1 << 10), 9890) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	if (((((func_48() || func_49()) || func_50()) || func_51()) || func_52()) || bParam2)
	{
		bVar0 = func_32((1 << 14));
		if (func_34(uParam0, iParam1, (1 << 14), 9984) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(64);
		if (func_34(uParam0, iParam1, 64, 9997) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(32);
		if (func_34(uParam0, iParam1, 32, 10010) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(128);
		if (func_34(uParam0, iParam1, 128, 10023) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = func_32((1 << 11));
		if (func_34(uParam0, iParam1, (1 << 11), 10036) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = func_32((1 << 12));
		if (func_34(uParam0, iParam1, (1 << 12), 10049) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
	}
	func_59();
}

void func_2()
{
	if (func_52() || (((func_48() || func_49()) || func_50()) || func_51()))
	{
		Global_1935496.f_70 = 1;
		func_60(0);
		if (Global_1935496.f_70.f_1)
		{
			if (!func_27(0))
			{
				if (!Global_1935689.f_4)
				{
					Global_1935689.f_4 = 1;
					Global_1935689.f_5 = 1;
				}
			}
		}
		Global_1935496.f_70.f_1 = 0;
	}
	else if (Global_1935496.f_70)
	{
		func_61();
		Global_1935496.f_70 = 0;
		Global_1935496.f_70.f_1 = 0;
	}
}

int func_3(var uParam0)
{
	if (func_62() == -1)
	{
		func_63();
	}
	Global_1911866[0 /*9*/] = 0;
	func_64(uParam0);
	func_65();
	return 1;
}

void func_4()
{
	if (func_20())
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, false, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, func_66(Global_1935689.f_9439));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_67(Global_1935689.f_9439));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9474, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9470, false);
		if (func_27(0) || func_68())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, "");
		}
		func_69(Global_1935689.f_9439);
	}
}

void func_5(var uParam0)
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935689.f_7 = 0;
	Global_1935689.f_19 = 0;
	Global_1935689.f_14 = -1;
	Global_1935689.f_15 = 0;
	Global_1935689.f_1224 = 0;
	func_17(0);
	func_70(joaat("SATCHEL_CATEGORY_INVALID"));
	func_71(0);
	func_72(0);
	func_73(uParam0);
	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		func_74(0);
	}
	func_75(1);
	func_76(&(Global_1935689.f_9436), 1);
	func_76(&(Global_1935689.f_9436), 2);
	func_76(&(Global_1935689.f_9436), 4);
	func_61();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0)
{
	Global_1935689.f_9415 |= iParam0;
}

int func_7()
{
	int iVar0;
	float fVar3;

	func_77(Global_1935689.f_9440, &iVar0);
	switch (iVar0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9456, 0);
			func_78(-1520731333);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9456, 0);
			func_78(1698037258);
			break;
		case 2:
			fVar3 = (BUILTIN::TO_FLOAT(func_79(Global_1935689.f_9440, 0)) / 100.0f);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_80(MISC::_GET_STRING_FROM_FLOAT(fVar3, 2), joaat("COLOR_PURE_WHITE"))));
			func_78(-879749798);
			break;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uParam0->f_1 = 1;
}

bool func_9()
{
	return func_81(Global_1935630, (1 << 12));
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_11()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1935689.f_9444 = 0;
	if (Global_1935689.f_9438 != -1)
	{
		iVar0 = Global_1935689.f_9438;
		func_83(&(Global_1935689.f_9431[func_82(Global_1935689.f_9439) /*2*/]), iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9450, Global_1935689.f_9444);
	}
	iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1935689.f_9444 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "FolderEmpty", bVar2);
}

bool func_12()
{
	if ((func_84() || func_86(Global_35, func_85(7), 1)) || (!func_87(7) | func_88(7) && func_27(0)))
	{
		return (func_89(0, joaat("SLOTID_NONE")) && func_89(1, joaat("SLOTID_HORSE_SATCHEL")));
	}
	return func_89(0, joaat("SLOTID_NONE"));
}

void func_13(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<10> /*80*/ sVar2;

	sVar0 = { Global_1935689.f_9431[Global_1935689.f_9437 /*2*/] /*2*/ };
	sVar2.f_9 = joaat("SLOTID_NONE");
	if (!func_15() && (Global_1935689.f_9446 || !Global_1935689.f_5))
	{
		func_90(0);
	}
	Global_1935689.f_9443 = 0;
	Global_1935689.f_19.f_203 = 0;
	if (Global_1935689.f_9446)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9449, Global_1935689.f_9443);
		Global_1935689.f_9446 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9458, func_66(iParam0));
	if (!func_27(0) && !func_68())
	{
		func_91(&sVar0, &sVar2, iParam0);
	}
	func_92();
	if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_HORSE"))
	{
		func_93();
	}
	else
	{
		func_94(&sVar0, &sVar2, iParam0);
		if ((Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_SELL") && ((Global_1914319.f_16855 == 10 || Global_1914319.f_16855 == 19) || Global_1914319.f_16855 == 18)) || (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_SEND") && Global_1914319.f_16855 == 2))
		{
			if (func_84())
			{
				sVar0 = { Global_1935689.f_9431[1 /*2*/] /*2*/ };
				func_94(&sVar0, &sVar2, iParam0);
			}
		}
		func_95();
		func_93();
		func_96();
	}
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9449, Global_1935689.f_9443);
	func_97(0);
}

void func_14(int iParam0)
{
	var uVar0;

	uVar0 = iParam0;
	Global_1935689.f_9444 = 0;
	func_83(&(Global_1935689.f_9431[func_82(Global_1935689.f_9439) /*2*/]), iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9450, Global_1935689.f_9444);
	func_97(Global_1935689.f_14);
	Global_1935689.f_9438 = uVar0;
}

bool func_15()
{
	return Global_1935689.f_11;
}

void func_16(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	func_98();
	if (func_15())
	{
		func_17(0);
		if (Global_1935689.f_7)
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9450, Global_1935689.f_9445);
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9449, Global_1935689.f_9445);
		}
		bVar0 = func_99(iVar1);
	}
	else
	{
		bVar0 = func_99(*uParam1);
	}
	func_100(bVar0, uParam1, uParam2);
	func_101(0, bVar0);
	func_98();
	func_97(iParam0);
}

void func_17(int iParam0)
{
	Global_1935689.f_11 = iParam0;
}

void func_18(int iParam0)
{
	Global_1935689.f_10 = iParam0;
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0 != Global_1935689.f_9437)
	{
		func_102(iParam0, iParam1);
	}
}

bool func_20()
{
	return Global_1935689.f_19.f_203 <= 0;
}

void func_21(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	Global_1935689.f_14 = uParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_103(iVar0, uParam1);
	iVar1 = iVar0;
	func_14(iVar1);
}

void func_22()
{
	int iVar0;

	iVar0 = Global_1935689.f_9417;
	func_104(iVar0);
}

bool func_23()
{
	if (func_105(Global_35, 0))
	{
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")))
		{
			return true;
		}
	}
	return false;
}

bool func_24()
{
	if (Global_1935689.f_17 == 3)
	{
		return true;
	}
	return false;
}

bool func_25(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;

	if (func_24())
	{
		Global_1935689.f_9441 = bParam0;
		func_106(bParam0, 1, joaat("REMOVE_REASON_DEFAULT"), 0, 0);
		return false;
	}
	if (func_23())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_107(bParam0, 0);
		func_106(func_108(), 1, joaat("REMOVE_REASON_DEFAULT"), 0, 0);
		return false;
	}
	if (!func_109(bParam0, bParam4))
	{
		return false;
	}
	if (func_110(bParam0))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = 1;
	if (func_111(bParam0, joaat("CI_TAG_ITEM_LETTER")))
	{
		func_112(bParam0, sVar10, sVar0, uVar29, bVar32, iVar33);
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_BOOK")))
	{
		func_113(bParam0, sVar10, sVar0, bVar32, iVar33);
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_PHOTO")))
	{
		func_114(bParam0, sVar10);
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_MAP_LOOT")))
	{
		if (!func_115(bParam0))
		{
			return false;
		}
	}
	if (func_116(bParam0, bParam5, bParam6))
	{
		Global_1911772 = bParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_NEWSPAPER")))
	{
		sVar0.f_2 = bParam0;
		sVar10 = { sVar0 /*10*/ };
		strcpy_s(&(sVar10.f_10), 32, "doc_newspaper");
		sVar10.f_14 = (1 << 10);
		sVar10.f_15 = 1;
		func_117(sVar10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_111(bParam0, joaat("CI_TAG_ITEM_MAP")) || func_111(bParam0, joaat("CI_TAG_ITEM_MAP_TREASURE"))) || func_111(bParam0, joaat("CI_TAG_ITEM_MAP_LOOT")))
	{
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_BAIT")))
	{
		if (((func_118() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return false;
		}
		switch (bParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				strcpy_s(&(sVar10.f_10), 32, "item_bait_herbivore");
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				strcpy_s(&(sVar10.f_10), 32, "item_bait_predator");
				break;
		}
		sVar0.f_1 = bParam0;
		sVar0.f_3 = iParam1;
		sVar10 = { sVar0 /*10*/ };
		sVar10.f_14 = (1 << 9);
		sVar10.f_15 = 1;
		func_117(sVar10, 0);
		bVar32 = false;
	}
	else if (func_119(bParam0) == joaat("EMOTE"))
	{
		sVar0.f_3 = 0;
		sVar0.f_1 = bParam0;
		sVar0.f_2 = 0;
		sVar0.f_0 = func_120(Global_1058888.f_49051.f_4.f_31);
		sVar10 = { sVar0 /*10*/ };
		strcpy_s(&(sVar10.f_10), 32, "net_player_wheel_item_use");
		sVar10.f_14 = (1 << 9);
		sVar10.f_15 = 1;
		func_117(sVar10, 0);
		iVar33 = 1;
	}
	else if (func_119(bParam0) == joaat("CLOTHING"))
	{
		if (func_121(bParam0) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_62() != -1)
			{
				return iVar33;
			}
			if (!func_122(bParam0))
			{
				func_123("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_124(7, bParam0);
			bVar36 = func_124(1, bParam0);
			if (bVar36 && !bVar35)
			{
				func_123("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_125(7))
			{
				func_123("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_86(Global_35, func_85(7), 0))
				{
					func_123("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_123("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_126(bParam0);
			if (iVar30 == -1)
			{
				func_127(20, bParam0, 8, 0, 0);
			}
			else
			{
				func_127(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_121(bParam0))
			{
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
				case joaat("CI_CATEGORY_WARDROBE_BANDANA"):
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					func_128(bParam0, 0);
					return iVar33;
				case joaat("CI_CATEGORY_WARDROBE_HAT"):
					func_129(bParam0);
					return true;
				case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
					if (bParam0 == Global_1946054.f_1497.f_1[23 /*3*/])
					{
						func_130(Global_35, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_131(bParam0, 0);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_131(bParam0, 1);
					}
					break;
			}
			func_130(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (bParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				func_10(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_62() != -1)
				{
				}
				else if (!func_122(bParam0))
				{
					func_123("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_124(7, bParam0);
					bVar36 = func_124(1, bParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
						{
							MAP::REMOVE_BLIP(&Global_36559);
						}
						Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_123(MISC::VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!func_125(7))
					{
						func_123("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_86(Global_35, func_85(7), 0))
						{
							func_123("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36559))
							{
								MAP::REMOVE_BLIP(&Global_36559);
							}
							Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
							func_123(MISC::VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar26) > 0)
						{
						}
						else
						{
							sVar0.f_1 = bParam0;
							sVar0.f_2 = 51499045;
							sVar10 = { sVar0 /*10*/ };
							strcpy_s(&(sVar10.f_10), 32, "player_wardrobe");
							sVar10.f_14 = (1 << 10);
							sVar10.f_15 = 1;
							func_117(sVar10, 0);
						}
						Jump @2534; // curOff = 1629
						func_132();
						Jump @2534; // curOff = 1636
						if (!func_133(Global_1392040.f_1, 1) || func_133(Global_1392040.f_1, (1 << 9)))
						{
							if (func_62() == -1)
							{
								if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									strcpy_s(&(sVar10.f_10), 32, "player_camp");
									sVar10.f_14 = 6096;
									if (func_134(120))
									{
										iVar31 |= 8;
										sVar0.f_6 = { -1407.407f, 1508.33f, 239.0f /*3*/ };
										sVar0.f_6.f_3 = 260.0f;
									}
									else if (func_135(15))
									{
										iVar31 |= 16;
										sVar0.f_6 = { 1775.903f, 1255.647f, 189.6069f /*3*/ };
										sVar0.f_6.f_3 = 90.0f;
									}
									else if (!func_122(bParam0) || ((!func_137(Global_35, func_85(7), func_136(7), 1) || func_138() != 0) && !func_137(Global_35, Global_1900383.f_393, 5.0f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if (func_133(iVar31, 128) && Global_1357522.f_10[1])
									{
										Global_1357522.f_10[1] = 0;
									}
									else if (!func_133(iVar31, 128) && Global_1357522.f_10[0])
									{
										Global_1357522.f_10[0] = 0;
									}
									sVar0.f_0 = iVar31;
									sVar10 = { sVar0 /*10*/ };
									sVar10.f_15 = 1;
									func_117(sVar10, 2);
								}
							}
							else if (func_122(joaat("KIT_CAMP")))
							{
								if (func_139(1))
								{
									func_140(2);
								}
								else if (func_141(1))
								{
									func_123("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
									{
										func_123("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_123("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_142(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							{
								func_123("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_142(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
							else
							{
								func_123("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040.f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2534; // curOff = 2200
						if (func_143(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
						}
						return true;
						Jump @2534; // curOff = 2241
						if (func_143(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return true;
						Jump @2534; // curOff = 2282
						iVar27 = func_145(func_144());
						iVar28 = func_146();
						if (func_147(iVar27))
						{
							if (iVar27 == iVar28 && !func_148())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_123("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2534; // curOff = 2352
						func_149(bParam0, 1, 0, joaat("REMOVE_REASON_USED"), 0);
						Jump @2534; // curOff = 2370
						func_150(497, 1);
						Jump @2534; // curOff = 2381
						func_151(1);
						Jump @2534; // curOff = 2389
						func_149(bParam0, 1, 0, joaat("REMOVE_REASON_USED"), 0);
						func_152(joaat("PROVISION_BEAUS_GIFT_2"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						Jump @2534; // curOff = 2430
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1.0f);
						bVar32 = false;
						return true;
						Jump @2534; // curOff = 2465
						sVar0.f_2 = joaat("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
						sVar10 = { sVar0 /*10*/ };
						strcpy_s(&(sVar10.f_10), 32, "native_american_journal");
						sVar10.f_14 = (1 << 9);
						sVar10.f_15 = 1;
						func_117(sVar10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2534; // curOff = 2525
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
				default:
					break;
		}
	}
}

bool func_26()
{
	if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
	{
		return true;
	}
	return false;
}

bool func_27(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

void func_28()
{
	bool bVar0;
	struct<5> /*40*/ sVar1;
	struct<4> /*32*/ sVar6;
	bool bVar10;

	if (func_119(Global_1935689.f_9440) == joaat("CONSUMABLE"))
	{
		Global_1935496.f_31 = Global_1935689.f_9440;
	}
	else
	{
		Global_1935496.f_32 = Global_1935689.f_9440;
	}
	bVar0 = true;
	if (func_121(Global_1935689.f_9440) == joaat("CI_CATEGORY_WATCH"))
	{
		sVar1 = { func_153(Global_1935689.f_9440, 0, 0) /*5*/ };
		sVar6 = { func_154(Global_1935689.f_9440, sVar1, sVar1.f_4, 0) /*4*/ };
		func_155(sVar6, 1);
		if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_KIT"))
		{
			func_157(func_156(0), 0, joaat("CI_TAG_FOLDER_KIT_WATCHES"));
		}
		else
		{
			func_157(func_156(0), 1, 0);
		}
		bVar0 = true;
	}
	else if (func_121(Global_1935689.f_9440) == joaat("CI_CATEGORY_WARDROBE_MASK") || func_121(Global_1935689.f_9440) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
	{
		func_128(Global_1935689.f_9440, 0);
		bVar0 = false;
	}
	else if (func_111(Global_1935689.f_9440, joaat("CI_TAG_ITEM_CAN_BREAKDOWN")))
	{
		if (func_158(Global_1935689.f_9440, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_159(Global_1935689.f_9440, 1, 0))
	{
		bVar10 = func_160(Global_1935689.f_9440);
		if (func_161(bVar10, 0))
		{
			if (func_162(bVar10))
			{
				bVar0 = false;
			}
		}
	}
	else if (func_25(Global_1935689.f_9440, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (func_24())
	{
		bVar0 = false;
	}
	Global_1935689.f_9441 = Global_1935689.f_9440;
	func_10(bVar0);
	Global_1911913 = MISC::GET_GAME_TIMER();
	if (!func_163())
	{
		func_90(0);
	}
}

void func_29(bool bParam0, int iParam1)
{
	if (!func_161(bParam0, 0))
	{
		return;
	}
	func_164(bParam0, iParam1, 0, joaat("REMOVE_REASON_DROPPED"), 1);
	func_157(func_156(0), 0, 0);
}

void func_30(bool bParam0)
{
	func_29(bParam0, func_166(func_165(0), bParam0, 0));
}

void func_31(int iParam0)
{
	if (func_167(32))
	{
		return;
	}
	func_168(32);
	if (func_169(Global_35))
	{
		Global_1935496.f_7 |= 1;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 1);
	}
	if (func_170(Global_35))
	{
		Global_1935496.f_7 |= 2;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 2);
	}
	if (func_171(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
	{
		Global_1935496.f_7 |= 4;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 4);
	}
	if (func_172(Global_35))
	{
		Global_1935496.f_7 |= 8;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 8);
	}
	if (func_173(0, 1))
	{
		Global_1935496.f_7 |= 16;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 16);
	}
	if (!func_174(0))
	{
		Global_1935496.f_7 |= 32;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 32);
	}
	if (!func_175(0))
	{
		Global_1935496.f_7 |= (1 << 9);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 9));
	}
	if (!func_176(0))
	{
		Global_1935496.f_7 |= (1 << 13);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 13));
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, true))
	{
		Global_1935496.f_7 |= (1 << 14);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 14));
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		Global_1935496.f_7 |= (1 << 15);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 15));
	}
	if (func_62() == 0 && PED::IS_PED_INCAPACITATED(Global_35))
	{
		Global_1935496.f_7 |= (1 << 17);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 17));
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496.f_7 |= 256;
	}
	else if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= 256;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 256);
	}
	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
	{
		Global_1935496.f_7 |= (1 << 10);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 10));
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= (1 << 12);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 12));
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_171(Global_35, joaat("SCRIPT_TASK_ENTER_ANIM_SCENE")))
	{
		Global_1935496.f_7 |= 128;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 |= (1 << 25);
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
		{
			Global_1935496.f_7 |= (1 << 26);
		}
		else
		{
			Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 26));
		}
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 26));
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 25));
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496.f_7 |= (1 << 16);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 16));
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496.f_7 |= 64;
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496.f_7 |= (1 << 20);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 20));
	}
	if (func_177(iParam0, 0))
	{
		Global_1935496.f_7 |= (1 << 19);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 19));
	}
	if (func_178(iParam0, 0))
	{
		Global_1935496.f_7 |= (1 << 18);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 18));
	}
	if (func_179(Global_35))
	{
		Global_1935496.f_7 |= (1 << 22);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 22));
	}
	if (func_180())
	{
		Global_1935496.f_7 |= (1 << 24);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 24));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_181(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 27));
					break;
				default:
					Global_1935496.f_7 |= (1 << 27);
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
		{
			Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 27));
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 27));
		}
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 27));
	}
	if (((((func_62() == -1 && func_182((1 << 15))) || func_183()) || func_184()) || (func_185() && !func_186())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 21));
	}
	else
	{
		Global_1935496.f_7 |= (1 << 21);
	}
	if (Global_1900073.f_17 && func_143(Global_35, 1, 0, 0) == joaat("WEAPON_FISHINGROD"))
	{
		Global_1935496.f_7 |= (1 << 23);
	}
	else
	{
		Global_1935496.f_7 -= (Global_1935496.f_7 & (1 << 23));
	}
}

bool func_32(int iParam0)
{
	return func_187(iParam0);
}

int func_33()
{
	return 33284224;
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((Global_1935496.f_29 & iParam2) != 0)
	{
		Global_1935496.f_27 -= (Global_1935496.f_27 & iParam2);
		return 0;
	}
	else
	{
		Stack.Invoke(iParam3, uParam0, iParam1, 0);
		if (func_42(StackVal, StackVal, StackVal, StackVal))
		{
			Global_1935496.f_27 |= iParam2;
			return 1;
		}
		else
		{
			Global_1935496.f_27 -= (Global_1935496.f_27 & iParam2);
			return 0;
		}
	}
	return 0;
}

int func_35()
{
	return 33537239;
}

int func_36()
{
	return 26983431;
}

bool func_37()
{
	return func_188();
}

void func_38(int iParam0)
{
	func_76(&(Global_1935496.f_27), iParam0);
}

bool func_39(int iParam0)
{
	return func_190(func_189(iParam0));
}

bool func_40(int iParam0)
{
	return (Global_1935496.f_29 & iParam0) != 0;
}

int func_41()
{
	return func_191();
}

bool func_42(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_31(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (func_62() == 0)
	{
		if ((Global_1935496.f_7 & (1 << 17)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & 1) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 10)) != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if ((iParam3 & 2) == 0)
	{
		if ((Global_1935496.f_7 & 32) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & 4) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 12)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & 8) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 9)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 9)) == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_192(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 18)) == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_193(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if ((iParam3 & 64) == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_194(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if ((iParam3 & 128) == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_195(Global_35, joaat("SCRIPT_TASK_MOUNT_ANIMAL"));
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_123("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if ((iParam3 & (1 << 23)) == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_195(Global_35, joaat("SCRIPT_TASK_MOUNT_ANIMAL"));
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if ((iParam3 & 16) == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_197(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_123("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if ((iParam3 & 256) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 13)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 10)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 16)) != 0)
		{
			if (bParam2)
			{
				func_123("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if ((iParam3 & (1 << 11)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 15)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 12)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 14)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 13)) == 0)
	{
		if ((Global_1935496.f_7 & 16) == 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 14)) == 0)
	{
		if ((Global_1935496.f_7 & 256) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 15)) == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_52();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_123("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if ((iParam3 & (1 << 17)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 19)) == 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 16)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 18)) == 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 19)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 21)) == 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 20)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 23)) == 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 21)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 25)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 22)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 26)) != 0)
		{
			return false;
		}
	}
	if ((iParam3 & (1 << 24)) == 0)
	{
		if ((Global_1935496.f_7 & (1 << 27)) == 0)
		{
			return false;
		}
	}
	if ((Global_1935496.f_7 & 17825988) != 0)
	{
		return false;
	}
	return true;
}

void func_43(int iParam0)
{
	func_198(&(Global_1935496.f_27), iParam0);
}

int func_44()
{
	return 33284224;
}

int func_45()
{
	return 16662519;
}

int func_46()
{
	return 16596983;
}

int func_47()
{
	return 16400295;
}

var func_48()
{
	return Global_1935496.f_10;
}

var func_49()
{
	return Global_1935496.f_11;
}

var func_50()
{
	return Global_1935496.f_12;
}

var func_51()
{
	return Global_1935496.f_13;
}

bool func_52()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

int func_53()
{
	return 26978304;
}

int func_54()
{
	return 18589696;
}

int func_55()
{
	return 26978448;
}

int func_56()
{
	return 33529847;
}

int func_57()
{
	return 32713860;
}

int func_58()
{
	return 32505855;
}

void func_59()
{
	Global_1935496.f_29 = 0;
}

void func_60(bool bParam0)
{
	int iVar0;

	if (func_167(64))
	{
		return;
	}
	if (!func_27(0) && !func_68())
	{
		iVar0 = func_199(0);
		if (func_200(iVar0, 0, 0, 0, bParam0))
		{
			func_201(iVar0);
		}
		func_202(iVar0);
		func_203();
		func_168(64);
	}
}

void func_61()
{
	int iVar0;

	iVar0 = func_199(0);
	func_200(iVar0, 1, 0, 0, 1);
	func_201(iVar0);
}

int func_62()
{
	return Global_1572887.f_12;
}

void func_63()
{
	func_204(joaat("SATCHEL_ELEMENTS"), &(Global_1935689.f_9475), 600, -1, 0, 0);
	func_205();
}

int func_64(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	func_206();
	bVar0 = func_27(0);
	bVar1 = func_68();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_KIT")) && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_DOCUMENTS"))
	{
		bVar2 = true;
	}
	Global_1935689.f_9446 = 1;
	if (!Global_1935689.f_9)
	{
		Global_1935689.f_9438 = -1;
	}
	Global_1935689.f_9449 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1935689.f_9450 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1935689.f_9463 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", joaat("SATCHEL_PROMPT_USE"));
	Global_1935689.f_9464 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1935689.f_9465 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1935689.f_9466 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", joaat("SATCHEL_PROMPT_BREAKDOWN"));
	Global_1935689.f_9467 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1935689.f_9468 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1935689.f_9471 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::GET_STRING_FROM_HASH_KEY(joaat("SATCHEL_PROMPT_DISCARD_ALL")));
	Global_1935689.f_9469 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1935689.f_9470 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1935689.f_9474 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1935689.f_9472 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", joaat("SATCHEL_PROMPT_USE"));
	if ((func_62() == -1 && func_27(0)) && Global_1914319.f_16855 == 2)
	{
		Global_1935689.f_9473 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1935689.f_9473 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1935689.f_9454 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Name", 0);
	Global_1935689.f_9455 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Description", 0);
	if ((func_27(0) || func_23()) || func_26())
	{
		Global_1935689.f_9456 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Price", "");
	}
	else
	{
		Global_1935689.f_9456 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "Price", false);
	}
	if ((func_62() == -1 && func_27(0)) && Global_1914319.f_16855 == 2)
	{
		Global_1935689.f_9457 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_SEND");
	}
	else
	{
		Global_1935689.f_9457 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1935689.f_9458 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Category", 0);
	Global_1935689.f_9452 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "DefaultCategoryIndex", 0);
	Global_1935689.f_9453 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryIndex", func_207());
	Global_1935689.f_9451 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryCount", 0);
	Global_1935689.f_9459 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "IndexDescription", "");
	Global_1935689.f_9460 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Tip", "");
	Global_1935689.f_9461 = INVENTORY::_0x9D21B185ABC2DBC4(iVar3, "effects", false, false);
	Global_1935689.f_9462 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Folder", 0);
	Global_1935689.f_9448 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_208(Global_1935689.f_9448);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9448, Global_1935689.f_9416);
	iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	iVar5 = joaat("SATCHEL_TITLE");
	if (func_209(joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1")))
	{
		iVar5 = -1401261769;
	}
	iVar6 = func_210(iVar4, "player", iVar5, "ALL SATCHEL", joaat("SLOTID_NONE"));
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_84() || func_86(Global_35, func_85(7), 1)) || (!func_87(7) | func_88(7) && func_27(0)))
	{
		func_210(iVar4, "saddle", -1186165261, "ALL", joaat("SLOTID_HORSE_SATCHEL"));
	}
	func_102(iVar6, &iVar3);
	if (Global_1935689.f_9)
	{
		func_211(Global_1935689.f_9439);
		func_212(Global_1935689.f_9439, &iVar3, 0);
		func_157(1, 0, 0);
	}
	else
	{
		func_157(func_213(), 0, 0);
	}
	Global_1935689.f_9 = 0;
	return 1;
}

void func_65()
{
	if (Global_1572887.f_12 == -1)
	{
		return;
	}
	Global_1058888.f_2 = 1;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1346594033;
		case joaat("SATCHEL_CATEGORY_MATERIALS"):
			return joaat("MATERIALS_TITLE");
		case joaat("SATCHEL_CATEGORY_INGREDIENTS"):
			return joaat("INGREDIENTS_TITLE");
		case joaat("SATCHEL_CATEGORY_REMEDIES"):
			return joaat("REMEDIES_TITLE");
		case joaat("SATCHEL_CATEGORY_PROVISIONS"):
			return joaat("PROVISIONS_TITLE");
		case joaat("SATCHEL_CATEGORY_VALUABLES"):
			return joaat("VALUABLES_TITLE");
		case joaat("SATCHEL_CATEGORY_KIT"):
			return joaat("KIT_TITLE");
		case joaat("SATCHEL_CATEGORY_DOCUMENTS"):
			return joaat("DOCUMENTS_TITLE");
		case joaat("SATCHEL_CATEGORY_HORSE"):
			return joaat("HORSE_TITLE");
		case joaat("SATCHEL_CATEGORY_DONATIONS"):
			return joaat("DONATIONS_TITLE");
		case joaat("SATCHEL_CATEGORY_SEND"):
			return joaat("SEND_TITLE");
		case joaat("SATCHEL_CATEGORY_SELL"):
			if ((Global_1914319.f_17370 || Global_1914319.f_18996.f_1) && Global_1914319.f_16855 == 19)
			{
				return joaat("SHOP_PEARSON_DONATE");
			}
			else
			{
				return joaat("SELL_TITLE");
			}
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1315938069;
		case joaat("SATCHEL_CATEGORY_MATERIALS"):
			return -1694952718;
		case joaat("SATCHEL_CATEGORY_INGREDIENTS"):
			return 1510785758;
		case joaat("SATCHEL_CATEGORY_REMEDIES"):
			return 392871877;
		case joaat("SATCHEL_CATEGORY_PROVISIONS"):
			return 92275361;
		case joaat("SATCHEL_CATEGORY_VALUABLES"):
			return 983460938;
		case joaat("SATCHEL_CATEGORY_KIT"):
			return -1579183876;
		case joaat("SATCHEL_CATEGORY_DOCUMENTS"):
			return -419081072;
		case joaat("SATCHEL_CATEGORY_HORSE"):
			return -1202687131;
		case joaat("SATCHEL_CATEGORY_DONATIONS"):
			return 89311517;
		case joaat("SATCHEL_CATEGORY_SEND"):
			return 1001811369;
		case joaat("SATCHEL_CATEGORY_SELL"):
			return 288697952;
	}
	return 0;
}

bool func_68()
{
	if (((Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2) || func_23()) || func_24())
	{
		return true;
	}
	return false;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SATCHEL_CATEGORY_DONATIONS"):
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, HUD::GET_STRING_FROM_HASH_KEY(818738914));
			break;
		case joaat("SATCHEL_CATEGORY_SEND"):
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, HUD::GET_STRING_FROM_HASH_KEY(-402412948));
			break;
		case joaat("SATCHEL_CATEGORY_SELL"):
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, HUD::GET_STRING_FROM_HASH_KEY(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
			break;
	}
	return 0;
}

void func_70(int iParam0)
{
	Global_1935689.f_18 = iParam0;
}

void func_71(int iParam0)
{
	Global_1935689.f_17 = iParam0;
}

void func_72(int iParam0)
{
	Global_1935689.f_12 = iParam0;
}

void func_73(var uParam0)
{
	MAP::DISPLAY_RADAR(true);
	Global_1935689.f_1 = 0;
	func_214();
	func_215(uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);
	uParam0->f_1 = 0;
}

void func_74(int iParam0)
{
	Global_1911894[iParam0 /*6*/].f_1 = 3;
	Global_1911894[iParam0 /*6*/] = 0;
	Global_1911894[iParam0 /*6*/].f_5 = 0;
}

void func_75(int iParam0)
{
	Global_1935689.f_9415 -= (Global_1935689.f_9415 & iParam0);
}

void func_76(var uParam0, int iParam1)
{
	func_216(uParam0, iParam1);
}

void func_77(bool bParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6[10];
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar25;

	uParam1->f_2 = 0;
	func_217(bParam0, joaat("COST_CRAFTING_PEARSON"), &bVar0, &iVar1);
	iVar2 = func_218(bParam0, 2);
	iVar3 = (iVar1 - iVar2);
	iVar4 = func_218(bParam0, 0);
	if (bVar0)
	{
		if (iVar3 > 0)
		{
			*uParam1 = 0;
			uParam1->f_2 = 1;
		}
		else
		{
			*uParam1 = 2;
		}
		if (iVar3 >= iVar4)
		{
			uParam1->f_1 = 0;
		}
		else
		{
			uParam1->f_1 = 3;
		}
	}
	else if (func_219(bParam0))
	{
		*uParam1 = 1;
		uParam1->f_1 = 1;
	}
	else
	{
		*uParam1 = 2;
		uParam1->f_1 = 2;
	}
	if (func_220(bParam0))
	{
		if (!func_221(bParam0, &iVar5))
		{
			iVar18 = func_222(bParam0);
			iVar19 = func_223(bParam0);
			iVar20 = func_224(bParam0);
			iVar17 = PED::_0xB29C553BA582D09E(&uVar6, iVar18, iVar19, iVar20);
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				return;
			}
			iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
			if (PED::_IS_METAPED_USING_COMPONENT(iVar21, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar5))
			{
				iVar17 = 0;
			}
			else
			{
				iVar17 = func_225(iVar21, &uVar6);
			}
		}
		if (iVar17 <= 0)
		{
			return;
		}
		iVar25 = 0;
		while (iVar25 < iVar17)
		{
			if (!func_161(uVar6[iVar25], 0))
			{
			}
			else if (uVar6[iVar25] == bParam0)
			{
			}
			else
			{
				func_77(uVar6[iVar25], &iVar22);
				if (iVar22 == 0)
				{
					uParam1->f_2 = 1;
					*uParam1 = 0;
					uParam1->f_1 = 3;
				}
				else
				{
					iVar25++;
				}
			}
		}
	}
}

void func_78(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9463, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9472, iParam0);
}

int func_79(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (bParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1.0f;
	fVar1 = 1.0f;
	iVar2 = Global_1914319.f_16855.f_1;
	iVar3 = Global_1914319.f_16855;
	if (func_226(iVar2) && func_227(iVar3))
	{
		if (iVar3 == 10 || iVar3 == 18)
		{
			fVar1 = func_228(iVar2, bParam0);
		}
		fVar0 = func_229(&(Global_1914319.f_3[iVar3 /*446*/].f_35), bParam0);
	}
	fVar4 = (fVar0 + fVar1);
	if (fVar0 <= 0.0f)
	{
		return 0;
	}
	fVar4 -= (float)BUILTIN::FLOOR(fVar4);
	iVar5 = func_230(bParam0, joaat("SELL_SHOP_DEFAULT"), 0);
	iVar6 = BUILTIN::ROUND(((float)iVar5 + ((float)iVar5 * fVar4)));
	if (bParam1)
	{
		iVar6 = BUILTIN::ROUND(((float)iVar6 * 0.5f));
	}
	if (iVar6 <= 0)
	{
		return 0;
	}
	return iVar6;
}

char* func_80(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_231(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_81(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_82(int iParam0)
{
	return func_232(iParam0 == joaat("SATCHEL_CATEGORY_HORSE"), 1, 0);
}

void func_83(var uParam0, int iParam1)
{
	struct<14> /*112*/ sVar0;
	int iVar14;

	sVar0.f_9 = joaat("SLOTID_NONE");
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_233(&sVar0, iVar14, func_82(Global_1935689.f_9439), *uParam0))
		{
		}
		else if (!func_234(sVar0.f_4, iParam1))
		{
		}
		else if (!func_235(&sVar0, 0, 1))
		{
		}
		else if (func_27(0))
		{
			if (!func_161(sVar0.f_4, 0) || sVar0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1935689.f_9440 == 0)
				{
					func_90(sVar0.f_4);
				}
				func_236(sVar0, 0);
			}
			iVar14 += -1;
		}
	}
}

bool func_84()
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (func_27(0))
	{
		iVar0 = func_165(0);
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		if (Global_1914319.f_16855 == 10 || Global_1914319.f_16855 == 18)
		{
			fVar1 = 30.0f;
			if (Global_1914319.f_16855.f_1 == 55)
			{
				fVar1 = 40.0f;
			}
			fVar2 = func_237(iVar0, 0, 1);
			if (fVar2 < fVar1)
			{
				return true;
			}
		}
		else if (Global_1914319.f_16855 == 2)
		{
			if (func_237(iVar0, 0, 1) < 75.0f)
			{
				return true;
			}
		}
		else if (Global_1914319.f_16855 == 19)
		{
			if (func_238(iVar0))
			{
				return true;
			}
		}
	}
	else
	{
		if (func_62() == -1)
		{
			if (func_239(Global_35))
			{
				iVar0 = PED::GET_MOUNT(Global_35);
			}
			else if (func_240(joaat("SATCHEL_CATEGORY_HORSE")))
			{
				return true;
			}
		}
		else
		{
			iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
		}
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		if (func_237(iVar0, 0, 1) < 1.7f)
		{
			return true;
		}
	}
	return false;
}

int func_85(int iParam0)
{
	iParam0 = func_241(iParam0);
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

bool func_86(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

int func_87(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	if (func_243(vVar1, vVar4) > func_136(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_89(int iParam0, int iParam1)
{
	if (!func_244(Global_1935689.f_9431[iParam0 /*2*/].f_1))
	{
		return false;
	}
	return func_245("ALL", &(Global_1935689.f_9431[iParam0 /*2*/].f_1), &(Global_1935689.f_9431[iParam0 /*2*/]), iParam1, 0);
}

void func_90(bool bParam0)
{
	Global_1935689.f_9440 = bParam0;
}

void func_91(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1935689.f_9439 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam2 == 0 && *uParam0 > 16)
	{
		iVar1 = (*uParam0 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1935689.f_19.f_1)
	{
		Global_1935689.f_19.f_2[iVar0 /*2*/] = 0;
		Global_1935689.f_19.f_2[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1935689.f_19.f_1 = 0;
	iVar0 = 0;
	if (*uParam0 > 0)
	{
		iVar0 = (*uParam0 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_233(uParam1, iVar0, uParam0->f_1, *uParam0))
			{
			}
			else if (!func_235(uParam1, iParam2, 1))
			{
			}
			else
			{
				func_246(*uParam1);
			}
			iVar0 += -1;
		}
	}
}

void func_92()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	Global_1935689.f_1224 = 0;
	if (func_247())
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
			if (ITEMSET::IS_ITEMSET_VALID(iVar2))
			{
				iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
					if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
					}
					else
					{
						bVar1 = func_248(iVar0);
						if (func_249(bVar1))
						{
							Global_1935689.f_1224 = bVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_93()
{
	if (func_250())
	{
		if (func_27(0))
		{
			if ((func_251() == 19 || func_251() == 18) || func_251() == 10)
			{
				func_252(1, 0);
			}
			else
			{
				func_253(1);
			}
		}
		else
		{
			func_253(1);
		}
	}
}

void func_94(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == 0)
	{
		func_254(uParam0, uParam1, iParam2);
	}
	else
	{
		iVar1 = 0;
		if (*uParam0 > 0)
		{
			iVar0 = (*uParam0 - 1);
			while (iVar0 >= 0)
			{
				if (!func_233(uParam1, iVar0, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(uParam1, iParam2, 1))
				{
				}
				else
				{
					func_255(*uParam1, 0);
					iVar1++;
					if (iParam2 == 0 && iVar1 >= 16)
					{
					}
					else
					{
						iVar0 += -1;
					}
				}
			}
		}
	}
}

void func_95()
{
	switch (Global_1935689.f_9439)
	{
		case joaat("SATCHEL_CATEGORY_KIT"):
			func_256();
			break;
		case joaat("SATCHEL_CATEGORY_VALUABLES"):
			if (func_257(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 1, 0))
			{
				func_258(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 0);
			}
			break;
	}
}

void func_96()
{
	if (!func_161(Global_1935689.f_1224, 0))
	{
		return;
	}
	if (func_84() && func_166(func_165(0), Global_1935689.f_1224, 0) != 1)
	{
		return;
	}
	func_258(Global_1935689.f_1224, 0);
}

void func_97(int iParam0)
{
	if (Global_1935689.f_19.f_203 > 16)
	{
		if (Global_1935689.f_7)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9459, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689.f_9444));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9459, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689.f_19.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9459, "");
	}
}

void func_98()
{
	if (!func_161(Global_1935689.f_9440, 0))
	{
		Global_1935689.f_7 = 0;
	}
	else if ((((func_259(Global_1935689.f_9440, 1224357681) != 0 && Global_1935689.f_9439 != 0) && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_DONATIONS")) && !func_27(0)) && !func_23())
	{
		Global_1935689.f_7 = 1;
	}
	else
	{
		Global_1935689.f_7 = 0;
	}
}

int func_99(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "label");
	return iVar0;
}

void func_100(bool bParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;

	bVar0 = true;
	if (func_161(bParam0, 0))
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_HORSE"))
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_27(0))
			{
				iVar2 = func_260(&bParam0);
				if (func_111(bParam0, joaat("CI_TAG_ITEM_HERB")) && !func_261(iVar2))
				{
					bVar0 = false;
					ATTRIBUTE::STOP_ITEM_PREVIEW();
				}
				else
				{
					ATTRIBUTE::_START_ITEM_PREVIEW(bParam0, iVar1);
				}
			}
		}
		func_262(bParam0, uParam1);
		bVar3 = false;
		bVar4 = func_263(bParam0);
		if (func_84())
		{
			iVar5 = func_166(func_165(0), bParam0, 0);
		}
		else
		{
			iVar5 = func_264(bParam0, 0, 0);
			if (bParam0 == Global_1935689.f_1224)
			{
				iVar5++;
			}
		}
		iVar6 = func_265(bParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, func_266(bParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_267(bParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9474, bVar4);
		if (bVar4 && iVar5 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9470, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9469, bVar3);
		bVar7 = true;
		if (func_27(0) || func_68())
		{
			fVar8 = (BUILTIN::TO_FLOAT(func_268(bParam0, 1)) / 100.0f);
			if (Global_1914319.f_16855 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, MISC::VAR_STRING(10, "SEND_ITEM_VALUE", func_80(MISC::_GET_STRING_FROM_FLOAT(fVar8, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1914319.f_16855 == 19)
			{
				if (uParam2->f_1)
				{
					Stack.Invoke(uParam2->f_2);
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_80(MISC::_GET_STRING_FROM_FLOAT(fVar8, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!func_269(bParam0, Global_1914319.f_16855.f_1) && !func_68())
			{
				bVar7 = false;
			}
		}
		if (bVar7)
		{
			if (iVar6 > 1)
			{
				if (Global_1935689.f_19.f_203 <= 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
				}
				else if (iVar5 >= iVar6)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar5, iVar6));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar5, iVar6));
				}
			}
			else if (iVar6 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar5));
			}
		}
		else if (func_251() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, func_66(Global_1935689.f_9439));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_66(Global_1935689.f_9439));
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, false, false);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, bParam0, false);
	}
	func_90(bParam0);
}

void func_101(int iParam0, bool bParam1)
{
	if ((!func_111(bParam1, joaat("CI_TAG_CATEGORY_DOCUMENT")) && !func_111(bParam1, joaat("CI_TAG_FOLDER_LETTERS"))) && !func_111(bParam1, joaat("CI_TAG_FOLDER_NOTES")))
	{
		return;
	}
	if (bParam1 != Global_1911894[iParam0 /*6*/])
	{
		Global_1911894[iParam0 /*6*/].f_1 = 3;
		Global_1911894[iParam0 /*6*/] = bParam1;
		Global_1911894[iParam0 /*6*/].f_5 = 0;
	}
}

void func_102(int iParam0, int iParam1)
{
	Global_1935689.f_9437 = iParam0;
	if (func_24())
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35) == 0)
		{
			func_211(joaat("SATCHEL_CATEGORY_MATERIALS"));
		}
	}
	if (func_23())
	{
		func_211(joaat("SATCHEL_CATEGORY_DONATIONS"));
	}
	func_212(Global_1935689.f_9439, iParam1, 0);
}

void func_103(int iParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_270(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9462, iParam0);
	func_90(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, false, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9474, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9470, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9469, false);
	func_271(uParam1);
}

void func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	Global_1935689.f_9417 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_9453);
	iVar0 = Global_1935689.f_9418[Global_1935689.f_9417];
	if (iVar0 != Global_1935689.f_9439)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_OPTION"), false);
		}
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		}
		Global_1935689.f_19.f_203 = 0;
		Global_1935689.f_9437 = func_82(iVar0);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9448, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar1, "CurrentCategory", false);
		iVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9448, Global_1935689.f_9417);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar2, "CurrentCategory", true);
		func_212(iVar0, &iVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 11)
		{
			iVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9448, iVar3);
			bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory");
			bVar6 = !Global_1935689.f_9418[iVar3] != Global_1935689.f_9439;
			if (bVar5 != bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory", bVar6);
			}
			iVar3++;
		}
		Global_1935689.f_9437 = func_82(Global_1935689.f_9439);
	}
}

bool func_105(int iParam0, int iParam1)
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
	if (func_272(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_272(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_272(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_272(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_272(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_272(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_272(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_272(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_106(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_153(bParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_273(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_274(bParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

void func_107(bool bParam0, int iParam1)
{
	Global_1357549.f_1672 = bParam0;
	Global_1357549.f_1673 = iParam1;
}

bool func_108()
{
	return Global_1357549.f_1672;
}

bool func_109(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (Global_1935689.f_8)
	{
		return false;
	}
	if (((bParam0 != joaat("CUSTOM_SATCHEL") && bParam0 != joaat("KIT_CAMP")) && bParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_275(bParam0);
		if (func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			iVar0 |= 64;
		}
		if (!func_42(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (bParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE_SP") || bParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_183())
		{
			return false;
		}
	}
	if (!func_257(bParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_110(bool bParam0)
{
	if (func_119(bParam0) == joaat("EMOTE"))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(0), bParam0, func_27(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1392040.f_2)
			{
				func_173(1, 1);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("KIT_HANDHELD_CATALOG"):
			func_123(MISC::VAR_STRING(0, 163043886, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

bool func_111(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_112(bool bParam0, struct<11> /*88*/ sParam1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> /*16*/ sParam17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (func_276())
			{
				func_277(joaat("JOURNAL_RC_MAYOR4_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_MAYOR4_AR")))
			{
				func_277(joaat("JOURNAL_RC_MAYOR4B_JN"), 0);
			}
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_277(joaat("JOURNAL_RC_MAYOR4A_JN"), 0);
			break;
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			func_278(Global_1347702[80 /*49*/].f_15, 1);
			if (func_276() == 1)
			{
				func_277(joaat("JOURNAL_RC_FMA5_1_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_FMA5_1_AR")))
			{
				if (func_279(77))
				{
					func_277(joaat("JOURNAL_RC_FMA5_2_JN"), 0);
				}
				else
				{
					func_277(joaat("JOURNAL_RC_FMA5_1_JN"), 0);
				}
			}
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if ((func_280() && !func_281(51)) && !func_282((1 << 20)))
			{
				func_283(2);
				func_284(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
				func_286((1 << 20));
			}
			break;
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if ((func_280() && !func_281(51)) && !func_282((1 << 14)))
			{
				func_283(1);
				func_284(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
				func_286((1 << 14));
			}
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if ((func_280() && !func_281(40)) && !func_287(32))
			{
				func_288(4);
				func_284(39, 0, 0, 0, 0, -1, 0);
				func_285(39, 0, 0, 0, 0, 0, 2, 0);
				func_289(32);
			}
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if ((func_280() && !func_281(42)) && !func_290(16))
			{
				func_291(8);
				func_284(41, 0, 0, 0, 0, -1, 0);
				func_285(41, 0, 0, 0, 0, 0, 2, 0);
				func_292(16);
			}
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if ((func_280() && !func_281(50)) && !func_293(32))
			{
				func_294(4);
				func_284(49, 0, 0, 0, 0, -1, 0);
				func_285(49, 0, 0, 0, 0, 0, 2, 0);
				func_295(32);
				if (!func_296(Global_1347702[50 /*49*/].f_15, 1))
				{
					if (func_276() == 1)
					{
						func_277(joaat("JOURNAL_RC_ROCKCARV15_AR"), 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_ROCKCARV15_AR")))
					{
						func_277(joaat("JOURNAL_RC_ROCKCARV15_JN"), 0);
					}
				}
			}
			break;
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			sParam17.f_1 = iParam27;
			strcpy_s(&(sParam1.f_10), 32, "respond_parcel");
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_113(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_FIELD_MANUAL"):
			func_291(16);
			break;
	}
}

void func_114(bool bParam0, struct<11> /*88*/ sParam1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_2_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_3_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_5_NOTE"):
			strcpy_s(&(sParam1.f_10), 32, "gunslinger_notes");
			break;
	}
}

bool func_115(bool bParam0)
{
	return true;
}

bool func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_297(bParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_259(bParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1245009814, 1, 0, -1.0f);
				return true;
			}
			break;
		case joaat("CI_TAG_APPLY_LOTION"):
			if (!bParam1)
			{
				func_298(bParam0);
				return true;
			}
			break;
		case joaat("CI_TAG_APPLY_POMADE"):
			if (!bParam1)
			{
				if (!func_299())
				{
					if (func_300(&Global_35))
					{
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1.0f);
					}
					else
					{
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1.0f);
					}
					return true;
				}
				else
				{
					func_123("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 280850861, 1, 0, -1.0f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1087288635, 1, 0, 0.0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -268993254, 1, 0, -1.0f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -1401979141, 1, 0, 0.0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1834614641, 1, 0, -1.0f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 136592566, 1, 0, 0.0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_301(bParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_302(bParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_303(bParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_304(bParam0);
				}
				else
				{
					func_305(bParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_306(bParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_307(bParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_308(bParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_309(bParam0);
				return true;
			}
			break;
		case joaat("CI_TAG_POCKET_WATCH"):
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1.0f);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_310(bParam0);
				return true;
			}
			break;
		case joaat("CI_TAG_SMOKING_CIGARETTE"):
			if (!bParam1)
			{
				func_311(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_312(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_313(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_314(bParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_315(bParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_117(struct<16> /*128*/ sParam0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(sParam0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!func_316(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(sParam0.f_10))) > 0 || func_317(&(sParam0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { sParam0 /*16*/ };
			Global_1934603.f_161++;
			func_318(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_118()
{
	return (Global_1894899 & 2) != 0;
}

int func_119(bool bParam0)
{
	Vector3 vVar0;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_121(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_122(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (func_119(bParam0) == joaat("CLOTHING"))
	{
		if (func_121(bParam0) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			iVar0 = func_126(bParam0);
			if ((iVar0 != -1 && !func_319(iVar0)) || !func_257(bParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

int func_123(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_124(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_35)
		{
			if (bParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_320(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_85(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_321())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_126(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001"):
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002"):
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003"):
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005"):
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006"):
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001"):
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"):
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE"):
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO"):
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE"):
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR"):
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE"):
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER"):
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT"):
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM"):
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

void func_127(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_322((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = bParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_323(sVar0);
}

int func_128(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_188())
	{
		return 0;
	}
	if (!func_324(bParam0))
	{
		return 0;
	}
	if (func_325(bParam0))
	{
		iVar0 = 0;
		if (func_121(bParam0) == joaat("CI_CATEGORY_WARDROBE_MASK"))
		{
			if (bParam1)
			{
				func_198(&iVar0, 2);
			}
		}
		return func_326(bParam0, iVar0);
	}
	return 0;
}

void func_129(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 10;
	bVar1 = Global_1946054.f_1497.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		func_130(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 0);
		func_131(bParam0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	func_130(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 0);
	if (func_327((1 << 15)))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_328();
		func_322(128);
		return;
	}
	if (bVar1 == Global_1946054.f_57[iVar0 /*11*/])
	{
		func_131(bParam0, 1);
		return;
	}
	if (func_329(joaat("CI_CATEGORY_WARDROBE_HAT"), 0))
	{
		if (func_209(bVar1))
		{
			func_131(bVar1, 0);
		}
		else
		{
			func_330(bVar1, 1, 1, 0);
		}
		func_131(bParam0, 1);
		return;
	}
	if (func_209(bVar1))
	{
		func_131(bVar1, 0);
		func_131(bParam0, 1);
	}
	else if (func_209(bParam0))
	{
		if (bParam0 != func_331(0))
		{
			func_332(bParam0, bVar1);
			func_131(bParam0, 0);
			func_131(bVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_322(128);
			func_131(bParam0, 1);
		}
	}
}

int func_130(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (bParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_153(bParam1, 1, 0) /*5*/ };
		bParam3 = func_333(sVar0.f_4);
		if (bParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_335(bParam1, iParam2, func_334(bParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_336(1, (func_62() == -1 && bParam5), 1);
	switch (bParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && bParam1 != Global_1946054.f_57[func_334(bParam3, 1) /*11*/])
			{
				func_127(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_327((1 << 15)) && bParam1 != Global_1946054.f_57[func_334(bParam3, 1) /*11*/])
			{
				func_328();
				func_127(22, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_127(22, bParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_337(bParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_127(19, 0, iVar5, 0, 0);
		if ((bParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || bParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || bParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_338(0);
			func_339(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_127(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_131(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_153(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_340(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_199(0), &sVar5, bParam1);
}

void func_132()
{
	if (func_341())
	{
		return;
	}
	if (func_342())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1.0f);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		func_123(func_343(), 10000, 0, 0, 0, 1);
		Global_1914319.f_18996.f_4 = 0;
	}
}

bool func_133(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_134(int iParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	if (!func_344(iParam0))
	{
		return false;
	}
	return func_345(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_135(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_345(Global_1835011[iParam0 /*74*/].f_1);
}

float func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_346(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_347(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_347(iParam0) + 1;
	fVar6 = func_348(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_349(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_137(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

int func_138()
{
	return Global_40.f_1095.f_3054.f_1;
}

bool func_139(int iParam0)
{
	if (!func_350(32))
	{
		return false;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
	{
		return false;
	}
	if (!func_351())
	{
		return false;
	}
	if (func_352(16))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1224589.f_9) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::INT_TO_PLAYERINDEX(Global_1224589)))
	{
		return false;
	}
	if (iParam0 == 1 && func_272(Global_1130863.f_8, 1))
	{
		return false;
	}
	return true;
}

int func_140(int iParam0)
{
	if (!func_353())
	{
		return 0;
	}
	func_354(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

bool func_141(int iParam0)
{
	return func_272(Global_1130863.f_8, iParam0);
}

void func_142(int iParam0)
{
	struct<16> /*128*/ sVar0;

	sVar0.f_12 = 255;
	sVar0.f_13 = 255;
	sVar0.f_5 = iParam0;
	sVar0.f_3 = 94;
	func_356(sVar0, func_355(0, 15), 0, 0);
}

int func_143(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_144()
{
	return Global_1894899.f_2;
}

int func_145(int iParam0)
{
	int iVar0;

	if (!func_357(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (Global_1395601.f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	int iVar0;

	iVar0 = func_358();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_147(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_148()
{
	return Global_1395601;
}

bool func_149(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	bVar3 = func_359(bParam0, 1);
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
			func_360(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_257(bParam0, 1, bParam4))
	{
		return false;
	}
	sVar5 = { func_361(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_264(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_264(bParam0, 0, 0) - iParam1) < 0)
		{
			func_149(bParam0, func_264(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_119(bParam0) == joaat("WEAPON"))
	{
		if (!func_362(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_106(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_156(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_360(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_363(bParam0, iParam1);
	return true;
}

void func_150(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_364(iParam0, &iVar0, &iVar1);
	if (!func_365(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_366(iVar0, iVar1);
}

void func_151(bool bParam0)
{
	if ((func_62() != -1 || !bParam0) || func_239(Global_35))
	{
		func_367();
		return;
	}
	if (func_368((1 << 23)) && !func_133(Global_1392040.f_1, (1 << 11)))
	{
		func_369((1 << 24));
		return;
	}
	func_367();
}

int func_152(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	if (!func_370(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_371(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_372(bParam0, bParam2);
	iVar2 = 0;
	if (func_264(bParam0, 0, 0) == 0)
	{
		if (func_373(bParam0))
		{
			iVar5 = func_374(bParam0);
			iVar6 = func_375(iVar5);
			iVar7 = func_376(iVar6) + 1;
			func_377(iVar5);
			if (func_281(38))
			{
				func_150(483, 0);
			}
			else
			{
				func_150(482, 0);
			}
			if (iVar7 == func_378(iVar6))
			{
				func_152(func_379(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_280() && func_380(4))
				{
					if (func_280() && (func_381(38) || func_281(38)))
					{
						func_285(38, func_379(iVar6), 0, 0, func_382(), 0, -1, 0);
						func_383(2);
					}
					else
					{
						func_285(38, func_379(iVar6), 0, 0, func_382(), 0, -1, 0);
						func_383(1);
					}
				}
			}
			else if (func_280() && func_380(4))
			{
				if (func_280() && (func_381(38) || func_281(38)))
				{
					func_285(38, 0, 0, 0, func_382(), 0, -1, 0);
					func_383(2);
				}
				else
				{
					func_285(38, 0, 0, 0, func_382(), 0, -1, 0);
					func_383(1);
				}
			}
			if (func_280() && func_380(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_280() && (func_381(38) || func_281(38)))
					{
						func_284(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_284(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_119(bParam0) == joaat("CLOTHING"))
	{
		if ((!func_111(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_111(bParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_111(bParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_384(bParam0, (1 << 23)) && !func_385(28))
	{
		func_386(28);
	}
	if (!bVar3)
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_121(bParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				bVar1 = func_388(func_387(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_62() == -1)
					{
						func_389(bVar1);
					}
					if (func_156(0) && func_390(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_391(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
				if (WEAPON::_IS_AMMO_VALID(bVar1))
				{
					if (func_62() == -1)
					{
						func_389(bParam0);
					}
					if (func_156(0) && func_390(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_391(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_119(bParam0) == joaat("WEAPON"))
		{
			if (!func_392(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_119(bParam0) == joaat("AMMO") && func_393(bParam0))
		{
			if (!func_394(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_395(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_396(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_398(func_397(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_398(func_399(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_111(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR") && bParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_296(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_150(498, 0);
				}
			}
			if (func_111(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_111(bParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_400(bParam0);
			}
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_111(bParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_USED")) && func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_150(484, 0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_111(bParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_111(bParam0, 589988438))
		{
			if (func_401())
			{
				func_402(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_111(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_403(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_404(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_405(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_111(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_406(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_407();
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_408(bParam0, iParam1);
			func_409(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_111(bParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_410(bParam0, 0, 0, 0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_111(bParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_400(bParam0);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_62() != -1)
			{
				return 0;
			}
			func_411(bParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_257(215778062, 1, 0))
					{
						func_152(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_257(670273567, 1, 0))
					{
						func_152(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_257(-967317137, 1, 0))
					{
						func_152(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_257(526074061, 1, 0))
					{
						func_152(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_257(-1045488665, 1, 0))
					{
						func_152(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_257(471514780, 1, 0))
					{
						func_152(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_384(bParam0, 4))
		{
			if (!func_281(42))
			{
				func_412(bParam0);
			}
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_413(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					bVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					bVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					bVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					bVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					bVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					bVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					bVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (bVar8 != 0)
			{
				func_152(bVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_386(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_130(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_414(&bVar9, 0))
				{
					func_390(bVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_62() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_130(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_150(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_415();
				Global_40.f_11095.f_61 += 0.1f;
				func_416();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_417();
				Global_40.f_11095.f_63 += 0.1f;
				func_418();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_419();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_420(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_421(499813453, 0);
				func_422(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_420(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_421(499813453, 0);
				func_422(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_420(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_421(499813453, 0);
				func_422(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_420(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_421(666607663, 0);
				func_423(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_420(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_421(666607663, 0);
				func_423(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_420(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_421(666607663, 0);
				func_423(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_420(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_421(-220219788, 0);
				func_424(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_420(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_421(-220219788, 0);
				func_424(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_420(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_421(-220219788, 0);
				func_424(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_420(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_421(218622660, 0);
				func_425(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_420(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_421(218622660, 0);
				func_425(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_420(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_421(390004462, 0);
				func_426(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_420(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_421(390004462, 0);
				func_426(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_420(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_421(390004462, 0);
				func_426(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_420(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_421(6410548, 0);
				func_427(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_420(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_421(6410548, 0);
				func_427(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_420(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_421(6410548, 0);
				func_427(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_420(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_421(6410548, 0);
				func_427(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_428(242, func_266(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_428(240, func_266(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_428(241, func_266(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_429(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_429(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_429(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_429(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_429(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_429(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_150(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_150(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_150(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_152(func_430(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_152(func_431(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_385(1))
				{
					func_150(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_150(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_62() == -1)
				{
					bParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_150(496, 0);
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
		bVar10 = bParam0;
		func_432(&bVar10);
		if (!func_433(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_156(0))
		{
			return 1;
		}
		if (func_119(bParam0) == joaat("CLOTHING"))
		{
			func_434(bParam0);
		}
		if (func_111(bParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_435(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_156(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_152(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_436(iVar2, 0);
		}
	}
	sVar35 = { func_361(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_437(bParam0);
	if (fParam6 > 0.0f)
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_438(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_360(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

struct<5> /*40*/ func_153(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_439(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_119(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_154(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_440(bParam1) /*4*/ };
			if (bParam2 && func_441(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_442(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_442(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_443(bParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
		case joaat("HORSE"):
			sVar0.f_4 = joaat("SLOTID_ACTIVE_HORSE");
			break;
		case joaat("EMOTE"):
			sVar0.f_4 = -813824107;
			sVar0 = { func_444(bParam1) /*4*/ };
			switch (func_121(bParam0))
			{
				case 664784405:
					sVar0.f_4 = -1150938404;
					break;
				case 2020212423:
					sVar0.f_4 = -1756997214;
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
			if (func_445(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_154(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_445(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_154(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
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
				if (!func_446(sVar0, &sVar27, bParam1, 0))
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

struct<4> /*32*/ func_154(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_161(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_199(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_155(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_156(0))
	{
		return func_447(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_446(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_199(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_156(bool bParam0)
{
	if (func_62() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_199(bParam0));
}

void func_157(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (func_448() && iParam2 == 0))
	{
		func_17(1);
		func_18(1);
	}
}

int func_158(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_223(bParam0);
	iVar2 = func_222(bParam0);
	if (iVar2 != 0)
	{
		func_149(bParam0, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
		iVar0 = func_449(iVar2, iVar1, bParam0, iParam1);
	}
	return iVar0;
}

bool func_159(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == joaat("PROVISION_ROTTEN_MEAT") || bParam0 == joaat("CONSUMABLE_CORNEDBEEF_CAN"))
	{
		return false;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
	{
		if (bParam2)
		{
			return func_111(bParam0, joaat("CI_TAG_ITEM_COOKED"));
		}
		else if (bParam1)
		{
			return !func_111(bParam0, joaat("CI_TAG_ITEM_COOKED"));
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_160(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<10> /*80*/ sVar2;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;

	iVar0 = func_259(bParam0, 1697966752);
	bVar1 = false;
	if (iVar0 == 0)
	{
		return false;
	}
	sVar2 = { func_450(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("COST_CRAFTING_KNIFE"), 0, -1, iVar0, 0) /*10*/ };
	if (func_451(sVar2, &iVar12, &iVar13, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			bVar15 = func_452(iVar14, iVar12);
			if (func_161(bVar15, 0))
			{
				bVar1 = bVar15;
			}
			else
			{
				iVar14++;
			}
		}
		func_453(iVar12);
	}
	return bVar1;
}

bool func_161(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_162(bool bParam0)
{
	Global_1911914.f_1577 = bParam0;
	Global_1392040.f_2 = 1;
	func_369((1 << 28));
	if (func_368((1 << 23)))
	{
		func_369((1 << 24));
		return true;
	}
	else if ((func_257(joaat("KIT_CAMP_SIMPLE"), 1, 0) && func_25(joaat("KIT_CAMP_SIMPLE"), 0, 0, 0, 1, 0, 0)) || (func_257(joaat("KIT_CAMP"), 1, 0) && func_25(joaat("KIT_CAMP"), 0, 0, 0, 1, 0, 0)))
	{
		Global_1392040.f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		return true;
	}
	else
	{
		Global_1392040.f_2 = 0;
		func_454((1 << 28));
	}
	return false;
}

bool func_163()
{
	return Global_1935689.f_10;
}

int func_164(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iParam1 = func_455(bParam0, iParam1, 1, 1, joaat("REMOVE_REASON_DEFAULT"));
	}
	else
	{
		iVar0 = func_165(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_456(&iVar0, bParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_457(bParam0, iParam1, bParam2, iParam3);
}

int func_165(int iParam0)
{
	int iVar0;

	if (func_458(iParam0))
	{
		if (func_62() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_85(func_241(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(func_459());
		}
	}
	else if (func_62() == -1)
	{
		iVar0 = func_85(0);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_460())
	{
		iVar0 = func_461(bParam1, 0);
	}
	else
	{
		iVar0 = func_264(bParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 += func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	if (bParam1 == Global_1935689.f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_167(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_168(int iParam0)
{
	Global_22 |= iParam0;
}

bool func_169(int iParam0)
{
	return func_463(iParam0, 4) | func_463(iParam0, 5);
}

bool func_170(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_173(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_62() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_28.f_19);
	}
	if (func_464())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_169(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_465())
	{
		if (bParam0)
		{
			if (func_358() != 8 && func_358() != 7)
			{
				func_123("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_123("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0, 1) || PED::IS_PED_SWIMMING(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_466(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (func_467(&Global_1393447, 16))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_468())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_469(joaat("SIMPLE_CRAFTING")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SIMPLE_CRAFTING")) > 0)
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_470(0, 1, 1) && !func_471(1))
	{
		if (bParam0)
		{
			if (func_135(15))
			{
				func_123("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_123("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (func_472() == 8)
	{
		return false;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_473((1 << 23)))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_368((1 << 23)))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_474(func_144()))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((func_475() || func_476(func_144()) == 9) || func_477(func_144())) && !func_478())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_170(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_479())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2.0f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) /*3*/ };
		Global_1935496.f_131 = { Global_36 /*3*/ };
	}
	if (func_480(Global_35, Global_1935496.f_128, 4.0f, 1, 1))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_481(Global_36, 5.0f))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144.0f && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RCM_EVELYN_MILLER4")) > 0)
	{
		return false;
	}
	return true;
}

bool func_174(bool bParam0)
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_BEING_DRAGGED(Global_35))
	{
		return false;
	}
	if (!PED::_GET_LASSO_TARGET(Global_35) == 0)
	{
		return false;
	}
	if (PED::_IS_PED_DRAGGING(Global_35))
	{
		return false;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
	{
		return false;
	}
	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, (1 << 12), 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, (1 << 15), 0))
	{
		return false;
	}
	return true;
}

bool func_175(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_172(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_176(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_177(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_482();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_181(iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_178(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, false, false))
	{
		if (!func_181(iVar0))
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_237(iVar0, 1, 1) > 2.0f)
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = iParam0;
	if (!func_181(iVar1))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

int func_179(int iParam0)
{
	return func_463(iParam0, 7);
}

bool func_180()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_IS_PED_LEADING_HORSE(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_GET_LED_HORSE_FROM_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(iVar1))
	{
		return false;
	}
	return true;
}

bool func_181(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_182(int iParam0)
{
	switch (func_62())
	{
		case -1:
			return (Global_1357549.f_1494 & iParam0) != 0;
	}
	return false;
}

bool func_183()
{
	int iVar0;
	int iVar1;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return true;
		}
	}
	return false;
}

bool func_184()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	iVar0 = func_483(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_185()
{
	return Global_1898164.f_163;
}

bool func_186()
{
	return Global_1911914.f_1578;
}

bool func_187(int iParam0)
{
	return func_272(Global_1935496.f_27, iParam0);
}

bool func_188()
{
	return Global_1946054.f_2792;
}

int func_189(int iParam0)
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

bool func_190(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

int func_191()
{
	return 33537269;
}

int func_192(bool bParam0)
{
	int iVar0;

	if (func_484(1) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_484(2) && !Global_1392040.f_2) && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			iVar0 = func_485(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(iVar0))
				{
					func_123("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_123("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_484((1 << 22)))
	{
		return 0;
	}
	return 1;
}

int func_193(bool bParam0)
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_194(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_123("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_123("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_133(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == joaat("SCRIPT_TASK_DRIVE_BY") && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

int func_197(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	func_486(iParam0, iParam1);
}

int func_199(bool bParam0)
{
	if (func_62() == -1)
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

bool func_200(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;
	struct<18> /*144*/ sVar18;
	int iVar36;

	if (func_487(Global_35))
	{
		bParam2 = true;
	}
	bVar0 = false;
	if (!bParam2 && !bParam1)
	{
		if (Global_1935496.f_28 == Global_1935496.f_27)
		{
			return bVar0;
		}
	}
	iVar1 = -1;
	iVar3 = 0;
	sVar4.f_9 = joaat("SLOTID_NONE");
	sVar18 = { func_488(0, joaat("SLOTID_SATCHEL"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (func_489(&sVar18, &iVar1, &iVar2, bParam3))
	{
		iVar36 = Global_36637 + 150;
		if (!bParam4)
		{
			if (iVar36 >= iVar2)
			{
				iVar36 = (iVar2 - 1);
				bVar0 = true;
			}
		}
		else
		{
			Global_36637 = 0;
			iVar36 = (iVar2 - 1);
			bVar0 = true;
		}
		iVar3 = Global_36637;
		while (iVar3 <= iVar36)
		{
			if (func_233(&sVar4, iVar3, iVar1, iVar2))
			{
				if (!func_490(sVar4.f_4))
				{
				}
				else
				{
					if (bParam1)
					{
						func_491(iParam0, sVar4.f_4, 1);
					}
					else if (bParam2)
					{
						func_491(iParam0, sVar4.f_4, 0);
					}
					else if (sVar4.f_4 != joaat("CUSTOM_SATCHEL"))
					{
						func_491(iParam0, sVar4.f_4, func_492(sVar4.f_4));
					}
					Global_36637 = iVar3;
				}
				iVar3++;
				if (bVar0)
				{
					Global_36637 = 0;
					Global_1935496.f_28 = Global_1935496.f_27;
				}
				func_244(iVar1);
				return bVar0;
			}
		}
	}
}

void func_201(int iParam0)
{
	func_491(iParam0, joaat("WEAPON_KIT_BINOCULARS"), func_32(32));
	func_491(iParam0, joaat("WEAPON_KIT_CAMERA"), func_32(64));
	func_491(iParam0, joaat("KIT_HORSE_BRUSH"), func_32((1 << 10)));
	func_493(iParam0, func_32((1 << 14)));
	func_494(iParam0, func_32(128));
	func_495(iParam0, func_32(4));
	func_496(iParam0, func_32(8));
}

void func_202(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	if (Global_1935496.f_72.f_41 <= 0)
	{
		return;
	}
	sVar1.f_1 = -1;
	iVar0 = 0;
	while (iVar0 <= Global_1935496.f_72.f_41)
	{
		sVar1 = { Global_1935496.f_72[iVar0 /*2*/] /*2*/ };
		if (!func_161(sVar1.f_0, 0))
		{
		}
		else
		{
			func_497(iParam0, &sVar1);
			func_498(iVar0);
			iVar0++;
		}
	}
	Global_1935496.f_72.f_41 = 0;
}

void func_203()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= Global_1935496.f_72.f_41)
	{
		if (!func_498(iVar0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	Global_1935496.f_72.f_41 = 0;
}

int func_204(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(iParam0);
	while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (bVar1)
	{
		func_499();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_205()
{
	if (func_62() == -1)
	{
		if (!func_500(18, &(Global_1935689.f_9475)))
		{
			return;
		}
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 3, "satchel_elements/name(id=%x):description0");
}

void func_206()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iVar0 = func_251();
	iVar1 = func_501(func_144(), iVar0);
	iVar2 = func_85(func_241(0));
	iVar3 = func_85(func_241(1));
	iVar4 = func_85(func_241(6));
	if (func_27(0))
	{
		if (iVar0 == 19)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_238(iVar2))
			{
				func_198(&(Global_1935689.f_9436), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_238(iVar3))
			{
				func_198(&(Global_1935689.f_9436), 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && func_238(iVar4))
			{
				func_198(&(Global_1935689.f_9436), 4);
			}
		}
		else if (iVar0 == 10 || iVar0 == 18)
		{
			fVar5 = 30.0f;
			if (iVar1 == 55)
			{
				fVar5 = 40.0f;
			}
			else if (iVar0 == 2)
			{
				fVar5 = 75.0f;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_502(iVar2, iVar1, fVar5))
			{
				func_198(&(Global_1935689.f_9436), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_502(iVar3, iVar1, fVar5))
			{
				func_198(&(Global_1935689.f_9436), 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && func_502(iVar4, iVar1, fVar5))
			{
				func_198(&(Global_1935689.f_9436), 4);
			}
		}
	}
}

int func_207()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_1935689.f_9418[iVar0] == Global_1935689.f_9439)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_208(int iParam0)
{
	Global_1935689.f_9416 = 0;
	if (!Global_1935689.f_9)
	{
		func_211(0);
		func_503();
	}
	else if ((((Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_DONATIONS") && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_HORSE")) && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_INVALID")) && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_SELL")) && Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_SEND"))
	{
		func_70(Global_1935689.f_9439);
	}
	else
	{
		func_211(0);
		func_503();
	}
	func_504(iParam0, 0, "All", joaat("SATCHEL_NAV_ALL"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_PROVISIONS"), "Provisions", joaat("SATCHEL_NAV_PROVISIONS"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_REMEDIES"), "Remedies", joaat("SATCHEL_NAV_REMEDIES"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_INGREDIENTS"), "Ingredients", joaat("SATCHEL_NAV_INGREDIENTS"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_MATERIALS"), "Materials", joaat("SATCHEL_NAV_MATERIALS"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_KIT"), "Kit", joaat("SATCHEL_NAV_KIT"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_VALUABLES"), "Valuables", joaat("SATCHEL_NAV_VALUABLES"));
	func_504(iParam0, joaat("SATCHEL_CATEGORY_DOCUMENTS"), "Documents", joaat("SATCHEL_NAV_DOCUMENTS"));
	func_505(iParam0);
	func_506(iParam0);
	if (func_27(0))
	{
		if (func_251() == 2)
		{
			func_211(joaat("SATCHEL_CATEGORY_SEND"));
		}
		else
		{
			func_211(joaat("SATCHEL_CATEGORY_SELL"));
		}
	}
	else
	{
		func_211(func_507());
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9451, Global_1935689.f_9416);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9453, func_207());
}

bool func_209(bool bParam0)
{
	var uVar0;

	return func_508(bParam0, &uVar0);
}

int func_210(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1935689.f_9430;
	if (iVar0 >= 2)
	{
		return -1;
	}
	if (!func_245(sParam3, &(Global_1935689.f_9431[iVar0 /*2*/].f_1), &(Global_1935689.f_9431[iVar0 /*2*/]), iParam4, 0))
	{
		return -1;
	}
	Global_1935689.f_9430++;
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(iParam0, -1, joaat("COLLECTION_ITEM"), iVar1);
	return iVar0;
}

void func_211(int iParam0)
{
	int iVar0;

	if (Global_1935689.f_9439 != iParam0)
	{
		Global_1935689.f_9439 = iParam0;
		Global_1935689.f_9446 = 1;
	}
	iVar0 = func_207();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9453, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9452, iVar0);
	func_509(Global_1935689.f_9439 != joaat("SATCHEL_CATEGORY_HORSE"));
}

void func_212(int iParam0, int iParam1, bool bParam2)
{
	func_211(iParam0);
	if (!bParam2)
	{
		func_13(iParam0);
	}
}

bool func_213()
{
	int iVar0;
	int iVar1;

	if (Global_1935689.f_18 == 0)
	{
		Global_1935689.f_9417 = 0;
	}
	else
	{
		iVar0 = Global_1935689.f_9417;
		iVar1 = (Global_1935689.f_9416 - 1);
		switch (Global_1935689.f_18)
		{
			case joaat("SATCHEL_CATEGORY_DONATIONS"):
			case joaat("SATCHEL_CATEGORY_SEND"):
			case joaat("SATCHEL_CATEGORY_SELL"):
				Global_1935689.f_9417 = iVar1;
				break;
		}
		if (Global_1935689.f_18 == joaat("SATCHEL_CATEGORY_HORSE"))
		{
			if (func_27(0))
			{
				Global_1935689.f_9417 = (iVar1 - 1);
			}
			else
			{
				Global_1935689.f_9417 = iVar1;
			}
		}
		func_104(iVar0);
		return true;
	}
	return false;
}

void func_214()
{
	if (Global_1572887.f_12 == -1)
	{
		return;
	}
	Global_1058888.f_2 = 0;
}

void func_215(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1935689.f_9430 > 0)
	{
		Global_1935689.f_9430--;
		func_244(Global_1935689.f_9431[Global_1935689.f_9430 /*2*/].f_1);
	}
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_217(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	struct<10> /*80*/ sVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	struct<2> /*16*/ sVar14[15];
	int iVar45;
	int iVar46;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	*uParam2 = 0;
	sVar0 = { func_450(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, iParam1, 0, -1, 0, 0) /*10*/ };
	iVar11 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&sVar0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar12, &bVar13))
			{
				if (func_121(bVar13) == joaat("CI_CATEGORY_CARAVAN_UPGRADE"))
				{
					if (func_218(bVar13, 3) > 0)
					{
					}
					else
					{
						Jump @142; // curOff = 125
						if (func_218(bVar13, 0) > 0)
						{
						}
						else if (func_510(bVar13, iParam1, &sVar14, &iVar45, 1, 0))
						{
							iVar46 = 0;
							while (iVar46 < iVar45)
							{
								if (bParam0 == sVar14[iVar46 /*2*/])
								{
									*uParam2 = 1;
									*uParam3 += sVar14[iVar46 /*2*/].f_1;
								}
								iVar46++;
							}
						}
					}
					iVar12++;
					ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iVar11);
					return 1;
				}
			}
		}
	}
}

int func_218(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_439(0) /*4*/ };
	sVar0.f_4 = func_511(iParam1);
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(0), &sVar5, false);
	return iVar9;
}

bool func_219(bool bParam0)
{
	if ((func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) || func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL"))) || func_111(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CARCASS")))
	{
		return true;
	}
	return false;
}

bool func_220(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CARCASS")))
	{
		return true;
	}
	return false;
}

bool func_221(bool bParam0, var uParam1)
{
	return func_512(bParam0, uParam1) | func_513(bParam0, uParam1);
}

int func_222(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_223(bool bParam0)
{
	if (func_111(bParam0, joaat("CI_TAG_ITEM_QUALITY_PERFECT")))
	{
		return 2;
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_QUALITY_HIGH")))
	{
		return 1;
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_QUALITY_POOR")))
	{
		return 0;
	}
	return 1;
}

int func_224(bool bParam0)
{
	if (func_111(bParam0, joaat("CI_TAG_ITEM_QUALITY_PERFECT")))
	{
		return 2;
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_QUALITY_HIGH")))
	{
		return 1;
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_QUALITY_POOR")))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_514(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	iVar4 = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(uParam1, iParam0, iVar0, iVar1);
	return iVar4;
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_227(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

float func_228(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = 1.0f;
	if (!func_161(bParam1, 0))
	{
		return fVar0;
	}
	if (!func_515(iParam0, bParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_229(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	fVar1 = 1.0f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch ((uParam0[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (bParam1 == (uParam0[iVar0 /*7*/])->f_2)
				{
					return (uParam0[iVar0 /*7*/])->f_6;
				}
				break;
			case 2:
				if (func_119(bParam1) == (uParam0[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_516(bParam1, joaat("COST_SHOP_DEFAULT"), 1, 0, 0));
				if ((uParam0[iVar0 /*7*/])->f_5 <= 0.0f)
				{
					fVar4 = (fVar3 + 1.0f);
				}
				else
				{
					fVar4 = (uParam0[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= (uParam0[iVar0 /*7*/])->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 *= (uParam0[iVar0 /*7*/])->f_6;
		}
		iVar0++;
	}
	return fVar1;
}

int func_230(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> /*16*/ sVar0[10];
	int iVar21;
	int iVar22;

	if (!func_517(bParam0, iParam1, &sVar0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (sVar0[iVar22 /*2*/] == joaat("CURRENCY_CASH"))
		{
			return sVar0[iVar22 /*2*/].f_1;
		}
		else if (sVar0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

char* func_231(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_232(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_233(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_234(bool bParam0, int iParam1)
{
	return iParam1 == func_259(bParam0, 1224357681);
}

bool func_235(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_518(uParam0->f_9))
		{
			return false;
		}
	}
	if (!func_490(uParam0->f_4))
	{
		return false;
	}
	if (!func_519(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_249(uParam0->f_4))
	{
		return false;
	}
	if (func_27(0))
	{
		if (!func_161(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1935689.f_9440 == 0 && !func_163())
	{
		func_90(uParam0->f_4);
	}
	return true;
}

void func_236(struct<11> /*88*/ sParam0, var uParam11, var uParam12, var uParam13, int iParam14)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_161(sParam0.f_4, 0))
	{
		bVar0 = func_266(sParam0.f_4);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9450, Global_1935689.f_9444);
		iVar2 = iVar1;
		bVar3 = func_520(sParam0.f_4);
		if (iParam14 > 0)
		{
			iVar4 = iParam14;
		}
		else
		{
			iVar4 = func_166(func_165(0), sParam0.f_4, 0);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, iVar2, bVar0, iVar4, sParam0.f_10, bVar3, joaat("COLOR_PURE_WHITE"));
		Global_1935689.f_9444++;
	}
}

float func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_521(Global_35, iParam0, bParam1, bParam2);
}

bool func_238(int iParam0)
{
	Vector3 vVar0;
	float fVar3;

	if (func_358() == 3)
	{
		vVar0 = { func_522(func_358()) /*3*/ };
		fVar3 = (func_523() + 7.0f);
		if (func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
		{
			return true;
		}
	}
	else if (func_525(iParam0))
	{
		return true;
	}
	return false;
}

bool func_239(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_240(int iParam0)
{
	if (iParam0 == Global_1935689.f_18)
	{
		return true;
	}
	return false;
}

int func_241(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_242(int iParam0)
{
	iParam0 = func_241(iParam0);
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

float func_243(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_244(int iParam0)
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

bool func_245(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_199(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_246(struct<5> /*40*/ sParam0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_259(sParam0.f_4, 1224357681);
	bVar1 = func_520(sParam0.f_4);
	if (func_526(iVar0))
	{
		if (Global_1935689.f_19.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1935689.f_19.f_1)
			{
				if (iVar0 == Global_1935689.f_19.f_2[iVar2 /*2*/])
				{
					func_527(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_528(iVar0, bVar1);
		}
		else
		{
			func_528(iVar0, bVar1);
		}
	}
}

bool func_247()
{
	if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_SELL"))
	{
		switch (func_251())
		{
			case 10:
			case 18:
			case 19:
				return true;
		}
	}
	else if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_DONATIONS"))
	{
		return func_24();
	}
	else if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_SEND"))
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_529(iParam0);
		if (!func_161(bVar0, 0))
		{
			bVar0 = func_530(iParam0);
		}
	}
	else
	{
		bVar0 = func_530(iParam0);
	}
	return bVar0;
}

bool func_249(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (func_27(0) && Global_1914319.f_16855 == 2)
	{
		if (!func_531(bParam0))
		{
			return false;
		}
	}
	else
	{
		switch (bParam0)
		{
			case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
				return false;
		}
	}
	if (func_62() == 0)
	{
		if (func_111(bParam0, -805003139))
		{
			if (!UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
			{
				return false;
			}
		}
	}
	if (func_119(bParam0) == joaat("UPGRADE") && !(func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_BAIT")) || func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_LURE"))))
	{
		return false;
	}
	return true;
}

bool func_250()
{
	int iVar0;

	if (func_27(0))
	{
		iVar0 = func_251();
		if ((iVar0 == 10 || iVar0 == 18) || iVar0 == 19)
		{
			if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_HORSE") || (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_SELL") && func_84()))
			{
				return true;
			}
		}
		else if (func_251() == 2 && (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_SEND") || Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_HORSE")))
		{
			return true;
		}
	}
	else if (Global_1935689.f_9439 == joaat("SATCHEL_CATEGORY_HORSE"))
	{
		return true;
	}
	return false;
}

int func_251()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (func_532(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_252(bool bParam0, bool bParam1)
{
	var uVar0;

	uVar0 = 1000;
	func_533(&uVar0, bParam1);
	return func_534(&uVar0, bParam0);
}

var func_253(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_165(0);
	func_535(&iVar0, &uVar1, bParam0);
	return uVar1;
}

void func_254(var uParam0, var uParam1, int iParam2)
{
	struct<2> /*16*/ sVar0[16];
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 0)
	{
		if (*uParam0 > 0)
		{
			iVar36 = func_199(0);
			iVar33 = (*uParam0 - 1);
			while (iVar33 >= 0)
			{
				if (!func_233(uParam1, iVar33, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(uParam1, iParam2, 1))
				{
				}
				else
				{
					iVar37 = uParam1->f_4;
					iVar38 = func_536(iVar37, iVar36);
					bVar35 = false;
					iVar34 = 0;
					while (iVar34 < 16)
					{
						if (iVar37 == sVar0[iVar34 /*2*/])
						{
							bVar35 = true;
						}
						else
						{
							iVar34++;
						}
					}
					if (!bVar35)
					{
						iVar39 = 0;
						while (iVar39 < 16)
						{
							if (!func_161(sVar0[iVar39 /*2*/], 0))
							{
								sVar0[iVar39 /*2*/] = iVar37;
								sVar0[iVar39 /*2*/].f_1 = iVar38;
							}
							else
							{
								if (iVar38 > sVar0[iVar39 /*2*/].f_1)
								{
									func_537(&sVar0, iVar39, &iVar37, &iVar38);
								}
								iVar39++;
							}
						}
					}
				}
				iVar33 += -1;
			}
			func_538(&sVar0);
		}
	}
}

void func_255(struct<5> /*40*/ sParam0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3;
	int iVar6;
	int iVar7;

	if (func_161(sParam0.f_4, 0))
	{
		bVar0 = func_520(sParam0.f_4);
		if (func_68())
		{
			if (!bVar0 || sParam0.f_4 == joaat("PROVISION_OLD_BRASS_COMPASS"))
			{
				return;
			}
		}
		bVar1 = func_266(sParam0.f_4);
		bVar2 = ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(sParam0.f_4);
		vVar3 = { func_539(sParam0.f_4) /*3*/ };
		iVar6 = func_540(sParam0.f_4);
		if (iParam14 > 0)
		{
			iVar7 = iParam14;
		}
		else
		{
			iVar7 = func_166(func_165(0), sParam0.f_4, 0);
		}
		func_541(joaat("INVENTORY_ITEM"), bVar1, &vVar3, bVar0, iVar7, bVar2, iVar6, joaat("COLOR_PURE_WHITE"));
		Global_1935689.f_19.f_203++;
	}
}

void func_256()
{
	if (func_251() != 2)
	{
		if (func_257(joaat("WEAPON_KIT_BINOCULARS"), 1, 0))
		{
			func_258(joaat("WEAPON_KIT_BINOCULARS"), 0);
		}
		if (func_257(joaat("WEAPON_KIT_CAMERA"), 1, 0))
		{
			func_258(joaat("WEAPON_KIT_CAMERA"), 0);
		}
		func_542();
		if (func_257(joaat("KIT_CAMP"), 1, 0))
		{
			func_258(joaat("KIT_CAMP"), 0);
		}
		else if (func_257(joaat("KIT_CAMP_SIMPLE"), 1, 0))
		{
			func_258(joaat("KIT_CAMP_SIMPLE"), 0);
		}
		func_543();
	}
}

bool func_257(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_119(bParam0);
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
		if (!func_544(bParam0, 1))
		{
			return false;
		}
	}
	return func_264(bParam0, 0, bParam2) >= iParam1;
}

void func_258(int iParam0, bool bParam1)
{
	struct<14> /*112*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar0.f_4 = iParam0;
	if (!bParam1)
	{
		func_255(sVar0, 1);
	}
	else
	{
		func_236(sVar0, 0);
	}
}

int func_259(bool bParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &sVar0, &iVar41, 20))
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

int func_260(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 40;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 41;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 42;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 43;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 1;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 9;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 14;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 17;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 21;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 22;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 24;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 32;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 35;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 36;
	}
	return 0;
}

bool func_261(int iParam0)
{
	if (!func_545(iParam0))
	{
		return false;
	}
	return func_546(iParam0, 4, 1);
}

void func_262(bool bParam0, var uParam1)
{
	if (func_68())
	{
		func_547(1);
		if (func_23())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), joaat("SATCHEL_PROMPT_USE"));
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9468, true);
	}
	else if (func_27(0) || func_68())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9465))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9464, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_549(bParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), func_550(bParam0));
		func_551(bParam0, uParam1);
	}
}

int func_263(bool bParam0)
{
	if (func_552())
	{
		return 0;
	}
	if (func_62() == 0)
	{
		return 0;
	}
	else if (!func_27(0) && !func_68())
	{
		if ((((func_265(bParam0, 0) == 1 || func_111(bParam0, joaat("CI_TAG_SHOP_ANIMAL_LEGENDARY"))) || func_111(bParam0, joaat("CI_TAG_ITEM_CANNOT_DISCARD"))) || func_111(bParam0, joaat("CI_TAG_CATEGORY_KIT"))) || func_111(bParam0, joaat("CI_TAG_CATEGORY_DOCUMENT")))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_119(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_359(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_553(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam2), bParam0, false);
	return iVar2;
}

int func_265(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_153(bParam0, 0, 0) /*5*/ };
	return func_554(bParam0, &sVar0, 0, bParam1);
}

bool func_266(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

int func_267(bool bParam0)
{
	int iVar0;

	iVar0 = func_260(&bParam0);
	if (iVar0 != 0 && !func_555(func_260(&bParam0)))
	{
		if (!func_261(iVar0))
		{
			return -1994084079;
		}
	}
	return func_556(bParam0);
}

int func_268(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_220(bParam0))
	{
		if (iParam1 > 1)
		{
			iVar1 = func_557(bParam0);
			iVar2 = (iParam1 - iVar1);
			iVar3 = func_79(bParam0, 0);
			iVar4 = func_79(bParam0, 1);
			iVar0 = ((iVar4 * iVar1) + (iVar3 * iVar2));
		}
		else
		{
			iVar0 = func_79(bParam0, func_558(bParam0));
		}
	}
	else
	{
		iVar0 = (func_79(bParam0, 0) * iParam1);
	}
	return iVar0;
}

bool func_269(bool bParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_559(bParam0);
	}
	if (func_560(bParam0, iParam1))
	{
		return false;
	}
	return func_561(bParam0, iParam1);
}

int func_270(int iParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1935689.f_9475))
	{
		return 0;
	}
	sVar0.f_0 = Global_1935689.f_9475;
	sVar0.f_2 = 3;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_271(var uParam0)
{
	func_547(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), joaat("SATCHEL_PROMPT_OPEN"));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_562(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

bool func_272(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_273(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_563(bParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_156(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_199(bParam4), bParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_274(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_563(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_446(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_156(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_199(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_275(bool bParam0)
{
	if (func_111(bParam0, joaat("CI_TAG_ITEM_HERB")))
	{
		return func_564(bParam0);
	}
	switch (func_121(bParam0))
	{
		case joaat("CI_CATEGORY_PROVISION"):
			if (func_565(bParam0))
			{
				return func_564(bParam0);
			}
			break;
		case joaat("CI_CATEGORY_HERBS"):
		case joaat("CI_CATEGORY_CONSUMABLE"):
			return func_564(bParam0);
		case joaat("CI_CATEGORY_DOCUMENTS"):
			return func_44();
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return func_191();
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return func_191();
		case joaat("CI_CATEGORY_WEAPON_UNIQUE"):
			if (func_161(bParam0, 0))
			{
				if (bParam0 == joaat("WEAPON_KIT_CAMERA"))
				{
					return func_54();
				}
			}
			return func_55();
		case joaat("CI_CATEGORY_CAMP"):
			return func_56();
		case joaat("CI_CATEGORY_WATCH"):
			return func_53();
		default:
			if (func_161(bParam0, 0))
			{
				if (func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_LURE")) || func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_BAIT")))
				{
					return func_58();
				}
				else if (func_111(bParam0, joaat("CI_TAG_ITEM_BAIT")))
				{
					return func_36();
				}
				else if (func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
				{
					return func_35();
				}
				switch (bParam0)
				{
					case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
					case joaat("UPGRADE_UPG_MORTAR_PESTLE_SP"):
						return func_57();
					case joaat("KIT_HORSE_BRUSH"):
						return func_47();
				}
			}
			return func_33();
	}
	return func_33();
}

bool func_276()
{
	if (func_62() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_566(iParam0, 0);
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
		func_567(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_278(int iParam0, int iParam1)
{
	if (!func_568(iParam0))
	{
		return;
	}
	func_569(iParam0, iParam1);
}

bool func_279(int iParam0)
{
	return (Global_40.f_490.f_402[iParam0] & 1) != 0;
}

bool func_280()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_281(int iParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	return func_296(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_282(int iParam0)
{
	return (Global_40.f_12004.f_6 & iParam0) != 0;
}

void func_283(int iParam0)
{
	Global_40.f_12019.f_26 |= iParam0;
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = joaat("CIGARETTE_CARDS");
			if (func_280() && (func_381(38) || func_281(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (func_280() && (func_381(39) || func_281(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = joaat("EXOTIC_ITEMS");
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = joaat("LEGENDARY_FISH");
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_280() && (func_381(49) || func_281(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == joaat("CIGARETTE_CARDS"))
	{
		if (func_280() && (func_381(38) || func_281(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_572(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_571(func_379(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_280() && (func_381(39) || func_281(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_280() && (func_381(49) || func_281(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_570(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_285(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_280() && (func_381(38) || func_281(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = 12;
			iVar14 = joaat("CIGARETTE_CARDS");
			break;
		case 39:
			if (func_280() && (func_381(39) || func_281(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f /*3*/ };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f /*3*/ };
			iVar9 = func_573(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_280() && (func_381(41) || func_281(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f /*3*/ };
			iVar9 = 13;
			iVar14 = joaat("LEGENDARY_FISH");
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_280() && (func_381(49) || func_281(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f /*3*/ };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = func_573(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_574(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_575(iParam0, iVar13, iVar14))
	{
	}
	if (func_576(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_577(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_578(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_579(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_580(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_286(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

bool func_287(int iParam0)
{
	return (Global_40.f_12004.f_1 & iParam0) != 0;
}

void func_288(int iParam0)
{
	Global_40.f_12019.f_3 |= iParam0;
}

void func_289(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

bool func_290(int iParam0)
{
	return (Global_40.f_12004.f_3 & iParam0) != 0;
}

void func_291(int iParam0)
{
	Global_40.f_12019.f_4 |= iParam0;
}

void func_292(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

bool func_293(int iParam0)
{
	return (Global_40.f_12004.f_5 & iParam0) != 0;
}

void func_294(int iParam0)
{
	Global_40.f_12019.f_2 |= iParam0;
}

void func_295(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

bool func_296(int iParam0, bool bParam1)
{
	switch (func_581(iParam0))
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

bool func_297(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;

	switch (func_259(bParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL"):
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL"):
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W10_16_H15_24"):
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W17_78_H12_7"):
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_D2_H32_ROLLED"):
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case joaat("CI_TAG_PAPER_NEWSPAPER"):
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
	}
	return false;
}

void func_298(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("APPLY_LOTION_BOTH_HANDS");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

bool func_299()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_300(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_585(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_301(bool bParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_582())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_302(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_582())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_303(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_582())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_304(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_305(bool bParam0)
{
	int iVar0;

	iVar0 = -680642132;
	switch (func_582())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_306(bool bParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_582())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_307(bool bParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_582())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_308(bool bParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_582())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_309(bool bParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_582())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_310(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_311(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_312(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_313(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_HERB")))
		{
			func_586(func_260(&bParam0), 1, 1);
		}
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_314(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

void func_315(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_583(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_584(bParam0, 1);
		func_149(bParam0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	}
}

bool func_316(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_317(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_318(int iParam0)
{
	if (func_316(iParam0, 1))
	{
		func_587(1);
	}
}

bool func_319(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_589(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_320(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_85(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_590(iVar0))
	{
		return true;
	}
	return false;
}

int func_321()
{
	return Global_40.f_1095.f_3054;
}

void func_322(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_323(struct<4> /*32*/ sParam0)
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
			if (func_591(sParam0.f_0))
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
			func_592(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_322(8);
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
			if (func_591(sParam0.f_0))
			{
				return;
			}
			func_592(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_322(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_339(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

bool func_324(bool bParam0)
{
	if (func_593())
	{
		return false;
	}
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (!func_257(bParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_325(bool bParam0)
{
	return func_594(bParam0);
}

int func_326(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_595(bParam0);
	if (func_111(bParam0, joaat("CI_TAG_ITEM_MASK")))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_596(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_597();
			}
			else
			{
				iVar0 = func_598();
			}
		}
		else if (func_272(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_599();
		}
		else
		{
			iVar0 = func_600();
		}
	}
	else if (func_601(&bVar2))
	{
		if (func_111(bVar2, joaat("CI_TAG_ITEM_MASK")))
		{
			iVar0 = func_597();
		}
		else
		{
			iVar0 = func_598();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_599();
	}
	else
	{
		iVar0 = func_600();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, bParam0, iVar0, 1, iParam1, -1.0f);
		return 1;
	}
	return 0;
}

bool func_327(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_328()
{
	func_602(&(Global_1946054.f_2776));
	func_603((1 << 15));
	func_604(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

bool func_329(int iParam0, bool bParam1)
{
	return func_605(iParam0, 0) < func_606(iParam0, bParam1);
}

void func_330(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_607(bParam0))
	{
		return;
	}
	iVar0 = func_121(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_608(bParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_608(bParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_608(bParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_608(bParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_608(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_608(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_331(0))
	{
		func_609(bParam0, 1);
		if (func_610() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_609(func_331(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_609(func_331(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_611();
	if (func_39(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_199(0), bParam0, 0);
	}
	func_131(bParam0, bParam3);
	if (bParam2)
	{
		func_612(0, 0);
	}
}

int func_331(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_610();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_332(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_121(bParam1);
	if (iVar0 != func_121(bParam0))
	{
		return;
	}
	func_613(bParam0, bParam1, 1);
}

int func_333(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_614(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_334(bool bParam0, int iParam1)
{
	switch (bParam0)
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

bool func_335(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_615();
	if (iParam2 == 39)
	{
		sVar0 = { func_153(bParam0, 1, 0) /*5*/ };
		iParam2 = func_334(func_333(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_616(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_327((1 << 15)) && iParam2 == 10) && bParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_617(func_614(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_618(iParam2);
	func_619(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_620(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_620(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_621(&(Global_1946054.f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = bParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_622(bParam0, iParam2, iParam1, func_62() != -1);
	if (bParam4)
	{
		func_623(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_623(&(Global_1946054.f_1378), 1, 0);
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
				func_604(func_614(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_336(bool bParam0, bool bParam1, bool bParam2)
{
	func_624(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

int func_337(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_334(bParam0, 1);
	switch (bParam0)
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

void func_338(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_625(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_626(sVar0);
}

void func_339(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_626(sVar0);
}

int func_340(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_154(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(bParam6), &sVar0, false);
	return iVar4;
}

bool func_341()
{
	return Global_1914319.f_18996.f_1;
}

bool func_342()
{
	return Global_1914319.f_18996;
}

char* func_343()
{
	switch (Global_1914319.f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

bool func_344(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_345(int iParam0)
{
	int iVar0;

	iVar0 = func_581(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_346(int iParam0)
{
	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_347(int iParam0)
{
	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_348(int iParam0)
{
	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_349(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_350(int iParam0)
{
	return func_272(Global_1128974[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

bool func_351()
{
	return !func_350(2);
}

bool func_352(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return (Global_1146476.f_1 & iParam0) != 0;
}

bool func_353()
{
	if ((((func_27(0) && !func_627()) || func_628()) || Global_1935689.f_1) || func_629())
	{
		return false;
	}
	return true;
}

void func_354(int iParam0)
{
	Global_1898068.f_8 = iParam0;
}

var func_355(int iParam0, int iParam1)
{
	return func_630(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_356(struct<16> /*128*/ sParam0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> /*144*/ sVar0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam16))
	{
		return;
	}
	sParam0.f_0 = 0;
	sParam0.f_1 = PLAYER::PLAYER_ID();
	sParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (sParam0.f_15)
		{
			if (bParam18)
			{
				sVar0.f_12 = 255;
				sVar0.f_13 = 255;
				sVar0.f_17 = -1;
				sVar0 = { sParam0 /*16*/ };
				sVar0.f_16 = uParam16;
				sVar0.f_17 = sParam0.f_2;
				func_631(&(Global_1058888.f_43130), sVar0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &sParam0, 16, 4, &uParam16);
}

bool func_357(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_358()
{
	return Global_40.f_4283;
}

bool func_359(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_119(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_632(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

void func_360(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_161(bParam0, 0))
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
	if (!func_633())
	{
		func_634(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_635(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_635(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_384(bParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_119(bParam0);
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
	else if (!func_636(bParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_231(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_266(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_111(bParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_266(bParam0));
	}
	func_637(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> /*16*/ func_361(bool bParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_161(bParam0, 0))
	{
		return sVar0;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_62() == -1)
		{
			if (func_111(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_638(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_638(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_638(joaat("MEDICINE_ITEMS"));
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_638(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

bool func_362(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
	sVar0 = { func_488(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_639(&sVar0, func_440(0));
	}
	if (!func_489(&sVar0, &iVar18, &iVar19, 0))
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
			if (!func_233(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_274(bParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_244(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

void func_363(bool bParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_640(bParam0, iParam1);
		}
		if (func_111(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_111(bParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_410(bParam0, iParam1, 1, 0);
		}
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_365(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_641(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_642(iParam0))
	{
		return false;
	}
	if (func_643(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_644(iParam0, 1)) || func_645((1 << 15)))
	{
		if (!func_644(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_646())
	{
		return false;
	}
	return true;
}

void func_366(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_367()
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
}

bool func_368(int iParam0)
{
	return (Global_1392040 & iParam0) != 0;
}

void func_369(int iParam0)
{
	if (!func_368(iParam0))
	{
		Global_1392040 |= iParam0;
	}
}

bool func_370(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_62() == -1)
	{
		if (func_647(bParam0) && func_648(bParam0))
		{
			func_649(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_371(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_650(bParam0, iParam1);
	sVar0 = { func_153(bParam0, 0, 1) /*5*/ };
	iVar5 = func_554(bParam0, &sVar0, 0, 0);
	iVar6 = func_651(bParam0, 0);
	if ((iVar5 > 1 && !func_652()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_150(583, 1);
		}
		else
		{
			func_150(582, 0);
		}
	}
	if (func_653(bParam0, &sVar0, *iParam1, 0, 0))
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

void func_372(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_259(bParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
		case -1239610997:
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
		case -873135685:
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
		case 10252101:
		case 24248412:
		case joaat("CI_TAG_PAPER_NEWSPAPER"):
		case 632545869:
		case joaat("CI_TAG_PAPER_W10_16_H15_24"):
		case joaat("CI_TAG_PAPER_D2_H32_ROLLED"):
		case joaat("CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL"):
		case joaat("CI_TAG_PAPER_W17_78_H12_7"):
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = bParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_373(bool bParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	return func_374(bParam0) != 0;
}

int func_374(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_654())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (bParam0 == func_655(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_375(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_654())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_375(iVar0))
		{
			if (func_257(func_655(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_377(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_656(48);
	func_657(0, -1);
}

int func_378(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_379(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_380(int iParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	return func_296(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_381(int iParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	if (!func_344(iParam0))
	{
		return false;
	}
	return func_345(Global_1347702[iParam0 /*49*/].f_15);
}

int func_382()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_257(func_658(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_383(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

bool func_384(bool bParam0, int iParam1)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_385(int iParam0)
{
	if (!func_659(iParam0))
	{
		return false;
	}
	return func_660(iParam0);
}

void func_386(int iParam0)
{
	if (!func_659(iParam0))
	{
		return;
	}
	func_661(iParam0);
	func_662(iParam0);
}

bool func_387(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_161(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_663(bVar0) || func_664(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_388(bool bParam0, bool bParam1)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_389(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_665(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_390(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		sVar0 = { func_153(bParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_666((398 + iVar28), 1);
			if (func_442(bParam0, &sVar0, iVar5, 0))
			{
				if (func_443(bParam0, &sVar6, iVar5))
				{
					sVar29 = { func_154(bParam0, sVar0, iVar5, 0) /*4*/ };
					func_274(bParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_156(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return false;
					}
					func_391(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_667(bParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return true;
			}
		}
	}
}

bool func_391(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_393(bParam0))
	{
		return false;
	}
	if (!func_156(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, bParam0, iParam1, iParam2);
	return true;
}

bool func_392(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;
	bool bVar8;

	bVar0 = func_388(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_62() == -1)
		{
			func_389(bVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_668(bVar0);
			}
		}
		if (!func_653(bParam0, &uVar1, 1, 0, 0))
		{
			func_649(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_669(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_390(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_390(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_LASSO"))
			{
				func_390(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_670())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_671(bVar0))
				{
					func_390(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_390(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_672(Global_35, 2, 0, 1);
				if ((((func_665(bVar7) && !Global_43891) && bVar7 != bVar0) && !func_385(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, bVar7);
				}
				bVar8 = true;
				if (func_665(bVar7) && func_385(24))
				{
					if (!func_390(bVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_390(bVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_390(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_150(480, 1);
	}
	return true;
}

bool func_393(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_394(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_393(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_665(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_257(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_428(func_673(bParam0), func_266(bParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_62() == -1)
		{
			if (func_296(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_150(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_156(0))
	{
		if (func_391(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_433(bParam0, *iParam1, iParam2);
	}
	return false;
}

void func_395(bool bParam0)
{
	var uVar0;

	if ((bParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_674()) || bParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_675(Global_35, bParam0, &uVar0))
		{
			func_130(PLAYER::PLAYER_PED_ID(), bParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_419();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_419();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_419();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_417();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_415();
			break;
	}
}

void func_396(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_415();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_416();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_417();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_418();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 += 0.15f;
			Global_40.f_11095.f_50 += 0.15f;
			Global_40.f_11095.f_51 += 0.15f;
			func_419();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_676();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_677();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_397(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_398(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> /*16*/ func_399(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_400(bool bParam0)
{
	bool bVar0;

	bVar0 = func_111(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_678() < 3)
	{
		if (bVar0)
		{
			if (func_680(func_679(bParam0), bParam0))
			{
				func_428(79, func_266(func_679(bParam0)), 1);
			}
			else
			{
				func_428(78, func_266(func_679(bParam0)), 1);
			}
		}
		else
		{
			func_428(80, func_266(func_681(bParam0)), 1);
		}
	}
}

bool func_401()
{
	if (((((func_682(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_682(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_682(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_682(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_682(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_682(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_402(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_683(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_684(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_685(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_403(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_284(51, 0, 0, 0, 0, -1, 0);
			func_286((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_284(51, 0, 0, 0, 0, -1, 0);
			func_286((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_285(39, 0, 0, 0, 0, 0, 1, 0);
			func_284(39, 0, 0, 0, 0, -1, 0);
			func_289(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_285(41, 0, 0, 0, 0, 0, 1, 0);
			func_284(41, 0, 0, 0, 0, -1, 0);
			func_292(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_285(49, 0, 0, 0, 0, 0, 1, 0);
			func_284(49, 0, 0, 0, 0, -1, 0);
			func_295(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_686(1), 0, -1, 0);
			func_687(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_686(2), 0, -1, 0);
			func_687(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_686(4), 0, -1, 0);
			func_687(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_686(8), 0, -1, 0);
			func_687(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_686(16), 0, -1, 0);
			func_687(16);
			break;
	}
}

void func_404(bool bParam0)
{
	if (func_688() == 1)
	{
		if (func_281(39))
		{
			func_150(342, 0);
		}
		else
		{
			func_150(343, 0);
			func_289(1);
		}
	}
	if (func_688() >= 30)
	{
		func_150(344, 0);
	}
	func_285(39, 0, 0, 0, 0, 0, -1, 0);
	func_284(39, 0, 0, func_688(), 30, 1, 0);
}

void func_405(bool bParam0)
{
	if (func_689() == 1)
	{
		if (func_281(49))
		{
			func_150(409, 0);
		}
		else
		{
			func_150(410, 0);
			func_295(1);
		}
	}
	if (func_689() >= 10)
	{
		func_150(411, 0);
	}
	func_285(49, 0, 0, 0, 0, 0, -1, 0);
	func_284(49, 0, 0, func_689(), 10, 1, 0);
}

void func_406(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_150(437, 0);
			func_150(440, 0);
			func_690(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_573(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_286(1);
			func_691(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_690(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_573(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_286(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_690(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_573(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_286(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_690(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_573(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_286((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_150(438, 0);
			func_690(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_573(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_286((1 << 15));
			break;
		default:
			func_150(439, 0);
			break;
	}
}

void func_407()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_408(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_62() == -1)
	{
		if (!func_281(43))
		{
			if (bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_150(348, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_150(350, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_150(352, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_150(400, 0);
			}
		}
		else if (func_111(bParam0, 412399755))
		{
			func_692(joaat("EXOTIC_STAGE_01"));
			if (func_693() == 0)
			{
				func_657(0, 10);
				iVar1 = func_694(bParam0, iParam1, 1);
				if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_695(bParam0) < func_696(bParam0))
					{
						func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_281(44))
		{
			if (bParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_150(354, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_150(399, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_150(401, 0);
			}
		}
		else if (func_111(bParam0, 709057512))
		{
			func_692(joaat("EXOTIC_STAGE_02"));
			if (func_693() == 1)
			{
				func_657(0, 10);
				iVar1 = func_694(bParam0, iParam1, 2);
				if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_695(bParam0) < func_696(bParam0))
					{
						func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_281(45))
		{
			if (bParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_150(359, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_150(394, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_150(395, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_150(398, 0);
			}
		}
		else if (func_111(bParam0, -1478961327))
		{
			func_692(joaat("EXOTIC_STAGE_03"));
			if (func_693() == 2)
			{
				func_657(0, 10);
				iVar1 = func_694(bParam0, iParam1, 4);
				if (bParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_697(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_698(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_656(48);
					}
					if (func_695(bParam0) < func_696(bParam0))
					{
						func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_695(bParam0) < func_696(bParam0))
					{
						func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_281(46))
		{
			if (bParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_150(356, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_150(402, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_150(404, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_150(406, 0);
			}
		}
		else if (func_111(bParam0, -1238404098))
		{
			func_692(joaat("EXOTIC_STAGE_04"));
			if (func_693() == 3)
			{
				func_657(0, 10);
				iVar1 = func_694(bParam0, iParam1, 8);
				if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_695(bParam0) < func_696(bParam0))
					{
						func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_281(47))
		{
			if (bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_150(396, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_150(397, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_150(405, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_150(403, 0);
			}
		}
		else if (func_111(bParam0, 1160548794))
		{
			func_692(joaat("EXOTIC_STAGE_05"));
			if (func_693() == 4)
			{
				func_657(0, 10);
				iVar1 = func_694(bParam0, iParam1, 16);
				if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_695(bParam0) < func_696(bParam0))
					{
						func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_409(bool bParam0)
{
	int iVar0;

	if (bParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_697(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_698(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_656(48);
		}
	}
}

void func_410(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_257(func_699(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_700(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_701(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_411(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_62() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_402(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_402(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_402(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_402(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_402(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_402(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_402(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_402(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_402(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_402(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_402(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_402(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_402(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_702())
			{
				func_402(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_402(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_402(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_402(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_402(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_402(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_402(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_402(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_402(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_412(bool bParam0)
{
	if (func_281(41))
	{
		func_150(363, 0);
	}
	else
	{
		func_150(362, 0);
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_01"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_02"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_03"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_04"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_05"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_06"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_07"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_08"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_09"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_10"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_11"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_12"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_13"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_657(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_703(joaat("LEGENDARY_FISH_14"));
			func_704(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_705(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_413(bool bParam0, int iParam1)
{
	var uVar0;

	func_632(bParam0, iParam1, &uVar0);
}

bool func_414(bool bParam0, bool bParam1)
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
	*bParam0 = 0;
	iVar18 = func_672(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_672(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_245("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&sVar3, iVar2, iVar0, iVar1))
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
								*bParam0 = sVar3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_244(iVar0);
						if (*bParam0 != 0)
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

void func_415()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_416()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_417()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_418()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_419()
{
	func_706();
	func_707();
	func_708();
}

void func_420(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	Vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_421(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_570(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_422(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_423(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_424(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_425(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_426(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_427(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

void func_428(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_364(iParam0, &iVar0, &iVar1);
	if (!func_365(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_644(iParam0, (1 << 10)))
	{
		return;
	}
	func_366(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_429(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_364(iParam0, &iVar0, &iVar1);
	if (!func_365(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_644(iParam0, (1 << 10)))
	{
		return;
	}
	func_366(iVar0, iVar1);
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

bool func_430()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_654())
	{
		return func_431();
	}
	iVar4 = (func_654() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_654())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_709(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_655(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return false;
}

bool func_431()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_654());
	return func_655(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_432(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_433(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	sVar0 = { func_153(bParam0, 0, 1) /*5*/ };
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_710(bParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_434(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_62() != -1)
	{
		return;
	}
	switch (func_121(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (bParam0 == joaat("KIT_BANDANA") && func_605(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_127(32, bParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (bParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || bParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_127(32, bParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_126(bParam0);
			if (func_588(iVar0))
			{
				func_711(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_127(30, bParam0, 0, 0, 0);
			}
			if (func_610() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_610() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_127(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_610() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_127(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_329(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_712(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &bVar1))
				{
					func_127(33, bVar1, 0, 0, 0);
				}
			}
			func_127(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == joaat("CLOTHING_SP_OFFHAND_000") || bParam0 == -1515874150) || bParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_713(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_130(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_386(24);
		if (func_414(&bVar2, 0))
		{
			func_390(bVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_435(bool bParam0)
{
	if (func_111(bParam0, 943695443))
	{
		func_714(0, bParam0);
	}
	else if (func_111(bParam0, -2096528786))
	{
		func_714(1, bParam0);
	}
	else if (func_111(bParam0, -1094167013))
	{
		func_714(2, bParam0);
	}
	else if (func_111(bParam0, 1936654645))
	{
		func_714(3, bParam0);
	}
	else if (func_111(bParam0, 1306489306))
	{
		func_714(4, bParam0);
	}
	else if (func_111(bParam0, 435762317))
	{
		func_714(5, bParam0);
	}
	else if (func_111(bParam0, 1259363210))
	{
		func_714(6, bParam0);
	}
	else if (func_111(bParam0, 881398259))
	{
		func_714(7, bParam0);
	}
	else if (func_111(bParam0, -541549214))
	{
		func_714(8, bParam0);
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_714(-1, bParam0);
	}
}

int func_436(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_715(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_716(iParam0, &sVar4, &uVar0, iParam1);
}

void func_437(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_62() == -1)
			{
				if (func_296(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_150(109, 1);
				}
			}
			break;
	}
}

void func_438(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_718(func_717(0));
	func_637(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_719(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

struct<4> /*32*/ func_439(bool bParam0)
{
	return func_154(joaat("CHARACTER"), func_720(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_440(bool bParam0)
{
	int iVar0;

	iVar0 = func_199(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_154(joaat("CARRIED_WEAPONS"), func_439(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_154(joaat("CARRIED_WEAPONS"), func_439(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_154(joaat("CARRIED_WEAPONS"), func_439(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_441(bool bParam0, bool bParam1)
{
	if (func_121(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_385(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_442(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_340(bParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_443(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_721(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_444(bool bParam0)
{
	int iVar0;

	iVar0 = func_199(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_154(joaat("EMOTE_ITEM"), func_439(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_154(joaat("EMOTE_ITEM"), func_439(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_445(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_121(bParam0);
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

bool func_446(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_199(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_447(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar15;
	struct<29> /*232*/ sVar16;
	struct<18> /*144*/ sVar45;
	struct<17> /*136*/ sVar63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return iVar0;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	if (!func_446(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_119(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_722(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_723(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_724(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_725(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_726(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_727(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_448()
{
	if ((Global_1935689.f_9445 != (Global_1935689.f_19.f_203 - 1) || func_166(func_165(0), Global_1935689.f_9440, 0) > 0) || Global_1935689.f_9445 == 15)
	{
		return true;
	}
	return false;
}

int func_449(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, func_224(bParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_161(uVar0[iVar16], 0) && !func_111(uVar0[iVar16], joaat("CI_TAG_ITEM_ANIMAL_CARCASS"))) && !uVar0[iVar16] == bParam2)
		{
			func_152(uVar0[iVar16], 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_157(func_156(0), 1, 0);
	return iVar17;
}

struct<10> /*80*/ func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> /*80*/ sVar0;

	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_3 = -1;
	sVar0.f_4 = -1;
	sVar0.f_5 = -1;
	sVar0.f_6 = -1;
	sVar0.f_7 = -1;
	sVar0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
	{
		sVar0.f_0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
	{
		sVar0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		sVar0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		sVar0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		sVar0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		sVar0.f_7 = iParam8;
	}
	return sVar0;
}

bool func_451(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_452(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_453(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_454(int iParam0)
{
	if (func_368(iParam0))
	{
		Global_1392040 -= (Global_1392040 & iParam0);
	}
}

int func_455(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iParam1 = func_728(PLAYER::PLAYER_PED_ID(), bParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_165(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_456(&iVar0, bParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_456(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	iVar1 = func_462(iVar0, bParam1);
	if (func_729(*iParam0, bParam1, *iParam2, bParam3, iParam4))
	{
		sVar2 = { func_361(bParam1) /*2*/ };
		if (STATS::STAT_ID_IS_VALID(&sVar2))
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar2, *iParam2);
		}
		if (func_730(bParam1))
		{
			func_731(*iParam0, bParam1, *iParam2);
		}
		else
		{
			func_731(*iParam0, bParam1, *iParam2);
			func_728(*iParam0, bParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_462(iVar0, bParam1));
		*iParam2 -= iVar4;
		return 1;
	}
	return 0;
}

int func_457(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_264(bParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_149(bParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_732(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_123("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_458(int iParam0)
{
	int iVar0;

	if (func_62() == -1)
	{
		if (Global_1914319.f_17370 | iParam0 || Global_1914319.f_16855 == 2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (iVar0 != func_85(7))
			{
				return true;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_85(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(func_459());
		if (iVar0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

int func_459()
{
	return PLAYER::GET_PLAYER_PED(255);
}

bool func_460()
{
	if ((func_272(Global_1935689.f_9436, 1) || func_272(Global_1935689.f_9436, 2)) || func_272(Global_1935689.f_9436, 4))
	{
		return true;
	}
	return false;
}

int func_461(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_264(bParam0, bParam1, 0);
	if (func_272(Global_1935689.f_9436, 1))
	{
		iVar0 = func_85(func_241(0));
		iVar1 += func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), bParam0);
	}
	if (func_272(Global_1935689.f_9436, 2))
	{
		iVar0 = func_85(func_241(1));
		iVar1 += func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), bParam0);
	}
	if (func_272(Global_1935689.f_9436, 4))
	{
		iVar0 = func_85(func_241(6));
		iVar1 += func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), bParam0);
	}
	return iVar1;
}

int func_462(int iParam0, bool bParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_161(bParam1, 0))
	{
		return 0;
	}
	sVar0 = { func_733(iParam0, bParam1) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &sVar0, false);
	return iVar4;
}

int func_463(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_464()
{
	return (Global_1894899 & 4) != 0;
}

bool func_465()
{
	return func_734((1 << 9));
}

int func_466(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_735(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &sVar0);
		if ((bParam3 || sVar0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == joaat("LAW_DISPATCH_PENDING"))
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &sVar18))
		{
			if (sVar18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(sVar18.f_0, sVar18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iParam0, false, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_467(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

bool func_468()
{
	return Global_1310750.f_16077 != 0;
}

bool func_469(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_470(int iParam0, bool bParam1, bool bParam2)
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
		if (func_736())
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
		iVar0 = func_737(Global_1898164.f_1[0 /*5*/]);
		if (func_344(iVar0) && func_738(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_568(Global_1898164.f_1[0 /*5*/]))
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

bool func_471(int iParam0)
{
	return (Global_1914296.f_22 & iParam0) != 0;
}

int func_472()
{
	return Global_1897952.f_41;
}

bool func_473(int iParam0)
{
	return (Global_40.f_9419 & iParam0) != 0;
}

bool func_474(int iParam0)
{
	if (!func_357(iParam0))
	{
		return false;
	}
	return func_739(iParam0, (1 << 25));
}

bool func_475()
{
	return ((Global_1894899 & 1) != 0 && func_144() != -1);
}

int func_476(int iParam0)
{
	if (!func_357(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_477(int iParam0)
{
	if (func_476(iParam0) != 5)
	{
		return false;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
		default:
			break;
	}
	return false;
}

bool func_478()
{
	int iVar0;

	iVar0 = func_144();
	switch (iVar0)
	{
		case 3:
			return true;
		case 51:
			return true;
		case 41:
			return true;
		case 108:
			return true;
		case 44:
			return true;
		case 84:
			return true;
		case 103:
			return true;
		case 53:
			return true;
		case 73:
			return true;
		case 18:
			return true;
		case 0:
			return true;
		case 106:
			return true;
		case 47:
			return true;
		case 63:
			return true;
		case 24:
			return true;
		case 46:
			return true;
		case 107:
			return true;
		case 80:
			return true;
		case 85:
			return true;
		case 7:
			return true;
		case 82:
			return true;
		case 110:
			return true;
		case 120:
			return true;
		default:
			break;
	}
	return false;
}

bool func_479()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	iVar0 = func_144();
	vVar2 = { -3685.423f, -2597.155f, -10.0f /*3*/ };
	vVar5 = { 0.0f, 0.0f, -24.7897f /*3*/ };
	vVar8 = { 116.6365f, 76.68949f, 15.0f /*3*/ };
	if (iVar0 != 120)
	{
		return false;
	}
	else
	{
		iVar1 = VOLUME::CREATE_VOLUME_CYLINDER(vVar2, vVar5, vVar8);
		if (func_740(Global_35, iVar1, 1, 0))
		{
			func_741(iVar1);
			return true;
		}
		else
		{
			func_741(iVar1);
			return false;
		}
	}
	return false;
}

bool func_480(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_742(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_481(Vector3 vParam0, float fParam3)
{
	if (func_743(vParam0, fParam3))
	{
		return true;
	}
	if (func_744(vParam0, fParam3))
	{
		return true;
	}
	return false;
}

int func_482()
{
	return -1;
}

int func_483(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_745(iVar0))
		{
			fVar3 = func_746(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_484(int iParam0)
{
	return func_272(Global_1935496.f_7, iParam0);
}

int func_485(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_486(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_747();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

struct<18> /*144*/ func_488(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_489(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_199(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_490(bool bParam0)
{
	int iVar0;

	iVar0 = func_119(bParam0);
	if ((iVar0 == joaat("WEAPON") && bParam0 != joaat("WEAPON_KIT_BINOCULARS")) && bParam0 != joaat("WEAPON_KIT_CAMERA"))
	{
		return false;
	}
	if (iVar0 == joaat("MONEY") && bParam0 != joaat("MONEY_LOANSHARK_GWEN_DEBT"))
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (func_121(bParam0))
			{
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					if (bParam0 == joaat("KIT_MASK_GREY_CLOTH"))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					return true;
				default:
					return false;
			}
			break;
	}
	if (func_121(bParam0) == joaat("CI_CATEGORY_CURRENCY"))
	{
		return false;
	}
	return true;
}

void func_491(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, iParam1);
	}
	else
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, iParam1, 0);
	}
}

bool func_492(bool bParam0)
{
	return func_748(func_121(bParam0), bParam0);
}

void func_493(int iParam0, bool bParam1)
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
	sVar0.f_4 = joaat("CI_CATEGORY_WATCH");
	func_749(iParam0, sVar0, bParam1, 0);
}

void func_494(int iParam0, bool bParam1)
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
	sVar0.f_4 = joaat("CI_CATEGORY_CAMP");
	func_749(iParam0, sVar0, bParam1, 0);
}

void func_495(int iParam0, bool bParam1)
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
	sVar0.f_1 = joaat("SLOTID_WARDROBE_NECKWEAR_1");
	sVar0.f_4 = joaat("CI_CATEGORY_WARDROBE_MASK");
	func_749(iParam0, sVar0, bParam1, 0);
}

void func_496(int iParam0, bool bParam1)
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
	sVar0.f_4 = joaat("CI_CATEGORY_WARDROBE_BIG_MASK");
	func_749(iParam0, sVar0, bParam1, 0);
}

void func_497(int iParam0, bool bParam1)
{
	if (bParam1->f_1 == 1)
	{
		INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, *bParam1);
	}
	else
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, *bParam1, 0);
	}
}

bool func_498(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 19)
	{
		return false;
	}
	if (Global_1935496.f_72[iParam0 /*2*/] == 0)
	{
		return false;
	}
	Global_1935496.f_72[iParam0 /*2*/] = 0;
	Global_1935496.f_72[iParam0 /*2*/].f_1 = -1;
	return true;
}

void func_499()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_500(int iParam0, var uParam1)
{
	if (!func_750(iParam0))
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

int func_501(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_502(int iParam0, int iParam1, float fParam2)
{
	if (!func_226(iParam1))
	{
		return false;
	}
	if (func_752(iParam0, func_751(iParam1), 1) < fParam2)
	{
		return true;
	}
	return false;
}

void func_503()
{
	int iVar0;

	iVar0 = func_507();
	if (func_507() == joaat("SATCHEL_CATEGORY_INVALID"))
	{
		iVar0 = 0;
	}
	if (func_27(0))
	{
		if (func_251() == 2)
		{
			iVar0 = joaat("SATCHEL_CATEGORY_SEND");
		}
		else
		{
			iVar0 = joaat("SATCHEL_CATEGORY_SELL");
		}
	}
	if (func_68())
	{
		iVar0 = joaat("SATCHEL_CATEGORY_DONATIONS");
	}
	func_70(iVar0);
}

void func_504(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(iParam0, Global_1935689.f_9416);
	bVar1 = func_240(iParam1);
	iVar2 = iParam1;
	iVar3 = uVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9452, Global_1935689.f_9416);
		Global_1935689.f_9417 = Global_1935689.f_9416;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, iVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1935689.f_9418[Global_1935689.f_9416] = iParam1;
	Global_1935689.f_9416++;
}

void func_505(int iParam0)
{
	if (func_84())
	{
		func_504(iParam0, joaat("SATCHEL_CATEGORY_HORSE"), "Horse", joaat("SATCHEL_NAV_HORSE"));
	}
}

void func_506(int iParam0)
{
	if (func_27(0))
	{
		if (func_251() == 2)
		{
			func_504(iParam0, joaat("SATCHEL_CATEGORY_SEND"), "Send", joaat("SATCHEL_NAV_SEND"));
		}
		else
		{
			func_504(iParam0, joaat("SATCHEL_CATEGORY_SELL"), "Sell", joaat("SATCHEL_NAV_SELL"));
		}
	}
	else if (func_68())
	{
		func_504(iParam0, joaat("SATCHEL_CATEGORY_DONATIONS"), "Donations", joaat("SATCHEL_NAV_DONATE"));
	}
}

int func_507()
{
	return Global_1935689.f_18;
}

bool func_508(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (bParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_509(bool bParam0)
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}
}

bool func_510(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &sVar0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = sVar0.f_3;
	iVar47 = 0;
	while (iVar47 < sVar0.f_3)
	{
		if (!bParam5)
		{
		}
		*(uParam2[iVar47 /*2*/]) = { sVar0.f_4[iVar47 /*2*/] /*2*/ };
		iVar47++;
	}
	if (bParam4)
	{
		func_753(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return joaat("SLOTID_CARAVAN_UPGRADE");
		default:
			break;
	}
	return joaat("SLOTID_SATCHEL");
}

int func_512(bool bParam0, var uParam1)
{
	return func_754(Global_35, bParam0, uParam1);
}

int func_513(bool bParam0, var uParam1)
{
	int iVar0;

	if (func_62() == -1)
	{
		iVar0 = func_85(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	return func_754(iVar0, bParam0, uParam1);
}

void func_514(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_515(int iParam0, bool bParam1, float* fParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	int iVar6;

	*fParam2 = 1.0f;
	if (!func_226(iParam0))
	{
		return false;
	}
	if (!func_161(bParam1, 0))
	{
		return false;
	}
	if (!func_500(22, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = -1023752283;
	sVar0.f_3 = bParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		iVar6 = func_755(iParam0);
		func_756(iVar6, &uVar5);
		sVar0.f_2 = uVar5;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam2, &sVar0);
		if (*fParam2 < 1.0f)
		{
			*fParam2 = 1.0f;
		}
		return true;
	}
	return false;
}

int func_516(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> /*16*/ sVar0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<18> /*144*/ sVar35;
	int iVar53;
	struct<9> /*72*/ sVar54;
	int iVar64;
	int iVar65;
	int iVar66;
	bool bVar67;
	int iVar68;

	if (func_111(bParam0, -5284486))
	{
		sVar35 = -1;
		sVar35.f_1 = -1;
		sVar35.f_2 = -1;
		sVar35.f_3 = -1;
		sVar35.f_4 = -1;
		sVar35.f_5 = -1;
		sVar35.f_6 = -1;
		sVar35.f_7 = -1;
		sVar35.f_8 = -1;
		sVar35.f_13 = -1;
		sVar35.f_14 = -1;
		sVar35.f_15 = -1;
		sVar35.f_16 = -1;
		sVar35.f_17 = -1;
		sVar35.f_0 = bParam0;
		iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &sVar35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
		}
		iVar53 = 0;
		if (func_510(bParam0, iParam1, &sVar0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (sVar0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || sVar0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar53 += sVar0[iVar32 /*2*/].f_1;
					Jump @253; // curOff = 225
				}
				else if (sVar0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		sVar54 = -1;
		sVar54.f_1 = -1;
		sVar54.f_2 = -1;
		sVar54.f_3 = -1;
		sVar54.f_4 = -1;
		sVar54.f_5 = -1;
		sVar54.f_6 = -1;
		sVar54.f_7 = -1;
		sVar54.f_8 = -1;
		iVar68 = func_259(bParam0, 862142561);
		if (iVar68 != 0)
		{
			sVar54.f_8 = iVar68;
			iVar65 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&sVar54, &iVar64, 1);
			if (iVar65 != -1)
			{
				iVar66 = 0;
				while (iVar66 < iVar64)
				{
					bVar67 = func_452(iVar66, iVar65);
					if (func_161(bVar67, 0) && bVar67 != bParam0)
					{
						if (bParam4)
						{
							iVar53 += func_516(bVar67, joaat("COST_SHOP_DEFAULT"), 1, 0, 0);
						}
						else
						{
							sVar35.f_0 = bVar67;
							iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &sVar35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar53 += func_516(bVar67, joaat("COST_SHOP_DEFAULT"), 1, 0, 0);
								}
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
							}
						}
					}
					iVar66++;
				}
				ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iVar65);
			}
		}
		return iVar53;
	}
	if (!func_510(bParam0, iParam1, &sVar0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (sVar0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || sVar0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return sVar0[iVar32 /*2*/].f_1;
		}
		else if (sVar0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_517(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar25;

	*uParam3 = 0;
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	sVar0.f_4 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(bParam0, iParam1, &sVar0))
	{
		return false;
	}
	if (!bParam4)
	{
	}
	*uParam3 = sVar0.f_3;
	if (*uParam2 < sVar0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < sVar0.f_3)
	{
		if (!bParam4)
		{
		}
		*(uParam2[iVar25 /*2*/]) = { sVar0.f_4[iVar25 /*2*/] /*2*/ };
		iVar25++;
	}
	return true;
}

bool func_518(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLOTID_WATCH"):
		case joaat("SLOTID_SATCHEL"):
			return true;
	}
	return false;
}

bool func_519(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == joaat("SATCHEL_CATEGORY_DONATIONS")) || bParam2) || func_27(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_161(bParam0, 0) || bParam0 == joaat("CUSTOM_SATCHEL")) || bParam0 == joaat("KIT_WARDROBE"))
		{
			return false;
		}
	}
	if (!bVar0 && func_757(bParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("SATCHEL_CATEGORY_HORSE"):
		case 0:
			if (!func_27(0))
			{
				if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return true;
				}
				if ((((((((((func_519(bParam0, joaat("SATCHEL_CATEGORY_MATERIALS"), 1) || func_519(bParam0, joaat("SATCHEL_CATEGORY_INGREDIENTS"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_REMEDIES"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_PROVISIONS"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_VALUABLES"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_KIT"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_DOCUMENTS"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_DONATIONS"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_SEND"), 1)) || func_519(bParam0, joaat("SATCHEL_CATEGORY_SELL"), 1)) || func_758(bParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case joaat("SATCHEL_CATEGORY_MATERIALS"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_MATERIAL"));
		case joaat("SATCHEL_CATEGORY_INGREDIENTS"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_INGREDIENT"));
		case joaat("SATCHEL_CATEGORY_REMEDIES"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_REMEDY"));
		case joaat("SATCHEL_CATEGORY_PROVISIONS"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_PROVISION"));
		case joaat("SATCHEL_CATEGORY_VALUABLES"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_VALUABLE"));
		case joaat("SATCHEL_CATEGORY_KIT"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_KIT"));
		case joaat("SATCHEL_CATEGORY_DOCUMENTS"):
			return func_111(bParam0, joaat("CI_TAG_CATEGORY_DOCUMENT"));
		case joaat("SATCHEL_CATEGORY_DONATIONS"):
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
			{
				return func_759(bParam0, iParam1);
			}
			else if (func_259(bParam0, joaat("TAG_INTERACTION_TYPE")) == joaat("CI_TAG_POCKET_WATCH") && bParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return true;
			}
			else
			{
				return func_111(bParam0, joaat("CI_TAG_CATEGORY_VALUABLE"));
			}
			break;
		case joaat("SATCHEL_CATEGORY_SEND"):
			return func_384(bParam0, (1 << 23));
		case joaat("SATCHEL_CATEGORY_SELL"):
			if (func_269(bParam0, Global_1914319.f_16855.f_1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_520(bool bParam0)
{
	if (func_26())
	{
		return func_519(bParam0, joaat("SATCHEL_CATEGORY_DONATIONS"), 0);
	}
	else if (func_23())
	{
		if (func_111(bParam0, 96549393))
		{
			return false;
		}
		if (func_111(bParam0, joaat("CI_TAG_CATEGORY_VALUABLE")) || func_259(bParam0, joaat("TAG_INTERACTION_TYPE")) == joaat("CI_TAG_POCKET_WATCH"))
		{
			return true;
		}
		if (func_111(bParam0, joaat("CI_TAG_ITEM_VALUABLE")))
		{
			return true;
		}
		return false;
	}
	else if (func_24())
	{
		if ((((((((func_111(bParam0, joaat("CI_TAG_ITEM_TOBACCO")) || func_111(bParam0, joaat("CI_TAG_ITEM_REMEDY"))) || func_111(bParam0, -1919515848)) || func_111(bParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || func_111(bParam0, joaat("CI_TAG_ITEM_ALCOHOL"))) || func_111(bParam0, joaat("CI_TAG_ITEM_HERB"))) || func_111(bParam0, joaat("CI_TAG_ITEM_TONIC"))) || func_111(bParam0, joaat("CI_TAG_APPLY_LOTION"))) || func_111(bParam0, joaat("CI_TAG_APPLY_POMADE")))
		{
			return false;
		}
		if (((!func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) && !func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH"))) && !func_111(bParam0, joaat("CI_TAG_ITEM_PROVISION"))) && !func_111(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CARCASS")))
		{
			return false;
		}
		if (func_760(bParam0) == 0)
		{
			return false;
		}
	}
	if (func_27(0))
	{
		if (Global_1914319.f_16855 == 2)
		{
			return true;
		}
		else if (!func_269(bParam0, Global_1914319.f_16855.f_1))
		{
			return false;
		}
	}
	else if (!func_68())
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM")))
		{
			return false;
		}
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")) || bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		if (!func_492(bParam0))
		{
			return false;
		}
	}
	if (!func_27(0))
	{
		if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(0), bParam0, func_27(0)))
		{
			return false;
		}
	}
	return true;
}

float func_521(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

Vector3 func_522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -1343.699f, 2429.397f, 307.0626f };
		case 1:
			return { -123.1805f, -28.8611f, 94.8478f };
		case 2:
			return { 667.9077f, -1252.78f, 42.9221f };
		case 3:
			return { 1880.807f, -1873.231f, 41.8094f };
		case 4:
			return { 1422.625f, -7332.473f, 80.5977f };
		case 5:
			return { 2254.96f, -758.12f, 41.75f };
		case 6:
			return { 2351.282f, 1362.077f, 104.9752f };
		case 7:
			return { -2593.21f, 453.9533f, 145.9973f };
		case 8:
			return func_761();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_523()
{
	int iVar0;

	iVar0 = func_762();
	switch (iVar0)
	{
		case 79:
			return 50.0f;
		case 58:
			return 50.0f;
		case 71:
			return 50.0f;
		case 43:
			return 50.0f;
		case 4:
			return 50.0f;
		case 9:
			return 50.0f;
		case 22:
			return 120.0f;
		case 98:
			return 60.0f;
		case 37:
			return 120.0f;
	}
	return 25.0f;
}

bool func_524(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_742(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_525(int iParam0)
{
	Vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	vVar0 = { func_522(func_358()) /*3*/ };
	fVar3 = func_523();
	if (func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
	{
		return true;
	}
	return false;
}

bool func_526(int iParam0)
{
	return iParam0 != 0;
}

void func_527(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1935689.f_19.f_2[iParam0 /*2*/].f_1 = bParam1;
	}
}

void func_528(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1935689.f_19.f_1;
	func_763(iVar0, iParam0);
	func_527(iVar0, bParam1);
	if (func_68())
	{
		if (!func_764(iVar0))
		{
			func_765(iVar0);
			return;
		}
	}
	func_766(iParam0);
}

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_514(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_767(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_530(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_768(iVar1);
		}
	}
	return iVar0;
}

int func_531(bool bParam0)
{
	bool bVar0;

	if (bParam0 != 0)
	{
		if (func_384(bParam0, (1 << 23)))
		{
			bVar0 = func_699(func_769(bParam0), 10);
			if (bVar0 != 0 && func_257(bVar0, 1, 0))
			{
				Global_1901328.f_94 = 1;
				return func_770(func_769(bParam0), bParam0);
			}
			else if (bParam0 == func_699(func_771(bParam0), 5))
			{
				if (!func_772(39))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (bParam0 == func_699(func_773(bParam0), 5))
			{
				if (!func_772(49))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (func_774(bParam0))
			{
				if (!func_772(41))
				{
					return 0;
				}
				else
				{
					return func_776(func_775(bParam0), 5, 0);
				}
			}
			else if (func_777(bParam0))
			{
				if (func_257(joaat("DOCUMENT_RARE_ORCHID_ORDER_1"), 1, 0))
				{
					if (!func_772(48))
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (func_778(bParam0))
			{
				if (!func_772(38))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (bParam0 == joaat("DOCUMENT_RARE_ORCHID_ORDER_1"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_532(int iParam0)
{
	if (func_779())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_533(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_85(func_241(0));
	iVar1 = func_85(func_241(1));
	iVar2 = func_85(func_241(6));
	if (bParam1 || func_272(Global_1935689.f_9436, 1))
	{
		func_780(&iVar0, uParam0);
	}
	if (bParam1 || func_272(Global_1935689.f_9436, 2))
	{
		func_780(&iVar1, uParam0);
	}
	if (bParam1 || func_272(Global_1935689.f_9436, 4))
	{
		func_780(&iVar2, uParam0);
	}
}

int func_534(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_85(func_241(0));
	iVar1 = func_85(func_241(1));
	iVar2 = func_85(func_241(6));
	iVar3 = 0;
	while (iVar3 < 999)
	{
		if (func_161((*uParam0)[iVar3], 0))
		{
			if (func_272(Global_1935689.f_9436, 1))
			{
				iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), (*uParam0)[iVar3], false);
			}
			if (func_272(Global_1935689.f_9436, 2))
			{
				iVar4 += INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar1), (*uParam0)[iVar3], false);
			}
			if (func_272(Global_1935689.f_9436, 4))
			{
				iVar4 += INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar2), (*uParam0)[iVar3], false);
			}
			if (bParam1 && iVar4 > 0)
			{
				func_781((*uParam0)[iVar3], iVar4, 0);
			}
			iVar5++;
		}
		iVar3++;
	}
	return iVar5;
}

void func_535(int iParam0, var uParam1, bool bParam2)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<14> /*112*/ sVar22;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
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
	sVar0.f_1 = joaat("SLOTID_SATCHEL");
	iVar18 = -1;
	iVar21 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	sVar22.f_9 = joaat("SLOTID_NONE");
	if (func_782(iVar21, &sVar0, &iVar18, &iVar19))
	{
		iVar20 = 0;
		iVar20 = 0;
		while (iVar20 < iVar19)
		{
			if (func_233(&sVar22, iVar20, iVar18, iVar19))
			{
				if (func_161(sVar22.f_4, 0) && sVar22.f_4 != joaat("CUSTOM_SATCHEL"))
				{
					*uParam1++;
					if (bParam2 && func_249(sVar22.f_4))
					{
						func_255(sVar22, 0);
					}
				}
			}
			iVar20++;
		}
		func_244(iVar18);
	}
}

int func_536(int iParam0, int iParam1)
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
		iParam1 = func_199(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_783(&uVar6, iVar0);
	func_784(&uVar6, iVar1);
	func_785(&uVar6, iVar2);
	func_786(&uVar6, iVar3);
	func_787(&uVar6, iVar4);
	func_788(&uVar6, iVar5);
	return uVar6;
}

void func_537(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;

	iVar0 = iParam1;
	while (iVar0 <= 15)
	{
		uVar1 = (*iParam0)[iVar0 /*2*/];
		uVar2 = (iParam0[iVar0 /*2*/])->f_1;
		(*iParam0)[iVar0 /*2*/] = *iParam2;
		(iParam0[iVar0 /*2*/])->f_1 = *iParam3;
		*iParam2 = uVar1;
		*iParam3 = uVar2;
		iVar0++;
	}
}

void func_538(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_781((*iParam0)[iVar0 /*2*/], func_166(func_165(0), (*iParam0)[iVar0 /*2*/], 0), 0);
		iVar0++;
	}
}

Vector3 func_539(bool bParam0)
{
	Vector3 vVar0;

	if (!func_789(bParam0, &vVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		vVar0.f_1 = joaat("INVENTORY_ITEMS");
		vVar0.x = joaat("_PLACEHOLDER");
	}
	return vVar0;
}

int func_540(int iParam0)
{
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, 1879048192))
	{
		return 0;
	}
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, (1 << 28)))
	{
		return 1;
	}
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, (1 << 29)))
	{
		return 2;
	}
	return 3;
}

void func_541(int iParam0, bool bParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9449, Global_1935689.f_9443);
	iVar1 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, iVar1, bParam1, iParam2->f_1, *iParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1935689.f_9449, Global_1935689.f_9443, iParam0);
	Global_1935689.f_9443++;
}

void func_542()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (func_62() != -1)
	{
		return;
	}
	if (func_257(joaat("KIT_CAMP"), 1, 0))
	{
		if (func_790())
		{
			iVar0 = func_199(0);
			bVar1 = INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(iVar0, joaat("KIT_CAMP"), func_27(0));
			func_149(joaat("KIT_CAMP"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
			func_152(joaat("KIT_CAMP_SIMPLE"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			Global_1935496.f_125 = 0;
			Global_1935496.f_126 = 1;
			if (bVar1)
			{
				INVENTORY::_INVENTORY_DISABLE_ITEM(iVar0, joaat("KIT_CAMP_SIMPLE"), 0);
			}
			else
			{
				INVENTORY::_INVENTORY_ENABLE_ITEM(iVar0, joaat("KIT_CAMP_SIMPLE"));
			}
		}
	}
	else if (func_257(joaat("KIT_CAMP_SIMPLE"), 1, 0))
	{
		if (!func_790())
		{
			iVar2 = func_199(0);
			bVar3 = INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(iVar2, joaat("KIT_CAMP_SIMPLE"), func_27(0));
			func_149(joaat("KIT_CAMP_SIMPLE"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
			func_152(joaat("KIT_CAMP"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			Global_1935496.f_125 = 1;
			Global_1935496.f_126 = 0;
			if (bVar3)
			{
				INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, joaat("KIT_CAMP"), 0);
			}
			else
			{
				INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, joaat("KIT_CAMP"));
			}
		}
	}
}

void func_543()
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
	sVar0.f_1 = joaat("SLOTID_WARDROBE_NECKWEAR_1");
	sVar0.f_4 = joaat("CI_CATEGORY_WARDROBE_MASK");
	func_791(&sVar0, 0, 1, 0);
}

bool func_544(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_359(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_245("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_233(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_665(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_244(iVar1);
				return true;
			}
			iVar3++;
		}
		func_244(iVar1);
	}
	return false;
}

bool func_545(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_546(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_545(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return (Global_36638[iParam0] & iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] & iParam1) != 0;
}

void func_547(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9468, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9467, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9464, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9465, !bParam0);
}

var func_548()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9468))
	{
		return Global_1935689.f_9466;
	}
	return Global_1935689.f_9463;
}

void func_549(bool bParam0)
{
	if (func_121(bParam0) == joaat("CI_CATEGORY_WATCH"))
	{
		if (bParam0 == joaat("PROVISION_RCM_POCKET_WATCH"))
		{
			func_792();
		}
		else
		{
			func_547(0);
		}
	}
	else if (func_259(bParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEEPSAKES"))
	{
		switch (bParam0)
		{
			case joaat("PROVISION_PEARSONS_NAVAL_COMPASS"):
			case joaat("PROVISION_MOLLYS_POCKET_MIRROR"):
			case joaat("PROVISION_BEAUS_GIFT_1"):
				func_547(0);
				break;
			default:
				func_792();
				break;
		}
	}
	else if ((((((((((((func_111(bParam0, joaat("CI_TAG_ITEM_ANIMAL_FEATHER")) || func_111(bParam0, joaat("CI_TAG_SHOP_ANIMAL_PELT"))) || func_111(bParam0, joaat("CI_TAG_SHOP_ANIMAL_LEGENDARY"))) || func_111(bParam0, joaat("CI_TAG_ITEM_VALUABLE"))) || func_111(bParam0, joaat("CI_TAG_ITEM_TRINKET"))) || func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_BAIT"))) || func_111(bParam0, joaat("CI_TAG_ITEM_FISHING_LURE"))) || func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM"))) || func_111(bParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER"))) || func_259(bParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEYCHAIN")) || (func_220(bParam0) && !func_111(bParam0, joaat("CI_TAG_ITEM_CAN_BREAKDOWN")))) || bParam0 == joaat("CONSUMABLE_COFFEE_GNDS_REG")) || bParam0 == joaat("KIT_GUN_OIL"))
	{
		func_792();
	}
	else if ((func_121(bParam0) == joaat("CI_CATEGORY_DOCUMENTS") && func_259(bParam0, joaat("TAG_INTERACTION_TYPE")) == 0) && !bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		func_792();
	}
	else if (func_220(bParam0))
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_CAN_BREAKDOWN")))
		{
			func_547(1);
		}
		else
		{
			func_547(1);
		}
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_CAN_BREAKDOWN")) || func_159(bParam0, 1, 0))
	{
		func_547(1);
	}
	else
	{
		func_547(0);
	}
}

int func_550(bool bParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9468))
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_CAN_BREAKDOWN")))
		{
			return joaat("SATCHEL_PROMPT_BREAKDOWN");
		}
		else if (func_159(bParam0, 1, 0))
		{
			return joaat("SATCHEL_PROMPT_COOK");
		}
	}
	else if (func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM")))
		{
			return joaat("SATCHEL_PROMPT_USE");
		}
		switch (func_259(bParam0, joaat("TAG_INTERACTION_TYPE")))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return joaat("SATCHEL_PROMPT_DRINK");
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return joaat("SATCHEL_PROMPT_EAT");
			case -1919515848:
			case -262371497:
			case joaat("CI_TAG_APPLY_POMADE"):
			case joaat("CI_TAG_APPLY_LOTION"):
			case joaat("CI_TAG_SMOKING_CIGARETTE"):
				return joaat("SATCHEL_PROMPT_USE");
		}
	}
	else if (func_259(bParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_WATCHES"))
	{
		return joaat("SATCHEL_PROMPT_EQUIP");
	}
	return joaat("SATCHEL_PROMPT_USE");
}

void func_551(bool bParam0, var uParam1)
{
	bool bVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	bVar0 = true;
	switch (func_121(bParam0))
	{
		case joaat("CI_CATEGORY_INGREDIENT"):
		case joaat("CI_CATEGORY_MATERIALS"):
		case joaat("CI_CATEGORY_VALUABLE"):
			if (((!func_111(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")) && !func_111(bParam0, joaat("CI_TAG_CATEGORY_DOCUMENT"))) && !func_259(bParam0, joaat("TAG_INTERACTION_TYPE")) == joaat("CI_TAG_POCKET_WATCH")) && !func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
			{
				bVar0 = false;
			}
			break;
		case joaat("CI_CATEGORY_KIT"):
			if (bParam0 == joaat("PROVISION_LIGHTNING_CONDUCTOR") || bParam0 == joaat("KIT_GUN_OIL"))
			{
				bVar0 = false;
			}
			break;
	}
	if (func_119(bParam0) == joaat("MONEY"))
	{
		bVar0 = false;
	}
	if (func_259(bParam0, joaat("TAG_INTERACTION_TYPE")) == joaat("CI_TAG_POCKET_WATCH"))
	{
		sVar1.f_9 = joaat("SLOTID_NONE");
		sVar15 = { func_153(bParam0, 0, 0) /*5*/ };
		if (func_793(sVar15, joaat("SLOTID_WATCH"), &sVar1, 0))
		{
			if (sVar1.f_4 == bParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_CAN_BREAKDOWN")))
	{
		bVar0 = func_156(0);
		if (!bVar0)
		{
		}
	}
	else if (func_159(bParam0, 1, 0))
	{
		if (func_62() == 0 || !func_794())
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_562(), bVar0);
}

bool func_552()
{
	return Global_1935689.f_12;
}

int func_553(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_488(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_639(&sVar0, func_440(0));
	}
	if (!func_489(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_244(iVar18);
	return iVar19;
}

int func_554(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	if (!func_156(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_795(bParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_199(bParam3), bParam0);
}

bool func_555(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return true;
		default:
			return false;
	}
	return false;
}

int func_556(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

int func_557(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		bVar2 = func_796(iVar1);
		iVar0 += func_797(bVar2, bParam0);
		iVar1++;
	}
	return iVar0;
}

bool func_558(bool bParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar0 = iVar3;
		bVar1 = func_796(iVar0);
		func_798(bVar1, bParam0, &iVar4, &iVar5, &uVar2);
		iVar6 = (iVar4 + iVar5);
		switch (iVar0)
		{
			case 0:
				if (iVar4 > 0)
				{
					return true;
				}
				else if (iVar5 > 0)
				{
					return false;
				}
				break;
			default:
				if (ENTITY::DOES_ENTITY_EXIST(bVar1))
				{
					switch (iVar6)
					{
						case 2:
							if (iVar4 == 2)
							{
								return true;
							}
							else if (iVar4 == 1)
							{
								return uVar2;
							}
							else
							{
								return false;
							}
							break;
						case 1:
							if (iVar4 == 1)
							{
								return true;
							}
							else
							{
								return false;
							}
							break;
						case 0:
							break;
					}
				}
				break;
		}
		iVar3++;
	}
	return false;
}

int func_559(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319.f_17378.f_1010.f_201;
	if (bParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1914319.f_17378.f_1010[iVar0] == bParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_560(bool bParam0, int iParam1)
{
	if (func_62() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_111(bParam0, joaat("CI_TAG_ITEM_ALCOHOL")))
			{
				return true;
			}
		}
	}
	return false;
}

int func_561(bool bParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	bool bVar6;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_799(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_500(6, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = -815325344;
	sVar0.f_3 = func_800(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		bVar6 = bParam0;
		sVar0.f_2 = 549615901;
		sVar0.f_3 = bVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			return 1;
		}
	}
	return 0;
}

var func_562()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9468))
	{
		return Global_1935689.f_9467;
	}
	return Global_1935689.f_9464;
}

bool func_563(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_564(bool bParam0)
{
	if (func_161(bParam0, 0))
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM")))
		{
			if (func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM_REVIVER")))
			{
				return func_46();
			}
			return func_45();
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_BAIT")))
		{
			return func_36();
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			return func_35();
		}
	}
	if (Global_1935496.f_12)
	{
		return func_45();
	}
	else
	{
		return func_35();
	}
	return func_35();
}

bool func_565(bool bParam0)
{
	if ((((((((((func_111(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) || func_111(bParam0, joaat("CI_TAG_ITEM_CANNED"))) || func_111(bParam0, joaat("CI_TAG_ITEM_SNACK"))) || func_111(bParam0, joaat("CI_TAG_ITEM_COOKED"))) || func_111(bParam0, joaat("CI_TAG_ITEM_TOBACCO"))) || func_111(bParam0, joaat("CI_TAG_ITEM_ALCOHOL"))) || func_111(bParam0, joaat("CI_TAG_ITEM_HERB"))) || func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM"))) || func_111(bParam0, joaat("CI_TAG_ITEM_BAIT"))) || func_111(bParam0, joaat("CI_TAG_SHOP_FRESH_PRODUCE"))) || bParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

void func_566(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_801(1);
	}
}

void func_567(int iParam0)
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
			func_566(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_801(1);
	}
}

bool func_568(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_569(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

int func_570(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_571(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

int func_572(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_573(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_500(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_574(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_382() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_802(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_803(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_688() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_804(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_688(), 30);
			}
			break;
		case joaat("EXOTIC_ITEMS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case joaat("LEGENDARY_FISH"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_805(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_689() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_806(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_689(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_573(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_575(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_576(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_577(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_578(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			bVar2 = func_807(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_257(bVar2, 1, 0) || func_809(func_808(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_571(func_807(iVar0))), func_571(func_807(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_688() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_810(iVar0)), func_810(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_804() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_810(iVar0)), func_810(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_810(iVar0)), func_810(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			bVar2 = func_699(iParam3, func_811(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_695(bVar2) - iParam7) >= func_573(iParam3, func_812(iVar0));
				}
				else
				{
					bVar1 = func_695(bVar2) >= func_573(iParam3, func_812(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_695(bVar2) + iParam7) >= func_573(iParam3, func_812(iVar0));
			}
			else
			{
				bVar1 = func_695(bVar2) >= func_573(iParam3, func_812(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(bVar2)), func_813(bVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_814(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_815(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_815(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_689() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_816(iVar0)), func_816(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_806() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_816(iVar0)), func_816(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_816(iVar0)), func_816(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			bVar2 = func_699(iParam3, func_811(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_695(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_817(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_817(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_818(bVar2)), func_818(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_579(int iParam0, int iParam1, int iParam2, int iParam3)
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
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == joaat("EXOTIC_ITEMS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == joaat("LEGENDARY_FISH"))
	{
		if (func_805() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
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
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_580(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_568(func_819(0)) && ((func_820(0) == 1 || func_820(0) == 8) || func_820(0) == 6))
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

int func_581(int iParam0)
{
	if (!func_568(iParam0))
	{
		return -1;
	}
	return func_821(iParam0);
}

int func_582()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_822(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_822(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_583(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!TASK::CAN_START_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	else
	{
		TASK::START_TASK_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3, 0, -1.0f);
		Global_1935496.f_26 = 1;
	}
}

void func_584(bool bParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<6> /*48*/ sVar22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;

	sVar0.f_1 = 20;
	if ((func_111(bParam0, joaat("CI_TAG_ITEM_HERB")) || func_111(bParam0, joaat("CI_TAG_ITEM_MUSHROOM"))) || func_111(bParam0, joaat("CI_TAG_ITEM_BERRY")))
	{
		bVar37 = true;
	}
	if (func_119(bParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam0, &sVar0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < sVar0.f_0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar0.f_1[iVar29], &sVar22))
			{
			}
			else if (joaat("EFFECT_HEALTH") == sVar22.f_1)
			{
				fVar30 = func_823(0, sVar22.f_2);
				func_824(sVar22.f_2, 1);
				func_825(0, 7000);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE") == sVar22.f_1)
			{
				fVar31 = func_823(2, sVar22.f_2);
				func_826(sVar22.f_2);
				func_825(2, 7000);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA") == sVar22.f_1)
			{
				fVar32 = func_823(1, sVar22.f_2);
				func_827(sVar22.f_2);
				func_825(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == sVar22.f_1)
			{
				fVar33 = func_828(sVar22.f_2, sVar22.f_5);
				if (func_829(&uVar38, &uVar39, fVar33))
				{
					func_830(fVar33, 1, bVar37, bParam1);
					func_825(0, 7000);
				}
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == sVar22.f_1)
			{
				fVar34 = func_828(sVar22.f_2, sVar22.f_5);
				if (func_829(&uVar38, &uVar39, fVar34))
				{
					func_831(fVar34, 1, bVar37, bParam1);
					func_825(2, 7000);
				}
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == sVar22.f_1)
			{
				fVar35 = func_828(sVar22.f_2, sVar22.f_5);
				if (func_829(&uVar38, &uVar39, fVar35))
				{
					func_832(fVar35, 1, bVar37, bParam1);
					func_825(1, 7000);
				}
			}
			else if (joaat("EFFECT_HEALTH_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_833(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_834(19, fVar36);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_833(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_834(20, fVar36);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_833(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_834(18, fVar36);
			}
			else if (joaat("EFFECT_HEALTH_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_833(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_834(0, fVar36);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_833(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_834(2, fVar36);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_833(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_834(1, fVar36);
			}
			else if (joaat("EFFECT_CALORIES") == sVar22.f_1)
			{
				func_835(BUILTIN::TO_FLOAT(sVar22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0.0f || fVar30 > 0.0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_111(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
		{
			func_398(func_638(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_111(bParam0, joaat("CI_TAG_ITEM_PROVISION")))
		{
			func_398(func_638(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			func_398(func_638(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2.0f)), BUILTIN::ROUND((fVar35 / 2.0f)), BUILTIN::ROUND((fVar34 / 2.0f)));
	}
}

bool func_585(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

void func_586(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_836(iParam0);
	iVar1 = func_260(&iVar0);
	if (iVar1 != iParam0)
	{
		func_837(iVar1, 4);
	}
	if (!func_545(iParam0))
	{
		return;
	}
	if (func_261(iParam0))
	{
		return;
	}
	func_837(iParam0, 4);
	func_838(iParam0, bParam1);
	if (!func_839(iParam0))
	{
		func_840(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_470(0, 0, 1))
		{
			func_657(1, 6);
		}
	}
}

void func_587(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_588(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_589(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_590(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_521(Global_35, iParam0, 0, 1) < 2.0f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iParam0))
	{
		return true;
	}
	return false;
}

bool func_591(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_592(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

bool func_593()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_841())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

int func_594(bool bParam0)
{
	int iVar0;

	iVar0 = func_121(bParam0);
	if (iVar0 == joaat("CI_CATEGORY_WARDROBE_MASK") || iVar0 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
	{
		return 1;
	}
	return 0;
}

int func_595(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_601(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_596(bool bParam0)
{
	if (joaat("MASK_UP") == func_842(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_601(bParam0))
		{
			return true;
		}
	}
	else if (func_843(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), bParam0))
	{
		if (func_601(bParam0))
		{
			return true;
		}
	}
	return false;
}

int func_597()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_598()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_599()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_600()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_582())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_601(bool bParam0)
{
	if (func_843(joaat("CI_CATEGORY_WARDROBE_MASK"), bParam0))
	{
		return true;
	}
	if (func_843(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), bParam0))
	{
		return true;
	}
	return false;
}

void func_602(var uParam0)
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
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_603(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

void func_604(bool bParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_334(bParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_334(bParam0, 1) /*11*/].f_10 & iParam1);
}

int func_605(int iParam0, bool bParam1)
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
				return func_844();
			}
			break;
	}
	return 0;
}

int func_606(int iParam0, bool bParam1)
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

bool func_607(bool bParam0)
{
	if (func_62() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (bParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_608(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_508(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_845(bParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = bVar1;
	if (func_121(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_846(&(Global_1946054.f_2657.f_26.f_26), bParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_609(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_153(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_340(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_199(0), &sVar5);
	return 1;
}

int func_610()
{
	return Global_1946054.f_1;
}

void func_611()
{
	int iVar0;

	if (func_62() == -1)
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

void func_612(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_847(0);
	}
	if (bParam0)
	{
		func_322(8);
		func_322((1 << 9));
	}
	else
	{
		func_322(8);
		func_322(16);
	}
}

void func_613(bool bParam0, bool bParam1, bool bParam2)
{
	func_848(bParam0, 0, 0);
	func_330(bParam1, 1, bParam2, 0);
}

int func_614(int iParam0, int iParam1)
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
		case 16:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2");
		case 17:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3");
		case 18:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4");
		case 19:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5");
		case 20:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6");
		case 21:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7");
		case 22:
			return joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE");
		case 23:
			return joaat("MP_COMPONENT_TYPE_HAND_ATTIRE");
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_5");
		case 30:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_6");
		case 31:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_7");
		case 32:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_8");
		case 33:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_9");
		case 34:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1");
		case 35:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2");
		case 36:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_1");
		case 37:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_2");
		case 38:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_3");
		case 39:
			return joaat("MP_COMPONENT_TYPE_END");
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

void func_615()
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

int func_616(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

void func_617(bool bParam0)
{
	func_604(bParam0, 8, 6);
}

void func_618(int iParam0)
{
	func_849(&(Global_1946054.f_2589), iParam0);
}

void func_619(int iParam0, int iParam1)
{
	func_850(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_620(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_621(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_121(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_851(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_619(iVar1, iVar3);
		}
	}
	if (func_713(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_851(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_619(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case joaat("CI_CATEGORY_WARDROBE_VEST"):
			if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_619(iVar1, iVar3);
					}
				}
			}
			func_852(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_852(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_619(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_852(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_619(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_619(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_852(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_852(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_619(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_852(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; // curOff = 807
				if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_619(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_619(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_121(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_619(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_853(bParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_121(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_619(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_111(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_619(iVar1, iVar3);
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
						func_619(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_853(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_111(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_619(iVar1, iVar3);
					}
				}
			}
			switch (func_121(bParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_121(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_619(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_121(uParam0->f_1[iVar1 /*3*/]) || func_111(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_619(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_622(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_854(0);
	if (iParam2 != 0 && func_855(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_856(bParam0, func_614(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_623(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_62() != -1;
	iVar7 = func_854(0);
	if (func_327((1 << 15)))
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
			iVar5 = func_614(iVar0, 1);
			if (func_857(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_857(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_858(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_859(uParam0);
				if (iVar3 > 0)
				{
					if (!func_327((1 << 19)))
					{
						func_322((1 << 19));
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
							iVar5 = func_614(iVar0, 1);
							if (func_857(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_857(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_858(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_619(iVar0, iParam2);
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
					func_603((1 << 19));
				}
			}
		}
	}
}

void func_624(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_860(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_62() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_861(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_862(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_862(Global_40.f_7729);
				Global_1946054.f_1378 = func_862(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_863(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_612(0, 1);
	}
}

bool func_625(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_626(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_591(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_591(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_592(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_322(8);
}

bool func_627()
{
	return Global_1914319.f_17375;
}

bool func_628()
{
	int iVar0;

	if (func_779())
	{
		iVar0 = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return false;
}

bool func_629()
{
	return Global_1898068;
}

var func_630(Vector3 vParam0, Vector3 vParam3, Vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_864() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1224589.f_5;
	iVar6 = Global_1224589.f_9;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1.0f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_865());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_865());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_865());
				break;
		}
	}
	if ((iVar9 & 8) != 0)
	{
		iVar9 |= func_866(PLAYER::GET_PLAYER_TEAM(iVar5));
	}
	if ((iVar9 & 8) != 0 && (iVar9 & (1 << 15)) != 0)
	{
		iVar9 |= (1 << 16);
		iVar9 -= (iVar9 & 40952);
	}
	if ((iVar9 & 4) != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 -= (iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (Global_1224589.f_16[iVar2])
		{
			iVar10 = Global_1224589.f_115[iVar2];
			bVar3 = false;
			bVar4 = false;
			if ((iVar9 & 1) != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_867(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if ((iVar9 & 2) != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1224589.f_49[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if ((iVar9 & (1 << 13)) != 0 && func_868(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if ((iVar9 & (1 << 14)) != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if ((iVar9 & 4) != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if ((iVar9 & 8176) != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if ((iVar9 & 16) != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if ((iVar9 & 32) != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if ((iVar9 & 64) != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if ((iVar9 & 128) != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if ((iVar9 & 256) != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if ((iVar9 & (1 << 9)) != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if ((iVar9 & (1 << 10)) != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if ((iVar9 & (1 << 11)) != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if ((iVar9 & (1 << 12)) != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if ((iVar9 & (1 << 15)) != 0)
				{
					if (GANG::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if ((iVar9 & (1 << 16)) != 0)
				{
					if (!func_869(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_631(var uParam0, struct<18> /*144*/ sParam1)
{
	if (!func_870(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*18*/] = { sParam1 /*18*/ };
	*uParam0++;
	return 1;
}

void func_632(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

bool func_633()
{
	return !Global_1911774;
}

void func_634(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_635(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_636(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_637(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_871(sParam0, sParam1, iParam2);
	return iVar20;
}

struct<2> /*16*/ func_638(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_639(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

void func_640(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_62() == -1)
	{
		if (func_281(43))
		{
			if (func_111(bParam0, 412399755))
			{
				func_692(joaat("EXOTIC_STAGE_01"));
				if (func_693() == 0)
				{
					func_657(0, 10);
					iVar0 = func_872(bParam0, iParam1, 1);
					if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_695(bParam0) < func_696(bParam0))
						{
							func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_281(44))
		{
			if (func_111(bParam0, 709057512))
			{
				func_692(joaat("EXOTIC_STAGE_02"));
				if (func_693() == 1)
				{
					func_657(0, 10);
					iVar0 = func_872(bParam0, iParam1, 2);
					if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_695(bParam0) < func_696(bParam0))
						{
							func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_281(45))
		{
			if (func_111(bParam0, -1478961327))
			{
				func_692(joaat("EXOTIC_STAGE_03"));
				if (func_693() == 2)
				{
					func_657(0, 10);
					iVar0 = func_872(bParam0, iParam1, 4);
					if (((bParam0 == joaat("PROVISION_GATOR_EGG") || bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_695(bParam0) < func_696(bParam0))
						{
							func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_281(46))
		{
			if (func_111(bParam0, -1238404098))
			{
				func_692(joaat("EXOTIC_STAGE_04"));
				if (func_693() == 3)
				{
					func_657(0, 10);
					iVar0 = func_872(bParam0, iParam1, 8);
					if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_695(bParam0) < func_696(bParam0))
						{
							func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_281(47))
		{
			if (func_111(bParam0, 1160548794))
			{
				func_692(joaat("EXOTIC_STAGE_05"));
				if (func_693() == 4)
				{
					func_657(0, 10);
					iVar0 = func_872(bParam0, iParam1, 16);
					if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_695(bParam0) < func_696(bParam0))
						{
							func_285(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_641(int iParam0, int iParam1)
{
	if (func_62() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_642(int iParam0)
{
	if (func_62() != -1)
	{
		if (func_644(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_644(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_643(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_644(iParam0, (1 << 16)) && !func_644(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_644(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_644(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_644(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_645(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_646()
{
	return Global_1905944.f_5694;
}

bool func_647(bool bParam0)
{
	return func_119(bParam0) == joaat("WEAPON");
}

bool func_648(bool bParam0)
{
	var uVar0;

	if (func_62() != -1)
	{
		return false;
	}
	if (func_384(bParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_653(bParam0, &uVar0, 1, 0, 0);
	}
	return func_257(bParam0, 1, 0);
}

void func_649(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_119(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_388(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_664(bVar0))
	{
		if (func_62() == -1)
		{
			func_389(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, false) && func_264(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_360(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_650(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_111(bParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_873(bParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

int func_651(bool bParam0, bool bParam1)
{
	if (func_393(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam1), bParam0, false);
}

bool func_652()
{
	if (func_62() != -1)
	{
		return false;
	}
	if (!func_280())
	{
		return false;
	}
	if (!func_296(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_296(Global_1835011[2 /*74*/].f_1, 1) && func_296(Global_1347702[120 /*49*/].f_15, 1)) && !func_296(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_296(Global_1835011[37 /*74*/].f_1, 1) && !func_296(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_296(Global_1835011[57 /*74*/].f_1, 1) && !func_296(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_296(Global_1835011[26 /*74*/].f_1, 1) && !func_296(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_296(Global_1835011[62 /*74*/].f_1, 1) && func_296(Global_1835011[63 /*74*/].f_1, 1)) && !func_296(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_296(Global_1835011[75 /*74*/].f_1, 1) && !func_296(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_296(Global_1835011[76 /*74*/].f_1, 1) && !func_296(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_296(Global_1835011[40 /*74*/].f_1, 1) && func_296(Global_1835011[41 /*74*/].f_1, 1)) && !func_296(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_296(Global_1835011[62 /*74*/].f_1, 1) && func_296(Global_1835011[63 /*74*/].f_1, 1)) && !func_296(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_296(Global_1835011[65 /*74*/].f_1, 1) && func_296(Global_1835011[66 /*74*/].f_1, 1)) && !func_296(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_653(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_874(&bParam0);
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (!func_156(0))
	{
		bParam3 = true;
	}
	if (func_647(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
		{
			sVar0 = { func_440(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_442(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_443(bParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_441(bParam0, 1))
			{
				if (!func_442(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_443(bParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_875(bParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_554(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_795(bParam0))
	{
		iVar28 = func_340(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam4), bParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_654()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

bool func_655(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_656(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_62() != -1)
	{
		return;
	}
	iVar0 = func_876(iParam0);
	fVar1 = func_877(iParam0);
	if ((Global_1347477.f_117 || !func_385(31)) || !func_878(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_879(iVar0) >= 7)
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
	func_880(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_637(MISC::VAR_STRING(6, func_881(iParam0), fVar1), "itemtype_textures", func_882(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_657(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_883(&Global_0, 8);
	}
	if (!func_280() || func_62() != -1)
	{
		return;
	}
	func_883(&Global_0, 1);
}

int func_658(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

bool func_659(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_660(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_661(int iParam0)
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

void func_662(int iParam0)
{
	bool bVar0;

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
			func_884(1);
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
			func_885(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_885(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_885(3);
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
			func_886(1);
			break;
		case 34:
			func_887(1);
			break;
		case 35:
			func_888(1);
			break;
		case 36:
			break;
		case 37:
			func_889(0);
			break;
		case 38:
			func_890(0);
			break;
		case 39:
			func_891(0);
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
			if ((!Global_1879534 && func_280()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_150(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_280()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_150(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_280()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_150(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_280()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_150(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_62() == -1)
			{
				if (!func_713(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_892(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_670())
					{
						bVar0 = -1515874150;
					}
					else
					{
						bVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_257(bVar0, 1, 0))
					{
						func_433(bVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_130(Global_35, bVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_62() == -1)
			{
				if (!func_257(1013902307, 1, 0))
				{
					func_433(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_62() == -1)
			{
				if (!func_257(1013902307, 1, 0))
				{
					func_433(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_257(142640135, 1, 0))
				{
					func_433(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_62() == -1)
			{
				if (!func_257(786809402, 1, 0))
				{
					func_433(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_62() == -1)
			{
				if (!func_257(786809402, 1, 0))
				{
					func_433(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_257(-518019409, 1, 0))
				{
					func_433(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_893();
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

bool func_663(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

bool func_664(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

bool func_665(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_666(int iParam0, int iParam1)
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
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC");
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
			return joaat("SLOTID_WEAPON_0");
		case 399:
			return joaat("SLOTID_WEAPON_1");
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
			return -1756997214;
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

void func_667(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_894(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_668(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_895();
	func_896(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_669(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_822(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
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

bool func_670()
{
	if (func_62() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_671(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_672(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_673(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_385(50))
			{
				if (!func_385(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_385(51))
			{
				if (!func_385(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_674()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_675(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_161(bParam1, 0))
	{
		return false;
	}
	if (func_119(bParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_62() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_121(bParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	bVar4 = func_897(bParam1);
	if (bVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_111(bParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_334(bVar4, 1);
		if (func_616(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (bVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(bVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_121(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_111(bParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_843(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*uParam2 = 939463734;
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
				iVar10 = func_858(bVar8, bVar4, iVar2, bVar1);
				iVar9 = func_858(Global_1946054.f_1497.f_1[iVar5 /*3*/], bVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_121(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_111(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_853(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
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

void func_676()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_677()
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

int func_678()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_257(func_898(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_679(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_680(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (bParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				bVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (bParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				bVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (bParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (bParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_257(bVar0, 1, 0) && func_257(bVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_681(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_682(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_899(iParam0);
	if (iVar0 != -15)
	{
		func_896(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_900(iVar0, 1);
	}
	return false;
}

int func_683(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1.0f;
	if (bParam1 && func_257(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 += 0.1f;
	}
	sVar1.f_1 = 10;
	sVar1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, true, true, iParam0, &sVar1, 0);
	iVar24 = 0;
	while (iVar24 < sVar1.f_0)
	{
		if (sVar1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
		}
		else
		{
			bVar25 = sVar1.f_1[iVar24];
			if (func_161(bVar25, 0) && func_111(bVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_684(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_637(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_685(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_901())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_637(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_902(iVar0);
			func_903(iVar0, 0, 0);
		}
		func_637(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_398(func_638(joaat("CAREER_CASH")), iVar1);
	}
}

int func_686(int iParam0)
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
	switch (iParam0)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_695(bVar9);
	iVar2 = func_695(bVar10);
	iVar3 = func_695(bVar11);
	iVar5 = func_696(bVar9);
	iVar6 = func_696(bVar10);
	iVar7 = func_696(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_695(bVar12);
		iVar8 = func_696(bVar12);
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

void func_687(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_688()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_904(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_689()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_690(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_817(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_817(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_817(bVar0))
		{
			*iParam2++;
		}
		if (func_817(bVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_817(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_817(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_817(bVar0))
		{
			*iParam2++;
		}
		if (func_817(bVar1))
		{
			*iParam2++;
		}
		if (func_817(bVar0) && func_817(bVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_817(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_817(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_817(bVar0))
		{
			*iParam2++;
		}
		if (func_817(bVar1))
		{
			*iParam2++;
		}
		if (func_817(bVar2))
		{
			*iParam2++;
		}
		if ((func_817(bVar0) && func_817(bVar1)) && func_817(bVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_817(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_817(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_817(bVar0))
		{
			*iParam2++;
		}
		if (func_817(bVar1))
		{
			*iParam2++;
		}
		if (func_817(bVar2))
		{
			*iParam2++;
		}
		if (func_817(bVar3))
		{
			*iParam2++;
		}
		if (((func_817(bVar0) && func_817(bVar1)) && func_817(bVar2)) && func_817(bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_691(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_905(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_906(joaat("WS_DOWNS_RANCH_EDITH"));
			func_906(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_906(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_906(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_905(joaat("WS_DOWNS_RANCH_EDITH"));
			func_906(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_906(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_906(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_906(joaat("WS_DOWNS_RANCH_EDITH"));
			func_905(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_906(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_906(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_906(joaat("WS_DOWNS_RANCH_EDITH"));
			func_906(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_905(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_906(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_906(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_906(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_905(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_907();
			func_905(iParam0);
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
			func_908();
			func_905(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_906(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_906(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_905(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_906(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_906(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_905(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_906(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_906(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_905(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_906(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_906(joaat("WS_RHODES_GRAVE_OPEN"));
			func_905(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_906(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_906(joaat("WS_RHODES_GRAVE_OPEN"));
			func_905(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_906(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_906(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_905(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_906(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_905(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_906(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_905(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_906(joaat("WS_UTOPIA_TREE_MISSION"));
			func_906(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_906(joaat("WS_UTOPIA_TREE_STUMP"));
			func_905(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_906(joaat("WS_UTOPIA_TREE_STANDING"));
			func_906(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_906(joaat("WS_UTOPIA_TREE_STUMP"));
			func_905(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_906(joaat("WS_UTOPIA_TREE_STANDING"));
			func_906(joaat("WS_UTOPIA_TREE_MISSION"));
			func_906(joaat("WS_UTOPIA_TREE_STUMP"));
			func_905(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_906(joaat("WS_UTOPIA_TREE_STANDING"));
			func_906(joaat("WS_UTOPIA_TREE_MISSION"));
			func_906(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_905(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_906(joaat("WS_MICAH_CAMP"));
			func_906(joaat("WS_MICAH_CAMP_POST"));
			func_905(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_906(joaat("WS_MICAH_CAMP_EMPTY"));
			func_906(joaat("WS_MICAH_CAMP_POST"));
			func_905(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_906(joaat("WS_MICAH_CAMP_EMPTY"));
			func_906(joaat("WS_MICAH_CAMP"));
			func_905(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_906(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_905(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_906(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_906(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_909(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_905(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_906(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_906(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_905(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_906(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_905(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_906(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_905(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_906(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_905(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_906(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_905(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_906(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_905(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_906(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_906(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_905(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_906(joaat("WS_NEW_COM_BANK_START"));
			func_906(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_906(joaat("WS_NEW_COM_BANK_AFTER"));
			func_906(joaat("WS_NEW_COM_BANK_POST"));
			func_905(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_906(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_906(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_906(joaat("WS_NEW_COM_BANK_AFTER"));
			func_906(joaat("WS_NEW_COM_BANK_POST"));
			func_905(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_906(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_906(joaat("WS_NEW_COM_BANK_START"));
			func_906(joaat("WS_NEW_COM_BANK_AFTER"));
			func_906(joaat("WS_NEW_COM_BANK_POST"));
			func_905(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_906(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_906(joaat("WS_NEW_COM_BANK_START"));
			func_906(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_906(joaat("WS_NEW_COM_BANK_POST"));
			func_905(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_906(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_906(joaat("WS_NEW_COM_BANK_START"));
			func_906(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_906(joaat("WS_NEW_COM_BANK_AFTER"));
			func_905(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_906(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_905(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_906(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_905(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_906(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_905(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_906(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_906(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_905(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_905(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_905(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_905(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_906(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_905(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_905(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_905(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_905(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_905(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_906(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_905(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_906(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_905(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_906(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_905(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_906(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_905(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_906(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_905(0);
			func_906(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_906(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_905(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_906(0);
			func_906(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_905(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_906(0);
			func_906(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_905(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_906(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_905(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_906(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_905(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_905(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_905(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_905(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_906(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_905(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_906(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_906(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_906(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_905(joaat("WS_SHADY_BELLE_ABANDON"));
			func_906(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_906(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_905(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_906(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_906(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_905(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_906(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_905(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_906(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_909(iParam0))
				{
					func_905(iParam0);
				}
			}
			else if (func_909(iParam0))
			{
				func_906(iParam0);
			}
			break;
	}
}

void func_692(int iParam0)
{
	if (!func_910(iParam0))
	{
		func_912(func_911(iParam0));
	}
}

int func_693()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_910(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_694(bool bParam0, int iParam1, int iParam2)
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
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_695(bVar9);
	iVar2 = func_695(bVar10);
	iVar3 = func_695(bVar11);
	iVar5 = func_696(bVar9);
	iVar6 = func_696(bVar10);
	iVar7 = func_696(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_695(bVar12);
		iVar8 = func_696(bVar12);
	}
	if (bParam0 == bVar9)
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
	if (bParam0 == bVar10)
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
	if (bParam0 == bVar11)
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
		if (bParam0 == bVar12)
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

int func_695(bool bParam0)
{
	int iVar0;

	if (func_257(bParam0, 1, 0))
	{
		iVar0 = func_264(bParam0, 0, 0);
	}
	return iVar0;
}

int func_696(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_697(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_698(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

bool func_699(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_500(17, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_700(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_699(iParam1, 5) || bParam0 == func_699(iParam1, 6)) || bParam0 == func_699(iParam1, 7)) || bParam0 == func_699(iParam1, 8)) || bParam0 == func_699(iParam1, 9))
	{
		func_690(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_285(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_284(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_701(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_699(iParam1, 5) || bParam0 == func_699(iParam1, 6)) || bParam0 == func_699(iParam1, 7)) || bParam0 == func_699(iParam1, 8)) || bParam0 == func_699(iParam1, 9))
	{
		if (func_690(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_285(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_284(51, 0, 0, iVar0, func_573(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_285(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_284(51, 0, 0, iVar0, func_573(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_702()
{
	if (func_345(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_703(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_704(int iParam0)
{
	if (!func_913(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_705(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

float func_706()
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

	if (func_914())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_915(2);
	}
	if (Global_1347477.f_119)
	{
		return func_915(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_916();
	fVar2 = func_917();
	fVar3 = func_918();
	fVar4 = func_919();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_920());
	fVar7 = (func_915(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_921(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_922(3, fVar9, fVar9 > 100.0f);
	return func_923(fVar7, -100.0f, 100.0f);
}

float func_707()
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

	if (func_914())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_915(1);
	}
	if (Global_1347477.f_119)
	{
		return func_915(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_916();
	fVar2 = func_917();
	fVar3 = func_918();
	fVar4 = func_919();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_920());
	fVar7 = (func_915(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_921(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_922(2, fVar9, fVar9 > 100.0f);
	return func_923(fVar7, -100.0f, 100.0f);
}

float func_708()
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

	if (func_914())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_915(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_924())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_925())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_915(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_916();
	fVar2 = func_917();
	fVar3 = func_918();
	fVar4 = func_919();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_920());
	fVar7 = (func_915(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_921(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_922(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_915(0);
	}
	return func_923(fVar7, -100.0f, 100.0f);
}

bool func_709(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_710(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_161(bParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_653(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_156(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_199(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_711(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_588(iParam0))
	{
		return;
	}
	if (func_319(iParam0))
	{
		return;
	}
	if (!func_926(iParam0))
	{
		func_927(iParam0, 1, 0);
	}
	bVar0 = func_862(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_589(iParam0, (1 << 9)))
		{
			func_127(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_928() && !bParam1) && !func_470(0, 0, 1))
	{
		func_123(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_929(iParam0, 6);
	if (bParam2)
	{
		if (!func_470(0, 0, 1))
		{
			func_657(1, 4);
		}
	}
}

bool func_712(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_121(bVar1) == iParam0)
		{
			*bParam1 = bVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_713(bool bParam0)
{
	if (bParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_334(bParam0, 1) /*3*/] != Global_1946054.f_57[func_334(bParam0, 1) /*11*/];
}

void func_714(int iParam0, bool bParam1)
{
	if (func_111(bParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_930(bParam1, 0);
	}
	else if (func_111(bParam1, 930141731))
	{
		func_930(bParam1, 1);
		func_931(iParam0);
	}
}

void func_715(var uParam0, int iParam1)
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

int func_716(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_932(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_933(uParam2, iParam0, sVar1);
	return 1;
}

int func_717(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_719(bool bParam0)
{
	var uVar0;

	if (!func_789(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

struct<4> /*32*/ func_720()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_721(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_199(0);
	*uParam1 = { func_154(bParam0, func_440(0), iParam3, 0) /*4*/ };
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

struct<29> /*232*/ func_722(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> /*232*/ sVar0;
	struct<29> /*232*/ sVar29;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_726(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_723(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_934(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_935(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_935(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_935(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_724(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> /*144*/ sVar0;
	struct<15> /*120*/ sVar18;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar18.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_726(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_725(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_936(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_935(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_935(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_935(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> /*136*/ func_726(var uParam0)
{
	struct<17> /*136*/ sVar0;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	sVar0 = { *uParam0 /*4*/ };
	sVar0.f_4 = { uParam0->f_5 /*4*/ };
	sVar0.f_8 = uParam0->f_4;
	sVar0.f_9 = uParam0->f_11;
	sVar0.f_11 = uParam0->f_9;
	sVar0.f_10 = uParam0->f_10;
	return sVar0;
}

int func_727(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_937(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_935(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_935(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_935(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_728(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					func_514(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
					func_767(&bVar0, iVar9, iVar5, uVar6);
					if (!func_161(bVar0, 0))
					{
						bVar0 = func_530(iVar2);
					}
				}
				else
				{
					bVar0 = func_530(iVar2);
				}
				if (bVar0 == bParam1)
				{
					PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
					if (bParam3)
					{
						func_938(iVar2);
						ENTITY::_DELETE_CARRIABLE(&iVar2);
					}
					iParam2--;
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

int func_729(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	if (func_939(iParam0))
	{
		iVar1 = func_940(iParam0);
		if (func_161(bParam1, 0))
		{
			if (func_730(bParam1))
			{
				func_941(iVar1, bParam1, iParam2);
			}
		}
	}
	return func_942(iVar0, bParam1, iParam2, bParam3, iParam4);
}

bool func_730(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_943(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_944(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_731(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	bVar1 = bParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (PED::_GET_PELT_FROM_HORSE(iParam0, iVar0) == bVar1)
		{
			PED::_CLEAR_PELT_FROM_HORSE(iParam0, bVar1);
			iParam2--;
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 += -1;
		}
	}
	return iParam2;
}

bool func_732(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_361(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar0))
	{
		STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam1);
	}
	func_945(bParam0, iParam1);
	return func_946(bParam0, iParam1, bParam2, iParam3);
}

struct<4> /*32*/ func_733(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_947(iParam0) /*5*/ };
	return func_948(iParam0, bParam1, sVar0, sVar0.f_4);
}

bool func_734(int iParam0)
{
	switch (func_62())
	{
		case -1:
			return (Global_1357549.f_1495 & iParam0) != 0;
	}
	return false;
}

int func_735(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == joaat("LAW_DISPATCH_PENDING"))
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_736()
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

int func_737(int iParam0)
{
	if (!func_568(iParam0))
	{
		return -1;
	}
	return func_950(func_949(iParam0));
}

bool func_738(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_739(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

bool func_740(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_741(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

float func_742(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_743(Vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_951(iVar0))
		{
			if (BUILTIN::VDIST(func_952(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_744(Vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (Global_40.f_450[iVar0] > -1 && Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(func_953(Global_40.f_450[iVar0]), vParam0) < fParam3)
			{
				return true;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return false;
}

bool func_745(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_746(int iParam0, Vector3 vParam1)
{
	if (func_954(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

var func_747()
{
	return Global_1900383.f_393;
}

bool func_748(int iParam0, bool bParam1)
{
	if (func_111(bParam1, joaat("CI_TAG_ITEM_HERB")))
	{
		return func_955(bParam1);
	}
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_PROVISION"):
			if (func_565(bParam1))
			{
				return func_955(bParam1);
			}
			break;
		case joaat("CI_CATEGORY_HERBS"):
		case joaat("CI_CATEGORY_CONSUMABLE"):
			return func_955(bParam1);
		case joaat("CI_CATEGORY_DOCUMENTS"):
			return func_187(16);
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return func_187(4);
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return func_187(8);
		case joaat("CI_CATEGORY_WEAPON_UNIQUE"):
			if (func_161(bParam1, 0))
			{
				if (bParam1 == joaat("WEAPON_KIT_CAMERA"))
				{
					return func_187(64);
				}
			}
			return func_187(32);
		case joaat("CI_CATEGORY_CAMP"):
			return func_187(128);
		case joaat("CI_CATEGORY_WATCH"):
			return func_187((1 << 14));
		default:
			if (func_161(bParam1, 0))
			{
				if (func_111(bParam1, joaat("CI_TAG_ITEM_FISHING_LURE")) || func_111(bParam1, joaat("CI_TAG_ITEM_FISHING_BAIT")))
				{
					return func_187((1 << 12));
				}
				else if (func_111(bParam1, joaat("CI_TAG_ITEM_BAIT")))
				{
					return func_187((1 << 13));
				}
				else if (func_111(bParam1, joaat("CI_TAG_ITEM_CONSUMABLE")))
				{
					return func_187(2);
				}
				switch (bParam1)
				{
					case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
					case joaat("UPGRADE_UPG_MORTAR_PESTLE_SP"):
						return func_187((1 << 11));
					case joaat("KIT_HORSE_BRUSH"):
						return func_187((1 << 10));
				}
			}
			return func_187(1);
	}
	return func_187(1);
}

void func_749(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;

	iVar0 = -1;
	sVar3.f_9 = joaat("SLOTID_NONE");
	if (func_489(&uParam1, &iVar0, &iVar1, bParam20))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&sVar3, iVar2, iVar0, iVar1))
			{
				func_491(iParam0, sVar3.f_4, bParam19);
			}
			iVar2++;
		}
	}
	func_244(iVar0);
}

bool func_750(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

Vector3 func_751(int iParam0)
{
	if (!func_226(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	switch (iParam0)
	{
		case 0:
			return { 2947.055f, 1320.15f, 43.8203f };
		case 2:
			return { 2939.063f, 1287.116f, 43.6529f };
		case 3:
			return { 2932.97f, 1282.56f, 43.67f };
		case 1:
			return { 2947.64f, 1344.901f, 43.899f };
		case 99:
			return { -5227.357f, -3470.067f, -20.49293f };
		case 100:
			return { -5228.75f, -3468.28f, -21.57f };
		case 7:
			return { -784.49f, -1321.95f, 42.88f };
		case 10:
			return { -753.4219f, -1284.24f, 43.20049f };
		case 9:
			return { -814.4116f, -1367.243f, 43.7509f };
		case 13:
			return { -868.3356f, -1366.207f, 44.75311f };
		case 14:
			return { -875.03f, -1327.09f, 42.97f };
		case 15:
			return { -875.02f, -1326.71f, 42.97f };
		case 17:
			return { -762.0716f, -1293.549f, 42.8355f };
		case 12:
			return { -813.6f, -1373.8f, 44.2f };
		case 16:
			return { -805.72f, -1330.5f, 42.67f };
		case 18:
			return { 1417.288f, 273.5687f, 88.4881f };
		case 20:
			return { 1521.91f, 441.15f, 89.68f };
		case 21:
			return { 1523.63f, 442.65f, 89.68f };
		case 22:
			return { 2161.5f, -618.5f, 43.0f };
		case 23:
			return { -1092.88f, -575.69f, 81.41f };
		case 24:
			return { -1094.35f, -577.48f, 81.41f };
		case 25:
			return { 1294.084f, -1303.102f, 76.0418f };
		case 26:
			return { 1297.423f, -1278.412f, 75.65752f };
		case 27:
			return { 1319.43f, -1142.08f, 81.41f };
		case 28:
			return { 1329.755f, -1294.218f, 76.0092f };
		case 29:
			return { 1323.734f, -1321.775f, 77.8924f };
		case 30:
			return { 1226.71f, -1295.08f, 75.9f };
		case 31:
			return { 1230.34f, -1298.578f, 75.9027f };
		case 32:
			return { 1332.55f, -1298.679f, 75.35602f };
		case 35:
			return { 1209.053f, -193.1814f, 101.9785f };
		case 36:
			return { 2644.188f, -1292.507f, 51.2496f };
		case 37:
			return { 2657.466f, -1180.96f, 53.2785f };
		case 38:
			return { 2819.495f, -1331.29f, 45.514f };
		case 39:
			return { 2721.24f, -1231.66f, 49.37f };
		case 41:
			return { 2859.51f, -1202.16f, 48.59f };
		case 42:
			return { 2825.607f, -1318.207f, 45.7557f };
		case 43:
			return { 2718.0f, -1287.0f, 49.6f };
		case 44:
			return { 2508.212f, -1449.654f, 48.41523f };
		case 45:
			return { 2748.811f, -1398.277f, 45.18309f };
		case 46:
			return { 2747.824f, -1396.384f, 45.18309f };
		case 47:
			return { 2555.09f, -1166.97f, 52.68f };
		case 48:
			return { 2842.45f, -1227.66f, 46.66f };
		case 49:
			return { 2817.64f, -1325.011f, 47.00512f };
		case 50:
			return { 2836.992f, -1305.805f, 45.6964f };
		case 55:
			return { 2832.02f, -1225.563f, 46.6422f };
		case 54:
			return { 2734.174f, -1119.755f, 50.10792f };
		case 51:
			return { 2683.84f, -1399.642f, 45.37881f };
		case 60:
			return { -1753.404f, -392.557f, 155.2576f };
		case 61:
			return { -1790.0f, -388.27f, 159.33f };
		case 62:
			return { -1818.99f, -370.94f, 162.3f };
		case 63:
			return { -1819.88f, -561.8194f, 157.2323f };
		case 65:
			return { -1763.78f, -385.1118f, 156.7401f };
		case 64:
			return { -1773.314f, -393.9122f, 155.5647f };
		case 68:
			return { -307.9643f, 773.6048f, 117.7031f };
		case 69:
			return { -306.3f, 815.08f, 117.98f };
		case 70:
			return { 0.0f, 0.0f, 0.0f };
		case 72:
			return { -338.8647f, 767.4334f, 115.5628f };
		case 73:
			return { -287.9538f, 804.0544f, 118.3859f };
		case 74:
			return { -324.0f, 803.72f, 116.88f };
		case 75:
			return { -281.82f, 778.97f, 118.5f };
		case 76:
			return { -369.4457f, 786.6935f, 115.9904f };
		case 77:
			return { -178.0316f, 628.0621f, 113.0896f };
		case 78:
			return { -175.0377f, 631.7999f, 113.0896f };
		case 80:
			return { -272.7182f, 785.6115f, 117.4202f };
		case 79:
			return { -325.532f, 773.6285f, 117.5038f };
		case 82:
			return { 3025.786f, 562.7253f, 43.7167f };
		case 86:
			return { 2986.224f, 569.9468f, 43.62284f };
		case 85:
			return { 2986.94f, 574.9f, 43.64f };
		case 84:
			return { 2967.273f, 796.7416f, 52.5948f };
		case 87:
			return { -1302.951f, 394.6608f, 94.3817f };
		case 89:
			return { -1300.83f, 399.7599f, 94.38248f };
		case 88:
			return { -1299.891f, 401.3615f, 94.38248f };
		case 93:
			return { -5518.071f, -2906.217f, -2.7513f };
		case 90:
			return { -5487.197f, -2939.038f, -1.3872f };
		case 91:
			return { -5507.993f, -2964.844f, -1.6215f };
		case 92:
			return { -5509.019f, -2947.435f, -2.8934f };
		case 94:
			return { -5520.701f, -3044.427f, -1.40419f };
		case 95:
			return { -3687.3f, -2623.39f, -14.44f };
		case 4:
			return { -2842.211f, 137.3398f, 183.8268f };
		case 5:
			return { -1005.934f, -540.8262f, 97.9502f };
		case 34:
			return { 2076.835f, 1000.829f, 111.4973f };
		case 67:
			return { -2251.034f, -1916.911f, 115.9488f };
		case 56:
			return { -142.072f, -23.5242f, 95.0883f };
		case 57:
			return { 675.3091f, -1251.233f, 43.0152f };
		case 58:
			return { 1875.2f, -1859.182f, 41.8f };
		case 59:
			return { 2366.084f, 1347.122f, 105.1305f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_752(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_753(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> /*16*/ sVar7;
	struct<2> /*16*/ sVar19;
	struct<2> /*16*/ sVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	sVar7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &sVar7) || sVar7.f_0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		sVar21[iVar0 /*2*/] = (*uParam2)[iVar0 /*2*/];
		sVar21[iVar0 /*2*/].f_1 = 1.0f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < sVar7.f_0)
	{
		uVar6 = sVar7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &sVar19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (sVar21[iVar0 /*2*/] == sVar19.f_0)
							{
								sVar21[iVar0 /*2*/].f_1 -= sVar19.f_1;
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (sVar21[iVar0 /*2*/].f_1 != 1.0f)
		{
			(uParam2[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR(((float)(uParam2[iVar0 /*2*/])->f_1 * (sVar21[iVar0 /*2*/].f_1 / 1.0f)));
		}
		iVar0++;
	}
}

int func_754(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!func_161(bParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				func_514(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
				func_767(&iVar0, iVar9, iVar5, uVar6);
			}
			else
			{
				iVar0 = func_530(iVar2);
			}
			if (iVar0 == bParam1)
			{
				*uParam2 = iVar2;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

int func_755(int iParam0)
{
	return func_957(func_956(iParam0));
}

void func_756(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -153135980;
			break;
		case 1:
			*uParam1 = 12851681;
			break;
		case 2:
			*uParam1 = 1386325051;
			break;
		case 3:
			*uParam1 = 43722464;
			break;
		case 4:
			*uParam1 = -581476215;
			break;
		case 5:
			*uParam1 = -1906982261;
			break;
		case 9:
			*uParam1 = -1035806543;
			break;
		case 10:
			*uParam1 = 1579284209;
			break;
		case 11:
			*uParam1 = -1172613177;
			break;
		case 12:
			*uParam1 = 495869290;
			break;
		case 16:
			*uParam1 = -1382561665;
			break;
		case 15:
			*uParam1 = 684071069;
			break;
		case 14:
			*uParam1 = 1357371535;
			break;
		case 13:
			*uParam1 = -1221865546;
			break;
	}
}

bool func_757(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935689.f_19.f_1)
	{
		if (func_234(bParam0, Global_1935689.f_19.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_758(bool bParam0)
{
	if (func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
	{
		return func_111(bParam0, joaat("CI_TAG_ITEM_FISH_LARGE"));
	}
	return false;
}

int func_759(bool bParam0, int iParam1)
{
	if (func_111(bParam0, joaat("CI_TAG_SHOP_ANIMAL_LEGENDARY")))
	{
		return 0;
	}
	switch (Global_1935689.f_17)
	{
		case 1:
			if (iParam1 == joaat("SATCHEL_CATEGORY_DONATIONS"))
			{
				if ((func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH"))) || func_111(bParam0, joaat("CI_TAG_ITEM_CANNED")))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == joaat("SATCHEL_CATEGORY_DONATIONS"))
			{
				if ((((((((func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_111(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH"))) || func_111(bParam0, joaat("CI_TAG_ITEM_CANNED"))) || func_111(bParam0, joaat("CI_TAG_ITEM_CONFECTIONARY"))) || func_111(bParam0, joaat("CI_TAG_ITEM_COOKED"))) || func_111(bParam0, joaat("CI_TAG_ITEM_COOKED_MINT"))) || func_111(bParam0, joaat("CI_TAG_ITEM_COOKED_OREGANO"))) || func_111(bParam0, joaat("CI_TAG_ITEM_COOKED_PLAIN"))) || func_111(bParam0, joaat("CI_TAG_ITEM_COOKED_THYME")))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_760(bool bParam0)
{
	if (func_384(bParam0, 4))
	{
		return 0;
	}
	return 1;
}

Vector3 func_761()
{
	if (func_958(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_958(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

int func_762()
{
	return Global_40.f_4283.f_1;
}

void func_763(int iParam0, int iParam1)
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = iParam1;
}

bool func_764(int iParam0)
{
	return Global_1935689.f_19.f_2[iParam0 /*2*/].f_1;
}

void func_765(int iParam0)
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = 0;
	Global_1935689.f_19.f_2[iParam0 /*2*/].f_1 = 0;
}

void func_766(bool bParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = bParam0;
	sVar1.f_1 = func_959(iVar0);
	sVar1.f_0 = func_960(iVar0);
	func_541(joaat("FOLDER_ITEM"), bParam0, &sVar1, func_961(bParam0), 1, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1935689.f_19.f_203++;
	Global_1935689.f_19.f_1++;
}

bool func_767(bool bParam0, int iParam1, int iParam2, int iParam3)
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

int func_768(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_514(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_767(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_769(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			return joaat("TAXIDERMY_ORDER_01");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			return joaat("TAXIDERMY_ORDER_02");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			return joaat("TAXIDERMY_ORDER_03");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			return joaat("TAXIDERMY_ORDER_04");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			return joaat("TAXIDERMY_ORDER_05");
		default:
			break;
	}
	return 0;
}

bool func_770(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_573(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_776(iParam0, 5, 0) & func_776(iParam0, 6, 0)) & func_776(iParam0, 7, 0)) & func_776(iParam0, 8, 0)) & func_776(iParam0, 9, 0))
		{
			return func_384(bParam1, (1 << 23));
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_776(iParam0, 5, 0) & func_776(iParam0, 6, 0)) & func_776(iParam0, 7, 0)) & func_776(iParam0, 8, 0))
		{
			return func_384(bParam1, (1 << 23));
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_776(iParam0, 5, 0) & func_776(iParam0, 6, 0)) & func_776(iParam0, 7, 0))
		{
			return func_384(bParam1, (1 << 23));
		}
	}
	else if (iVar0 == 2)
	{
		if (func_776(iParam0, 5, 0) & func_776(iParam0, 6, 0))
		{
			return func_384(bParam1, (1 << 23));
		}
	}
	return false;
}

int func_771(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01"):
			return joaat("BONE_00");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02"):
			return joaat("BONE_01");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03"):
			return joaat("BONE_02");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04"):
			return joaat("BONE_03");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05"):
			return joaat("BONE_04");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06"):
			return joaat("BONE_05");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07"):
			return joaat("BONE_06");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08"):
			return joaat("BONE_07");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09"):
			return joaat("BONE_08");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10"):
			return joaat("BONE_09");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11"):
			return joaat("BONE_10");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12"):
			return joaat("BONE_11");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13"):
			return joaat("BONE_12");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14"):
			return joaat("BONE_13");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15"):
			return joaat("BONE_14");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16"):
			return joaat("BONE_15");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17"):
			return joaat("BONE_16");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18"):
			return joaat("BONE_17");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19"):
			return joaat("BONE_18");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20"):
			return joaat("BONE_19");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21"):
			return joaat("BONE_20");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22"):
			return joaat("BONE_21");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23"):
			return joaat("BONE_22");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24"):
			return joaat("BONE_23");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25"):
			return joaat("BONE_24");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26"):
			return joaat("BONE_25");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27"):
			return joaat("BONE_26");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28"):
			return joaat("BONE_27");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29"):
			return joaat("BONE_28");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30"):
			return joaat("BONE_29");
		default:
			break;
	}
	return 0;
}

bool func_772(int iParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	if (!func_344(iParam0))
	{
		return false;
	}
	return func_296(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_773(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01"):
			return joaat("ROCK_00_GRZ");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02"):
			return joaat("ROCK_01_GRZ");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03"):
			return joaat("ROCK_02_CML");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04"):
			return joaat("ROCK_03_CML");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05"):
			return joaat("ROCK_04_BGV");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06"):
			return joaat("ROCK_05_BGV");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07"):
			return joaat("ROCK_06_HRT");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08"):
			return joaat("ROCK_07_HRT");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09"):
			return joaat("ROCK_08_ROA");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10"):
			return joaat("ROCK_09_ROA");
		default:
			break;
	}
	return 0;
}

bool func_774(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return true;
	}
	return false;
}

int func_775(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_01");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_02");
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_03");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_04");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			return joaat("LEGENDARY_FISH_05");
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			return joaat("LEGENDARY_FISH_06");
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_07");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_08");
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_09");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_10");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_11");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			return joaat("LEGENDARY_FISH_12");
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_13");
		default:
			break;
	}
	return 0;
}

int func_776(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_699(iParam0, iParam1);
	if ((((((((((((((((((((bVar0 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT")) || bVar0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_PERCH_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"))
	{
		if (func_257(bVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_149(bVar0, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
			}
			return 1;
		}
	}
	else if ((((((((((bVar0 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT")) || bVar0 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT")) || bVar0 == joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_MUSKIE_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY")) || bVar0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"))
	{
		if (func_962(bVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

bool func_777(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return true;
	}
	return false;
}

bool func_778(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return true;
	}
	return false;
}

bool func_779()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

void func_780(int iParam0, var uParam1)
{
	int iVar0;
	struct<18> /*144*/ sVar1;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<10> /*80*/ sVar23;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	sVar1 = -1;
	sVar1.f_1 = -1;
	sVar1.f_2 = -1;
	sVar1.f_3 = -1;
	sVar1.f_4 = -1;
	sVar1.f_5 = -1;
	sVar1.f_6 = -1;
	sVar1.f_7 = -1;
	sVar1.f_8 = -1;
	sVar1.f_13 = -1;
	sVar1.f_14 = -1;
	sVar1.f_15 = -1;
	sVar1.f_16 = -1;
	sVar1.f_17 = -1;
	sVar1.f_1 = joaat("SLOTID_SATCHEL");
	iVar19 = -1;
	iVar22 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	sVar23.f_9 = joaat("SLOTID_NONE");
	if (func_782(iVar22, &sVar1, &iVar19, &iVar20))
	{
		iVar21 = 0;
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			if (func_233(&sVar23, iVar21, iVar19, iVar20))
			{
				if (func_161(sVar23.f_4, 0) && sVar23.f_4 != joaat("CUSTOM_SATCHEL"))
				{
					if (func_249(sVar23.f_4))
					{
						iVar0 = 0;
						while (iVar0 < 999)
						{
							if ((*uParam1)[iVar0] == sVar23.f_4 || !func_161((*uParam1)[iVar0], 0))
							{
							}
							else
							{
								iVar0++;
							}
						}
						if (!func_161(Global_1935689.f_223[iVar0], 0))
						{
							(*uParam1)[iVar0] = sVar23.f_4;
						}
					}
				}
			}
			iVar21++;
		}
		func_244(iVar19);
	}
}

void func_781(var uParam0, int iParam1, bool bParam2)
{
	struct<14> /*112*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar0.f_4 = uParam0;
	sVar0.f_11 = iParam1;
	if (!bParam2)
	{
		func_255(sVar0, 0);
	}
	else
	{
		func_236(sVar0, 0);
	}
}

bool func_782(int iParam0, var uParam1, int iParam2, int* iParam3)
{
	*iParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return true;
	}
	return false;
}

void func_783(int iParam0, int iParam1)
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

void func_784(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_785(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_963(*iParam0);
	iVar1 = func_964(*iParam0);
	if (iParam1 < 1 || iParam1 > func_965(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_787(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_788(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_789(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_790()
{
	int iVar0;
	float fVar1;

	iVar0 = func_85(7);
	fVar1 = -1.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_346(7) != 0)
		{
			fVar1 = func_136(7);
			if (fVar1 != -1.0f)
			{
				if (func_137(Global_35, iVar0, fVar1, 1))
				{
					return false;
				}
			}
		}
	}
	if (func_138() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
		{
			if (func_137(Global_35, Global_1900383.f_393, 5.0f, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_791(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> /*112*/ sVar3;

	iVar0 = -1;
	sVar3.f_9 = joaat("SLOTID_NONE");
	if (func_489(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&sVar3, iVar2, iVar0, iVar1))
			{
				if (!func_235(&sVar3, 0, 0))
				{
				}
				else if (bParam2)
				{
					func_258(sVar3.f_4, bParam3);
				}
				else
				{
					func_246(sVar3);
				}
			}
			iVar2++;
		}
	}
	func_244(iVar0);
}

void func_792()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9468, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9467, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9464, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9465, false);
}

bool func_793(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_199(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_446(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_794()
{
	int iVar0;
	int iVar1;

	if (Global_1392040.f_2)
	{
		return false;
	}
	if (func_185())
	{
		return false;
	}
	if (func_118())
	{
		return false;
	}
	if (Global_1935496.f_10)
	{
		return false;
	}
	if (Global_1935496.f_11)
	{
		return false;
	}
	if (Global_1935496.f_12)
	{
		return false;
	}
	if (!func_958(15))
	{
		return false;
	}
	if (func_779())
	{
		return false;
	}
	if (func_966((1 << 13)))
	{
		return false;
	}
	if (TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
	{
		return false;
	}
	if (func_475())
	{
		return false;
	}
	if (func_368((1 << 23)))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if (((iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1") || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return true;
		}
		return false;
	}
	if (!func_173(0, 1))
	{
		return false;
	}
	return true;
}

bool func_795(bool bParam0)
{
	if (func_967(bParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_35;
		case 1:
			if (func_272(Global_1935689.f_9436, 4))
			{
				return func_85(6);
			}
			break;
		case 2:
			if (func_272(Global_1935689.f_9436, 2))
			{
				return func_85(1);
			}
			break;
		case 3:
			if (func_272(Global_1935689.f_9436, 1))
			{
				return func_85(7);
			}
			break;
	}
	return func_482();
}

int func_797(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;

	func_798(bParam0, bParam1, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

void func_798(bool bParam0, bool bParam1, int iParam2, int iParam3, var uParam4)
{
	struct<4> /*32*/ sVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7[10];
	int iVar18;

	if (!func_220(bParam1))
	{
		return;
	}
	if (func_968(bParam0))
	{
		iVar5 = 0;
		while (iVar5 < 3)
		{
			iVar4 = func_969(iVar5);
			if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar0, bParam0, iVar4, 0))
			{
			}
			else
			{
				iVar6 = sVar0.f_3;
				if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
				}
				else if (bParam1 == func_248(iVar6))
				{
					if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar6))
					{
						if (iVar5 == 0 || iVar5 == 2)
						{
							*uParam4 = 1;
						}
						*iParam2++;
					}
					else
					{
						*iParam3++;
					}
				}
			}
			iVar5++;
		}
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(bParam0))
	{
		func_970(Global_35, &uVar7, 1);
		iVar18 = 0;
		while (iVar18 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar7[iVar18]))
			{
			}
			else if (bParam1 == func_248(uVar7[iVar18]))
			{
				if (ENTITY::_IS_ENTITY_FULLY_LOOTED(uVar7[iVar18]))
				{
					if (iVar18 == 0)
					{
						*uParam4 = 1;
					}
					*iParam2++;
				}
				else
				{
					*iParam3++;
				}
			}
			iVar18++;
		}
	}
}

int func_799(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

int func_800(int iParam0)
{
	return func_971(iParam0);
}

void func_801(bool bParam0)
{
	if (bParam0)
	{
		func_972(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_973(&(Global_40.f_12019.f_42), 1);
	}
}

int func_802()
{
	return func_974(Global_40.f_12019);
}

int func_803()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_658(iVar1);
		if (func_257(bVar2, 1, 0) || func_809(func_808(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_804()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_975(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_805()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_814(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_806()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_808(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return (1 << 9);
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return (1 << 10);
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return (1 << 11);
		default:
			break;
	}
	return 0;
}

bool func_809(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_811(int iParam0)
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

int func_812(int iParam0)
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

char* func_813(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_814(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_815(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_816(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_817(bool bParam0)
{
	if (func_976(bParam0) && func_257(bParam0, 1, 0))
	{
		return true;
	}
	else if (func_977(bParam0) & func_978(bParam0))
	{
		return true;
	}
	return false;
}

char* func_818(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_266(bParam0));
}

int func_819(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_820(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_821(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_979(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_822(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

float func_823(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2.0f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = ((float)(iVar0 * iParam1) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2.0f);
}

void func_824(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_825(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_826(int iParam0)
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_827(int iParam0)
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100.0f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_828(int iParam0, float fParam1)
{
	return func_980(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

bool func_829(var uParam0, var uParam1, float fParam2)
{
	if (func_62() != -1)
	{
		return true;
	}
	if (!func_981(0))
	{
		return true;
	}
	if (fParam2 <= 0.0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		func_982(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_150(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_982(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_830(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_62() == 0)
	{
		func_983(0, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_915(0);
	if (bParam1)
	{
		func_984(fVar0);
	}
	if (fVar0 >= (100.0f - 1.0f))
	{
		func_985();
	}
	if (bParam2)
	{
		fParam0 = func_986(0, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_987(0, func_923(fParam0, -100.0f, 100.0f), bParam1);
}

void func_831(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_62() == 0)
	{
		func_983(2, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_915(2);
	if (bParam1)
	{
		func_984(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_986(2, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_987(2, func_923(fParam0, -100.0f, 100.0f), bParam1);
}

void func_832(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_62() == 0)
	{
		func_983(1, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_915(1);
	if (bParam1)
	{
		func_984(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_986(1, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_987(1, func_923(fParam0, -100.0f, 100.0f), bParam1);
}

float func_833(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2.0f);
		case 2:
			return (fParam0 * 120.0f);
		case 3:
			return (fParam0 * 2880.0f);
		default:
			break;
	}
	return fParam0;
}

void func_834(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1.0f)
	{
		if (func_988(iParam0))
		{
			fParam1 = 30.0f;
		}
		else
		{
			fParam1 = 30.0f;
		}
	}
	else if (fParam1 <= 0.0f)
	{
		return;
	}
	fParam1 *= (1.0f + Global_40.f_11095.f_70);
	switch (iParam0)
	{
		case 0:
			sVar1 = func_989(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_990(-1);
			func_991(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_989(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_992(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_989(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_993(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_994(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_994(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_994(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_835(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_995(13);
	if (fParam0 > 10.0f)
	{
		fParam0 = 10.0f;
	}
	if (!func_385(17))
	{
		return;
	}
	if (func_996())
	{
		iVar1 = func_997(fVar0);
		fVar0 += fParam0;
		iVar2 = func_997(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = func_895();
			func_896(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_998(&fVar3, &fVar4);
		func_999(13, func_923(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_150(94, 0);
		}
	}
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 20:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 28:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 37:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 40:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 41:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 42:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 1:
			return joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
		case 9:
			return joaat("PROVISION_RO_FLOWER_CIGAR");
		case 10:
			return joaat("PROVISION_RO_FLOWER_CLAMSHELL");
		case 14:
			return joaat("PROVISION_RO_FLOWER_DRAGONS");
		case 17:
			return joaat("PROVISION_RO_FLOWER_GHOST");
		case 21:
			return joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
		case 22:
			return joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
		case 24:
			return joaat("PROVISION_RO_FLOWER_MOCCASIN");
		case 25:
			return joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
		case 30:
			return joaat("PROVISION_RO_FLOWER_QUEENS");
		case 32:
			return joaat("PROVISION_RO_FLOWER_RAT_TAIL");
		case 35:
			return joaat("PROVISION_RO_FLOWER_SPARROWS");
		case 36:
			return joaat("PROVISION_RO_FLOWER_SPIDER");
		default:
			break;
	}
	return 0;
}

void func_837(int iParam0, int iParam1)
{
	if (!func_545(iParam0))
	{
		return;
	}
	if (func_62() != -1)
	{
		Global_36638[iParam0] |= iParam1;
		return;
	}
	Global_40.f_9274[iParam0] |= iParam1;
}

void func_838(int iParam0, bool bParam1)
{
	if (!func_545(iParam0))
	{
		return;
	}
	if (func_1000(iParam0))
	{
		return;
	}
	func_837(iParam0, 2);
	if (bParam1)
	{
		if (!func_470(0, 0, 1))
		{
			func_657(1, 6);
		}
	}
}

bool func_839(int iParam0)
{
	if (!func_545(iParam0))
	{
		return false;
	}
	return func_546(iParam0, 1, 1);
}

void func_840(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_545(iParam0))
	{
		return;
	}
	if (func_839(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_555(iParam0);
	}
	if (!bParam1)
	{
		if (func_62() != -1)
		{
		}
		else
		{
			func_1001(iParam0);
		}
	}
	func_837(iParam0, 1);
	if (func_62() == -1)
	{
		func_1002(iParam0, func_276());
	}
	func_838(iParam0, 1);
	if (bParam2)
	{
		if (!func_470(0, 0, 1))
		{
			func_657(1, 6);
		}
	}
}

bool func_841()
{
	int iVar0;

	iVar0 = Global_1946054.f_529[9];
	iVar0 += Global_1946054.f_529[4];
	iVar0 += Global_1946054.f_529[10];
	iVar0 += Global_1946054.f_529[1];
	iVar0 += Global_1946054.f_529[2];
	iVar0 += Global_1946054.f_529[6];
	iVar0 += Global_1946054.f_529[29];
	iVar0 += Global_1946054.f_529[26];
	iVar0 += Global_1946054.f_529[18];
	iVar0 += Global_1946054.f_529[19];
	return iVar0 > 0;
}

int func_842(int iParam0)
{
	int iVar0;

	iVar0 = func_334(func_1003(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_843(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_334(func_1003(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_121(bVar0) == iParam0)
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

int func_844()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_121(bVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_1004() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_845(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_153(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_340(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_199(0), &sVar5, bParam1);
	return true;
}

void func_846(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1005(iParam2, *uParam0);
	func_1006(&(uParam0->f_1[*uParam0 /*5*/]), bParam1, -1, 1, 0);
	*uParam0++;
}

void func_847(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

void func_848(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_121(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_1007(bParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_1007(bParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_1007(bParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_1007(bParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_1007(bParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_1007(bParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_611();
	}
	if (bParam1)
	{
		func_612(0, 0);
	}
}

void func_849(var uParam0, int iParam1)
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
			if ((func_1008(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_1008(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1009(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_850(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1010(uParam0, 1))
	{
		func_1011(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_851(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_852(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_619(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_619(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_619(iVar2, iVar0);
		}
	}
}

bool func_853(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4"):
			return true;
		default:
			break;
	}
	return false;
}

int func_854(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_610();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_855(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_856(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_857(bool bParam0, int iParam1)
{
	return (Global_1946054.f_57[func_334(bParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_858(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == Global_1946054.f_57[func_334(bParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_327((1 << 19)))
	{
		switch (bParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 += PED::_0x31B2E7F2E3C58B89(bParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

int func_859(var uParam0)
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

void func_860(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_62() == -1)
	{
		func_1012(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1013(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_861(int iParam0, int iParam1)
{
	if (func_62() == -1)
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

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT");
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT");
		case 8:
			return joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT");
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT");
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
		case 1:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_ONE");
		case 2:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_TWO");
		case 3:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_THREE");
		case 4:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR");
		case 5:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE");
		case 24:
			return joaat("CLOTHING_OUTFIT_OWNED_001");
		case 25:
			return joaat("CLOTHING_OUTFIT_OWNED_002");
		case 26:
			return joaat("CLOTHING_OUTFIT_OWNED_003");
		case 27:
			return joaat("CLOTHING_OUTFIT_OWNED_005");
		case 28:
			return joaat("CLOTHING_OUTFIT_OWNED_006");
		case 21:
			return joaat("CLOTHING_SP_OUTFIT_SONY_001");
		case 22:
			return joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001");
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
			return -272211555;
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
			return joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER");
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT");
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER");
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
			return joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM");
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

void func_863(int iParam0, bool bParam1, int iParam2)
{
	func_1014(&(Global_1946054.f_1378), iParam0);
	func_1015(2, iParam0, 6);
	if (bParam1)
	{
		func_612(0, 1);
	}
}

int func_864()
{
	return Global_1051081.f_11;
}

char* func_865()
{
	return "unnamed";
}

int func_866(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = (1 << 9);
			break;
		case 5:
			iVar0 = (1 << 10);
			break;
		case 6:
			iVar0 = (1 << 11);
			break;
		case 8:
			iVar0 = (1 << 12);
			break;
	}
	return iVar0;
}

bool func_867(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return func_1016(32, iParam0);
}

int func_868(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109000.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (Global_1224589.f_16[iParam0])
	{
		return Global_1108108[iParam0 /*27*/].f_1;
	}
	return 25;
}

bool func_869(int iParam0)
{
	if (func_1017(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, iParam0) != 1)
		{
			func_1018(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, iParam0) == 1;
}

bool func_870(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

void func_871(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_872(bool bParam0, int iParam1, int iParam2)
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
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_695(bVar9);
	iVar2 = func_695(bVar10);
	iVar3 = func_695(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_695(bVar12);
	}
	iVar5 = func_696(bVar9);
	iVar6 = func_696(bVar10);
	iVar7 = func_696(bVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_696(bVar12);
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

int func_873(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_161(bParam0, 0))
	{
		return 0;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &sVar0))
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

int func_874(bool bParam0)
{
	if (!func_161(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_875(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	sVar0 = { func_153(bParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_666((398 + iVar29), 1);
		if (func_442(bParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_443(bParam0, &sVar6, iVar5);
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

int func_876(int iParam0)
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

float func_877(int iParam0)
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
			return func_1019(iParam0);
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
			return func_1019(iParam0);
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
			return func_1019(iParam0);
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

bool func_878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_385(18);
		case 2:
			return func_385(20);
		case 1:
			return func_385(19);
		default:
			break;
	}
	return true;
}

int func_879(int iParam0)
{
	return func_1020(Global_40.f_11095.f_11[iParam0]);
}

void func_880(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_62() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_385(31))
	{
		return;
	}
	iVar0 = func_879(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_879(iParam0);
	if (func_1021(iParam0) & func_1022(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1023(fVar1, fParam1);
			if (fParam1 > (float)func_1024(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_150(func_1025(iParam0), 0);
					}
					func_1026(iParam0, iVar2, iVar3);
					func_825(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_881(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_882(int iParam0)
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

void func_883(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_884(bool bParam0)
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

void func_885(int iParam0)
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

void func_886(bool bParam0)
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

void func_887(bool bParam0)
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

void func_888(bool bParam0)
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

void func_889(bool bParam0)
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

void func_890(bool bParam0)
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

void func_891(bool bParam0)
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

int func_892(bool bParam0)
{
	if (bParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_334(bParam0, 1) /*3*/];
}

void func_893()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1027();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_389(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_433(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_389(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_433(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_894(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_895()
{
	return Global_1899515;
}

void func_896(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_964(*iParam0);
	iVar1 = func_963(*iParam0);
	iVar2 = func_1028(*iParam0);
	iVar3 = func_1029(*iParam0);
	iVar4 = func_1030(*iParam0);
	iVar5 = func_1031(*iParam0);
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
	iVar6 = func_965(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_965(iVar1, iVar0);
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
	func_1032(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_897(bool bParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_153(bParam0, 1, 0) /*5*/ };
	return func_333(sVar0.f_4);
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_899(int iParam0)
{
	return func_536(iParam0, -1);
}

bool func_900(int iParam0, bool bParam1)
{
	return func_1033(func_895(), iParam0, bParam1);
}

bool func_901()
{
	if (func_674())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_902(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1034((Global_40.f_4283.f_325 + iParam0));
}

void func_903(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_901())
	{
		func_637(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_637(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_904(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_905(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1035(iParam0, 1);
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

void func_906(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1035(iParam0, 1);
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

void func_907()
{
	func_906(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_906(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_906(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_906(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_906(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_906(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_906(joaat("WS_COLTER_STAGE_MP"));
}

void func_908()
{
	func_906(joaat("WS_BEECHERS_SHACK"));
	func_906(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_906(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_906(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_906(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_906(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_906(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_906(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_906(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_906(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_909(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1035(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_910(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_911(int iParam0)
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

void func_912(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_913(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_914()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_915(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_916()
{
	float fVar0;
	int iVar1;

	fVar0 = func_995(13);
	iVar1 = func_997(fVar0);
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

float func_917()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_918()
{
	if (func_674())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_919()
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

float func_920()
{
	return Global_1954815.f_3;
}

void func_921(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1036(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_922(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1036(iParam0, 2, 0, 0);
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

float func_923(float fParam0, float fParam1, float fParam2)
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

bool func_924()
{
	return func_995(12) <= -99.0f;
}

bool func_925()
{
	return func_995(12) >= 99.0f;
}

bool func_926(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_589(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_927(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (!func_926(iParam0))
	{
		func_929(iParam0, 2);
		if (bParam2)
		{
			if (!func_470(0, 0, 1))
			{
				func_657(1, 4);
			}
		}
		if ((!func_928() && !bParam1) && !func_470(0, 0, 1))
		{
			func_123(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1037(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_928()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_929(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

void func_930(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1038(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_386(50);
			}
			else
			{
				func_386(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_386(51);
			}
			else
			{
				func_386(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1039(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_415();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_415();
			}
			break;
		case 3:
			func_386(24);
			if (bParam1)
			{
				if (!func_1039(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_415();
				}
			}
			break;
	}
}

void func_931(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1040(0))
			{
				iVar0++;
			}
			if (func_1040(2))
			{
				iVar0++;
			}
			if (func_1040(4))
			{
				iVar0++;
			}
			if (!func_1041(16))
			{
				if (iVar0 == 1)
				{
					func_1042();
					func_150(456, 1);
					func_1043(16);
				}
			}
			if (!func_1041(32))
			{
				if (iVar0 >= 3)
				{
					func_1042();
					func_150(456, 1);
					func_1043(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1040(1))
			{
				iVar0++;
			}
			if (func_1040(3))
			{
				iVar0++;
			}
			if (func_1040(7))
			{
				iVar0++;
			}
			if (!func_1041(1))
			{
				if (iVar0 == 1)
				{
					func_1044();
					func_150(457, 1);
					func_1043(1);
				}
			}
			if (!func_1041(2))
			{
				if (iVar0 >= 3)
				{
					func_1044();
					func_150(457, 1);
					func_1043(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1040(5))
			{
				iVar0++;
			}
			if (func_1040(6))
			{
				iVar0++;
			}
			if (func_1040(8))
			{
				iVar0++;
			}
			if (!func_1041(4))
			{
				if (iVar0 == 1)
				{
					func_1045();
					func_150(455, 1);
					func_1043(4);
				}
			}
			if (!func_1041(8))
			{
				if (iVar0 >= 3)
				{
					func_1045();
					func_150(455, 1);
					func_1043(8);
				}
			}
			break;
	}
}

void func_932(var uParam0)
{
	func_715(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_715(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_715(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_933(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_1046(uParam0))
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

bool func_934(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_935(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1047(iParam0, iParam1);
}

bool func_936(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_937(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_938(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar2 = Global_40.f_4283;
	if (func_1048(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		func_225(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_161(uVar3[iVar15], 0))
			{
			}
			else if (!func_219(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = func_1049(uVar3[iVar15], iVar2);
				if (func_1050(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_1051(&iVar1);
	if (func_1050(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

bool func_939(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_940(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_940(int iParam0)
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

void func_941(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_1052(bParam1);
	iVar1 = func_1053(bVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] -= iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = func_1054(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

int func_942(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> /*16*/ sVar3;

	if (!func_161(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam4 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam4 == joaat("REMOVE_REASON_GIVEN");
	if (!func_1055(iParam0, bParam1, 1))
	{
		return 0;
	}
	sVar3 = { func_361(bParam1) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar3))
	{
		if ((func_462(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar3, iParam2);
		}
		else if ((func_462(iParam0, bParam1) - iParam2) < 0)
		{
			func_942(iParam0, bParam1, func_264(bParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1056(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_156(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && bParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_360(bParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

bool func_943(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(bParam0);
}

int func_944(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_FUR");
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
		case 5:
			return joaat("PROVISION_BOAR_SKIN");
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 8:
			return joaat("PROVISION_BUCK_FUR");
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
		case 16:
			return joaat("PROVISION_COYOTE_FUR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
		case 20:
			return joaat("PROVISION_DEER_HIDE");
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 23:
			return joaat("PROVISION_FOX_FUR");
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
		case 27:
			return joaat("PROVISION_GOAT_HAIR");
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 30:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 33:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 34:
			return joaat("PROVISION_PANTHER_FUR");
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
		case 38:
			return joaat("PROVISION_PIG_SKIN");
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 41:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
		case 45:
			return joaat("PROVISION_RAM_HIDE");
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
		case 49:
			return joaat("PROVISION_SHEEP_WOOL");
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 52:
			return joaat("PROVISION_WOLF_FUR");
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
		case 56:
			return 0;
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

void func_945(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_62() == -1)
	{
		iVar0 = func_85(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	func_731(iVar0, bParam0, iParam1);
}

bool func_946(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_439(0) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_HORSE_SATCHEL");
	sVar5 = { func_154(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_274(bParam0, &sVar5, &sVar0, iParam1, iParam3, bParam2, 0);
}

struct<5> /*40*/ func_947(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_948(iParam0, joaat("CHARACTER"), func_720(), joaat("SLOTID_NONE")) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	return sVar0;
}

struct<4> /*32*/ func_948(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_161(bParam1, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &sVar0);
	return sVar0;
}

int func_949(int iParam0)
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

int func_950(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_951(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1057(Global_1835011[iParam0 /*74*/].f_1);
}

Vector3 func_952(int iParam0)
{
	return func_1058(iParam0);
}

Vector3 func_953(int iParam0)
{
	Vector3 vVar0;

	if (!func_344(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (func_1059(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 /*3*/ };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

bool func_954(int iParam0)
{
	if (func_1060(iParam0))
	{
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

bool func_955(bool bParam0)
{
	if (func_161(bParam0, 0))
	{
		if (func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM")))
		{
			if (func_111(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM_REVIVER")))
			{
				return func_187((1 << 9));
			}
			return func_187(256);
		}
		else if (func_111(bParam0, joaat("CI_TAG_ITEM_BAIT")))
		{
			return func_187((1 << 13));
		}
	}
	if (Global_1935496.f_12)
	{
		return func_187(256);
	}
	else
	{
		return func_187(2);
	}
	return func_187(2);
}

int func_956(int iParam0)
{
	if (!func_226(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_144() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

int func_957(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_958(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_296(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_959(int iParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1935689.f_9475))
	{
		return 0;
	}
	sVar0.f_0 = Global_1935689.f_9475;
	sVar0.f_2 = 1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

int func_960(int iParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1935689.f_9475))
	{
		return 0;
	}
	sVar0.f_0 = Global_1935689.f_9475;
	sVar0.f_2 = 0;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

bool func_961(int iParam0)
{
	if (func_1061(iParam0))
	{
		return func_32(16);
	}
	else if (func_1062(iParam0))
	{
		return func_1063();
	}
	else if (func_1064(iParam0))
	{
		return func_32(2);
	}
	return true;
}

int func_962(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	int iVar24;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar14 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar14);
		if (ITEMSET::IS_ITEMSET_VALID(iVar14))
		{
			iVar15 = ITEMSET::GET_ITEMSET_SIZE(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar16, iVar14));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else if (ENTITY::GET_IS_ANIMAL(iVar0) || ENTITY::_GET_IS_BIRD(iVar0))
				{
					iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					iVar1 = func_225(iVar21, &uVar2);
					bVar23 = func_529(iVar0);
					if (bVar23 == bParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&iVar0);
							func_360(bVar23, -1, 0, 0, 0);
							Global_1901328.f_94 = 0;
						}
						ITEMSET::DESTROY_ITEMSET(iVar14);
						return 1;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (uVar2[iVar22] == bParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								func_360(uVar2[iVar22], -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					func_514(iVar24, &iVar18, &uVar19, &iVar17, &uVar20);
					if (func_767(&bVar13, iVar24, iVar17, iVar18))
					{
						if (bVar13 == bParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								func_360(bVar13, -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
					}
				}
				iVar16++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar14);
		}
		else
		{
			return 0;
		}
	}
	return func_1065(bParam0, bParam1);
}

int func_963(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_964(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_232(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_965(int iParam0, int iParam1)
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

bool func_966(int iParam0)
{
	return (Global_1392040.f_1 & iParam0) != 0;
}

int func_967(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_968(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

int func_969(int iParam0)
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

int func_970(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return joaat("ST_HORSE_FENCE_MP");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

void func_972(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_973(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_974(int iParam0)
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

bool func_975(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_976(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
		default:
			break;
	}
	return false;
}

int func_977(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_978(bool bParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1066(&iVar0, 0, iVar95, &sVar1) && !func_1066(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_1067(iVar0, &sVar1);
			if (func_161(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_979(int iParam0)
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

float func_980(float fParam0, float fParam1)
{
	if (fParam1 != 0.0f)
	{
		return ((fParam1 / 100.0f) * 200.0f);
	}
	return ((fParam0 / 8.0f) * 200.0f);
}

bool func_981(int iParam0)
{
	if (func_670())
	{
		return false;
	}
	return func_296(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_982(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_1068(iParam0, &sVar0);
}

void func_983(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_986(iParam0, fParam1, 1);
	}
	func_1070(iParam0, (func_1069(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_984(float fParam0)
{
	if (fParam0 >= (100.0f - 1.0f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_985()
{
	Global_40.f_11095.f_11[14] = 100.0f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_986(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_895();
	func_1071(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1072(iParam0, 2);
	if (func_1033(iVar0, func_1073(iParam0, 2), 1))
	{
		func_1074(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_150(88, bParam2);
		return 0.0f;
	}
	func_1075(iParam0, func_895(), 2);
	func_1074(iParam0, iVar1 + 1, 2);
	return fParam1;
}

void func_987(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_62() != -1)
	{
		return;
	}
	if (!func_385(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1076(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_1077(iParam0), iVar0);
	func_1079(func_1078(iParam0), (100.0f * (BUILTIN::TO_FLOAT(iVar0) / 100.0f)), 0);
	if (((fParam1 <= func_1080(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_150(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_150(func_1081(iParam0), 1);
	}
	sVar1 = func_1082(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

bool func_988(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_989(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_990(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_1083(2);
	func_1084(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_991(bool bParam0)
{
	if (func_62() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_150(89, 1);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_150(90, 1);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	func_1085(1, bParam0, 1);
	func_419();
	Global_40.f_11095.f_43 = bParam0;
}

void func_992(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_1086(2);
	func_1087(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_993(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_1088(2);
	func_1089(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_994(int iParam0, bool bParam1, bool bParam2)
{
	func_1070(iParam0, 100.0f, bParam1, bParam2, 1, 2);
}

float func_995(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

bool func_996()
{
	if (func_62() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return func_900(Global_1347477.f_195, 0);
}

int func_997(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

void func_998(float fParam0, float fParam1)
{
	if (!func_280())
	{
		*fParam0 = -100.0f;
		*fParam1 = 100.0f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_999(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0.0f;
		sVar2 = func_635(fParam1 < 0.0f, "rpg_cold", "rpg_hot");
		func_1090(1, bVar1, 1, sVar2);
		func_1091(!bVar1, fParam1 < 0.0f, bVar1);
		iVar0 = func_1076(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_419();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1076(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1076(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_1000(int iParam0)
{
	if (!func_545(iParam0))
	{
		return false;
	}
	return func_546(iParam0, 2, 1);
}

void func_1001(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_150(210, 0);
			break;
		case 16:
			func_150(211, 0);
			break;
		case 33:
			func_150(212, 0);
			break;
		case 42:
			func_150(213, 0);
			break;
		case 2:
			func_150(214, 0);
			break;
		case 3:
			func_150(215, 0);
			break;
		case 43:
			func_150(216, 0);
			break;
		case 15:
			func_150(217, 0);
			break;
		case 23:
			func_150(218, 0);
			break;
		case 37:
			func_150(219, 0);
			break;
		case 26:
			func_150(220, 0);
			break;
		case 13:
			func_150(221, 0);
			break;
		case 19:
			func_150(222, 0);
			break;
		case 34:
			func_150(223, 0);
			break;
		case 38:
			func_150(224, 0);
			break;
		case 40:
			func_150(225, 0);
			break;
		case 7:
			func_150(226, 0);
			break;
		case 20:
			func_150(227, 0);
			break;
		case 18:
			func_150(228, 0);
			break;
		case 6:
			func_150(229, 0);
			break;
		case 29:
			func_150(230, 0);
			break;
		case 39:
			func_150(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_150(233, 0);
			break;
		case 8:
			func_150(234, 0);
			break;
		case 28:
			func_150(235, 0);
			break;
		case 31:
			func_150(236, 0);
			break;
		case 12:
			func_150(237, 0);
			break;
		case 27:
			func_150(238, 0);
			break;
		case 41:
			func_150(239, 0);
			break;
	}
}

void func_1002(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_277(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				func_277(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

int func_1003(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_333(iVar0);
}

int func_1004()
{
	return Global_1946054.f_1497;
}

void func_1005(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1006(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_1092(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_334(func_897(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1093(uParam0);
	}
}

int func_1007(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_508(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_121(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1094(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_121(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1094(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_845(bParam0, 1);
	return 1;
}

bool func_1008(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1009(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_1010(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1011(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_1012(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1013(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1014(var uParam0, int iParam1)
{
	int iVar0;

	if (func_62() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1012(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1013(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1015(int iParam0, int iParam1, int iParam2)
{
	if (func_62() == -1)
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

bool func_1016(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1095(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_1096())
	{
		return func_1095(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_1095(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_1017(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888.f_49041), iParam0))
	{
		return true;
	}
	return false;
}

void func_1018(int iParam0)
{
	int iVar0;

	if (func_1097() != 0 || func_62() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1224589.f_16[iVar0])
	{
		func_1098(iParam0);
		return;
	}
	if (Global_1058888.f_42287.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_1099(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888.f_42287.f_1[iVar0 /*5*/] = 1;
}

float func_1019(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_876(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1020(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1100(iVar6) - func_1100(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_1020(float fParam0)
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

int func_1021(int iParam0)
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

int func_1022(int iParam0)
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

int func_1023(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1020(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1100(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1100(iVar0 + 1));
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

int func_1024(int iParam0)
{
	int iVar0;

	if (func_1101(iParam0, &iVar0))
	{
		return func_1100(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1102())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1102())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1102())
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

int func_1025(int iParam0)
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

void func_1026(int iParam0, int iParam1, int iParam2)
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
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 += func_1103(iParam0);
	sVar4 = func_1105(func_1104(iVar3, iParam2));
	sVar6 = func_1106(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1107(iParam0));
	iVar8 = func_1108(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_1109(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_570(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1110(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1027()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1111(Global_35, &iVar0);
	sVar30 = { func_439(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_1112(0);
	func_1113(7);
	func_330(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_610() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_330(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_330(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_1114(Global_35, &iVar0);
}

int func_1028(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_1029(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_1030(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_1031(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

void func_1032(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_783(iParam0, iParam6);
	func_784(iParam0, iParam5);
	func_785(iParam0, iParam4);
	func_786(iParam0, iParam3);
	func_787(iParam0, iParam2);
	func_788(iParam0, iParam1);
}

bool func_1033(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1115(iParam1) || !func_1115(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1034(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_638(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_1035(int iParam0, int iParam1)
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
		case 657241756:
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case 682839815:
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
		case 1067254646:
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

char* func_1036(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_635(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_635(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_1037(int iParam0)
{
	bool bVar0;

	bVar0 = func_862(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_818(bVar0);
}

int func_1038(bool bParam0)
{
	int iVar0;

	if (func_1116(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_1117(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_1118(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_1119(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1039(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_257(func_1120(iVar0, iParam0), 1, 0))
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

bool func_1040(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_257(func_1121(iVar0, iParam0), 1, 0))
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

bool func_1041(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_1042()
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	func_433(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_879(1);
	func_1026(1, iVar0, 0);
}

void func_1043(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_1044()
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	func_433(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_879(2);
	func_1026(2, iVar0, 0);
}

void func_1045()
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	func_433(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_879(0);
	func_1026(0, iVar0, 0);
}

bool func_1046(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1047(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1223212 < 20)
	{
		Global_1223212++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223212.f_1[iVar0 /*9*/] = { Global_1223212.f_1[iVar0 + 1 /*9*/] /*9*/ };
			iVar0++;
		}
	}
	sVar1 = -1;
	sVar1.f_0 = iParam0;
	sVar1.f_1 = iParam1;
	Global_1223212.f_1[(Global_1223212 - 1) /*9*/] = { sVar1 /*9*/ };
}

bool func_1048(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("A_C_DUCK_01"):
				case joaat("A_C_RABBIT_01"):
				case joaat("A_C_PRONGHORN_01"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("A_C_BUCK_01"):
				case joaat("A_C_TURKEY_01"):
				case joaat("A_C_TURKEY_02"):
				case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
				case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
				case joaat("A_C_DEER_01"):
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("A_C_ALLIGATOR_01"):
				case joaat("A_C_ALLIGATOR_02"):
				case joaat("A_C_ALLIGATOR_03"):
				case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
				case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
				case joaat("A_C_CAROLINAPARAKEET_01"):
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("A_C_ELK_01"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_ML"):
				case joaat("A_C_QUAIL_01"):
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_1049(bool bParam0, int iParam1)
{
	if (!func_161(bParam0, 0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (!func_219(bParam0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (func_1122(bParam0, iParam1))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else if (func_111(bParam0, -1690954218))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_111(bParam0, 1149630095))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_111(bParam0, 194498509))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	}
	else if (func_111(bParam0, 43251425))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	}
	return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
}

bool func_1050(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0[0] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar0[1] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
	iVar0[2] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	iVar0[3] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
	iVar0[4] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	iVar0[5] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
	iVar0[6] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	iVar0[7] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
	iVar0[8] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	iVar0[9] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_1051(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
				break;
		}
	}
}

bool func_1052(bool bParam0)
{
	if (!func_730(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_1053(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 0;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
		case joaat("PROVISION_DEER_HIDE"):
			return 20;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 30;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 49;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_BUCK_FUR"):
			return 8;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
		case joaat("PROVISION_RAM_HIDE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR"):
			return 34;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN"):
			return 38;
		case 0:
			return 56;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
		case joaat("PROVISION_FOX_FUR"):
			return 23;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 41;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
		case joaat("PROVISION_WOLF_FUR"):
			return 52;
		case joaat("PROVISION_COYOTE_FUR"):
			return 16;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
		case joaat("PROVISION_GOAT_HAIR"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 33;
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
		case joaat("PROVISION_BOAR_SKIN"):
			return 5;
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

int func_1054(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1055(int iParam0, bool bParam1, int iParam2)
{
	if (!func_161(bParam1, 0))
	{
		return false;
	}
	return func_462(iParam0, bParam1) >= iParam2;
}

int func_1056(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_161(bParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	sVar0 = { func_947(iParam0) /*5*/ };
	sVar5 = { func_948(iParam0, bParam1, sVar0, sVar0.f_4) /*4*/ };
	return func_1123(iParam0, bParam1, &sVar5, iParam2, iParam3, bParam4);
}

int func_1057(int iParam0)
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
		iVar0 = func_821(iParam0);
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

Vector3 func_1058(int iParam0)
{
	if (func_1124(iParam0))
	{
		return func_1125(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_1059(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1126(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80.0f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f /*3*/ };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((Global_1347702[iParam0 /*49*/].f_13 & (1 << 16)) != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f /*3*/ };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f /*3*/ };
			return true;
		}
	}
	return false;
}

bool func_1060(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_1061(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
		case joaat("CI_TAG_FOLDER_RECIPE_PAMPHLETS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPER_SCRAPS"):
		case joaat("CI_TAG_FOLDER_BUSINESS_CARDS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPERS"):
		case joaat("CI_TAG_FOLDER_DINOSAUR_NOTES"):
		case joaat("CI_TAG_FOLDER_ROCK_CARVING_NOTES"):
		case joaat("CI_TAG_FOLDER_BOOKS"):
		case joaat("CI_TAG_FOLDER_DRAWINGS"):
		case joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"):
		case joaat("CI_TAG_FOLDER_MAPS"):
		case joaat("CI_TAG_FOLDER_NOTES"):
			return true;
	}
	if (func_1127(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1062(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return true;
	}
	return false;
}

bool func_1063()
{
	return func_32(1);
}

bool func_1064(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_GAMEY_BIRD"):
		case joaat("CI_TAG_FOLDER_BIG_GAME"):
		case joaat("CI_TAG_FOLDER_GRISTLY_MUTTON"):
		case joaat("CI_TAG_FOLDER_HERPTILE_MEAT"):
		case joaat("CI_TAG_FOLDER_SUCCULENT_FISH"):
		case joaat("CI_TAG_FOLDER_STRINGY_MEAT"):
		case joaat("CI_TAG_FOLDER_MATURE_VENISON"):
		case joaat("CI_TAG_FOLDER_GAME"):
		case joaat("CI_TAG_FOLDER_CRUSTACEAN"):
		case joaat("CI_TAG_FOLDER_FLAKEY_FISH"):
		case joaat("CI_TAG_FOLDER_PLUMP_BIRD"):
		case joaat("CI_TAG_FOLDER_PRIME_BEEF"):
		case joaat("CI_TAG_FOLDER_GRITTY_FISH"):
		case joaat("CI_TAG_FOLDER_TENDER_PORK"):
		case joaat("CI_TAG_FOLDER_EXOTIC_BIRD"):
			return true;
	}
	return false;
}

int func_1065(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> /*144*/ sVar3;
	struct<10> /*80*/ sVar21;
	int iVar35;
	int iVar36;

	sVar3 = -1;
	sVar3.f_1 = -1;
	sVar3.f_2 = -1;
	sVar3.f_3 = -1;
	sVar3.f_4 = -1;
	sVar3.f_5 = -1;
	sVar3.f_6 = -1;
	sVar3.f_7 = -1;
	sVar3.f_8 = -1;
	sVar3.f_13 = -1;
	sVar3.f_14 = -1;
	sVar3.f_15 = -1;
	sVar3.f_16 = -1;
	sVar3.f_17 = -1;
	sVar21.f_9 = joaat("SLOTID_NONE");
	sVar3.f_1 = joaat("SLOTID_SATCHEL");
	iVar35 = func_165(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar35) && func_782(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar35), &sVar3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&sVar21, iVar2, iVar0, iVar1))
			{
				if (bParam0 == sVar21.f_4)
				{
					if (bParam1)
					{
						iVar36 = 1;
						func_456(&iVar35, bParam0, &iVar36, 1, joaat("REMOVE_REASON_DEFAULT"));
					}
					func_244(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		func_244(iVar0);
	}
	return 0;
}

bool func_1066(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_242(iParam1) && !func_1128(iParam1))
	{
		bVar0 = func_85(iParam1);
	}
	else
	{
		return false;
	}
	func_1129(uParam3);
	iVar5 = func_969(iParam2);
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

void func_1067(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_514(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_767(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_1068(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_1069(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1130();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
		default:
			break;
	}
	return -1.0f;
}

int func_1070(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_1130();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100.0f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_1131(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100.0f)
	{
		fParam1 = 100.0f;
	}
	else if (fParam1 < 0.0f)
	{
		fParam1 = 0.0f;
	}
	func_1132(iVar0, iParam0, fParam1);
	func_1133(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_1077(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1071(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_964(*iParam0);
	iVar1 = func_963(*iParam0);
	iVar2 = func_1028(*iParam0);
	iVar3 = func_1029(*iParam0);
	iVar4 = func_1030(*iParam0);
	iVar5 = func_1031(*iParam0);
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
	iVar5 -= iParam1;
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 -= iParam2;
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 -= iParam3;
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 -= iParam4;
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_965(iVar6, iVar0);
		iVar2 += iVar7;
	}
	iVar1 -= iParam5;
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 -= iParam6;
	func_1032(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1072(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1130();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_1073(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1130();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

void func_1074(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1130();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1075(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1130();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_1076(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

int func_1077(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1078(int iParam0)
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

void func_1079(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1036(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_1080(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100.0f);
	return ((fVar0 * 200.0f) - 100.0f);
}

int func_1081(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_1082(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

int func_1083(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1130();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
		case 1:
			return Global_1954819.f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_1084(float fParam0, int iParam1)
{
	if (fParam0 == 0.0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

void func_1085(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

int func_1086(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1130();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
		case 1:
			return Global_1954819.f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_1087(float fParam0)
{
	int iVar0;

	if (fParam0 == 0.0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iVar0, fParam0);
}

int func_1088(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1130();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
		case 1:
			return Global_1954819.f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_1089(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0) && fParam0 > 0.0f)
	{
		return;
	}
	if (fParam0 == 0.0f)
	{
		return;
	}
	fVar2 = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(iVar0);
	if (fParam0 < 0.0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, 1.0f);
	}
	if (fParam0 > 0.0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, fVar2);
	}
}

void func_1090(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_1091(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1036(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

void func_1092(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1134(&(uParam0->f_3));
}

void func_1093(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1135(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1094(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1136(iParam1);
	func_1137(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1138(&(uParam0->f_26), iVar1);
		if (func_1139(uParam0->f_26, &iVar0))
		{
			func_1140(iVar0, iVar1);
		}
	}
}

bool func_1095(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1096()
{
	return Global_1109000.f_245;
}

int func_1097()
{
	return Global_1572887.f_13;
}

void func_1098(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != 0 || Global_1572887.f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (Global_1058888.f_42287.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	func_1099(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888.f_42287.f_1[iVar0 /*5*/] = 0;
}

void func_1099(int iParam0)
{
	if (Global_1058888.f_42287.f_1[iParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[iParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[iParam0 /*5*/].f_1 = 0;
	}
}

int func_1100(int iParam0)
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

bool func_1101(int iParam0, int iParam1)
{
	return false;
}

bool func_1102()
{
	return false;
}

int func_1103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_1104(int iParam0, int iParam1)
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

char* func_1105(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1106(int iParam0)
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

char* func_1107(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1108(int iParam0)
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

int func_1109(int iParam0)
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

int func_1110(int iParam0)
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

void func_1111(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::COPY_SCRIPT_STRUCT(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_665(bVar31))
		{
			(*iParam1)[iVar30] = bVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1112(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_161(bVar1, 0))
		{
			func_848(bVar1, 0, bParam0);
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

void func_1113(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_62() == -1)
	{
		func_1141(352481484);
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
		bVar2 = Global_1946054.f_2657[iVar0];
		if (func_121(bVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_846(&(Global_1946054.f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_845(bVar2, 0))
		{
			func_131(bVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1114(int iParam0, int iParam1)
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
				if (func_664((*iParam1)[iVar0]))
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

bool func_1115(int iParam0)
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
	iVar0 = func_1031(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1030(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1029(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_964(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_963(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1028(iParam0);
	if (iVar5 < 1 || iVar5 > func_965(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1116(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (func_111(bParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1117(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (func_111(bParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1118(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_1119(bool bParam0)
{
	if (!func_161(bParam0, 0))
	{
		return false;
	}
	if (func_111(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_1120(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1142(iParam0);
		case 1:
			return func_1143(iParam0);
		case 2:
			return func_1144(iParam0);
		case 3:
			return func_1145(iParam0);
	}
	return 0;
}

int func_1121(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1146(iParam0);
		case 1:
			return func_1147(iParam0);
		case 2:
			return func_1148(iParam0);
		case 3:
			return func_1149(iParam0);
		case 4:
			return func_1150(iParam0);
		case 5:
			return func_1151(iParam0);
		case 6:
			return func_1152(iParam0);
		case 7:
			return func_1153(iParam0);
		case 8:
			return func_1154(iParam0);
	}
	return 0;
}

bool func_1122(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (bParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (bParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
				case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (bParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (bParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_1123(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> /*96*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_563(bParam1))
	{
		return 0;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1155(iParam0, *uParam2, &sVar0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = sVar0.f_11;
	}
	else if (iParam3 > sVar0.f_11)
	{
		iParam3 = sVar0.f_11;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_1124(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1156(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_1125(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return { -240.576f, 769.614f, 117.085f };
		case 34:
			return { 2544.982f, -1187.344f, 52.3104f };
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_1126(int iParam0)
{
	if (!func_568(iParam0))
	{
		return -1;
	}
	return func_1157(iParam0);
}

bool func_1127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_CIG_CARD_SPT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_AML_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GUN_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GRL_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_LND_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ACT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PLT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_INV_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ART_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PAM_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_HOR_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_VEH_SET"):
			return true;
	}
	return false;
}

bool func_1128(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_242(iParam0))
	{
		return false;
	}
	iVar0 = func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_1129(var uParam0)
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

int func_1130()
{
	if (func_1158())
	{
		return 1;
	}
	return 0;
}

void func_1131(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1130();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1132(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1082(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1159(iParam1), fParam2, -1);
	}
}

void func_1133(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_1130();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_1160(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1161(iParam0, iVar0, iParam3);
	}
}

void func_1134(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1135(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1162(func_610());
	if (*uParam0)
	{
		func_1134(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, iParam1, 0, func_62() != -1, iParam2);
	*uParam0 = 1;
}

int func_1136(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1137(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1138(var uParam0, int iParam1)
{
	*uParam0--;
	func_1092(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_1139(int iParam0, int iParam1)
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

void func_1140(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1141(int iParam0)
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
	sVar2 = { func_488(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_489(&sVar2, &iVar0, &iVar1, 0))
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
		func_244(iVar0);
	}
}

int func_1142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_1147(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_1148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_1149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_1151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_1153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_1154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

bool func_1155(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1156(var uParam0)
{
	if (func_1163(&(uParam0->f_29), 62))
	{
		switch (func_1164())
		{
			case 1:
				if (!func_1163(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1163(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1163(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1163(&(uParam0->f_29), 32))
				{
					if (func_1163(&(uParam0->f_29), 2))
					{
						if (func_1029(func_895()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_1157(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_1158()
{
	return Global_1954819.f_866;
}

char* func_1159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1160(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1130();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1161(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1130();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_1162(int iParam0)
{
	if (func_62() == -1)
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

bool func_1163(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 & iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1164()
{
	return Global_1899516;
}

