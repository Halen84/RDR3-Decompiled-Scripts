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
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	struct<35> /*280*/ sLocal_16 = { 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 1;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
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
	var uLocal_73 = 1;
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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	struct<4> /*32*/ sScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;
	bool bVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if ((func_1(0, 0, 1) && !func_2()) || func_3(0))
	{
		Global_1911914.f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = sScriptParam_0.f_3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_14 = 3;
	}
	while (true)
	{
		if (func_4())
		{
			iLocal_14 = 3;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		switch (iLocal_14)
		{
			case 0:
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				sLocal_16.f_33 = 1;
				sLocal_16.f_34 = 1;
				func_5(&sLocal_16, 2);
				iLocal_14 = 2;
				break;
			case 1:
				if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SHOWMENU"))) && !func_6(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (func_6(Global_35))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
							bLocal_15 = true;
							iLocal_14 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_FOOT(Global_35))
						{
							if (bVar0)
							{
								iLocal_14 = 3;
							}
							else if (!func_7(Global_35, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
							{
								bVar1 = true;
								if (func_8(0) | func_8(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 2.0f);
								}
								TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_35, joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR"), -1.0f, false);
							}
						}
					}
				}
				else
				{
					bLocal_15 = true;
					iLocal_14 = 2;
				}
				break;
			case 2:
				func_9(&sLocal_16, 0);
				if (func_10(&sLocal_16) == 0)
				{
					iLocal_14 = 3;
				}
				else if (func_10(&sLocal_16) != 12)
				{
				}
				else if (((!bLocal_15 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SHOWMENU"))) && !func_6(Global_35))
				{
					iLocal_14 = 1;
				}
				else
				{
					bLocal_15 = true;
				}
				break;
			case 3:
				func_11(&sLocal_16, 0);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, bool bParam1, bool bParam2)
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
		if (func_12())
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
		iVar0 = func_13(Global_1898164.f_1[0 /*5*/]);
		if (func_14(iVar0) && func_15(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_16(Global_1898164.f_1[0 /*5*/]))
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

bool func_2()
{
	return Global_1911914.f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_4()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	if (func_3(0))
	{
		return true;
	}
	if (func_1(0, 0, 1) && !func_2())
	{
		return true;
	}
	if (func_17())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_18())
		{
			return true;
		}
	}
	if (func_19())
	{
		return true;
	}
	if (bLocal_15)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_6(PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SHOWMENU")))
		{
			return true;
		}
	}
	return false;
}

void func_5(var uParam0, int iParam1)
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_20(uParam0);
	}
}

bool func_6(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_7(int iParam0, int iParam1)
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

int func_8(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar0, true, iParam0, false))
	{
		if (func_21(bVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(bVar0) || func_22(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_9(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = (*uParam0)[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_11(uParam0, 0);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	if ((func_23() != -1 && func_24()) || func_25())
	{
		if (func_26((*uParam0)[0], 0))
		{
			func_27(uParam0);
			func_20(uParam0);
		}
		return;
	}
	if (uParam0->f_58)
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_CRAFTING_SEQUENCE"));
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	switch (func_10(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_28(uParam0))
			{
				func_29(uParam0);
				func_30(uParam0);
				func_31(uParam0);
			}
			if (func_32(uParam0))
			{
				func_5(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_23() == 0 && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_27(uParam0);
				return;
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
				if (func_33())
				{
					func_34(0);
				}
			}
			if (((uParam0->f_34 || func_35((*uParam0)[0], 1)) || func_36((1 << 13))) || uParam0->f_35)
			{
				func_37(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_38(uParam0))
			{
				uParam0->f_62 = 1;
				if (func_36((1 << 12)))
				{
					uParam0->f_52 = 0;
				}
				else if (func_36((1 << 13)))
				{
					uParam0->f_52 = 4;
				}
				func_5(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_39(uParam0))
			{
				func_5(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_40(uParam0))
			{
				func_5(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
			if (func_42(uParam0, 0))
			{
				if (func_43(uParam0, 0))
				{
					func_5(uParam0, 8);
				}
				else if (uParam0->f_31)
				{
					func_5(uParam0, 1);
				}
				else
				{
					func_5(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_62)
			{
				func_5(uParam0, 4);
				return;
			}
			if (func_44(uParam0))
			{
				func_43(uParam0, 1);
				func_5(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("CRAFTING")))
				{
					Global_1911914.f_1580 = 0;
					func_5(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
			if (func_42(uParam0, 1))
			{
				func_5(uParam0, 10);
			}
			break;
		case 10:
			func_45(0);
			if (func_23() == 0 && CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS())
			{
				func_27(uParam0);
				return;
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_46(uParam0, 1);
				(*uParam0)[2] = func_47("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
				if (func_48(32))
				{
					func_49((*uParam0)[2], 0, 1);
				}
				else
				{
					func_49((*uParam0)[2], 1, 1);
				}
				(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
				if (func_21(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_50(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
				if (func_51(uParam0->f_75))
				{
					func_52((*uParam0)[1], "CAMP_REC_COOK", 1);
				}
				else if (func_53(uParam0->f_75, -1636519629) == -701492487)
				{
					func_52((*uParam0)[1], "CAMP_REC_BREW", 1);
				}
				else
				{
					func_52((*uParam0)[1], "CAMP_REC_MAKE", 1);
				}
				(*uParam0)[3] = func_47(func_54(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
				(*uParam0)[5] = func_55("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				func_56((*uParam0)[5], joaat("INPUT_GAME_MENU_LEFT"));
				func_56((*uParam0)[5], joaat("INPUT_GAME_MENU_RIGHT"));
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
				{
					iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
				}
				if (iVar2 > 1 && func_21(uParam0->f_77, 0))
				{
					func_49((*uParam0)[5], 1, 1);
				}
				else
				{
					func_49((*uParam0)[5], 0, 1);
				}
				(*uParam0)[6] = func_47("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
				if (!uParam0->f_82)
				{
					func_52((*uParam0)[6], "INFO", 1);
				}
				else
				{
					func_52((*uParam0)[6], "INGREDIENTS", 1);
				}
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_40) == 0)
				{
					func_57(uParam0);
					func_49((*uParam0)[6], 0, 1);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
				}
				func_58(uParam0, uParam0->f_77, uParam0->f_78);
				func_31(uParam0);
			}
			if (Global_1911914.f_1580)
			{
				Global_1911914.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49((*uParam0)[5], 0, 1);
				func_5(uParam0, 9);
			}
			else if (func_59((*uParam0)[2], 1))
			{
				if (uParam0->f_34)
				{
					func_5(uParam0, 16);
				}
				else
				{
					func_60(uParam0, 0);
					func_61("Exit", "SSCRFT_Sounds");
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_5(uParam0, 1);
					}
					else
					{
						func_5(uParam0, 3);
					}
				}
			}
			else if (func_35((*uParam0)[1], 1))
			{
				func_62(uParam0);
			}
			else if (func_35((*uParam0)[3], 1))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_57 = !uParam0->f_57;
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49((*uParam0)[5], 0, 1);
				func_5(uParam0, 9);
			}
			else if (func_63((*uParam0)[5], 0, 1))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Left", "SSCRFT_Sounds");
					func_64(uParam0, 0);
				}
			}
			else if (func_63((*uParam0)[5], 1, 1))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Right", "SSCRFT_Sounds");
					func_64(uParam0, 1);
				}
			}
			else if (func_35((*uParam0)[6], 1))
			{
				func_65(uParam0, 1);
			}
			else
			{
				iVar3 = joaat("CRAFTING_MENU");
				while (UIEVENTS::EVENTS_UI_IS_PENDING(iVar3))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iVar3, &iVar4))
					{
						if (iVar4 == joaat("TAB_PAGE_INCREMENT") || iVar4 == joaat("TAB_PAGE_DECREMENT"))
						{
							func_66(uParam0);
						}
						else if (iVar4 == joaat("ITEM_FOCUSED"))
						{
							func_67(uParam0, &iVar4);
						}
						else if (iVar4 == joaat("ITEM_SELECTED"))
						{
							if (func_26((*uParam0)[1], 0))
							{
								func_62(uParam0);
							}
						}
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar3);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			iVar8 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);
			iVar9 = func_53(uParam0->f_77, -1636519629);
			if (iVar8 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6.0f);
					PED::_ADD_SCENARIO_TRANSITION(Global_35);
				}
				return;
			}
			if (iVar9 != -715814988)
			{
				if (iVar8 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNIFE1_TRANS_KNEEL1"), 6.0f);
						PED::_ADD_SCENARIO_TRANSITION(Global_35);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				if (((((((((iVar9 == 414472632 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_63, true, false)) || (iVar9 == -1136843638 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_66, true, false))) || (uParam0->f_88 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_88))) || (iVar9 == -732326901 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_68, true, false))) || (iVar9 == 786205940 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_67, true, false))) || (iVar9 == -1141771998 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_69, true, false))) || (iVar9 == 364689687 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_70, true, false))) || (iVar9 == -842117252 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_71, true, false))) || (iVar9 == -1610298873 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_72, true, false)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_65, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
				if (iVar8 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (uParam0->f_31)
					{
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNEEL1_TRANS_KNIFE1"), 2.0f);
							PED::_ADD_SCENARIO_TRANSITION(Global_35);
						}
						return;
					}
				}
			}
			if (func_28(uParam0))
			{
				func_31(uParam0);
				func_69(uParam0, 0, &uVar0);
				func_68(uParam0);
				if (func_70((*uParam0)[1]))
				{
					func_71(uParam0[1], 1, 1);
				}
				if (func_72(iVar9))
				{
					uParam0->f_53 = 250;
					(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
					func_58(uParam0, uParam0->f_77, uParam0->f_78);
					func_73((*uParam0)[1], -1067771379, 0, 1);
					func_74((*uParam0)[1], 10, 1, 1);
					func_74((*uParam0)[1], 11, 1, 1);
					func_49((*uParam0)[1], 0, 1);
				}
				else
				{
					(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
					func_73((*uParam0)[1], -1067771379, 0, 1);
					func_75((*uParam0)[1], 1, 1);
					func_74((*uParam0)[1], 10, 1, 1);
					func_74((*uParam0)[1], 11, 1, 1);
					func_49((*uParam0)[1], 0, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_72(iVar9))
			{
				if (!uParam0->f_36)
				{
					if (func_26((*uParam0)[1], 0))
					{
						if (func_76((*uParam0)[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_36 = 1;
							func_49((*uParam0)[1], 0, 1);
							func_49((*uParam0)[4], 0, 1);
						}
					}
				}
				if ((((((iVar9 == -1136843638 || iVar9 == -732326901) || iVar9 == 786205940) || iVar9 == -1141771998) || iVar9 == 364689687) || iVar9 == -842117252) || iVar9 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if ((uParam0->f_88 == joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463)) || (uParam0->f_88 != joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_86));
							}
							if (func_77(uParam0->f_77, joaat("CI_TAG_ITEM_THROWN")) && iVar9 != -842117252)
							{
								uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(func_78(uParam0->f_77, 0), 1, Global_36, true, 1.0f);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
								if (iVar9 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_79(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
								}
							}
							else
							{
								uParam0->f_86 = OBJECT::CREATE_OBJECT(uParam0->f_88, Global_36, true, true, false, false, false);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							}
							if (iVar9 == 786205940)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -1141771998 || iVar9 == -1610298873)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -842117252)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
							}
							else
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
						if (iVar9 == -732326901 || iVar9 == 364689687)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1.0f);
						}
						else if (iVar9 == -1141771998)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_36, true, 1.0f);
						}
						else if (iVar9 == -842117252)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("P_MOLOTOVEMPTY01X"), Global_36, true, true, false, false, true);
						}
						else if (iVar9 == -1610298873)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), Global_36, true, true, false, false, true);
							if (iVar9 == -1610298873)
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_79(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
							}
						}
						else
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("S_CFT_ARROW"), Global_36, true, true, false, false, false);
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
						if (iVar9 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar9 == -1141771998 || iVar9 == -1610298873) || iVar9 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("HIDEKNIFE")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_87))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, true);
						}
					}
				}
				else if (iVar9 == 414472632 || iVar9 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (!func_80(0))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
							if (uParam0->f_21 == -1)
							{
								func_82(uParam0, iVar9, 0);
							}
							return;
						}
						else if (func_83(uParam0->f_21))
						{
							return;
						}
						uParam0->f_21 = -1;
					}
					else
					{
						func_85(uParam0->f_77, uParam0->f_78, 1, func_84(), 0);
						func_86(uParam0->f_77, 1, 0, 1, 0);
						if (uParam0->f_31)
						{
							func_87();
						}
					}
					if (iVar9 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					uParam0->f_20++;
					uParam0->f_38++;
					if ((!func_88(uParam0->f_77, uParam0->f_78, 0, func_84(), 0, 0) || func_89(uParam0->f_77, 1, 0)) || uParam0->f_20 >= uParam0->f_37)
					{
						func_82(uParam0, iVar9, 0);
						return;
					}
				}
				if (!uParam0->f_36)
				{
					if (!(func_26((*uParam0)[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SAFETOBREAKOUT")))
						{
							func_82(uParam0, iVar9, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_20 < (uParam0->f_37 - 1))
				{
					func_49((*uParam0)[1], 1, 1);
					func_49((*uParam0)[4], 1, 1);
					uParam0->f_36 = 0;
				}
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_79(uParam0, iVar9), "player"))
				{
					func_82(uParam0, iVar9, 0);
				}
			}
			else if (func_90(&(uParam0->f_89), ((float)uParam0->f_53 / 1000.0f)))
			{
				if (!func_80(0))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
						if (uParam0->f_21 == -1)
						{
							func_82(uParam0, iVar9, 0);
						}
						return;
					}
					else if (func_83(uParam0->f_21))
					{
						return;
					}
					uParam0->f_21 = -1;
				}
				else
				{
					func_85(uParam0->f_77, uParam0->f_78, 1, func_84(), 0);
					func_86(uParam0->f_77, 1, 1, 1, 0);
					if (uParam0->f_31)
					{
						func_87();
					}
				}
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_91((1 << 17));
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				uParam0->f_55 = 0;
				bVar10 = true;
				if (!func_88(uParam0->f_77, uParam0->f_78, 0, func_84(), 0, 0) || func_89(uParam0->f_77, 1, 0))
				{
					bVar10 = false;
				}
				func_82(uParam0, iVar9, bVar10);
			}
			break;
		case 0:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
			}
			break;
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			if (!func_48(128))
			{
				if (!func_26((*uParam0)[2], 0))
				{
					func_49((*uParam0)[2], 1, 1);
					func_75((*uParam0)[2], 0, 1);
				}
				if (!func_26((*uParam0)[4], 0))
				{
					func_49((*uParam0)[4], 1, 1);
					func_75((*uParam0)[4], 1, 1);
				}
			}
			if (func_59((*uParam0)[2], 1))
			{
				func_27(uParam0);
				func_92(&(uParam0->f_89));
				func_5(uParam0, 14);
				return;
			}
			else if (func_93((*uParam0)[4], 1))
			{
				func_27(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
				iVar11 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
				if (iVar11 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar9 = func_53(uParam0->f_77, -1636519629);
				iVar12 = func_79(uParam0, iVar9);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar12, "player", Global_35);
				func_60(uParam0, 0);
				func_61("Exit", "SSCRFT_Sounds");
				if (uParam0->f_31)
				{
					func_5(uParam0, 1);
				}
				else
				{
					func_5(uParam0, 0);
				}
				return;
			}
			else if (func_35((*uParam0)[1], 1))
			{
				func_49((*uParam0)[4], 0, 1);
				func_49((*uParam0)[2], 0, 1);
				func_49((*uParam0)[1], 0, 1);
				iVar9 = func_53(uParam0->f_77, -1636519629);
				iVar13 = func_79(uParam0, iVar9);
				if (iVar13 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar13, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar13);
				}
				func_92(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_5(uParam0, 12);
				return;
			}
			if (func_94((*uParam0)[4], 1))
			{
				if (!func_95(&(uParam0->f_89)))
				{
					func_96(&(uParam0->f_89));
				}
				else if (func_90(&(uParam0->f_89), 0.1f))
				{
					func_52((*uParam0)[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_89)))
				{
					func_92(&(uParam0->f_89));
				}
				func_52((*uParam0)[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			iVar9 = func_53(uParam0->f_77, -1636519629);
			iVar14 = func_79(uParam0, iVar9);
			if ((iVar14 == 0 || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar14) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar14, false))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SHOWMENU")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				iVar15 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
				if (iVar15 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar14, "player", Global_35);
				func_5(uParam0, 15);
			}
			break;
		case 1:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				if (func_70((*uParam0)[0]))
				{
					func_49((*uParam0)[0], 0, 1);
				}
				func_31(uParam0);
			}
			break;
		case 16:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				func_31(uParam0);
			}
			func_60(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
			Global_1911914.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_10(var uParam0)
{
	return uParam0->f_8;
}

void func_11(var uParam0, bool bParam1)
{
	func_27(uParam0);
	func_60(uParam0, 0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
	if (func_33())
	{
		func_34(0);
	}
	if (bParam1)
	{
		func_97(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_17));
	}
	if (uParam0->f_22)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_70);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_71);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_72);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1911914.f_1576 = 0;
	if (func_23() == -1)
	{
		func_5(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_81(uParam0->f_77, uParam0->f_78);
				func_98(uParam0->f_77, uParam0->f_20);
			}
		}
		uParam0->f_21 = -1;
		func_5(uParam0, 0);
	}
}

bool func_12()
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

int func_13(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return func_100(func_99(iParam0));
}

bool func_14(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_15(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_16(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_17()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_18()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	iVar0 = func_101(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_19()
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

void func_20(var uParam0)
{
	uParam0->f_18 = 1;
}

bool func_21(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_22(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

int func_23()
{
	return Global_1572887.f_12;
}

bool func_24()
{
	return Global_1898068;
}

bool func_25()
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DOC_PLAYER_JOURNAL")) > 0;
}

bool func_26(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	return !func_102(iParam0, 4);
}

void func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_28(var uParam0)
{
	return uParam0->f_18;
}

void func_29(var uParam0)
{
	strcpy_s(&(uParam0->f_17), 8, "CAMP");
}

void func_30(var uParam0)
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_17));
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_RIFLE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_REPEATER"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_45MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_9MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_SHOTGUN"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_ARROW"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_TOMAHAWK01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE05"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MOLOTOVEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	func_103(uParam0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_31)
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

void func_31(var uParam0)
{
	uParam0->f_18 = 0;
}

bool func_32(var uParam0)
{
	if (func_104(&(uParam0->f_17)))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_17)))
		{
			return false;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_63)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_65)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_66)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_67)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_68)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_69)))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_RIFLE")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_REPEATER")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_45MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_9MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_ARROW")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_TOMAHAWK01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_KNIFE05")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_SHOTGUN")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MOLOTOVEMPTY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV02")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_STICK_DYNAMITE01")))
	{
		return false;
	}
	if (uParam0->f_31)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFLESHYMEAT01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDBIRDBREAST01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDEFLESHYMEAT01XB")))
		{
			return false;
		}
	}
	return true;
}

bool func_33()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1911914.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
}

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_36(int iParam0)
{
	return (Global_1392040 & iParam0) != 0;
}

void func_37(var uParam0)
{
	func_34(1);
	func_5(uParam0, 4);
}

