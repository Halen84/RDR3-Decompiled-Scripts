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
	int iLocal_15 = 0;
	int iLocal_16[2] = { 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0.0f;
	bool bLocal_23 = false;
	struct<2> /*16*/ sLocal_24 = { 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 5;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 5;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<13> /*104*/ sLocal_40 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<5> /*40*/ sLocal_71 = { 0, 0, 0, 0, -1 } ;
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
	var uLocal_91 = -1;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 2;
	var uLocal_96 = 1;
	var uLocal_97 = 1;
	var uLocal_98 = 1;
	var uLocal_99 = 0;
	var uLocal_100 = 1;
	var uLocal_101 = 2;
	var uLocal_102 = 2;
	var uLocal_103 = 3;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 1;
	var uLocal_108 = 3;
	var uLocal_109 = 3;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_70 = sScriptParam_0.f_0;
	sLocal_71.f_1 = sScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&sLocal_71);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_1(&sLocal_71);
	}
	while (func_2())
	{
		switch (iLocal_69)
		{
			case 0:
				if (func_3(&sLocal_71))
				{
					iLocal_69 = 1;
					if (sLocal_71.f_4 == -1)
					{
						sLocal_71.f_4 = func_4(&sLocal_71);
					}
				}
				break;
			case 1:
				if (func_5(&sLocal_71))
				{
					func_6(&sLocal_71);
				}
				func_7(&sLocal_71);
				func_8(&sLocal_71);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&sLocal_71);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(iLocal_70);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	int iVar0;

	if (sLocal_71.f_0 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		sLocal_71.f_0 = func_10(iVar0);
		return false;
	}
	if (func_11(sLocal_71.f_0, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}
	func_12(uParam0);
	return true;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar2 = -1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPIT"))
	{
		iVar1 = 3;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPLACE"))
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE"))
	{
		iVar1 = 2;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_BROKEN_WAGONS"))
	{
		iVar1 = 11;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		iVar1 = 12;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
	{
		iVar1 = 11;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_FACE_TREES"))
	{
		iVar1 = 5;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
	{
		iVar1 = 4;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
	{
		iVar1 = 4;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_AXE_IN_TREE"))
	{
		iVar1 = 5;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"))
	{
		iVar1 = 3;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
	{
		iVar1 = 20;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES"))
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_KILL_ZONE"))
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > func_14(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
		case joaat("DISCOVER_LOC_GIANT_REMAINS"):
		case joaat("DISCOVER_LOC_GRAVE"):
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
		case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
		case -1505275983:
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_FACE_TREES"):
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
		case joaat("DISCOVER_LOC_FLYING_MACHINE"):
		case joaat("DISCOVER_LOC_WHALE_BONE"):
		case joaat("DISCOVER_LOC_OBELISK"):
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
		case joaat("DISCOVER_LOC_METEORITE"):
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
		case joaat("DISCOVER_LOC_TRADING_POST"):
		case joaat("DISCOVER_LOC_STONEHENGE"):
		case joaat("DISCOVER_LOC_MAMMOTH"):
		case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case 373034311:
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
		case joaat("DISCOVER_LOC_EASEL"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case 1519228573:
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			return true;
		case 677950956:
			if (func_15())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			if (func_16(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!func_17(uParam0))
		{
			func_18(uParam0);
			func_19(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!func_17(uParam0))
			{
				return;
			}
			if ((*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES") || *uParam0 == 677950956) || *uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
			{
				if (func_20(uParam0))
				{
					func_19(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (func_22(uParam0->f_6.f_2))
			{
				func_19(uParam0, 7);
				return;
			}
			func_19(uParam0, 1);
			break;
		case 1:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				func_23(&(uParam0->f_6.f_5));
				if ((((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956) || (*uParam0 == joaat("DISCOVER_LOC_GRAVE") && func_20(uParam0)))
				{
					func_19(uParam0, 3);
				}
				else
				{
					func_19(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_24(&(uParam0->f_6.f_5)))
			{
				PAD::SET_CONTROL_SHAKE(0, 150, 100);
				func_25(&(uParam0->f_6.f_5));
			}
			else if (func_26(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_CONTROL_SHAKE(0, 150, 100);
				func_19(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5.0f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 0))
			{
				func_28(uParam0);
				if ((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || (*uParam0 == joaat("DISCOVER_LOC_GRAVE") && func_20(uParam0)))
				{
					func_19(uParam0, 6);
				}
				else
				{
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5.0f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			else if (func_31(uParam0))
			{
				if (!func_11(*uParam0, 16))
				{
					func_32(*uParam0, 16);
					if (func_33(uParam0->f_6.f_8))
					{
						func_34(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
					{
						func_37(1, -1);
					}
				}
				else if (func_33(uParam0->f_6.f_8))
				{
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				func_25(&(uParam0->f_6.f_5));
				func_19(uParam0, 5);
			}
			else if (func_38(uParam0->f_6.f_8, 1) > 0.0f)
			{
				if (!func_11(*uParam0, 16))
				{
					if (!func_39(uParam0->f_3, 2))
					{
						func_40(&(uParam0->f_3), 2);
						if (!*uParam0 == joaat("DISCOVER_LOC_GRAVE") && !*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == joaat("DISCOVER_LOC_GRAVE") && !*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(uParam0);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				func_43(&(uParam0->f_3), 2);
				if (!*uParam0 == joaat("DISCOVER_LOC_GRAVE") && !*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES") || *uParam0 == 677950956)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (!*uParam0 == joaat("DISCOVER_LOC_GRAVE") && !*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				func_42(uParam0);
			}
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5.0f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
			{
			}
			else if (func_26(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == joaat("DISCOVER_LOC_GRAVE") && !*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (func_39(uParam0->f_3, 2))
				{
					func_43(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == joaat("DISCOVER_LOC_GRAVE") && !*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
				{
					func_44(uParam0);
				}
				if ((*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES") || *uParam0 == 677950956) || *uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
				{
					func_18(uParam0);
					func_19(uParam0, 7);
				}
				else
				{
					func_19(uParam0, 6);
				}
			}
			break;
		case 6:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5.0f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;

	if (!func_39(uParam0->f_3, 8))
	{
		if (func_45(*uParam0) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == joaat("DISCOVER_LOC_INDIAN_BURIAL") && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216, 0);
				func_40(&(uParam0->f_3), 8);
				if (*uParam0 == joaat("DISCOVER_LOC_INDIAN_BURIAL"))
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (sLocal_24.f_0 > 0 && sLocal_24.f_0 < 13)
	{
	}
	switch (sLocal_24.f_0)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
			{
				func_43(&(uParam0->f_3), 1);
			}
			if (((*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPIT") || *uParam0 == joaat("DISCOVER_LOC_OLD_FIREPLACE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_WAGONS"))
			{
				if (!func_20(uParam0))
				{
					if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 40.0f, 1, 1))
					{
						return;
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_HIDDEN_TUNNEL") || *uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
			{
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
			{
				if (uParam0->f_4 == 7)
				{
					func_50(1);
				}
				if (!func_49(uParam0))
				{
					return;
				}
				if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 40.0f, 1, 1))
				{
					return;
				}
				if (!func_20(uParam0))
				{
					if (func_11(*uParam0, 16))
					{
						func_51(*uParam0, 16);
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES") || *uParam0 == 677950956)
			{
				if (!func_20(uParam0))
				{
					if (func_11(*uParam0, 16))
					{
						func_51(*uParam0, 16);
					}
				}
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
			{
				if (func_20(uParam0))
				{
					if (!func_11(*uParam0, 16))
					{
						func_32(*uParam0, 16);
					}
				}
				else if (func_11(*uParam0, 16))
				{
					func_51(*uParam0, 16);
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
			{
				if (!func_20(uParam0))
				{
					if (!func_52())
					{
						if (func_11(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_LOVE_MESSAGE"))
			{
				if (func_53(*uParam0))
				{
					if (func_16(59))
					{
						if (!func_54(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND")))
						{
							if (!func_55(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND")))
							{
								func_56(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND"), 1, 0);
							}
						}
					}
					func_57(&sLocal_24, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 1464664327 || *uParam0 == joaat("DISCOVER_LOC_CIVIL_WAR_FORT"))
			{
				if (func_53(*uParam0))
				{
					func_57(&sLocal_24, 13, 1);
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
			{
				if (uParam0->f_4 == 11)
				{
					if (func_20(uParam0))
					{
						if (!func_11(*uParam0, 16))
						{
							func_32(*uParam0, 16);
						}
						if (!func_11(*uParam0, 32))
						{
							func_32(*uParam0, 32);
						}
					}
					else
					{
						if (func_11(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
						if (func_11(*uParam0, 32))
						{
							func_51(*uParam0, 32);
						}
					}
				}
				else if (func_58(uParam0, 1))
				{
					if (func_20(uParam0))
					{
						if (!func_11(*uParam0, 16))
						{
							func_32(*uParam0, 16);
						}
						if (!func_11(*uParam0, 32))
						{
							func_32(*uParam0, 32);
						}
					}
					else
					{
						if (func_11(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
						if (func_11(*uParam0, 32))
						{
							func_51(*uParam0, 32);
						}
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_POWDER_KEG"))
			{
				if (func_53(*uParam0))
				{
					if (!func_59(uParam0, 0))
					{
						return;
					}
					func_57(&sLocal_24, 13, 1);
				}
				else
				{
					if (!func_59(uParam0, 1))
					{
						return;
					}
					if (!func_49(uParam0))
					{
						return;
					}
				}
			}
			else if (func_53(*uParam0))
			{
			}
			func_60(uParam0);
			func_57(&sLocal_24, 1, 1);
			break;
		case 1:
			func_61(uParam0);
			func_57(&sLocal_24, 2, 1);
			break;
		case 2:
			if (!func_62(uParam0) || func_63())
			{
				return;
			}
			func_57(&sLocal_24, 3, 1);
			break;
		case 3:
			if (func_64(uParam0))
			{
				func_57(&sLocal_24, 10, 1);
			}
			break;
		case 10:
			if (!*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
			{
				if (!func_39(uParam0->f_3, 1))
				{
					func_40(&(uParam0->f_3), 1);
					if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
					{
						Global_40.f_8863.f_146++;
					}
				}
			}
			if (*uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (func_67(&(sLocal_24.f_1)) >= 5.0f)
					{
						MISC::SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 15.0f, false);
						fLocal_22 = 0.1f;
						GRAPHICS::USE_PARTICLE_FX_ASSET("scr_discoverables");
						iLocal_20 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_disc_whispering_trees", func_68(uParam0), 0.0f, 0.0f, 0.0f, 1.0f, false, false, false, false);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						func_57(&sLocal_24, 11, 1);
					}
				}
				else
				{
					func_25(&(sLocal_24.f_1));
				}
			}
			else if (*uParam0 == 1464664327)
			{
				if ((!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					func_69(uParam0);
				}
				if (func_70(uParam0))
				{
					func_71(uParam0);
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_POWDER_KEG"))
			{
				if (func_72(uParam0))
				{
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
			{
				if (uParam0->f_4 == 11)
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							if (((func_39(Global_40.f_8863.f_152, (1 << 11)) && func_39(Global_40.f_8863.f_152, (1 << 12))) && func_39(Global_40.f_8863.f_152, (1 << 13))) && func_39(Global_40.f_8863.f_152, (1 << 14)))
							{
								func_71(uParam0);
							}
							else
							{
								func_74(*uParam0);
							}
						}
					}
				}
				else if (!func_53(*uParam0))
				{
					if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					{
						func_74(*uParam0);
					}
					if (func_75(uParam0))
					{
						if ((((func_39(Global_40.f_8863.f_152, (1 << 11)) && func_39(Global_40.f_8863.f_152, (1 << 12))) && func_39(Global_40.f_8863.f_152, (1 << 13))) && func_39(Global_40.f_8863.f_152, (1 << 14))) && func_11(*uParam0, 16))
						{
							func_71(uParam0);
						}
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_CIVIL_WAR_FORT"))
			{
				if (!func_11(*uParam0, 8))
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_69(uParam0);
					}
				}
				if (!func_11(*uParam0, 32))
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_74(*uParam0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[0]))
				{
					if (func_48(Global_35, func_76(uParam0, 0), 15.0f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(uLocal_28[0], func_77(uParam0, 0));
					}
				}
				if (func_78())
				{
					if (func_79(func_77(uParam0, 0)))
					{
						func_71(uParam0);
						func_66(uParam0);
						func_57(&sLocal_24, 13, 1);
					}
				}
			}
			else if (*uParam0 == -834293086)
			{
				if (!func_20(uParam0))
				{
					func_73(uParam0);
					func_80(uParam0);
					func_74(*uParam0);
				}
				if (!func_53(*uParam0))
				{
					if ((func_39(Global_40.f_8863.f_153, 1) && func_39(Global_40.f_8863.f_153, 2)) && func_39(Global_40.f_8863.f_153, 4))
					{
						func_32(*uParam0, 2);
					}
				}
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
				{
					if (func_48(Global_35, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true), 15.0f, 1, 1))
					{
						if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "IsWithinHornetsVolume"))
						{
							PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", true, -1);
						}
					}
					else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "IsWithinHornetsVolume"))
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", false, -1);
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				if (func_81(uParam0))
				{
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
			{
				if ((((((((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 2) || uParam0->f_4 == 3) || uParam0->f_4 == 4) || uParam0->f_4 == 5) || uParam0->f_4 == 6) || uParam0->f_4 == 7) || uParam0->f_4 == 8)
				{
					if (func_81(uParam0))
					{
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES"))
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if ((((func_39(Global_40.f_8863.f_154, (1 << 11)) && func_39(Global_40.f_8863.f_154, (1 << 12))) && func_39(Global_40.f_8863.f_154, (1 << 13))) && func_39(Global_40.f_8863.f_154, (1 << 14))) && func_39(Global_40.f_8863.f_154, (1 << 15)))
							{
								func_71(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == 677950956)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if (((((func_39(Global_40.f_8863.f_154, (1 << 16)) && func_39(Global_40.f_8863.f_154, (1 << 17))) && func_39(Global_40.f_8863.f_154, (1 << 18))) && func_39(Global_40.f_8863.f_154, (1 << 19))) && func_39(Global_40.f_8863.f_154, (1 << 20))) && func_39(Global_40.f_8863.f_154, (1 << 21)))
							{
								func_71(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if (((func_39(Global_40.f_8863.f_152, (1 << 18)) && func_39(Global_40.f_8863.f_152, (1 << 19))) && func_39(Global_40.f_8863.f_152, (1 << 20))) && func_39(Global_40.f_8863.f_152, (1 << 21)))
							{
								func_71(uParam0);
							}
							else
							{
								func_74(*uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
			{
				func_82(uParam0);
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_83(uParam0->f_4);
							func_84(uParam0);
							if (func_52())
							{
								func_71(uParam0);
								func_57(&sLocal_24, 11, 1);
							}
							else
							{
								iVar0 = func_85();
								func_86(joaat("DISCOVER_LOC_DREAMCATCHERS"), iVar0, 20);
								func_87(MISC::VAR_STRING(2, "DISCO_DC_FOUND", iVar0, 20));
							}
							PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
						}
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
			{
				if (func_11(*uParam0, 16))
				{
					if (!func_53(*uParam0))
					{
						func_71(uParam0);
					}
				}
				if (func_48(Global_35, func_76(uParam0, 0), 75.0f, 1, 1))
				{
					if (func_88(uParam0, &iLocal_19, &uLocal_28, 0, 7))
					{
						if (ENTITY::IS_ENTITY_DEAD(uLocal_28[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_28[0], Global_35, true, true))
						{
							if (AUDIO::IS_STREAM_PLAYING(iLocal_21))
							{
								AUDIO::STOP_STREAM(iLocal_21);
							}
						}
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_STONEHENGE"))
			{
				if (func_89(uParam0))
				{
				}
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
				{
					func_74(*uParam0);
				}
				if (func_11(*uParam0, 16) && func_39(Global_40.f_8863.f_152, (1 << 17)))
				{
					if (!func_53(*uParam0))
					{
						func_71(uParam0);
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_KILL_ZONE"))
			{
				if (func_90(uParam0))
				{
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
			}
			else if (((((((((((((((((((((((*uParam0 == joaat("DISCOVER_LOC_ABANDONED_CHURCH") || *uParam0 == joaat("DISCOVER_LOC_ABANDONED_TRADING_POST")) || *uParam0 == joaat("DISCOVER_LOC_BRUSH_FIRE")) || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD")) || *uParam0 == joaat("DISCOVER_LOC_CRASHED_AIRSHIP")) || *uParam0 == joaat("DISCOVER_LOC_HIDDEN_TUNNEL")) || *uParam0 == joaat("DISCOVER_LOC_SPERM_WHALE")) || *uParam0 == joaat("DISCOVER_LOC_WHALE_BONE")) || *uParam0 == joaat("DISCOVER_LOC_TRADING_POST")) || *uParam0 == joaat("DISCOVER_LOC_FLYING_MACHINE")) || *uParam0 == joaat("DISCOVER_LOC_OBELISK")) || *uParam0 == joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT")) || *uParam0 == joaat("DISCOVER_LOC_ONE_ROOM_CHURCH")) || *uParam0 == joaat("DISCOVER_LOC_MAMMOTH")) || *uParam0 == joaat("DISCOVER_LOC_GHOST_TOWN")) || *uParam0 == joaat("DISCOVER_LOC_FOSSILIZED_MAN")) || *uParam0 == -1505275983) || *uParam0 == joaat("DISCOVER_LOC_REGISTER_ROCK")) || *uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND")) || *uParam0 == joaat("DISCOVER_LOC_GIANT_REMAINS")) || *uParam0 == joaat("DISCOVER_LOC_UTE_WICKUP")) || *uParam0 == joaat("DISCOVER_LOC_UTOPIAN_COLONY")) || *uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES")) || *uParam0 == joaat("DISCOVER_LOC_FACE_TREES"))
			{
				if (*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
				{
					func_91(uParam0);
				}
				if (*uParam0 == joaat("DISCOVER_LOC_FACE_TREES"))
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						uParam0->f_4 = func_4(uParam0);
						uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) /*3*/ };
					}
				}
				if ((*uParam0 == joaat("DISCOVER_LOC_GHOST_TOWN") || *uParam0 == joaat("DISCOVER_LOC_TRADING_POST")) || *uParam0 == joaat("DISCOVER_LOC_UTOPIAN_COLONY"))
				{
					if ((!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_69(uParam0);
					}
				}
				if (func_11(*uParam0, 16))
				{
					if (!func_53(*uParam0))
					{
						func_71(uParam0);
					}
				}
			}
			else if (!func_53(*uParam0))
			{
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (((*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPIT") || *uParam0 == joaat("DISCOVER_LOC_OLD_FIREPLACE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_WAGONS"))
					{
						func_73(uParam0);
						func_80(uParam0);
						func_74(*uParam0);
						if (*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPIT"))
						{
							if ((func_39(Global_40.f_8863.f_152, 1) && func_39(Global_40.f_8863.f_152, 2)) && func_39(Global_40.f_8863.f_152, 4))
							{
								func_32(*uParam0, 2);
							}
						}
						else if (*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPLACE"))
						{
							if (func_39(Global_40.f_8863.f_153, (1 << 10)) && func_39(Global_40.f_8863.f_153, (1 << 11)))
							{
								func_32(*uParam0, 2);
							}
						}
						else if (*uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE"))
						{
							if (func_39(Global_40.f_8863.f_153, (1 << 23)) && func_39(Global_40.f_8863.f_153, (1 << 24)))
							{
								func_32(*uParam0, 2);
							}
						}
						else if (*uParam0 == joaat("DISCOVER_LOC_BROKEN_WAGONS"))
						{
							if ((((((((((func_39(Global_40.f_8863.f_153, (1 << 12)) && func_39(Global_40.f_8863.f_153, (1 << 13))) && func_39(Global_40.f_8863.f_153, (1 << 14))) && func_39(Global_40.f_8863.f_153, (1 << 15))) && func_39(Global_40.f_8863.f_153, (1 << 16))) && func_39(Global_40.f_8863.f_153, (1 << 17))) && func_39(Global_40.f_8863.f_153, (1 << 18))) && func_39(Global_40.f_8863.f_153, (1 << 19))) && func_39(Global_40.f_8863.f_153, (1 << 20))) && func_39(Global_40.f_8863.f_153, (1 << 21))) && func_39(Global_40.f_8863.f_153, (1 << 22)))
							{
								func_32(*uParam0, 2);
							}
						}
					}
					else if (*uParam0 == joaat("DISCOVER_LOC_LOVE_MESSAGE"))
					{
						if (func_16(59))
						{
							if (!func_54(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND")))
							{
								func_93(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND"), 0, 0, 7, 0);
							}
						}
						func_71(uParam0);
					}
					else
					{
						func_71(uParam0);
					}
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
			}
			else
			{
				func_57(&sLocal_24, 13, 1);
			}
			break;
		case 11:
			if (*uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
				if (!bLocal_23)
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						if (fLocal_22 < 1.0f)
						{
							if (func_67(&(sLocal_24.f_1)) >= 1.0f)
							{
								fLocal_22 += 0.1f;
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
								{
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
								}
								func_25(&(sLocal_24.f_1));
							}
						}
						else
						{
							bLocal_23 = true;
							AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), true, true);
							AUDIO::_SET_AMBIENT_ZONE_POSITION(func_65(uParam0), func_68(uParam0), 0.0f);
						}
					}
				}
				else if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (func_67(&(sLocal_24.f_1)) >= 5.0f)
					{
						AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
						func_57(&sLocal_24, 12, 1);
					}
					else
					{
						func_25(&(sLocal_24.f_1));
					}
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
			{
				func_82(uParam0);
				if (func_94())
				{
					func_57(&sLocal_24, 12, 1);
				}
				else if (func_67(&(sLocal_24.f_1)) > 9.0f)
				{
					func_57(&sLocal_24, 12, 1);
				}
			}
			break;
		case 12:
			if (*uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
				if (fLocal_22 > 0.1f)
				{
					if (func_67(&(sLocal_24.f_1)) >= 1.0f)
					{
						fLocal_22 -= 0.1f;
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						}
						func_25(&(sLocal_24.f_1));
					}
				}
				else
				{
					bLocal_23 = false;
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_71(uParam0);
					func_66(uParam0);
					func_57(&sLocal_24, 13, 1);
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
			{
				func_82(uParam0);
				if (!func_94())
				{
					iVar1 = func_85();
					func_86(joaat("DISCOVER_LOC_DREAMCATCHERS"), iVar1, 20);
					func_87(MISC::VAR_STRING(2, "DISCO_DC_FOUND", iVar1, 20));
					func_71(uParam0);
					func_37(1, -1);
					func_57(&sLocal_24, 13, 1);
				}
			}
			break;
		case 13:
			break;
		default:
			break;
	}
}

void func_9(var uParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_15);
	}
	if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		func_58(uParam0, 0);
	}
	else if (*uParam0 == -834293086)
	{
		if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "IsWithinHornetsVolume"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", false, -1);
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
	}
	if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
	{
		if (AUDIO::IS_STREAM_PLAYING(iLocal_21))
		{
			AUDIO::STOP_STREAM(iLocal_21);
		}
	}
	if (!iLocal_19 == 0 && ENTITY::IS_MAP_ENTITY_PINNED(iLocal_19))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_19);
	}
	func_66(uParam0);
	func_95(&uLocal_28, 1);
	func_96(&sLocal_40, 1);
	func_97(uParam0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WB_DISCO_CEREMONIAL_HATCHET"):
			return -261997819;
		case joaat("WB_DISCO_AXE_IN_TREE"):
			return joaat("DISCOVER_LOC_AXE_IN_TREE");
		case joaat("WB_DISCO_AZTEC_MASK"):
			return 677950956;
		case joaat("WB_DISCO_BLACK_SHEEP"):
			return joaat("DISCOVER_LOC_BLACK_SHEEP");
		case joaat("WB_DISCO_BOAT_IN_TREE"):
			return joaat("DISCOVER_LOC_BOAT_IN_TREE");
		case joaat("WB_DISCO_BOOTS_NOTE_RANGE"):
			return 2135153015;
		case joaat("WB_DISCO_CIV_WAR_FORT"):
			return joaat("DISCOVER_LOC_CIVIL_WAR_FORT");
		case joaat("WB_DISCO_CIV_WAR_KNIFE"):
			return joaat("DISCOVER_LOC_CIVIL_WAR_SWORD");
		case joaat("WB_DISCO_CORPSE_PIT"):
			return joaat("DISCOVER_LOC_CORPSE_PIT");
		case joaat("WB_DISCO_DEAD_CIV_WAR"):
			return 1937333853;
		case joaat("WB_DISCO_DREAMCATCHERS"):
			return joaat("DISCOVER_LOC_DREAMCATCHERS");
		case joaat("WB_DISCO_EASEL"):
			return joaat("DISCOVER_LOC_EASEL");
		case joaat("WB_DISCO_FACE_IN_CLIFF"):
			return joaat("DISCOVER_LOC_FACE_IN_CLIFF");
		case joaat("WB_DISCO_FOSSILIZED_MAN"):
			return joaat("DISCOVER_LOC_FOSSILIZED_MAN");
		case joaat("WB_DISCO_GIANT_REMAINS"):
			return joaat("DISCOVER_LOC_GIANT_REMAINS");
		case joaat("WB_DISCO_GRAVE"):
			return joaat("DISCOVER_LOC_GRAVE");
		case joaat("WB_DISCO_ARTHUR_GRAVE"):
			return joaat("DISCOVER_LOC_GRAVE_ARTHUR");
		case joaat("WB_DISCO_KILL_ZONE"):
			return joaat("DISCOVER_LOC_KILL_ZONE");
		case joaat("WB_DISCO_HIDDEN_TUNNEL"):
			return joaat("DISCOVER_LOC_HIDDEN_TUNNEL");
		case joaat("WB_DISCO_LOVE_MESSAGE"):
			return joaat("DISCOVER_LOC_LOVE_MESSAGE");
		case joaat("WB_DISCO_METEORITE"):
			return joaat("DISCOVER_LOC_METEORITE");
		case joaat("WB_DISCO_MICAH_CAMP"):
			return joaat("DISCOVER_LOC_MICAH_CAMP");
		case joaat("WB_DISCO_OLD_WORLD_SCRIPT"):
			return joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT");
		case joaat("WB_DISCO_PHONOGRAPH_HOUSE"):
			return joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE");
		case joaat("WB_DISCO_PILE_SKULLS"):
			return 173549940;
		case joaat("WB_DISCO_PIRATE_KNIFE"):
			return joaat("DISCOVER_LOC_PIRATE_SWORD");
		case joaat("WB_DISCO_POWDER_KEG"):
			return joaat("DISCOVER_LOC_POWDER_KEG");
		case joaat("WB_DISCO_REGISTER_ROCK"):
			return joaat("DISCOVER_LOC_REGISTER_ROCK");
		case joaat("WB_DISCO_SCARECROW_1"):
			return joaat("DISCOVER_LOC_SCARECROW_1");
		case joaat("WB_DISCO_SCARECROW_2"):
			return joaat("DISCOVER_LOC_SCARECROW_2");
		case joaat("WB_DISCO_SCARECROW_3"):
			return joaat("DISCOVER_LOC_SCARECROW_3");
		case joaat("WB_DISCO_SCARECROW_4"):
			return joaat("DISCOVER_LOC_SCARECROW_4");
		case joaat("WB_DISCO_STONEHENGE"):
			return joaat("DISCOVER_LOC_STONEHENGE");
		case joaat("WB_DISCO_SUN_DIAL"):
			return joaat("DISCOVER_LOC_SUN_DIAL");
		case joaat("WB_DISCO_SWAMP_HAND"):
			return 1519228573;
		case joaat("WB_DISCO_TREE_STRUCK"):
			return -1505275983;
		case joaat("WB_DISCO_VAMPIRE_CLUES"):
			return joaat("DISCOVER_LOC_VAMPIRE_CLUES");
		case joaat("WB_DISCO_VIKING_GEAR"):
			return joaat("DISCOVER_LOC_VIKING_GEAR");
		case joaat("WB_DISCO_WHALE_BONE"):
			return joaat("DISCOVER_LOC_WHALE_BONE");
		case joaat("WB_DISCO_BUCK_CARCASS"):
			return -1824429070;
		case joaat("WB_DISCO_BRUSH_FIRE"):
			return joaat("DISCOVER_LOC_BRUSH_FIRE");
		case joaat("WB_DISCO_FLATTENED_CABIN"):
			return joaat("DISCOVER_LOC_FLATTENED_CABIN");
		case joaat("WB_DISCO_OBELISK"):
			return joaat("DISCOVER_LOC_OBELISK");
		case joaat("WB_DISCO_WHISKEY_TREE"):
			return joaat("DISCOVER_LOC_WHISKEY_TREE");
		case joaat("WB_DISCO_CIRCUS_WAGON"):
			return joaat("DISCOVER_LOC_CIRCUS_WAGON");
		case joaat("WB_DISCO_LIGHTNING_TREES"):
			return joaat("DISCOVER_LOC_LIGHTNING_TREES");
		case joaat("WB_DISCO_SERPENT_MOUND"):
			return joaat("DISCOVER_LOC_SERPENT_MOUND");
		case joaat("WB_DISCO_DEAD_MINER"):
			return joaat("DISCOVER_LOC_DEAD_MINER");
		case joaat("WB_DISCO_OLD_FIREPIT"):
			return joaat("DISCOVER_LOC_OLD_FIREPIT");
		case joaat("WB_DISCO_FLYING_MACHINE"):
			return joaat("DISCOVER_LOC_FLYING_MACHINE");
		case joaat("WB_DISCO_OLD_GRAVESTONES"):
			return joaat("DISCOVER_LOC_OLD_GRAVESTONES");
		case joaat("WB_DISCO_STRANGE_STATUES"):
			return joaat("DISCOVER_LOC_STRANGE_STATUES");
		case joaat("WB_DISCO_BROKEN_WAGONS"):
			return joaat("DISCOVER_LOC_BROKEN_WAGONS");
		case joaat("WB_DISCO_BRA_SECRET"):
			return joaat("DISCOVER_LOC_BRAITHWAITES_SECRET");
		case joaat("WB_DISCO_BRAITH_3"):
			return -2108030724;
		case joaat("WB_DISCO_CRASHED_AIRSHIP"):
			return joaat("DISCOVER_LOC_CRASHED_AIRSHIP");
		case joaat("WB_DISCO_UTE_WICKUP"):
			return joaat("DISCOVER_LOC_UTE_WICKUP");
		case joaat("WB_DISCO_WITCHES_CAULDRON"):
			return 1464664327;
		case joaat("WB_DISCO_OLD_DIRTY_CABIN"):
			return joaat("DISCOVER_LOC_OLD_DIRTY_CABIN");
		case joaat("WB_DISCO_SPERM_WHALE"):
			return joaat("DISCOVER_LOC_SPERM_WHALE");
		case joaat("WB_DISCO_FIRE_LOOKOUT_TOWER"):
			return joaat("DISCOVER_LOC_FIRE_LOOKOUT_TOWER");
		case joaat("WB_DISCO_BATS_IN_BARN"):
			return joaat("DISCOVER_LOC_BATS_IN_BARN");
		case joaat("WB_DISCO_HORNET_NESTS"):
			return -834293086;
		case joaat("WB_DISCO_BANK_STAGECOACH"):
			return joaat("DISCOVER_LOC_BANK_STAGECOACH");
		case joaat("WB_DISCO_PAGAN_RITUAL"):
			return joaat("DISCOVER_LOC_PAGAN_RITUAL");
		case joaat("WB_DISCO_MAMMOTH"):
			return joaat("DISCOVER_LOC_MAMMOTH");
		case joaat("WB_DISCO_UTOPIAN_COLONY"):
			return joaat("DISCOVER_LOC_UTOPIAN_COLONY");
		case joaat("WB_DISCO_WAGON_CIRCLE"):
			return joaat("DISCOVER_LOC_WAGON_CIRCLE");
		case joaat("WB_DISCO_METEOR_HOUSE"):
			return joaat("DISCOVER_LOC_METEOR_HOUSE");
		case joaat("WB_DISCO_WATER_DIVINER"):
			return joaat("DISCOVER_LOC_WATER_DIVINER");
		case joaat("WB_DISCO_DEAD_CHINESE_TRAVELLER"):
			return joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER");
		case joaat("WB_DISCO_DEAD_SNAKE"):
			return joaat("DISCOVER_LOC_DEAD_SNAKE");
		case joaat("WB_DISCO_DESERT_WAGON"):
			return joaat("DISCOVER_LOC_DESERT_WAGON");
		case joaat("WB_DISCO_MEDITATING_MONK"):
			return joaat("DISCOVER_LOC_MEDITATING_MONK");
		case joaat("WB_DISCO_PIG_MASK"):
			return -763376358;
		case joaat("WB_DISCO_CAT_MASK"):
			return joaat("DISCOVER_LOC_CAT_MASK");
		case joaat("WB_DISCO_RAM_MASK"):
			return joaat("DISCOVER_LOC_RAM_MASK");
		case joaat("WB_DISCO_ANCIENT_SEALED_CLAY_URN"):
			return joaat("DISCOVER_LOC_ANCIENT_URN");
		case joaat("WB_DISCO_TRADING_POST"):
			return joaat("DISCOVER_LOC_TRADING_POST");
		case joaat("WB_DISCO_TRAIL_TREES"):
			return joaat("DISCOVER_LOC_TRAIL_TREES");
		case joaat("WB_DISCO_MAIL_TRUCK"):
			return -1061274876;
		case joaat("WB_DISCO_WHISPERING_TREES"):
			return joaat("DISCOVER_LOC_WHISPERING_TREES");
		case joaat("WB_DISCO_CIV_WAR_BATTLEFIELD"):
			return joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD");
		case joaat("WB_DISCO_ABANDONED_MISSION"):
			return joaat("DISCOVER_LOC_ABANDONED_MISSION");
		case joaat("WB_DISCO_ANCIENT_ARROW_HEADS"):
			return 373034311;
		case joaat("WB_DISCO_ANCIENT_TOMAHAWK"):
			return joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK");
		case joaat("WB_DISCO_ANCIENT_URN"):
			return joaat("DISCOVER_LOC_ANCIENT_URN");
		case joaat("WB_DISCO_DEAD_CHAIN_GANG"):
			return joaat("DISCOVER_LOC_DEAD_CHAIN_GANG");
		case joaat("WB_DISCO_DEFACED_GRAVE"):
			return joaat("DISCOVER_LOC_DEFACED_GRAVE");
		case joaat("WB_DISCO_DERAILED_TRAIN"):
			return joaat("DISCOVER_LOC_DERAILED_TRAIN");
		case joaat("WB_DISCO_DONKEY_LADY"):
			return joaat("DISCOVER_LOC_DONKEY_LADY");
		case joaat("WB_DISCO_FACTORY_IN_SWAMP"):
			return joaat("DISCOVER_LOC_FACTORY_IN_SWAMP");
		case joaat("WB_DISCO_FROZEN_SETTLER"):
			return joaat("DISCOVER_LOC_FROZEN_SETTLER");
		case joaat("WB_DISCO_DEAD_TOWN"):
			return joaat("DISCOVER_LOC_GHOST_TOWN");
		case joaat("WB_DISCO_OBJECT_IN_TREE"):
			return joaat("DISCOVER_LOC_OBJECT_IN_TREE");
		case joaat("WB_DISCO_PIRATE_RUM"):
			return joaat("DISCOVER_LOC_PIRATE_RUM");
		case joaat("WB_DISCO_RUNAWAY_CORPSE"):
			return joaat("DISCOVER_LOC_RUNAWAY_CORPSE");
		case joaat("WB_DISCO_SHEEP_GUY"):
			return -777592153;
		case joaat("WB_DISCO_SHRINE"):
			return joaat("DISCOVER_LOC_SHRINE");
		case joaat("WB_DISCO_POTS_TREE"):
			return joaat("DISCOVER_LOC_POTS_TREE");
		case joaat("WB_DISCO_DEAD_BEAR"):
			return joaat("DISCOVER_LOC_DEAD_BEAR");
		case joaat("WB_DISCO_OLD_FIREPLACE"):
			return joaat("DISCOVER_LOC_OLD_FIREPLACE");
		case joaat("WB_DISCO_GRAVESTONE_TREE"):
			return joaat("DISCOVER_LOC_GRAVESTONE_TREE");
		case joaat("WB_DISCO_ABANDONED_FURNITURE"):
			return joaat("DISCOVER_LOC_ABANDONED_FURNITURE");
		case joaat("WB_DISCO_EARLY_SETTLERS"):
			return joaat("DISCOVER_LOC_EARLY_SETTLERS");
		case joaat("WB_DISCO_RAILROAD_GRAVESTONE"):
			return joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE");
		case joaat("WB_DISCO_ABANDONED_CHURCH"):
			return joaat("DISCOVER_LOC_ABANDONED_CHURCH");
		case joaat("WB_DISCO_ABANDONED_WELL"):
			return joaat("DISCOVER_LOC_ABANDONED_WELL");
		case joaat("WB_DISCO_HERMIT_WOMAN"):
			return joaat("DISCOVER_LOC_HERMIT_WOMAN");
		case joaat("WB_DISCO_INDIAN_BURIAL"):
			return joaat("DISCOVER_LOC_INDIAN_BURIAL");
		case joaat("WB_DISCO_BURNED_SETTLEMENT"):
			return joaat("DISCOVER_LOC_BURNED_SETTLEMENT");
		case joaat("WB_DISCO_FRANKENSTEIN_BOOK"):
			return joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK");
		case joaat("WB_DISCO_ROPE_BRIDGE"):
			return joaat("DISCOVER_LOC_ROPE_BRIDGE");
		case joaat("WB_DISCO_PIRATE_SKELETON"):
			return joaat("DISCOVER_LOC_PIRATE_SKELETON");
		case joaat("WB_DISCO_GRAYS_SECRET"):
			return joaat("DISCOVER_LOC_GRAYS_SECRET");
		case joaat("WB_DISCO_TREE_TRUNK_BOAT"):
			return joaat("DISCOVER_LOC_TREE_TRUNK_BOAT");
		case joaat("WB_DISCO_CONESTOGA_WAGON"):
			return joaat("DISCOVER_LOC_CONESTOGA_WAGON");
		case joaat("WB_DISCO_TREE_HOUSE"):
			return joaat("DISCOVER_LOC_TREE_HOUSE");
		case joaat("WB_DISCO_GEYSER"):
			return joaat("DISCOVER_LOC_GEYSER");
		case joaat("WB_DISCO_ABANDONED_OIL_WELL"):
			return joaat("DISCOVER_LOC_ABANDONED_OIL_WELL");
		case joaat("WB_DISCO_GHOST_TRAIN"):
			return joaat("DISCOVER_LOC_GHOST_TRAIN");
		case joaat("WB_DISCO_METEOR_SHOWER"):
			return joaat("DISCOVER_LOC_METEOR_SHOWER");
		case joaat("WB_DISCO_DESERTED_FARM"):
			return joaat("DISCOVER_LOC_DESERTED_FARM");
		case joaat("WB_DISCO_CATTLE_CARCASSES"):
			return joaat("DISCOVER_LOC_CATTLE_CARCASSES");
		case joaat("WB_DISCO_BROKEN_BRIDGE"):
			return joaat("DISCOVER_LOC_BROKEN_BRIDGE");
		case joaat("WB_DISCO_ABANDONED_TRADING_POST"):
			return joaat("DISCOVER_LOC_ABANDONED_TRADING_POST");
		case joaat("WB_DISCO_QUARRY"):
			return joaat("DISCOVER_LOC_QUARRY");
		case joaat("WB_DISCO_ROADSIDE_BROTHEL"):
			return joaat("DISCOVER_LOC_ROADSIDE_BROTHEL");
		case joaat("WB_DISCO_LIGHTNING_ALLEY"):
			return joaat("DISCOVER_LOC_LIGHTNING_ALLEY");
		case joaat("WB_DISCO_OVERTURNED_HEARSE"):
			return joaat("DISCOVER_LOC_OVERTURNED_HEARSE");
		case joaat("WB_DISCO_DESERT_SKELETONS"):
			return joaat("DISCOVER_LOC_DESERT_SKELETONS");
		case joaat("WB_DISCO_FACE_TREES"):
			return joaat("DISCOVER_LOC_FACE_TREES");
		case joaat("WB_DISCO_ALCHEMIST"):
			return 233600584;
		case joaat("WB_DISCO_JESUIT_MISSIONARY"):
			return joaat("DISCOVER_LOC_JESUIT_MISSIONARY");
		case joaat("WB_DISCO_MOUNTAIN_CLIMB"):
			return joaat("DISCOVER_LOC_MOUNTAIN_CLIMB");
		case joaat("WB_DISCO_BLACK_FLOWER"):
			return joaat("DISCOVER_LOC_BLACK_FLOWER");
		case joaat("WB_DISCO_ONE_ROOM_CHURCH"):
			return joaat("DISCOVER_LOC_ONE_ROOM_CHURCH");
		case joaat("WB_DISCO_TREASURE_MAP_HALVES"):
			return joaat("DISCOVER_LOC_TREASURE_MAP_HALVES");
		case joaat("WB_DISCO_STUFFED_GORILLA"):
			return joaat("DISCOVER_LOC_STUFFED_GORILLA");
		case joaat("WB_DISCO_OLD_RAILROAD_CAMP"):
			return joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP");
		case joaat("WB_DISCO_BIRD_NEST"):
			return joaat("DISCOVER_LOC_BIRD_NEST");
		case joaat("WB_DISCO_BARREL_RIDER"):
			return joaat("DISCOVER_LOC_BARREL_RIDER");
		case joaat("WB_DISCO_DEAD_MICAH"):
			return joaat("DISCOVER_LOC_DEAD_MICAH");
		case joaat("WB_DISCO_WAGON_CHEST"):
			return joaat("DISCOVER_LOC_WAGON_CHEST");
		default:
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_99(iParam0, 1)] & iParam1) != 0;
}

void func_12(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	char* sVar9;

	if (func_45(*uParam0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
					vVar0 = { -5576.82f, -2583.934f, -9.541f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 30.534f /*3*/ };
					vVar6 = { 13.524f, 10.157f, 15.906f /*3*/ };
					sVar9 = "DLAM_Attack";
					break;
				case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
					vVar0 = { 808.518f, 2299.105f, 250.32f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 21.51f /*3*/ };
					vVar6 = { 5.0f, 4.0f, 9.0f /*3*/ };
					sVar9 = "DLAT_Attack";
					break;
				case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
					vVar0 = { -2587.832f, -81.85f, 166.262f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 9.056f /*3*/ };
					vVar6 = { 52.076f, 56.679f, 16.103f /*3*/ };
					sVar9 = "DLIB_Attack";
					break;
				case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
					vVar0 = { 894.559f, -1969.353f, 43.7f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 51.997f /*3*/ };
					vVar6 = { 4.5f, 4.5f, 6.0f /*3*/ };
					sVar9 = "DLBS_Attack";
					break;
				case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
					vVar0 = { 1750.836f, -2091.653f, 40.941f /*3*/ };
					vVar3 = { 0.0f, 0.0f, -30.078f /*3*/ };
					vVar6 = { 2.215f, 3.182f, 2.394f /*3*/ };
					sVar9 = "DLRC_Attack";
					break;
				case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
					vVar0 = { 2285.546f, 97.363f, 49.583f /*3*/ };
					vVar3 = { 0.0f, 0.0f, -30.998f /*3*/ };
					vVar6 = { 7.132f, 4.645f, 4.596f /*3*/ };
					sVar9 = "DLDCG_Attack";
					break;
				case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
					vVar0 = { -988.307f, 1692.387f, 243.864f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
					vVar6 = { 4.673f, 3.887f, 3.06f /*3*/ };
					sVar9 = "DLDG_Attack";
					break;
				case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
					vVar0 = { -6314.771f, -3467.0f, -11.247f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 32.675f /*3*/ };
					vVar6 = { 2.852f, 3.164f, 3.06f /*3*/ };
					sVar9 = "DLJM_Attack";
					break;
				case joaat("DISCOVER_LOC_OLD_GRAVESTONES"):
					vVar0 = { 2133.283f, 145.452f, 75.745f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 58.303f /*3*/ };
					vVar6 = { 17.167f, 17.176f, 9.904f /*3*/ };
					sVar9 = "DLOG_Attack";
					break;
				case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
					vVar0 = { 2415.271f, -738.691f, 41.0f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 89.245f /*3*/ };
					vVar6 = { 6.662f, 6.841f, 12.231f /*3*/ };
					sVar9 = "DLORC_Attack";
					break;
				case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
					vVar0 = { -2341.024f, -2180.015f, 70.0f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 123.618f /*3*/ };
					vVar6 = { 7.322f, 10.134f, 10.231f /*3*/ };
					sVar9 = "DLOH_Attack";
					break;
				case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
					vVar0 = { -2905.353f, -254.294f, 186.571f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 129.763f /*3*/ };
					vVar6 = { 7.64f, 7.534f, 4.0f /*3*/ };
					sVar9 = "DLPR_Attack";
					break;
				case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
					vVar0 = { 2684.651f, 71.256f, 59.0f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 111.493f /*3*/ };
					vVar6 = { 4.343f, 3.084f, 3.303f /*3*/ };
					sVar9 = "DLRG_Attack";
					break;
				case joaat("DISCOVER_LOC_GRAVE"):
					if (Global_36 > -1200.0f)
					{
						vVar0 = { -762.369f, -1910.463f, 51.0f /*3*/ };
						vVar3 = { 0.0f, 0.0f, 43.472f /*3*/ };
						vVar6 = { 3.896f, 3.266f, 3.303f /*3*/ };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738.0f, -996.0f, 114.0f /*3*/ };
						vVar3 = { 0.0f, 0.0f, -54.795f /*3*/ };
						vVar6 = { 4.369f, 3.487f, 3.303f /*3*/ };
						sVar9 = "DLG2_Attack";
					}
					break;
				case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
					if (Global_36 > -1200.0f)
					{
						vVar0 = { -762.369f, -1910.463f, 51.0f /*3*/ };
						vVar3 = { 0.0f, 0.0f, 43.472f /*3*/ };
						vVar6 = { 3.896f, 3.266f, 3.303f /*3*/ };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738.0f, -996.0f, 114.0f /*3*/ };
						vVar3 = { 0.0f, 0.0f, -54.795f /*3*/ };
						vVar6 = { 4.369f, 3.487f, 3.303f /*3*/ };
						sVar9 = "DLG2_Attack";
					}
					break;
				case joaat("DISCOVER_LOC_UTE_WICKUP"):
					vVar0 = { -2694.572f, -1500.398f, 150.0f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 1.841f /*3*/ };
					vVar6 = { 16.663f, 12.967f, 11.141f /*3*/ };
					sVar9 = "DLUW_Attack";
					break;
				case joaat("DISCOVER_LOC_SHRINE"):
					vVar0 = { 2195.32f, -554.613f, 40.995f /*3*/ };
					vVar3 = { 0.0f, 0.0f, -74.605f /*3*/ };
					vVar6 = { 1.691f, 1.755f, 2.318f /*3*/ };
					sVar9 = "DLSW_Attack";
					break;
			}
			uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, sVar9);
		}
	}
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			if (iParam1 == 0)
			{
				return { 500.882f, 80.003f, 139.28f };
			}
			else if (iParam1 == 1)
			{
				return { 759.079f, -1133.282f, 55.059f };
			}
			else if (iParam1 == 2)
			{
				return { -3667.897f, -2805.515f, -7.129f };
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			if (iParam1 == 0)
			{
				return { -1521.811f, 519.1222f, 101.6756f };
			}
			else if (iParam1 == 1)
			{
				return { 2417.936f, 853.4788f, 72.5143f };
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return { 1747.022f, -267.8047f, 73.0826f };
			}
			else if (iParam1 == 1)
			{
				return { 1978.289f, -60.4567f, 59.4946f };
			}
			else if (iParam1 == 2)
			{
				return { 640.8188f, -1062.613f, 48.0237f };
			}
			else if (iParam1 == 3)
			{
				return { 839.6257f, -1174.002f, 54.9616f };
			}
			else if (iParam1 == 4)
			{
				return { 1917.611f, 10.6206f, 77.6881f };
			}
			else if (iParam1 == 5)
			{
				return { -85.5144f, 76.4358f, 93.2066f };
			}
			else if (iParam1 == 6)
			{
				return { 76.4646f, 854.9302f, 207.8816f };
			}
			else if (iParam1 == 7)
			{
				return { 1871.215f, 643.5952f, 119.9651f };
			}
			else if (iParam1 == 8)
			{
				return { 2572.759f, 690.9401f, 83.9642f };
			}
			else if (iParam1 == 9)
			{
				return { 2264.918f, 934.7651f, 81.1843f };
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			if (iParam1 == 0)
			{
				return { 525.7659f, 373.9645f, 107.9581f };
			}
			else if (iParam1 == 1)
			{
				return { 610.1569f, -142.2089f, 146.4651f };
			}
			else if (iParam1 == 2)
			{
				return { 1253.233f, 40.0713f, 94.2498f };
			}
			else if (iParam1 == 3)
			{
				return { 886.287f, 470.977f, 103.937f };
			}
			else if (iParam1 == 4)
			{
				return { 370.7786f, 1072.15f, 190.1675f };
			}
			else if (iParam1 == 5)
			{
				return { -3575.866f, -2199.067f, -13.415f };
			}
			else if (iParam1 == 6)
			{
				return { -5159.03f, -3162.67f, -18.5954f };
			}
			else if (iParam1 == 7)
			{
				return { -3970.804f, -3027.692f, -12.9605f };
			}
			else if (iParam1 == 8)
			{
				return { -3242.678f, -3077.875f, -0.5597f };
			}
			else if (iParam1 == 9)
			{
				return { -3686.284f, -3258.813f, -4.4117f };
			}
			else if (iParam1 == 10)
			{
				return { 795.2883f, 1013.304f, 118.3968f };
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			if (iParam1 == 0)
			{
				return { -2519.475f, 820.6946f, 146.4494f };
			}
			else if (iParam1 == 1)
			{
				return { -1349.727f, -923.9958f, 69.342f };
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return func_100(uParam0, iParam1);
		case joaat("DISCOVER_LOC_GRAVE"):
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			if (iParam1 == 9)
			{
				return { -762.4968f, -1910.661f, 50.4933f };
			}
			else if (iParam1 == 10)
			{
				return { -1738.282f, -995.4295f, 113.6716f };
			}
			else
			{
				return func_92(uParam0, iParam1);
			}
			break;
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
			return func_101(uParam0, iParam1);
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			if (iParam1 == 0)
			{
				return { -2531.5f, 1174.4f, 225.9f };
			}
			else if (iParam1 == 1)
			{
				return { 3026.4f, 1778.0f, 84.2f };
			}
			else if (iParam1 == 2)
			{
				return { -4389.58f, -2166.55f, 50.81f };
			}
			break;
		case joaat("DISCOVER_LOC_KILL_ZONE"):
			if (iParam1 == 0)
			{
				return { 2325.978f, 1070.32f, 44.9401f };
			}
			else if (iParam1 == 1)
			{
				return { -2698.656f, 697.2829f, 162.889f };
			}
			break;
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			return func_92(uParam0, iParam1);
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			return func_92(uParam0, iParam1);
		case joaat("DISCOVER_LOC_FACE_TREES"):
			return func_92(uParam0, iParam1);
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			return func_92(uParam0, iParam1);
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			return func_92(uParam0, iParam1);
		case 677950956:
			return func_92(uParam0, iParam1);
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_14(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_15()
{
	if (func_102() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_103(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_17(var uParam0)
{
	if (func_39(uParam0->f_3, 1))
	{
		return true;
	}
	return false;
}

void func_18(var uParam0)
{
	if (func_33(uParam0->f_6.f_8))
	{
		func_104(&(uParam0->f_6.f_8), 1, 1);
	}
	func_25(&(uParam0->f_6.f_5));
	if (func_39(uParam0->f_3, 2))
	{
		func_43(&(uParam0->f_3), 2);
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_20(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 4))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_152, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_152, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 9)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 10)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 14)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 10)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 11)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 23)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 24)))
				{
					return true;
				}
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 9)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 12)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 13)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 14)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 15)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 16)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 17)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 18)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 19)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 20)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 21)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_153, (1 << 22)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			if (func_39(Global_40.f_8863.f_154, 1))
			{
				return true;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_154, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_154, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_154, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 9)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 10)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_148, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_148, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_148, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_148, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_148, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_148, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_148, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_148, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 9)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 10)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 11)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 12)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 12)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 13)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 13)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 14)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 14)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 15)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 15)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 16)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 16)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 17)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 17)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 18)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 18)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 19)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 19)
			{
				if (func_39(Global_40.f_8863.f_148, (1 << 20)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_149, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_149, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_149, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_149, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_149, 16))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			switch (uParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (((((func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8)) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 11)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 12)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 13)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 14)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 15)))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 16)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 17)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 18)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 19)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 20)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, (1 << 21)))
				{
					return true;
				}
			}
			break;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 18)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 19)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 20)))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, (1 << 21)))
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) /*3*/ };
	uParam0->f_6.f_1 = 5.0f;
	uParam0->f_6 = 10.0f;
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			uParam0->f_6 = 20.0f;
			uParam0->f_6.f_1 = 10.0f;
			func_105(uParam0);
			break;
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
			uParam0->f_6 = 48.0f;
			uParam0->f_6.f_1 = 24.0f;
			break;
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
		case joaat("DISCOVER_LOC_STONEHENGE"):
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
			uParam0->f_6 = 30.0f;
			uParam0->f_6.f_1 = 15.0f;
			break;
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_WHALE_BONE"):
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
			uParam0->f_6 = 20.0f;
			uParam0->f_6.f_1 = 10.0f;
			break;
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			uParam0->f_6 = 6.0f;
			uParam0->f_6.f_1 = 3.0f;
			break;
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			uParam0->f_6 = 3.0f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case joaat("DISCOVER_LOC_FACE_TREES"):
			uParam0->f_6 = 10.0f;
			func_105(uParam0);
			break;
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
			uParam0->f_6 = 30.0f;
			func_105(uParam0);
			break;
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			uParam0->f_6 = 10.0f;
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			uParam0->f_6 = 10.0f;
			func_105(uParam0);
			Jump @538; // curOff = 404
			uParam0->f_6 = 3.0f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				func_105(uParam0);
			}
			Jump @538; // curOff = 474
			uParam0->f_6 = 6.0f;
			uParam0->f_6.f_1 = 3.0f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				func_105(uParam0);
			}
			Jump @538; // curOff = 516
			uParam0->f_6 = 10.0f;
			uParam0->f_6.f_1 = 5.0f;
		}

bool func_22(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_24(var uParam0)
{
	return func_106(*uParam0, 1);
}

void func_25(var uParam0)
{
	func_107(uParam0, 0.0f);
}

int func_26(var uParam0)
{
	if (!func_24(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_108(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_109() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_27(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
		{
			return true;
		}
		if (func_110(uParam0))
		{
			return true;
		}
		if (!func_111(uParam0, 0))
		{
			return true;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return true;
		}
		if ((((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_FACE_TREES")) || *uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND")) || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_112(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6.f_1 + 0.5f) || !func_112(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_110(uParam0))
		{
			return false;
		}
		if (!func_111(uParam0, 0))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return false;
		}
		if ((((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_FACE_TREES")) || *uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND")) || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_112(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6.f_1 && func_112(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	return false;
}

void func_28(var uParam0)
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
		{
			if (func_53(*uParam0))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"))
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_MEDITATING_MONK"))
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			func_34(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
		}
		func_114(uParam0->f_6.f_8, 13, 1, 1);
		func_115(uParam0->f_6.f_8);
	}
}

char* func_29(var uParam0)
{
	if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
	{
		if (func_53(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
	{
		if (func_20(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES"))
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
	{
		return "DISCO_DREAM";
	}
	else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
	{
		if (*uParam0 == joaat("DISCOVER_LOC_ABANDONED_CHURCH"))
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"))
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"))
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_BARREL_RIDER"))
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"))
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_BRUSH_FIRE"))
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_CIRCUS_WAGON"))
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_CRASHED_AIRSHIP"))
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_GHOST_TOWN"))
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_DEFACED_GRAVE"))
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_DONKEY_LADY"))
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_FACE_IN_CLIFF"))
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_FACE_TREES"))
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_FLYING_MACHINE"))
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_FOSSILIZED_MAN"))
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"))
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_FROZEN_SETTLER"))
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_GIANT_REMAINS"))
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_GRAYS_SECRET"))
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_HERMIT_WOMAN"))
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_HIDDEN_TUNNEL"))
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_INDIAN_BURIAL"))
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_JESUIT_MISSIONARY"))
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_MAMMOTH"))
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_MEDITATING_MONK"))
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_METEOR_HOUSE"))
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_METEORITE"))
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_OBELISK"))
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"))
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"))
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_PAGAN_RITUAL"))
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_EASEL"))
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_REGISTER_ROCK"))
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND"))
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_SPERM_WHALE"))
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_STONEHENGE"))
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_TRADING_POST"))
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_UTE_WICKUP"))
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_UTOPIAN_COLONY"))
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_WHALE_BONE"))
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == joaat("DISCOVER_LOC_WHALE_BONE") || *uParam0 == joaat("DISCOVER_LOC_SPERM_WHALE")) || *uParam0 == joaat("DISCOVER_LOC_GIANT_REMAINS")) || *uParam0 == joaat("DISCOVER_LOC_MAMMOTH"))
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == joaat("DISCOVER_LOC_ABANDONED_CHURCH") || *uParam0 == joaat("DISCOVER_LOC_ONE_ROOM_CHURCH")) || *uParam0 == joaat("DISCOVER_LOC_ABANDONED_TRADING_POST")) || *uParam0 == joaat("DISCOVER_LOC_TRADING_POST")) || *uParam0 == joaat("DISCOVER_LOC_ABANDONED_OIL_WELL")) || *uParam0 == joaat("DISCOVER_LOC_OBELISK")) || *uParam0 == joaat("DISCOVER_LOC_METEOR_HOUSE"))
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_DEFACED_GRAVE"))
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_FACE_IN_CLIFF"))
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == joaat("DISCOVER_LOC_FACE_TREES") || *uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES")) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_EASEL") || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == joaat("DISCOVER_LOC_FOSSILIZED_MAN") || *uParam0 == joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK")) || *uParam0 == joaat("DISCOVER_LOC_FROZEN_SETTLER")) || *uParam0 == joaat("DISCOVER_LOC_GRAYS_SECRET")) || *uParam0 == 1519228573) || *uParam0 == joaat("DISCOVER_LOC_BARREL_RIDER")) || *uParam0 == joaat("DISCOVER_LOC_DONKEY_LADY")) || *uParam0 == joaat("DISCOVER_LOC_JESUIT_MISSIONARY")) || *uParam0 == joaat("DISCOVER_LOC_PAGAN_RITUAL"))
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == joaat("DISCOVER_LOC_GHOST_TOWN") || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD")) || *uParam0 == joaat("DISCOVER_LOC_INDIAN_BURIAL")) || *uParam0 == joaat("DISCOVER_LOC_STONEHENGE")) || *uParam0 == joaat("DISCOVER_LOC_UTE_WICKUP")) || *uParam0 == joaat("DISCOVER_LOC_UTOPIAN_COLONY")) || *uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND")) || *uParam0 == joaat("DISCOVER_LOC_HIDDEN_TUNNEL")) || *uParam0 == joaat("DISCOVER_LOC_BRUSH_FIRE")) || *uParam0 == joaat("DISCOVER_LOC_MEDITATING_MONK")) || *uParam0 == joaat("DISCOVER_LOC_HERMIT_WOMAN"))
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == joaat("DISCOVER_LOC_REGISTER_ROCK") || *uParam0 == joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT")) || *uParam0 == joaat("DISCOVER_LOC_METEORITE"))
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == joaat("DISCOVER_LOC_CRASHED_AIRSHIP") || *uParam0 == joaat("DISCOVER_LOC_FLYING_MACHINE")) || *uParam0 == joaat("DISCOVER_LOC_CIRCUS_WAGON"))
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"))
	{
		if (func_16(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

void func_30(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_33(iParam1))
	{
		return;
	}
	iVar0 = func_116(iParam1);
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		if ((!*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES") && !*uParam0 == 677950956) && !*uParam0 == joaat("DISCOVER_LOC_POWDER_KEG"))
		{
			if (bParam3)
			{
				func_40(&iVar1, 12);
			}
			else
			{
				func_40(&iVar1, 8);
			}
		}
		if ((*uParam0 == joaat("DISCOVER_LOC_BRAITHWAITES_SECRET") || *uParam0 == joaat("DISCOVER_LOC_POWDER_KEG")) || *uParam0 == joaat("DISCOVER_LOC_MEDITATING_MONK"))
		{
			if (func_11(*uParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1.0f, iVar2, 1, 1710353528, sParam2, iVar1);
	}
}

bool func_31(var uParam0)
{
	if (func_117(uParam0->f_6.f_8, 1))
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_99(iParam0, 1)] |= iParam1;
}

bool func_33(int iParam0)
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

void func_34(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	func_118(iVar0, bParam1);
}

void func_35(var uParam0)
{
	if (func_102() != -1)
	{
		return;
	}
	if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
	{
		if (func_119(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
			{
				MAP::_MAP_DISCOVER_REGION(func_119(uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_120(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_120(*uParam0, uParam0->f_4)))
			{
				MAP::_MAP_DISCOVER_REGION(func_120(*uParam0, uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
		func_69(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;

	if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
	{
		if (bParam1)
		{
			if (func_85() < (20 - 1))
			{
				return;
			}
		}
		else if (!func_52())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = func_122(*uParam0, func_121(), uParam0->f_4);
	}
	else
	{
		iVar0 = func_123(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			func_124(iVar0, 0);
			if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES"))
			{
				if (func_125() == (5 - 1))
				{
					if (func_121())
					{
						func_124(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR");
					}
					else
					{
						func_124(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN");
					}
				}
			}
		}
		if (func_126())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				Global_1357519 = { uParam0->f_6.f_2 /*3*/ };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_127(&Global_0, 8);
	}
	if (!func_128() || func_102() != -1)
	{
		return;
	}
	func_127(&Global_0, 1);
}

float func_38(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_33(iParam0))
	{
		return 0.0f;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_39(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_40(int iParam0, int iParam1)
{
	func_129(iParam0, iParam1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_92(uParam0, uParam0->f_4) /*3*/ };
}

void func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &(uParam0->f_6.f_10));
	}
}

void func_43(var uParam0, int iParam1)
{
	func_130(uParam0, iParam1);
}

void func_44(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Global_35, 6, false);
	}
}

bool func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_SHRINE"):
		case joaat("DISCOVER_LOC_GRAVE"):
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
		case joaat("DISCOVER_LOC_OLD_GRAVESTONES"):
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
			return true;
	}
	return false;
}

bool func_46(int iParam0)
{
	struct<7> /*56*/ sVar0;
	Vector3 vVar7;

	if (VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		func_131(*iParam0, &sVar0);
		if (FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(-1, sVar0, sVar0.f_3, sVar0.f_6) == func_132(Global_35))
		{
			return true;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(sVar0, sVar0.f_3, sVar0.f_6, true))
		{
			vVar7 = { 0.0f, 0.0f, 0.0f /*3*/ };
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &vVar7))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar7, sVar0, sVar0.f_3, sVar0.f_6, false, true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_102() != -1)
	{
		return;
	}
	if ((Global_36616 & func_133(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_134(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_135(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_136(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_135(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_48(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_137(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_49(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			if (!func_138() && !func_139())
			{
				if (!func_138())
				{
				}
				if (!func_139())
				{
				}
				return false;
			}
			else if (func_140(77))
			{
				return false;
			}
			else if (func_141() != 0)
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			if (uParam0->f_4 == 0)
			{
				if (!func_138() && !func_139())
				{
					if (!func_138())
					{
					}
					if (!func_139())
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_54(joaat("WS_GRAVE_HOSEA")) && !func_54(joaat("WS_GRAVE_LENNY")))
				{
					if (!func_54(joaat("WS_GRAVE_HOSEA")))
					{
					}
					if (!func_54(joaat("WS_GRAVE_LENNY")))
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_54(joaat("WS_GRAVE_SEAN")))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_54(joaat("WS_GRAVE_KIERAN")))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_54(joaat("WS_GRAVE_SUSAN")))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_54(joaat("WS_GRAVE_EAGLE_FLIES")))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!func_16(26))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			if (!func_16(21))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
			if (!func_16(77))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_MICAH_CAMP"):
			if (!func_16(12))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
			if (func_142(19))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
			if (func_142(29))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			if (func_142(11))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
			if (!Global_40.f_11623[20 /*8*/] > 0)
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			if (func_140(19) || func_142(4))
			{
				return false;
			}
			break;
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
			if (func_140(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_50(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_51(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_99(iParam0, 1)] -= (Global_40.f_8863[func_99(iParam0, 1)] & iParam1);
}

bool func_52()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = func_143(iVar0);
		if (!func_39(Global_40.f_8863.f_148, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_53(int iParam0)
{
	return func_11(iParam0, 2);
}

bool func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_144(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_55(int iParam0)
{
	var uVar0;

	return func_145(iParam0, &uVar0);
}

void func_56(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_146(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_147(joaat("WS_DOWNS_RANCH_EDITH"));
			func_147(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_147(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_147(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_146(joaat("WS_DOWNS_RANCH_EDITH"));
			func_147(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_147(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_147(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_147(joaat("WS_DOWNS_RANCH_EDITH"));
			func_146(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_147(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_147(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_147(joaat("WS_DOWNS_RANCH_EDITH"));
			func_147(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_146(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_147(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_147(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_147(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_146(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_148();
			func_146(iParam0);
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
			func_149();
			func_146(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_147(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_147(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_146(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_147(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_147(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_146(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_147(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_147(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_146(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_147(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_147(joaat("WS_RHODES_GRAVE_OPEN"));
			func_146(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_147(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_147(joaat("WS_RHODES_GRAVE_OPEN"));
			func_146(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_147(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_147(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_146(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_147(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_146(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_147(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_146(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_147(joaat("WS_UTOPIA_TREE_MISSION"));
			func_147(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_147(joaat("WS_UTOPIA_TREE_STUMP"));
			func_146(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_147(joaat("WS_UTOPIA_TREE_STANDING"));
			func_147(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_147(joaat("WS_UTOPIA_TREE_STUMP"));
			func_146(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_147(joaat("WS_UTOPIA_TREE_STANDING"));
			func_147(joaat("WS_UTOPIA_TREE_MISSION"));
			func_147(joaat("WS_UTOPIA_TREE_STUMP"));
			func_146(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_147(joaat("WS_UTOPIA_TREE_STANDING"));
			func_147(joaat("WS_UTOPIA_TREE_MISSION"));
			func_147(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_146(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_147(joaat("WS_MICAH_CAMP"));
			func_147(joaat("WS_MICAH_CAMP_POST"));
			func_146(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_147(joaat("WS_MICAH_CAMP_EMPTY"));
			func_147(joaat("WS_MICAH_CAMP_POST"));
			func_146(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_147(joaat("WS_MICAH_CAMP_EMPTY"));
			func_147(joaat("WS_MICAH_CAMP"));
			func_146(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_147(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_146(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_147(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_147(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_54(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_146(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_147(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_147(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_146(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_147(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_146(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_147(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_146(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_147(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_146(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_147(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_146(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_147(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_146(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_147(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_147(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_146(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_147(joaat("WS_NEW_COM_BANK_START"));
			func_147(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_147(joaat("WS_NEW_COM_BANK_AFTER"));
			func_147(joaat("WS_NEW_COM_BANK_POST"));
			func_146(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_147(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_147(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_147(joaat("WS_NEW_COM_BANK_AFTER"));
			func_147(joaat("WS_NEW_COM_BANK_POST"));
			func_146(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_147(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_147(joaat("WS_NEW_COM_BANK_START"));
			func_147(joaat("WS_NEW_COM_BANK_AFTER"));
			func_147(joaat("WS_NEW_COM_BANK_POST"));
			func_146(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_147(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_147(joaat("WS_NEW_COM_BANK_START"));
			func_147(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_147(joaat("WS_NEW_COM_BANK_POST"));
			func_146(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_147(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_147(joaat("WS_NEW_COM_BANK_START"));
			func_147(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_147(joaat("WS_NEW_COM_BANK_AFTER"));
			func_146(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_147(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_146(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_147(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_146(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_147(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_146(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_147(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_147(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_146(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_146(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_146(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_146(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_147(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_146(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_146(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_146(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_146(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_146(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_147(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_146(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_147(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_146(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_147(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_146(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_147(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_146(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_147(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_146(0);
			func_147(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_147(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_146(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_147(0);
			func_147(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_146(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_147(0);
			func_147(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_146(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_147(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_146(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_147(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_146(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_146(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_146(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_146(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_147(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_146(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_147(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_147(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_147(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_146(joaat("WS_SHADY_BELLE_ABANDON"));
			func_147(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_147(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_146(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_147(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_147(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_146(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_147(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_146(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_147(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_54(iParam0))
				{
					func_146(iParam0);
				}
			}
			else if (func_54(iParam0))
			{
				func_147(iParam0);
			}
			break;
	}
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(iParam0->f_1));
	}
}

bool func_58(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (func_150(iVar1))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (!func_152(func_151(iVar1, bVar0), func_13(uParam0, iVar1), bParam1) || !func_152(func_151(iVar1, !bVar0), func_13(uParam0, iVar1), !bParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_59(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!func_152(func_153(uParam0, 1), func_76(uParam0, 2), 0) || !func_152(func_153(uParam0, 0), func_76(uParam0, 2), 0))
			{
				return false;
			}
			break;
		case 1:
			if (!func_152(func_153(uParam0, 1), func_76(uParam0, 2), 1) || !func_152(func_153(uParam0, 0), func_76(uParam0, 2), 1))
			{
				return false;
			}
			break;
		default:
			break;
	}
	return true;
}

void func_60(var uParam0)
{
	func_154(uParam0);
	func_155(uParam0);
	if (((((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS")) || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956) || *uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
	{
		func_21(uParam0);
	}
}

void func_61(var uParam0)
{
	func_156(&sLocal_40);
	func_157(&uLocal_28);
	if ((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
			{
				STREAMING::REQUEST_ANIM_DICT(func_158(uParam0, 0, 0, 0));
			}
		}
	}
	if (*uParam0 == joaat("DISCOVER_LOC_POWDER_KEG") || *uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
	{
		STREAMING::REQUEST_PTFX_ASSET();
	}
	if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
	{
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
	}
}

bool func_62(var uParam0)
{
	if (!func_159(&sLocal_40) || !func_160(&uLocal_28))
	{
		return false;
	}
	if ((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_158(uParam0, 0, 0, 0)))
				{
					return false;
				}
			}
		}
	}
	if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
		{
			if (!AUDIO::PREPARE_SOUNDSET(func_161(uParam0), false))
			{
				return false;
			}
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
		{
			if (!AUDIO::LOAD_STREAM(func_162(uParam0, 0), func_161(uParam0)))
			{
				return false;
			}
		}
	}
	if (*uParam0 == joaat("DISCOVER_LOC_POWDER_KEG") || *uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
	{
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			return false;
		}
	}
	if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
	{
		if (!PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1)
		{
			return false;
		}
	}
	return true;
}

bool func_63()
{
	return func_163(Global_1935630, (1 << 12));
}

bool func_64(var uParam0)
{
	if (*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
	{
		if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
		{
			func_166(&sLocal_40, func_164(uParam0, 0), func_165(uParam0, 0), 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_40.f_1[0]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(sLocal_40.f_1[0], joaat("REL_PLAYER_ALLY"));
			}
		}
		else if (uParam0->f_4 == 6)
		{
			iLocal_64 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(func_76(uParam0, 0), 1.0f, 1, -1, 0);
		}
	}
	else if (*uParam0 == 1464664327)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
		{
			iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_STONEHENGE"))
	{
		if (!func_39(Global_40.f_8863.f_152, (1 << 17)))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 1), func_170(uParam0, 1), 1))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_28[1], true);
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_15, false);
			}
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (!func_53(*uParam0))
		{
			if (!func_172(uParam0))
			{
				return false;
			}
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_CIVIL_WAR_FORT") || *uParam0 == joaat("DISCOVER_LOC_POWDER_KEG"))
	{
		if (!func_171(&uLocal_28, func_76(uParam0, 0), func_170(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_UTE_WICKUP"))
	{
		iLocal_64 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(func_76(uParam0, 0), 9.0f, 1, -1, 0);
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
	{
		iLocal_21 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_162(uParam0, 0), func_161(uParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(func_76(uParam0, 0), iLocal_21);
		func_56(joaat("WS_PHONOGRAPH_BOAT_FOUND"), 1, 0);
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
	{
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	}
	if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR") && func_139())
	{
		if (!ENTITY::IS_ENTITY_DEAD(sLocal_40.f_1[0]))
		{
			if (!PED::IS_PED_READY_TO_RENDER(sLocal_40.f_1[0]))
			{
				return false;
			}
			func_174(sLocal_40.f_1[0], func_173(uParam0, 0));
		}
	}
	return true;
}

char* func_65(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
			return "AZ_Whispering_Trees_Discoverable";
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			return "AZ_scarlett_meadows_bulger_glade_battlefield_memories_01";
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
			return "AZ_Disco_Hermit_Woman_Shack";
		default:
			break;
	}
	return "";
}

void func_66(var uParam0)
{
	if (func_39(uParam0->f_3, 1))
	{
		func_43(&(uParam0->f_3), 1);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_14))
	{
		VOLUME::DELETE_VOLUME(iLocal_14);
	}
	if (*uParam0 == 1464664327 || *uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_15);
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE") && uParam0->f_4 == 7)
	{
		func_175(1);
	}
	func_104(&iLocal_63, 1, 1);
	if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
	{
		CAM::DESTROY_CAM(iLocal_16[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_20, false);
	}
}

float func_67(var uParam0)
{
	if (!func_24(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_108(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_176() - uParam0->f_1);
}

Vector3 func_68(var uParam0)
{
	Vector3 vVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) /*3*/ };
		return vVar0;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_69(var uParam0)
{
	if (func_102() != -1)
	{
		return;
	}
	if (func_177(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_177(*uParam0)))
		{
			MAP::_MAP_DISCOVER_REGION(func_177(*uParam0));
		}
		func_32(*uParam0, 8);
	}
}

bool func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_15) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					STREAMING::LOAD_SCENE_START_SPHERE(func_101(uParam0, 0), 20.0f, 0);
					func_178(2, 1);
				}
			}
			break;
		case 2:
			if (func_67(&uLocal_66) <= 7.5f)
			{
				if (func_67(&uLocal_66) >= 3.5f)
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(4000);
					}
				}
			}
			else
			{
				func_178(3, 1);
			}
			break;
		case 3:
			if (func_179(uParam0))
			{
				iVar0 = 1;
			}
			if (STREAMING::IS_LOAD_SCENE_LOADED())
			{
				iVar1 = 1;
			}
			if (((iVar0 & iVar1) && func_67(&uLocal_66) >= 1.0f) || func_67(&uLocal_66) >= 10.0f)
			{
				STREAMING::LOAD_SCENE_STOP();
				func_180(Global_35, func_101(uParam0, 1), func_168(uParam0, 1), 2, (1 << 30));
				func_178(4, 1);
			}
			break;
		case 4:
			func_181(Global_35, func_167(uParam0, 1), 3000, 0, 0, -1082130432);
			func_178(6, 1);
			break;
		case 6:
			if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && func_67(&uLocal_66) >= 1.0f) || func_67(&uLocal_66) >= 5.0f)
			{
				CAM::DO_SCREEN_FADE_IN(4000);
				func_178(12, 1);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_71(var uParam0)
{
	if (!func_53(*uParam0))
	{
		func_182(*uParam0);
		func_69(uParam0);
	}
}

bool func_72(var uParam0)
{
	if (iLocal_65 > 0 && iLocal_65 < 12)
	{
		if (!func_49(uParam0))
		{
			func_178(12, 1);
		}
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (func_14(Global_35, func_76(uParam0, 0), 1) <= 1.6f)
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			break;
		case 2:
			if (func_14(Global_35, func_76(uParam0, 0), 1) > (1.6f + 1.0f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_183(uParam0, 0))
			{
				iLocal_63 = func_113("GENERIC_USE", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_115(iLocal_63);
				func_178(3, 1);
			}
			break;
		case 3:
			func_30(uParam0, iLocal_63, "PLUNGER", 0);
			if (func_14(Global_35, func_76(uParam0, 0), 1) > (1.6f + 1.0f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_183(uParam0, 1))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (func_33(iLocal_63) && func_117(iLocal_63, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -2334.563f, 102.6577f, 221.5343f, 1.0f, 20000, 0.1f, 0, 164.0882f);
				func_104(&iLocal_63, 1, 1);
				func_178(5, 1);
			}
			break;
		case 5:
			if (func_67(&uLocal_66) >= 1.0f)
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					iLocal_16[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2333.38f, 102.69f, 223.21f, -6.197f, -0.63f, 55.514f, 65.0f, false, 2);
					CAM::SET_CAM_FOV(iLocal_16[0], 37.84929f);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					iLocal_16[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2334.52f, 104.21f, 223.47f, -7.584f, -0.74f, 59.195f, 65.0f, false, 2);
					CAM::SET_CAM_FOV(iLocal_16[1], 37.84929f);
				}
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_180(Global_35, -2334.563f, 102.6577f, 221.5343f, 164.0882f, 2, (1 << 30));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-98.7994f, 1.0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-11.5912f, 1.0f);
				if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					CAM::SET_CAM_ACTIVE(iLocal_16[0], true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 2000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_16[1], iLocal_16[0], 10000, 1, 1);
				}
				func_178(7, 1);
			}
			break;
		case 7:
			if (func_67(&uLocal_66) >= 1.2f)
			{
				FIRE::ADD_EXPLOSION_WITH_USER_VFX(func_76(uParam0, 1), 26, -1037168003, 1.0f, true, false, 1.0f);
				if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					CAM::SHAKE_CAM(iLocal_16[0], "SMALL_EXPLOSION_SHAKE", 0.5f);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SHAKE_CAM(iLocal_16[1], "SMALL_EXPLOSION_SHAKE", 1.0f);
				}
				func_178(8, 1);
			}
			break;
		case 8:
			if (func_59(uParam0, 0) && func_67(&uLocal_66) >= 1.0f)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SHAKE_CAM(iLocal_16[1], "SMALL_EXPLOSION_SHAKE", 0.5f);
				}
				PAD::SET_CONTROL_SHAKE(0, 1500, 150);
				func_178(9, 1);
			}
			break;
		case 9:
			if (func_67(&uLocal_66) >= 0.5f)
			{
				func_178(10, 1);
			}
			break;
		case 10:
			if (func_67(&uLocal_66) >= 0.5f)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 2000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					CAM::SET_CAM_ACTIVE(iLocal_16[0], false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SET_CAM_ACTIVE(iLocal_16[1], false);
				}
				func_71(uParam0);
				func_178(12, 1);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			if (uParam0->f_4 == 0)
			{
				iVar0 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 4;
			}
			else
			{
				return;
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar1 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar1 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar1 = 16;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar1 = 32;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar1 = 64;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar1 = 128;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar1 = 256;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar1 = (1 << 9);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			if (uParam0->f_4 == 0)
			{
				iVar1 = (1 << 10);
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = (1 << 11);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			if (uParam0->f_4 == 0)
			{
				iVar1 = (1 << 23);
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = (1 << 24);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			if (uParam0->f_4 == 0)
			{
				iVar1 = (1 << 12);
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = (1 << 13);
			}
			else if (uParam0->f_4 == 2)
			{
				iVar1 = (1 << 14);
			}
			else if (uParam0->f_4 == 3)
			{
				iVar1 = (1 << 15);
			}
			else if (uParam0->f_4 == 4)
			{
				iVar1 = (1 << 16);
			}
			else if (uParam0->f_4 == 5)
			{
				iVar1 = (1 << 17);
			}
			else if (uParam0->f_4 == 6)
			{
				iVar1 = (1 << 18);
			}
			else if (uParam0->f_4 == 7)
			{
				iVar1 = (1 << 19);
			}
			else if (uParam0->f_4 == 8)
			{
				iVar1 = (1 << 20);
			}
			else if (uParam0->f_4 == 9)
			{
				iVar1 = (1 << 21);
			}
			else if (uParam0->f_4 == 10)
			{
				iVar1 = (1 << 22);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (uParam0->f_4 == 0)
			{
				iVar0 = 8;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 16;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 32;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 64;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar0 = 128;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar0 = 256;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar0 = (1 << 9);
			}
			else if (uParam0->f_4 == 7)
			{
				iVar0 = (1 << 10);
			}
			else if (uParam0->f_4 == 8)
			{
				iVar0 = (1 << 11);
			}
			else if (uParam0->f_4 == 9)
			{
				iVar0 = (1 << 12);
			}
			else if (uParam0->f_4 == 10)
			{
				iVar0 = (1 << 13);
			}
			else if (uParam0->f_4 == 11)
			{
				iVar0 = (1 << 14);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			if (uParam0->f_4 == 0)
			{
				iVar0 = (1 << 18);
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = (1 << 19);
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = (1 << 20);
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = (1 << 21);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			iVar2 = 1;
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			if (uParam0->f_4 == 0)
			{
				iVar2 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 16;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar2 = 32;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar2 = 64;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar2 = 128;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar2 = 256;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar2 = (1 << 9);
			}
			else if (uParam0->f_4 == 10)
			{
				iVar2 = (1 << 10);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (uParam0->f_4 == 0)
			{
				iVar2 = (1 << 11);
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = (1 << 12);
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = (1 << 13);
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = (1 << 14);
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = (1 << 15);
			}
			else
			{
				return;
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				iVar2 = (1 << 16);
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = (1 << 17);
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = (1 << 18);
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = (1 << 19);
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = (1 << 20);
			}
			else if (uParam0->f_4 == 5)
			{
				iVar2 = (1 << 21);
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if (((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956)
	{
		if (!func_39(Global_40.f_8863.f_154, iVar2))
		{
			func_40(&(Global_40.f_8863.f_154), iVar2);
		}
	}
	else if (((*uParam0 == -834293086 || *uParam0 == joaat("DISCOVER_LOC_OLD_FIREPLACE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_WAGONS"))
	{
		if (!func_39(Global_40.f_8863.f_153, iVar1))
		{
			func_40(&(Global_40.f_8863.f_153), iVar1);
		}
	}
	else if (!func_39(Global_40.f_8863.f_152, iVar0))
	{
		func_40(&(Global_40.f_8863.f_152), iVar0);
	}
}

void func_74(int iParam0)
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_TELEMETRY_DISCOVERABLE(iParam0);
		if (func_184(iParam0))
		{
			func_186(func_185(joaat("DISCOVERABLE_FOUND")), 1);
		}
	}
}

bool func_75(var uParam0)
{
	if (iLocal_65 > 0)
	{
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (!func_39(Global_40.f_8863.f_152, (1 << 10)))
			{
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					if (func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) && func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
					{
						func_178(2, 1);
					}
				}
			}
			else
			{
				func_178(9, 1);
			}
			break;
		case 2:
			func_104(&iLocal_63, 1, 1);
			uParam0->f_4 = func_4(uParam0);
			if (((!uParam0->f_4 == 7 && !uParam0->f_4 == 8) && !uParam0->f_4 == 9) && !uParam0->f_4 == 10)
			{
				if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55.0f), 1065353216))
				{
					bLocal_23 = false;
					if (func_20(uParam0))
					{
						iLocal_63 = func_189("DISCO_PUSH", joaat("INPUT_CONTEXT_Y"), func_13(uParam0, uParam0->f_4), 2.0f, 2, 0, 0, 5, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0);
					}
					func_178(4, 1);
				}
				else
				{
					bLocal_23 = true;
					if (!func_20(uParam0))
					{
						iLocal_63 = func_189("DISCO_PUSH", joaat("INPUT_CONTEXT_Y"), func_13(uParam0, uParam0->f_4), 2.0f, 2, 0, 0, 5, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0);
					}
					func_178(3, 1);
				}
			}
			break;
		case 3:
			if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) || !func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55.0f), 1065353216))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (func_33(iLocal_63))
			{
				if (func_117(iLocal_63, 1))
				{
					func_104(&iLocal_63, 1, 1);
					if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55.0f), 1065353216))
					{
						func_190(uParam0, uParam0->f_4);
					}
					else
					{
						func_73(uParam0);
					}
					func_191(uParam0);
					func_178(5, 1);
				}
			}
			break;
		case 4:
			if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) || !func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (!func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55.0f), 1065353216))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (func_33(iLocal_63))
			{
				if (func_117(iLocal_63, 1))
				{
					func_104(&iLocal_63, 1, 1);
					if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55.0f), 1065353216))
					{
						func_190(uParam0, uParam0->f_4);
					}
					else
					{
						func_73(uParam0);
					}
					func_191(uParam0);
					func_178(5, 1);
				}
			}
			break;
		case 5:
			if (func_67(&uLocal_66) >= 9.0f)
			{
				func_178(7, 1);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 8)
			{
				func_178(7, 1);
			}
			break;
		case 7:
			if (!func_39(Global_40.f_8863.f_152, (1 << 10)))
			{
				if ((((((func_39(Global_40.f_8863.f_152, 8) && func_39(Global_40.f_8863.f_152, 16)) && !func_39(Global_40.f_8863.f_152, 32)) && func_39(Global_40.f_8863.f_152, 64)) && !func_39(Global_40.f_8863.f_152, 128)) && func_39(Global_40.f_8863.f_152, 256)) && !func_39(Global_40.f_8863.f_152, (1 << 9)))
				{
					func_40(&(Global_40.f_8863.f_152), (1 << 10));
				}
			}
			if (func_26(&uLocal_66) >= 1000)
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION(func_162(uParam0, 0), func_100(uParam0, uParam0->f_4), func_161(uParam0), false, 0, false, 0);
				func_178(8, 1);
			}
			break;
		case 8:
			if (func_26(&uLocal_66) >= 400)
			{
				if (func_58(uParam0, 1))
				{
					if (func_39(Global_40.f_8863.f_152, (1 << 10)))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION(func_162(uParam0, 1), func_100(uParam0, 7), func_161(uParam0), false, 0, false, 0);
						func_178(9, 1);
					}
					else
					{
						func_178(2, 1);
					}
				}
			}
			break;
		case 9:
			func_192(100.0f);
			func_172(uParam0);
			func_178(10, 1);
			break;
		case 10:
			if ((func_39(Global_40.f_8863.f_152, (1 << 11)) && func_39(Global_40.f_8863.f_152, (1 << 12))) && func_39(Global_40.f_8863.f_152, (1 << 13)))
			{
				func_178(12, 1);
			}
			else if (func_48(Global_35, func_76(uParam0, 0), 5.0f, 1, 1))
			{
				if (func_78())
				{
					if (!func_39(Global_40.f_8863.f_152, (1 << 11)))
					{
						if (func_194(&(uLocal_28[0]), func_193(uParam0, 0)))
						{
							func_40(&(Global_40.f_8863.f_152), (1 << 11));
						}
					}
					if (!func_39(Global_40.f_8863.f_152, (1 << 12)))
					{
						if (func_194(&(uLocal_28[1]), func_193(uParam0, 1)))
						{
							func_40(&(Global_40.f_8863.f_152), (1 << 12));
						}
					}
					if (!func_39(Global_40.f_8863.f_152, (1 << 13)))
					{
						if (func_194(&(uLocal_28[2]), func_193(uParam0, 2)))
						{
							func_40(&(Global_40.f_8863.f_152), (1 << 13));
						}
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

Vector3 func_76(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
			switch (iParam1)
			{
				case 0:
					return { 1268.29f, -386.947f, 88.4659f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			switch (iParam1)
			{
				case 0:
					return { 2255.46f, -753.712f, 42.5807f };
				case 1:
					return { 2255.29f, -753.756f, 42.8407f };
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return { 2545.93f, 800.34f, 77.013f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CAT_MASK"):
			switch (iParam1)
			{
				case 0:
					return { 2286.46f, -727.94f, 42.98f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RAM_MASK"):
			switch (iParam1)
			{
				case 0:
					return { -5151.3f, -2118.4f, 13.0f };
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return { 1123.43f, 430.557f, 95.3598f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			switch (iParam1)
			{
				case 0:
					return { -3338.99f, -2501.585f, 1.926f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			switch (iParam1)
			{
				case 0:
					return { -2334.66f, 102.11f, 221.988f };
				case 1:
					return { -2351.106f, 111.0932f, 217.0f };
				case 2:
					return { -2351.33f, 110.337f, 216.825f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MINER"):
			switch (iParam1)
			{
				case 0:
					return { -2367.9f, 124.4f, 215.94f };
				case 1:
					return { -2366.67f, 124.726f, 215.914f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			switch (iParam1)
			{
				case 0:
					return { -1619.97f, 1353.525f, 356.399f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
			switch (iParam1)
			{
				case 0:
					return { 2383.35f, 1695.3f, 96.018f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OBJECT_IN_TREE"):
			switch (iParam1)
			{
				case 0:
					return { 2442.855f, 287.212f, 66.39f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SHRINE"):
			switch (iParam1)
			{
				case 0:
					return { 2195.15f, -554.37f, 41.02f };
				case 1:
					return { 2195.38f, -554.33f, 41.02f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			switch (iParam1)
			{
				case 0:
					return { 365.9631f, -16.5072f, 99.3002f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_1"):
			switch (iParam1)
			{
				case 0:
					return { 1068.42f, -2024.7f, 49.25f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_2"):
			switch (iParam1)
			{
				case 0:
					return { 1581.16f, -1383.19f, 55.3f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_3"):
			switch (iParam1)
			{
				case 0:
					return { -2311.151f, -2380.23f, 64.66f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_4"):
			switch (iParam1)
			{
				case 0:
					return { 1139.765f, 464.21f, 98.375f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
			switch (iParam1)
			{
				case 0:
					return { 2685.89f, 70.2216f, 58.3001f };
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return { 180.217f, 1304.7f, 178.603f };
				case 1:
					return { 180.267f, 1304.62f, 178.607f };
				case 2:
					return { 180.387f, 1304.79f, 178.601f };
				case 3:
					return { 180.397f, 1304.7f, 178.605f };
				case 4:
					return { 180.437f, 1304.66f, 178.599f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return { -2530.628f, 1173.581f, 225.1708f };
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return { 3029.425f, 1775.791f, 83.79f };
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return { -4394.6f, -2159.37f, 47.498f };
					case 1:
						return { -4394.685f, -2159.115f, 47.5059f };
					case 2:
						return { -4394.76f, -2159.05f, 47.498f };
					case 3:
						return { -4394.446f, -2159.219f, 47.523f };
					case 4:
						return { -4394.639f, -2159.254f, 47.499f };
					default:
						break;
				}
			}
			break;
		case joaat("DISCOVER_LOC_BANK_STAGECOACH"):
			switch (iParam1)
			{
				case 0:
					return { 2811.864f, 996.6885f, 53.9353f };
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return { -161.8621f, 1734.902f, 170.799f };
				case 1:
					return { -161.862f, 1734.9f, 170.687f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			switch (iParam1)
			{
				case 0:
					return { 1141.463f, 763.3734f, 95.371f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEORITE"):
			switch (iParam1)
			{
				case 0:
					return { 2289.75f, 2081.3f, 199.581f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WHISKEY_TREE"):
			switch (iParam1)
			{
				case 0:
					return { 494.1373f, -301.9945f, 147.9723f };
				case 1:
					return { 494.1373f, -301.9945f, 147.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
			switch (iParam1)
			{
				case 0:
					return { -2343.751f, -2181.372f, 73.3274f };
				case 1:
					return { -2343.751f, -2181.372f, 73.3274f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			switch (iParam1)
			{
				case 0:
					return { -5886.735f, -2762.121f, -5.0027f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			switch (iParam1)
			{
				case 0:
					return { 2476.28f, 1997.81f, 166.918f };
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return { 2316.89f, 1072.69f, 94.409f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
			switch (iParam1)
			{
				case 0:
					return { -1019.89f, 1692.11f, 244.105f };
				case 1:
					return { -988.1135f, 1692.075f, 243.3826f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			switch (iParam1)
			{
				case 0:
					return { -2904.945f, -254.221f, 187.3f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			switch (iParam1)
			{
				case 0:
					return { 830.571f, 1924.11f, 258.798f };
				case 1:
					return { 830.641f, 1924.09f, 258.798f };
				case 2:
					return { 830.611f, 1924.12f, 258.825f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			switch (iParam1)
			{
				case 0:
					return { -1413.56f, -2669.16f, 42.2f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PIRATE_SKELETON"):
			switch (iParam1)
			{
				case 0:
					return { 398.28f, -1267.89f, 40.737f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			switch (iParam1)
			{
				case 0:
					return { 2443.16f, 290.578f, 66.5052f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			switch (iParam1)
			{
				case 0:
					return { 2307.592f, -330.3333f, 41.6732f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
			switch (iParam1)
			{
				case 0:
					return { -5854.019f, -3745.071f, -25.5216f };
				case 1:
					return { -5854.012f, -3744.898f, -25.519f };
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return { 1593.43f, -1769.6f, 52.5869f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_MICAH_CAMP"):
			switch (iParam1)
			{
				case 0:
					return { -1530.689f, -308.1162f, 141.4804f };
				case 1:
					return { -1532.051f, -308.3718f, 141.5067f };
				case 2:
					return { -1530.594f, -308.8933f, 141.4845f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
			switch (iParam1)
			{
				case 0:
					return { -2694.601f, -1500.248f, 150.5708f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			switch (iParam1)
			{
				case 0:
					return { -1755.078f, -1623.864f, 90.579f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			switch (iParam1)
			{
				case 0:
					return { 1259.735f, 1294.358f, 216.0961f };
				case 1:
					return { 1259.735f, 1294.358f, 216.0961f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_STONEHENGE"):
			switch (iParam1)
			{
				case 0:
					return { 2385.799f, 1696.725f, 95.7555f };
				case 1:
					return { 2385.81f, 1696.69f, 95.7678f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			switch (iParam1)
			{
				case 0:
					return { 1735.312f, -1894.472f, 44.5668f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
			switch (iParam1)
			{
				case 0:
					return { 2448.58f, 2097.729f, 172.2719f };
				default:
					break;
			}
			break;
		case -2108030724:
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
		case joaat("DISCOVER_LOC_LIGHTNING_ALLEY"):
		case joaat("DISCOVER_LOC_WAGON_CHEST"):
		case -1824429070:
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_DEAD_SNAKE"):
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
		case joaat("DISCOVER_LOC_CATTLE_CARCASSES"):
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
		case joaat("DISCOVER_LOC_CIVIL_WAR_SWORD"):
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
		case joaat("DISCOVER_LOC_PIRATE_RUM"):
		case -261997819:
		case joaat("DISCOVER_LOC_TRADING_POST"):
		case joaat("DISCOVER_LOC_SUN_DIAL"):
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
		case joaat("DISCOVER_LOC_BIRD_NEST"):
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
		case joaat("DISCOVER_LOC_WAGON_CIRCLE"):
		case joaat("DISCOVER_LOC_CONESTOGA_WAGON"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case joaat("DISCOVER_LOC_PIRATE_SWORD"):
		case 1464664327:
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
		case joaat("DISCOVER_LOC_DEAD_BEAR"):
			break;
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_77(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
			return joaat("DOCUMENT_DISCO_RUNAWAY_LETTER");
		case 1937333853:
			return joaat("DOCUMENT_DISCO_DEAD_SOLDIER_LETTER");
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			return joaat("DOCUMENT_DISCO_ABANDONED_OILDRILL_LETTER");
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			return joaat("DOCUMENT_DISCO_LETTER_JESUIT");
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			return joaat("DOCUMENT_CWFORT_JOURNAL");
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			return joaat("DOCUMENT_DISCO_FACE_IN_CLIFF_LETTER");
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
			return joaat("DOCUMENT_DISCO_GRAVE_NEWSCLIP");
		case 2135153015:
			return joaat("DOCUMENT_DISCO_BOOTS_LETTER");
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			return joaat("DOCUMENT_LETTER_CHINESE_TRAVELLER");
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
			switch (iParam1)
			{
				case 0:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_1");
				case 1:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_2");
				case 2:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_3");
				case 3:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_4");
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_1");
				case 1:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_2");
				case 2:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_3");
				case 3:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_4");
				case 4:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_5");
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_MICAH_CAMP"):
			switch (iParam1)
			{
				case 0:
					return 925382142;
				case 1:
					return -1411632109;
				case 2:
					return joaat("DOCUMENT_DUTCH_BURNED_POSTER");
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			switch (uParam0->f_4)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return joaat("DOCUMENT_DISCO_MAP_HALF_1");
						case 1:
							return joaat("DOCUMENT_DISCO_MAP_HALF_2");
						case 2:
							return joaat("DOCUMENT_DISCO_MAP_FULL");
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return joaat("DOCUMENT_DISCO_MAP_HALF_1");
						case 1:
							return joaat("DOCUMENT_DISCO_MAP_HALF_2");
						case 2:
							return joaat("DOCUMENT_DISCO_MAP_FULL");
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_01");
						case 4:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_02");
						case 5:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_03");
						case 6:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_04");
						case 7:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_05");
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_78()
{
	int iVar0;

	iVar0 = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

bool func_79(int iParam0)
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

void func_80(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			if (func_39(Global_40.f_8863.f_152, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 4))
			{
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			if (func_39(Global_40.f_8863.f_153, (1 << 10)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 11)))
			{
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			if (func_39(Global_40.f_8863.f_153, (1 << 23)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 24)))
			{
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			if (func_39(Global_40.f_8863.f_153, (1 << 12)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 13)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 14)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 15)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 16)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 17)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 18)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 19)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 20)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 21)))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 22)))
			{
			}
			break;
		case -834293086:
			if (func_39(Global_40.f_8863.f_153, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 4))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_153, (1 << 9)))
			{
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (func_39(Global_40.f_8863.f_152, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 9)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 10)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 11)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 12)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 13)))
			{
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			if (func_39(Global_40.f_8863.f_154, 1))
			{
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			if (func_39(Global_40.f_8863.f_154, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 4))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 9)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 10)))
			{
			}
			break;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (func_39(Global_40.f_8863.f_154, (1 << 11)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 12)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 13)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 14)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 15)))
			{
			}
			break;
		case 677950956:
			if (func_39(Global_40.f_8863.f_154, (1 << 16)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 17)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 18)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 19)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 20)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 20)))
			{
			}
			if (func_39(Global_40.f_8863.f_154, (1 << 21)))
			{
			}
			break;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			if (func_39(Global_40.f_8863.f_152, (1 << 18)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 19)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 20)))
			{
			}
			if (func_39(Global_40.f_8863.f_152, (1 << 21)))
			{
			}
			break;
		default:
			break;
	}
}

bool func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_65 >= 0 && iLocal_65 <= 12)
	{
		if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
		{
			uParam0->f_4 = 0;
			uParam0->f_6.f_2 = { func_92(uParam0, 0) /*3*/ };
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
		{
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) /*3*/ };
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
					{
						VOLUME::DELETE_VOLUME(uParam0->f_6.f_9);
					}
					if (uParam0->f_4 == 2)
					{
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2576.871f, -628.9302f, 42.2934f, 0.0f, 0.0f, -110.7924f, 2.5f, 1.61286f, 5.0f, func_195(uParam0));
					}
					else if (uParam0->f_4 == 3)
					{
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2578.758f, -629.6465f, 42.2934f, 0.0f, 0.0f, -110.7924f, 2.5f, 1.61286f, 5.0f, func_195(uParam0));
					}
				}
			}
		}
	}
	switch (iLocal_65)
	{
		case 0:
			if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(sLocal_40.f_1[0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(sLocal_40.f_1[0]);
					ENTITY::SET_ENTITY_INVINCIBLE(sLocal_40.f_1[0], true);
					ENTITY::SET_ENTITY_PROOFS(sLocal_40.f_1[0], 6, false);
				}
				func_178(1, 1);
			}
			else if (func_33(uParam0->f_6.f_8) && func_38(uParam0->f_6.f_8, 1) <= 0.0f)
			{
				func_178(1, 1);
			}
			break;
		case 1:
			if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				if (func_48(Global_35, func_164(uParam0, 0), 35.0f, 1, 1))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(sLocal_40.f_1[0]) && ENTITY::IS_ENTITY_VISIBLE(sLocal_40.f_1[0])) || func_48(Global_35, func_164(uParam0, 0), 15.0f, 1, 1))
					{
						if (func_139())
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_40.f_1[0], true);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_ANIMAL_FLEE(0, Global_35, -1);
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 200.0f, -1, 0, 3.0f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(sLocal_40.f_1[0], iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_40.f_1[0], false);
							TASK::TASK_FLY_AWAY(sLocal_40.f_1[0], Global_35);
						}
						func_178(3, 1);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 4.0f, -2.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				func_178(6, 1);
			}
			break;
		case 3:
			if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				if (!bLocal_23)
				{
					if (!func_196(Global_35, sLocal_40.f_1[0], 90.0f, 1))
					{
						bLocal_23 = true;
						if (!ENTITY::IS_ENTITY_DEAD(sLocal_40.f_1[0]))
						{
							func_197(&(sLocal_40.f_1[0]), 1);
						}
					}
				}
			}
			if (func_39(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 4.0f, -2.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				func_178(6, 1);
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), true);
			if (!func_20(uParam0))
			{
				if (func_31(uParam0))
				{
					if (uParam0->f_4 == 2)
					{
						if (!func_39(Global_40.f_8863.f_154, 4))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else if (uParam0->f_4 == 3)
					{
						if (!func_39(Global_40.f_8863.f_154, 8))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else
					{
						func_73(uParam0);
						func_80(uParam0);
						func_198(uParam0, 1);
						if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
						{
							if (!func_11(*uParam0, 2))
							{
								func_32(*uParam0, 2);
							}
						}
					}
					if ((((((((func_39(Global_40.f_8863.f_154, 1) && func_39(Global_40.f_8863.f_154, 2)) && func_39(Global_40.f_8863.f_154, 4)) && func_39(Global_40.f_8863.f_154, 8)) && func_39(Global_40.f_8863.f_154, 16)) && func_39(Global_40.f_8863.f_154, 32)) && func_39(Global_40.f_8863.f_154, 64)) && func_39(Global_40.f_8863.f_154, 128)) && func_39(Global_40.f_8863.f_154, 256))
					{
						if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
						{
							if (!func_53(joaat("DISCOVER_LOC_GRAVE")))
							{
								func_182(joaat("DISCOVER_LOC_GRAVE"));
							}
						}
						else
						{
							func_71(uParam0);
							if (!func_11(joaat("DISCOVER_LOC_GRAVE_ARTHUR"), 2))
							{
								func_32(joaat("DISCOVER_LOC_GRAVE_ARTHUR"), 2);
							}
						}
					}
				}
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
			{
				if (!func_39(uParam0->f_3, 4))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0)) >= 0.8f)
						{
							func_40(&(uParam0->f_3), 4);
							TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 2.0f, -4.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
						}
					}
				}
			}
			else if (!func_20(uParam0))
			{
				if (!func_39(uParam0->f_3, 2) && func_38(uParam0->f_6.f_8, 1) <= 0.0f)
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
					func_178(0, 1);
				}
			}
			else if (!func_39(uParam0->f_3, 4))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0)) >= 0.8f)
					{
						func_40(&(uParam0->f_3), 4);
						TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 2.0f, -4.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "loop") >= 0.02f)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "outro", 4.0f, -8.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
					func_178(7, 1);
				}
			}
			break;
		case 7:
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") < 0.8f)
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				}
			}
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") >= 0.98f)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") < 0.8f)
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					}
				}
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") >= 0.98f)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
					if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
					{
						if (func_39(Global_40.f_8863.f_154, 4) && func_39(Global_40.f_8863.f_154, 8))
						{
							func_178(12, 1);
						}
						else
						{
							if (func_11(*uParam0, 16))
							{
								func_51(*uParam0, 16);
							}
							if (func_39(uParam0->f_3, 4))
							{
								func_43(&(uParam0->f_3), 4);
							}
							func_178(0, 1);
						}
					}
					else
					{
						func_178(12, 1);
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

int func_82(var uParam0)
{
	if (func_20(uParam0))
	{
		return 0;
	}
	if (iLocal_65 > 0 && iLocal_65 < 12)
	{
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (func_199(&iLocal_14, &uLocal_28))
			{
				func_178(6, 1);
			}
			break;
		case 6:
			if (func_46(&iLocal_14))
			{
				func_47(3, 0, 0, 0, 0, 0, 1065353216, 0);
				func_178(12, 1);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_83(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 8)
	{
		iVar0 = (1 << 9);
	}
	else if (iParam0 == 9)
	{
		iVar0 = (1 << 10);
	}
	else if (iParam0 == 10)
	{
		iVar0 = (1 << 11);
	}
	else if (iParam0 == 11)
	{
		iVar0 = (1 << 12);
	}
	else if (iParam0 == 12)
	{
		iVar0 = (1 << 13);
	}
	else if (iParam0 == 13)
	{
		iVar0 = (1 << 14);
	}
	else if (iParam0 == 14)
	{
		iVar0 = (1 << 15);
	}
	else if (iParam0 == 15)
	{
		iVar0 = (1 << 16);
	}
	else if (iParam0 == 16)
	{
		iVar0 = (1 << 17);
	}
	else if (iParam0 == 17)
	{
		iVar0 = (1 << 18);
	}
	else if (iParam0 == 18)
	{
		iVar0 = (1 << 19);
	}
	else if (iParam0 == 19)
	{
		iVar0 = (1 << 20);
	}
	else
	{
		return;
	}
	if (!func_39(Global_40.f_8863.f_148, iVar0))
	{
		func_40(&(Global_40.f_8863.f_148), iVar0);
	}
}

void func_84(var uParam0)
{
	if (func_39(Global_40.f_8863.f_148, 2))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 4))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 8))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 16))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 32))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 64))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 128))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 256))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 9)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 10)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 11)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 12)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 13)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 14)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 15)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 16)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 17)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 18)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 19)))
	{
	}
	if (func_39(Global_40.f_8863.f_148, (1 << 20)))
	{
	}
}

int func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_143(iVar0);
		if (func_39(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_200(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, 0.0f, 0.0f, 0.0f, func_201(iParam0), func_202(iParam0), 0);
	}
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(0, func_203(iParam0), iParam1, iParam2));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 0, MISC::VAR_STRING(0, func_204(iParam0), iParam1, iParam2), iParam1 == iParam2, false, false);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(func_205(iParam0, 0)), MISC::GET_HASH_KEY(func_206(iParam0, 0)));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(func_205(iParam0, 1)), MISC::GET_HASH_KEY(func_206(iParam0, 1)));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 0, func_207(iParam0, 0), iParam1 == iParam2, true, false);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 1, func_207(iParam0, 1), func_53(373034311), true, false);
}

void func_87(char* sParam0)
{
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_200(joaat("DISCOVER_LOC_DREAMCATCHERS")));
	func_208(MISC::VAR_STRING(2, "DISCO_DREAM"), sParam0, joaat("HUD_TOASTS"), joaat("TOAST_DREAMCATCHER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, "COL_CTX_PLAYER_LOG"), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

bool func_88(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (*iParam1 == 0)
	{
		*iParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam2->f_6[iParam3], func_76(uParam0, iParam3), iParam4);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(*iParam1) && !ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		(*uParam2)[iParam3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(*iParam1));
		if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iParam3]))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		return true;
	}
	return false;
}

bool func_89(var uParam0)
{
	switch (iLocal_65)
	{
		case 0:
			if (func_39(Global_40.f_8863.f_152, (1 << 17)))
			{
				func_178(12, 1);
			}
			else
			{
				func_178(1, 1);
			}
			break;
		case 1:
			if (func_48(Global_35, func_76(uParam0, 0), 75.0f, 1, 1))
			{
				if (!bLocal_23)
				{
					if (func_88(uParam0, &iLocal_19, &uLocal_28, 0, 7))
					{
						bLocal_23 = true;
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(uLocal_28[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_28[0], Global_35, true, true))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15) && !TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_15))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_15, true);
					}
					func_178(2, 1);
				}
			}
			break;
		case 2:
			if (func_78())
			{
				if (func_79(func_209(uParam0, 0)))
				{
					func_178(3, 1);
				}
			}
			break;
		case 3:
			if (!func_78())
			{
				func_40(&(Global_40.f_8863.f_152), (1 << 17));
				func_178(12, 1);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

bool func_90(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
	{
		if (!func_63())
		{
			func_210(Global_35, 0, 0);
			return true;
		}
	}
	return false;
}

int func_91(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
	{
		uParam0->f_4 = func_4(uParam0);
		uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) /*3*/ };
		if (func_48(Global_35, uParam0->f_6.f_2, 10.0f, 1, 1))
		{
			if (!func_39(uParam0->f_3, 1))
			{
				func_40(&(uParam0->f_3), 1);
			}
		}
	}
	switch (iLocal_65)
	{
		case 0:
			if ((!func_211(uParam0) || !func_212(uParam0)) || func_213(uParam0))
			{
				return 0;
			}
			func_178(2, 1);
			break;
		case 2:
			AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), true, true);
			func_178(1, 1);
			break;
		case 1:
			if ((!func_211(uParam0) || !func_212(uParam0)) || func_213(uParam0))
			{
				func_178(7, 1);
				return 0;
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
			func_178(0, 1);
			break;
		case 12:
			return 1;
	}
	return 0;
}

Vector3 func_92(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
			return func_76(uParam0, 1);
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			return func_76(uParam0, 0);
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			return func_76(uParam0, 0);
		case 373034311:
			return func_76(uParam0, 0);
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
		case 1519228573:
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
			return func_164(uParam0, 0);
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			return { 365.725f, -15.4104f, 110.5399f };
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
			return { 1591.863f, -1845.292f, 65.196f };
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
			return { 2450.049f, 2104.19f, 173.9434f };
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			return { 894.6589f, -1969.363f, 44.554f };
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
			return { -270.2353f, 114.9477f, 62.751f };
		case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
			return { -2565.258f, 756.6277f, 153.3524f };
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
			return { -2664.789f, 690.7282f, 185.3162f };
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			return { -2904.952f, -254.2731f, 186.965f };
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
			return { -4688.022f, -3419.115f, 17.2107f };
		case joaat("DISCOVER_LOC_WHALE_BONE"):
			return { -2774.109f, -431.3145f, 174.3467f };
		case joaat("DISCOVER_LOC_TRADING_POST"):
			return { 189.6525f, -414.4084f, 87.8956f };
		case joaat("DISCOVER_LOC_FLYING_MACHINE"):
			return { -4346.388f, -2604.249f, -1.1693f };
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			return { 2476.001f, 1997.824f, 167.269f };
		case joaat("DISCOVER_LOC_METEORITE"):
			return { 2291.568f, 2080.932f, 200.7657f };
		case joaat("DISCOVER_LOC_OBELISK"):
			return { -2937.443f, -138.5504f, 199.3164f };
		case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
			return { 3220.522f, 1463.278f, 52.9448f };
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
			return { 2417.172f, -738.7664f, 42.3038f };
		case joaat("DISCOVER_LOC_MAMMOTH"):
			return { -1732.145f, 2191.086f, 293.2867f };
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
			return { 1733.116f, -424.945f, 48.4327f };
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
			return { 2148.987f, 1918.443f, 194.4452f };
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
			return { 2782.746f, 536.9514f, 72.1612f };
		case -1505275983:
			return { 947.541f, 238.4814f, 127.5118f };
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
			return { 703.7369f, 427.9747f, 108.3372f };
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			return { 1260.331f, 1296.422f, 217.8313f };
		case joaat("DISCOVER_LOC_GIANT_REMAINS"):
			return { -1915.618f, -30.6525f, 287.4662f };
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return { 2388.642f, 1690.187f, 95.5056f };
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
			return { -2694.149f, -1499.7f, 150.6036f };
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
			return { 749.9653f, 1825.082f, 240.1131f };
		case joaat("DISCOVER_LOC_EASEL"):
			return { 1705.885f, -1006.939f, 43.8407f };
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
			return { -2588.29f, -93.565f, 167.61f };
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			return { -1749.065f, -1624.292f, 90.1441f };
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
			return { 2698.995f, 410.8617f, 77.4735f };
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (iParam1 == 11)
			{
				return func_100(uParam0, 11);
			}
			else
			{
				return func_100(uParam0, 7);
			}
			break;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			switch (iParam1)
			{
				case 0:
					return { 2135.355f, 1069.851f, 122.7836f };
				case 1:
					return { 2150.689f, 1124.094f, 130.4564f };
				case 2:
					return { 2210.914f, 1134.496f, 141.0999f };
				case 3:
					return { 2251.706f, 1198.574f, 121.7253f };
				default:
					break;
			}
			Jump @2418; // curOff = 1102
			switch (iParam1)
			{
				case 0:
					return { -2693.879f, -402.3976f, 148.1729f };
				case 1:
					return { -2687.993f, -402.3363f, 148.3894f };
				case 2:
					return { -2686.917f, -410.486f, 148.4376f };
				case 3:
					return { -2694.168f, -412.4018f, 148.8531f };
				case 4:
					return { -2697.285f, -408.3287f, 149.3549f };
				default:
					break;
			}
			Jump @2418; // curOff = 1236
			switch (iParam1)
			{
				case 0:
					return { 1478.761f, -1831.449f, 52.0191f };
				case 1:
					return { 1487.726f, -1822.523f, 53.4034f };
				case 2:
					return { 1501.093f, -1813.105f, 53.2804f };
				case 3:
					return { 1520.822f, -1805.398f, 52.6965f };
				default:
					break;
			}
			Jump @2418; // curOff = 1346
			switch (iParam1)
			{
				case 0:
					return { -941.5482f, 1011.45f, 198.416f };
				case 1:
					return { -490.2726f, 1355.536f, 205.7345f };
				case 2:
					return { 299.3675f, 1795.301f, 197.5344f };
				case 3:
					return { 1884.704f, 1927.334f, 249.5903f };
				case 4:
					return { 2549.506f, 1624.281f, 93.5729f };
				case 5:
					return { 2489.881f, 1375.156f, 107.1609f };
				case 6:
					return { 2657.062f, 1286.715f, 117.8777f };
				case 7:
					return { 2577.385f, 1161.844f, 158.058f };
				case 8:
					return { 2342.925f, 844.4003f, 82.3675f };
				case 9:
					return { 1698.323f, 719.6797f, 125.0664f };
				case 10:
					return { 1986.145f, -208.0823f, 51.4904f };
				case 11:
					return { 1263.596f, 528.7397f, 88.8471f };
				case 12:
					return { 1626.372f, -0.4718f, 87.7166f };
				case 13:
					return { 1562.581f, -219.7309f, 84.4919f };
				case 14:
					return { 111.1142f, 639.3316f, 125.9073f };
				case 15:
					return { -20.3564f, 217.8298f, 109.194f };
				case 16:
					return { 714.7566f, 22.1708f, 154.0224f };
				case 17:
					return { -547.9435f, 557.9953f, 104.2689f };
				case 18:
					return { -540.1378f, 256.6357f, 44.7136f };
				case 19:
					return { -525.3924f, -277.1231f, 62.9066f };
				default:
					break;
			}
			Jump @2418; // curOff = 1840
			return { 794.4265f, 1777.108f, 281.0706f };
			if (iParam1 == 0)
			{
				return { 794.4265f, 1777.108f, 281.0706f };
			}
			else if (iParam1 == 1)
			{
				return { -1277.741f, 2895.727f, 386.2982f };
			}
			else if (iParam1 == 2)
			{
				return { 2577.433f, -627.2448f, 42.97695f };
			}
			else if (iParam1 == 3)
			{
				return { 2579.389f, -627.8698f, 42.96334f };
			}
			else if (iParam1 == 4)
			{
				return { 672.4651f, -974.1768f, 54.4574f };
			}
			else if (iParam1 == 5)
			{
				return { -1307.091f, 2468.892f, 309.8042f };
			}
			else if (iParam1 == 6)
			{
				return { 1735.903f, -1893.929f, 45.189f };
			}
			else if (iParam1 == 7)
			{
				return { 2157.916f, 795.1056f, 156.5394f };
			}
			else if (iParam1 == 8)
			{
				return { 514.147f, 1932.534f, 200.2069f };
			}
			Jump @2418; // curOff = 2102
			switch (iParam1)
			{
				case 0:
					return { 2826.679f, -1323.043f, 46.43373f };
				case 1:
					return { 2736.732f, -1339.335f, 46.65415f };
				case 2:
					return { 2698.488f, -1306.194f, 49.48277f };
				case 3:
					return { 2773.848f, -1182.319f, 48.53596f };
				case 4:
					return { 2820.003f, -1230.709f, 47.52145f };
				default:
					break;
			}
			Jump @2418; // curOff = 2236
			switch (iParam1)
			{
				case 0:
					return { -834.465f, -1365.791f, 48.5643f };
				case 1:
					return { -781.2938f, -1320.024f, 44.8353f };
				case 2:
					return { -729.9185f, -1219.616f, 41.4298f };
				case 3:
					return { -773.6366f, -1354.466f, 44.1805f };
				case 4:
					return { -756.8423f, -1276.124f, 49.337f };
				case 5:
					return { -816.6586f, -1310.757f, 43.2499f };
				default:
					break;
			}
			Jump @2418; // curOff = 2394
			return { -353.4487f, -133.7923f, 46.4927f };
			return { 0.0f, 0.0f, 0.0f };
		}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	uVar0 = func_214();
	func_215(&uVar0, 0, iParam1, iParam2, iParam3, iParam4, 0, 0);
	iVar1 = -1;
	if (func_145(iParam0, &iVar1))
	{
		if (func_216(iVar1) == iParam0)
		{
			func_217(iVar1, iParam0);
			func_218(iVar1, uVar0);
			return;
		}
	}
	else if (iVar1 > -1)
	{
		func_217(iVar1, iParam0);
		func_218(iVar1, uVar0);
		return;
	}
}

bool func_94()
{
	return Global_1357517;
}

void func_95(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_219(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_96(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		func_220(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_97(var uParam0)
{
	func_221(&sLocal_40);
	func_222(&uLocal_28);
	if ((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
			{
				STREAMING::REMOVE_ANIM_DICT(func_158(uParam0, 0, 0, 0));
			}
		}
	}
	if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
		{
			AUDIO::_RELEASE_SOUNDSET(func_161(uParam0));
		}
	}
	if (*uParam0 == joaat("DISCOVER_LOC_POWDER_KEG") || *uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (*uParam0 == joaat("DISCOVER_LOC_UTE_WICKUP") || (*uParam0 == joaat("DISCOVER_LOC_GRAVE") && uParam0->f_4 == 6))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_64, 0);
	}
}

bool func_98(int iParam0)
{
	int iVar0;

	iVar0 = func_99(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

int func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
			return 116;
		case joaat("DISCOVER_LOC_DERAILED_TRAIN"):
			return 9;
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			return 34;
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
			return 59;
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
			return 125;
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
			return 49;
		case joaat("DISCOVER_LOC_ROPE_BRIDGE"):
			return 117;
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
			return 124;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			return 89;
		case joaat("DISCOVER_LOC_ABANDONED_FURNITURE"):
			return 50;
		case joaat("DISCOVER_LOC_SHRINE"):
			return 28;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			return 64;
		case joaat("DISCOVER_LOC_QUARRY"):
			return 113;
		case joaat("DISCOVER_LOC_LIGHTNING_ALLEY"):
			return 94;
		case joaat("DISCOVER_LOC_WAGON_CHEST"):
			return 141;
		case -1824429070:
			return 66;
		case joaat("DISCOVER_LOC_GIANT_REMAINS"):
			return 16;
		case joaat("DISCOVER_LOC_GRAVE"):
			return 17;
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
			return 115;
		case joaat("DISCOVER_LOC_DEAD_SNAKE"):
			return 76;
		case joaat("DISCOVER_LOC_POTS_TREE"):
			return 112;
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
			return 13;
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
			return 10;
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			return 48;
		case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
			return 21;
		case joaat("DISCOVER_LOC_CORPSE_PIT"):
			return 6;
		case -1505275983:
			return 31;
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
			return 61;
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
			return 53;
		case joaat("DISCOVER_LOC_TREE_TRUNK_BOAT"):
			return 123;
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			return 47;
		case joaat("DISCOVER_LOC_SCARECROW_1"):
			return 23;
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			return 45;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			return 51;
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
			return 2;
		case joaat("DISCOVER_LOC_DESERT_WAGON"):
			return 78;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			return 139;
		case joaat("DISCOVER_LOC_FACE_TREES"):
			return 81;
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
			return 140;
		case joaat("DISCOVER_LOC_SCARECROW_2"):
			return 24;
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
			return 127;
		case joaat("DISCOVER_LOC_PIRATE_SKELETON"):
			return 111;
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
			return 15;
		case joaat("DISCOVER_LOC_BOAT_IN_TREE"):
			return 4;
		case -1061274876:
			return 96;
		case joaat("DISCOVER_LOC_FLYING_MACHINE"):
			return 84;
		case joaat("DISCOVER_LOC_WHALE_BONE"):
			return 25;
		case joaat("DISCOVER_LOC_OBELISK"):
			return 103;
		case joaat("DISCOVER_LOC_CATTLE_CARCASSES"):
			return 68;
		case joaat("DISCOVER_LOC_FLATTENED_CABIN"):
			return 83;
		case joaat("DISCOVER_LOC_DESERTED_FARM"):
			return 79;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			return 137;
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
			return 92;
		case -834293086:
			return 91;
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
			return 8;
		case -777592153:
			return 3;
		case joaat("DISCOVER_LOC_METEOR_SHOWER"):
			return 100;
		case -763376358:
			return 55;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			return 110;
		case joaat("DISCOVER_LOC_LIGHTNING_TREES"):
			return 95;
		case joaat("DISCOVER_LOC_METEORITE"):
			return 20;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			return 104;
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
			return 46;
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
			return 118;
		case joaat("DISCOVER_LOC_CIVIL_WAR_SWORD"):
			return 38;
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			return 106;
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
			return 74;
		case joaat("DISCOVER_LOC_STUFFED_GORILLA"):
			return 130;
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			return 98;
		case joaat("DISCOVER_LOC_GRAVESTONE_TREE"):
			return 88;
		case joaat("DISCOVER_LOC_PIRATE_RUM"):
			return 44;
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			return 11;
		case -261997819:
			return 37;
		case joaat("DISCOVER_LOC_TRADING_POST"):
			return 135;
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return 29;
		case joaat("DISCOVER_LOC_MAMMOTH"):
			return 97;
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			return 40;
		case joaat("DISCOVER_LOC_SUN_DIAL"):
			return 30;
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
			return 114;
		case 0:
			return 143;
		case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
			return 72;
		case joaat("DISCOVER_LOC_LOVE_MESSAGE"):
			return 35;
		case joaat("DISCOVER_LOC_MICAH_CAMP"):
			return 101;
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
			return 67;
		case 173549940:
			return 22;
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
			return 132;
		case joaat("DISCOVER_LOC_OLD_GRAVESTONES"):
			return 107;
		case 233600584:
			return 54;
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
			return 52;
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
			return 136;
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
			return 131;
		case 373034311:
			return 0;
		case joaat("DISCOVER_LOC_GHOST_TRAIN"):
			return 87;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			return 18;
		case joaat("DISCOVER_LOC_DEAD_MINER"):
			return 75;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			return 93;
		case joaat("DISCOVER_LOC_BIRD_NEST"):
			return 60;
		case joaat("DISCOVER_LOC_WHISKEY_TREE"):
			return 128;
		case joaat("DISCOVER_LOC_KILL_ZONE"):
			return 19;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			return 121;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			return 70;
		case 677950956:
			return 142;
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
			return 134;
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
			return 32;
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
			return 1;
		case joaat("DISCOVER_LOC_FIRE_LOOKOUT_TOWER"):
			return 82;
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
			return 108;
		case joaat("DISCOVER_LOC_SCARECROW_4"):
			return 27;
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
			return 109;
		case joaat("DISCOVER_LOC_EASEL"):
			return 33;
		case joaat("DISCOVER_LOC_SCARECROW_3"):
			return 26;
		case joaat("DISCOVER_LOC_TREE_HOUSE"):
			return 122;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			return 105;
		case joaat("DISCOVER_LOC_OBJECT_IN_TREE"):
			return 43;
		case joaat("DISCOVER_LOC_FACTORY_IN_SWAMP"):
			return 12;
		case joaat("DISCOVER_LOC_WAGON_CIRCLE"):
			return 126;
		case joaat("DISCOVER_LOC_CONESTOGA_WAGON"):
			return 71;
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
			return 85;
		case joaat("DISCOVER_LOC_BANK_STAGECOACH"):
			return 58;
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			return 69;
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			return 5;
		case joaat("DISCOVER_LOC_GEYSER"):
			return 86;
		case joaat("DISCOVER_LOC_PIRATE_SWORD"):
			return 39;
		case joaat("DISCOVER_LOC_EARLY_SETTLERS"):
			return 80;
		case 1464664327:
			return 129;
		case joaat("DISCOVER_LOC_RAM_MASK"):
			return 57;
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
			return 77;
		case 1519228573:
			return 42;
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			return 63;
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			return 133;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			return 99;
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
			return 65;
		case joaat("DISCOVER_LOC_CAT_MASK"):
			return 56;
		case joaat("DISCOVER_LOC_MOUNTAIN_CLIMB"):
			return 102;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			return 62;
		case 1937333853:
			return 7;
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
			return 90;
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
			return 119;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return 120;
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
			return 36;
		case joaat("DISCOVER_LOC_DEAD_BEAR"):
			return 73;
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			return 14;
		case 2135153015:
			return 41;
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

Vector3 func_100(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (iParam1 == 0)
			{
				return { 827.9519f, 1925.23f, 258.7208f };
			}
			else if (iParam1 == 1)
			{
				return { 832.673f, 1922.286f, 258.7208f };
			}
			else if (iParam1 == 2)
			{
				return { 829.6969f, 1926.987f, 258.7208f };
			}
			else if (iParam1 == 3)
			{
				return { 832.1583f, 1926.718f, 258.7208f };
			}
			else if (iParam1 == 4)
			{
				return { 828.2374f, 1922.771f, 258.7208f };
			}
			else if (iParam1 == 5)
			{
				return { 830.3385f, 1921.46f, 258.7208f };
			}
			else if (iParam1 == 6)
			{
				return { 833.4829f, 1924.626f, 258.7208f };
			}
			else if (iParam1 == 7)
			{
				return { 830.591f, 1924.07f, 258.795f };
			}
			else if (iParam1 == 11)
			{
				return { -160.9032f, 1599.633f, 180.2413f };
			}
			break;
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_101(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_SHRINE"):
			return { 2195.23f, -554.23f, 40.86f };
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
			return { 1268.257f, -387.328f, 88.459f };
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			return { 2255.135f, -754.127f, 41.793f };
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			return { 1772.964f, -1359.736f, 44.18f };
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return { 830.53f, 1923.9f, 258.33f };
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return { 2385.593f, 1696.987f, 94.94f };
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
			return { 2388.11f, 1688.02f, 94.66f };
		case 2135153015:
			return { -161.88f, 1734.6f, 169.73f };
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
			return { 808.47f, 2300.12f, 250.82f };
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return { 1182.68f, 2036.35f, 322.98f };
				case 1:
					return { 1227.191f, 2007.389f, 319.3389f };
			}
			break;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			switch (iParam1)
			{
				case 0:
					return { -2532.075f, 1173.143f, 224.93f };
				case 1:
					return { 3028.165f, 1781.019f, 83.127f };
				case 2:
					return { -4394.824f, -2159.366f, 47.3844f };
				default:
					break;
			}
			Jump @652; // curOff = 402
			switch (iParam1)
			{
				case 0:
					return { 2783.187f, 532.9774f, 70.28662f };
				case 1:
					return { 2783.885f, 534.9501f, 70.2896f };
				case 2:
					return { 2784.209f, 532.77f, 70.28524f };
				case 3:
					return { 2782.702f, 535.7864f, 70.28931f };
				default:
					break;
			}
			Jump @652; // curOff = 512
			switch (iParam1)
			{
				case 0:
					return { -1518.81f, 533.46f, 101.45f };
				case 1:
					return { 1251.4f, 1165.7f, 149.09f };
				case 2:
					return { -150.285f, 1498.717f, 114.935f };
				case 3:
					return { 2939.35f, 1422.56f, 44.58f };
				case 4:
					return { 1973.787f, 1192.337f, 170.517f };
				default:
					break;
			}
			return { 0.0f, 0.0f, 0.0f };
		}

int func_102()
{
	return Global_1572887.f_12;
}

bool func_103(int iParam0, bool bParam1)
{
	switch (func_223(iParam0))
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

void func_104(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_33(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_116(*iParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_224(iVar0);
	*iParam0 = 0;
}

void func_105(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	if (*uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
	{
		vVar0 = { 796.1158f, 1777.652f, 281.4886f /*3*/ };
		vVar3 = { 0.0f, 0.0f, -74.42887f /*3*/ };
		vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE"))
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 796.1158f, 1777.652f, 281.4886f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -74.42887f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { -1279.247f, 2896.268f, 386.576f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -21.05487f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 2)
		{
			vVar0 = { 2576.871f, -628.9302f, 42.2934f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -110.7924f /*3*/ };
			vVar6 = { 2.5f, 1.61286f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2578.758f, -629.6465f, 42.2934f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -110.7924f /*3*/ };
			vVar6 = { 2.5f, 1.61286f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 673.9809f, -974.8455f, 54.0894f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -23.06569f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -1305.871f, 2468.329f, 309.4034f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -21.05487f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 6)
		{
			vVar0 = { 1734.58f, -1895.353f, 45.189f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -41.82871f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 7)
		{
			vVar0 = { 2155.717f, 794.849f, 156.1776f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 280.0f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		else if (uParam0->f_4 == 8)
		{
			vVar0 = { 512.7686f, 1932.379f, 199.7092f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -2.622487f /*3*/ };
			vVar6 = { 2.5f, 3.0f, 5.0f /*3*/ };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
	else if ((*uParam0 == joaat("DISCOVER_LOC_FACE_TREES") || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD")) || *uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND"))
	{
		if (*uParam0 == joaat("DISCOVER_LOC_FACE_TREES"))
		{
			vVar0 = { -2691.41f, -407.6143f, 146.533f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
			vVar6 = { 5.0f, 5.0f, 5.0f /*3*/ };
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
		{
			vVar0 = { 1503.231f, -1819.476f, 56.89473f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 31.7625f /*3*/ };
			vVar6 = { 44.60546f, 27.38259f, 6.0f /*3*/ };
		}
		else if (*uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND"))
		{
			vVar0 = { 2704.939f, 435.9636f, 91.37785f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -54.20028f /*3*/ };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f /*3*/ };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			if (*uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND"))
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
			}
			else
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
			}
		}
	}
	else if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES"))
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 2825.817f, -1322.569f, 45.7557f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -40.04137f /*3*/ };
			vVar6 = { 1.479112f, 3.339972f, 8.648747f /*3*/ };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { 2736.975f, -1340.535f, 46.51682f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -44.91362f /*3*/ };
			vVar6 = { 1.006241f, 1.334083f, 4.408258f /*3*/ };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2773.553f, -1183.345f, 48.74084f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -23.65903f /*3*/ };
			vVar6 = { 1.282358f, 0.740535f, 5.648747f /*3*/ };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 2821.369f, -1229.302f, 46.5088f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -34.54109f /*3*/ };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f /*3*/ };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vVar0 = { -781.6985f, -1321.918f, 42.8842f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -90.32019f /*3*/ };
			vVar6 = { 3.080742f, 6.954088f, 8.648747f /*3*/ };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -816.7859f, -1313.109f, 44.64705f /*3*/ };
			vVar3 = { 0.0f, 0.0f, -89.95428f /*3*/ };
			vVar6 = { 2.607229f, 7.43211f, 4.408258f /*3*/ };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
}

bool func_106(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_107(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_176() - fParam1);
	func_225(uParam0, 1);
	func_226(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_108(var uParam0)
{
	return func_106(*uParam0, 2);
}

int func_109()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_110(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			if (func_48(Global_35, func_76(uParam0, 0), 3.0f, 1, 1))
			{
				return true;
			}
			break;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_111(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!func_227(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
		if (TASK::_IS_PED_DUELLING(Global_35))
		{
			return false;
		}
	}
	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
	{
		return false;
	}
	if (!func_227(iParam1, 2) && !func_228())
	{
		return false;
	}
	if (!func_227(iParam1, 4) && !func_229())
	{
		return false;
	}
	if (!func_227(iParam1, 128) && !func_230())
	{
		return false;
	}
	if (!func_227(iParam1, (1 << 11)) && !func_231(0))
	{
		return false;
	}
	if (!func_227(iParam1, 32) && !func_232(iParam1))
	{
		return false;
	}
	if (!func_227(iParam1, 64) && !func_233())
	{
		return false;
	}
	if (!func_227(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (!func_227(iParam1, (1 << 9)))
	{
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return false;
		}
	}
	if (!func_227(iParam1, (1 << 10)))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
		{
			return false;
		}
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		return false;
	}
	else if (func_234(Global_35, joaat("SCRIPT_TASK_ENTER_ANIM_SCENE")))
	{
		return false;
	}
	else if (func_234(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
	{
		return false;
	}
	return true;
}

bool func_112(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

int func_113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_235(iVar0, 2))
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
				func_236(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_114(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_115(int iParam0)
{
	int iVar0;

	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, 1710353528, 0);
	}
}

int func_116(int iParam0)
{
	return iParam0;
}

bool func_117(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_118(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_235(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
		case 1:
			return 437457038;
		case 2:
			return 787823186;
		case 3:
			return -22914651;
		case 4:
			return -207797345;
		case 5:
			return 152333965;
		case 6:
			return -705591224;
		case 7:
			return -307775564;
		case 8:
			return -1166159519;
		case 9:
			return -164804701;
		case 10:
			return -1562042092;
		case 11:
			return -1717629304;
		case 12:
			return -1669917636;
		case 13:
			return -884608551;
		case 14:
			return -1143188730;
		case 15:
			return 1856092306;
		case 16:
			return 1445824426;
		case 17:
			return -2082446577;
		case 18:
			return 2030128465;
		case 19:
			return -597126414;
		default:
			break;
	}
	return 0;
}

int func_120(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
			return 1614617630;
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
			return -617882357;
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
			return 1599532233;
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
			return -65357919;
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			return 2004715705;
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
			return -1451193020;
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
			return 1553391542;
		case joaat("DISCOVER_LOC_METEORITE"):
			return 317656811;
		case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
			return 1910189712;
		case joaat("DISCOVER_LOC_WHALE_BONE"):
			return -1896654834;
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return -126421233;
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			return -440810089;
		case 1519228573:
			return -703551507;
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			return -1705330644;
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
			return -245016475;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			return 1529964155;
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
			return 325616917;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			return 1067266077;
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
			return 1292039078;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			return -1721762433;
		case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
			return 712585684;
		case joaat("DISCOVER_LOC_FACE_TREES"):
			return -1482291365;
		case joaat("DISCOVER_LOC_FLYING_MACHINE"):
			return -1576735250;
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
			return -1173476934;
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
			return 2097588565;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			return -159963867;
		case joaat("DISCOVER_LOC_MAMMOTH"):
			return -1155213091;
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			return 979428630;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			return -720689005;
		case joaat("DISCOVER_LOC_OBELISK"):
			return 463289412;
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
			return 731487006;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			return 371066;
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
			return 270899202;
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
			return 894739389;
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
			return -2113673964;
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
			return -804420153;
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
			return 1747567809;
		case joaat("DISCOVER_LOC_TRADING_POST"):
			return -792295257;
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			return -452661064;
		case -1505275983:
			return 387715582;
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
			return -1245190585;
		case joaat("DISCOVER_LOC_GIANT_REMAINS"):
			return 422665644;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			return -95543768;
		case joaat("DISCOVER_LOC_EASEL"):
			return 120200140;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			switch (iParam1)
			{
				case 11:
					return -615993722;
				default:
					break;
			}
			return -866955093;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			switch (iParam1)
			{
				case 0:
					return 493724241;
				case 1:
					return 1378917331;
				case 2:
					return -1267048347;
				case 3:
					return 1840337620;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_121()
{
	if (func_102() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_122(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 1)
	{
		switch (iParam0)
		{
			case joaat("DISCOVER_LOC_DREAMCATCHERS"):
				return joaat("JOURNAL_DISC_DREAMCATCHER_MAP_AR");
			case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
				return joaat("JOURNAL_DISC_ABANDONED_CHURCH_AR");
			case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
				return joaat("JOURNAL_DISC_ABANDONED_TRADING_POST_AR");
			case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
				return joaat("JOURNAL_DISC_OIL_WELL_AR");
			case joaat("DISCOVER_LOC_BARREL_RIDER"):
				return joaat("JOURNAL_DISC_BARREL_RIDER_AR");
			case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
				return joaat("JOURNAL_DISC_BRAITHWAITE_SECRET_AR");
			case joaat("DISCOVER_LOC_BRUSH_FIRE"):
				return joaat("JOURNAL_DISC_BRUSH_FIRE_AR");
			case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
				return joaat("JOURNAL_DISC_CIRCUS_WAGONS_AR");
			case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
				return joaat("JOURNAL_DISC_CIVIL_WAR_AR");
			case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
				return joaat("JOURNAL_DISC_CRASHED_AIRSHIP_AR");
			case joaat("DISCOVER_LOC_GHOST_TOWN"):
				return joaat("JOURNAL_DISC_DEAD_TOWN_AR");
			case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
				return joaat("JOURNAL_DISC_DEFACED_GRAVE_AR");
			case joaat("DISCOVER_LOC_DONKEY_LADY"):
				return joaat("JOURNAL_DISC_DONKEY_LADY_AR");
			case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
				return joaat("JOURNAL_DISC_FACE_CLIFF_AR");
			case joaat("DISCOVER_LOC_FACE_TREES"):
				return joaat("JOURNAL_DISC_FACE_TREES_AR");
			case joaat("DISCOVER_LOC_FLYING_MACHINE"):
				return joaat("JOURNAL_DISC_FLYING_MACHINE_AR");
			case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
				return joaat("JOURNAL_DISC_FOSSILISED_MAN_AR");
			case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
				return joaat("JOURNAL_DISC_FRANKENSTEIN_AR");
			case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
				return joaat("JOURNAL_DISC_FROZEN_SETTLER_AR");
			case joaat("DISCOVER_LOC_GIANT_REMAINS"):
				return joaat("JOURNAL_DISC_GIANT_REMAINS_AR");
			case joaat("DISCOVER_LOC_GRAYS_SECRET"):
				return joaat("JOURNAL_DISC_GRAYS_SECRET_AR");
			case 1519228573:
				return joaat("JOURNAL_DISC_HAND_SWAMP_AR");
			case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
				return joaat("JOURNAL_DISC_HERMIT_WOMAN_AR");
			case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
				return joaat("JOURNAL_DISC_HIDDEN_TUNNEL_AR");
			case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
				return joaat("JOURNAL_DISC_INDIAN_BURIAL_AR");
			case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
				return joaat("JOURNAL_DISC_JESUIT_AR");
			case joaat("DISCOVER_LOC_MAMMOTH"):
				return joaat("JOURNAL_DISC_MAMMOTH_AR");
			case joaat("DISCOVER_LOC_MEDITATING_MONK"):
				return joaat("JOURNAL_DISC_MEDITATING_MONK_AR");
			case joaat("DISCOVER_LOC_METEORITE"):
				return joaat("JOURNAL_DISC_METEORITE_AR");
			case joaat("DISCOVER_LOC_METEOR_HOUSE"):
				return joaat("JOURNAL_DISC_METEOR_HOUSE_AR");
			case joaat("DISCOVER_LOC_OBELISK"):
				return joaat("JOURNAL_DISC_OBELISK_AR");
			case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
				return joaat("JOURNAL_DISC_OLD_SCRIPTS_AR");
			case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
				return joaat("JOURNAL_DISC_ONE_ROOM_CHURCH_AR");
			case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
				return joaat("JOURNAL_DISC_PAGAN_RITUAL_AR");
			case joaat("DISCOVER_LOC_EASEL"):
				return joaat("JOURNAL_DISC_PAINTING_CABIN_AR");
			case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
				return joaat("JOURNAL_DISC_PHONOGRAPH_AR");
			case joaat("DISCOVER_LOC_REGISTER_ROCK"):
				return joaat("JOURNAL_DISC_REGISTER_ROCK_AR");
			case joaat("DISCOVER_LOC_SERPENT_MOUND"):
				return joaat("JOURNAL_DISC_SERPENT_MOUND_AR");
			case joaat("DISCOVER_LOC_SPERM_WHALE"):
				return joaat("JOURNAL_DISC_SPERM_WHALE_AR");
			case joaat("DISCOVER_LOC_STONEHENGE"):
				return joaat("JOURNAL_DISC_STONEHENGE_AR");
			case joaat("DISCOVER_LOC_STRANGE_STATUES"):
				if (iParam2 == 11)
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_PAINTING_AR");
				}
				else
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_AR");
				}
				break;
			case joaat("DISCOVER_LOC_TRADING_POST"):
				return joaat("JOURNAL_DISC_TRADING_POST_AR");
			case joaat("DISCOVER_LOC_TRAIL_TREES"):
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_AR");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_AR");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_AR");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_AR");
				}
				break;
			case joaat("DISCOVER_LOC_UTE_WICKUP"):
				return joaat("JOURNAL_DISC_UTE_WICKIUP");
			case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
				return joaat("JOURNAL_DISC_COLONY_AR");
			case -1505275983:
				return joaat("JOURNAL_DISC_WARPED_TREE_AR");
			case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP2_AR");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP1_AR");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP5_AR");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP4_AR");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP3_AR");
				}
				break;
			case joaat("DISCOVER_LOC_WHALE_BONE"):
				return joaat("JOURNAL_DISC_WHALE_BONE_AR");
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("DISCOVER_LOC_DREAMCATCHERS"):
				return joaat("JOURNAL_DISC_DREAMCATCHER_MAP_JN");
			case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
				return joaat("JOURNAL_DISC_ABANDONED_CHURCH_JN");
			case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
				return joaat("JOURNAL_DISC_ABANDONED_TRADING_POST_JN");
			case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
				return joaat("JOURNAL_DISC_OIL_WELL_JN");
			case 677950956:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_1_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_2_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_3_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_4_JN");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_5_JN");
				}
				else if (iParam2 == 5)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_6_JN");
				}
				break;
			case joaat("DISCOVER_LOC_BARREL_RIDER"):
				return joaat("JOURNAL_DISC_BARREL_RIDER_JN");
			case joaat("DISCOVER_LOC_BRUSH_FIRE"):
				return joaat("JOURNAL_DISC_BRUSH_FIRE_JN");
			case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
				return joaat("JOURNAL_DISC_CIRCUS_WAGONS_JN");
			case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
				return joaat("JOURNAL_DISC_CIVIL_WAR_JN");
			case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
				return joaat("JOURNAL_DISC_CRASHED_AIRSHIP_JN");
			case joaat("DISCOVER_LOC_GHOST_TOWN"):
				return joaat("JOURNAL_DISC_DEAD_TOWN_JN");
			case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
				return joaat("JOURNAL_DISC_DEFACED_GRAVE_JN");
			case joaat("DISCOVER_LOC_DONKEY_LADY"):
				return joaat("JOURNAL_DISC_DONKEY_LADY_JN");
			case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
				return joaat("JOURNAL_DISC_FACE_CLIFF_JN");
			case joaat("DISCOVER_LOC_FACE_TREES"):
				return joaat("JOURNAL_DISC_FACE_TREES_JN");
			case joaat("DISCOVER_LOC_FLYING_MACHINE"):
				return joaat("JOURNAL_DISC_FLYING_MACHINE_JN");
			case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
				return joaat("JOURNAL_DISC_FOSSILISED_MAN_JN");
			case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
				return joaat("JOURNAL_DISC_FRANKENSTEIN_JN");
			case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
				return joaat("JOURNAL_DISC_FROZEN_SETTLER_JN");
			case joaat("DISCOVER_LOC_GIANT_REMAINS"):
				return joaat("JOURNAL_DISC_GIANT_REMAINS_JN");
			case joaat("DISCOVER_LOC_GRAYS_SECRET"):
				return joaat("JOURNAL_DISC_GRAYS_SECRET_JN");
			case 1519228573:
				return joaat("JOURNAL_DISC_HAND_SWAMP_JN");
			case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
				return joaat("JOURNAL_DISC_HERMIT_WOMAN_JN");
			case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
				return joaat("JOURNAL_DISC_HIDDEN_TUNNEL_JN");
			case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
				return joaat("JOURNAL_DISC_INDIAN_BURIAL_JN");
			case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
				return joaat("JOURNAL_DISC_JESUIT_JN");
			case joaat("DISCOVER_LOC_MAMMOTH"):
				return joaat("JOURNAL_DISC_MAMMOTH_JN");
			case joaat("DISCOVER_LOC_MEDITATING_MONK"):
				return joaat("JOURNAL_DISC_MEDITATING_MONK_JN");
			case joaat("DISCOVER_LOC_METEORITE"):
				return joaat("JOURNAL_DISC_METEORITE_JN");
			case joaat("DISCOVER_LOC_METEOR_HOUSE"):
				return joaat("JOURNAL_DISC_METEOR_HOUSE_JN");
			case joaat("DISCOVER_LOC_OBELISK"):
				return joaat("JOURNAL_DISC_OBELISK_JN");
			case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
				return joaat("JOURNAL_DISC_OLD_SCRIPTS_JN");
			case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
				return joaat("JOURNAL_DISC_ONE_ROOM_CHURCH_JN");
			case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
				return joaat("JOURNAL_DISC_PAGAN_RITUAL_JN");
			case joaat("DISCOVER_LOC_EASEL"):
				return joaat("JOURNAL_DISC_PAINTING_CABIN_JN");
			case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
				return joaat("JOURNAL_DISC_PHONOGRAPH_JN");
			case joaat("DISCOVER_LOC_REGISTER_ROCK"):
				return joaat("JOURNAL_DISC_REGISTER_ROCK_JN");
			case joaat("DISCOVER_LOC_SERPENT_MOUND"):
				return joaat("JOURNAL_DISC_SERPENT_MOUND_JN");
			case joaat("DISCOVER_LOC_SPERM_WHALE"):
				return joaat("JOURNAL_DISC_SPERM_WHALE_JN");
			case joaat("DISCOVER_LOC_STONEHENGE"):
				return joaat("JOURNAL_DISC_STONEHENGE_JN");
			case joaat("DISCOVER_LOC_STRANGE_STATUES"):
				if (iParam2 == 11)
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_PAINTING_JN");
				}
				else
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_JN");
				}
				break;
			case joaat("DISCOVER_LOC_TRADING_POST"):
				return joaat("JOURNAL_DISC_TRADING_POST_JN");
			case joaat("DISCOVER_LOC_TRAIL_TREES"):
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_JN");
				}
				break;
			case joaat("DISCOVER_LOC_UTE_WICKUP"):
				return joaat("JOURNAL_DISC_UTE_WICKIUP_JN");
			case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
				return joaat("JOURNAL_DISC_COLONY_JN");
			case -1505275983:
				return joaat("JOURNAL_DISC_WARPED_TREE_JN");
			case joaat("DISCOVER_LOC_WHALE_BONE"):
				return joaat("JOURNAL_DISC_WHALE_BONE_JN");
			case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP2_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP1_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP5_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP4_JN");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP3_JN");
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_122(iParam0, 1, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_122(iParam0, 0, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_124(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_237(1);
	}
}

int func_125()
{
	int iVar0;

	iVar0 = 0;
	if (func_39(Global_40.f_8863.f_154, (1 << 11)))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, (1 << 12)))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, (1 << 13)))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, (1 << 14)))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, (1 << 15)))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_126()
{
	int iVar0;

	if (!func_238(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!func_239(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_234(Global_35, joaat("SCRIPT_TASK_ENTER_ANIM_SCENE")))
	{
		return false;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_Y"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_B"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_RT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
	{
		return false;
	}
	iVar0 = joaat("DOCUMENT_PLAYER_JOURNAL");
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_240(0), iVar0, false))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_241();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1.0f);
	return true;
}

void func_127(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_128()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_129(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_130(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_131(int iParam0, var uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_SCALE(iParam0) /*3*/ };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) /*3*/ };
	vVar3 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	vVar6 = { VOLUME::GET_VOLUME_ROTATION(iParam0) /*3*/ };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar3, fVar9, -vVar0.x, 0.0f, -vVar0.z) /*3*/ };
	uParam1->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar3, fVar9, vVar0.x, 0.0f, vVar0.z) /*3*/ };
	return 1;
}

int func_132(var uParam0)
{
	return uParam0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return (1 << 9);
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return (1 << 10);
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return (1 << 11);
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return (1 << 12);
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return (1 << 13);
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return (1 << 14);
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return (1 << 15);
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return (1 << 16);
		case joaat("HONOR_EVENT_THEFT"):
			return (1 << 17);
		case joaat("HONOR_EVENT_INTERVENED"):
			return (1 << 18);
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return (1 << 19);
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return (1 << 20);
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return (1 << 21);
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return (1 << 22);
		default:
			break;
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_135(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_242();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_243(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 -= DECORATOR::DECOR_GET_INT(iParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1.0f;
	if (func_244(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL(((float)iParam0 * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(((float)iParam0 * fVar4));
	}
	Global_40.f_11095.f_35 += iVar5;
	Global_40.f_11095.f_35 = func_245(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_242();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_246(iVar1);
		func_248(func_247(), 0, 4000);
		func_249(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_250(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_186(func_185(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_134(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_251(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_186(func_185(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_134(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_251(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_185(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_253(10, 1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

float func_137(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_138()
{
	if (func_54(joaat("WS_GRAVE_ARTHUR_GOOD")))
	{
		return true;
	}
	return false;
}

bool func_139()
{
	if (func_54(joaat("WS_GRAVE_ARTHUR_BAD")))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_254(Global_1835011[iParam0 /*74*/].f_1);
}

int func_141()
{
	return Global_0.f_7;
}

bool func_142(int iParam0)
{
	if (func_102() != -1)
	{
		return false;
	}
	if (!func_255(iParam0))
	{
		return false;
	}
	return func_254(Global_1347702[iParam0 /*49*/].f_15);
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return (1 << 9);
		case 9:
			return (1 << 10);
		case 10:
			return (1 << 11);
		case 11:
			return (1 << 12);
		case 12:
			return (1 << 13);
		case 13:
			return (1 << 14);
		case 14:
			return (1 << 15);
		case 15:
			return (1 << 16);
		case 16:
			return (1 << 17);
		case 17:
			return (1 << 18);
		case 18:
			return (1 << 19);
		case 19:
			return (1 << 20);
		default:
			break;
	}
	return 1;
}

int func_144(int iParam0, int iParam1)
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

bool func_145(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_216(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
		else if (func_216(iVar0) == -1)
		{
			*iParam1 = iVar0;
			return false;
		}
	else
	{
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_144(iParam0, 1);
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

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_144(iParam0, 1);
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

void func_148()
{
	func_147(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_147(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_147(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_147(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_147(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_147(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_147(joaat("WS_COLTER_STAGE_MP"));
}

void func_149()
{
	func_147(joaat("WS_BEECHERS_SHACK"));
	func_147(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_147(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_147(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_147(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_147(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_147(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_147(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_147(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_147(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_150(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_39(Global_40.f_8863.f_152, 8))
		{
			return true;
		}
	}
	else if (iParam0 == 1)
	{
		if (func_39(Global_40.f_8863.f_152, 16))
		{
			return true;
		}
	}
	else if (iParam0 == 2)
	{
		if (func_39(Global_40.f_8863.f_152, 32))
		{
			return true;
		}
	}
	else if (iParam0 == 3)
	{
		if (func_39(Global_40.f_8863.f_152, 64))
		{
			return true;
		}
	}
	else if (iParam0 == 4)
	{
		if (func_39(Global_40.f_8863.f_152, 128))
		{
			return true;
		}
	}
	else if (iParam0 == 5)
	{
		if (func_39(Global_40.f_8863.f_152, 256))
		{
			return true;
		}
	}
	else if (iParam0 == 6)
	{
		if (func_39(Global_40.f_8863.f_152, (1 << 9)))
		{
			return true;
		}
	}
	else if (iParam0 == 7)
	{
		if (func_39(Global_40.f_8863.f_152, (1 << 10)))
		{
			return true;
		}
	}
	else if (iParam0 == 11)
	{
		if (func_39(Global_40.f_8863.f_152, (1 << 14)))
		{
			return true;
		}
	}
	return false;
}

char* func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "dis_grz_button_2_on";
			}
			else
			{
				return "dis_grz_button_2_off";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "dis_grz_button_3_on";
			}
			else
			{
				return "dis_grz_button_3_off";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "dis_grz_button_4_on";
			}
			else
			{
				return "dis_grz_button_4_off";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "dis_grz_button_5_on";
			}
			else
			{
				return "dis_grz_button_5_off";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "dis_grz_button_6_on";
			}
			else
			{
				return "dis_grz_button_6_off";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "dis_grz_button_7_on";
			}
			else
			{
				return "dis_grz_button_7_off";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "dis_grz_button_8_on";
			}
			else
			{
				return "dis_grz_button_8_off";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "dis_grz_lid_open";
			}
			else
			{
				return "dis_grz_lid_closed";
			}
			break;
		default:
			break;
	}
	return "";
}

bool func_152(char* sParam0, Vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
			}
			return true;
		}
	}
	return false;
}

char* func_153(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
			return "van_farmhouse_monster";
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
			return "scr_shack_jewlerybox";
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			switch (iParam1)
			{
				case 0:
					return "m05_mine_collapse_rocks";
				case 1:
					return "m05_mine_explosive";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_154(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_14))
	{
		if ((((((*uParam0 == joaat("DISCOVER_LOC_OLD_FIREPIT") || *uParam0 == joaat("DISCOVER_LOC_GRAVE")) || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE")) || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956) || *uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
		{
			vVar0 = { func_13(uParam0, uParam0->f_4) /*3*/ };
		}
		else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
		{
			vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) /*3*/ };
		}
		if (func_22(vVar0))
		{
		}
		if (((((((((((((((((*uParam0 == 1464664327 || *uParam0 == joaat("DISCOVER_LOC_TRADING_POST")) || *uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES")) || *uParam0 == joaat("DISCOVER_LOC_GRAVE")) || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR")) || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956) || *uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE")) || *uParam0 == joaat("DISCOVER_LOC_KILL_ZONE")) || *uParam0 == joaat("DISCOVER_LOC_GRAVESTONE_TREE")) || *uParam0 == joaat("DISCOVER_LOC_DERAILED_TRAIN")) || *uParam0 == joaat("DISCOVER_LOC_ABANDONED_MISSION")) || *uParam0 == joaat("DISCOVER_LOC_CIVIL_WAR_FORT")) || *uParam0 == joaat("DISCOVER_LOC_DESERTED_FARM")) || *uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES")) || *uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND")) || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD")) || *uParam0 == joaat("DISCOVER_LOC_OLD_GRAVESTONES"))
		{
			if (*uParam0 == 1464664327)
			{
				vVar0 = { 1183.872f, 2035.43f, 324.3338f /*3*/ };
				vVar3 = { 0.0f, 0.0f, -45.764f /*3*/ };
				vVar6 = { 7.547398f, 4.034004f, 5.6249f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_TRADING_POST"))
			{
				vVar0 = { 191.2143f, -412.4497f, 86.6615f /*3*/ };
				vVar3 = { 0.0f, 0.0f, -31.00864f /*3*/ };
				vVar6 = { 4.507977f, 5.159722f, 5.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES"))
			{
				vVar0 = { 830.6414f, 1924.297f, 259.5716f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 4.0f, 4.0f, 4.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"))
			{
				vVar0 = { 2309.656f, -334.2829f, 42.88904f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 10.73793f, 10.12531f, 10.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GRAVESTONE_TREE"))
			{
				vVar0 = { 1985.943f, -1896.122f, 40.6398f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 12.50924f /*3*/ };
				vVar6 = { 6.360533f, 7.521983f, 10.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_DERAILED_TRAIN"))
			{
				vVar0 = { 47.4897f, 1712.436f, 127.2594f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 13.81293f, 22.37569f, 19.81484f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_ABANDONED_MISSION"))
			{
				vVar0 = { -5576.82f, -2583.934f, -9.5414f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 30.53407f /*3*/ };
				vVar6 = { 11.12445f, 7.156734f, 20.90556f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_CIVIL_WAR_FORT"))
			{
				vVar0 = { 2452.989f, 291.1053f, 69.5017f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 86.66475f /*3*/ };
				vVar6 = { 28.75424f, 25.43092f, 20.90556f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_DESERTED_FARM"))
			{
				vVar0 = { -3831.608f, -3004.712f, -7.892179f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 25.0f, 25.0f, 6.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_SERPENT_MOUND"))
			{
				vVar0 = { 2704.939f, 435.9636f, 91.37785f /*3*/ };
				vVar3 = { 0.0f, 0.0f, -54.20028f /*3*/ };
				vVar6 = { 3.346154f, 3.339972f, 8.648747f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"))
			{
				vVar0 = { 1503.231f, -1819.476f, 56.89473f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 31.7625f /*3*/ };
				vVar6 = { 44.60546f, 27.38259f, 6.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_OLD_GRAVESTONES"))
			{
				vVar0 = { 2133.283f, 145.452f, 75.745f /*3*/ };
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 6.0f, 6.0f, 6.0f /*3*/ };
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_GRAVE_ARTHUR"))
			{
				if (uParam0->f_4 == 9)
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f /*3*/ };
				}
				else if (uParam0->f_4 == 10)
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f /*3*/ };
				}
				else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					vVar0 = { 2577.819f, -629.2898f, 42.2934f /*3*/ };
					vVar3 = { 0.0f, 0.0f, -110.7924f /*3*/ };
					vVar6 = { 3.5f, 5.840896f, 5.0f /*3*/ };
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES"))
			{
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 3.0f, 3.0f, 3.0f /*3*/ };
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 677950956)
			{
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 3.0f, 3.0f, 3.0f /*3*/ };
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else if (uParam0->f_4 == 5)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_KILL_ZONE"))
			{
				if (uParam0->f_4 == 0)
				{
					vVar0 = { 2325.978f, 1070.32f, 44.9401f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
					vVar6 = { 8.229425f, 7.256244f, 7.642096f /*3*/ };
				}
				else if (uParam0->f_4 == 1)
				{
					vVar0 = { -2698.656f, 697.2829f, 162.889f /*3*/ };
					vVar3 = { 0.0f, 0.0f, 42.54451f /*3*/ };
					vVar6 = { 33.55475f, 29.02702f, 6.0f /*3*/ };
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES"))
			{
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar6 = { 6.0f, 6.0f, 6.0f /*3*/ };
			}
			if ((((((((*uParam0 == joaat("DISCOVER_LOC_STRANGE_STATUES") || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956) || *uParam0 == joaat("DISCOVER_LOC_KILL_ZONE")) || *uParam0 == joaat("DISCOVER_LOC_DERAILED_TRAIN")) || *uParam0 == joaat("DISCOVER_LOC_DESERTED_FARM")) || *uParam0 == joaat("DISCOVER_LOC_TRAIL_TREES")) || *uParam0 == joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD")) || *uParam0 == joaat("DISCOVER_LOC_OLD_GRAVESTONES"))
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
			}
			else
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
			}
		}
		else
		{
			if (*uParam0 == joaat("DISCOVER_LOC_DREAMCATCHERS"))
			{
				vVar0 = { func_92(uParam0, uParam0->f_4) /*3*/ };
				if (uParam0->f_4 == 4 || uParam0->f_4 == 19)
				{
					vVar6 = { 3.0f, 3.0f, 5.0f /*3*/ };
				}
				else if (uParam0->f_4 == 5)
				{
					vVar6 = { 3.0f, 3.0f, 7.0f /*3*/ };
				}
				else
				{
					vVar6 = { 5.0f, 5.0f, 5.0f /*3*/ };
				}
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_BOAT_IN_TREE") || *uParam0 == joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"))
			{
				vVar6.x = (3.0f * 6.0f);
				vVar6.f_1 = (3.0f * 6.0f);
				vVar6.f_2 = 6.0f;
			}
			else if ((*uParam0 == joaat("DISCOVER_LOC_UTE_WICKUP") || *uParam0 == joaat("DISCOVER_LOC_DESERT_SKELETONS")) || *uParam0 == joaat("DISCOVER_LOC_FACE_TREES"))
			{
				vVar6.x = (2.0f * 6.0f);
				vVar6.f_1 = (2.0f * 6.0f);
				vVar6.f_2 = 6.0f;
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_WHISPERING_TREES"))
			{
				vVar6.x = (5.0f * 6.0f);
				vVar6.f_1 = (5.0f * 6.0f);
				vVar6.f_2 = (5.0f * 6.0f);
			}
			else if (*uParam0 == joaat("DISCOVER_LOC_GHOST_TOWN"))
			{
				vVar6.x = (10.0f * 6.0f);
				vVar6.f_1 = (10.0f * 6.0f);
				vVar6.f_2 = (3.0f * 6.0f);
			}
			else
			{
				vVar6.x = 6.0f;
				vVar6.f_1 = 6.0f;
				vVar6.f_2 = 6.0f;
			}
			iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
		}
	}
}

void func_155(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		uLocal_28.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			uLocal_28.f_6[0] = joaat("S_PICKUP_GOLDBAR01X");
			uLocal_28.f_6[1] = joaat("S_PICKUP_GOLDBAR01X");
			uLocal_28.f_6[2] = joaat("S_PICKUP_GOLDBAR01X");
			break;
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			uLocal_28.f_6[0] = joaat("P_DISDREAMCATCHERWIND01X");
			uLocal_28.f_6[1] = joaat("P_DISDREAMCATCHERWIND02X");
			uLocal_28.f_6[2] = joaat("P_DISDREAMCATCHERWIND03X");
			uLocal_28.f_6[3] = joaat("P_DISDREAMCATCHERWIND04X");
			uLocal_28.f_6[4] = joaat("P_DISDREAMCATCHERWIND05X");
			break;
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			uLocal_28.f_6[0] = joaat("P_CS_RT_ENVELOPE01X");
			break;
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			uLocal_28.f_6[0] = joaat("P_CS_DETONATOR01X");
			break;
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			uLocal_28.f_6[0] = joaat("P_PHONOGRAPH01X");
			break;
		case joaat("DISCOVER_LOC_STONEHENGE"):
			uLocal_28.f_6[0] = joaat("P_HUMANSKULL02X");
			uLocal_28.f_6[1] = joaat("S_COMBVIKINGANCIENT01X");
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			if (uParam0->f_4 == 0)
			{
				if (func_138())
				{
					sLocal_40.f_12[0] = joaat("A_C_EAGLE_01");
				}
				else if (func_139())
				{
					sLocal_40.f_12[0] = joaat("A_C_COYOTE_01");
				}
			}
			break;
		default:
			break;
	}
}

void func_156(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!uParam0->f_12[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_12[iVar0], false);
		}
		iVar0++;
	}
}

void func_157(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_6[iVar0], false);
		}
		iVar0++;
	}
}

char* func_158(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@deadman_and_sheep@pose";
						case 3:
							return "pl_base";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@overturned_hearse@overturned_hearse";
						case 3:
							return "pl_Overturned_Hearse";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_chinese_traveler@dead_chinese_traveler";
						case 3:
							return "pl_dead_chinese_traveler";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_BEAR"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_bear@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MINER"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_miner@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "";
						case 1:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@donkey_lady@donkey_lady";
						case 3:
							return "pl_donkey_lady";
						default:
							break;
					}
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_soldier@dead_soldier";
						case 3:
							return "pl_Action";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_abandoned_oil_drill@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@burned_settlement@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CORPSE_PIT"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_pit@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_of_slave@dead";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@meteor_house@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@water_diviner@water_diviner";
						case 3:
							return "pl_water_diviner";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@barrel_rider@barrel_rider";
						default:
							break;
					}
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@buck_carcasses@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_LIGHTNING_ALLEY"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@lightning_alley@lightning_alley";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@circuswagon@circuswagon";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "mech_melee@unarmed@_male@_ambient@_healthy@_noncombat";
						case 1:
							return "att_sucker_punch_dist_close_v1";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "s_lev_des_mission";
						case 1:
							return "s_fortuneteller01x";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 2:
							return "lightrig@misc@discoverable_circus_wagon";
						case 3:
							return "plMain";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							if (func_16(59))
							{
								return "script@beat@wilderness@discoverables@braithwaites_secret_endless_summer@braithwaites_secret_endless_summer";
							}
							else
							{
								return "script@ambient@discoverables@braithwaites@secret";
							}
							break;
						case 3:
							if (func_16(59))
							{
								return "";
							}
							else
							{
								return "pb_intial_visit_a";
							}
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@meditating_monk@main";
						case 3:
							return "pbl_base_a";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@jesuit_missionary@pose";
						case 3:
							return "pl_jesuit_missionary";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@roadside_brothel@roadside_brothel";
						case 3:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@swamp_freak@pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FLATTENED_CABIN"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@flattened_cabin@flattened_cabin";
						case 3:
							return "pl_DeadCorpse";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script_common@grieving@player@unarmed@upper";
							case 1:
								return "intro";
							default:
								break;
						}
						break;
				}
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_common@grieving@player@unarmed@upper";
						case 1:
							return "intro";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@pagan_ritual@pagan_ritual";
						case 3:
							return "pl_pagan_pose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_amb@discoverables@strange_statues@push_button";
						case 1:
							return "push_button_short";
						default:
							break;
					}
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@braithwaitesburnedcorpse@braithwaitesburnedcorpse";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CONESTOGA_WAGON"):
			switch (iParam1)
			{
				case 0:
					if (!func_53(*uParam0))
					{
						switch (iParam2)
						{
							case 2:
								return "script@beat@wilderness@discoverables@conestoga_wagon@conestoga_wagon";
							default:
								break;
						}
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@Conestoga_Wagon@SlideCamera";
						case 3:
							return "pl_ACTION";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@grayssecret@grayssecret";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WAGON_CHEST"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@wilderness_chest_3@wilderness_chest_3";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_micah@dead_micah";
						case 3:
							return "pl_micah";
						default:
							break;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_SHRINE"):
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_DEAD_SNAKE"):
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
		case joaat("DISCOVER_LOC_SCARECROW_1"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_SCARECROW_2"):
		case joaat("DISCOVER_LOC_PIRATE_SKELETON"):
		case -1061274876:
		case joaat("DISCOVER_LOC_CATTLE_CARCASSES"):
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
		case -763376358:
		case joaat("DISCOVER_LOC_METEORITE"):
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
		case joaat("DISCOVER_LOC_CIVIL_WAR_SWORD"):
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
		case joaat("DISCOVER_LOC_PIRATE_RUM"):
		case -261997819:
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
		case joaat("DISCOVER_LOC_SUN_DIAL"):
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
		case joaat("DISCOVER_LOC_BIRD_NEST"):
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
		case joaat("DISCOVER_LOC_SCARECROW_4"):
		case joaat("DISCOVER_LOC_SCARECROW_3"):
		case joaat("DISCOVER_LOC_OBJECT_IN_TREE"):
		case joaat("DISCOVER_LOC_WAGON_CIRCLE"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case joaat("DISCOVER_LOC_BANK_STAGECOACH"):
		case joaat("DISCOVER_LOC_PIRATE_SWORD"):
		case 1464664327:
		case joaat("DISCOVER_LOC_RAM_MASK"):
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_CAT_MASK"):
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
		case 2135153015:
			break;
		default:
			break;
	}
	return "";
}

bool func_159(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!uParam0->f_12[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_160(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_161(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return "Strange_Statues_Sounds";
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			return "inworld_music_wax_cylinder_swamp_boat";
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			return "fortune_teller_soundset";
		default:
			break;
	}
	return "";
}

char* func_162(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (iParam1 == 0)
			{
				return "button_press";
			}
			else if (iParam1 == 1)
			{
				return "statue_door_open";
			}
			break;
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			switch ((Global_40.f_8863.f_146 % 4))
			{
				case 0:
					return "1";
				case 1:
					return "2";
				case 2:
					return "3";
				case 3:
					return "4";
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			if (iParam1 == 0)
			{
				return "fortune_teller";
			}
			if (iParam1 == 1)
			{
				return "punch_fortune_teller";
			}
			break;
	}
	return "";
}

bool func_163(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

Vector3 func_164(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return { 1122.582f, 430.9633f, 96.2455f };
				case 1:
					return { 1123.024f, 430.963f, 95.7573f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
			switch (iParam1)
			{
				case 0:
					return { -2339.886f, -2176.59f, 71.4468f };
				case 1:
					return { -2337.024f, -2179.854f, 71.9464f };
				case 2:
					return { -2343.997f, -2181.427f, 70.977f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			switch (iParam1)
			{
				case 0:
					return { -3339.953f, -2500.892f, 1.8466f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_BEAR"):
			switch (iParam1)
			{
				case 0:
					return { -2334.939f, 903.981f, 157.7555f };
				case 1:
					return { -2334.179f, 904.0247f, 157.8905f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MINER"):
			switch (iParam1)
			{
				case 0:
					return { -2366.936f, 124.0762f, 216.8527f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
			switch (iParam1)
			{
				case 0:
					return { -3815.849f, -2982.679f, -5.7608f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
			switch (iParam1)
			{
				case 0:
					return { 2793.436f, 855.1691f, 71.7447f };
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return { 1593.37f, -1769.114f, 51.5788f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			switch (iParam1)
			{
				case 0:
					return { -1413.266f, -2671.288f, 41.17608f };
				case 1:
					return { -1411.035f, -2671.661f, 41.17608f };
				case 2:
					return { -1411.408f, -2672.634f, 41.1746f };
				case 3:
					return { -1413.048f, -2671.595f, 41.1746f };
				case 4:
					return { -1412.823f, -2670.672f, 41.1746f };
				case 5:
					return { -1412.741f, -2672.306f, 41.1746f };
				case 6:
					return { -1413.745f, -2671.585f, 41.1746f };
				case 7:
					return { -1412.558f, -2671.803f, 41.1746f };
				case 8:
					return { -1412.088f, -2671.957f, 41.1746f };
				case 9:
					return { -1412.338f, -2671.517f, 41.1746f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			switch (iParam1)
			{
				case 0:
					return { 368.6882f, -13.6098f, 108.217f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
			switch (iParam1)
			{
				case 0:
					return { -328.35f, -147.69f, 52.62f };
				case 1:
					return { -328.35f, -147.69f, 52.62f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CORPSE_PIT"):
			switch (iParam1)
			{
				case 0:
					return { -2261.68f, -1433.048f, 138.7403f };
				case 1:
					return { -2261.088f, -1434.147f, 138.5787f };
				case 2:
					return { -2261.852f, -1433.882f, 138.6091f };
				case 3:
					return { -2261.244f, -1434.466f, 138.7101f };
				case 4:
					return { -2261.025f, -1432.579f, 138.68f };
				case 5:
					return { -2260.271f, -1432.243f, 138.9447f };
				case 6:
					return { -2260.379f, -1433.973f, 138.763f };
				case 7:
					return { -2259.772f, -1432.779f, 138.7855f };
				case 8:
					return { -2262.282f, -1433.536f, 138.7945f };
				case 9:
					return { -2259.818f, -1433.147f, 138.9421f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
			switch (iParam1)
			{
				case 0:
					return { 1750.49f, -2091.79f, 40.94f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			switch (iParam1)
			{
				case 0:
					return { 2476.028f, 1996.19f, 168.2534f };
				case 1:
					return { 2475.049f, 1998.073f, 168.2685f };
				case 2:
					return { 2474.894f, 1999.316f, 168.2582f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			switch (iParam1)
			{
				case 0:
					return { 1026.078f, 1575.433f, 360.6882f };
				case 1:
					return { 1080.511f, 1659.407f, 372.3716f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
			switch (iParam1)
			{
				case 0:
					return { -4859.858f, -2421.918f, 7.61f };
				case 1:
					return { -4757.666f, -2424.231f, 8.0423f };
				case 2:
					return { -4756.033f, -2420.065f, 7.9381f };
				case 3:
					return { -4757.72f, -2419.863f, 7.8109f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
			switch (iParam1)
			{
				case 0:
					return { 546.5995f, 1794.07f, 127.9608f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
			switch (iParam1)
			{
				case 0:
					return { -5419.692f, -3655.095f, -20.0f };
				case 1:
					return { -5419.692f, -3651.995f, -20.0f };
				case 2:
					return { -5419.692f, -3653.495f, -20.0f };
				case 3:
					return { -5419.792f, -3655.34f, -17.72f };
				case 4:
					return { -5419.792f, -3654.34f, -17.72f };
				case 5:
					return { -5429.492f, -3655.095f, -20.0f };
				case 6:
					return { -5429.492f, -3653.61f, -20.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			switch (iParam1)
			{
				case 0:
					return { 894.7463f, -1969.915f, 44.5785f };
				case 1:
					return { 1047.956f, -1880.671f, 45.402f };
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return { -1330.84f, -88.9414f, 97.5094f };
				case 1:
					return { -1332.349f, -87.4579f, 97.4614f };
				case 2:
					return { -1330.415f, -89.829f, 97.5879f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_LIGHTNING_ALLEY"):
			switch (iParam1)
			{
				case 0:
					return { -3714.425f, -3602.42f, 45.4395f };
				case 1:
					return { -3712.339f, -3602.567f, 44.9224f };
				case 2:
					return { -3716.815f, -3604.644f, 44.6678f };
				case 3:
					return { -3716.111f, -3602.837f, 46.7136f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			switch (iParam1)
			{
				case 0:
					return { 1141.463f, 763.3734f, 95.371f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			switch (iParam1)
			{
				case 0:
					return { -1741.339f, -1624.245f, 89.9356f };
				case 1:
					return { -1755.518f, -1624.026f, 90.635f };
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return { 1217.047f, 2002.68f, 319.2006f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			switch (iParam1)
			{
				case 0:
					return { -6314.926f, -3466.984f, -10.575f };
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return { 2023.15f, -1708.104f, 40.5575f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_SNAKE"):
			switch (iParam1)
			{
				case 0:
					return { 1763.535f, -560.0701f, 46.6156f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FLATTENED_CABIN"):
			switch (iParam1)
			{
				case 0:
					return { 1245.788f, 1152.984f, 151.5137f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			switch (iParam1)
			{
				case 0:
					return { -2905.723f, -254.32f, 186.8714f };
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return { 1010.224f, -1764.319f, 46.4285f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CONESTOGA_WAGON"):
			switch (iParam1)
			{
				case 0:
					return { -2222.461f, -618.8527f, 135.3655f };
				case 1:
					return { -2222.735f, -616.4194f, 135.0682f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			switch (iParam1)
			{
				case 0:
					return { 1772.332f, -1360.154f, 44.1704f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
			switch (iParam1)
			{
				case 0:
					return { -2532.369f, 1173.309f, 225.1319f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			switch (iParam1)
			{
				case 0:
					return { 1256.994f, 1257.913f, 171.0152f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WAGON_CHEST"):
			switch (iParam1)
			{
				case 0:
					return { 2518.04f, 564.7737f, 70.937f };
				case 1:
					return { 2519.439f, 562.9084f, 70.9917f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			switch (iParam1)
			{
				case 0:
					if (func_138())
					{
						return { 792.7722f, 1776.509f, 281.5611f };
					}
					else if (func_139())
					{
						return { 794.3322f, 1778.012f, 280.3784f };
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
			switch (iParam1)
			{
				case 0:
					return { -1497.558f, 1251.074f, 313.1244f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_SHRINE"):
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
		case joaat("DISCOVER_LOC_SCARECROW_1"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_SCARECROW_2"):
		case joaat("DISCOVER_LOC_PIRATE_SKELETON"):
		case -1061274876:
		case joaat("DISCOVER_LOC_CATTLE_CARCASSES"):
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
		case -763376358:
		case joaat("DISCOVER_LOC_METEORITE"):
		case joaat("DISCOVER_LOC_CIVIL_WAR_SWORD"):
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
		case joaat("DISCOVER_LOC_PIRATE_RUM"):
		case -261997819:
		case joaat("DISCOVER_LOC_SUN_DIAL"):
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
		case joaat("DISCOVER_LOC_BIRD_NEST"):
		case joaat("DISCOVER_LOC_WHISKEY_TREE"):
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
		case joaat("DISCOVER_LOC_SCARECROW_4"):
		case joaat("DISCOVER_LOC_SCARECROW_3"):
		case joaat("DISCOVER_LOC_OBJECT_IN_TREE"):
		case joaat("DISCOVER_LOC_WAGON_CIRCLE"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case joaat("DISCOVER_LOC_BANK_STAGECOACH"):
		case joaat("DISCOVER_LOC_PIRATE_SWORD"):
		case joaat("DISCOVER_LOC_RAM_MASK"):
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_CAT_MASK"):
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
		case 2135153015:
			break;
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_165(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return -12.03f;
				case 1:
					return -22.89f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return -97.7f;
				case 2:
					return 130.42f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			switch (iParam1)
			{
				case 0:
					return -90.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_BEAR"):
			switch (iParam1)
			{
				case 0:
					return -46.21f;
				case 1:
					return 135.66f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MINER"):
			switch (iParam1)
			{
				case 0:
					return 72.28f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
			switch (iParam1)
			{
				case 0:
					return 132.16f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
			switch (iParam1)
			{
				case 0:
					return 186.76f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 43.65f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			switch (iParam1)
			{
				case 0:
					return -96.76f;
				case 1:
					return 120.75f;
				case 2:
					return 0.0f;
				case 3:
					return 30.0f;
				case 4:
					return 60.0f;
				case 5:
					return -15.0f;
				case 6:
					return -30.0f;
				case 7:
					return -60.0f;
				case 8:
					return -120.0f;
				case 9:
					return 15.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			switch (iParam1)
			{
				case 0:
					return -174.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
			switch (iParam1)
			{
				case 0:
					return 0.0f;
				case 1:
					return 0.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CORPSE_PIT"):
			switch (iParam1)
			{
				case 0:
					return -98.66f;
				case 1:
					return 3.79f;
				case 2:
					return -93.21f;
				case 3:
					return -72.99f;
				case 4:
					return 130.68f;
				case 5:
					return 117.29f;
				case 6:
					return -133.0f;
				case 7:
					return -86.34f;
				case 8:
					return 93.9f;
				case 9:
					return 110.42f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
			switch (iParam1)
			{
				case 0:
					return 162.86f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			switch (iParam1)
			{
				case 0:
					return -19.53f;
				case 1:
					return 133.99f;
				case 2:
					return -105.95f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			switch (iParam1)
			{
				case 0:
					return 175.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
			switch (iParam1)
			{
				case 0:
					return -167.58f;
				case 1:
					return 0.0f;
				case 2:
					return 117.57f;
				case 3:
					return 179.95f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
			switch (iParam1)
			{
				case 0:
					return -86.12f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
			switch (iParam1)
			{
				case 0:
					return -90.0f;
				case 1:
					return -90.0f;
				case 2:
					return -90.0f;
				case 3:
					return -90.0f;
				case 4:
					return -90.0f;
				case 5:
					return 90.0f;
				case 6:
					return 90.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
			switch (iParam1)
			{
				case 0:
					return -38.1f;
				case 1:
					return 56.97f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -2.39f;
				case 1:
					return -38.07f;
				case 2:
					return -132.4f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_LIGHTNING_ALLEY"):
			switch (iParam1)
			{
				case 0:
					return 59.57f;
				case 1:
					return 180.0f;
				case 2:
					return 180.0f;
				case 3:
					return -170.06f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			switch (iParam1)
			{
				case 0:
					return 0.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
			switch (iParam1)
			{
				case 0:
					return -115.63f;
				case 1:
					return 280.0316f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 349.2461f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			switch (iParam1)
			{
				case 0:
					return 180.0f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return -75.35f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FLATTENED_CABIN"):
			switch (iParam1)
			{
				case 0:
					return -26.24f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			switch (iParam1)
			{
				case 0:
					return -90.47f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 175.4f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CONESTOGA_WAGON"):
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return 0.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			switch (iParam1)
			{
				case 0:
					return -99.19f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			switch (iParam1)
			{
				case 0:
					return 0.0f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WAGON_CHEST"):
			switch (iParam1)
			{
				case 0:
					return 142.69f;
				case 1:
					return 165.69f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			switch (iParam1)
			{
				case 0:
					if (func_138())
					{
						return 275.0f;
					}
					else if (func_139())
					{
						return 275.0f;
					}
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
			switch (iParam1)
			{
				case 0:
					return 150.68f;
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_SHRINE"):
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_DEAD_SNAKE"):
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
		case joaat("DISCOVER_LOC_SCARECROW_1"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_SCARECROW_2"):
		case joaat("DISCOVER_LOC_PIRATE_SKELETON"):
		case -1061274876:
		case joaat("DISCOVER_LOC_CATTLE_CARCASSES"):
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
		case -763376358:
		case joaat("DISCOVER_LOC_METEORITE"):
		case joaat("DISCOVER_LOC_CIVIL_WAR_SWORD"):
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
		case joaat("DISCOVER_LOC_PIRATE_RUM"):
		case -261997819:
		case joaat("DISCOVER_LOC_SUN_DIAL"):
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
		case joaat("DISCOVER_LOC_BIRD_NEST"):
		case joaat("DISCOVER_LOC_WHISKEY_TREE"):
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
		case joaat("DISCOVER_LOC_SCARECROW_4"):
		case joaat("DISCOVER_LOC_SCARECROW_3"):
		case joaat("DISCOVER_LOC_OBJECT_IN_TREE"):
		case joaat("DISCOVER_LOC_WAGON_CIRCLE"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case joaat("DISCOVER_LOC_BANK_STAGECOACH"):
		case joaat("DISCOVER_LOC_PIRATE_SWORD"):
		case joaat("DISCOVER_LOC_RAM_MASK"):
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_CAT_MASK"):
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
		case 2135153015:
			break;
		default:
			break;
	}
	return 0.0f;
}

void func_166(var uParam0, Vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!uParam0->f_12[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam5]))
		{
			uParam0->f_1[iParam5] = func_257(uParam0->f_12[iParam5], vParam1, fParam4, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1[iParam5]))
			{
				if (bParam6)
				{
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->f_1[iParam5], false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_1[iParam5], -1);
				if (!bParam7)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1[iParam5], false);
				}
				*uParam0++;
			}
		}
		else
		{
			*uParam0++;
		}
	}
	else
	{
		*uParam0++;
	}
}

int func_167(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_SHRINE"):
			return joaat("RANSACK_VOLUME_NARROW_0M5_0M5_2M0");
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
			return joaat("WORLD_ANIMAL_BAT_HANGING");
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
			return joaat("RANSACK_REACH_OVER_VOLUME_NARROW_0M5_0M5_2M0");
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			return joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0");
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return joaat("RANSACK_STRANGE_STATUES_STASH");
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return joaat("RANSACK_VOLUME_0M8_0M5_2M0");
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
			return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_VIKING");
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
			return joaat("WORLD_PLAYER_PICKUP_WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
			return joaat("PROP_PLAYER_LNS_FLOOR_STASH");
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			return joaat("RANSACK_REACH_OVER_CENTERED_GROUND_PICKUP");
		case 2135153015:
			return joaat("RANSACK_REACH_OVER_GENERIC_LETTER_PROMPT_0M5_0M5_2M0");
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			return joaat("RANSACK_ATTACHED_CHEST_MEDIUM_OPEN_ONLY");
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_PLAYER_DRINK_WITCHES_BREW");
				case 1:
					return joaat("WORLD_PLAYER_SLEEP_GROUND");
			}
			break;
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			return 0;
		}

float func_168(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_SHRINE"):
			return -162.606f;
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
			return 0.0f;
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			return -49.4f;
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
			return 40.0f;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return -13.0f;
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return -160.0f;
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
			return -5.848f;
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
			return -155.926f;
		case 2135153015:
			return 3.97f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
				case 1:
					return 103.5514f;
			}
			break;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			switch (iParam1)
			{
				case 0:
					return -173.0f;
				case 1:
					return 0.0f;
				case 2:
					return 0.0f;
				default:
					break;
			}
			Jump @410; // curOff = 250
			switch (iParam1)
			{
				case 0:
					return 108.929f;
				case 1:
					return -98.32f;
				case 2:
					return -76.119f;
				case 3:
					return -156.164f;
				default:
					break;
			}
			Jump @410; // curOff = 320
			switch (iParam1)
			{
				case 0:
					return -156.0f;
				case 1:
					return -156.0f;
				case 2:
					return 20.0f;
				case 3:
					return -142.537f;
				case 4:
					return 30.0f;
				default:
					break;
			}
			return 0.0f;
		}

int func_169(int iParam0, Vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	return TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vParam1, fParam4, fParam5, fParam6, bParam7);
}

Vector3 func_170(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_ABANDONED_WELL"):
			switch (iParam1)
			{
				case 0:
					return { 5.0f, 0.0f, 213.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -48.0f };
				case 1:
					return { 20.0f, 88.84f, -94.66f };
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return { 65.0f, 0.0f, 90.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CAT_MASK"):
			switch (iParam1)
			{
				case 0:
					return { 15.0f, 0.0f, -42.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RAM_MASK"):
			switch (iParam1)
			{
				case 0:
					return { 25.0f, 0.0f, -75.0f };
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_CHINESE_TRAVELLER"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 155.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				case 2:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEAD_MINER"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -95.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_VIKING_GEAR"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -144.36f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OBJECT_IN_TREE"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -35.981f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SHRINE"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_1"):
			switch (iParam1)
			{
				case 0:
					return { -10.0f, 0.0f, 33.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_2"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_3"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SCARECROW_4"):
			switch (iParam1)
			{
				case 0:
					return { 15.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_RAILROAD_GRAVESTONE"):
			switch (iParam1)
			{
				case 0:
					return { 1.24f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 12.0f };
				case 1:
					return { 180.0f, 0.0f, 108.0f };
				case 2:
					return { 180.0f, 0.0f, 208.0f };
				case 3:
					return { 0.0f, 0.0f, 30.0f };
				case 4:
					return { 180.0f, 0.0f, 35.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_TREASURE_MAP_HALVES"):
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return { 0.0f, 0.0f, -45.0f };
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return { 0.0f, 0.0f, -110.0f };
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return { 0.0f, 0.0f, -49.418f };
					case 1:
						return { 0.0f, 0.0f, -33.718f };
					case 2:
						return { 0.0f, 0.0f, -26.718f };
					case 3:
						return { 0.0f, 0.0f, -41.7187f };
					case 4:
						return { 0.0f, 0.0f, -33.718f };
					default:
						break;
				}
			}
			break;
		case joaat("DISCOVER_LOC_BANK_STAGECOACH"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 90.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEORITE"):
			switch (iParam1)
			{
				case 0:
					return { 90.0f, 0.0f, 105.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_WHISKEY_TREE"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OVERTURNED_HEARSE"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 121.94f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			switch (iParam1)
			{
				case 0:
					return { -90.0f, 0.0f, 90.0f };
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -48.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
			switch (iParam1)
			{
				case 0:
					return { 30.0f, 5.0f, 99.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 169.0f };
				case 1:
					return { 0.0f, 0.0f, 169.0f };
				case 2:
					return { 0.0f, 0.0f, 169.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 116.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_PIRATE_SKELETON"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -55.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 90.0f };
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return { -10.0f, 90.0f, 30.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_MICAH_CAMP"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				case 2:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_STONEHENGE"):
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, 0.0f };
				default:
					break;
			}
			break;
		case -2108030724:
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
		case joaat("DISCOVER_LOC_BATS_IN_BARN"):
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
		case joaat("DISCOVER_LOC_LIGHTNING_ALLEY"):
		case joaat("DISCOVER_LOC_WAGON_CHEST"):
		case -1824429070:
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_DEAD_SNAKE"):
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
		case joaat("DISCOVER_LOC_CATTLE_CARCASSES"):
		case joaat("DISCOVER_LOC_RUNAWAY_CORPSE"):
		case joaat("DISCOVER_LOC_CIVIL_WAR_SWORD"):
		case joaat("DISCOVER_LOC_DEAD_CHAIN_GANG"):
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
		case joaat("DISCOVER_LOC_PIRATE_RUM"):
		case -261997819:
		case joaat("DISCOVER_LOC_SUN_DIAL"):
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
		case joaat("DISCOVER_LOC_BIRD_NEST"):
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
		case joaat("DISCOVER_LOC_AXE_IN_TREE"):
		case joaat("DISCOVER_LOC_WAGON_CIRCLE"):
		case joaat("DISCOVER_LOC_CONESTOGA_WAGON"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case joaat("DISCOVER_LOC_PIRATE_SWORD"):
		case 1464664327:
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
		case joaat("DISCOVER_LOC_ANCIENT_TOMAHAWK"):
		case joaat("DISCOVER_LOC_DEAD_BEAR"):
			break;
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_171(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	if (!uParam0->f_6[iParam7] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam7]))
		{
			(*uParam0)[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_6[iParam7], vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS((*uParam0)[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION((*uParam0)[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

bool func_172(var uParam0)
{
	int iVar0;

	if (func_39(Global_40.f_8863.f_152, (1 << 10)))
	{
		if (!func_39(Global_40.f_8863.f_152, (1 << 11)))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 0), func_170(uParam0, 0), 0))
			{
				return false;
			}
		}
		if (!func_39(Global_40.f_8863.f_152, (1 << 12)))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 1), func_170(uParam0, 1), 1))
			{
				return false;
			}
		}
		if (!func_39(Global_40.f_8863.f_152, (1 << 13)))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 2), func_170(uParam0, 2), 2))
			{
				return false;
			}
		}
		if ((!func_39(Global_40.f_8863.f_152, (1 << 11)) || !func_39(Global_40.f_8863.f_152, (1 << 12))) || !func_39(Global_40.f_8863.f_152, (1 << 13)))
		{
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_28[iVar0], true);
			}
			iVar0++;
		}
	}
	return true;
}

int func_173(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_ANIMAL_SPIRIT_COYOTE_A");
				default:
					break;
			}
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_174(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_258(iParam0, iParam1))
		{
			if (func_259(iParam0, iParam1))
			{
				if (func_260(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_261(iParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_SET_PED_DIRT_CLEANED(iParam0, 0.0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_175(int iParam0)
{
	Global_1310750.f_16035 -= (Global_1310750.f_16035 & iParam0);
}

float func_176()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
			return 993246734;
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
			return -1212881551;
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
			return 1352537560;
		case joaat("DISCOVER_LOC_BURNED_SETTLEMENT"):
			return 2021420613;
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			return 460210291;
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
			return -2011320133;
		case joaat("DISCOVER_LOC_DESERTED_FARM"):
			return 539572870;
		case joaat("DISCOVER_LOC_FIRE_LOOKOUT_TOWER"):
			return -1262808306;
		case joaat("DISCOVER_LOC_FLATTENED_CABIN"):
			return 1582457845;
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			return 1195199040;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			return 2056389698;
		case joaat("DISCOVER_LOC_ROADSIDE_BROTHEL"):
			return -1988847961;
		case joaat("DISCOVER_LOC_TRADING_POST"):
			return -942443338;
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
			return 66159563;
		case 1464664327:
			return 387869270;
		case joaat("DISCOVER_LOC_DEAD_MICAH"):
			return -875696111;
		default:
			break;
	}
	return 0;
}

void func_178(int iParam0, bool bParam1)
{
	iLocal_65 = iParam0;
	if (bParam1)
	{
		func_25(&uLocal_66);
	}
}

bool func_179(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<11> /*88*/ sVar2;

	sVar2.f_10 = 7;
	sVar2.f_0 = 1;
	sVar2.f_1 = 1;
	sVar2.f_2 = 0;
	sVar2.f_6 = { func_164(uParam0, 0) /*3*/ };
	sVar2.f_9 = func_165(uParam0, 0);
	iVar0 = func_262(&uVar1, &sVar2);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_180(iVar0, func_164(uParam0, 0), func_165(uParam0, 0), 2, (1 << 30));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		TASK::TASK_STAND_STILL(iVar0, -1);
		return true;
	}
	return false;
}

void func_180(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (iParam0 == func_132(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_263(iParam0))
	{
		if (func_264(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_39(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= (iParam5 & 4);
				func_180(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= (iParam5 & 4);
				func_180(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_39(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_39(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_39(iParam5, 129))
	{
		if (func_39(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_39(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_39(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_263(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_39(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_39(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

void func_181(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_182(int iParam0)
{
	func_32(iParam0, 2);
	func_74(iParam0);
}

bool func_183(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_265())
		{
			return true;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return true;
		}
		if (func_14(Global_35, func_76(uParam0, 0), 1) > (1.6f + 1.0f) || !func_112(Global_35, func_76(uParam0, 0), 0))
		{
			return true;
		}
	}
	else
	{
		if (!func_265())
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return false;
		}
		if (func_14(Global_35, func_76(uParam0, 0), 1) <= 1.6f && func_112(Global_35, func_76(uParam0, 0), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_184(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_FACE_IN_CLIFF"):
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
		case joaat("DISCOVER_LOC_GRAYS_SECRET"):
		case joaat("DISCOVER_LOC_GIANT_REMAINS"):
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
		case joaat("DISCOVER_LOC_DONKEY_LADY"):
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
		case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
		case -1505275983:
		case joaat("DISCOVER_LOC_ABANDONED_OIL_WELL"):
		case joaat("DISCOVER_LOC_BARREL_RIDER"):
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
		case joaat("DISCOVER_LOC_FACE_TREES"):
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
		case joaat("DISCOVER_LOC_FLYING_MACHINE"):
		case joaat("DISCOVER_LOC_WHALE_BONE"):
		case joaat("DISCOVER_LOC_OBELISK"):
		case joaat("DISCOVER_LOC_INDIAN_BURIAL"):
		case joaat("DISCOVER_LOC_DEFACED_GRAVE"):
		case joaat("DISCOVER_LOC_PAGAN_RITUAL"):
		case joaat("DISCOVER_LOC_METEORITE"):
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
		case joaat("DISCOVER_LOC_TRADING_POST"):
		case joaat("DISCOVER_LOC_STONEHENGE"):
		case joaat("DISCOVER_LOC_MAMMOTH"):
		case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
		case joaat("DISCOVER_LOC_ABANDONED_TRADING_POST"):
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
		case joaat("DISCOVER_LOC_JESUIT_MISSIONARY"):
		case joaat("DISCOVER_LOC_CIRCUS_WAGON"):
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
		case joaat("DISCOVER_LOC_EASEL"):
		case joaat("DISCOVER_LOC_FRANKENSTEIN_BOOK"):
		case 1519228573:
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
		case joaat("DISCOVER_LOC_BRAITHWAITES_SECRET"):
		case joaat("DISCOVER_LOC_HERMIT_WOMAN"):
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
		case joaat("DISCOVER_LOC_FROZEN_SETTLER"):
			return true;
	}
	return false;
}

struct<2> /*16*/ func_185(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_186(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

float func_187(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_266(uParam0, iParam1) /*3*/ };
	return vVar0.z;
}

bool func_188(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (func_267(vParam1, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, 0.0f, fParam5, 0.0f), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

int func_189(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_22(vParam2))
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
		if (func_235(iVar0, 2))
		{
			if (func_268(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
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
		func_236(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			if (iParam1 == 0)
			{
				iVar0 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 2;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 4;
			}
			else
			{
				return;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				iVar1 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 2;
			}
			else if (iParam1 == 2)
			{
				iVar1 = 4;
			}
			else if (iParam1 == 3)
			{
				iVar1 = 8;
			}
			else if (iParam1 == 4)
			{
				iVar1 = 16;
			}
			else if (iParam1 == 5)
			{
				iVar1 = 32;
			}
			else if (iParam1 == 6)
			{
				iVar1 = 64;
			}
			else if (iParam1 == 7)
			{
				iVar1 = 128;
			}
			else if (iParam1 == 8)
			{
				iVar1 = 256;
			}
			else if (iParam1 == 9)
			{
				iVar1 = (1 << 9);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			if (iParam1 == 0)
			{
				iVar1 = (1 << 10);
			}
			else if (iParam1 == 1)
			{
				iVar1 = (1 << 11);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			if (iParam1 == 0)
			{
				iVar1 = (1 << 23);
			}
			else if (iParam1 == 1)
			{
				iVar1 = (1 << 24);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			if (iParam1 == 0)
			{
				iVar1 = (1 << 12);
			}
			else if (iParam1 == 1)
			{
				iVar1 = (1 << 13);
			}
			else if (iParam1 == 2)
			{
				iVar1 = (1 << 14);
			}
			else if (iParam1 == 3)
			{
				iVar1 = (1 << 15);
			}
			else if (iParam1 == 4)
			{
				iVar1 = (1 << 16);
			}
			else if (iParam1 == 5)
			{
				iVar1 = (1 << 17);
			}
			else if (iParam1 == 6)
			{
				iVar1 = (1 << 18);
			}
			else if (iParam1 == 7)
			{
				iVar1 = (1 << 19);
			}
			else if (iParam1 == 8)
			{
				iVar1 = (1 << 20);
			}
			else if (iParam1 == 9)
			{
				iVar1 = (1 << 21);
			}
			else if (iParam1 == 10)
			{
				iVar1 = (1 << 22);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (iParam1 == 0)
			{
				iVar0 = 8;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 16;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 32;
			}
			else if (iParam1 == 3)
			{
				iVar0 = 64;
			}
			else if (iParam1 == 4)
			{
				iVar0 = 128;
			}
			else if (iParam1 == 5)
			{
				iVar0 = 256;
			}
			else if (iParam1 == 6)
			{
				iVar0 = (1 << 9);
			}
			else if (iParam1 == 7)
			{
				iVar0 = (1 << 10);
			}
			else if (iParam1 == 8)
			{
				iVar0 = (1 << 11);
			}
			else if (iParam1 == 9)
			{
				iVar0 = (1 << 12);
			}
			else if (iParam1 == 10)
			{
				iVar0 = (1 << 13);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			if (iParam1 == 0)
			{
				iVar0 = (1 << 18);
			}
			else if (iParam1 == 1)
			{
				iVar0 = (1 << 19);
			}
			else if (iParam1 == 2)
			{
				iVar0 = (1 << 20);
			}
			else if (iParam1 == 3)
			{
				iVar0 = (1 << 21);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE"):
			if (iParam1 == 0)
			{
				iVar2 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 8;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 16;
			}
			else if (iParam1 == 5)
			{
				iVar2 = 32;
			}
			else if (iParam1 == 6)
			{
				iVar2 = 64;
			}
			else if (iParam1 == 7)
			{
				iVar2 = 128;
			}
			else if (iParam1 == 8)
			{
				iVar2 = 256;
			}
			else if (iParam1 == 9)
			{
				iVar2 = (1 << 9);
			}
			else if (iParam1 == 10)
			{
				iVar2 = (1 << 10);
			}
			else
			{
				return;
			}
			break;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (iParam1 == 0)
			{
				iVar2 = (1 << 11);
			}
			else if (iParam1 == 1)
			{
				iVar2 = (1 << 12);
			}
			else if (iParam1 == 2)
			{
				iVar2 = (1 << 13);
			}
			else if (iParam1 == 3)
			{
				iVar2 = (1 << 14);
			}
			else if (iParam1 == 4)
			{
				iVar2 = (1 << 15);
			}
			else
			{
				return;
			}
			break;
		case 677950956:
			if (iParam1 == 0)
			{
				iVar2 = (1 << 16);
			}
			else if (iParam1 == 1)
			{
				iVar2 = (1 << 17);
			}
			else if (iParam1 == 2)
			{
				iVar2 = (1 << 18);
			}
			else if (iParam1 == 3)
			{
				iVar2 = (1 << 19);
			}
			else if (iParam1 == 4)
			{
				iVar2 = (1 << 20);
			}
			else if (iParam1 == 5)
			{
				iVar2 = (1 << 21);
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if ((*uParam0 == joaat("DISCOVER_LOC_GRAVE") || *uParam0 == joaat("DISCOVER_LOC_VAMPIRE_CLUES")) || *uParam0 == 677950956)
	{
		if (func_39(Global_40.f_8863.f_154, iVar2))
		{
			func_43(&(Global_40.f_8863.f_154), iVar2);
		}
	}
	else if (((*uParam0 == -834293086 || *uParam0 == joaat("DISCOVER_LOC_OLD_FIREPLACE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_BRIDGE")) || *uParam0 == joaat("DISCOVER_LOC_BROKEN_WAGONS"))
	{
		if (func_39(Global_40.f_8863.f_153, iVar1))
		{
			func_43(&(Global_40.f_8863.f_153), iVar1);
		}
	}
	else if (func_39(Global_40.f_8863.f_152, iVar0))
	{
		func_43(&(Global_40.f_8863.f_152), iVar0);
	}
}

void func_191(var uParam0)
{
	Vector3 vVar0;
	float fVar3;
	struct<4> /*32*/ sVar4;
	int iVar8;

	if (bLocal_23)
	{
		fVar3 = (func_187(uParam0, uParam0->f_4) + 145.0f);
	}
	else
	{
		fVar3 = (func_187(uParam0, uParam0->f_4) + 325.0f);
	}
	sVar4.f_0 = (fVar3 + 180.0f);
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_13(uParam0, uParam0->f_4), fVar3, 0.0f, 0.82f, 0.0f) /*3*/ };
	TASK::OPEN_SEQUENCE_TASK(&iVar8);
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, vVar0, 1.0f, 20000, 0.09f, 0, sVar4, (fVar3 + 180.0f));
	TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 8.0f, -8.0f, -1, 24, 0.0f, false, 0, false, 0, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar8);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar8);
	TASK::CLEAR_SEQUENCE_TASK(&iVar8);
}

void func_192(float fParam0)
{
	if (func_269(1) < fParam0)
	{
		func_270(1, fParam0, 0);
	}
	if (func_269(2) < fParam0)
	{
		func_270(2, fParam0, 0);
	}
	if (func_269(0) < fParam0)
	{
		func_270(0, fParam0, 0);
	}
}

int func_193(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_ANCIENT_URN"):
			switch (iParam1)
			{
				case 1:
					return joaat("PROVISION_DISCO_SHRUNKEN_HEAD");
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_SHRINE"):
			switch (iParam1)
			{
				case 0:
					return joaat("CONSUMABLE_WHISKEY");
				case 1:
					return joaat("CONSUMABLE_APPLE");
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_GOLDBAR_LARGE");
				case 1:
					return joaat("PROVISION_GOLDBAR_LARGE");
				case 2:
					return joaat("PROVISION_GOLDBAR_LARGE");
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_DISCO_ARROWHEAD_02");
				default:
					break;
			}
			break;
		case joaat("DISCOVER_LOC_OLD_DIRTY_CABIN"):
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_DISCO_FERTILITY_STATUE");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_194(var uParam0, int iParam1)
{
	struct<6> /*48*/ sVar0;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == joaat("EVENT_OBJECT_INTERACTION"))
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &sVar0, 10))
				{
					if (((sVar0.f_2 == iParam1 && sVar0.f_5 == 1) && ENTITY::DOES_ENTITY_EXIST(sVar0.f_1)) && sVar0.f_1 == *uParam0)
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

char* func_195(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			return "DISC_VOL_GRAVE_ARTHUR_I";
		case joaat("DISCOVER_LOC_GRAVE"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_GRAVE_HOSEA_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_LENNY_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY_I";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN_I";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN_I";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE_I";
			}
			break;
		case joaat("DISCOVER_LOC_FACE_TREES"):
			return "DISC_VOL_FACE_TREES_I";
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			return "DISC_VOL_CIV_WAR_I";
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
			return "DISC_VOL_SERPENT_MOUND_I";
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMP_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMP_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMP_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMP_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMP_CLUES_5_I";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUES_5_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUES_6_I";
			}
			break;
	}
	return "";
}

bool func_196(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_197(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_198(var uParam0, int iParam1)
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_RESPECT")))
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_271(uParam0), iParam1);
	}
}

bool func_199(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		return false;
	}
	iVar0 = func_272(uParam1, &(uParam1->f_6), *iParam0, 5);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar1]))
			{
				if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), (*uParam1)[iVar1]))
				{
					PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), (*uParam1)[iVar1], false);
					PLAYER::_0x6ECFC621A168424C((*uParam1)[iVar1], (*uParam1)[iVar1], 0, 0.0f);
				}
			}
			iVar1++;
		}
		return true;
	}
	return false;
}

int func_200(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			sVar0 = "DISCO_DREAM";
			break;
		default:
			break;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			return joaat("DISCO_DREAM");
	}
	return 0;
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			return joaat("DISCO_DRM_DESC");
	}
	return 0;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			return joaat("DISCO_DC_FOUND");
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			return joaat("DISCO_DRM_OBJ");
	}
	return 0;
}

char* func_205(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			switch (iParam1)
			{
				case 0:
					return "TOAST_DREAMCATCHER";
				case 1:
					return "MISSION_COLLECTDREAM";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			switch (iParam1)
			{
				case 0:
					return "hud_toasts";
				case 1:
					return "SP_MISSIONS_13";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_207(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			switch (iParam1)
			{
				case 0:
					return "DISCO_DRM_CHECK1";
				case 1:
					return "DISCO_DRM_CHECK2";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_208(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_209(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -2108030724:
			return joaat("PROVISION_CATHERINES_NECKLACE");
		case -777592153:
		case joaat("DISCOVER_LOC_BLACK_SHEEP"):
			return joaat("PROVISION_GOLDRING");
		case joaat("DISCOVER_LOC_DEAD_MINER"):
		case joaat("DISCOVER_LOC_WHISKEY_TREE"):
			return joaat("PROVISION_GOLD_NUGGET");
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return joaat("PROVISION_DISCO_VIKING_COMB");
		case joaat("DISCOVER_LOC_WATER_DIVINER"):
			return joaat("PROVISION_JEWELRYBAG_SM");
		case joaat("DISCOVER_LOC_METEORITE"):
		case joaat("DISCOVER_LOC_METEOR_HOUSE"):
			return joaat("PROVISION_ASTEROID_CHUNK");
		case joaat("DISCOVER_LOC_BLACK_FLOWER"):
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_RING_PLATINUM");
				case 1:
					return joaat("PROVISION_DISCO_ANCIENT_NECKLACE");
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_210(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243 /*PCF_0x0831CCD1*/, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_211(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_214();
	iVar1 = func_273(iVar0);
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			if (iVar1 > 9 && iVar1 < 16)
			{
				return true;
			}
			break;
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			if (iVar1 >= 0 && iVar1 <= 4)
			{
				return true;
			}
			else if (iVar1 >= 23 && iVar1 <= 24)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_212(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (func_274(uParam0, &iVar0))
	{
		return true;
	}
	return false;
}

bool func_213(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			if (func_275(127, 0, 1))
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

var func_214()
{
	return Global_1899515;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_276(*uParam0);
	iVar1 = func_277(*uParam0);
	iVar2 = func_278(*uParam0);
	iVar3 = func_273(*uParam0);
	iVar4 = func_279(*uParam0);
	iVar5 = func_280(*uParam0);
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
	iVar6 = func_281(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_281(iVar1, iVar0);
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
	func_282(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_216(int iParam0)
{
	return Global_40.f_297[iParam0];
}

void func_217(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_218(int iParam0, var uParam1)
{
	Global_40.f_297[iParam0 + 30] = uParam1;
}

void func_219(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam2]))
	{
		if (bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0[iParam2]);
		}
		else
		{
			OBJECT::DELETE_OBJECT(uParam0[iParam2]);
		}
	}
}

void func_220(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam2]))
	{
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_1[iParam2]));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_1[iParam2]));
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!uParam0->f_12[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12[iVar0]);
		}
		iVar0++;
	}
}

void func_222(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0]);
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	if (!func_283(iParam0))
	{
		return -1;
	}
	return func_284(iParam0);
}

void func_224(int iParam0)
{
	if (!func_285(iParam0))
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

void func_225(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_226(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_227(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_228()
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_HOGTYING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_LASSOED(Global_35))
	{
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

bool func_229()
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		return false;
	}
	if (func_286(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return false;
	}
	return true;
}

bool func_230()
{
	if (func_287(Global_35) && !Global_1392040.f_2)
	{
		return false;
	}
	if (func_288(Global_35) && !Global_1392040.f_2)
	{
		return false;
	}
	return true;
}

bool func_231(bool bParam0)
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			func_289("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_232(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				return false;
		}
		if ((!func_227(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35)) && VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == Global_35)
		{
			return false;
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_290(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_233()
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		return false;
	}
	return true;
}

bool func_234(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_235(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_236(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_118(iParam0, 1);
	func_291(iParam0, 1);
	func_292(iParam0, 128);
}

void func_237(bool bParam0)
{
	if (bParam0)
	{
		func_293(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_294(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_238(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_295(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_296(iParam0);
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
		if (!func_297(iParam0, 1))
		{
			return false;
		}
	}
	return func_298(iParam0, 0, bParam2) >= iParam1;
}

bool func_239(int iParam0)
{
	return func_299(iParam0);
}

int func_240(bool bParam0)
{
	if (func_102() == -1)
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

void func_241()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_ACTION"), false);
}

int func_242()
{
	int iVar0;

	iVar0 = func_300();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_243(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_102() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1.0f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2.0f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_301(MISC::ABSF(fVar1) < 1.0f, func_301(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_244(int iParam0)
{
	if (!func_302(iParam0))
	{
		return false;
	}
	return func_303(iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2)
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

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_247()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_248(int iParam0, bool bParam1, int iParam2)
{
	func_304((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_305(iParam0);
}

void func_249(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_306(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_250(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_307(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_308(iVar5, &iVar2, &iVar0))
			{
				if (!func_295(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_309(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_296(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_242() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_242() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_310();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_252(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_311(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_312(iParam0))
	{
		return 0;
	}
	if (!func_128())
	{
		return 0;
	}
	if (!func_313(iParam0, &iVar0, &iVar1))
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

bool func_254(int iParam0)
{
	int iVar0;

	iVar0 = func_223(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_255(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

char* func_256(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_BOAT_IN_TREE"):
			return "DISC_VOL_BOAT_IN_TREE";
		case joaat("DISCOVER_LOC_STUFFED_GORILLA"):
			return "DISC_VOL_STUFFED_GORILLA";
		case 1464664327:
			return "DISC_VOL_WITCHES_CAULDRON";
		case joaat("DISCOVER_LOC_LOVE_MESSAGE"):
			return "DISC_VOL_LOVE_MESSAGE";
		case joaat("DISCOVER_LOC_WHISPERING_TREES"):
			return "DISC_VOL_WHISPERING_TREES";
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			return "DISC_VOL_CIV_BATTLEFIELD";
		case joaat("DISCOVER_LOC_ABANDONED_MISSION"):
			return "DISC_VOL_ABANDONED_MISSION";
		case joaat("DISCOVER_LOC_SUN_DIAL"):
			return "DISC_VOL_SUN_DIAL";
		case joaat("DISCOVER_LOC_UTE_WICKUP"):
			return "DISC_VOL_UTE_WICKIUP";
		case joaat("DISCOVER_LOC_DESERT_SKELETONS"):
			return "DISC_VOL_DESERT_SKELETONS";
		case joaat("DISCOVER_LOC_OLD_RAILROAD_CAMP"):
			return "DISC_VOL_OLD_RR_CAMP";
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			return "DISC_VOL_STRANGE_STATUES";
		case joaat("DISCOVER_LOC_ABANDONED_FURNITURE"):
			return "DISC_VOL_ABD_FURNITURE";
		case joaat("DISCOVER_LOC_BRUSH_FIRE"):
			return "DISC_VOL_BRUSH_FIRE";
		case joaat("DISCOVER_LOC_CIVIL_WAR_FORT"):
			return "DISC_VOL_CIV_WAR_FORT";
		case joaat("DISCOVER_LOC_CRASHED_AIRSHIP"):
			return "DISC_VOL_CRASHED_AIRSHIP";
		case joaat("DISCOVER_LOC_DERAILED_TRAIN"):
			return "DISC_VOL_DERAILED_TRAIN";
		case joaat("DISCOVER_LOC_DESERT_WAGON"):
			return "DISC_VOL_DESERT_WAGON";
		case joaat("DISCOVER_LOC_DESERTED_FARM"):
			return "DISC_VOL_DESERTED_FARM";
		case joaat("DISCOVER_LOC_FACE_TREES"):
			return "DISC_VOL_FACE_TREES";
		case joaat("DISCOVER_LOC_FIRE_LOOKOUT_TOWER"):
			return "DISC_VOL_FIRE_TOWER";
		case joaat("DISCOVER_LOC_FLYING_MACHINE"):
			return "DISC_VOL_FLY_MACHINE";
		case joaat("DISCOVER_LOC_FOSSILIZED_MAN"):
			return "DISC_VOL_FOSSIL_MAN";
		case joaat("DISCOVER_LOC_GIANT_REMAINS"):
			return "DISC_VOL_GIANT_REMAINS";
		case joaat("DISCOVER_LOC_GRAVESTONE_TREE"):
			return "DISC_VOL_GRAVESTONE_TREE";
		case joaat("DISCOVER_LOC_MAMMOTH"):
			return "DISC_VOL_MAMMOTH";
		case joaat("DISCOVER_LOC_OBELISK"):
			return "DISC_VOL_OBELISK";
		case joaat("DISCOVER_LOC_OLD_GRAVESTONES"):
			return "DISC_VOL_GRAVESTONES";
		case joaat("DISCOVER_LOC_OLD_WORLD_SCRIPT"):
			return "DISC_VOL_OLD_SCRIPT";
		case joaat("DISCOVER_LOC_ONE_ROOM_CHURCH"):
			return "DISC_VOL_ONE_ROOM_CHURCH";
		case 173549940:
			return "DISC_VOL_PILE_OF_SKULLS";
		case joaat("DISCOVER_LOC_POTS_TREE"):
			return "DISC_VOL_POTS_TREE";
		case joaat("DISCOVER_LOC_ROPE_BRIDGE"):
			return "DISC_VOL_ROPE_BRIDGE";
		case joaat("DISCOVER_LOC_SERPENT_MOUND"):
			return "DISC_VOL_SERPENT_MOUND";
		case joaat("DISCOVER_LOC_SPERM_WHALE"):
			return "DISC_VOL_SPERM_WHALE";
		case joaat("DISCOVER_LOC_UTOPIAN_COLONY"):
			return "DISC_VOL_UTOPIAN_COLONY";
		case joaat("DISCOVER_LOC_WHALE_BONE"):
			return "DISC_VOL_WHALE_BONE";
		case joaat("DISCOVER_LOC_QUARRY"):
			return "DISC_VOL_QUARRY";
		case joaat("DISCOVER_LOC_STONEHENGE"):
			return "DISC_VOL_STONEHENGE";
		case joaat("DISCOVER_LOC_MOUNTAIN_CLIMB"):
			return "DISC_VOL_MOUNTAIN_CLIMB";
		case joaat("DISCOVER_LOC_FACTORY_IN_SWAMP"):
			return "DISC_VOL_SWAMP_FACTORY";
		case joaat("DISCOVER_LOC_EARLY_SETTLERS"):
			return "DISC_VOL_EARLY_SETTLERS";
		case joaat("DISCOVER_LOC_ABANDONED_CHURCH"):
			return "DISC_VOL_ABANDON_CHURCH";
		case joaat("DISCOVER_LOC_TRADING_POST"):
			return "DISC_VOL_TRADING_POST";
		case joaat("DISCOVER_LOC_GHOST_TOWN"):
			return "DISC_VOL_GHOST_TOWN";
		case joaat("DISCOVER_LOC_HIDDEN_TUNNEL"):
			return "DISC_VOL_HIDDEN_TUNNEL";
		case -1505275983:
			return "DISC_VOL_WARPED_TREE";
		case joaat("DISCOVER_LOC_REGISTER_ROCK"):
			return "DISC_VOL_REGISTER_ROCK";
		case joaat("DISCOVER_LOC_PHONOGRAPH_HOUSE"):
			return "DISC_VOL_PHONOGRAPH";
		case joaat("DISCOVER_LOC_POWDER_KEG"):
			return "DISC_VOL_POWDER_KEG";
		case joaat("DISCOVER_LOC_BROKEN_BRIDGE"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_BROKEN_BRIDGE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_BROKEN_BRIDGE_2";
			}
			break;
		case joaat("DISCOVER_LOC_BROKEN_WAGONS"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_BROKEN_WAGON_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_BROKEN_WAGON_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_BROKEN_WAGON_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_BROKEN_WAGON_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_BROKEN_WAGON_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_BROKEN_WAGON_6";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_BROKEN_WAGON_7";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_BROKEN_WAGON_8";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_BROKEN_WAGON_9";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_BROKEN_WAGON_10";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISC_VOL_BROKEN_WAGON_11";
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPIT"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_OLD_FIREPIT_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_OLD_FIREPIT_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_OLD_FIREPIT_3";
			}
			break;
		case joaat("DISCOVER_LOC_OLD_FIREPLACE"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_OLD_FIREPLACE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_OLD_FIREPLACE_2";
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_HORNETS_NEST_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_HORNETS_NEST_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_HORNETS_NEST_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_HORNETS_NEST_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_HORNETS_NEST_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_HORNETS_NEST_6";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_HORNETS_NEST_7";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_HORNETS_NEST_8";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_HORNETS_NEST_9";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_HORNETS_NEST_10";
			}
			break;
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			return "DISC_VOL_GRAVE_ARTHUR";
		case joaat("DISCOVER_LOC_GRAVE"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY";
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_HOSEA_LENNY";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_GRAVE_1";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISC_VOL_GRAVE_2";
			}
			break;
		case joaat("DISCOVER_LOC_DREAMCATCHERS"):
			if (uParam0->f_4 == 0)
			{
				return "DISCO_DREAMCATCHERS_01";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_DREAMCATCHERS_02";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_DREAMCATCHERS_03";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_DREAMCATCHERS_04";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_DREAMCATCHERS_05";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_DREAMCATCHERS_06";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_DREAMCATCHERS_07";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_DREAMCATCHERS_08";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_DREAMCATCHERS_09";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISCO_DREAMCATCHERS_10";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISCO_DREAMCATCHERS_11";
			}
			else if (uParam0->f_4 == 11)
			{
				return "DISCO_DREAMCATCHERS_12";
			}
			else if (uParam0->f_4 == 12)
			{
				return "DISCO_DREAMCATCHERS_13";
			}
			else if (uParam0->f_4 == 13)
			{
				return "DISCO_DREAMCATCHERS_14";
			}
			else if (uParam0->f_4 == 14)
			{
				return "DISCO_DREAMCATCHERS_15";
			}
			else if (uParam0->f_4 == 15)
			{
				return "DISCO_DREAMCATCHERS_16";
			}
			else if (uParam0->f_4 == 16)
			{
				return "DISCO_DREAMCATCHERS_17";
			}
			else if (uParam0->f_4 == 17)
			{
				return "DISCO_DREAMCATCHERS_18";
			}
			else if (uParam0->f_4 == 18)
			{
				return "DISCO_DREAMCATCHERS_19";
			}
			else if (uParam0->f_4 == 19)
			{
				return "DISCO_DREAMCATCHERS_20";
			}
			break;
		case joaat("DISCOVER_LOC_VAMPIRE_CLUES"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMPIRE_CLUE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMPIRE_CLUE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMPIRE_CLUE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMPIRE_CLUE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMPIRE_CLUE_5";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUE_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUE_6";
			}
			break;
		case joaat("DISCOVER_LOC_KILL_ZONE"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_KILL_ZONE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_KILL_ZONE_2";
			}
			break;
		case joaat("DISCOVER_LOC_TRAIL_TREES"):
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_TRAIL_TREES_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_TRAIL_TREES_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_TRAIL_TREES_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_TRAIL_TREES_4";
			}
			break;
	}
	return "";
}

int func_257(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_314(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_258(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_259(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_258(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_HAS_METAPED_OUTFIT_LOADED(iVar1);
}

void func_261(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_262(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> /*16*/ sVar8;
	struct<6> /*48*/ sVar10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_315(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_22(uParam1->f_6))
		{
		}
	}
	bVar0 = func_128();
	if (*uParam1)
	{
		if (bVar0 && !func_103(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_316(5))
			{
				func_317(5);
				func_318(5);
				func_319(0);
				func_320(0);
			}
		}
	}
	if (func_321(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_103(Global_1835011[37 /*74*/].f_1, 1)) && !func_103(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_103(Global_1835011[43 /*74*/].f_1, 1)) && !func_103(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_322(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_323(iVar1))
	{
		bVar3 = true;
		if (func_324(iVar1))
		{
			bVar4 = true;
		}
		if (func_325(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_326(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_316(0) && func_316(1))
			{
				func_327(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_328())
			{
				func_329();
			}
			func_319(0);
			func_320(0);
			func_330(uParam1->f_6);
		}
	}
	if (!func_323(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_331(uParam1->f_10) == 0 || func_332(uParam1->f_10) == 0) || func_333(uParam1->f_10) == 0)
			{
				func_334(uParam1->f_10);
			}
			func_335(uParam1->f_10);
			func_336(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_322(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_323(iVar1))
	{
		bVar3 = true;
		if (func_324(iVar1))
		{
			bVar4 = true;
		}
		if (func_325(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_22(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_337(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			sVar8 = { func_338(uParam1->f_10) /*2*/ };
			sVar10 = { func_339() /*6*/ };
			func_340(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186 /*PCF_CorpseIsPersistent*/, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_341(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_342(uParam1->f_10);
		if (uParam1->f_2 && !func_22(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_UNHITCH_HORSE(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_343(uParam1->f_10);
	if (func_341(uParam1->f_10))
	{
		iVar16 = func_344(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_263(int iParam0)
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

bool func_264(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_265()
{
	return func_239(1);
}

Vector3 func_266(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_STRANGE_STATUES"):
			if (iParam1 == 0)
			{
				return { 0.0f, 0.0f, 102.86f };
			}
			else if (iParam1 == 1)
			{
				return { 0.0f, 0.0f, -102.86f };
			}
			else if (iParam1 == 2)
			{
				return { 0.0f, 0.0f, 51.43f };
			}
			else if (iParam1 == 3)
			{
				return { 0.0f, 0.0f, 0.0f };
			}
			else if (iParam1 == 4)
			{
				return { 0.0f, 0.0f, 154.29f };
			}
			else if (iParam1 == 5)
			{
				return { 0.0f, 0.0f, -154.29f };
			}
			else if (iParam1 == 6)
			{
				return { 0.0f, 0.0f, -51.43f };
			}
			else if (iParam1 == 7)
			{
				return { 0.0f, 0.0f, -135.0f };
			}
			break;
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_267(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

bool func_268(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

float func_269(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_270(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	if (func_102() != -1)
	{
		return;
	}
	if (!func_244(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_345(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_346(iParam0), iVar0);
	func_348(func_347(iParam0), (100.0f * (BUILTIN::TO_FLOAT(iVar0) / 100.0f)), 0);
	if (((fParam1 <= func_349(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_350(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_350(func_351(iParam0), 1);
	}
	sVar1 = func_352(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_271(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_GRAVE_ARTHUR"):
			return joaat("ACH_RESPECT_ARTHUR");
		case joaat("DISCOVER_LOC_GRAVE"):
			if (uParam0->f_4 == 0)
			{
				return joaat("ACH_RESPECT_ARTHUR");
			}
			else if (uParam0->f_4 == 1)
			{
				return joaat("ACH_RESPECT_JENNY");
			}
			else if (uParam0->f_4 == 2)
			{
				return joaat("ACH_RESPECT_HORSEA");
			}
			else if (uParam0->f_4 == 3)
			{
				return joaat("ACH_RESPECT_LENNY");
			}
			else if (uParam0->f_4 == 4)
			{
				return joaat("ACH_RESPECT_SEAN");
			}
			else if (uParam0->f_4 == 5)
			{
				return joaat("ACH_RESPECT_DAVEY");
			}
			else if (uParam0->f_4 == 6)
			{
				return joaat("ACH_RESPECT_KIERAN");
			}
			else if (uParam0->f_4 == 7)
			{
				return joaat("ACH_RESPECT_SUSAN");
			}
			else if (uParam0->f_4 == 8)
			{
				return joaat("ACH_RESPECT_EAGLE_FLIES");
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_272(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if ((*uParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*uParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_273(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_274(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case joaat("DISCOVER_LOC_MEDITATING_MONK"):
			switch (*iParam1)
			{
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
					return true;
			}
			break;
		case joaat("DISCOVER_LOC_CIV_WAR_BATTLEFIELD"):
			switch (*iParam1)
			{
				case joaat("THUNDER"):
				case joaat("THUNDERSTORM"):
					return true;
			}
			break;
		case joaat("DISCOVER_LOC_GHOST_TRAIN"):
			switch (*iParam1)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
					return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_275(int iParam0, bool bParam1, bool bParam2)
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
		if (func_353())
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
		iVar0 = func_354(Global_1898164.f_1[0 /*5*/]);
		if (func_255(iVar0) && func_355(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_283(Global_1898164.f_1[0 /*5*/]))
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

var func_276(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_356(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_277(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_278(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_279(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_280(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_281(int iParam0, int iParam1)
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

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_357(uParam0, iParam6);
	func_358(uParam0, iParam5);
	func_359(uParam0, iParam4);
	func_360(uParam0, iParam3);
	func_361(uParam0, iParam2);
	func_362(uParam0, iParam1);
}

bool func_283(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_284(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_285(int iParam0)
{
	return func_235(iParam0, 2);
}

bool func_286(int iParam0)
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

int func_287(int iParam0)
{
	return func_364(iParam0, 4) | func_364(iParam0, 5);
}

bool func_288(int iParam0)
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

int func_289(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_290(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_MOUNT(Global_35);
	if (!func_365(Global_35))
	{
		return false;
	}
	if (!func_227(iParam0, 16) && !func_366(iVar0, 0))
	{
		return false;
	}
	return true;
}

void func_291(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_292(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_295(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_296(int iParam0)
{
	Vector3 vVar0;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_295(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_367(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_368("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_369(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_370(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_371(iVar1);
				return true;
			}
			iVar3++;
		}
		func_371(iVar1);
	}
	return false;
}

int func_298(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_296(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_367(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_372(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_240(bParam2), iParam0, false);
	return iVar2;
}

bool func_299(int iParam0)
{
	return func_39(Global_1935496.f_27, iParam0);
}

int func_300()
{
	return Global_40.f_11095.f_35;
}

float func_301(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_302(int iParam0)
{
	if (iParam0 == 0)
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

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_304(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_373(bParam1);
	}
}

void func_305(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_306(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_307(int iParam0)
{
	Vector3 vVar0;

	if (!func_374(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_308(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_374(23, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -57097983;
		sVar0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			sVar0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam1 = uVar5;
			sVar0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_309(int iParam0)
{
	return iParam0;
}

int func_310()
{
	int iVar0;

	iVar0 = func_242();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_311(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_312(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_313(int iParam0, int iParam1, int iParam2)
{
	if (!func_312(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

void func_314(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_375(iParam1))
		{
			func_174(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_376(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502 /*PCF_0x5B64E56A*/, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_377(iParam0, 0);
			bVar0 = true;
		}
		func_378(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_315(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_316(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_333(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_317(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_323(iParam0))
	{
		return;
	}
	iVar0 = func_322(iParam0);
	func_379(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_380(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_381(iParam0, 0);
	func_382(iParam0);
}

void func_318(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	strcpy_s(&(Global_40.f_1095.f_1[iParam0 /*436*/]), 64, "");
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_383(&sVar0);
	func_384(iParam0, sVar0);
	func_385(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_386(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_387(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_388(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_389(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_390(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_391(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_392(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_393(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0.0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_31 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_34 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_319(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_320(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_321(Vector3 vParam0)
{
	return func_394(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_322(int iParam0)
{
	iParam0 = func_315(iParam0);
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

bool func_323(int iParam0)
{
	iParam0 = func_315(iParam0);
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

bool func_324(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_323(iParam0))
	{
		return false;
	}
	iVar0 = func_322(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_325(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_323(iParam0))
	{
		return false;
	}
	iVar0 = func_322(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_326(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_323(iParam0))
	{
		return;
	}
	iVar0 = func_322(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_327(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_395(iParam0);
	func_395(iParam0);
	func_396(iParam0, iParam1);
	func_397(iParam0, iParam1);
	func_398(iParam0, iParam1);
	iVar1 = func_322(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_399(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar1)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	iVar3 = func_322(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_399(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar3)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_400();
}

bool func_328()
{
	int iVar0;

	iVar0 = func_401();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_329()
{
	int iVar0;

	iVar0 = func_401();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_402(0);
}

void func_330(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

int func_331(int iParam0)
{
	iParam0 = func_315(iParam0);
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

int func_332(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_333(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_334(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_403(&uVar0, &uVar1, &uVar2);
	func_404(iParam0, uVar0);
	func_405(iParam0, uVar1);
	func_406(iParam0, uVar2);
	func_407(iParam0, 1);
	func_408(iParam0, 1);
}

void func_335(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_409(iParam0, 1);
}

void func_336(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_337(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_410(iParam0, 1);
}

struct<2> /*16*/ func_338(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_411(iParam0, &uVar2))
	{
	}
	if (!func_412(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_339()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_413(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_413(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_413(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_413(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_413(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_413(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_340(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return;
	}
	func_414(iParam0);
	func_415(iParam0, uParam1);
	func_416(iParam0);
	func_417(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_418(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

bool func_341(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_342(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_343(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_344(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_382(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_382(iParam0);
	}
}

int func_344(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

int func_345(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

int func_346(int iParam0)
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

int func_347(int iParam0)
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

void func_348(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_419(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_349(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100.0f);
	return ((fVar0 * 200.0f) - 100.0f);
}

void func_350(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_420(iParam0, &iVar0, &iVar1);
	if (!func_421(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_422(iVar0, iVar1);
}

int func_351(int iParam0)
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

char* func_352(int iParam0)
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

bool func_353()
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

int func_354(int iParam0)
{
	if (!func_283(iParam0))
	{
		return -1;
	}
	return func_424(func_423(iParam0));
}

bool func_355(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_356(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_357(var uParam0, int iParam1)
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

void func_358(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 62914560);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_359(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_277(*uParam0);
	iVar1 = func_276(*uParam0);
	if (iParam1 < 1 || iParam1 > func_281(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= (*uParam0 & 4063232);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 126976);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_361(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 4032);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_362(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 63);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

int func_363(int iParam0)
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

int func_364(int iParam0, int iParam1)
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

bool func_365(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_366(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_296(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_425(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_426(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_368(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_240(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_369(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_370(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_371(int iParam0)
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

int func_372(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_427(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_429(&sVar0, func_428(0));
	}
	if (!func_430(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_371(iVar18);
	return iVar19;
}

void func_373(bool bParam0)
{
	func_431(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
}

bool func_374(int iParam0, var uParam1)
{
	if (!func_432(iParam0))
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

bool func_375(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_376(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_377(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_378(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1.0f);
	}
}

void func_379(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_322(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_433(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar2, bVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = sVar2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_380(int iParam0)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	if (!func_435())
	{
		return true;
	}
	return false;
}

void func_381(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_382(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

void func_383(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_384(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_436(iParam0, sParam1.f_0))
	{
	}
	if (!func_437(iParam0, sParam1.f_1))
	{
	}
}

void func_385(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_438(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_386(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_387(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_388(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0.0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0.0f;
		}
		iVar0++;
	}
}

void func_389(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_390(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_391(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_392(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_393(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_395(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

void func_396(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_397(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_398(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_439(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_439(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_440(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_441(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_442(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_443(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, iParam0, false);
	PED::_0xB8B6430EAD2D2437(iParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(iParam0, false);
	if (func_444(iParam0))
	{
		iVar3 = func_445(iParam0);
		if (func_446(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324 /*PCF_0x8D1AEDEF*/, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211 /*PCF_GiveAmbientDefaultTaskIfMissionPed*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208 /*PCF_0x010FB89C*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209 /*PCF_0xC44343FA*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400 /*PCF_0x3EECBCF6*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136 /*PCF_CannotBeMounted*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312 /*PCF_DisableHorseGunshotFleeResponse*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113 /*PCF_DisableShockingEvents*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277 /*PCF_0x5FE313B3*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319 /*PCF_EnableAsVehicleTransitionDestination*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6 /*PCF_DontInfluenceWantedLevel*/, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_400()
{
	if (func_323(0))
	{
		func_447(0);
	}
	if (func_323(1))
	{
		func_447(1);
	}
	if (func_323(5))
	{
		func_447(5);
	}
	if (func_323(6))
	{
		func_395(6);
	}
}

int func_401()
{
	return Global_1900383.f_393;
}

void func_402(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_403(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_128())
	{
		if (func_121())
		{
			bVar0 = false;
			if (!func_103(Global_1835011[15 /*74*/].f_1, 1) && !func_244(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_448();
				*iParam1 = func_449();
				*uParam2 = func_450();
				return 1;
			}
			else
			{
				*uParam0 = func_451();
				*iParam1 = func_452();
				*uParam2 = func_453();
				return 1;
			}
		}
		else if (func_15())
		{
			if (!func_103(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_454();
				*iParam1 = func_455();
				*uParam2 = func_456();
				return 1;
			}
			else
			{
				*uParam0 = func_457();
				*iParam1 = func_458();
				*uParam2 = func_459();
				return 1;
			}
		}
	}
	else if (func_121())
	{
		*uParam0 = func_460();
		*iParam1 = func_461();
		*uParam2 = func_462();
		return 1;
	}
	else if (func_15())
	{
		*uParam0 = func_463();
		*iParam1 = func_464();
		*uParam2 = func_465();
		return 1;
	}
	return 0;
}

void func_404(int iParam0, var uParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_405(int iParam0, var uParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_406(int iParam0, var uParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_407(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_331(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_403(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_466(iParam1);
	iVar5 = func_322(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar5, iVar7);
}

void func_409(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 |= iParam1;
}

bool func_410(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 & iParam1) != 0;
}

bool func_411(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_439(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_467(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_295(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_412(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_439(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_467(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_295(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_413(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_468(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_469() /*4*/ };
	*uParam1 = func_467(sVar0, iParam0, 0);
	if (!func_295(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_414(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_415(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_470(iParam0, *uParam1);
	func_470(iParam0, uParam1->f_1);
}

void func_416(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_417(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_470(iParam0, *uParam1);
	func_470(iParam0, uParam1->f_1);
	func_470(iParam0, uParam1->f_2);
	func_470(iParam0, uParam1->f_3);
	func_470(iParam0, uParam1->f_4);
	func_470(iParam0, uParam1->f_5);
}

int func_418(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
	return 1;
}

char* func_419(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_471(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_471(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

void func_420(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_421(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_472(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_473(iParam0))
	{
		return false;
	}
	if (func_474(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_475(iParam0, 1)) || func_476((1 << 15)))
	{
		if (!func_475(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_477())
	{
		return false;
	}
	return true;
}

void func_422(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_423(int iParam0)
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

int func_424(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_425(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_426(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<18> /*144*/ func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_428(bool bParam0)
{
	int iVar0;

	iVar0 = func_240(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_479(joaat("CARRIED_WEAPONS"), func_478(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_479(joaat("CARRIED_WEAPONS"), func_478(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_479(joaat("CARRIED_WEAPONS"), func_478(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_429(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_430(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_240(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_431(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_432(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_433(int iParam0)
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

bool func_434(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_435()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_436(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_439(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_479(iParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_480(sVar29, 1);
}

bool func_437(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_439(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_479(iParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_480(sVar29, 1);
}

void func_438(var uParam0)
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

bool func_439(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_481(iParam0))
	{
		return false;
	}
	iVar0 = func_440(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_478(0) /*4*/ };
	if (!func_482(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_483(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return joaat("SLOTID_TEMPORARY_HORSE");
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_441(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_484(bParam10))
	{
		return func_485(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_486(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_487(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_240(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_480(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_442(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_484(bParam9))
	{
		return func_488(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_487(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_486(sParam0, &sVar0, bParam9, 1) || !func_486(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_487(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_240(0);
	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(iVar28, &sParam0, &sParam4))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam0, sVar14.f_10 | iParam8))
	{
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam4, sVar0.f_10 | iParam8))
	{
	}
	return true;
}

bool func_443(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_489(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_445(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_445(int iParam0)
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

bool func_446(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_447(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	Vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_322(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_410(iParam0, 64))
	{
		func_395(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_244(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_490(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_395(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_491(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_492(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_410(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_493(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	fVar15 = func_494(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_495(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1.0f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1.0f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_496(Global_1900383[iParam0 /*45*/].f_26);
		func_497(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == joaat("BLIP_MODIFIER_OBJECTIVE"))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	if (func_264(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		}
		else if (iVar5 == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}
	iVar21 = func_491(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_448()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_449()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_450()
{
	return 1;
}

int func_451()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_452()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_453()
{
	return 1;
}

int func_454()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_455()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_456()
{
	return 2;
}

int func_457()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_458()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_459()
{
	return 1;
}

int func_460()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_461()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_462()
{
	return 1;
}

int func_463()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_464()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_465()
{
	return 1;
}

void func_466(int iParam0)
{
	if (func_498() < iParam0)
	{
		func_499(iParam0);
	}
}

int func_467(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_500(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_468(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_501(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_502(iParam0);
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

struct<4> /*32*/ func_469()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_478(0) /*4*/ };
	return func_479(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

void func_470(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == joaat("HORSE_EQUIPMENT_MANE_DEFAULT") || iParam1 == joaat("HORSE_EQUIPMENT_TAIL_DEFAULT"))
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, false, false);
}

char* func_471(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_472(int iParam0, int iParam1)
{
	if (func_102() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_473(int iParam0)
{
	if (func_102() != -1)
	{
		if (func_475(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_475(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_475(iParam0, (1 << 16)) && !func_475(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_475(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_475(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_475(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_476(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_477()
{
	return Global_1905944.f_5694;
}

struct<4> /*32*/ func_478(bool bParam0)
{
	return func_479(joaat("CHARACTER"), func_503(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_479(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_295(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_240(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_480(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_484(0))
	{
		return func_504(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_486(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_240(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_481(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_440(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_478(0) /*4*/ };
	if (func_505(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_482(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_240(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_483(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_240(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_484(bool bParam0)
{
	if (func_102() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_240(bParam0));
}

int func_485(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> /*96*/ sVar0;
	int iVar14;
	int iVar15;
	struct<17> /*136*/ sVar16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_486(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_487(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_506(sVar0.f_4, sParam4, iParam8, 0);
	iVar15 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(sVar0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + sVar0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			sVar0.f_11 = (iVar15 - iVar14);
		}
	}
	sVar16 = { func_507(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_508(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_486(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_240(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_487(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_488(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	struct<17> /*136*/ sVar28;
	struct<17> /*136*/ sVar45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	if (func_487(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_486(sParam0, &sVar0, 1, 0) || !func_486(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_487(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_507(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_507(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_509(iVar62, joaat("MOVEITEMS"), &sVar28) && func_509(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_510(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_508(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_508(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

bool func_489(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

void func_490(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_512(func_511(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_121())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_15();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_491(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_492(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_512(func_511(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_121())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_15())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_493(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_494(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_495(int iParam0)
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

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_331(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_491(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_491(iParam0) + 1;
	fVar6 = func_513(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_514(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_496(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
}

void func_497(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

int func_498()
{
	return Global_40.f_1095.f_3135;
}

void func_499(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_500(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_240(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_486(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_501(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_502(int iParam0)
{
	int iVar0;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_501(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

struct<4> /*32*/ func_503()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_504(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
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
	if (!func_486(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_296(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_515(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_516(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_517(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_518(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_507(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_508(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_505(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_240(bParam2), uParam0, iParam1);
}

int func_506(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_479(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_240(bParam6), &sVar0, false);
	return iVar4;
}

struct<17> /*136*/ func_507(var uParam0)
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

int func_508(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_509(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_510(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_510(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_510(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_509(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_510(int iParam0, int iParam1)
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
	func_519(iParam0, iParam1);
}

char* func_511(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_520(37, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1224589.f_16[iParam0])
	{
		return sVar0;
	}
	if (func_520(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_512(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_521(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_513(int iParam0)
{
	iParam0 = func_315(iParam0);
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

float func_514(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<29> /*232*/ func_515(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_240(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_507(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_516(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_522(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_510(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_510(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_510(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_517(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_240(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_507(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_518(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_523(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_510(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_510(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_510(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_519(int iParam0, int iParam1)
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

bool func_520(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_524(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_525())
	{
		return func_524(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_524(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_521(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_522(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_523(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_524(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_525()
{
	return Global_1109000.f_245;
}