bool func_38(var uParam0)
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914.f_1576 = 0;
		uParam0->f_55 = 0;
		func_107(uParam0, joaat("COST_CRAFTING"));
		uParam0->f_54++;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		func_107(uParam0, joaat("COST_CRAFTING_FIRE"));
		uParam0->f_54++;
		return false;
	}
	else
	{
		func_107(uParam0, joaat("COST_CRAFTING_KNIFE"));
		uParam0->f_54 = 0;
	}
	uParam0->f_55 = 0;
	return true;
}

bool func_39(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "filter", func_108(uParam0->f_52));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterCount", 5 + 1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterIndex", uParam0->f_52);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "tipText", "");
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		strcpy_s(&cVar1, 16, "ingredient");
		StringIntConCat(&cVar1, iVar0, 16);
		func_109(&(uParam0->f_41[iVar0]), &cVar1, uParam0);
		strcpy_s(&cVar1, 16, "tip");
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_46[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_39, &cVar1);
		strcpy_s(&cVar1, 16, "Text");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_46[iVar0], &cVar1, "");
		strcpy_s(&cVar1, 16, "Enabled");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_46[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		if (func_21(Global_1911914[iVar0 /*9*/].f_6, 0))
		{
			func_110(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 30)
			{
				uParam0->f_55 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (uParam0->f_60 == 0)
	{
		uParam0->f_57 = 0;
	}
	uParam0->f_56 = 0;
	return true;
}

void func_41(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_40))
	{
		uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);
	}
	uParam0->f_76 = joaat("COST_CRAFTING");
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
}

bool func_42(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		if ((uParam0->f_57 && Global_1911914[iVar0 /*9*/].f_2) || !uParam0->f_57)
		{
			if (Global_1911914.f_1585 != 0)
			{
				bVar3 = func_77(Global_1911914[iVar0 /*9*/].f_6, Global_1911914.f_1585);
				if (uParam0->f_81 == bVar3)
				{
				}
				else
				{
					func_110(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_55 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_55 = 0;
				if (!uParam0->f_81 && Global_1911914.f_1585 != 0)
				{
					uParam0->f_81 = 1;
					return false;
				}
				uParam0->f_56 = 0;
				uParam0->f_81 = 0;
				return true;
			}
		}
	}
}

bool func_43(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_58 = 1;
	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), joaat("RESTORE_MENU")))
		{
			func_111(1);
			func_112(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("CRAFTING"));
		if (iVar0 == 0)
		{
			func_112(8);
			func_111(1);
			func_113(0, -100);
			func_113(2, -100);
			func_113(1, -100);
			return true;
		}
	}
	return false;
}

bool func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		func_114(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_55 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_45(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = func_115(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.0f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_46(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

int func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_102(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_116(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_48(int iParam0)
{
	return (Global_1392040.f_1 & iParam0) != 0;
}

void func_49(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (bParam1)
	{
		func_117(iParam0, 4);
		func_118(iVar0, 1);
		func_119(iVar0, 1);
	}
	else
	{
		func_120(iParam0, 4);
		func_119(iVar0, 0);
	}
}

void func_50(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	bVar2 = iVar0;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (func_21(bVar2, 0) && func_121(bVar2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = bVar2;
		uParam0->f_78 = iVar1;
		func_71(uParam0[1], 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1911914)
			{
				iVar6 = Global_1911914[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_79 = 1;
			func_49((*uParam0)[5], 1, 1);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
			uParam0->f_79 = 0;
			func_49((*uParam0)[5], 0, 1);
		}
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000.0f));
		uParam0->f_80 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
		func_74((*uParam0)[1], 11, 1, 1);
		if (Global_1911914.f_1579 || !func_124(uParam0->f_77, uParam0->f_78, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_125(bVar2));
			func_65(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			if (Global_1911914.f_1579 || !func_124(uParam0->f_77, uParam0->f_78, 1))
			{
				func_126(uParam0);
			}
		}
	}
}

bool func_51(bool bParam0)
{
	if (func_127(bParam0) == joaat("CONSUMABLE") && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, (1 << 24)))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

int func_53(bool bParam0, int iParam1)
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

char* func_54(var uParam0)
{
	if (uParam0->f_57)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_55(char* sParam0, int iParam1, int iParam2, int iParam3)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_102(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_116(iVar1, iParam1, sParam0, 0, 3, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, (1 << 30), 0, 1065353216, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

void func_57(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_51);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[iVar0], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[iVar0], "inUse", false);
		iVar0++;
	}
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
}

void func_58(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_21(bParam1, 0))
	{
		if (func_70((*uParam0)[1]))
		{
			func_49((*uParam0)[1], 0, 1);
		}
		return;
	}
	bVar2 = func_84();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1911914.f_1579 && func_124(bParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_128(bParam1, iParam2, &uVar1, &uVar0, &bVar5, 0, bVar2, 0, 1))
	{
		bVar3 = false;
	}
	else if (func_23() == -1)
	{
		if (func_36((1 << 12)))
		{
			if (func_53(bParam1, 1697966752) != 337650881)
			{
				bVar3 = false;
			}
		}
		else if (func_36((1 << 13)))
		{
			if (bParam1 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
			{
				bVar3 = false;
			}
		}
	}
	if (bVar3)
	{
		if (((func_89(bParam1, 1, 0) || ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(bParam1, -1636519629) == -701492487)) || (!uParam0->f_31 && ((uParam0->f_80 || iParam2 == joaat("COST_CRAFTING_KNIFE")) || iParam2 == joaat("COST_CRAFTING_GRILL")))) || (!uParam0->f_32 && iParam2 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar3 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			iVar6 = func_129(bParam1, 0, 0);
			iVar7 = func_130(bParam1, 0);
			iVar8 = func_131(bParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 -= iVar6;
			}
			uParam0->f_37 = func_132(iVar7, iVar8);
		}
	}
	if (func_70((*uParam0)[1]))
	{
		if (func_51(bParam1))
		{
			func_52((*uParam0)[1], "CAMP_REC_COOK", 1);
		}
		else if (func_53(bParam1, -1636519629) == -701492487)
		{
			func_52((*uParam0)[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_52((*uParam0)[1], "CAMP_REC_MAKE", 1);
		}
		func_49((*uParam0)[1], bVar3, 1);
	}
	func_133(bParam1, iParam2, uParam0, bVar5, bVar4);
	if (func_70((*uParam0)[6]))
	{
		func_49((*uParam0)[6], !bVar4, 1);
	}
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_60(var uParam0, bool bParam1)
{
	func_111(0);
	if (bParam1)
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), joaat("FOCUS_CAMERA")))
		{
		}
		else
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("CRAFTING"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("CRAFTING"));
	}
	uParam0->f_58 = 0;
	func_91(8);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

void func_61(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iVar0, sParam0, sParam1, true);
		Global_1955838[Global_1955838.f_25] = iVar0;
		Global_1955838.f_25 += 1 % 24;
	}
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_53(uParam0->f_77, -1636519629) == -701492487)
	{
		func_60(uParam0, 0);
	}
	else
	{
		func_60(uParam0, 1);
	}
	func_71(uParam0[1], 1, 1);
	func_71(uParam0[5], 1, 1);
	func_71(uParam0[6], 1, 1);
	func_71(uParam0[3], 1, 1);
	uParam0->f_36 = 1;
	if (!uParam0->f_80 && !func_51(uParam0->f_77))
	{
		func_112((1 << 17));
		iVar0 = func_53(uParam0->f_77, -1636519629);
		iVar1 = func_79(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_36 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_88 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					uParam0->f_88 = joaat("S_CFT_MOLOTOV01");
				}
				else if (func_77(uParam0->f_77, joaat("CI_TAG_ITEM_THROWN")))
				{
					uParam0->f_88 = func_134(func_78(uParam0->f_77, 0));
				}
				else if (func_77(uParam0->f_77, 457423347))
				{
					uParam0->f_88 = joaat("S_CFT_ARROW_DYNAMITE");
				}
				else if (func_77(uParam0->f_77, -1846429632))
				{
					uParam0->f_88 = joaat("S_CFT_ARROW_FIRE");
				}
				else if (func_77(uParam0->f_77, -1067199465))
				{
					uParam0->f_88 = joaat("S_CFT_ARROW_SMALLGAME");
				}
				else
				{
					uParam0->f_88 = func_134(uParam0->f_77);
				}
			}
			if (uParam0->f_88 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_88, false);
			}
		}
		func_52((*uParam0)[2], "CAMP_REC_BACK", 1);
		func_73((*uParam0)[2], -1067771379, 0, 1);
		func_49((*uParam0)[2], 0, 1);
		func_75((*uParam0)[2], 0, 1);
		(*uParam0)[4] = func_47("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, (1 << 30), joaat("MEDIUM_TIMED_EVENT"), 0);
		func_135(uParam0[4], "INPUT_PCRAFT_EXIT");
		func_73((*uParam0)[4], -1067771379, 0, 1);
		func_49((*uParam0)[4], 0, 1);
		func_74((*uParam0)[4], 19, 1, 1);
		func_74((*uParam0)[4], 20, 1, 1);
		func_74((*uParam0)[4], 13, 1, 1);
		func_74((*uParam0)[2], 13, 1, 1);
		if (func_70((*uParam0)[2]))
		{
			func_73((*uParam0)[2], -1067771379, 0, 1);
		}
		func_5(uParam0, 12);
	}
	else
	{
		func_5(uParam0, 11);
	}
}

bool func_63(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

void func_64(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> /*80*/ sVar5;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<37> /*296*/ sVar19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_78 == joaat("COST_CRAFTING_KNIFE") || uParam0->f_78 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0--;
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			sVar5 = -1;
			sVar5.f_1 = -1;
			sVar5.f_2 = -1;
			sVar5.f_3 = -1;
			sVar5.f_4 = -1;
			sVar5.f_5 = -1;
			sVar5.f_6 = -1;
			sVar5.f_7 = -1;
			sVar5.f_8 = -1;
			if (iVar0 == 0)
			{
				sVar5 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("COST_CRAFTING_KNIFE"), 0, -1, func_53(uParam0->f_77, 1697966752), 0) /*10*/ };
				if (func_137(sVar5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_78 = joaat("COST_CRAFTING_KNIFE");
						uParam0->f_77 = func_138(0, iVar3);
						bVar2 = true;
					}
					func_139(iVar3);
				}
			}
			else
			{
				sVar5 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, func_53(uParam0->f_77, 1697966752), 0) /*10*/ };
				if (func_137(sVar5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = joaat("CI_TAG_ITEM_COOKED_MINT");
						}
						else if (iVar0 == 2)
						{
							iVar15 = joaat("CI_TAG_ITEM_COOKED_OREGANO");
						}
						else if (iVar0 == 3)
						{
							iVar15 = joaat("CI_TAG_ITEM_COOKED_THYME");
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							bVar17 = func_138(iVar16, iVar3);
							if (func_77(bVar17, iVar15))
							{
								uParam0->f_78 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_77 = bVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_139(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_77);
			sVar19.f_4 = 15;
			sVar19.f_36 = 10;
			while (((sVar19.f_2 != joaat("COST_TYPE_CRAFT") || sVar19.f_0 == joaat("COST_CRAFTING_EFFICIENT")) || (!Global_1911914.f_1579 && func_124(uParam0->f_77, sVar19.f_0, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0--;
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_77, iVar0, &sVar19))
				{
				}
			}
			uParam0->f_78 = sVar19.f_0;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eCost", uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eOutputItem", uParam0->f_77);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1911914)
		{
			iVar68 = Global_1911914[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_125(uParam0->f_77));
		func_114(uParam0, -1, func_84(), uParam0->f_73, 0, bVar2, 0);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
	}
}

void func_65(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_82 = !uParam0->f_82;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", !uParam0->f_82);
	if (!uParam0->f_82)
	{
		func_52((*uParam0)[6], "INFO", 1);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_140(uParam0);
	}
	else
	{
		func_52((*uParam0)[6], "INGREDIENTS", 1);
		func_126(uParam0);
	}
	if (uParam0->f_78 == joaat("COST_CRAFTING_KNIFE"))
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_131(uParam0->f_77, uParam0->f_78, func_84(), 0);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_66(var uParam0)
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_141(uParam0);
	func_57(uParam0);
	func_140(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", false);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_58(uParam0, 0, 0);
	func_5(uParam0, 9);
}

void func_67(var uParam0, int iParam1)
{
	func_57(uParam0);
	func_140(uParam0);
	func_50(uParam0, &(iParam1->f_3));
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_53(uParam0->f_77, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar1 = func_142(uParam0->f_77);
			if (iVar1 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar1, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "arrow", uParam0->f_86, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_66, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar2 = func_142(uParam0->f_77);
			if (iVar2 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar2, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_143(uParam0->f_77), 0.0f, 0.0f, 0.0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "bullet", uParam0->f_85, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1.0f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_68, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_36, true, 1.0f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1.0f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		{
			uParam0->f_87 = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), Global_36, true, true, false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_87, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "RAG", uParam0->f_87, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_70);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_70, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_71, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_71);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_71, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_72, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_72);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000.0f));
		func_96(&(uParam0->f_89));
		TASK::TASK_PLAY_ANIM(Global_35, func_122(uParam0->f_77), func_123(uParam0->f_77), 8.0f, -8.0f, -1, 67108880, 0.0f, false, (1 << 12), false, "Satchel_Only_filter", false);
	}
}

void func_69(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70((*uParam0)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_70((*uParam2)[iVar1]))
				{
					if ((*uParam0)[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_49((*uParam0)[iVar0], bParam1, 1);
		}
		iVar0++;
	}
}

bool func_70(int iParam0)
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

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_106(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_144(iVar0);
	*uParam0 = 0;
}

bool func_72(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_74(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_75(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	func_118(iVar0, bParam1);
}

bool func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_77(bool bParam0, int iParam1)
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

bool func_78(bool bParam0, bool bParam1)
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
	if (func_21(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_145(bVar0) || func_146(bVar0))
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

int func_79(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_65;
		case -732326901:
			return uParam0->f_68;
		case -1136843638:
			return uParam0->f_66;
		case 786205940:
			return uParam0->f_67;
		case -1141771998:
			return uParam0->f_69;
		case 364689687:
			return uParam0->f_70;
		case 414472632:
			return uParam0->f_63;
		case -842117252:
			return uParam0->f_71;
		case -1610298873:
			return uParam0->f_72;
		default:
			break;
	}
	return 0;
}

bool func_80(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_147(bParam0));
}

int func_81(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<17> /*136*/ sVar5;
	int iVar22;
	struct<7> /*56*/ sVar23;
	struct<2> /*16*/ sVar30;

	if (!func_21(bParam0, 0))
	{
		return -1;
	}
	if (!func_88(bParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	sVar0 = { func_148(bParam0, 1, 0) /*5*/ };
	if (func_149(bParam0, &sVar0, 1, 0, 1))
	{
		return -1;
	}
	sVar5 = { func_150(bParam0, sVar0, sVar0.f_4, 1) /*17*/ };
	sVar5.f_13 = iParam1;
	sVar5.f_12 = joaat("ADD_REASON_PURCHASED");
	iVar22 = func_151(joaat("BUYBUNDLE"), &sVar5, 1);
	if (iVar22 == -1)
	{
		return -1;
	}
	sVar23.f_1 = 1;
	func_152(iVar22, sVar23);
	sVar30 = { func_153(bParam0) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar30, 1);
	return iVar22;
}

void func_82(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_55 = 0;
	func_112((1 << 18));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	iVar0 = func_79(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!func_48(128))
	{
		func_49((*uParam0)[2], 1, 1);
		func_49((*uParam0)[4], 1, 1);
	}
	func_75((*uParam0)[2], 0, 1);
	func_75((*uParam0)[4], 1, 1);
	func_154((*uParam0)[1], 1);
	func_71(uParam0[1], 1, 1);
	(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
	func_74((*uParam0)[1], 11, 1, 1);
	func_74((*uParam0)[1], 19, 1, 1);
	func_73((*uParam0)[1], -1067771379, 0, 1);
	func_49((*uParam0)[1], bParam2, 1);
	func_5(uParam0, 13);
}

bool func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_155(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_84()
{
	int iVar0;
	int iVar1;

	iVar0 = func_156(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_157(Global_35, iVar0, 1) < 400.0f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_85(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(bParam0, iParam1, 0, 1);
	return func_158(bParam0, iParam1, bParam2, bParam3, iParam4);
}

void func_86(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	struct<2> /*16*/ sVar1;
	Vector3 vVar3;
	int iVar10;

	if (!func_21(bParam0, 0))
	{
		return;
	}
	func_160(func_159(joaat("ITEMS_CRAFTED")), iParam1);
	if (bParam3 && bParam0 != joaat("CONSUMABLE_COFFEE"))
	{
		if (func_23() == -1)
		{
			if (func_77(bParam0, joaat("CI_TAG_ITEM_THROWN")))
			{
				bVar0 = func_161(func_78(bParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar0))
				{
					func_162(bVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_127(bParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_163(bParam0, 0))
				{
					func_164(bParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_165(bParam0, iParam1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		else
		{
			func_166(bParam0, iParam4, iParam1);
		}
	}
	sVar1 = { func_153(bParam0) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar1, iParam1);
	if (func_121(bParam0, 0))
	{
		sVar1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) /*2*/ };
	}
	else if (func_121(bParam0, 2))
	{
		sVar1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) /*2*/ };
	}
	else if (func_121(bParam0, 5))
	{
		sVar1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) /*2*/ };
	}
	else if (func_121(bParam0, 1))
	{
		sVar1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) /*2*/ };
	}
	else if (func_121(bParam0, 3))
	{
		sVar1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) /*2*/ };
	}
	else if (func_121(bParam0, 4))
	{
		sVar1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) /*2*/ };
	}
	STATS::_STAT_ID_INCREMENT_INT(&sVar1, 1);
	if (func_23() == 0)
	{
		Global_1051039 = bParam0;
		return;
	}
	if (bParam2)
	{
		if (func_121(bParam0, 0))
		{
			func_168(40);
		}
		else
		{
			func_168(39);
		}
	}
	iVar10 = 0;
	if ((ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar3) && vVar3.z == joaat("CLOTHING")) && func_169(Global_35, bParam0, &iVar10))
	{
		func_170(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 0);
	}
}

void func_87()
{
	if (func_171())
	{
		func_172(1);
	}
}

bool func_88(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_128(bParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

bool func_89(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_148(bParam0, 0, 0) /*5*/ };
	return func_149(bParam0, &sVar0, iParam1, 0, bParam2);
}

bool func_90(var uParam0, float fParam1)
{
	if (!func_95(uParam0))
	{
		return false;
	}
	if (func_173(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_91(int iParam0)
{
	if (func_36(iParam0))
	{
		Global_1392040 -= (Global_1392040 & iParam0);
	}
}

void func_92(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_93(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_94(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1945188[iVar0 /*18*/].f_4);
	}
	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_95(var uParam0)
{
	return func_174(*uParam0, 1);
}

void func_96(var uParam0)
{
	func_175(uParam0, 0.0f);
}

void func_97(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_69, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_70, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_71, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_72, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
}

void func_98(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_176(11, 1, 0);
		iVar0++;
	}
	if (func_121(bParam0, 0))
	{
		func_177(40);
	}
	else
	{
		func_177(39);
	}
}

int func_99(int iParam0)
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

int func_100(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_101(Vector3 vParam0, bool bParam3)
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
		if (!bParam3 || func_178(iVar0))
		{
			fVar3 = func_179(iVar0, vParam0);
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

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_103(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		uParam0->f_70 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_70);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		uParam0->f_71 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_71);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		uParam0->f_72 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_72);
	}
}

bool func_104(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_105(var uParam0, var uParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_103(uParam0);
		return false;
	}
	return true;
}

int func_106(int iParam0)
{
	return iParam0;
}

int func_107(var uParam0, int iParam1)
{
	struct<10> /*80*/ sVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;

	sVar0 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, iParam1, 0, -1, Global_1911914.f_1584, 0) /*10*/ };
	if (func_137(sVar0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = func_138(iVar12, iVar10);
			if (func_21(bVar13, 0))
			{
				if (uParam0->f_55 >= 175)
				{
				}
				else
				{
					if (Global_1911914.f_1584 == 0 && func_77(bVar13, joaat("CI_TAG_CRAFTING_RESTRICTED")))
					{
						if (!(Global_1911914.f_1585 != 0 && func_77(bVar13, Global_1911914.f_1585)))
						{
						}
						else if (func_77(bVar13, 266762988))
						{
						}
						else
						{
							func_180(uParam0, bVar13, iParam1);
							func_181(uParam0, bVar13, iParam1);
						}
						iVar12++;
						func_182(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

void func_109(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_39, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_110(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = Global_1911914[iParam2 /*9*/].f_6;
	if (bParam4 || func_121(bVar0, uParam0->f_52))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					func_114(uParam0, -1, bParam3, Global_1911914[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, uParam0->f_56, joaat("CRAFTING_LIST_ITEM"), Global_1911914[iParam2 /*9*/].f_1);
			}
			else
			{
				func_183(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[iParam2 /*9*/].f_1);
			}
			func_183(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = Global_1911914[iParam2 /*9*/].f_6;
			uParam0->f_76 = Global_1911914[iParam2 /*9*/].f_5;
			uParam0->f_74 = Global_1911914[iParam2 /*9*/].f_1;
		}
		uParam0->f_56++;
	}
}

void func_111(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

void func_112(int iParam0)
{
	if (!func_36(iParam0))
	{
		Global_1392040 |= iParam0;
	}
}

void func_113(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_114(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<2> /*16*/ sVar15;
	struct<2> /*16*/ sVar18;
	bool bVar40;
	int iVar41;
	struct<7> /*56*/ sVar42;
	int iVar49;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1911914[iParam1 /*9*/].f_1;
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_131(bVar3, iVar4, bParam2, 0);
	iVar6 = func_129(bVar3, 0, 0);
	iVar7 = func_130(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 -= iVar6;
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_132(iVar7, iVar5), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (func_36((1 << 12)))
	{
		iVar9 = func_184(((iVar7 > 0 && iVar5 > 0) && func_53(bVar3, 1697966752) == 337650881), 1, 0);
	}
	else if (func_36((1 << 13)))
	{
		iVar9 = func_184(((iVar7 > 0 && iVar5 > 0) && bVar3 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT")), 1, 0);
	}
	else
	{
		iVar9 = func_184((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_185(bVar3))
	{
		if (func_186(bVar3, iVar4, uParam0, bParam2, &bVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				iVar4 = iVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", iVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar4 == joaat("COST_CRAFTING_KNIFE") || iVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar4 == joaat("COST_CRAFTING_GRILL"))
	{
		iVar9 = 0;
	}
	if (!Global_1911914.f_1579 && func_124(bVar3, iVar4, 1))
	{
		iVar9 = 0;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (iVar9 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(bVar3, -1636519629) == -701492487)
		{
			Global_1911914[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_57 && iVar9 == 0) && Global_1911914[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_40, iVar0);
		}
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (func_187(bVar3, &sVar15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "texture", sVar15.f_0);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "textureDictionary", sVar15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		sVar18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar3, &sVar18))
		{
			iVar41 = 0;
			while (iVar41 < sVar18.f_0)
			{
				if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar18.f_1[iVar41], &sVar42))
				{
					iVar49 = sVar42.f_2;
					switch (sVar42.f_1)
					{
						case joaat("EFFECT_DEADEYE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case joaat("EFFECT_DEADEYE_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case joaat("EFFECT_DEADEYE_CORE_GOLD"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_DEADEYE_OVERPOWERED"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_HEALTH"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case joaat("EFFECT_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case joaat("EFFECT_HEALTH_OVERPOWERED"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_HEALTH_CORE_GOLD"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_STAMINA"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case joaat("EFFECT_STAMINA_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case joaat("EFFECT_STAMINA_CORE_GOLD"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_STAMINA_OVERPOWERED"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_HORSE_HEALTH"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case joaat("EFFECT_HORSE_HEALTH_OVERPOWERED"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_HORSE_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case joaat("EFFECT_HORSE_HEALTH_CORE_GOLD"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_HORSE_STAMINA_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case joaat("EFFECT_HORSE_STAMINA_CORE_GOLD"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", sVar42.f_6);
							break;
						case joaat("EFFECT_HORSE_STAMINA_OVERPOWERED"):
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", sVar42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!uParam0->f_31)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_115(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_118(iParam0, 1);
	func_119(iParam0, 1);
	func_120(iParam0, 128);
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_118(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_102(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_119(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_121(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(bParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_77(bParam0, joaat("CI_TAG_ITEM_MEDICINE")) || func_77(bParam0, joaat("CI_TAG_ITEM_REMEDY"))) && !func_77(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM")))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (func_77(bParam0, joaat("CI_TAG_ITEM_THROWN")))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == joaat("WEAPON"))
			{
				return true;
			}
			else if (iVar0 == joaat("AMMO"))
			{
				if (func_77(bParam0, joaat("CI_TAG_ITEM_THROWN")))
				{
					return true;
				}
			}
			break;
		case 0:
			if (func_51(bParam0) || func_53(bParam0, -1636519629) == -701492487)
			{
				return true;
			}
			break;
		case 4:
			if (func_77(bParam0, joaat("CI_TAG_ITEM_HUNTING")))
			{
				return true;
			}
			break;
		case 5:
			if (func_77(bParam0, joaat("CI_TAG_ITEM_HORSE_ITEM")))
			{
				return true;
			}
			break;
	}
	return false;
}

char* func_122(var uParam0)
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_123(var uParam0)
{
	return "craft_trans_stow";
}

bool func_124(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_23() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return false;
	}
	if (!func_188(bParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_125(bool bParam0)
{
	struct<19> /*152*/ sVar0;

	sVar0.f_2 = 5;
	sVar0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &sVar0))
	{
		return sVar0.f_1;
	}
	return 0;
}

void func_126(var uParam0)
{
	if (func_77(uParam0->f_77, joaat("CI_TAG_ITEM_CONSUMABLE")) && !func_77(uParam0->f_77, joaat("CI_TAG_ITEM_BAIT")))
	{
		if (func_121(uParam0->f_77, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
	}
}

int func_127(bool bParam0)
{
	Vector3 vVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_128(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<2> /*16*/ sVar0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if ((!Global_1911914.f_1579 && func_124(bParam0, iParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!func_189(bParam0, 1, iParam1, &sVar0, bParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = sVar0.f_0;
		*uParam3 = sVar0.f_1;
		return false;
	}
	return true;
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_127(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_190(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_191(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam2), bParam0, false);
	return iVar2;
}

int func_130(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_148(bParam0, 0, 0) /*5*/ };
	return func_192(bParam0, &sVar0, 0, bParam1);
}

int func_131(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> /*16*/ sVar0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!func_193(bParam0, iParam1, &sVar0, &iVar31, bParam3, 0))
	{
		return 0;
	}
	bVar33 = func_80(0);
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (sVar0[iVar32 /*2*/] == 0)
		{
			Jump @256; // curOff = 64
		}
		else
		{
			iVar35 = func_129(sVar0[iVar32 /*2*/], 0, 0);
			if (bVar33)
			{
				if (func_194(sVar0[iVar32 /*2*/]) || func_195(sVar0[iVar32 /*2*/]))
				{
					iVar35 += func_196(sVar0[iVar32 /*2*/], 0);
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 += func_197(7, sVar0[iVar32 /*2*/], &iVar36);
					}
				}
				else if (bParam2)
				{
					iVar35 += (func_198(7, sVar0[iVar32 /*2*/]) + func_199(sVar0[iVar32 /*2*/]));
				}
			}
			if (iVar35 < sVar0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar35 /= sVar0[iVar32 /*2*/].f_1;
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_133(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> /*16*/ sVar0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	struct<2> /*16*/ sVar36;
	int iVar39;
	bool bVar40;
	int iVar41;
	char* sVar42;
	char cVar43[16];
	int iVar45;
	int iVar46;
	int iVar47;
	var uVar48;
	int iVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_51);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_51, uParam2->f_46[iVar33]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "inUse", false);
		iVar33++;
	}
	if (!bParam4 && func_193(bParam0, iParam1, &sVar0, &iVar32, 1, 0))
	{
		bVar35 = func_84();
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = sVar0[iVar33 /*2*/];
				if (func_21(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "visible", true);
					if (func_187(bVar31, &sVar36, joaat("INVENTORY"), 0, 0, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[iVar33], "texture", sVar36.f_0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[iVar33], "textureDictionary", sVar36.f_1);
					}
					iVar39 = func_129(bVar31, 0, 0);
					if (func_194(bVar31) || func_195(bVar31))
					{
						if (bVar35)
						{
							iVar41 = 0;
							iVar39 += func_197(7, bVar31, &iVar41);
						}
						iVar39 += func_196(bVar31, 0);
					}
					bVar40 = iVar39 >= sVar0[iVar33 /*2*/].f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[iVar33], "count", iVar39);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[iVar33], "enabled", func_184(bVar40, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "inUse", true);
					if (!bVar40)
					{
						bVar34 = false;
					}
					sVar42 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, sVar0[iVar33 /*2*/]), sVar0[iVar33 /*2*/].f_1);
					strcpy_s(&cVar43, 16, "Text");
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_46[iVar33], &cVar43, sVar42);
					strcpy_s(&cVar43, 16, "Enabled");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_46[iVar33], &cVar43, func_184(bVar40, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_51, -1, joaat("CRAFTING_RECIPE_LINE"), uParam2->f_46[iVar33]);
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == joaat("COST_CRAFTING_KNIFE")) || uParam2->f_78 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar34 = false;
			if (func_51(bParam0))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else if (!uParam2->f_32 && uParam2->f_78 == joaat("COST_CRAFTING_GRILL"))
		{
			bVar34 = false;
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			iVar45 = func_129(bParam0, 0, 0);
			iVar46 = func_130(bParam0, 0);
			if ((iVar46 - iVar45) > 0 || iVar46 == -1)
			{
				iVar47 = func_53(bParam0, -1636519629);
				if (!uParam2->f_83 && iVar47 == -701492487)
				{
					bVar34 = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_PERC"));
				}
				else if (iVar47 == -701492487 && uParam2->f_84 > 0)
				{
					bVar34 = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_PERC_FULL"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(bParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(bParam3, &uVar48))));
				}
				else
				{
					iVar49 = func_131(bParam0, uParam2->f_78, func_84(), 0);
					if (uParam2->f_78 == joaat("COST_CRAFTING_KNIFE"))
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_73, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_39, "ShowRpgDescription"))
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar49));
						}
					}
					else if (uParam2->f_78 == joaat("COST_CRAFTING_GRILL"))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar49));
					}
					else if (iVar47 == -701492487)
					{
						if (iVar49 == 1)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", iVar49));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", iVar49));
						}
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", iVar49));
					}
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", iVar45, iVar46, MISC::VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == joaat("COST_CRAFTING_KNIFE")) || uParam2->f_78 == joaat("COST_CRAFTING_GRILL")))
	{
		bVar34 = false;
		if (func_51(bParam0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (!uParam2->f_32 && uParam2->f_78 == joaat("COST_CRAFTING_GRILL"))
	{
		bVar34 = false;
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

int func_134(bool bParam0)
{
	struct<5> /*40*/ sVar0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_4;
}

void func_135(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_70(*uParam0))
	{
		iVar0 = func_106(*uParam0);
		if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
		{
			HUD::_UI_PROMPT_SET_TAG(Global_1945188[iVar0 /*18*/].f_3, sParam1);
		}
	}
}

struct<10> /*80*/ func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_137(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, int iParam1)
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

int func_139(int iParam0)
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

void func_140(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
}

void func_141(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_39, "filterIndex");
	uParam0->f_52 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "filter", func_108(uParam0->f_52));
}

int func_142(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_143(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return { -0.005f, 0.0f, 0.0f };
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return { -0.03f, 0.0f, 0.0f };
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return { 0.005f, 0.0f, 0.0f };
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_144(int iParam0)
{
	if (!func_200(iParam0))
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

bool func_145(bool bParam0)
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

bool func_146(bool bParam0)
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

int func_147(bool bParam0)
{
	if (func_23() == -1)
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

struct<5> /*40*/ func_148(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_201(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_127(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_202(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_203(bParam1) /*4*/ };
			if (bParam2 && func_204(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_205(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_205(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_206(bParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_207(bParam1) /*4*/ };
			switch (func_208(bParam0))
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
			if (func_209(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_202(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_209(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_202(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_210(sVar0, &sVar27, bParam1, 0))
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

bool func_149(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_211(&bParam0);
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		bParam3 = true;
	}
	if (func_212(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
		{
			sVar0 = { func_203(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_205(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_206(bParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_204(bParam0, 1))
			{
				if (!func_205(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_206(bParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_213(bParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_192(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_214(bParam0))
	{
		iVar28 = func_215(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam4), bParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

struct<17> /*136*/ func_150(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, int iParam6)
{
	struct<17> /*136*/ sVar0;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	sVar0.f_4 = { sParam1 /*4*/ };
	sVar0 = { func_202(bParam0, sVar0.f_4, iParam5, 1) /*4*/ };
	sVar0.f_8 = bParam0;
	sVar0.f_9 = iParam6;
	sVar0.f_11 = iParam5;
	return sVar0;
}

int func_151(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_216(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_217(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_217(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_217(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_152(int iParam0, struct<7> /*56*/ sParam1)
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
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == 1 || Global_1223212.f_1[iVar0 /*9*/].f_1 == 5)
			{
				Global_1223212.f_1[iVar0 /*9*/].f_2 = { sParam1 /*7*/ };
			}
			return;
		}
		iVar0++;
	}
}

struct<2> /*16*/ func_153(bool bParam0)
{
	return func_167(joaat("MADE"), bParam0);
}

void func_154(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

int func_155(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			return Global_1223212.f_1[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_156(int iParam0)
{
	iParam0 = func_218(iParam0);
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

float func_157(int iParam0, int iParam1, bool bParam2)
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
	return func_219(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_158(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> /*16*/ sVar0[15];
	bool bVar31;
	bool bVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	bool bVar39;

	if (!func_80(0))
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_189(bParam0, 1, iParam1, &bVar31, &uVar35, bParam3, iParam4, 1))
	{
		bVar33 = bVar31;
		return 0;
	}
	if (func_193(bParam0, iParam1, &sVar0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			bVar33 = sVar0[iVar36 /*2*/];
			if (func_21(bVar33, 0))
			{
				if (bVar33 == joaat("CURRENCY_CASH"))
				{
					func_220(sVar0[iVar36 /*2*/].f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_194(bVar33) || func_195(bVar33))
					{
						if (!func_221(bVar33, sVar0[iVar36 /*2*/].f_1, 0))
						{
							iVar37 = func_222(7, bVar33, sVar0[iVar36 /*2*/].f_1);
						}
						func_223(bVar33, iVar37, joaat("REMOVE_REASON_USED"), 0, 0);
						sVar0[iVar36 /*2*/].f_1 -= iVar37;
						if (sVar0[iVar36 /*2*/].f_1 > 0)
						{
							if (!func_221(bVar33, sVar0[iVar36 /*2*/].f_1, 0))
							{
								func_224(bVar33, sVar0[iVar36 /*2*/].f_1);
							}
							if (func_221(bVar33, sVar0[iVar36 /*2*/].f_1, 0))
							{
								func_225(bVar33, sVar0[iVar36 /*2*/].f_1, bParam2, joaat("REMOVE_REASON_DEFAULT"), 0);
							}
						}
					}
					else
					{
						if (func_199(bVar33) > 0)
						{
							func_226(bVar33);
							sVar0[iVar36 /*2*/].f_1--;
						}
						if (sVar0[iVar36 /*2*/].f_1 > 0)
						{
							if (func_198(7, bVar33) > 0)
							{
								func_227(7, bVar33, sVar0[iVar36 /*2*/].f_1);
								sVar0[iVar36 /*2*/].f_1 -= func_227(7, bVar33, sVar0[iVar36 /*2*/].f_1);
							}
						}
						if (sVar0[iVar36 /*2*/].f_1 > 0)
						{
							func_225(bVar33, sVar0[iVar36 /*2*/].f_1, bParam2, joaat("REMOVE_REASON_USED"), 0);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_194(bVar33) || func_195(bVar33))
					{
						if (!func_221(bVar33, sVar0[iVar36 /*2*/].f_1, 0))
						{
							func_224(bVar33, sVar0[iVar36 /*2*/].f_1);
						}
					}
					func_225(bVar33, sVar0[iVar36 /*2*/].f_1, bParam2, joaat("REMOVE_REASON_USED"), 0);
				}
				else
				{
					func_228(bVar33, iParam4, sVar0[iVar36 /*2*/].f_1, joaat("REMOVE_REASON_USED"));
				}
				iVar38 = func_229(&bVar33);
				if (func_230(iVar38))
				{
					bVar39 = func_231(iVar38);
					func_160(func_167(joaat("USED_IN_RECIPE"), bVar39), sVar0[iVar36 /*2*/].f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

struct<2> /*16*/ func_159(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_160(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_161(bool bParam0, bool bParam1)
{
	if (!func_21(bParam0, 0))
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

void func_162(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_232(bParam0))
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

bool func_163(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> /*40*/ sVar10;
	var uVar15;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (!func_233(bParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	sVar10 = { func_234() /*4*/ };
	sVar10.f_4 = uVar9;
	if (func_235(bParam0, &uVar15, &sVar10, 1, joaat("ADD_REASON_DEFAULT"), 0))
	{
		if (bParam1)
		{
			if (!func_236(bParam0, 1))
			{
			}
		}
		if (func_237(bParam0))
		{
			func_163(func_238(bParam0), 1);
		}
		func_239();
		return true;
	}
	return false;
}

void func_164(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_21(bParam0, 0))
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
	if (!func_240())
	{
		func_241(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_242(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_242(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_243(bParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_127(bParam0);
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
	else if (!func_187(bParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_245(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_244(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_77(bParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_244(bParam0));
	}
	func_246(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_165(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_247(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_248(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_249(bParam0, bParam2);
	iVar2 = 0;
	if (func_129(bParam0, 0, 0) == 0)
	{
		if (func_250(bParam0))
		{
			iVar5 = func_251(bParam0);
			iVar6 = func_252(iVar5);
			iVar7 = func_253(iVar6) + 1;
			func_254(iVar5);
			if (func_255(38))
			{
				func_256(483, 0);
			}
			else
			{
				func_256(482, 0);
			}
			if (iVar7 == func_257(iVar6))
			{
				func_165(func_258(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_259() && func_260(4))
				{
					if (func_259() && (func_261(38) || func_255(38)))
					{
						func_263(38, func_258(iVar6), 0, 0, func_262(), 0, -1, 0);
						func_264(2);
					}
					else
					{
						func_263(38, func_258(iVar6), 0, 0, func_262(), 0, -1, 0);
						func_264(1);
					}
				}
			}
			else if (func_259() && func_260(4))
			{
				if (func_259() && (func_261(38) || func_255(38)))
				{
					func_263(38, 0, 0, 0, func_262(), 0, -1, 0);
					func_264(2);
				}
				else
				{
					func_263(38, 0, 0, 0, func_262(), 0, -1, 0);
					func_264(1);
				}
			}
			if (func_259() && func_260(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_259() && (func_261(38) || func_255(38)))
					{
						func_265(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_265(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_127(bParam0) == joaat("CLOTHING"))
	{
		if ((!func_77(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_77(bParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_77(bParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_243(bParam0, (1 << 23)) && !func_266(28))
	{
		func_267(28);
	}
	if (!bVar3)
	{
		if (func_77(bParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_208(bParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				bVar1 = func_161(func_78(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_23() == -1)
					{
						func_162(bVar1);
					}
					if (func_80(0) && func_268(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_269(bParam0, iVar0, iParam5);
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
					if (func_23() == -1)
					{
						func_162(bParam0);
					}
					if (func_80(0) && func_268(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_269(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_127(bParam0) == joaat("WEAPON"))
		{
			if (!func_270(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_127(bParam0) == joaat("AMMO") && func_271(bParam0))
		{
			if (!func_272(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_273(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_274(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_160(func_159(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_160(func_167(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_77(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR") && bParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_275(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_256(498, 0);
				}
			}
			if (func_77(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_77(bParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_276(bParam0);
			}
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_77(bParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_USED")) && func_77(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_256(484, 0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_77(bParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_77(bParam0, 589988438))
		{
			if (func_277())
			{
				func_278(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_77(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_279(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_280(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_281(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_77(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_282(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_283();
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_284(bParam0, iParam1);
			func_285(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_77(bParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_286(bParam0, 0, 0, 0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_77(bParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_276(bParam0);
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_287(bParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_221(215778062, 1, 0))
					{
						func_165(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_221(670273567, 1, 0))
					{
						func_165(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_221(-967317137, 1, 0))
					{
						func_165(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_221(526074061, 1, 0))
					{
						func_165(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_221(-1045488665, 1, 0))
					{
						func_165(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_221(471514780, 1, 0))
					{
						func_165(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_243(bParam0, 4))
		{
			if (!func_255(42))
			{
				func_288(bParam0);
			}
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_289(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_77(bParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
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
				func_165(bVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
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
				func_267(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_170(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_290(&bVar9, 0))
				{
					func_268(bVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_23() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_170(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_256(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_291();
				Global_40.f_11095.f_61 += 0.1f;
				func_292();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_293();
				Global_40.f_11095.f_63 += 0.1f;
				func_294();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_295();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_296(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_297(499813453, 0);
				func_298(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_296(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_297(499813453, 0);
				func_298(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_296(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_297(499813453, 0);
				func_298(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_296(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_297(666607663, 0);
				func_299(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_296(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_297(666607663, 0);
				func_299(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_296(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_297(666607663, 0);
				func_299(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_296(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_297(-220219788, 0);
				func_300(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_296(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_297(-220219788, 0);
				func_300(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_296(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_297(-220219788, 0);
				func_300(4);
				Jump @4453; // curOff = 3664
				func_296(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_297(218622660, 0);
				func_301(1);
				Jump @4453; // curOff = 3697
				func_296(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_297(218622660, 0);
				func_301(2);
				Jump @4453; // curOff = 3730
				func_296(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_297(390004462, 0);
				func_302(1);
				Jump @4453; // curOff = 3763
				func_296(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_297(390004462, 0);
				func_302(2);
				Jump @4453; // curOff = 3796
				func_296(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_297(390004462, 0);
				func_302(4);
				Jump @4453; // curOff = 3829
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_297(6410548, 0);
				func_303(1);
				Jump @4453; // curOff = 3860
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_297(6410548, 0);
				func_303(2);
				Jump @4453; // curOff = 3891
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_297(6410548, 0);
				func_303(4);
				Jump @4453; // curOff = 3922
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_297(6410548, 0);
				func_303(8);
				Jump @4453; // curOff = 3954
				func_304(242, func_244(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				Jump @4453; // curOff = 3973
				func_304(240, func_244(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				Jump @4453; // curOff = 3992
				func_304(241, func_244(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				Jump @4453; // curOff = 4011
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_305(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; // curOff = 4058
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_305(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; // curOff = 4105
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_305(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; // curOff = 4152
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_305(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; // curOff = 4199
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_305(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; // curOff = 4246
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_305(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; // curOff = 4293
				func_256(488, 0);
				Jump @4453; // curOff = 4304
				func_256(491, 0);
				Jump @4453; // curOff = 4315
				func_256(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_165(func_306(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_165(func_307(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				Jump @4453; // curOff = 4388
				if (func_266(1))
				{
					func_256(487, 0);
				}
				Jump @4453; // curOff = 4407
				func_256(486, 0);
				Jump @4453; // curOff = 4418
				if (func_23() == -1)
				{
					bParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				Jump @4453; // curOff = 4436
				func_256(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return 0;
				}
				bVar10 = bParam0;
				func_308(&bVar10);
				if (!func_309(bVar10, iVar0, iParam5))
				{
					return 0;
				}
				else if (!func_80(0))
				{
					return 1;
				}
				if (func_127(bParam0) == joaat("CLOTHING"))
				{
					func_310(bParam0);
				}
				if (func_77(bParam0, joaat("CI_TAG_ITEM_UPGRADE")))
				{
					func_311(bParam0);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_80(0))
				{
					sVar11.f_1 = 10;
					sVar11.f_12 = 10;
					MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
					iVar34 = 0;
					while (iVar34 < sVar11.f_0)
					{
						func_165(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
						iVar34++;
					}
				}
				else
				{
					func_312(iVar2, 0);
				}
			}
			sVar35 = { func_313(bParam0) /*2*/ };
			if (STATS::STAT_ID_IS_VALID(&sVar35))
			{
				STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
			}
			func_314(bParam0);
			if (fParam6 > 0.0f)
			{
				if (func_77(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
				{
					func_315(bParam0, fParam6);
				}
			}
			else if (!bParam2)
			{
				bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
				func_164(bParam0, iVar0, 0, bVar37, 0);
			}
			return 1;
		}

int func_166(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	var uVar6;

	if (!func_316(bParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_317(bParam0) && func_318(bParam0))
		{
			iVar0 = 0;
			if (func_319(bParam0, joaat("COST_CRAFTING_TRAPPER"), &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	sVar1.f_4 = func_320(iParam1);
	sVar1 = { func_201(0) /*4*/ };
	if (!func_235(bParam0, &uVar6, &sVar1, iParam2, joaat("ADD_REASON_DEFAULT"), 1))
	{
		return 0;
	}
	return 1;
}

struct<2> /*16*/ func_167(int iParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = bParam1;
	return sVar0;
}

void func_168(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_321(iParam0);
	fVar1 = func_322(iParam0);
	if ((Global_1347477.f_117 || !func_266(31)) || !func_323(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_324(iVar0) >= 7)
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
	func_325(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_246(MISC::VAR_STRING(6, func_326(iParam0), fVar1), "itemtype_textures", func_327(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_169(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_21(bParam1, 0))
	{
		return false;
	}
	if (func_127(bParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_23() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_208(bParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_328(bParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_77(bParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_329(iVar4, 1);
		if (func_330(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*iParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(bVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_208(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_77(bParam1, -1638171711))
			{
				*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_331(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*iParam2 = 939463734;
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
				iVar10 = func_332(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_332(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_208(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_77(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_333(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*iParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

int func_170(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (bParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_148(bParam1, 1, 0) /*5*/ };
		bParam3 = func_334(sVar0.f_4);
		if (bParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_335(bParam1, iParam2, func_329(bParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_336(1, (func_23() == -1 && bParam5), 1);
	switch (bParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && bParam1 != Global_1946054.f_57[func_329(bParam3, 1) /*11*/])
			{
				func_337(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_338((1 << 15)) && bParam1 != Global_1946054.f_57[func_329(bParam3, 1) /*11*/])
			{
				func_339();
				func_337(22, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_337(22, bParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_340(bParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_337(19, 0, iVar5, 0, 0);
		if ((bParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || bParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || bParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_341(0);
			func_342(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_337(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_171()
{
	return func_343((1 << 9));
}

void func_172(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_344(471747275))
	{
		Global_40.f_4283.f_307.f_1 += iParam0;
		if (Global_40.f_4283.f_307.f_1 >= 3)
		{
			func_345(471747275);
		}
	}
}

float func_173(var uParam0)
{
	if (!func_95(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_346(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_347() - uParam0->f_1);
}

bool func_174(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_175(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_347() - fParam1);
	func_348(uParam0, 1);
	func_349(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_176(int iParam0, bool bParam1, int iParam2)
{
	if (func_350(255))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!func_351(iParam0))
	{
		return 0;
	}
	if (!func_353(func_352(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0)
{
	if (func_354())
	{
		return 1;
	}
	if (!func_353(func_355(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

bool func_178(int iParam0)
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

float func_179(int iParam0, Vector3 vParam1)
{
	if (func_356(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

void func_180(var uParam0, bool bParam1, int iParam2)
{
	Global_1911914[uParam0->f_55 /*9*/].f_5 = iParam2;
	Global_1911914[uParam0->f_55 /*9*/].f_6 = bParam1;
	Global_1911914[uParam0->f_55 /*9*/].f_7 = 1;
	Global_1911914[uParam0->f_55 /*9*/].f_8 = 0;
	Global_1911914.f_1576++;
	uParam0->f_55++;
	if (iParam2 == joaat("COST_CRAFTING") || iParam2 == joaat("COST_CRAFTING_FIRE"))
	{
		func_357(uParam0, bParam1, iParam2);
	}
	else if (iParam2 == joaat("COST_CRAFTING_KNIFE"))
	{
		func_358(uParam0, bParam1);
	}
}

void func_181(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	int iVar13;
	bool bVar14;

	iVar2 = func_53(bParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	sVar3 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, iVar2, 0) /*10*/ };
	if (func_137(sVar3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_55 >= 175)
			{
			}
			else
			{
				bVar14 = func_138(iVar13, iVar0);
				if (func_21(bVar14, 0) && bVar14 != bParam1)
				{
					func_180(uParam0, bVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_139(iVar0);
	}
}

void func_182(int iParam0)
{
	func_139(*iParam0);
	*iParam0 = -1;
}

void func_183(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> /*16*/ sVar10;
	bool bVar13;
	char[] cVar14[8];
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	struct<2> /*16*/ sVar20;
	bool bVar42;
	int iVar43;
	struct<7> /*56*/ sVar44;
	int iVar51;

	bVar0 = Global_1911914[iParam1 /*9*/].f_6;
	strcpy_s(&cVar1, 32, "r_");
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_40, &cVar1);
	Global_1911914[iParam1 /*9*/].f_1 = iVar5;
	iVar6 = Global_1911914[iParam1 /*9*/].f_5;
	iVar7 = func_131(bVar0, iVar6, bParam3, 0);
	iVar8 = func_129(bVar0, 0, 0);
	iVar9 = func_130(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 -= iVar8;
	}
	else
	{
		iVar9 = iVar7;
	}
	if (func_187(bVar0, &sVar10, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", sVar10.f_0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", sVar10.f_1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1911914.f_1579 && func_124(bVar0, iVar6, 1))
	{
		bVar13 = true;
		Global_1911914[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1911914[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1911914[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == joaat("COST_CRAFTING_FIRE"));
	StringIntConCat(&cVar14, func_132(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar14);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar16 = false;
	if (func_36((1 << 12)))
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && func_53(bVar0, 1697966752) == 337650881), 1, 0);
	}
	else if (func_36((1 << 13)))
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && bVar0 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT")), 1, 0);
	}
	else
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && !bVar13), 1, 0);
	}
	if (iVar15 == 0 && func_185(bVar0))
	{
		if (func_186(bVar0, iVar6, uParam0, bParam3, &bVar17, &iVar18, &iVar19))
		{
			iVar15 = 1;
			bVar16 = true;
			bVar0 = bVar17;
			iVar6 = iVar18;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar18);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar19);
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar6 == joaat("COST_CRAFTING_KNIFE") || iVar6 == joaat("COST_CRAFTING_GRILL")) || iVar6 == joaat("COST_CRAFTING_FIRE"))
		{
			iVar15 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar6 == joaat("COST_CRAFTING_GRILL"))
	{
		iVar15 = 0;
	}
	if (iVar15 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(bVar0, -1636519629) == -701492487)
		{
			iVar15 = 0;
			Global_1911914[iParam1 /*9*/].f_2 = 0;
		}
		else
		{
			uParam0->f_59++;
			if (func_121(bVar0, uParam0->f_52))
			{
				uParam0->f_60++;
			}
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar16)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar13);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar15);
	sVar20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar0, &sVar20))
	{
		iVar43 = 0;
		while (iVar43 < sVar20.f_0)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar20.f_1[iVar43], &sVar44))
			{
				iVar51 = sVar44.f_2;
				switch (sVar44.f_1)
				{
					case joaat("EFFECT_DEADEYE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case joaat("EFFECT_DEADEYE_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case joaat("EFFECT_DEADEYE_CORE_GOLD"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_DEADEYE_OVERPOWERED"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_HEALTH"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case joaat("EFFECT_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case joaat("EFFECT_HEALTH_OVERPOWERED"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_HEALTH_CORE_GOLD"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_STAMINA"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case joaat("EFFECT_STAMINA_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case joaat("EFFECT_STAMINA_CORE_GOLD"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_STAMINA_OVERPOWERED"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_HORSE_HEALTH"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case joaat("EFFECT_HORSE_HEALTH_OVERPOWERED"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_HORSE_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case joaat("EFFECT_HORSE_HEALTH_CORE_GOLD"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_HORSE_STAMINA_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case joaat("EFFECT_HORSE_STAMINA_CORE_GOLD"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", sVar44.f_6);
						break;
					case joaat("EFFECT_HORSE_STAMINA_OVERPOWERED"):
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", sVar44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, -1, joaat("CRAFTING_LIST_ITEM"), iVar5);
	}
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_185(bool bParam0)
{
	if (func_36((1 << 12)))
	{
		if (func_53(bParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (func_36((1 << 13)))
	{
		if (bParam0 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
		{
			return false;
		}
	}
	return true;
}

bool func_186(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> /*80*/ sVar2;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<37> /*296*/ sVar18;
	int iVar65;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (!Global_1911914.f_1579 && func_124(bParam0, iParam1, 1))
	{
		return false;
	}
	if (iParam1 == joaat("COST_CRAFTING_KNIFE") || iParam1 == joaat("COST_CRAFTING_GRILL"))
	{
		sVar2 = -1;
		sVar2.f_1 = -1;
		sVar2.f_2 = -1;
		sVar2.f_3 = -1;
		sVar2.f_4 = -1;
		sVar2.f_5 = -1;
		sVar2.f_6 = -1;
		sVar2.f_7 = -1;
		sVar2.f_8 = -1;
		iVar12 = func_53(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		if (uParam2->f_32)
		{
			sVar2 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) /*10*/ };
			if (func_137(sVar2, &iVar0, &iVar1, 0))
			{
				iVar13 = 0;
				while (iVar13 < iVar1)
				{
					bVar14 = func_138(iVar13, iVar0);
					if (bParam0 == bVar14)
					{
					}
					else if (!Global_1911914.f_1579 && func_124(bVar14, joaat("COST_CRAFTING_GRILL"), 1))
					{
					}
					else if (func_88(bVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0, 0) && !func_89(bVar14, 1, 0))
					{
						func_139(iVar0);
						*bParam4 = bVar14;
						*iParam5 = joaat("COST_CRAFTING_GRILL");
						*iParam6 = iVar13;
						return true;
					}
					iVar13++;
				}
				func_139(iVar0);
			}
		}
		if (iParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			sVar2 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("COST_CRAFTING_KNIFE"), 0, -1, iVar12, 0) /*10*/ };
			if (func_137(sVar2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					bVar16 = func_138(iVar15, iVar0);
					if (bParam0 == bVar16)
					{
					}
					else if (!Global_1911914.f_1579 && func_124(bVar16, joaat("COST_CRAFTING_KNIFE"), 1))
					{
					}
					else if (func_88(bVar16, joaat("COST_CRAFTING_KNIFE"), 0, bParam3, 0, 0) && !func_89(bVar16, 1, 0))
					{
						func_139(iVar0);
						*bParam4 = bVar16;
						*iParam5 = joaat("COST_CRAFTING_KNIFE");
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_139(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		sVar18.f_4 = 15;
		sVar18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam0, iVar65, &sVar18))
			{
				if (sVar18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if (sVar18.f_0 != joaat("COST_CRAFTING_EFFICIENT") && (Global_1911914.f_1579 || !func_124(bParam0, sVar18.f_0, 1)))
					{
						if (func_88(bParam0, sVar18.f_0, 0, bParam3, 0, 0) && !func_89(bParam0, 1, 0))
						{
							*bParam4 = bParam0;
							*iParam5 = sVar18.f_0;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

bool func_187(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_188(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &sVar0))
	{
		return false;
	}
	*iParam3 = sVar0.f_35;
	iVar47 = 0;
	while (iVar47 < sVar0.f_35)
	{
		(*uParam2)[iVar47] = sVar0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_189(bool bParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<2> /*16*/ sVar0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_193(bParam0, iParam2, &sVar0, &iVar31, bParam7, 0))
	{
		return false;
	}
	if (func_23() == 0 && iParam6 != 0)
	{
		return false;
	}
	if (iParam6 != 0)
	{
		bParam5 = false;
	}
	bVar35 = func_80(0);
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (sVar0[iVar34 /*2*/] == 0)
		{
		}
		else
		{
			iVar32 = (sVar0[iVar34 /*2*/].f_1 * iParam1);
			if (sVar0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_359(iVar32))
			{
				Jump @390; // curOff = 134
			}
			else if (sVar0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_360(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_361(sVar0[iVar34 /*2*/], iParam6);
				}
				else
				{
					iVar33 = func_129(sVar0[iVar34 /*2*/], 0, 0);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_194(sVar0[iVar34 /*2*/]) || func_195(sVar0[iVar34 /*2*/]))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_197(7, sVar0[iVar34 /*2*/], &iVar36);
						}
						iVar38 = func_196(sVar0[iVar34 /*2*/], iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*bParam4 = iVar36;
							}
						}
						else
						{
							Jump @374; // curOff = 330
							if (bParam5 && ((iVar33 + func_198(7, sVar0[iVar34 /*2*/])) + func_199(sVar0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { sVar0[iVar34 /*2*/] /*2*/ };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_190(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_362(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_191(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_363(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_364(&sVar0, func_203(0));
	}
	if (!func_365(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_366(iVar18);
	return iVar19;
}

int func_192(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_214(bParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_147(bParam3), bParam0);
}

bool func_193(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_21(bParam0, 0))
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
		func_367(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_194(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_195(bParam0);
}

bool func_195(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
	{
		return true;
	}
	return false;
}

int func_196(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!func_194(bParam0) && !func_195(bParam0))
	{
		return 0;
	}
	sVar3 = -1;
	sVar3.f_1 = -1;
	sVar3.f_2 = -1;
	sVar3.f_3 = -1;
	sVar3.f_4 = -1;
	sVar3.f_5 = -1;
	sVar3.f_6 = -1;
	sVar3.f_7 = -1;
	sVar3.f_8 = -1;
	iVar13 = func_53(bParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	sVar3 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, joaat("CI_CATEGORY_MATERIALS"), 0, 0, -1, iVar13, 0) /*10*/ };
	if (func_137(sVar3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_138(iVar15, iVar1);
			if (func_21(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_368(bVar14);
				if (iVar16 != 0)
				{
					if (iParam1 != 0)
					{
						iVar17 = func_361(bVar14, iParam1);
					}
					else
					{
						iVar17 = func_129(bVar14, 0, 0);
					}
					if (iVar17 > 0)
					{
						iVar0 += (iVar17 * func_370(iVar16, func_369(bVar14), bParam0));
					}
				}
			}
			iVar15++;
		}
		func_139(iVar1);
	}
	return iVar0;
}

int func_197(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> /*104*/ sVar3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	sVar3.f_1 = 10;
	sVar3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_372(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &sVar3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = sVar3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_198(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_199(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_200(int iParam0)
{
	return func_102(iParam0, 2);
}

struct<4> /*32*/ func_201(bool bParam0)
{
	return func_202(joaat("CHARACTER"), func_373(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_202(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_21(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_147(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

struct<4> /*32*/ func_203(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_202(joaat("CARRIED_WEAPONS"), func_201(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_202(joaat("CARRIED_WEAPONS"), func_201(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_202(joaat("CARRIED_WEAPONS"), func_201(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_204(bool bParam0, bool bParam1)
{
	if (func_208(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_266(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_205(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_215(bParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_206(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_374(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_207(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_202(joaat("EMOTE_ITEM"), func_201(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_202(joaat("EMOTE_ITEM"), func_201(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_208(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_209(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_208(bParam0);
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

bool func_210(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_147(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_211(bool bParam0)
{
	if (!func_21(*bParam0, 0))
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

bool func_212(bool bParam0)
{
	return func_127(bParam0) == joaat("WEAPON");
}

bool func_213(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	sVar0 = { func_148(bParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_375((398 + iVar29), 1);
		if (func_205(bParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_206(bParam0, &sVar6, iVar5);
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

bool func_214(bool bParam0)
{
	if (func_376(bParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_215(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_202(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_147(bParam6), &sVar0, false);
	return iVar4;
}

bool func_216(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_217(int iParam0, int iParam1)
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
	func_377(iParam0, iParam1);
}

int func_218(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

float func_219(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_220(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_378(iParam0);
	if (bParam3)
	{
		func_379(iParam0, sParam1, iParam2);
	}
}

bool func_221(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(bParam0);
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
		if (!func_380(bParam0, 1))
		{
			return false;
		}
	}
	return func_129(bParam0, 0, bParam2) >= iParam1;
}

int func_222(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> /*104*/ sVar3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	sVar3.f_1 = 10;
	sVar3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_372(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &sVar3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = sVar3.f_1[iVar29];
					if (iVar30 == bParam1)
					{
						func_309(bParam1, 1, joaat("ADD_REASON_DEFAULT"));
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							bVar31 = func_381(iVar28);
							if (!func_21(bVar31, 0))
							{
								bVar31 = func_382(iVar28);
							}
							if (func_21(bVar31, 0))
							{
								func_383(bVar31, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

bool func_223(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_148(bParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_384(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_385(bParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

void func_224(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> /*80*/ sVar2;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		sVar2 = -1;
		sVar2.f_1 = -1;
		sVar2.f_2 = -1;
		sVar2.f_3 = -1;
		sVar2.f_4 = -1;
		sVar2.f_5 = -1;
		sVar2.f_6 = -1;
		sVar2.f_7 = -1;
		sVar2.f_8 = -1;
		iVar12 = func_53(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		sVar2 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, joaat("CI_CATEGORY_MATERIALS"), 0, 0, -1, iVar12, 0) /*10*/ };
		if (func_137(sVar2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					bVar13 = func_138(iVar14, iVar0);
					if (func_21(bVar13, 0) && bParam0 != bVar13)
					{
						iVar15 = func_129(bVar13, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 -= func_386(bVar13, bParam0);
							iVar15--;
						}
					}
					iVar14++;
				}
			}
			func_139(iVar0);
		}
	}
}

bool func_225(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	bVar3 = func_190(bParam0, 1);
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
			func_164(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_221(bParam0, 1, bParam4))
	{
		return false;
	}
	sVar5 = { func_313(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_129(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_129(bParam0, 0, 0) - iParam1) < 0)
		{
			func_225(bParam0, func_129(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_127(bParam0) == joaat("WEAPON"))
	{
		if (!func_387(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_223(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_164(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_388(bParam0, iParam1);
	return true;
}

void func_226(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	var uVar19;

	if (!func_21(bParam0, 0))
	{
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_389(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == bParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else
			{
				func_390(iVar1, &uVar17, &uVar18, &iVar16, &uVar19);
				if (func_391(&bVar15, iVar1, iVar16, uVar17) && bVar15 == bParam0)
				{
					ENTITY::_DELETE_CARRIABLE(&iVar0);
				}
			}
		}
	}
}

int func_227(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else if (func_392(bParam1, iParam2, 1, joaat("REMOVE_REASON_DEFAULT")))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_228(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (func_23() == 0)
	{
		return 0;
	}
	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	sVar0 = { func_201(0) /*4*/ };
	sVar0.f_4 = func_320(iParam1);
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (!func_385(bParam0, &sVar5, &sVar0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_229(bool bParam0)
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

bool func_230(int iParam0)
{
	return !iParam0 <= 0;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return joaat("HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("HERB_MILKWEED");
		case 26:
			return joaat("HERB_OLEANDER_SAGE");
		case 27:
			return joaat("HERB_OREGANO");
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("HERB_RAMS_HEAD");
		case 33:
			return joaat("HERB_RED_RASPBERRY");
		case 34:
			return joaat("HERB_RED_SAGE");
		case 37:
			return joaat("HERB_VANILLA_FLOWER");
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("HERB_WILD_CARROTS");
		case 40:
			return joaat("HERB_WILD_FEVERFEW");
		case 41:
			return joaat("HERB_WILD_MINT");
		case 42:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return joaat("HERB_QUEENS_ORCHID");
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return joaat("HERB_SPIDER_ORCHID");
	}
	return 0;
}

bool func_232(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

bool func_233(bool bParam0, bool bParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> /*80*/ sVar6;
	struct<4> /*32*/ sVar20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> /*40*/ sVar37;
	struct<4> /*32*/ sVar42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_208(bParam1);
		iVar5 = func_393(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iVar1, iVar2))
				{
					*uParam4 = { func_148(bParam1, 0, 0) /*5*/ };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_202(bParam1, *uParam4, uParam4->f_4, 0) /*4*/ };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			sVar6.f_9 = joaat("SLOTID_NONE");
			sVar20.f_9 = joaat("SLOTID_NONE");
			iVar34 = func_147(0);
			sVar37 = { func_148(bParam1, 0, 0) /*5*/ };
			if (iParam6 != 0)
			{
				sVar37.f_4 = iParam6;
			}
			sVar42 = { func_202(bParam1, sVar37, sVar37.f_4, 0) /*4*/ };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &sVar42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &sVar42, iVar36, &sVar6))
				{
					iVar1 = func_208(sVar6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iVar1, iVar2))
							{
								if (func_394(sVar42, sVar6.f_9, &sVar20, 0))
								{
									uParam4->f_4 = sVar6.f_9;
									*uParam4 = { sVar6.f_5 /*4*/ };
									*uParam3 = { sVar20 /*4*/ };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

struct<4> /*32*/ func_234()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_201(0) /*4*/ };
	return func_202(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

bool func_235(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_21(bParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_149(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_147(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_236(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> /*32*/ sVar10;
	struct<4> /*32*/ sVar14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (!func_233(bParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	sVar10 = { func_234() /*4*/ };
	sVar14 = { func_202(bParam0, sVar10, iVar9, 0) /*4*/ };
	if (func_395(sVar14, iParam1))
	{
		if (func_396(bParam0))
		{
			if (func_397(joaat("SLOTID_HORSE_HORN"), &bVar18))
			{
				if (func_236(bVar18, 0))
				{
				}
			}
		}
		else if (func_237(bParam0))
		{
			if (func_397(joaat("SLOTID_HORSE_HORN"), &bVar19))
			{
				if (func_236(bVar19, 0))
				{
				}
			}
			if (func_397(joaat("SLOTID_HORSE_STIRRUP"), &bVar20))
			{
				if (func_236(bVar20, 0))
				{
				}
			}
			bVar21 = func_238(bParam0);
			if (func_21(bVar21, 0))
			{
				if (func_236(bVar21, 1))
				{
				}
			}
		}
		func_239();
		return true;
	}
	return false;
}

bool func_237(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_HORSE_SADDLE_SPECIAL")))
	{
		return true;
	}
	return false;
}

bool func_238(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688;
	}
	return false;
}

int func_239()
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> /*32*/ sVar16;
	int iVar20;
	bool bVar21;

	sVar0 = { func_148(856287005, 0, 0) /*5*/ };
	sVar5 = { func_202(856287005, sVar0, sVar0.f_4, 0) /*4*/ };
	iVar10 = func_208(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		bVar14 = func_398(sVar5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_21(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_393(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = func_398(sVar5, iVar11, 0);
			if (!func_21(bVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_237(bVar14) || func_396(bVar14))
					{
					}
					else
					{
						Jump @219; // curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_237(bVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; // curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_237(bVar14) && func_399(bVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_400(iVar11, &sVar16, 1))
									{
										if (!func_395(sVar16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_240()
{
	return !Global_1911774;
}

void func_241(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_242(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_243(bool bParam0, int iParam1)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_244(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

char* func_245(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_246(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_401(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_247(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_212(bParam0) && func_402(bParam0))
		{
			func_403(bParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_248(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_404(bParam0, iParam1);
	sVar0 = { func_148(bParam0, 0, 1) /*5*/ };
	iVar5 = func_192(bParam0, &sVar0, 0, 0);
	iVar6 = func_405(bParam0, 0);
	if ((iVar5 > 1 && !func_406()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_77(bParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_256(583, 1);
		}
		else
		{
			func_256(582, 0);
		}
	}
	if (func_149(bParam0, &sVar0, *iParam1, 0, 0))
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

void func_249(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_53(bParam0, joaat("TAG_INTERACTION_TYPE")))
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

bool func_250(bool bParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_251(bParam0) != 0;
}

int func_251(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_407())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (bParam0 == func_408(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_252(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_407())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_252(iVar0))
		{
			if (func_221(func_408(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_254(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_168(48);
	func_409(0, -1);
}

bool func_255(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_275(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_410(iParam0, &iVar0, &iVar1);
	if (!func_411(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_412(iVar0, iVar1);
}

int func_257(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_258(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_259()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_260(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_275(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_261(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_14(iParam0))
	{
		return false;
	}
	return func_413(Global_1347702[iParam0 /*49*/].f_15);
}

int func_262()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_221(func_414(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_263(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_259() && (func_261(38) || func_255(38)))
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
			if (func_259() && (func_261(39) || func_255(39)))
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
			iVar9 = func_415(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_259() && (func_261(41) || func_255(41)))
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
			if (func_259() && (func_261(49) || func_255(49)))
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
			iVar9 = func_415(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_416(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_417(iParam0, iVar13, iVar14))
	{
	}
	if (func_418(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_419(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_420(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_421(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_422(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_264(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_259() && (func_261(38) || func_255(38)))
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
			if (func_259() && (func_261(39) || func_255(39)))
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
			if (func_259() && (func_261(49) || func_255(49)))
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
		if (func_259() && (func_261(38) || func_255(38)))
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
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_425(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_424(func_258(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_259() && (func_261(39) || func_255(39)))
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
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_259() && (func_261(49) || func_255(49)))
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
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_266(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	return func_427(iParam0);
}

void func_267(int iParam0)
{
	if (!func_426(iParam0))
	{
		return;
	}
	func_428(iParam0);
	func_429(iParam0);
}

bool func_268(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_148(bParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_375((398 + iVar28), 1);
			if (func_205(bParam0, &sVar0, iVar5, 0))
			{
				if (func_206(bParam0, &sVar6, iVar5))
				{
					sVar29 = { func_202(bParam0, sVar0, iVar5, 0) /*4*/ };
					func_385(bParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_80(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return false;
					}
					func_269(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_430(bParam0, iParam1);
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

bool func_269(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_271(bParam0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, bParam0, iParam1, iParam2);
	return true;
}

bool func_270(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;
	bool bVar8;

	bVar0 = func_161(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_23() == -1)
		{
			func_162(bVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_431(bVar0);
			}
		}
		if (!func_149(bParam0, &uVar1, 1, 0, 0))
		{
			func_403(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_432(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_268(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_268(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_LASSO"))
			{
				func_268(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_433())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_434(bVar0))
				{
					func_268(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_268(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_435(Global_35, 2, 0, 1);
				if ((((func_232(bVar7) && !Global_43891) && bVar7 != bVar0) && !func_266(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, bVar7);
				}
				bVar8 = true;
				if (func_232(bVar7) && func_266(24))
				{
					if (!func_268(bVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_268(bVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_268(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_256(480, 1);
	}
	return true;
}

bool func_271(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_272(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_271(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_232(bVar4))
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
	if (func_221(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_304(func_436(bParam0), func_244(bParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_275(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_256(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_80(0))
	{
		if (func_269(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_309(bParam0, *iParam1, iParam2);
	}
	return false;
}

void func_273(bool bParam0)
{
	var uVar0;

	if ((bParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_437()) || bParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_169(Global_35, bParam0, &uVar0))
		{
			func_170(PLAYER::PLAYER_PED_ID(), bParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_295();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_295();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_295();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_293();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_291();
			break;
	}
}

void func_274(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_291();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_292();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_293();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_294();
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
			func_295();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_438();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_439();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

bool func_275(int iParam0, bool bParam1)
{
	switch (func_440(iParam0))
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

void func_276(bool bParam0)
{
	bool bVar0;

	bVar0 = func_77(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_441() < 3)
	{
		if (bVar0)
		{
			if (func_443(func_442(bParam0), bParam0))
			{
				func_304(79, func_244(func_442(bParam0)), 1);
			}
			else
			{
				func_304(78, func_244(func_442(bParam0)), 1);
			}
		}
		else
		{
			func_304(80, func_244(func_444(bParam0)), 1);
		}
	}
}

bool func_277()
{
	if (((((func_445(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_445(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_278(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_446(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_447(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_448(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_279(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_265(51, 0, 0, 0, 0, -1, 0);
			func_449((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_265(51, 0, 0, 0, 0, -1, 0);
			func_449((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_263(39, 0, 0, 0, 0, 0, 1, 0);
			func_265(39, 0, 0, 0, 0, -1, 0);
			func_450(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_263(41, 0, 0, 0, 0, 0, 1, 0);
			func_265(41, 0, 0, 0, 0, -1, 0);
			func_451(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_263(49, 0, 0, 0, 0, 0, 1, 0);
			func_265(49, 0, 0, 0, 0, -1, 0);
			func_452(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_453(1), 0, -1, 0);
			func_454(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_453(2), 0, -1, 0);
			func_454(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_453(4), 0, -1, 0);
			func_454(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_453(8), 0, -1, 0);
			func_454(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_453(16), 0, -1, 0);
			func_454(16);
			break;
	}
}

void func_280(bool bParam0)
{
	if (func_455() == 1)
	{
		if (func_255(39))
		{
			func_256(342, 0);
		}
		else
		{
			func_256(343, 0);
			func_450(1);
		}
	}
	if (func_455() >= 30)
	{
		func_256(344, 0);
	}
	func_263(39, 0, 0, 0, 0, 0, -1, 0);
	func_265(39, 0, 0, func_455(), 30, 1, 0);
}

void func_281(bool bParam0)
{
	if (func_456() == 1)
	{
		if (func_255(49))
		{
			func_256(409, 0);
		}
		else
		{
			func_256(410, 0);
			func_452(1);
		}
	}
	if (func_456() >= 10)
	{
		func_256(411, 0);
	}
	func_263(49, 0, 0, 0, 0, 0, -1, 0);
	func_265(49, 0, 0, func_456(), 10, 1, 0);
}

void func_282(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_256(437, 0);
			func_256(440, 0);
			func_457(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_449(1);
			func_458(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_457(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_449(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_457(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_449(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_457(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_449((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_256(438, 0);
			func_457(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_449((1 << 15));
			break;
		default:
			func_256(439, 0);
			break;
	}
}

void func_283()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_284(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_255(43))
		{
			if (bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_256(348, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_256(350, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_256(352, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_256(400, 0);
			}
		}
		else if (func_77(bParam0, 412399755))
		{
			func_459(joaat("EXOTIC_STAGE_01"));
			if (func_460() == 0)
			{
				func_409(0, 10);
				iVar1 = func_461(bParam0, iParam1, 1);
				if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_462(bParam0) < func_463(bParam0))
					{
						func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_255(44))
		{
			if (bParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_256(354, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_256(399, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_256(401, 0);
			}
		}
		else if (func_77(bParam0, 709057512))
		{
			func_459(joaat("EXOTIC_STAGE_02"));
			if (func_460() == 1)
			{
				func_409(0, 10);
				iVar1 = func_461(bParam0, iParam1, 2);
				if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_462(bParam0) < func_463(bParam0))
					{
						func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_255(45))
		{
			if (bParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_256(359, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_256(394, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_256(395, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_256(398, 0);
			}
		}
		else if (func_77(bParam0, -1478961327))
		{
			func_459(joaat("EXOTIC_STAGE_03"));
			if (func_460() == 2)
			{
				func_409(0, 10);
				iVar1 = func_461(bParam0, iParam1, 4);
				if (bParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_464(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_465(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_168(48);
					}
					if (func_462(bParam0) < func_463(bParam0))
					{
						func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_462(bParam0) < func_463(bParam0))
					{
						func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_255(46))
		{
			if (bParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_256(356, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_256(402, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_256(404, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_256(406, 0);
			}
		}
		else if (func_77(bParam0, -1238404098))
		{
			func_459(joaat("EXOTIC_STAGE_04"));
			if (func_460() == 3)
			{
				func_409(0, 10);
				iVar1 = func_461(bParam0, iParam1, 8);
				if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_462(bParam0) < func_463(bParam0))
					{
						func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_255(47))
		{
			if (bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_256(396, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_256(397, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_256(405, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_256(403, 0);
			}
		}
		else if (func_77(bParam0, 1160548794))
		{
			func_459(joaat("EXOTIC_STAGE_05"));
			if (func_460() == 4)
			{
				func_409(0, 10);
				iVar1 = func_461(bParam0, iParam1, 16);
				if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_462(bParam0) < func_463(bParam0))
					{
						func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_285(bool bParam0)
{
	int iVar0;

	if (bParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_464(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_465(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_168(48);
		}
	}
}

void func_286(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_221(func_466(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_467(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_468(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_287(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_278(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_278(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_278(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_278(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_278(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_278(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_278(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_278(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_278(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_278(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_278(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_278(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_278(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_469())
			{
				func_278(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_278(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_278(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_278(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_278(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_278(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_278(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_278(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_278(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_288(bool bParam0)
{
	if (func_255(41))
	{
		func_256(363, 0);
	}
	else
	{
		func_256(362, 0);
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_01"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_02"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_03"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_04"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_05"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_06"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_07"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_08"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_09"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_10"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_11"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_12"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_13"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_14"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_289(bool bParam0, int iParam1)
{
	var uVar0;

	func_362(bParam0, iParam1, &uVar0);
}

bool func_290(bool bParam0, bool bParam1)
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
	iVar18 = func_435(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_435(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_473("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_474(&sVar3, iVar2, iVar0, iVar1))
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
						func_366(iVar0);
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

void func_291()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_292()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_293()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_294()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_295()
{
	func_475();
	func_476();
	func_477();
}

void func_296(int iParam0, int iParam1, bool bParam2)
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

void func_297(int iParam0, bool bParam1)
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
	func_423(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_298(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_299(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_300(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_301(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_302(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_303(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

void func_304(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_410(iParam0, &iVar0, &iVar1);
	if (!func_411(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_478(iParam0, (1 << 10)))
	{
		return;
	}
	func_412(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_305(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_410(iParam0, &iVar0, &iVar1);
	if (!func_411(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_478(iParam0, (1 << 10)))
	{
		return;
	}
	func_412(iVar0, iVar1);
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

bool func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_407())
	{
		return func_307();
	}
	iVar4 = (func_407() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_407())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_479(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_408(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return false;
}

bool func_307()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_407());
	return func_408(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_308(bool bParam0)
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

bool func_309(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_148(bParam0, 0, 1) /*5*/ };
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_235(bParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_310(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_23() != -1)
	{
		return;
	}
	switch (func_208(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (bParam0 == joaat("KIT_BANDANA") && func_480(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_337(32, bParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (bParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || bParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_337(32, bParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_481(bParam0);
			if (func_482(iVar0))
			{
				func_483(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_337(30, bParam0, 0, 0, 0);
			}
			if (func_484() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_484() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_337(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_484() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_337(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_485(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_486(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &bVar1))
				{
					func_337(33, bVar1, 0, 0, 0);
				}
			}
			func_337(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == joaat("CLOTHING_SP_OFFHAND_000") || bParam0 == -1515874150) || bParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_170(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_267(24);
		if (func_290(&bVar2, 0))
		{
			func_268(bVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_311(bool bParam0)
{
	if (func_77(bParam0, 943695443))
	{
		func_488(0, bParam0);
	}
	else if (func_77(bParam0, -2096528786))
	{
		func_488(1, bParam0);
	}
	else if (func_77(bParam0, -1094167013))
	{
		func_488(2, bParam0);
	}
	else if (func_77(bParam0, 1936654645))
	{
		func_488(3, bParam0);
	}
	else if (func_77(bParam0, 1306489306))
	{
		func_488(4, bParam0);
	}
	else if (func_77(bParam0, 435762317))
	{
		func_488(5, bParam0);
	}
	else if (func_77(bParam0, 1259363210))
	{
		func_488(6, bParam0);
	}
	else if (func_77(bParam0, 881398259))
	{
		func_488(7, bParam0);
	}
	else if (func_77(bParam0, -541549214))
	{
		func_488(8, bParam0);
	}
	else if (func_77(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_488(-1, bParam0);
	}
}

int func_312(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_489(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_490(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_313(bool bParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_21(bParam0, 0))
	{
		return sVar0;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_23() == -1)
		{
			if (func_77(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_491(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_491(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_77(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_491(joaat("MEDICINE_ITEMS"));
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_491(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_314(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_23() == -1)
			{
				if (func_275(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_256(109, 1);
				}
			}
			break;
	}
}

void func_315(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_493(func_492(0));
	func_246(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_494(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_316(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	sVar0.f_4 = func_320(iParam1);
	if (!func_495(bParam0, sVar0.f_4))
	{
		return false;
	}
	iVar5 = func_192(bParam0, &sVar0, 1, 0);
	iVar6 = func_405(bParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_317(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	if (func_77(bParam0, joaat("CI_TAG_SHOP_ANIMAL_LEGENDARY")))
	{
		return true;
	}
	return false;
}

bool func_318(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(bParam0);
}

bool func_319(bool bParam0, int iParam1, int iParam2)
{
	struct<10> /*80*/ sVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	struct<2> /*16*/ sVar14[15];
	int iVar45;
	int iVar46;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	sVar0 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, iParam1, 0, -1, 0, 0) /*10*/ };
	iVar11 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&sVar0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar12, &bVar13))
			{
				if (func_193(bVar13, iParam1, &sVar14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (bParam0 == sVar14[iVar46 /*2*/])
						{
							*iParam2 += sVar14[iVar46 /*2*/].f_1;
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iVar11);
	}
	return true;
}

int func_320(int iParam0)
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

int func_321(int iParam0)
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

float func_322(int iParam0)
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
			return func_496(iParam0);
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
			return func_496(iParam0);
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
			return func_496(iParam0);
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

bool func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_266(18);
		case 2:
			return func_266(20);
		case 1:
			return func_266(19);
		default:
			break;
	}
	return true;
}

int func_324(int iParam0)
{
	return func_497(Global_40.f_11095.f_11[iParam0]);
}

void func_325(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_266(31))
	{
		return;
	}
	iVar0 = func_324(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_324(iParam0);
	if (func_498(iParam0) & func_499(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_500(fVar1, fParam1);
			if (fParam1 > (float)func_501(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_256(func_502(iParam0), 0);
					}
					func_503(iParam0, iVar2, iVar3);
					func_113(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_326(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_327(int iParam0)
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

bool func_328(bool bParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_148(bParam0, 1, 0) /*5*/ };
	return func_334(sVar0.f_4);
}

int func_329(bool bParam0, int iParam1)
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

int func_330(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_331(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_329(func_504(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_208(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_332(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == Global_1946054.f_57[func_329(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_338((1 << 19)))
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
	iVar0 += PED::_0x31B2E7F2E3C58B89(bParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

bool func_333(bool bParam0)
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

int func_334(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_505(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_335(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_506();
	if (iParam2 == 39)
	{
		sVar0 = { func_148(bParam0, 1, 0) /*5*/ };
		iParam2 = func_329(func_334(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_330(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_338((1 << 15)) && iParam2 == 10) && bParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_507(func_505(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_508(iParam2);
	func_509(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_510(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_510(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_511(&(Global_1946054.f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = bParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_512(bParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_513(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_513(&(Global_1946054.f_1378), 1, 0);
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
				func_514(func_505(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_336(bool bParam0, bool bParam1, bool bParam2)
{
	func_515(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_337(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_516((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = bParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_517(sVar0);
}

bool func_338(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_339()
{
	func_518(&(Global_1946054.f_2776));
	func_519((1 << 15));
	func_514(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_340(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_329(bParam0, 1);
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

void func_341(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_520(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_521(sVar0);
}

void func_342(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_521(sVar0);
}

bool func_343(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549.f_1495 & iParam0) != 0;
	}
	return false;
}

bool func_344(int iParam0)
{
	if (!func_522(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_523(iParam0, 1));
}

void func_345(int iParam0)
{
	if (!func_522(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_523(iParam0, 1));
}

bool func_346(var uParam0)
{
	return func_174(*uParam0, 2);
}

float func_347()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_350(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return func_524(32, iParam0);
}

bool func_351(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 183)
	{
		return true;
	}
	return false;
}

int func_352(int iParam0)
{
	if (!func_351(iParam0))
	{
		return 0;
	}
	return Global_1131585.f_12[iParam0 /*3*/].f_2;
}

int func_353(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;

	return func_525(iParam0, &uVar0, bParam1, iParam2, iParam3);
}

bool func_354()
{
	return Global_1954819.f_866;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_356(int iParam0)
{
	if (func_526(iParam0))
	{
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

void func_357(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<37> /*296*/ sVar1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam1);
	sVar1.f_4 = 15;
	sVar1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam1, iVar48, &sVar1))
		{
			if (sVar1.f_0 != iParam2)
			{
				if ((sVar1.f_2 == joaat("COST_TYPE_CRAFT") && sVar1.f_0 != joaat("COST_CRAFTING_EFFICIENT")) && (Global_1911914.f_1579 || !func_124(bParam1, sVar1.f_0, 1)))
				{
					Global_1911914[(uParam0->f_55 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1911914[(uParam0->f_55 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_358(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	int iVar13;
	bool bVar14;

	iVar2 = func_53(bParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	sVar3 = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) /*10*/ };
	if (func_137(sVar3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			bVar14 = func_138(iVar13, iVar0);
			if (func_21(bVar14, 0))
			{
				if (Global_1911914.f_1579 || !func_124(bVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					Global_1911914[(uParam0->f_55 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		func_139(iVar0);
	}
}

bool func_359(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_527(1);
}

bool func_360(int iParam0)
{
	return false;
}

int func_361(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_201(0) /*4*/ };
	sVar0.f_4 = func_320(iParam1);
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_147(0), &sVar5, false);
	return iVar9;
}

void func_362(bool bParam0, int iParam1, var uParam2)
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

struct<18> /*144*/ func_363(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_364(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_365(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_147(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_366(int iParam0)
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

void func_367(bool bParam0, int iParam1, var uParam2, int iParam3)
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

int func_368(bool bParam0)
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

int func_369(bool bParam0)
{
	if (func_77(bParam0, joaat("CI_TAG_ITEM_QUALITY_PERFECT")))
	{
		return 2;
	}
	else if (func_77(bParam0, joaat("CI_TAG_ITEM_QUALITY_HIGH")))
	{
		return 1;
	}
	else if (func_77(bParam0, joaat("CI_TAG_ITEM_QUALITY_POOR")))
	{
		return 0;
	}
	return 1;
}

int func_370(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_21(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_371(int iParam0)
{
	iParam0 = func_218(iParam0);
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

bool func_372(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

struct<4> /*32*/ func_373()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_374(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_147(0);
	*uParam1 = { func_202(bParam0, func_203(0), iParam3, 0) /*4*/ };
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

int func_375(int iParam0, int iParam1)
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

int func_376(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

void func_377(int iParam0, int iParam1)
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

void func_378(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_527(1) < iParam0)
	{
		iParam0 = func_527(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_491(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_379(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_380(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_190(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_473("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_474(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_232(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_366(iVar1);
				return true;
			}
			iVar3++;
		}
		func_366(iVar1);
	}
	return false;
}

int func_381(int iParam0)
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
	func_390(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_391(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_382(int iParam0)
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
			iVar0 = func_528(iVar1);
		}
	}
	return iVar0;
}

int func_383(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iParam1 = func_529(bParam0, iParam1, 1, 1, joaat("REMOVE_REASON_DEFAULT"));
	}
	else
	{
		iVar0 = func_530(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_531(&iVar0, bParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_532(bParam0, iParam1, bParam2, iParam3);
}

bool func_384(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_533(bParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_80(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_147(bParam4), bParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_385(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_533(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_210(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_80(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_147(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_386(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_369(bParam0);
	iVar2 = func_368(bParam0);
	if (iVar2 != 0)
	{
		func_225(bParam0, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
		iVar0 = func_534(iVar2, iVar1, bParam0, bParam1);
	}
	return iVar0;
}

bool func_387(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
	sVar0 = { func_363(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_364(&sVar0, func_203(0));
	}
	if (!func_365(&sVar0, &iVar18, &iVar19, 0))
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
			if (!func_474(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_385(bParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_366(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

void func_388(bool bParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_77(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_535(bParam0, iParam1);
		}
		if (func_77(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_77(bParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_286(bParam0, iParam1, 1, 0);
		}
	}
}

int func_389(int iParam0, var uParam1)
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
	func_390(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	iVar4 = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(uParam1, iParam0, iVar0, iVar1);
	return iVar4;
}

void func_390(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
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

bool func_391(bool bParam0, int iParam1, int iParam2, int iParam3)
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

bool func_392(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_201(0) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_HORSE_SATCHEL");
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_385(bParam0, &sVar5, &sVar0, iParam1, iParam3, bParam2, 0);
}

int func_393(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_208(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_394(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_147(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_210(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_395(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_80(0))
	{
		return func_536(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_210(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_147(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_396(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
	}
	if (func_77(bParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0, bool bParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_537(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_234() /*4*/ };
	*bParam1 = func_398(sVar0, iParam0, 0);
	if (!func_21(*bParam1, 0))
	{
		return false;
	}
	return true;
}

int func_398(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_394(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_399(bool bParam0)
{
	if ((((bParam0 == 263080063 || bParam0 == -34331381) || bParam0 == -993578318) || bParam0 == 579268144) || bParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;
	struct<4> /*32*/ sVar20;
	int iVar34;

	if (iParam0 == 0)
	{
		return false;
	}
	sVar2 = { func_363(0, iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	func_364(&sVar2, func_234());
	if (func_365(&sVar2, &iVar0, &iVar1, 0))
	{
		sVar20.f_9 = joaat("SLOTID_NONE");
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_474(&sVar20, iVar34, iVar0, iVar1))
			{
				if (func_21(sVar20.f_4, 0) && !sVar20.f_10)
				{
					if (bParam2 && func_399(sVar20.f_4))
					{
					}
					else
					{
						*uParam1 = { sVar20 /*4*/ };
						func_366(iVar0);
						return true;
					}
				}
			}
			iVar34++;
		}
		func_366(iVar0);
	}
	return false;
}

void func_401(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_402(bool bParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return false;
	}
	if (func_243(bParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_149(bParam0, &uVar0, 1, 0, 0);
	}
	return func_221(bParam0, 1, 0);
}

void func_403(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_127(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_161(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_146(bVar0))
	{
		if (func_23() == -1)
		{
			func_162(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, false) && func_129(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_164(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_404(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_77(bParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_538(bParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

int func_405(bool bParam0, bool bParam1)
{
	if (func_271(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam1), bParam0, false);
}

bool func_406()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_259())
	{
		return false;
	}
	if (!func_275(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[2 /*74*/].f_1, 1) && func_275(Global_1347702[120 /*49*/].f_15, 1)) && !func_275(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[37 /*74*/].f_1, 1) && !func_275(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[57 /*74*/].f_1, 1) && !func_275(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[26 /*74*/].f_1, 1) && !func_275(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[62 /*74*/].f_1, 1) && func_275(Global_1835011[63 /*74*/].f_1, 1)) && !func_275(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[75 /*74*/].f_1, 1) && !func_275(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[76 /*74*/].f_1, 1) && !func_275(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[40 /*74*/].f_1, 1) && func_275(Global_1835011[41 /*74*/].f_1, 1)) && !func_275(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[62 /*74*/].f_1, 1) && func_275(Global_1835011[63 /*74*/].f_1, 1)) && !func_275(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[65 /*74*/].f_1, 1) && func_275(Global_1835011[66 /*74*/].f_1, 1)) && !func_275(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

int func_407()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

bool func_408(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_409(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_539(&Global_0, 8);
	}
	if (!func_259() || func_23() != -1)
	{
		return;
	}
	func_539(&Global_0, 1);
}

void func_410(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_411(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_540(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_541(iParam0))
	{
		return false;
	}
	if (func_542(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_478(iParam0, 1)) || func_543((1 << 15)))
	{
		if (!func_478(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_544())
	{
		return false;
	}
	return true;
}

void func_412(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_413(int iParam0)
{
	int iVar0;

	iVar0 = func_440(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_414(int iParam0)
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

int func_415(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_545(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_416(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_262() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_546(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_547(), 12);
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
			else if (func_455() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_548(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_455(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_549(), 13);
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
			else if (func_456() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_550(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_456(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_415(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_417(int iParam0, int iParam1, int iParam2)
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

bool func_418(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_419(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_420(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			bVar2 = func_551(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_221(bVar2, 1, 0) || func_553(func_552(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_424(func_551(iVar0))), func_424(func_551(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_455() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_554(iVar0)), func_554(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_548() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_554(iVar0)), func_554(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_554(iVar0)), func_554(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			bVar2 = func_466(iParam3, func_555(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_462(bVar2) - iParam7) >= func_415(iParam3, func_556(iVar0));
				}
				else
				{
					bVar1 = func_462(bVar2) >= func_415(iParam3, func_556(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_462(bVar2) + iParam7) >= func_415(iParam3, func_556(iVar0));
			}
			else
			{
				bVar1 = func_462(bVar2) >= func_415(iParam3, func_556(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_557(bVar2)), func_557(bVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_558(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_559(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_559(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_456() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_560(iVar0)), func_560(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_550() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_560(iVar0)), func_560(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_560(iVar0)), func_560(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			bVar2 = func_466(iParam3, func_555(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_462(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_561(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_561(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_562(bVar2)), func_562(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_421(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_549() >= 13)
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

bool func_422(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_16(func_563(0)) && ((func_564(0) == 1 || func_564(0) == 8) || func_564(0) == 6))
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

int func_423(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_424(bool bParam0)
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

int func_425(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

bool func_426(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_428(int iParam0)
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

void func_429(int iParam0)
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
			func_565(1);
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
			func_566(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_566(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_566(3);
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
			func_567(1);
			break;
		case 34:
			func_568(1);
			break;
		case 35:
			func_569(1);
			break;
		case 36:
			break;
		case 37:
			func_570(0);
			break;
		case 38:
			func_571(0);
			break;
		case 39:
			func_572(0);
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
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_256(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_256(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_256(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_256(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_23() == -1)
			{
				if (!func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_573(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_433())
					{
						bVar0 = -1515874150;
					}
					else
					{
						bVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_221(bVar0, 1, 0))
					{
						func_309(bVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_170(Global_35, bVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_221(1013902307, 1, 0))
				{
					func_309(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_221(1013902307, 1, 0))
				{
					func_309(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_221(142640135, 1, 0))
				{
					func_309(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_221(786809402, 1, 0))
				{
					func_309(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_221(786809402, 1, 0))
				{
					func_309(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_221(-518019409, 1, 0))
				{
					func_309(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_574();
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

void func_430(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_132(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_431(bool bParam0)
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
	iVar2 = func_575();
	func_576(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_432(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_22(bParam0))
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

bool func_433()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_434(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_436(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_266(50))
			{
				if (!func_266(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_266(51))
			{
				if (!func_266(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_437()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_438()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_439()
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

int func_440(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return func_577(iParam0);
}

int func_441()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_221(func_578(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_442(bool bParam0)
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

bool func_443(bool bParam0, bool bParam1)
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
	if (func_221(bVar0, 1, 0) && func_221(bVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_444(bool bParam0)
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

bool func_445(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_579(iParam0);
	if (iVar0 != -15)
	{
		func_576(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_580(iVar0, 1);
	}
	return false;
}

int func_446(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_221(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_21(bVar25, 0) && func_77(bVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_447(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_448(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_581())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_246(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_582(iVar0);
			func_583(iVar0, 0, 0);
		}
		func_246(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_160(func_491(joaat("CAREER_CASH")), iVar1);
	}
}

void func_449(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_450(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_451(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_452(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_453(int iParam0)
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
	iVar1 = func_462(bVar9);
	iVar2 = func_462(bVar10);
	iVar3 = func_462(bVar11);
	iVar5 = func_463(bVar9);
	iVar6 = func_463(bVar10);
	iVar7 = func_463(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_462(bVar12);
		iVar8 = func_463(bVar12);
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

void func_454(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_455()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_584(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_456()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_457(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_561(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_561(bVar0))
		{
			*iParam2++;
		}
		if (func_561(bVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_561(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_561(bVar0))
		{
			*iParam2++;
		}
		if (func_561(bVar1))
		{
			*iParam2++;
		}
		if (func_561(bVar0) && func_561(bVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_561(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_561(bVar0))
		{
			*iParam2++;
		}
		if (func_561(bVar1))
		{
			*iParam2++;
		}
		if (func_561(bVar2))
		{
			*iParam2++;
		}
		if ((func_561(bVar0) && func_561(bVar1)) && func_561(bVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_561(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(bParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_561(bVar0))
		{
			*iParam2++;
		}
		if (func_561(bVar1))
		{
			*iParam2++;
		}
		if (func_561(bVar2))
		{
			*iParam2++;
		}
		if (func_561(bVar3))
		{
			*iParam2++;
		}
		if (((func_561(bVar0) && func_561(bVar1)) && func_561(bVar2)) && func_561(bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_458(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_585(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_586(joaat("WS_DOWNS_RANCH_EDITH"));
			func_586(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_586(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_586(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_585(joaat("WS_DOWNS_RANCH_EDITH"));
			func_586(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_586(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_586(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_586(joaat("WS_DOWNS_RANCH_EDITH"));
			func_585(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_586(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_586(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_586(joaat("WS_DOWNS_RANCH_EDITH"));
			func_586(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_585(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_586(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_586(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_586(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_585(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_587();
			func_585(iParam0);
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
			func_588();
			func_585(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_586(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_586(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_585(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_586(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_586(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_585(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_586(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_586(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_585(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_586(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_586(joaat("WS_RHODES_GRAVE_OPEN"));
			func_585(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_586(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_586(joaat("WS_RHODES_GRAVE_OPEN"));
			func_585(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_586(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_586(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_585(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_586(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_585(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_586(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_585(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_586(joaat("WS_UTOPIA_TREE_MISSION"));
			func_586(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_586(joaat("WS_UTOPIA_TREE_STUMP"));
			func_585(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_586(joaat("WS_UTOPIA_TREE_STANDING"));
			func_586(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_586(joaat("WS_UTOPIA_TREE_STUMP"));
			func_585(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_586(joaat("WS_UTOPIA_TREE_STANDING"));
			func_586(joaat("WS_UTOPIA_TREE_MISSION"));
			func_586(joaat("WS_UTOPIA_TREE_STUMP"));
			func_585(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_586(joaat("WS_UTOPIA_TREE_STANDING"));
			func_586(joaat("WS_UTOPIA_TREE_MISSION"));
			func_586(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_585(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_586(joaat("WS_MICAH_CAMP"));
			func_586(joaat("WS_MICAH_CAMP_POST"));
			func_585(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_586(joaat("WS_MICAH_CAMP_EMPTY"));
			func_586(joaat("WS_MICAH_CAMP_POST"));
			func_585(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_586(joaat("WS_MICAH_CAMP_EMPTY"));
			func_586(joaat("WS_MICAH_CAMP"));
			func_585(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_586(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_585(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_586(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_586(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_589(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_585(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_586(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_586(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_585(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_586(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_585(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_586(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_585(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_586(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_585(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_586(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_585(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_586(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_585(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_586(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_586(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_585(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_586(joaat("WS_NEW_COM_BANK_START"));
			func_586(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_586(joaat("WS_NEW_COM_BANK_AFTER"));
			func_586(joaat("WS_NEW_COM_BANK_POST"));
			func_585(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_586(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_586(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_586(joaat("WS_NEW_COM_BANK_AFTER"));
			func_586(joaat("WS_NEW_COM_BANK_POST"));
			func_585(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_586(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_586(joaat("WS_NEW_COM_BANK_START"));
			func_586(joaat("WS_NEW_COM_BANK_AFTER"));
			func_586(joaat("WS_NEW_COM_BANK_POST"));
			func_585(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_586(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_586(joaat("WS_NEW_COM_BANK_START"));
			func_586(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_586(joaat("WS_NEW_COM_BANK_POST"));
			func_585(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_586(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_586(joaat("WS_NEW_COM_BANK_START"));
			func_586(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_586(joaat("WS_NEW_COM_BANK_AFTER"));
			func_585(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_586(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_585(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_586(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_585(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_586(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_585(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_586(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_586(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_585(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_585(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_585(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_585(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_586(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_585(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_585(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_585(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_585(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_585(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_586(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_585(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_586(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_585(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_586(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_585(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_586(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_585(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_586(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_585(0);
			func_586(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_586(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_585(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_586(0);
			func_586(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_585(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_586(0);
			func_586(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_585(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_586(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_585(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_586(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_585(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_585(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_585(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_585(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_586(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_585(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_586(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_586(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_586(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_585(joaat("WS_SHADY_BELLE_ABANDON"));
			func_586(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_586(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_585(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_586(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_586(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_585(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_586(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_585(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_586(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_589(iParam0))
				{
					func_585(iParam0);
				}
			}
			else if (func_589(iParam0))
			{
				func_586(iParam0);
			}
			break;
	}
}

void func_459(int iParam0)
{
	if (!func_590(iParam0))
	{
		func_592(func_591(iParam0));
	}
}

int func_460()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_590(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_461(bool bParam0, int iParam1, int iParam2)
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
	iVar1 = func_462(bVar9);
	iVar2 = func_462(bVar10);
	iVar3 = func_462(bVar11);
	iVar5 = func_463(bVar9);
	iVar6 = func_463(bVar10);
	iVar7 = func_463(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_462(bVar12);
		iVar8 = func_463(bVar12);
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

int func_462(bool bParam0)
{
	int iVar0;

	if (func_221(bParam0, 1, 0))
	{
		iVar0 = func_129(bParam0, 0, 0);
	}
	return iVar0;
}

int func_463(bool bParam0)
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

int func_464(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_465(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

bool func_466(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_545(17, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_467(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_466(iParam1, 5) || bParam0 == func_466(iParam1, 6)) || bParam0 == func_466(iParam1, 7)) || bParam0 == func_466(iParam1, 8)) || bParam0 == func_466(iParam1, 9))
	{
		func_457(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_263(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_265(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_468(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_466(iParam1, 5) || bParam0 == func_466(iParam1, 6)) || bParam0 == func_466(iParam1, 7)) || bParam0 == func_466(iParam1, 8)) || bParam0 == func_466(iParam1, 9))
	{
		if (func_457(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_263(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_265(51, 0, 0, iVar0, func_415(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_263(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_265(51, 0, 0, iVar0, func_415(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_469()
{
	if (func_413(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_470(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_471(int iParam0)
{
	if (!func_593(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_472(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

bool func_473(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_147(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_474(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_475()
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

	if (func_594())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_595(2);
	}
	if (Global_1347477.f_119)
	{
		return func_595(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_596();
	fVar2 = func_597();
	fVar3 = func_598();
	fVar4 = func_599();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_600());
	fVar7 = (func_595(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_601(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_602(3, fVar9, fVar9 > 100.0f);
	return func_603(fVar7, -100.0f, 100.0f);
}

float func_476()
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

	if (func_594())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_595(1);
	}
	if (Global_1347477.f_119)
	{
		return func_595(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_596();
	fVar2 = func_597();
	fVar3 = func_598();
	fVar4 = func_599();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_600());
	fVar7 = (func_595(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_601(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_602(2, fVar9, fVar9 > 100.0f);
	return func_603(fVar7, -100.0f, 100.0f);
}

float func_477()
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

	if (func_594())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_595(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_604())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_605())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_595(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_596();
	fVar2 = func_597();
	fVar3 = func_598();
	fVar4 = func_599();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_600());
	fVar7 = (func_595(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_601(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_602(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_595(0);
	}
	return func_603(fVar7, -100.0f, 100.0f);
}

bool func_478(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_479(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_480(int iParam0, bool bParam1)
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
				return func_606();
			}
			break;
	}
	return 0;
}

int func_481(bool bParam0)
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

bool func_482(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_483(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_482(iParam0))
	{
		return;
	}
	if (func_607(iParam0))
	{
		return;
	}
	if (!func_608(iParam0))
	{
		func_609(iParam0, 1, 0);
	}
	bVar0 = func_610(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_611(iParam0, (1 << 9)))
		{
			func_337(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_612() && !bParam1) && !func_1(0, 0, 1))
	{
		func_613(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_614(iParam0, 6);
	if (bParam2)
	{
		if (!func_1(0, 0, 1))
		{
			func_409(1, 4);
		}
	}
}

int func_484()
{
	return Global_1946054.f_1;
}

bool func_485(int iParam0, bool bParam1)
{
	return func_480(iParam0, 0) < func_615(iParam0, bParam1);
}

bool func_486(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_208(bVar1) == iParam0)
		{
			*bParam1 = bVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_487(bool bParam0)
{
	if (bParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_329(bParam0, 1) /*3*/] != Global_1946054.f_57[func_329(bParam0, 1) /*11*/];
}

void func_488(int iParam0, bool bParam1)
{
	if (func_77(bParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_616(bParam1, 0);
	}
	else if (func_77(bParam1, 930141731))
	{
		func_616(bParam1, 1);
		func_617(iParam0);
	}
}

void func_489(var uParam0, int iParam1)
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

int func_490(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_618(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_619(uParam2, iParam0, sVar1);
	return 1;
}

struct<2> /*16*/ func_491(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_492(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_493(int iParam0)
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

int func_494(bool bParam0)
{
	var uVar0;

	if (!func_620(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_495(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0 != 0)
	{
		iVar3 = func_208(bParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_621(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

float func_496(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_321(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_497(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_622(iVar6) - func_622(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_497(float fParam0)
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

int func_498(int iParam0)
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

int func_499(int iParam0)
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

int func_500(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_497(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_622(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_622(iVar0 + 1));
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

int func_501(int iParam0)
{
	int iVar0;

	if (func_623(iParam0, &iVar0))
	{
		return func_622(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_624())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_624())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_624())
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

int func_502(int iParam0)
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

void func_503(int iParam0, int iParam1, int iParam2)
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
	iVar3 += func_625(iParam0);
	sVar4 = func_627(func_626(iVar3, iParam2));
	sVar6 = func_628(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_629(iParam0));
	iVar8 = func_630(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_631(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_423(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_632(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_504(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_334(iVar0);
}

int func_505(int iParam0, int iParam1)
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

void func_506()
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

void func_507(int iParam0)
{
	func_514(iParam0, 8, 6);
}

void func_508(int iParam0)
{
	func_633(&(Global_1946054.f_2589), iParam0);
}

void func_509(int iParam0, int iParam1)
{
	func_634(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_510(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_511(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_208(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_635(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_509(iVar1, iVar3);
		}
	}
	if (func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_635(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_509(iVar1, iVar3);
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
						func_509(iVar1, iVar3);
					}
				}
			}
			func_636(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_636(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; // curOff = 525
				func_636(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; // curOff = 656
				func_636(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1417; // curOff = 691
				func_636(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; // curOff = 788
				func_636(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1417; // curOff = 809
				if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_208(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_333(bParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_208(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
				}
				Jump @1417; // curOff = 1132
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_77(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; // curOff = 1230
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_333(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_77(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
			}
			switch (func_208(bParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_208(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_208(uParam0->f_1[iVar1 /*3*/]) || func_77(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_512(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_637(0);
	if (iParam2 != 0 && func_638(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_639(bParam0, func_505(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_513(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_23() != -1;
	iVar7 = func_637(0);
	if (func_338((1 << 15)))
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
			iVar5 = func_505(iVar0, 1);
			if (func_640(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_640(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_332(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_641(uParam0);
				if (iVar3 > 0)
				{
					if (!func_338((1 << 19)))
					{
						func_516((1 << 19));
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
							iVar5 = func_505(iVar0, 1);
							if (func_640(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_640(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_332(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_509(iVar0, iParam2);
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
					func_519((1 << 19));
				}
			}
		}
	}
}

void func_514(bool bParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_329(bParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_329(bParam0, 1) /*11*/].f_10 & iParam1);
}

void func_515(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_642(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_643(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_610(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_610(Global_40.f_7729);
				Global_1946054.f_1378 = func_610(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_644(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_645(0, 1);
	}
}

void func_516(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_517(struct<4> /*32*/ sParam0)
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
			if (func_646(sParam0.f_0))
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
			func_647(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_516(8);
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
			if (func_646(sParam0.f_0))
			{
				return;
			}
			func_647(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_516(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_342(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_518(var uParam0)
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

void func_519(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

bool func_520(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_521(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_646(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_646(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_647(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_516(8);
}

bool func_522(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_523(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
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

bool func_524(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_648(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_649())
	{
		return func_648(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_648(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

int func_525(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> /*120*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
	{
		return 1;
	}
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	sVar1.f_1 = 10;
	sVar1.f_14 = 255;
	sVar1.f_12 = bParam2;
	sVar1.f_14 = iParam3;
	sVar1.f_13 = iParam4;
	func_650(uParam1, iParam0, sVar1);
	return 1;
}

bool func_526(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_527(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_528(int iParam0)
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
	func_390(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_391(&iVar4, iParam0, iVar0, iVar1);
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

int func_529(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iParam1 = func_651(PLAYER::PLAYER_PED_ID(), bParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_530(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_531(&iVar0, bParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_530(int iParam0)
{
	int iVar0;

	if (func_652(iParam0))
	{
		if (func_23() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_156(func_218(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(func_653());
		}
	}
	else if (func_23() == -1)
	{
		iVar0 = func_156(0);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_531(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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
	iVar1 = func_654(iVar0, bParam1);
	if (func_655(*iParam0, bParam1, *iParam2, bParam3, iParam4))
	{
		sVar2 = { func_313(bParam1) /*2*/ };
		if (STATS::STAT_ID_IS_VALID(&sVar2))
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar2, *iParam2);
		}
		if (func_656(bParam1))
		{
			func_657(*iParam0, bParam1, *iParam2);
		}
		else
		{
			func_657(*iParam0, bParam1, *iParam2);
			func_651(*iParam0, bParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_654(iVar0, bParam1));
		*iParam2 -= iVar4;
		return 1;
	}
	return 0;
}

int func_532(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_129(bParam0, 0, 0);
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
		if (!func_225(bParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_658(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_613("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_533(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, func_659(bParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_21(uVar0[iVar16], 0) && !func_77(uVar0[iVar16], joaat("CI_TAG_ITEM_ANIMAL_CARCASS"))) && !uVar0[iVar16] == bParam2)
		{
			func_165(uVar0[iVar16], 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			if (bParam3 != 0)
			{
				if (bParam3 == uVar0[iVar16])
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
	func_660(func_80(0), 1, 0);
	return iVar17;
}

void func_535(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_255(43))
		{
			if (func_77(bParam0, 412399755))
			{
				func_459(joaat("EXOTIC_STAGE_01"));
				if (func_460() == 0)
				{
					func_409(0, 10);
					iVar0 = func_661(bParam0, iParam1, 1);
					if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_462(bParam0) < func_463(bParam0))
						{
							func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_255(44))
		{
			if (func_77(bParam0, 709057512))
			{
				func_459(joaat("EXOTIC_STAGE_02"));
				if (func_460() == 1)
				{
					func_409(0, 10);
					iVar0 = func_661(bParam0, iParam1, 2);
					if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_462(bParam0) < func_463(bParam0))
						{
							func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_255(45))
		{
			if (func_77(bParam0, -1478961327))
			{
				func_459(joaat("EXOTIC_STAGE_03"));
				if (func_460() == 2)
				{
					func_409(0, 10);
					iVar0 = func_661(bParam0, iParam1, 4);
					if (((bParam0 == joaat("PROVISION_GATOR_EGG") || bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_462(bParam0) < func_463(bParam0))
						{
							func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_255(46))
		{
			if (func_77(bParam0, -1238404098))
			{
				func_459(joaat("EXOTIC_STAGE_04"));
				if (func_460() == 3)
				{
					func_409(0, 10);
					iVar0 = func_661(bParam0, iParam1, 8);
					if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_462(bParam0) < func_463(bParam0))
						{
							func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_255(47))
		{
			if (func_77(bParam0, 1160548794))
			{
				func_459(joaat("EXOTIC_STAGE_05"));
				if (func_460() == 4)
				{
					func_409(0, 10);
					iVar0 = func_661(bParam0, iParam1, 16);
					if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_462(bParam0) < func_463(bParam0))
						{
							func_263(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_536(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
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
	if (!func_210(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_127(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_662(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_663(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_664(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_665(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_666(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_151(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_537(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_208(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_393(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_538(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_21(bParam0, 0))
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

void func_539(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_540(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_541(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_478(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_478(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_542(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_478(iParam0, (1 << 16)) && !func_478(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_478(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_478(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_543(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_544()
{
	return Global_1905944.f_5694;
}

bool func_545(int iParam0, var uParam1)
{
	if (!func_667(iParam0))
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

int func_546()
{
	return func_668(Global_40.f_12019);
}

int func_547()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_414(iVar1);
		if (func_221(bVar2, 1, 0) || func_553(func_552(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_548()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_669(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_549()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_558(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_550()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_551(int iParam0)
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

int func_552(bool bParam0)
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

bool func_553(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_554(int iParam0)
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

int func_555(int iParam0)
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

int func_556(int iParam0)
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

char* func_557(bool bParam0)
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

bool func_558(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_559(int iParam0)
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

char* func_560(int iParam0)
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

bool func_561(bool bParam0)
{
	if (func_670(bParam0) && func_221(bParam0, 1, 0))
	{
		return true;
	}
	else if (func_671(bParam0) & func_672(bParam0))
	{
		return true;
	}
	return false;
}

char* func_562(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_244(bParam0));
}

int func_563(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_564(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_565(bool bParam0)
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

void func_566(int iParam0)
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

void func_567(bool bParam0)
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

void func_568(bool bParam0)
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

void func_569(bool bParam0)
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

void func_570(bool bParam0)
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

void func_571(bool bParam0)
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

void func_572(bool bParam0)
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

int func_573(bool bParam0)
{
	if (bParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_329(bParam0, 1) /*3*/];
}

void func_574()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_673();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_162(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_309(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_162(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_309(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_575()
{
	return Global_1899515;
}

void func_576(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_674(*iParam0);
	iVar1 = func_675(*iParam0);
	iVar2 = func_676(*iParam0);
	iVar3 = func_677(*iParam0);
	iVar4 = func_678(*iParam0);
	iVar5 = func_679(*iParam0);
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
	iVar6 = func_680(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_680(iVar1, iVar0);
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
	func_681(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_577(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_578(int iParam0)
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

int func_579(int iParam0)
{
	return func_683(iParam0, -1);
}

bool func_580(int iParam0, bool bParam1)
{
	return func_684(func_575(), iParam0, bParam1);
}

bool func_581()
{
	if (func_437())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_582(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_685((Global_40.f_4283.f_325 + iParam0));
}

void func_583(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_581())
	{
		func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_584(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_585(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_686(iParam0, 1);
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

void func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_686(iParam0, 1);
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

void func_587()
{
	func_586(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_586(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_586(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_586(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_586(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_586(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_586(joaat("WS_COLTER_STAGE_MP"));
}

void func_588()
{
	func_586(joaat("WS_BEECHERS_SHACK"));
	func_586(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_586(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_586(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_586(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_586(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_586(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_586(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_586(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_586(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_589(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_686(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_590(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_591(int iParam0)
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

void func_592(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_593(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_594()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_595(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_596()
{
	float fVar0;
	int iVar1;

	fVar0 = func_687(13);
	iVar1 = func_688(fVar0);
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

float func_597()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_598()
{
	if (func_437())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_599()
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

float func_600()
{
	return Global_1954815.f_3;
}

void func_601(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_689(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_602(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_689(iParam0, 2, 0, 0);
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

float func_603(float fParam0, float fParam1, float fParam2)
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

bool func_604()
{
	return func_687(12) <= -99.0f;
}

bool func_605()
{
	return func_687(12) >= 99.0f;
}

int func_606()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_208(bVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_690() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_607(int iParam0)
{
	if (!func_482(iParam0))
	{
		return false;
	}
	if (func_611(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_608(int iParam0)
{
	if (!func_482(iParam0))
	{
		return false;
	}
	if (func_611(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_609(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_482(iParam0))
	{
		return;
	}
	if (!func_608(iParam0))
	{
		func_614(iParam0, 2);
		if (bParam2)
		{
			if (!func_1(0, 0, 1))
			{
				func_409(1, 4);
			}
		}
		if ((!func_612() && !bParam1) && !func_1(0, 0, 1))
		{
			func_613(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_691(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_610(int iParam0)
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

bool func_611(int iParam0, int iParam1)
{
	if (!func_482(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_612()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

int func_613(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_614(int iParam0, int iParam1)
{
	if (!func_482(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_615(int iParam0, bool bParam1)
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

void func_616(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_692(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_267(50);
			}
			else
			{
				func_267(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_267(51);
			}
			else
			{
				func_267(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_693(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_291();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_291();
			}
			break;
		case 3:
			func_267(24);
			if (bParam1)
			{
				if (!func_693(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_291();
				}
			}
			break;
	}
}

void func_617(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_694(0))
			{
				iVar0++;
			}
			if (func_694(2))
			{
				iVar0++;
			}
			if (func_694(4))
			{
				iVar0++;
			}
			if (!func_695(16))
			{
				if (iVar0 == 1)
				{
					func_696();
					func_256(456, 1);
					func_697(16);
				}
			}
			if (!func_695(32))
			{
				if (iVar0 >= 3)
				{
					func_696();
					func_256(456, 1);
					func_697(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_694(1))
			{
				iVar0++;
			}
			if (func_694(3))
			{
				iVar0++;
			}
			if (func_694(7))
			{
				iVar0++;
			}
			if (!func_695(1))
			{
				if (iVar0 == 1)
				{
					func_698();
					func_256(457, 1);
					func_697(1);
				}
			}
			if (!func_695(2))
			{
				if (iVar0 >= 3)
				{
					func_698();
					func_256(457, 1);
					func_697(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_694(5))
			{
				iVar0++;
			}
			if (func_694(6))
			{
				iVar0++;
			}
			if (func_694(8))
			{
				iVar0++;
			}
			if (!func_695(4))
			{
				if (iVar0 == 1)
				{
					func_699();
					func_256(455, 1);
					func_697(4);
				}
			}
			if (!func_695(8))
			{
				if (iVar0 >= 3)
				{
					func_699();
					func_256(455, 1);
					func_697(8);
				}
			}
			break;
	}
}

void func_618(var uParam0)
{
	func_489(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_489(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_489(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_619(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_700(uParam0))
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

bool func_620(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_621(bool bParam0)
{
	int iVar0;

	if (!func_21(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_208(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_622(int iParam0)
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

bool func_623(int iParam0, int iParam1)
{
	return false;
}

bool func_624()
{
	return false;
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_626(int iParam0, int iParam1)
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

char* func_627(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_628(int iParam0)
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

char* func_629(int iParam0)
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

int func_630(int iParam0)
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

int func_631(int iParam0)
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

int func_632(int iParam0)
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

void func_633(var uParam0, int iParam1)
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
			if ((func_701(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_701(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_702(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_634(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_703(uParam0, 1))
	{
		func_704(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_635(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_636(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_509(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_509(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_509(iVar2, iVar0);
		}
	}
}

int func_637(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_484();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_638(bool bParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_639(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_640(bool bParam0, int iParam1)
{
	return (Global_1946054.f_57[func_329(bParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_641(var uParam0)
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

void func_642(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_705(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_706(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_643(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

void func_644(int iParam0, bool bParam1, int iParam2)
{
	func_707(&(Global_1946054.f_1378), iParam0);
	func_708(2, iParam0, 6);
	if (bParam1)
	{
		func_645(0, 1);
	}
}

void func_645(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_709(0);
	}
	if (bParam0)
	{
		func_516(8);
		func_516((1 << 9));
	}
	else
	{
		func_516(8);
		func_516(16);
	}
}

bool func_646(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_647(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

bool func_648(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_649()
{
	return Global_1109000.f_245;
}

void func_650(var uParam0, int iParam1, struct<15> /*120*/ sParam2)
{
	int iVar0;
	struct<22> /*176*/ sVar1;

	if (!func_700(uParam0))
	{
		return;
	}
	if (Global_1223409 < 20)
	{
		Global_1223409++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223409.f_1[iVar0 /*22*/] = { Global_1223409.f_1[iVar0 + 1 /*22*/] /*22*/ };
			iVar0++;
		}
	}
	sVar1.f_7.f_1 = 10;
	sVar1.f_7.f_14 = 255;
	sVar1 = { *uParam0 /*4*/ };
	sVar1.f_4 = iParam1;
	sVar1.f_7 = { sParam2 /*15*/ };
	sVar1.f_6 = 1;
	Global_1223409.f_1[(Global_1223409 - 1) /*22*/] = { sVar1 /*22*/ };
}

int func_651(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
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
					func_390(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_391(&bVar0, iVar9, iVar5, iVar6);
					if (!func_21(bVar0, 0))
					{
						bVar0 = func_382(iVar2);
					}
				}
				else
				{
					bVar0 = func_382(iVar2);
				}
				if (bVar0 == bParam1)
				{
					PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
					if (bParam3)
					{
						func_710(iVar2);
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

bool func_652(int iParam0)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (Global_1914319.f_17370 | iParam0 || Global_1914319.f_16855 == 2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (iVar0 != func_156(7))
			{
				return true;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_156(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(func_653());
		if (iVar0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

int func_653()
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_654(int iParam0, bool bParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	sVar0 = { func_711(iParam0, bParam1) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &sVar0, false);
	return iVar4;
}

int func_655(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	if (func_712(iParam0))
	{
		iVar1 = func_713(iParam0);
		if (func_21(bParam1, 0))
		{
			if (func_656(bParam1))
			{
				func_714(iVar1, bParam1, iParam2);
			}
		}
	}
	return func_715(iVar0, bParam1, iParam2, bParam3, iParam4);
}

bool func_656(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_318(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_716(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_657(int iParam0, bool bParam1, int iParam2)
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

bool func_658(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_313(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar0))
	{
		STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam1);
	}
	func_717(bParam0, iParam1);
	return func_392(bParam0, iParam1, bParam2, iParam3);
}

int func_659(bool bParam0)
{
	if (func_77(bParam0, joaat("CI_TAG_ITEM_QUALITY_PERFECT")))
	{
		return 2;
	}
	else if (func_77(bParam0, joaat("CI_TAG_ITEM_QUALITY_HIGH")))
	{
		return 1;
	}
	else if (func_77(bParam0, joaat("CI_TAG_ITEM_QUALITY_POOR")))
	{
		return 0;
	}
	return 1;
}

void func_660(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (func_718() && iParam2 == 0))
	{
		func_719(1);
		func_720(1);
	}
}

int func_661(bool bParam0, int iParam1, int iParam2)
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
	iVar1 = func_462(bVar9);
	iVar2 = func_462(bVar10);
	iVar3 = func_462(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_462(bVar12);
	}
	iVar5 = func_463(bVar9);
	iVar6 = func_463(bVar10);
	iVar7 = func_463(bVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_463(bVar12);
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

struct<29> /*232*/ func_662(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_147(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_666(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_663(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_721(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_217(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_217(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_217(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_664(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_147(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_666(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_665(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_722(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_217(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_217(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_217(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> /*136*/ func_666(var uParam0)
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

bool func_667(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_668(int iParam0)
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

bool func_669(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_670(bool bParam0)
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

int func_671(bool bParam0)
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

int func_672(bool bParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_723(&iVar0, 0, iVar95, &sVar1) && !func_723(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_724(iVar0, &sVar1);
			if (func_21(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_673()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_725(Global_35, &iVar0);
	sVar30 = { func_201(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_726(0);
	func_727(7);
	func_728(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_484() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_728(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_728(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_729(Global_35, &iVar0);
}

int func_674(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_184(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_675(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_676(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_677(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_678(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_679(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_680(int iParam0, int iParam1)
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

void func_681(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_730(iParam0, iParam6);
	func_731(iParam0, iParam5);
	func_732(iParam0, iParam4);
	func_733(iParam0, iParam3);
	func_734(iParam0, iParam2);
	func_735(iParam0, iParam1);
}

int func_682(int iParam0)
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

int func_683(int iParam0, int iParam1)
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
		iParam1 = func_147(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_730(&uVar6, iVar0);
	func_731(&uVar6, iVar1);
	func_732(&uVar6, iVar2);
	func_733(&uVar6, iVar3);
	func_734(&uVar6, iVar4);
	func_735(&uVar6, iVar5);
	return uVar6;
}

bool func_684(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_736(iParam1) || !func_736(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_685(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_491(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_686(int iParam0, int iParam1)
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

float func_687(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_688(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_689(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_242(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_242(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_690()
{
	return Global_1946054.f_1497;
}

char* func_691(int iParam0)
{
	bool bVar0;

	bVar0 = func_610(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_562(bVar0);
}

int func_692(bool bParam0)
{
	int iVar0;

	if (func_737(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_738(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_739(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_740(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_693(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_221(func_741(iVar0, iParam0), 1, 0))
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

bool func_694(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_221(func_742(iVar0, iParam0), 1, 0))
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

bool func_695(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_696()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_309(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_324(1);
	func_503(1, iVar0, 0);
}

void func_697(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_698()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_309(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_324(2);
	func_503(2, iVar0, 0);
}

void func_699()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_309(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_324(0);
	func_503(0, iVar0, 0);
}

bool func_700(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_702(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_703(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_704(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_705(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_706(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_707(var uParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_705(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_706(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
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

void func_709(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

void func_710(int iParam0)
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
	if (func_743(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		func_389(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_21(uVar3[iVar15], 0))
			{
			}
			else if (!func_744(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = func_745(uVar3[iVar15], iVar2);
				if (func_746(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_747(&iVar1);
	if (func_746(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

struct<4> /*32*/ func_711(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_748(iParam0) /*5*/ };
	return func_749(iParam0, bParam1, sVar0, sVar0.f_4);
}

bool func_712(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_713(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_713(int iParam0)
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

void func_714(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_750(bParam1);
	iVar1 = func_751(bVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] -= iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = func_752(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

int func_715(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> /*16*/ sVar3;

	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam4 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam4 == joaat("REMOVE_REASON_GIVEN");
	if (!func_753(iParam0, bParam1, 1))
	{
		return 0;
	}
	sVar3 = { func_313(bParam1) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar3))
	{
		if ((func_654(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar3, iParam2);
		}
		else if ((func_654(iParam0, bParam1) - iParam2) < 0)
		{
			func_715(iParam0, bParam1, func_129(bParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_754(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_80(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && bParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_164(bParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_716(int iParam0, int iParam1)
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

void func_717(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		iVar0 = func_156(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	func_657(iVar0, bParam0, iParam1);
}

bool func_718()
{
	if ((Global_1935689.f_9445 != (Global_1935689.f_19.f_203 - 1) || func_755(func_530(0), Global_1935689.f_9440, 0) > 0) || Global_1935689.f_9445 == 15)
	{
		return true;
	}
	return false;
}

void func_719(int iParam0)
{
	Global_1935689.f_11 = iParam0;
}

void func_720(int iParam0)
{
	Global_1935689.f_10 = iParam0;
}

bool func_721(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_722(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_723(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_371(iParam1) && !func_756(iParam1))
	{
		bVar0 = func_156(iParam1);
	}
	else
	{
		return false;
	}
	func_757(uParam3);
	iVar5 = func_758(iParam2);
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

void func_724(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_390(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_391(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_725(int iParam0, int* iParam1)
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
		if (func_232(bVar31))
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

void func_726(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_21(bVar1, 0))
		{
			func_759(bVar1, 0, bParam0);
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

void func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_760(352481484);
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
		if (func_208(bVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_761(&(Global_1946054.f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_762(bVar2, 0))
		{
			func_763(bVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_728(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_764(bParam0))
	{
		return;
	}
	iVar0 = func_208(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_765(bParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_765(bParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_765(bParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_765(bParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_765(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_765(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_766(0))
	{
		func_767(bParam0, 1);
		if (func_484() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_767(func_766(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_767(func_766(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_768();
	if (func_769(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_147(0), bParam0, 0);
	}
	func_763(bParam0, bParam3);
	if (bParam2)
	{
		func_645(0, 0);
	}
}

void func_729(int iParam0, int iParam1)
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
				if (func_146((*iParam1)[iVar0]))
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

void func_730(int iParam0, int iParam1)
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

void func_731(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_732(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_675(*iParam0);
	iVar1 = func_674(*iParam0);
	if (iParam1 < 1 || iParam1 > func_680(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_733(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_734(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_735(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_736(int iParam0)
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
	iVar0 = func_679(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_678(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_677(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_674(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_675(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_676(iParam0);
	if (iVar5 < 1 || iVar5 > func_680(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_737(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_738(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_739(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_740(bool bParam0)
{
	if (!func_21(bParam0, 0))
	{
		return false;
	}
	if (func_77(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_741(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_770(iParam0);
		case 1:
			return func_771(iParam0);
		case 2:
			return func_772(iParam0);
		case 3:
			return func_773(iParam0);
	}
	return 0;
}

int func_742(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_774(iParam0);
		case 1:
			return func_775(iParam0);
		case 2:
			return func_776(iParam0);
		case 3:
			return func_777(iParam0);
		case 4:
			return func_778(iParam0);
		case 5:
			return func_779(iParam0);
		case 6:
			return func_780(iParam0);
		case 7:
			return func_781(iParam0);
		case 8:
			return func_782(iParam0);
	}
	return 0;
}

bool func_743(int iParam0, int iParam1)
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

bool func_744(bool bParam0)
{
	if ((func_77(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) || func_77(bParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL"))) || func_77(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CARCASS")))
	{
		return true;
	}
	return false;
}

int func_745(bool bParam0, int iParam1)
{
	if (!func_21(bParam0, 0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (!func_744(bParam0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (func_783(bParam0, iParam1))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else if (func_77(bParam0, -1690954218))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_77(bParam0, 1149630095))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_77(bParam0, 194498509))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	}
	else if (func_77(bParam0, 43251425))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	}
	return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
}

bool func_746(int iParam0, int iParam1)
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

void func_747(int iParam0)
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

struct<5> /*40*/ func_748(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_749(iParam0, joaat("CHARACTER"), func_373(), joaat("SLOTID_NONE")) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	return sVar0;
}

struct<4> /*32*/ func_749(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_21(bParam1, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &sVar0);
	return sVar0;
}

bool func_750(bool bParam0)
{
	if (!func_656(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_751(bool bParam0, int iParam1)
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

int func_752(int iParam0, int iParam1, int iParam2)
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

bool func_753(int iParam0, bool bParam1, int iParam2)
{
	if (!func_21(bParam1, 0))
	{
		return false;
	}
	return func_654(iParam0, bParam1) >= iParam2;
}

int func_754(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_21(bParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	sVar0 = { func_748(iParam0) /*5*/ };
	sVar5 = { func_749(iParam0, bParam1, sVar0, sVar0.f_4) /*4*/ };
	return func_784(iParam0, bParam1, &sVar5, iParam2, iParam3, bParam4);
}

int func_755(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_785())
	{
		iVar0 = func_786(bParam1, 0);
	}
	else
	{
		iVar0 = func_129(bParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 += func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	if (bParam1 == Global_1935689.f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_756(int iParam0)
{
	int iVar0;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_371(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_757(var uParam0)
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

int func_758(int iParam0)
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

void func_759(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_208(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_787(bParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_787(bParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_787(bParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_787(bParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_787(bParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_787(bParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_768();
	}
	if (bParam1)
	{
		func_645(0, 0);
	}
}

void func_760(int iParam0)
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
	sVar2 = { func_363(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_365(&sVar2, &iVar0, &iVar1, 0))
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
		func_366(iVar0);
	}
}

void func_761(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_788(iParam2, *uParam0);
	func_789(&(uParam0->f_1[*uParam0 /*5*/]), bParam1, -1, 1, 0);
	*uParam0++;
}

bool func_762(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_148(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_215(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_147(0), &sVar5, bParam1);
	return true;
}

void func_763(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_148(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_215(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_147(0), &sVar5, bParam1);
}

bool func_764(bool bParam0)
{
	if (func_23() == -1)
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

int func_765(bool bParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_790(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_762(bParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = bVar1;
	if (func_208(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_761(&(Global_1946054.f_2657.f_26.f_26), bParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_766(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_484();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_767(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_148(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_202(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_215(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_147(0), &sVar5);
	return 1;
}

void func_768()
{
	int iVar0;

	if (func_23() == -1)
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

bool func_769(int iParam0)
{
	return func_792(func_791(iParam0));
}

int func_770(int iParam0)
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

int func_771(int iParam0)
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

int func_772(int iParam0)
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

int func_773(int iParam0)
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

int func_774(int iParam0)
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

int func_775(int iParam0)
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

int func_776(int iParam0)
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

int func_777(int iParam0)
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

int func_778(int iParam0)
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

int func_779(int iParam0)
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

int func_780(int iParam0)
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

int func_781(int iParam0)
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

int func_782(int iParam0)
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

bool func_783(bool bParam0, int iParam1)
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

int func_784(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> /*96*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_533(bParam1))
	{
		return 0;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_793(iParam0, *uParam2, &sVar0, 0))
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

bool func_785()
{
	if ((func_794(Global_1935689.f_9436, 1) || func_794(Global_1935689.f_9436, 2)) || func_794(Global_1935689.f_9436, 4))
	{
		return true;
	}
	return false;
}

int func_786(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_129(bParam0, bParam1, 0);
	if (func_794(Global_1935689.f_9436, 1))
	{
		iVar0 = func_156(func_218(0));
		iVar1 += func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), bParam0);
	}
	if (func_794(Global_1935689.f_9436, 2))
	{
		iVar0 = func_156(func_218(1));
		iVar1 += func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), bParam0);
	}
	if (func_794(Global_1935689.f_9436, 4))
	{
		iVar0 = func_156(func_218(6));
		iVar1 += func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), bParam0);
	}
	return iVar1;
}

int func_787(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_790(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_208(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_795(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_208(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_795(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_762(bParam0, 1);
	return 1;
}

void func_788(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_789(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_796(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_329(func_328(bParam1), 1);
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
		func_797(uParam0);
	}
}

bool func_790(bool bParam0, int iParam1)
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

int func_791(int iParam0)
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

bool func_792(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

bool func_793(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
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

bool func_794(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_795(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_798(iParam1);
	func_799(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_800(&(uParam0->f_26), iVar1);
		if (func_801(uParam0->f_26, &iVar0))
		{
			func_802(iVar0, iVar1);
		}
	}
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_803(&(uParam0->f_3));
}

void func_797(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_804(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_798(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_799(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_800(var uParam0, int iParam1)
{
	*uParam0--;
	func_796(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_801(int iParam0, int iParam1)
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

void func_802(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_803(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_804(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_805(func_484());
	if (*uParam0)
	{
		func_803(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, iParam1, 0, func_23() != -1, iParam2);
	*uParam0 = 1;
}

int func_805(int iParam0)
{
	if (func_23() == -1)
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

