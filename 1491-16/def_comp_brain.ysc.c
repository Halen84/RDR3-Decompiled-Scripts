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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
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
	var uLocal_102 = 3;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = -1;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = -1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	uLocal_14 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&uLocal_14);
	}
	func_2(&uLocal_14, 0);
	while (!func_3(&uLocal_14, &uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_14);
}

void func_1(var uParam0)
{
	if (func_4(*uParam0, 2, 1))
	{
		func_5(*uParam0);
	}
	if (func_6(*uParam0, 16, 0))
	{
		func_7(*uParam0, 16, 1);
		Global_1360165[*uParam0 /*1157*/].f_129 = 0;
		func_8(*uParam0, 0);
		func_9(*uParam0, 4, 0);
		func_10(*uParam0);
		func_11(*uParam0);
		func_12(*uParam0, 37, 1);
	}
	if (bLocal_138)
	{
	}
	func_10(*uParam0);
	func_13(*uParam0);
	func_14(uParam0);
	func_15(uParam0);
	func_12(*uParam0, 65, 0);
	if (func_16(uParam0->f_106))
	{
		func_17(&(uParam0->f_106), 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		if (func_18(*uParam0, 0))
		{
			func_19(uParam0);
		}
		func_20(*uParam0, 1, 1, 1, 0);
	}
	if (!func_21(*uParam0))
	{
		if (bLocal_141)
		{
			func_22(*uParam0, 0, 1, 1, 0);
		}
	}
	func_23(*uParam0);
	func_24(*uParam0);
	func_25(uParam0, (1 << 27));
	func_25(uParam0, (1 << 29));
	func_12(*uParam0, 27, 0);
	Global_40.f_4942[*uParam0 /*60*/].f_48 = -15;
	Global_1360165[*uParam0 /*1157*/].f_11 = 0;
	func_2(uParam0, 0);
	func_26(*uParam0, 22, 0);
	func_12(*uParam0, 24, 0);
	func_12(*uParam0, 4, 0);
	func_12(*uParam0, 26, 0);
	func_12(*uParam0, 1, 0);
	func_12(*uParam0, 2, 0);
	func_28(&(Global_1359489.f_4), func_27(*uParam0));
	Global_1360165[*uParam0 /*1157*/].f_3 = 0;
	Global_1360165[*uParam0 /*1157*/].f_128 = 0;
	func_29(*uParam0, 0);
	func_30(*uParam0, 32, 0);
	func_31(uParam0);
	func_32(*uParam0, joaat("COMMENT_ON_FOOD_GOOD"));
	func_32(*uParam0, joaat("COMMENT_ON_FOOD_BAD"));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
}

bool func_3(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(uParam0->f_5);
	bVar1 = func_6(*uParam0, 16, 0);
	bVar2 = func_33(uParam0, &bVar1);
	bLocal_138 = (bVar0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_5));
	if (!bVar2 && func_34(uParam0))
	{
		return true;
	}
	if (uParam0->f_1 > 0)
	{
		if (!func_35(*uParam0))
		{
			func_2(uParam0, 0);
		}
	}
	if (uParam0->f_1 > 1)
	{
		bVar3 = Global_1359489.f_10 == *uParam0;
		if (bVar3)
		{
			func_36(uParam0);
			if (bLocal_138)
			{
				bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true);
				if (bLocal_139)
				{
					func_38(&(Global_1359489.f_4), func_27(*uParam0));
				}
				else
				{
					func_28(&(Global_1359489.f_4), func_27(*uParam0));
				}
			}
			else
			{
				bLocal_139 = false;
			}
			if (!bLocal_139)
			{
				if (func_4(*uParam0, 2, 1))
				{
					if (bVar2)
					{
						func_12(*uParam0, 2, 1);
					}
					else
					{
						return true;
					}
				}
			}
			if (func_4(*uParam0, 44, 1) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[*uParam0 /*1157*/].f_1156, false))
			{
				Global_1360165[*uParam0 /*1157*/].f_1156 = 0;
				func_12(*uParam0, 44, 1);
			}
			func_39(uParam0);
		}
		if (func_40(uParam0, &bVar0) || ((!bVar2 && bVar3) && func_41(uParam0)))
		{
			return true;
		}
		func_42(uParam0, &bVar1);
		if (*uParam0 == 20 && iLocal_143 == 6)
		{
			func_43(uParam0);
		}
		if (bVar3)
		{
			uParam0->f_6 = func_44(*uParam0, 0);
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				iVar4 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				if (iVar4 != Global_1360165[*uParam0 /*1157*/].f_47)
				{
					Global_1360165[*uParam0 /*1157*/].f_47 = iVar4;
					strcpy_s(&(Global_1360165[*uParam0 /*1157*/].f_48), 64, PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, Global_1360165[*uParam0 /*1157*/].f_47));
					Global_1360165[*uParam0 /*1157*/].f_56 = 1;
				}
			}
			func_45(uParam0);
			func_46(uParam0, &bVar1);
			if (Global_1360165[*uParam0 /*1157*/].f_142 != -15)
			{
				if (func_47(Global_1360165[*uParam0 /*1157*/].f_142))
				{
					Global_1360165[*uParam0 /*1157*/].f_141 = 0;
					Global_1360165[*uParam0 /*1157*/].f_142 = -15;
				}
			}
			if (uParam0->f_1 != 6 && uParam0->f_1 != 7)
			{
				func_48(uParam0);
				func_49(uParam0, &bVar1);
			}
			func_50(uParam0);
			func_51(uParam0);
			if (func_4(*uParam0, 13, 1))
			{
				func_52(*uParam0);
				func_12(*uParam0, 13, 0);
			}
			if (func_53(*uParam0, 0, 0))
			{
				func_26(*uParam0, 26, 0);
			}
			else
			{
				func_12(*uParam0, 26, 0);
			}
			if (uParam0->f_102 == 17)
			{
				func_26(*uParam0, 67, 0);
			}
			else
			{
				func_12(*uParam0, 67, 0);
			}
		}
		func_54(uParam0, uParam1);
	}
	func_55(uParam0);
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_56(*uParam0))
			{
				func_1(uParam0);
			}
			if (!func_35(*uParam0))
			{
				func_57(*uParam0);
			}
			if (MISC::IS_BIT_SET(uParam1->f_6, 0))
			{
				PED::_RESERVE_AMBIENT_PEDS(2);
			}
			else if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() <= 1)
			{
				PED::_RESERVE_AMBIENT_PEDS(1);
			}
			else
			{
				PED::_RESERVE_AMBIENT_PEDS(2);
			}
			if (func_58(*uParam0) != 0)
			{
				func_59(*uParam0, func_58(*uParam0));
			}
			func_52(*uParam0);
			if (!func_60(uParam1->f_3))
			{
				PERSCHAR::_0x59C7AD6FEA2AC449(Global_1360165[*uParam0 /*1157*/].f_1, uParam1->f_3);
			}
			else
			{
				PERSCHAR::_0xD4B614179BCD0654(Global_1360165[*uParam0 /*1157*/].f_1);
			}
			uParam0->f_6 = func_44(*uParam0, 0);
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				Global_1360165[*uParam0 /*1157*/].f_47 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				strcpy_s(&(Global_1360165[*uParam0 /*1157*/].f_48), 64, PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, Global_1360165[*uParam0 /*1157*/].f_47));
				Global_1360165[*uParam0 /*1157*/].f_56 = 1;
			}
			if (*uParam0 != 12)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(func_61(*uParam0), func_62(Global_40.f_4942[*uParam1 /*60*/].f_3, *uParam0));
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam1 /*60*/].f_3;
			}
			if (*uParam0 == 24 || *uParam0 == 25)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(func_61(*uParam0), joaat("META_OUTFIT_DEFAULT"));
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam1 /*60*/].f_3;
			}
			func_51(uParam0);
			if (MISC::IS_BIT_SET(uParam1->f_6, 1))
			{
				func_26(*uParam0, 44, 0);
				bVar2 = true;
			}
			if (func_63(Global_1835011[0 /*74*/].f_1, 1) && func_64(*uParam1, (1 << 31)))
			{
				func_65(*uParam1, (1 << 31), 0);
			}
			if (uParam1->f_1 != 0)
			{
				if (func_66(*uParam1, uParam1->f_1))
				{
					func_68(*uParam1, uParam1->f_1, !func_67(Global_1360165[*uParam0 /*1157*/], 0));
				}
			}
			else
			{
				func_68(*uParam1, Global_40.f_4942[*uParam1 /*60*/].f_3, !func_67(Global_1360165[*uParam0 /*1157*/], 0));
			}
			iLocal_143 = func_69();
			func_70(&(uParam0->f_76));
			func_70(&(uParam0->f_79));
			func_71(uParam0);
			func_2(uParam0, 1);
		case 1:
			if (!func_67(Global_1360165[*uParam0 /*1157*/], 0))
			{
				if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY() && func_72(&(uParam0->f_76)) < 5000)
				{
					func_70(&(uParam0->f_79));
					return false;
				}
				uParam0->f_5 = func_74(*uParam0, MISC::IS_BIT_SET(uParam1->f_6, 2), MISC::IS_BIT_SET(uParam1->f_6, 3), func_73(uParam0, bVar2));
			}
			if (func_67(Global_1360165[*uParam0 /*1157*/], 0) && uParam0->f_5 == PERSCHAR::_GET_PERSCHAR_PED_INDEX(Global_1360165[*uParam0 /*1157*/].f_1))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[*uParam0 /*1157*/].f_1))
				{
					if (MISC::IS_BIT_SET(uParam1->f_6, 3))
					{
						if (!MISC::IS_BIT_SET(uParam1->f_6, 4))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], true);
							MISC::SET_BIT(&(uParam1->f_6), 4);
						}
						return false;
					}
				}
				else if (MISC::IS_BIT_SET(uParam1->f_6, 4))
				{
					PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], false);
					MISC::CLEAR_BIT(&(uParam1->f_6), 4);
				}
				Global_1360165[*uParam0 /*1157*/] = uParam0->f_5;
				func_75(uParam0);
				if (MISC::IS_BIT_SET(uParam1->f_6, 0) && func_6(*uParam0, (1 << 15), 1))
				{
					func_26(*uParam0, 40, 0);
				}
				func_2(uParam0, 2);
			}
			break;
		case 2:
			if (bVar1 || func_4(*uParam0, 44, 0))
			{
				func_76(uParam0);
			}
			else if (func_18(*uParam0, 0))
			{
				func_77(uParam0);
			}
			else if (func_78(uParam0))
			{
				func_79(uParam0);
			}
			else
			{
				func_80(uParam0, 0);
			}
			break;
		case 3:
			if (func_4(*uParam0, 27, 1))
			{
				if (func_82(func_81(), Global_40.f_4942[*uParam0 /*60*/].f_48))
				{
					func_12(*uParam0, 27, 0);
					Global_40.f_4942[*uParam0 /*60*/].f_48 = -15;
				}
			}
			if (func_83(uParam0, 1))
			{
				func_84(uParam0);
			}
			break;
		case 23:
			if (!func_83(uParam0, 0))
			{
				if (!func_85(&(uParam0->f_46)))
				{
					func_70(&(uParam0->f_46));
				}
				else if (func_86(&(uParam0->f_46)) > 30.0f || func_87(Global_35, 0))
				{
					func_88(&(uParam0->f_46));
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true))
					{
						func_19(uParam0);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, false);
					func_89(&(uParam0->f_67), 1);
					if (func_90(uParam0->f_5) || func_93(uParam0->f_5, func_92(func_91()), 1, 0))
					{
						func_80(uParam0, 1);
					}
					else
					{
						func_79(uParam0);
					}
				}
			}
			break;
		case 6:
			if (func_94(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
			}
			if (bVar3)
			{
				bVar5 = func_95(uParam0, (1 << 29));
				if (!func_85(&(uParam0->f_73)))
				{
					func_70(&(uParam0->f_73));
				}
				else if (func_86(&(uParam0->f_73)) > 1.0f)
				{
					if ((((!func_96() && !bVar5) && !func_4(*uParam0, 63, 0)) && !func_97(1)) && PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 48, 1200))
					{
						func_98(uParam0, (1 << 29));
						bVar5 = true;
					}
					func_70(&(uParam0->f_73));
				}
				if (bVar5)
				{
					func_48(uParam0);
				}
			}
			if (!bVar1)
			{
				if (func_4(*uParam0, 44, 0))
				{
					return false;
				}
				func_99(*uParam0, (1 << 14), 0);
				func_100(uParam0, 1);
				func_12(*uParam0, 44, 0);
				if (bLocal_138)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam0->f_5))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
					}
					uParam0->f_6 = func_44(*uParam0, 0);
					PERSCHAR::_0xE0E65E0D261F7507(uParam0->f_6);
					if (func_4(*uParam0, 30, 1))
					{
						if (func_18(*uParam0, 0))
						{
							func_19(uParam0);
						}
						func_12(*uParam0, 30, 1);
					}
					else
					{
						bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true);
					}
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 130, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 315, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 301, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, joaat("REL_GANG_DUTCHS"));
					ENTITY::SET_ENTITY_HEALTH(uParam0->f_5, PED::GET_PED_MAX_HEALTH(uParam0->f_5), 0);
					if (func_101(uParam0))
					{
						func_26(*uParam0, 35, 0);
						func_26(*uParam0, 62, 0);
					}
					if (func_4(*uParam0, 33, 0))
					{
						func_102(uParam0);
					}
					else if (bLocal_139)
					{
						if (func_67(uParam0->f_5, 0))
						{
							PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
						}
						func_77(uParam0);
					}
					else if (func_83(uParam0, 1))
					{
						func_84(uParam0);
					}
					else if (func_4(*uParam0, 35, 0))
					{
						POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 0);
						func_79(uParam0);
					}
					else if (func_90(uParam0->f_5) || func_93(uParam0->f_5, func_92(func_91()), 1, 0))
					{
						POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 1);
						func_103(uParam0);
						if (PED::IS_PED_ON_MOUNT(uParam0->f_5))
						{
							TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 0, 0, 0, 0, 0);
						}
						func_104(uParam0);
					}
					else
					{
						POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 0);
						func_79(uParam0);
					}
				}
			}
			break;
		case 7:
			if (bVar1)
			{
				func_76(uParam0);
				return false;
			}
			bVar6 = false;
			if (func_85(&(Global_1360165[*uParam0 /*1157*/].f_130)) && func_105(&(Global_1360165[*uParam0 /*1157*/].f_130)) > Global_1360165[*uParam0 /*1157*/].f_133)
			{
				bVar6 = true;
			}
			else if (func_4(*uParam0, 34, 0) && !TASK::_0x9FF5F9B24E870748(uParam0->f_5))
			{
				bVar6 = true;
			}
			else if (func_4(*uParam0, 68, 0) && func_106(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 3.0f, 4, 0))
			{
				bVar6 = true;
			}
			if (bVar6)
			{
				func_15(uParam0);
				PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
				func_104(uParam0);
				return false;
			}
			break;
		case 11:
			if (!func_18(*uParam0, 0))
			{
				func_79(uParam0);
				return false;
			}
			func_107(uParam0);
			break;
		case 12:
			func_108(uParam0);
			break;
		case 18:
			func_109(uParam0);
			break;
		case 19:
			func_110(uParam0);
			break;
		default:
			func_104(uParam0);
			break;
	}
	return false;
}

bool func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	func_111(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_112(iParam0);
	iVar1 = func_44(iParam0, 0);
	func_113(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_6(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	return Global_40.f_4942[iParam0 /*60*/] & iParam1 != 0;
}

void func_7(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= Global_40.f_4942[iParam0 /*60*/] & iParam1;
}

void func_8(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_9(iParam0, 1, 0);
		}
	}
	func_9(iParam0, 16, bParam1);
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	func_116(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_10(int iParam0)
{
	func_9(iParam0, 8, 0);
}

void func_11(int iParam0)
{
	func_26(iParam0, 36, 1);
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_111(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_13(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_117(iParam0))
	{
		iVar0 = func_118(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
	}
}

void func_14(var uParam0)
{
	func_119(uParam0);
	func_120(uParam0);
}

void func_15(var uParam0)
{
	func_88(&(Global_1360165[*uParam0 /*1157*/].f_130));
	Global_1360165[*uParam0 /*1157*/].f_133 = -1.0f;
	func_12(*uParam0, 33, 0);
	func_12(*uParam0, 34, 0);
	func_12(*uParam0, 12, 0);
	func_12(*uParam0, 68, 0);
}

bool func_16(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_16(*uParam0))
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
	func_122(iVar0);
	*uParam0 = 0;
}

bool func_18(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		if (!func_67(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_37(), true);
}

void func_19(var uParam0)
{
	func_123(*uParam0);
	bLocal_139 = false;
}

void func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
	{
		func_12(iParam0, 4, 1);
		func_12(iParam0, 17, 1);
		func_12(iParam0, 1, 1);
		func_12(iParam0, 2, 1);
		return;
	}
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_124(iParam0) && !bParam2)
	{
		return;
	}
	if (func_125(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549.f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_112(iParam0))) && func_126(iParam0) < 5000.0f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_12(iParam0, 4, 1);
	func_12(iParam0, 17, 1);
	func_12(iParam0, 1, 1);
	func_12(iParam0, 2, 1);
	func_113(iParam0, func_112(iParam0));
	func_127(iParam0, 1, 1, 1, bParam4);
}

bool func_21(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

int func_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	if (func_67(iVar0, 0))
	{
		if (func_67(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_21(iParam0)) || func_129(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_130(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_131(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_132(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_133(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_133(iParam0, 0));
					func_24(iParam0);
				}
			}
			else
			{
				if (func_6(iParam0, (1 << 15), 1))
				{
					iVar2 = func_133(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_6(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_132(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_133(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_133(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_132(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_29(iParam0, 0);
	return 1;
}

void func_23(int iParam0)
{
	if (!func_114(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
	func_12(iParam0, 42, 1);
}

void func_24(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_25(var uParam0, int iParam1)
{
	uParam0->f_2 -= uParam0->f_2 & iParam1;
}

void func_26(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_111(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_27(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_29(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 -= Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1;
	}
}

void func_31(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_123))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 377, false);
	}
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_56(iParam0))
	{
		return;
	}
	if (!func_134(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_135(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_136(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
		}
		if (iVar0 != -1)
		{
			func_137(iParam0, iVar0);
		}
	}
}

int func_33(var uParam0, bool bParam1)
{
	if (*bParam1 || func_4(*uParam0, 44, 0))
	{
		return 1;
	}
	return 0;
}

bool func_34(var uParam0)
{
	if (bLocal_139)
	{
		return false;
	}
	if (func_4(*uParam0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_35(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_44(iParam0, 0));
}

void func_36(var uParam0)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) /*3*/ };
	uParam0->f_11 = BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, vVar0) > 2.0f;
	Global_1360165[*uParam0 /*1157*/].f_135 = { vVar0 /*3*/ };
	Global_1360165[*uParam0 /*1157*/].f_134 = BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, Global_36);
}

int func_37()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iLocal_142 = 0;
	if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
		iVar1 = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, iVar0);
		if ((((iVar1 == 1932006723 || iVar1 == 1130477742) || (*uParam0 == 10 && iVar1 == joaat("BRAITHWAITES3"))) || (*uParam0 == 19 && iVar1 == joaat("BRAITHWAITES3"))) || PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("WORLD_HUMAN_RIFLE_PUT_DOWN_LEAN")))
		{
			iVar2 = func_138(uParam0->f_5, 0, 0, 0);
			if (func_139(iVar2))
			{
				iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 0));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar2 = func_138(uParam0->f_5, 0, 1, 0);
				if (func_139(iVar2))
				{
					iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 1));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					return;
				}
			}
			iLocal_142 = iVar3;
		}
	}
}

bool func_40(var uParam0, bool bParam1)
{
	if (!*bParam1 || (ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !func_125(*uParam0)))
	{
		return true;
	}
	return false;
}

bool func_41(var uParam0)
{
	float fVar0;
	bool bVar1;

	if (func_140(func_91(), 8) || func_140(func_91(), 2))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		fVar0 = 40000.0f;
	}
	else
	{
		fVar0 = 10000.0f;
	}
	if (func_126(*uParam0) > fVar0)
	{
		if (*uParam0 == Global_1357549.f_1497)
		{
			return false;
		}
		if (bVar1)
		{
			if (!func_141(uParam0->f_5))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_42(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bLocal_138)
	{
		return;
	}
	func_142(uParam0);
	if (iLocal_142 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && func_143(ENTITY::GET_ENTITY_MODEL(iLocal_142)))
		{
			WEAPON::_0x000FA7A4A8443AF7(iLocal_142);
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	iVar0 = func_128(*uParam0);
	if (func_67(iVar0, 0))
	{
		if (!func_144(*uParam0, (1 << 11)))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(iVar0, 6, 1);
		}
		if (!func_144(*uParam0, (1 << 12)))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 91, true);
		}
	}
	if (uParam0->f_1 != 6)
	{
		if (*bParam1)
		{
			func_76(uParam0);
			return;
		}
		if ((uParam0->f_1 != 11 && uParam0->f_1 != 18) && uParam0->f_1 != 23)
		{
			if (bLocal_139)
			{
				func_77(uParam0);
				return;
			}
		}
		if (Global_1359489.f_10 == *uParam0)
		{
			func_145(uParam0);
		}
	}
	else
	{
		if (func_4(*uParam0, 44, 0))
		{
			if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() <= 1 && !ENTITY::DOES_ENTITY_EXIST(func_128(*uParam0)))
			{
				PED::_RESERVE_AMBIENT_PEDS(1);
			}
			else
			{
				PED::_RESERVE_AMBIENT_PEDS(2);
			}
		}
		func_145(uParam0);
	}
}

void func_43(var uParam0)
{
	float fVar0;

	if (bLocal_138)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
		if (Global_1359489.f_10 == *uParam0)
		{
			if (Global_1360165[*uParam0 /*1157*/].f_1152 == -1 || Global_1360165[*uParam0 /*1157*/].f_1152 == 3)
			{
				fVar0 = func_146();
				if (uParam0->f_121 != fVar0 || !PED::_IS_PED_DRUNK(uParam0->f_5))
				{
					uParam0->f_121 = fVar0;
					func_147(*uParam0, fVar0);
					PED::_0xE0FE107AB174D64A(uParam0->f_5, 1);
				}
			}
			else if (PED::_GET_PED_DRUNKNESS(uParam0->f_5) > 0.0f)
			{
				uParam0->f_121 -= 0.01f;
				if (uParam0->f_121 > 0.0f)
				{
					func_147(*uParam0, uParam0->f_121);
				}
				else
				{
					uParam0->f_121 = 0.0f;
					func_148(*uParam0);
				}
			}
		}
	}
}

int func_44(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_57(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_45(var uParam0)
{
	int iVar0;

	iVar0 = func_149(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 2:
			if (func_18(*uParam0, 0))
			{
				func_19(uParam0);
			}
			func_150(uParam0);
			break;
		case 16:
			if (!func_151(*uParam0))
			{
				func_100(uParam0, 6);
			}
			func_150(uParam0);
			break;
		case 21:
			uParam0->f_107 = func_152(uParam0);
			func_153(uParam0);
			func_25(uParam0, (1 << 12));
			func_100(uParam0, (1 << 11));
			func_150(uParam0);
			break;
		case 22:
			uParam0->f_107 = -1;
			func_153(uParam0);
			func_25(uParam0, (1 << 11));
			func_100(uParam0, (1 << 12));
			break;
		case 23:
			func_25(uParam0, (1 << 11));
			func_25(uParam0, (1 << 12));
			func_150(uParam0);
			uParam0->f_107 = -1;
			break;
		case 27:
			if (!func_6(*uParam0, 16, 0))
			{
				if (uParam0->f_1 == 3)
				{
					uParam0->f_6 = func_44(*uParam0, 0);
					if (uParam0->f_6 != 0 && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uParam0->f_6))
					{
						PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					}
					func_104(uParam0);
				}
			}
			func_150(uParam0);
			break;
	}
}

void func_46(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;

	if (func_151(*uParam0))
	{
		return;
	}
	iVar0 = Global_1360165[*uParam0 /*1157*/].f_70;
	bLocal_141 = func_67(iVar0, 0);
	if (bLocal_141)
	{
		if (func_4(*uParam0, 38, 1))
		{
			PED::SET_PED_OWNS_ANIMAL(func_112(*uParam0), iVar0, false);
			PED::_0xED1C764997A86D5A(func_112(*uParam0), iVar0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 367, true);
			func_12(*uParam0, 38, 1);
		}
		fVar1 = 40000.0f;
		bVar6 = func_154(func_69(), &vVar2, &uVar5);
		if (!func_155(uParam0))
		{
			if (!func_144(*uParam0, 32))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar0, 0, true);
				func_30(*uParam0, 32, 1);
			}
		}
		else if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iVar0, 1);
			if (func_144(*uParam0, 32))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar0, 0, false);
				func_30(*uParam0, 32, 0);
			}
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			if (((bVar6 && func_156(iVar0, vVar2, 1) > 1200.0f) && !func_144(*uParam0, (1 << 10))) && !func_21(*uParam0))
			{
				fVar1 = 1200.0f;
			}
			else if (!TASK::GET_IS_TASK_ACTIVE(iVar0, 7))
			{
				PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_133(*uParam0, 0));
			}
		}
		if (!func_144(*uParam0, (1 << 10)) && func_156(iVar0, vVar2, 1) > fVar1)
		{
			if ((!func_21(*uParam0) && !*bParam1) && !(func_144(*uParam0, 8) || func_144(*uParam0, (1 << 9))))
			{
				iVar7 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
				if (iVar7 == Global_35)
				{
					TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
				}
				else if (iVar7 != uParam0->f_5)
				{
					if (bVar6)
					{
						if (((!func_157(iVar0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && !TASK::GET_IS_TASK_ACTIVE(iVar0, 7)) && !func_157(iVar0, joaat("SCRIPT_TASK_PERSISTENT_CHARACTER"))) && !func_157(iVar0, joaat("SCRIPT_TASK_HORSE_ACTION")))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar2, 2.5f, -1, 0.25f, 0, 40000.0f);
						}
					}
				}
			}
		}
		else if ((PED::_GET_RIDER_OF_MOUNT(iVar0, false) == 0 && !func_21(*uParam0)) && !(func_144(*uParam0, 8) || func_144(*uParam0, (1 << 9))))
		{
			if (bVar6)
			{
				if (func_156(iVar0, vVar2, 1) < fVar1)
				{
					if ((!TASK::GET_IS_TASK_ACTIVE(iVar0, 7) && !func_157(iVar0, joaat("SCRIPT_TASK_PERSISTENT_CHARACTER"))) && !func_157(iVar0, joaat("SCRIPT_TASK_HORSE_ACTION")))
					{
						PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_133(*uParam0, 0));
					}
				}
			}
		}
	}
	if (func_158(*uParam0, 0))
	{
		return;
	}
	if (func_159(uParam0, 2))
	{
		if (PED::IS_PED_ON_MOUNT(uParam0->f_5) || func_157(uParam0->f_5, joaat("SCRIPT_TASK_MOUNT_ANIMAL")))
		{
			func_25(uParam0, 2);
		}
		bVar8 = func_160(*uParam0);
		if (!bVar8 && (uParam0->f_1 != 6 || func_161((1 << 11))))
		{
			func_162(*uParam0);
		}
	}
	else if (Global_1360165[*uParam0 /*1157*/].f_70.f_13 > 2)
	{
		func_23(*uParam0);
	}
}

bool func_47(int iParam0)
{
	return Global_1899515 > iParam0;
}

void func_48(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_95(uParam0, (1 << 29)))
	{
		if (bLocal_138 && func_67(Global_35, 0))
		{
			sVar0 = func_163();
			if (func_164(uParam0->f_5, sVar0, joaat("SPEECH_PARAMS_STANDARD"), Global_35, 0, 0, uParam0->f_101, 1))
			{
				func_165(uParam0, (1 << 29));
			}
			return;
		}
		else
		{
			func_165(uParam0, (1 << 29));
		}
	}
	if (func_95(uParam0, (1 << 30)))
	{
		if (bLocal_138 && func_67(Global_35, 0))
		{
			sVar0 = func_166();
			if (func_164(uParam0->f_5, sVar0, joaat("SPEECH_PARAMS_STANDARD"), Global_35, 0, 0, 0, 1))
			{
				func_165(uParam0, (1 << 30));
			}
			return;
		}
		else
		{
			func_165(uParam0, (1 << 30));
		}
	}
	if (*uParam0 == 17 && func_35(*uParam0))
	{
		if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
		{
			iVar1 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
			iVar2 = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, iVar1);
			if (iVar2 == 1281438538 && PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("WORLD_HUMAN_DRINK_FLASK")))
			{
				if (!func_95(uParam0, (1 << 31)))
				{
					bVar3 = true;
					if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar4, false, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4) == uParam0->f_5)
							{
								bVar3 = false;
							}
						}
					}
					if (bVar3)
					{
						if (func_164(uParam0->f_5, "FOOD_READY_REMINDER", joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 0, 1, 0, 0, 1))
						{
							func_98(uParam0, (1 << 31));
						}
					}
				}
			}
			else if (func_95(uParam0, (1 << 31)))
			{
				func_165(uParam0, (1 << 31));
			}
		}
	}
}

void func_49(var uParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;
	Vector3 vVar9;
	Vector3 vVar12;
	float fVar15;
	struct<4> /*32*/ sVar16;
	Vector3 vVar20;
	float fVar23;
	Vector3 vVar24;
	float fVar27;
	bool bVar28;
	Vector3 vVar29;
	Vector3 vVar32;
	Vector3 vVar35;

	if (*bParam1 || func_167(*uParam0))
	{
		if (!func_161((1 << 11)))
		{
			return;
		}
	}
	if (uParam0->f_102 == 1 || uParam0->f_102 == 2)
	{
		return;
	}
	if (uParam0->f_103 != uParam0->f_102 && uParam0->f_103 != 0)
	{
		if (uParam0->f_102 != 25)
		{
			func_168(*uParam0, 0, "received new task");
		}
		func_88(&(uParam0->f_46));
	}
	uParam0->f_103 = uParam0->f_102;
	if (uParam0->f_102 != 9)
	{
		func_25(uParam0, 2);
	}
	switch (uParam0->f_102)
	{
		case 25:
			break;
		case 1:
		case 3:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, joaat("SCRIPT_TASK_USE_RANDOM_SCENARIO_IN_GROUP")))
				{
					if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
					{
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 1, 1, 1);
						func_170(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, joaat("SCRIPT_TASK_USE_RANDOM_SCENARIO_IN_GROUP")))
				{
					if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105))
					{
						if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
						{
							TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 0, 0, 1);
						}
					}
				}
			}
			break;
		case 4:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_WANDER_IN_AREA")))
			{
				vVar5 = { func_171(func_91(), 1) /*3*/ };
				fVar8 = 0.0f;
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar8, false))
				{
					vVar5.f_2 = fVar8;
				}
				TASK::TASK_WANDER_IN_AREA(uParam0->f_5, vVar5, 40.0f, 3.0f, 6.0f, 0);
			}
			break;
		case 5:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_5, Global_35, -1, -1.0f, -1.0f, -1.0f);
			}
			break;
		case 6:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				vVar9 = { func_172(*uParam0) /*3*/ };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar9, 1.0f, -1, 3.0f, 0, 40000.0f);
			}
			break;
		case 7:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				vVar12 = { func_172(*uParam0) /*3*/ };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar12, 2.0f, -1, 3.0f, 0, 40000.0f);
			}
			break;
		case 17:
			if (func_173(uParam0->f_5))
			{
				return;
			}
			if (func_4(*uParam0, 35, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
			if (func_126(*uParam0) > 10000.0f || ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, func_92(5), true, 0))
			{
				fVar15 = 3.0f;
			}
			else if (func_126(*uParam0) > 5625.0f)
			{
				fVar15 = 2.0f;
			}
			else
			{
				fVar15 = 1.0f;
			}
			if (fVar15 < 3.0f)
			{
				if (func_4(*uParam0, 35, 1))
				{
					fVar15 = 3.0f;
				}
				else if ((func_174(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
				{
					fVar15 = 2.0f;
				}
			}
			bVar0 = PED::IS_PED_ON_MOUNT(uParam0->f_5);
			func_175(&vVar2, &uVar1);
			if (!bVar0 && BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, vVar2) > 562500.0f)
			{
				bVar0 = true;
			}
			if (PED::IS_PED_IN_COMBAT(Global_35, 0) && PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS")))
				{
					TASK::TASK_COMBAT_HATED_TARGETS(uParam0->f_5, -1.0f);
				}
			}
			else if (((!func_169(uParam0, joaat("SCRIPT_TASK_MOVE_IN_TRAFFIC")) && bVar0) || (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAVMESH_TO_COORD_ADVANCED")) && !bVar0)) || fVar15 != uParam0->f_104)
			{
				uParam0->f_104 = fVar15;
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 113, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
				if (bVar0)
				{
					TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(uParam0->f_5, vVar2, (1 << 30), fVar15, (1 << 12), 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(uParam0->f_5, vVar2, fVar15, -1, (0.25f * 2.0f), 5242885, sVar16, 40000.0f);
				}
			}
			break;
		case 18:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
			{
				vVar20 = { func_171(func_91(), 1) /*3*/ };
				vVar20 = { vVar20 - ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) /*3*/ };
				vVar20 = { func_176(vVar20) /*3*/ };
				vVar20 = { vVar20 * Vector(50.0f, 50.0f, 50.0f) /*3*/ };
				vVar20 = { vVar20 + ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) /*3*/ };
				if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar20, &(vVar20.f_2), false))
				{
					vVar20.f_2 = (vVar20.z + 99.0f);
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar20, &(vVar20.f_2), false);
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_5, vVar20, 2.0f, 20000, 40000.0f, 0.5f, 0);
			}
			break;
		case 19:
			if (func_126(*uParam0) > 10000.0f)
			{
				fVar23 = 3.0f;
			}
			else if (func_126(*uParam0) > 5625.0f)
			{
				fVar23 = 2.0f;
			}
			else
			{
				fVar23 = 1.0f;
			}
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) || fVar23 != uParam0->f_104)
			{
				func_175(&vVar2, &uVar1);
				vVar24 = { vVar2 /*3*/ };
				func_177(&vVar24, 50, 10, 0);
				uParam0->f_104 = fVar23;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar24, fVar23, -1, 3.0f, 37, 40000.0f);
			}
			break;
		case 9:
			if (func_4(*uParam0, 35, 1))
			{
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
				}
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
			if (func_178(*uParam0) || func_169(uParam0, joaat("SCRIPT_TASK_MOUNT_ANIMAL")))
			{
				return;
			}
			if (func_151(*uParam0))
			{
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_5, true))
			{
				if (!func_169(uParam0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_5, 0, 0);
				}
				return;
			}
			if (func_126(*uParam0) > 2500.0f)
			{
				func_179(*uParam0, 1);
			}
			if (func_4(*uParam0, 35, 1))
			{
				fVar27 = 3.0f;
			}
			else if (((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0)) || func_174(PLAYER::PLAYER_ID(), 1, 0, 1)) || (ENTITY::DOES_ENTITY_EXIST(Global_1360165[*uParam0 /*1157*/].f_70) && func_180(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_70) > 15.0f))
			{
				fVar27 = 2.0f;
			}
			else
			{
				fVar27 = 1.0f;
			}
			bVar28 = ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_70);
			if ((!bVar28 && (func_181(*uParam0, 1120403456) && !func_182(*uParam0))) || func_161((1 << 9)))
			{
				func_25(uParam0, 2);
				TASK::CLEAR_PED_TASKS(func_128(*uParam0), true, false);
				if (!PED::_IS_PED_VISIBILITY_TRACKED(uParam0->f_5))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
				}
				if (!PED::IS_TRACKED_PED_VISIBLE(uParam0->f_5))
				{
					func_183(uParam0, 1, "Out of sight - quick mount horse");
				}
				PED::RELEASE_PED_VISIBILITY_TRACKING(uParam0->f_5);
				if (PED::IS_PED_RAGDOLL(func_128(*uParam0)))
				{
					return;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_128(*uParam0), true);
				if (func_184(Global_1360165[*uParam0 /*1157*/].f_70))
				{
					func_98(uParam0, 8);
				}
				TASK::TASK_MOUNT_ANIMAL(uParam0->f_5, func_128(*uParam0), -1, -1, fVar27, 1, 0, 0);
			}
			else if (!bVar28)
			{
				if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
				{
					TASK::TASK_GO_TO_ENTITY(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_70, 20000, 0.5f, fVar27, (1 << 30), 0);
				}
			}
			else
			{
				if (!func_159(uParam0, 2))
				{
					func_100(uParam0, 2);
				}
				if ((func_4(*uParam0, 35, 1) && !func_174(PLAYER::PLAYER_ID(), 1, 0, 1)) || func_4(*uParam0, 62, 1))
				{
					if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_FLEE")))
					{
						TASK::_TASK_FLEE_FROM_PED(uParam0->f_5, Global_35, 0.0f, 0.0f, 0.0f, 200.0f, 20000, 0, 2.0f, 0);
					}
				}
				else if (((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0)) || func_174(PLAYER::PLAYER_ID(), 1, 0, 1)) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, 8) > 0)
				{
					if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_5, 60.0f);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 60.0f, 0, 20);
					}
				}
				else if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_WANDER_IN_AREA")))
				{
					TASK::TASK_WANDER_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 15.0f, 0.0f, 1.0f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
		case 10:
			if (!func_161((1 << 27)))
			{
				if (!func_85(&(uParam0->f_46)))
				{
					uParam0->f_83 = MISC::GET_RANDOM_INT_IN_RANGE(750, 3000);
					func_89(&(uParam0->f_46), 1);
				}
				if (func_72(&(uParam0->f_46)) > uParam0->f_83)
				{
					if (!func_169(uParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
					{
						if (func_178(*uParam0))
						{
							if (TASK::IS_PED_STILL(uParam0->f_5))
							{
								TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
								if (func_184(Global_1360165[*uParam0 /*1157*/].f_70))
								{
									func_185(*uParam0);
									if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_123))
									{
										func_186(*uParam0, Global_1360165[*uParam0 /*1157*/].f_123, 0, 0, 1);
									}
								}
							}
							else if (!func_169(uParam0, joaat("SCRIPT_TASK_STAND_STILL")))
							{
								TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
							}
						}
					}
				}
			}
			break;
		case 11:
			if (func_156(uParam0->f_5, uParam0->f_8, 1) > 4.0f)
			{
				if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, uParam0->f_8, 1.0f, -1, 0.25f, 0, 40000.0f);
				}
			}
			else if (!func_169(uParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
			{
				if (func_178(*uParam0))
				{
					if (TASK::IS_PED_STILL(uParam0->f_5))
					{
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
					}
					else if (!func_169(uParam0, joaat("SCRIPT_TASK_STAND_STILL")))
					{
						TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
					}
				}
			}
			break;
		case 12:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_5, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), false))
				{
					func_187(uParam0);
				}
			}
			break;
		case 16:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_STAND_STILL")))
			{
				TASK::TASK_STAND_STILL(uParam0->f_5, -1);
			}
			break;
		case 14:
			if (func_188(*uParam0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_5, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			break;
		case 20:
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_109))
			{
				if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_5, uParam0->f_109))
				{
					vVar29 = { func_189(uParam0->f_108) /*3*/ };
					if (func_156(uParam0->f_5, vVar29, 1) > 9.0f)
					{
						if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar29, func_190(uParam0->f_107), -1, 0.25f, 0, 40000.0f);
						}
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(uParam0->f_5, uParam0->f_109, 0, 0, true, false, 0, false, -1.0f, false);
					}
				}
			}
			break;
		case 21:
			vVar32 = { func_189(uParam0->f_108) /*3*/ };
			if (func_156(uParam0->f_5, vVar32, 1) > 4.0f)
			{
				if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar32, 1.0f, -1, 0.25f, 0, 40000.0f);
				}
			}
			else if (!func_169(uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")))
			{
				vVar35 = { func_191(uParam0->f_108) /*3*/ };
				TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_5, vVar35, 1000);
			}
			break;
		case 22:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(uParam0->f_5, Global_35, -1, 1.0f, 1.0f, 2.0f, 1.0f, false);
			}
			break;
		case 23:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_COMPANION_AMBIENT")))
			{
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1359489.f_62))
				{
					Global_1359489.f_62 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
				}
				TASK::TASK_COMPANION_AMBIENT(uParam0->f_5, Global_1359489.f_62);
			}
			break;
		case 26:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
			{
				TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(uParam0->f_5, Global_35, 0, 0, -1.0f, -1.0f, 8, 0.0f, 0.0f, 1.5f, (1 << 30));
			}
			break;
		case 27:
			if (!((bLocal_139 || func_157(uParam0->f_5, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"))) || func_157(uParam0->f_5, joaat("SCRIPT_TASK_COWER"))))
			{
				if (!func_4(*uParam0, 3, 1) || func_192(*uParam0))
				{
					if (func_193())
					{
						func_187(uParam0);
					}
					else if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 300.0f, 0, 20);
					}
				}
				else if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_COWER")))
				{
					TASK::TASK_COWER(uParam0->f_5, -1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
	}
}

void func_50(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_4(*uParam0, 66, 0))
	{
		func_12(*uParam0, 66, 0);
		uParam0->f_7 = 0;
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (bLocal_140)
			{
				bLocal_140 = false;
			}
			bVar0 = func_4(*uParam0, 25, 0);
			if (func_69() != 0 && func_69() != 4)
			{
				bVar1 = func_4(*uParam0, 65, 0);
				if ((((((Global_1360165[*uParam0 /*1157*/].f_56 || bVar1) && Global_40.f_4942[*uParam0 /*60*/].f_59 == 0) && !bVar0) && !func_4(*uParam0, 28, 0)) && !(func_125(*uParam0) || func_4(*uParam0, 44, 1))) && func_53(*uParam0, 1, 0))
				{
					if ((((((func_194(*uParam0, 0) && uParam0->f_1 != 7) && *uParam0 != Global_1357549.f_1497) && !(func_195(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1) || func_195(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))) && !func_4(*uParam0, 17, 1)) && !bVar1) && !func_196(uParam0))
					{
						iVar2 = func_197(*uParam0, func_69());
					}
					else
					{
						iVar2 = func_198(*uParam0, func_69(), 1, 1);
					}
					bLocal_140 = true;
					if (func_199(iVar2) && func_66(*uParam0, iVar2))
					{
						if (iVar2 != Global_40.f_4942[*uParam0 /*60*/].f_3)
						{
							func_68(*uParam0, iVar2, 0);
						}
					}
				}
			}
			if (func_4(*uParam0, 8, 1) || Global_1360165[*uParam0 /*1157*/].f_57)
			{
				if (func_67(uParam0->f_5, 256))
				{
					PED::_UPDATE_PED_VARIATION(uParam0->f_5, false, true, true, true, false);
					func_12(*uParam0, 8, 0);
					Global_1360165[*uParam0 /*1157*/].f_57 = 0;
				}
			}
			if (Global_1360165[*uParam0 /*1157*/].f_63 != Global_40.f_4942[*uParam0 /*60*/].f_3 || bVar0)
			{
				uParam0->f_7 = 3;
			}
			else
			{
				Global_1360165[*uParam0 /*1157*/].f_56 = 0;
			}
			break;
		case 3:
			bVar0 = (func_4(*uParam0, 25, 0) || func_4(*uParam0, 65, 0));
			if ((bLocal_140 && !bVar0) && ((func_4(*uParam0, 28, 1) || func_125(*uParam0)) || func_4(*uParam0, 44, 1)))
			{
				func_88(&(uParam0->f_70));
				uParam0->f_7 = 0;
				bLocal_140 = false;
				return;
			}
			if (bVar0)
			{
				bVar3 = true;
			}
			if (!bVar3 && CAM::IS_SCREEN_FADED_OUT())
			{
				bVar3 = true;
			}
			if (!bVar3)
			{
				if (!func_200(uParam0->f_5, 1116471296, -1082130432, -1082130432, -1082130432))
				{
					iVar4 = func_201(uParam0);
					if (!func_85(&(uParam0->f_70)))
					{
						func_89(&(uParam0->f_70), 0);
					}
					else if (func_72(&(uParam0->f_70)) >= iVar4)
					{
						bVar3 = true;
					}
				}
				else if (func_85(&(uParam0->f_70)))
				{
					func_88(&(uParam0->f_70));
					bVar3 = false;
				}
			}
			if (bVar3 && !PED::IS_PED_READY_TO_RENDER(uParam0->f_5))
			{
				bVar3 = false;
			}
			if (bVar3)
			{
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam0 /*60*/].f_3;
				if (func_194(*uParam0, 0))
				{
					if (*uParam0 != 18)
					{
						func_202(uParam0->f_5, 0, 0);
						func_26(*uParam0, 8, 0);
					}
					func_100(uParam0, (1 << 27));
				}
				func_203(*uParam0, uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_63, 0);
				func_204(uParam0);
				func_88(&(uParam0->f_70));
				func_12(*uParam0, 25, 0);
				func_12(*uParam0, 65, 0);
				uParam0->f_7 = 4;
			}
			break;
		case 4:
			Global_1360165[*uParam0 /*1157*/].f_56 = 0;
			uParam0->f_7 = 0;
			break;
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar0 = PERSCHAR::_0xE4C51A8A3BD1664C(uParam0->f_6);
	func_205(*uParam0, iVar0);
	func_206(*uParam0, iVar0);
	if (Global_1360165[*uParam0 /*1157*/].f_1152 != -1)
	{
		if (func_207(Global_1360165[*uParam0 /*1157*/].f_1153))
		{
			if (func_208(func_81(), Global_1360165[*uParam0 /*1157*/].f_1153))
			{
				Global_1360165[*uParam0 /*1157*/].f_1152 = -1;
				Global_1360165[*uParam0 /*1157*/].f_1153 = -15;
			}
			else if (iVar0 != Global_1360165[*uParam0 /*1157*/].f_1152)
			{
				func_209(uParam0, Global_1360165[*uParam0 /*1157*/].f_1152, Global_1360165[*uParam0 /*1157*/].f_1153, 1);
			}
		}
		else
		{
			Global_1360165[*uParam0 /*1157*/].f_1152 = -1;
			Global_1360165[*uParam0 /*1157*/].f_1153 = -15;
		}
		return;
	}
	iVar1 = func_210(*uParam0);
	if (Global_40.f_4942[*uParam0 /*60*/].f_42 != -1 || Global_40.f_4942[*uParam0 /*60*/].f_44 != -1)
	{
		iVar3 = 0;
		while (iVar3 < 60)
		{
			if (Global_40.f_4283.f_6[iVar3 /*5*/].f_4 == iVar1)
			{
				iVar2 = func_211(Global_40.f_4283.f_6[iVar3 /*5*/]);
				if (iVar2 == Global_40.f_4942[*uParam0 /*60*/].f_42)
				{
					bVar4 = true;
				}
				if (iVar2 == Global_40.f_4942[*uParam0 /*60*/].f_44)
				{
					bVar5 = true;
				}
			}
			iVar3++;
		}
	}
	if (bVar4)
	{
		if (func_207(Global_40.f_4942[*uParam0 /*60*/].f_43))
		{
			if (func_208(func_81(), Global_40.f_4942[*uParam0 /*60*/].f_43))
			{
				Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
				Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
			}
			else if (iVar0 != Global_40.f_4942[*uParam0 /*60*/].f_42)
			{
				func_209(uParam0, Global_40.f_4942[*uParam0 /*60*/].f_42, Global_40.f_4942[*uParam0 /*60*/].f_43, 0);
			}
		}
		else
		{
			Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
		}
		return;
	}
	else if (func_207(Global_40.f_4942[*uParam0 /*60*/].f_43))
	{
		PERSCHAR::_0xD95D777F828B2BBB(uParam0->f_6);
		Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
		Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
	}
	if (bVar5)
	{
		if (iVar0 != Global_40.f_4942[*uParam0 /*60*/].f_44)
		{
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, Global_40.f_4942[*uParam0 /*60*/].f_44);
		}
	}
	else
	{
		iVar6 = func_69();
		if ((((iVar0 != 0 && iVar6 != 0) && iVar6 != 6) || (iVar0 != 5 && iVar6 == 0)) || (iVar0 != 6 && iVar6 == 6))
		{
			iVar7 = 0;
			if (*uParam0 != 24 && *uParam0 != 25)
			{
				if (iVar6 == 0)
				{
					iVar7 = 5;
					if (*uParam0 == 10)
					{
						iVar7 = 7;
					}
				}
				else if (iVar6 == 6)
				{
					iVar7 = 6;
				}
			}
			Global_40.f_4942[*uParam0 /*60*/].f_44 = iVar7;
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, iVar7);
		}
	}
}

void func_52(int iParam0)
{
	int iVar0;

	iVar0 = func_61(iParam0);
	if (!func_212(iVar0))
	{
		return;
	}
	if (func_4(iParam0, 17, 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_39)))
		{
			PERSCHAR::_SET_PERSCHAR_SCHEDULE(iVar0, &(Global_1360165[iParam0 /*1157*/].f_39));
		}
		else
		{
			func_12(iParam0, 17, 0);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_40.f_4942[iParam0 /*60*/].f_51)))
	{
		PERSCHAR::_SET_PERSCHAR_SCHEDULE(iVar0, &(Global_40.f_4942[iParam0 /*60*/].f_51));
	}
}

bool func_53(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_4(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_67(func_112(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_213(iParam0, 1, 0))
	{
		return false;
	}
	if (func_4(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

void func_54(var uParam0, var uParam1)
{
	if (func_4(*uParam0, 40, 0))
	{
		if (bLocal_141)
		{
			if (!func_21(*uParam0))
			{
				PERSCHAR::_0xD4B614179BCD0654(Global_1360165[*uParam0 /*1157*/].f_126);
			}
			func_29(*uParam0, 0);
			func_12(*uParam0, 40, 0);
		}
		else
		{
			func_214(*uParam0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, MISC::IS_BIT_SET(uParam1->f_6, 3));
		}
	}
}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	Vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if (func_215((1 << 16)))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_123))
		{
			func_31(uParam0);
		}
		return;
	}
	if (!bLocal_138)
	{
		return;
	}
	bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_123);
	bVar1 = ((uParam0->f_1 == 3 || uParam0->f_1 == 7) || (func_4(*uParam0, 45, 1) && !func_4(*uParam0, 46, 1)));
	bVar2 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	bVar3 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	bVar4 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	bVar5 = PED::IS_PED_SITTING(uParam0->f_5);
	if (bVar1 && !bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	}
	else if (!bVar1 && bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, false);
	}
	if (bVar1 && !bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	}
	else if (!bVar1 && bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, false);
	}
	if (bVar1 && !bVar4)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	}
	else if (!bVar1 && bVar4)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, false);
	}
	if (bVar0)
	{
		if (bVar1)
		{
			vVar6 = { VOLUME::GET_VOLUME_SCALE(uParam0->f_123) /*3*/ };
			bVar9 = vVar6.x < (1.4f - 0.05f);
			bVar10 = (vVar6.y > (0.5f - 0.05f) && vVar6.y < (0.5f + 0.05f));
			bVar11 = PED::IS_PED_ON_MOUNT(Global_35);
			if (bVar9 && bVar11)
			{
				VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 1.4f, 1.4f, 2.0f);
			}
			else if (!bVar9 && !bVar11)
			{
				VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.2f, 2.0f);
			}
			if (bVar10 && !bVar5)
			{
				if (bVar11)
				{
					VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 1.4f, 1.4f, 2.0f);
				}
				else
				{
					VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.2f, 2.0f);
				}
			}
			else if ((!bVar10 && bVar5) && !bVar11)
			{
				VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.5f, 2.0f);
			}
		}
		else
		{
			func_31(uParam0);
		}
	}
	else if (bVar1)
	{
		uParam0->f_123 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 0.0f, 0.0f, 0.0f, 0.2f, 0.2f, 2.0f);
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_123))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_123, uParam0->f_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
	}
}

bool func_56(int iParam0)
{
	return iParam0 > -1;
}

void func_57(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_61(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

int func_58(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_6;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = func_44(iParam0, 0);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(func_112(iParam0)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(func_112(iParam0), true, true);
		}
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_6 != iParam1 || Global_40.f_4942[iParam0 /*60*/].f_3 == 0)
	{
		func_68(iParam0, func_198(iParam0, Global_40.f_4283, 1, 1), 1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_61(iParam0), Global_40.f_4942[iParam0 /*60*/].f_6);
	return 1;
}

bool func_60(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return joaat("META_OUTFIT_ISLAND_HOLSTER");
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return joaat("META_OUTFIT_ROBBERY");
		case 1046468203:
			return 393090546;
		case 1018353621:
			return joaat("META_OUTFIT_HEIST");
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_216(296923297, iParam1);
			return func_217(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_216(1237718549, iParam1);
			return func_217(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_63(int iParam0, bool bParam1)
{
	switch (func_218(iParam0))
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

bool func_64(int iParam0, int iParam1)
{
	return Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1 > 0;
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_219(iParam0);
				func_220(iParam0, 0);
				break;
		}
		func_221(iParam0, iParam1);
		if (func_222(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_223(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_EQUIP_META_PED_OUTFIT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_219(iParam0);
				func_220(iParam0, 1);
				break;
		}
		func_224(iParam0, iParam1);
		func_225(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

bool func_66(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_226(iParam0, iParam1);
	return bVar0;
}

bool func_67(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_227(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_227(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_227(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_68(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_66(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_26(iParam0, 25, 1);
	}
}

int func_69()
{
	return Global_40.f_4283;
}

void func_70(var uParam0)
{
	func_228(uParam0, 0.0f);
}

void func_71(var uParam0)
{
	if (func_69() == 8)
	{
		func_229(uParam0, 1);
	}
	else if (func_230() >= 75.0f)
	{
		func_229(uParam0, 1);
	}
	else if (func_195(joaat("CSTAG_PLAYER_DONATED_FOOD"), 1))
	{
		if (func_230() <= 25.0f)
		{
			switch (*uParam0)
			{
				case 3:
				case 4:
				case 6:
				case 9:
				case 18:
				case 19:
				case 20:
					func_229(uParam0, func_231());
					break;
				default:
					func_229(uParam0, 1);
					break;
			}
		}
		else
		{
			func_229(uParam0, 1);
		}
	}
	else if (func_230() <= 25.0f)
	{
		func_229(uParam0, 0);
	}
	else
	{
		func_232(uParam0, 1);
		func_232(uParam0, 0);
	}
}

int func_72(var uParam0)
{
	if (!func_85(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_233(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_234() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_73(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return false;
	}
	else if (func_72(&(uParam0->f_79)) > 5000)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && func_72(&(uParam0->f_79)) < 10000)
		{
			return true;
		}
		return false;
	}
	return true;
}

int func_74(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if ((!bParam2 && !Global_1359489.f_12) || (bParam2 && Global_1359489.f_13 < 8))
	{
		if (bParam2 && bParam3)
		{
			if (!TASK::_0xF97F462779B31786(func_235(Global_40.f_4283)))
			{
				return 0;
			}
		}
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_1))
		{
			PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_1);
		}
		iVar0 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(Global_1360165[iParam0 /*1157*/].f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			Global_1360165[iParam0 /*1157*/] = iVar0;
			Global_1359489.f_12 = 1;
		}
		else if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/] = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_1, bParam1);
			Global_1359489.f_13++;
		}
		else
		{
			Global_1360165[iParam0 /*1157*/] = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_1, bParam1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			return 0;
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, false);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_1360165[iParam0 /*1157*/], true);
			PERSCHAR::_0xD4B614179BCD0654(Global_1360165[iParam0 /*1157*/].f_1);
		}
		PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_236(Global_1360165[iParam0 /*1157*/]))
		{
		}
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_75(var uParam0)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
	}
	else
	{
		if (!func_125(*uParam0))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam0->f_5))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
			}
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, joaat("REL_GANG_DUTCHS"));
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_5, true);
		}
		if (*uParam0 != 12)
		{
			func_237(uParam0->f_5, 0);
		}
		else
		{
			func_237(uParam0->f_5, 2);
		}
		if (!func_4(*uParam0, 7, 1))
		{
			if (((((((((((*uParam0 == 14 || *uParam0 == 13) || *uParam0 == 21) || *uParam0 == 16) || *uParam0 == 19) || *uParam0 == 18) || *uParam0 == 17) || *uParam0 == 22) || *uParam0 == 4) || *uParam0 == 20) || *uParam0 == 15) || (*uParam0 == 11 && !func_63(Global_1347702[134 /*49*/].f_15, 1)))
			{
				func_26(*uParam0, 3, 0);
			}
		}
		if (!func_4(*uParam0, 19, 1))
		{
			func_238(*uParam0, 1056964608, -1, 1061158912);
		}
		func_12(*uParam0, 64, 1);
		switch (*uParam0)
		{
			case 14:
				AUDIO::DISABLE_PED_PAIN_AUDIO(uParam0->f_5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 17, true);
				break;
			case 11:
				if (!func_63(Global_1347702[66 /*49*/].f_15, 1))
				{
					PED::_SET_PED_INTERACTION_PERSONALITY(uParam0->f_5, joaat("AVOID"));
				}
				if (!func_63(Global_1347702[134 /*49*/].f_15, 1) && !func_4(*uParam0, 7, 1))
				{
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LOADOUT_DEFAULT"));
				}
				else
				{
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LO_SADIE"));
				}
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "SADIE_ADLER_ES");
				}
				break;
			case 13:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "ABIGAIL_ES");
				}
				break;
			case 7:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "CHARLES_SMITH_ES");
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LO_CHARLES_ES"));
				}
				break;
			case 4:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "UNCLE_ES");
				}
				break;
			case 5:
				if (func_240(67))
				{
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 4);
				}
				else
				{
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 3);
				}
				break;
			case 10:
				if (!func_240(63))
				{
					PED::_SET_PED_INTERACTION_PERSONALITY(uParam0->f_5, joaat("KIERANTIEDUP"));
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LOADOUT_DEFAULT"));
				}
				break;
			case 24:
			case 25:
				WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LO_AGRO_PED"));
				break;
			case 0:
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 116, true);
				break;
			case 12:
				if (func_241())
				{
					PERSCHAR::_0x63AA2B8EB087886A(func_61(12), MISC::GET_HASH_KEY("COMP_RUFUS"));
				}
				else
				{
					PERSCHAR::_0x63AA2B8EB087886A(func_61(12), MISC::GET_HASH_KEY("COMP_CAIN"));
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 523, true);
				break;
		}
		bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true);
		PED::_0xE9E06EA514A69061(uParam0->f_5, joaat("COMPANION"));
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, true);
	}
	if (*uParam0 == 12)
	{
		func_26(*uParam0, 5, 0);
	}
	func_242(*uParam0);
	func_243(*uParam0, Global_1360165[*uParam0 /*1157*/].f_138, Global_1360165[*uParam0 /*1157*/].f_139, 1);
	if (uParam0->f_1 == 11)
	{
		uParam0->f_99 = MISC::GET_GAME_TIMER();
	}
	if (*uParam0 < 6)
	{
		uParam0->f_15 = 0;
	}
	else if (*uParam0 < 12)
	{
		uParam0->f_15 = 1;
	}
	else if (*uParam0 < 17)
	{
		uParam0->f_15 = 2;
	}
	else
	{
		uParam0->f_15 = 3;
	}
	bVar0 = func_69() == 6;
	func_244(uParam0, bVar0);
	Global_1360165[*uParam0 /*1157*/].f_134 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), Global_36);
	func_245(uParam0);
	func_89(&(uParam0->f_12), 0);
	Global_1360165[*uParam0 /*1157*/].f_70.f_14.f_12 = 1;
	func_12(*uParam0, 22, 0);
	func_12(*uParam0, 65, 0);
	Global_1360165[*uParam0 /*1157*/].f_70.f_12 = 0;
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 343, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 515, true);
	func_246(*uParam0, func_4(*uParam0, 60, 1), func_4(*uParam0, 61, 1), 1);
}

void func_76(var uParam0)
{
	if (func_159(uParam0, (1 << 16)))
	{
		if (bLocal_139)
		{
			if (!func_161((1 << 11)))
			{
				func_247(*uParam0);
			}
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);
	}
	func_2(uParam0, 6);
}

void func_77(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	}
	func_246(*uParam0, 1, 0, 1);
	if (!bLocal_139)
	{
		func_187(uParam0);
	}
	func_2(uParam0, 11);
}

bool func_78(var uParam0)
{
	if (Global_1357549.f_1497 == *uParam0)
	{
		return false;
	}
	if (func_90(uParam0->f_5))
	{
		return false;
	}
	if (TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7))
	{
		return false;
	}
	if (func_126(*uParam0) > 10000.0f)
	{
		return false;
	}
	return true;
}

void func_79(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	}
	func_246(*uParam0, 1, 0, 1);
	func_88(&(uParam0->f_34));
	uParam0->f_98 = -1;
	if (func_4(*uParam0, 35, 1) && !func_4(*uParam0, 62, 1))
	{
		func_98(uParam0, (1 << 29));
		func_248(uParam0);
		func_249(*uParam0, 1);
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
		}
	}
	func_2(uParam0, 12);
}

void func_80(var uParam0, bool bParam1)
{
	func_11(*uParam0);
	if (bParam1)
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_5, -1))
		{
			func_183(uParam0, 0, "Move to available");
		}
	}
	func_250(*uParam0, 1, 1, 0);
	if (func_4(*uParam0, 64, 1))
	{
		func_26(*uParam0, 52, 1);
		func_26(*uParam0, 51, 1);
		func_12(*uParam0, 64, 1);
	}
	func_251(*uParam0);
	if (bLocal_138)
	{
		TASK::_0xDF94844D474F31E5(uParam0->f_5);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
		PED::_PED_CLEAR_LOCO_MOTION(uParam0->f_5);
		PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(uParam0->f_5);
	}
	func_246(*uParam0, 1, 1, 1);
	func_252(uParam0, uParam0->f_102 == 17);
	func_170(uParam0, 25);
	func_2(uParam0, 3);
}

int func_81()
{
	return Global_1899515;
}

bool func_82(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

bool func_83(var uParam0, bool bParam1)
{
	if (Global_1357549.f_1614 & func_253(*uParam0, 0))
	{
		if (Global_1360165[*uParam0 /*1157*/].f_134 < 10000.0f && !func_254(2, 0))
		{
			return true;
		}
	}
	if (func_255())
	{
		return false;
	}
	if (func_87(Global_35, 0))
	{
		return false;
	}
	if ((!Global_1935630.f_24 && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, 8) <= 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, (1 << 28)) > 0)
	{
		return false;
	}
	if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((func_4(*uParam0, 35, 1) && !func_174(PLAYER::PLAYER_ID(), 0, 0, 1)) || func_4(*uParam0, 62, 1))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_126(*uParam0) > 900.0f)
		{
			return false;
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uParam0->f_5, Global_35, 17))
		{
			return false;
		}
	}
	if (func_85(&(uParam0->f_67)))
	{
		if (func_86(&(uParam0->f_67)) < 10.0f)
		{
			return false;
		}
		else
		{
			func_88(&(uParam0->f_67));
		}
	}
	return true;
}

void func_84(var uParam0)
{
	if (func_93(uParam0->f_5, func_92(func_91()), 1, 0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	PED::_SET_PED_COMBAT_STYLE_MOD(uParam0->f_5, joaat("NOTACKLING"), -1.0f);
	func_246(*uParam0, 1, 0, 1);
	func_98(uParam0, (1 << 30));
	func_170(uParam0, 27);
	func_2(uParam0, 23);
}

bool func_85(var uParam0)
{
	return func_256(*uParam0, 1);
}

float func_86(var uParam0)
{
	if (!func_85(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_233(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_257() - uParam0->f_1);
}

bool func_87(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1 || !func_85(uParam0))
	{
		func_70(uParam0);
	}
}

bool func_90(int iParam0)
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
	vVar0 = { func_258(func_69()) /*3*/ };
	fVar3 = func_259();
	if (func_260(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
	{
		return true;
	}
	return false;
}

int func_91()
{
	return Global_40.f_4283.f_1;
}

int func_92(int iParam0)
{
	if (!func_261(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_94(int iParam0, bool bParam1, bool bParam2)
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
		if (func_262())
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
		iVar0 = func_263(Global_1898164.f_1[0 /*5*/]);
		if (func_264(iVar0) && func_265(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_266(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if (Global_1935630 & 40959 & (-1 - iParam0) != 0)
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
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & (1 << 9) == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_95(var uParam0, int iParam1)
{
	return uParam0->f_3 & iParam1 != 0;
}

bool func_96()
{
	return func_267((1 << 15));
}

bool func_97(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_3 |= iParam1;
}

void func_99(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_101(var uParam0)
{
	if (func_268() == 105)
	{
		if (*uParam0 == 0 || *uParam0 == 3)
		{
			if (func_270(func_269(17)) | func_271())
			{
				return true;
			}
		}
	}
	return false;
}

void func_102(var uParam0)
{
	func_246(*uParam0, 1, 0, 1);
	func_2(uParam0, 7);
}

void func_103(var uParam0)
{
	var uVar0;

	if (iLocal_143 != func_69())
	{
		iLocal_143 = func_69();
		func_272(*uParam0, &uVar0, 60);
	}
}

void func_104(var uParam0)
{
	uParam0->f_98 = -1;
	func_25(uParam0, (1 << 13));
	func_12(*uParam0, 35, 1);
	func_12(*uParam0, 62, 1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);
	}
	func_2(uParam0, 2);
}

float func_105(var uParam0)
{
	if (!func_85(uParam0))
	{
		return 0.0f;
	}
	if (func_233(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_257() - uParam0->f_1);
}

bool func_106(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar5[4];

	if (func_60(vParam0))
	{
		return false;
	}
	uVar0 = 4;
	iVar5[0] = (1 << 14);
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

void func_107(var uParam0)
{
	if (!func_159(uParam0, (1 << 11)))
	{
		if (func_273(uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				uParam0->f_107 = func_274(uParam0->f_120);
				func_275(uParam0->f_5, uParam0->f_120);
				func_100(uParam0, (1 << 11));
				func_100(uParam0, (1 << 17));
			}
		}
	}
	if (func_159(uParam0, (1 << 11)))
	{
		func_276(uParam0);
	}
	else if (func_159(uParam0, (1 << 12)))
	{
		func_277(uParam0);
	}
}

void func_108(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!bLocal_138)
	{
		return;
	}
	if (func_278(uParam0) || (!func_178(*uParam0) && func_90(uParam0->f_5)))
	{
		if (func_188(*uParam0))
		{
			func_170(uParam0, 14);
		}
		else if (bLocal_139)
		{
			func_77(uParam0);
		}
		else if (func_178(*uParam0))
		{
			func_170(uParam0, 10);
		}
		else
		{
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 1);
			func_104(uParam0);
		}
	}
	else
	{
		if (func_83(uParam0, 1))
		{
			if (func_4(*uParam0, 3, 1))
			{
				func_26(*uParam0, 35, 0);
				func_26(*uParam0, 62, 0);
			}
			else
			{
				func_84(uParam0);
				return;
			}
		}
		bVar0 = func_4(*uParam0, 35, 1);
		if (!bVar0)
		{
			if (func_279(uParam0))
			{
				func_26(*uParam0, 35, 0);
				func_26(*uParam0, 62, 0);
				bVar0 = true;
			}
		}
		if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_MOVE_IN_TRAFFIC")))
		{
			bVar1 = false;
			if (!func_280(uParam0->f_5))
			{
				if (!func_178(*uParam0))
				{
					if (!ENTITY::IS_ENTITY_IN_WATER(uParam0->f_5))
					{
						if (!func_281(uParam0->f_5))
						{
							bVar1 = true;
						}
					}
				}
			}
			if (bVar1)
			{
				if (((func_69() == 4 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uParam0->f_5) != 0) || (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, func_92(5), true, 0) && !bLocal_141)) || BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), func_258(func_69())) < ((func_259() * func_259()) + 25.0f))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (bVar0)
				{
					if (!func_181(*uParam0, 400.0f) || func_182(*uParam0))
					{
						bVar1 = false;
					}
				}
			}
			if (!func_157(uParam0->f_5, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && !func_157(uParam0->f_5, joaat("SCRIPT_TASK_MOVE_IN_TRAFFIC")))
			{
				if ((!bVar1 || !func_282(uParam0)) || func_4(*uParam0, 6, 1))
				{
					if (func_85(&(uParam0->f_34)))
					{
						func_88(&(uParam0->f_34));
					}
					func_170(uParam0, 17);
					func_247(*uParam0);
				}
				else
				{
					if (!func_85(&(uParam0->f_34)))
					{
						func_89(&(uParam0->f_34), 1);
					}
					if (func_72(&(uParam0->f_34)) < 120000)
					{
						func_170(uParam0, 9);
						func_247(*uParam0);
					}
					else
					{
						func_283(*uParam0);
						func_170(uParam0, 17);
					}
				}
			}
		}
	}
}

void func_109(var uParam0)
{
	bool bVar0;

	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return;
	}
	bVar0 = false;
	if (uParam0->f_120 > -1)
	{
		if (func_284(uParam0->f_108))
		{
			bVar0 = true;
		}
		else if (func_285(uParam0->f_5, uParam0->f_120))
		{
			func_286(uParam0->f_108, uParam0->f_120, uParam0->f_5);
		}
	}
	else
	{
		bVar0 = func_284(uParam0->f_108);
	}
	if (bVar0)
	{
		if (func_178(*uParam0))
		{
			if (func_287(uParam0->f_120) == 1)
			{
				func_170(uParam0, 21);
			}
			else
			{
				if (func_60(uParam0->f_8))
				{
					if (func_159(uParam0, (1 << 17)))
					{
						uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) /*3*/ };
						func_25(uParam0, (1 << 17));
					}
					else
					{
						uParam0->f_8 = { func_288(uParam0->f_108) /*3*/ };
					}
				}
				func_170(uParam0, 11);
			}
		}
		else
		{
			if (uParam0->f_109 == 0)
			{
				uParam0->f_109 = func_289(uParam0->f_108);
			}
			func_170(uParam0, 20);
		}
	}
	else
	{
		func_170(uParam0, 12);
	}
	if (func_126(*uParam0) > uParam0->f_114)
	{
		func_25(uParam0, (1 << 11));
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		func_25(uParam0, (1 << 11));
	}
	if (!func_159(uParam0, (1 << 11)))
	{
		func_183(uParam0, 0, "Leaving watch mode...");
		func_290(uParam0);
	}
}

void func_110(var uParam0)
{
	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return;
	}
	if (func_178(*uParam0))
	{
		func_170(uParam0, 10);
	}
	else
	{
		func_170(uParam0, 2);
	}
	if (!TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105) || func_126(*uParam0) > uParam0->f_114)
	{
		func_25(uParam0, (1 << 12));
	}
	if (!func_159(uParam0, (1 << 12)))
	{
		func_290(uParam0);
	}
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_112(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_113(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_291(iParam1);
	}
}

bool func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_115(var uParam0, int iParam1)
{
	return *uParam0 & iParam1 != 0;
}

void func_116(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= *uParam0 & iParam1;
	}
}

bool func_117(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1360165[iParam0 /*1157*/].f_2))
	{
		return true;
	}
	return false;
}

int func_118(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1360165[iParam0 /*1157*/].f_2))
	{
		iVar0 = Global_1360165[iParam0 /*1157*/].f_2;
	}
	return iVar0;
}

void func_119(var uParam0)
{
	uParam0->f_3 = 0;
}

void func_120(var uParam0)
{
	uParam0->f_4 = 0;
}

int func_121(var uParam0)
{
	return uParam0;
}

void func_122(int iParam0)
{
	if (!func_292(iParam0))
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

void func_123(int iParam0)
{
	int iVar0;
	struct<15> /*120*/ sVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_18(iParam0, 0))
	{
	}
	func_247(iParam0);
	Global_1359489.f_15 = func_293(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			Global_1359489[iVar0] = -1;
		}
		iVar0++;
	}
	func_294();
	func_12(iParam0, 32, 1);
	if (func_67(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		sVar1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		sVar1.f_12 = 8;
		sVar1.f_3 = Global_1360165[iParam0 /*1157*/];
		sVar1.f_7 = func_268();
		sVar1.f_8 = 0;
		sVar1.f_11 = 10;
		sVar1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_CREATE_AI_MEMORY(&sVar1, 17);
	}
}

bool func_124(int iParam0)
{
	return func_4(iParam0, 32, 1);
}

bool func_125(int iParam0)
{
	return func_6(iParam0, 16, 1);
}

float func_126(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_127(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_125(iParam0))
	{
		if (!func_295(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_4(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_44(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_112(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_126(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_26(iParam0, 2, 1);
	}
	else
	{
		func_5(iParam0);
		func_26(iParam0, 1, 1);
	}
}

int func_128(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

bool func_129(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_130(int iParam0, int iParam1, bool bParam2)
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
	return func_296(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_131(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_297(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_128(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

int func_133(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_298(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

bool func_134(int iParam0)
{
	return iParam0 != 0;
}

bool func_135(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	*iParam2 = 0;
	if (func_299(iParam0, iParam1))
	{
		*bParam3 = 1;
	}
	if (func_300(iParam0, iParam1, iParam2))
	{
		return true;
	}
	*iParam2 = -1;
	return *bParam3;
}

void func_136(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if ((func_67(iVar0, 0) && func_301(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_302(iParam0, *uParam1);
	}
	if ((!func_67(iVar0, 0) || !func_301(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_303(uParam1);
	}
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;

	func_136(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]));
	if (func_134(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_134(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/] = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/];
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_1 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_2 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_2;
			func_305(iParam0, iVar0, func_304(iParam0, iVar0 + 1));
			func_303(&(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]));
			func_305(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

int func_138(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_139(int iParam0)
{
	return func_306(iParam0) == joaat("WEAPON");
}

bool func_140(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

bool func_141(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	iVar0 = func_91();
	if (func_261(iVar0))
	{
		iVar1 = func_92(iVar0);
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_142(var uParam0)
{
	if (uParam0->f_1 != 6 && !func_161((1 << 23)))
	{
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, false);
		}
	}
	if (func_161((1 << 23)) && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, true);
	}
	if (func_307(-1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if (Global_1360165[*uParam0 /*1157*/].f_1152 == 3)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
	}
	if (func_207(Global_40.f_6563.f_475))
	{
		if (func_308(Global_40.f_6563.f_475, 1))
		{
			Global_40.f_6563.f_475 = -15;
		}
		else
		{
			PED::_0x633F83B301C87994(uParam0->f_5, 131);
		}
	}
	if (uParam0->f_1 == 6 || func_126(*uParam0) < 625.0f)
	{
		func_309(uParam0);
		func_310(uParam0);
	}
	if (func_144(*uParam0, 32))
	{
		if (!func_159(uParam0, (1 << 30)))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_ENTER")))
			{
				if ((((func_156(Global_1360165[*uParam0 /*1157*/].f_70, Global_36, 1) < 4.0f && func_311(Global_35, Global_1360165[*uParam0 /*1157*/].f_70, 0)) && func_156(func_312(7), Global_36, 1) > 4.0f) && PED::_GET_RIDER_OF_MOUNT(Global_1360165[*uParam0 /*1157*/].f_70, true) == 0) && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					func_314(40, MISC::GET_HASH_KEY(func_313(*uParam0, 0)), 1);
					func_100(uParam0, (1 << 30));
				}
			}
		}
	}
	if (func_315(*uParam0))
	{
		if (func_316(*uParam0))
		{
			if (!func_157(Global_1360165[*uParam0 /*1157*/].f_70, joaat("SCRIPT_TASK_HORSE_ACTION")))
			{
				TASK::TASK_HORSE_ACTION(Global_1360165[*uParam0 /*1157*/].f_70, 2, 0, 0);
			}
			func_318(38, MISC::GET_HASH_KEY(func_317(*uParam0, 0)), MISC::GET_HASH_KEY(func_313(*uParam0, 0)), 1);
		}
		else if (!func_159(uParam0, (1 << 29)))
		{
			func_318(39, MISC::GET_HASH_KEY(func_317(*uParam0, 0)), MISC::GET_HASH_KEY(func_313(*uParam0, 0)), 1);
			func_100(uParam0, (1 << 29));
		}
	}
}

bool func_143(int iParam0)
{
	switch (iParam0)
	{
		case joaat("W_SP_BOWARROW_CHARLES"):
		case joaat("W_MELEE_HATCHET04"):
		case joaat("W_REPEATER_CARBINE01"):
		case joaat("W_MELEE_TOMAHAWK02"):
		case joaat("W_MELEE_KNIFE08"):
		case joaat("W_MELEE_KNIFE20"):
		case joaat("W_MELEE_HATCHET05"):
		case joaat("W_MELEE_LASSO03"):
		case joaat("W_MELEE_KNIFE10"):
		case joaat("W_MELEE_KNIFE09"):
		case joaat("W_MELEE_KNIFE17"):
		case joaat("W_MELEE_HATCHET02"):
		case joaat("W_MELEE_HATCHET03"):
		case joaat("W_REVOLVER_SCHOFIELD01"):
		case joaat("W_MELEE_LASSO01"):
		case joaat("W_SHOTGUN_REPEATING01"):
		case joaat("W_REPEATER_WINCHESTER01"):
		case joaat("W_MELEE_TOMAHAWK01"):
		case joaat("W_PISTOL_MAUSER01"):
		case joaat("W_REVOLVER_CATTLEMAN01"):
		case joaat("W_MELEE_KNIFE16"):
		case joaat("W_SHOTGUN_SEMIAUTO01"):
		case joaat("W_MELEE_KNIFE15"):
		case joaat("W_MELEE_KNIFE03"):
		case joaat("W_MELEE_BROKENSWORD01"):
		case joaat("W_SHOTGUN_PUMPACTION01"):
		case joaat("W_MELEE_KNIFE01"):
		case joaat("W_MELEE_KNIFE02"):
		case joaat("W_MELEE_KNIFE04"):
		case joaat("W_PISTOL_VOLCANIC01"):
		case joaat("W_MELEE_KNIFE19"):
		case joaat("W_PISTOL_SEMIAUTO01"):
		case joaat("W_RIFLE_BOLTACTION01"):
		case joaat("W_MELEE_KNIFE18"):
		case joaat("W_REVOLVER_DOUBLEACTION06"):
		case joaat("W_MELEE_KNIFE06"):
		case joaat("W_RIFLE_CARCANO01"):
		case joaat("W_REVOLVER_SCHOFIELD02"):
		case joaat("W_REPEATER_PUMPACTION01"):
		case joaat("W_MELEE_KNIFE07"):
		case joaat("W_REVOLVER_SCHOFIELD03"):
		case joaat("W_REVOLVER_CATTLEMAN02"):
		case joaat("W_RIFLE_ROLLINGBLOCK01"):
		case joaat("W_REVOLVER_DOUBLEACTION03"):
		case joaat("W_REVOLVER_SCHOFIELD04"):
		case joaat("W_PISTOL_MAUSER02"):
		case joaat("W_MELEE_HATCHET06"):
		case joaat("W_MELEE_KNIFE05"):
		case joaat("W_REPEATER_HENRY01"):
		case joaat("W_REVOLVER_CATTLEMAN03"):
		case joaat("W_REVOLVER_DOUBLEACTION02"):
		case joaat("W_MELEE_KNIFE12"):
		case joaat("W_SHOTGUN_DOUBLEBARREL01"):
		case joaat("W_MELEE_KNIFE14"):
		case joaat("W_MELEE_HATCHET07"):
		case joaat("W_MELEE_KNIFE11"):
		case joaat("W_REVOLVER_DOUBLEACTION01"):
		case joaat("W_MELEE_KNIFE13"):
		case joaat("W_RIFLE_SPRINGFIELD01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_144(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1 != 0;
}

void func_145(var uParam0)
{
	func_9(*uParam0, 2, bLocal_139);
	func_319(*uParam0);
}

float func_146()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 4 || iVar0 > 19)
	{
		return 0.8f;
	}
	else if (iVar0 > 17)
	{
		return 0.7f;
	}
	else if (iVar0 > 12)
	{
		return 0.5f;
	}
	return 0.3f;
}

void func_147(int iParam0, float fParam1)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_SET_PED_DRUNKNESS(iVar0, true, fParam1);
}

void func_148(int iParam0)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_SET_PED_DRUNKNESS(iVar0, false, 0.0f);
}

int func_149(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
	{
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_command");
	}
	return 0;
}

void func_150(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_command");
	}
}

bool func_151(int iParam0)
{
	return func_4(iParam0, 5, 1);
}

int func_152(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_watch_mode"))
	{
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_watch_mode");
	}
	return -1;
}

void func_153(var uParam0)
{
	DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_watch_mode");
}

int func_154(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f /*3*/ };
			*uParam2 = 186.0f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f /*3*/ };
			*uParam2 = 0.0f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_155(var uParam0)
{
	if (func_144(*uParam0, (1 << 10)))
	{
		return true;
	}
	return false;
}

float func_156(int iParam0, Vector3 vParam1, bool bParam4)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_296(vVar0, vParam1);
}

bool func_157(int iParam0, int iParam1)
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

bool func_158(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		if (func_67(iVar0, 0))
		{
			return false;
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 156, true))
	{
		return true;
	}
	return false;
}

bool func_159(var uParam0, int iParam1)
{
	return uParam0->f_2 & iParam1 != 0;
}

int func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_144(iParam0, 128))
	{
		func_283(iParam0);
		func_30(iParam0, 128, 0);
	}
	iVar0 = func_128(iParam0);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_13)
	{
		case 2:
			if (func_4(iParam0, 42, 1))
			{
				func_12(iParam0, 42, 1);
				bVar1 = false;
				bVar2 = func_182(iParam0);
				if (func_67(iVar0, 0))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!bVar2)
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
						vVar6 = { ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false) /*3*/ };
						fVar9 = BUILTIN::VDIST2(vVar3, vVar6);
						if (fVar9 < (8.0f * 8.0f))
						{
							return 1;
						}
						else if (fVar9 > 2500.0f)
						{
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
						}
						else
						{
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
						}
					}
					else if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_35)
					{
						if (!func_184(iVar0))
						{
							Global_1360165[iParam0 /*1157*/].f_123 = iVar0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_312(7)))
						{
							func_320(iParam0, func_312(7), 0, 0);
						}
						else
						{
							func_185(iParam0);
							func_26(iParam0, 40, 1);
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
						}
					}
					else
					{
						func_26(iParam0, 40, 1);
						Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
					}
				}
				else
				{
					func_26(iParam0, 40, 1);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
				}
			}
			break;
		case 4:
			if (func_67(iVar0, 0))
			{
				func_30(iParam0, 64, 1);
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
			}
			else
			{
				iVar0 = func_214(iParam0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_14.f_12 = 1;
				if (func_321(&(Global_1360165[iParam0 /*1157*/].f_70.f_14), Global_36, Global_1900383[0 /*45*/].f_38, 0, 1065353216))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, Global_1360165[iParam0 /*1157*/].f_70.f_14.f_3.f_3, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
				}
				else if (Global_1360165[iParam0 /*1157*/].f_70.f_14.f_1)
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				if (!func_181(iParam0, 1120403456))
				{
					TASK::TASK_GO_TO_WHISTLE(iVar0, Global_1360165[iParam0 /*1157*/], 0);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 8;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_181(iParam0, 1120403456))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
					return 1;
				}
				else if (!func_157(iVar0, joaat("SCRIPT_TASK_GO_TO_WHISTLE")))
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
	}
	return 0;
}

bool func_161(int iParam0)
{
	return Global_1359489.f_16 & iParam0 != 0;
}

void func_162(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_281(func_112(iParam0)))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_13 == 2 && !func_4(iParam0, 42, 1))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, (0.4f * (float)func_293(1)));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar0 + 0.5f), (fVar0 + (1.5f * (float)func_293(1))));
		if (!func_157(func_112(iParam0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			func_168(iParam0, 0, "triggering horse whistle");
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			func_322(0, joaat("WHISTLEHORSELONG"), joaat("UNSPECIFIED"));
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::_TASK_PERFORM_SEQUENCE_2(func_112(iParam0), iVar2, fVar0, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		func_26(iParam0, 42, 1);
	}
}

char* func_163()
{
	int iVar0;
	char* sVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			sVar1 = "COMPANION_FIGHT_EARLY_FLEE";
			break;
		case 1:
			sVar1 = "WHATS_YOUR_PROBLEM";
			break;
		case 2:
			sVar1 = "COMPANION_FIGHT_EARLY_REACTION";
			break;
		default:
			sVar1 = "COMPANION_FIGHT_EARLY_CALLOUT";
			break;
	}
	return sVar1;
}

bool func_164(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_323(iParam0, &sVar0);
}

void func_165(var uParam0, int iParam1)
{
	uParam0->f_3 -= uParam0->f_3 & iParam1;
}

char* func_166()
{
	int iVar0;
	char* sVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			sVar1 = "ALLY_TAUNT_ENEMY";
			break;
		case 1:
			sVar1 = "GENERIC_CURSE_HIGH";
			break;
		case 2:
			sVar1 = "ALLY_UNDER_FIRE_NEAR";
			break;
		default:
			sVar1 = "GENERIC_CURSE_MED";
			break;
	}
	return sVar1;
}

bool func_167(int iParam0)
{
	return func_4(iParam0, 33, 1);
}

void func_168(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

bool func_169(var uParam0, int iParam1)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, iParam1, true) == 1)
	{
		return true;
	}
	return false;
}

void func_170(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_102)
	{
		return;
	}
	uParam0->f_102 = iParam1;
}

Vector3 func_171(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_261(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) /*3*/ };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

Vector3 func_172(int iParam0)
{
	Vector3 vVar0;
	var uVar3;

	func_175(&vVar0, &uVar3);
	return vVar0 + func_324(iParam0);
}

bool func_173(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43806[iVar0 /*6*/], false)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, Global_43806[iVar0 /*6*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_174(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_325(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &sVar0);
		if ((bParam3 || sVar0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == joaat("LAW_DISPATCH_PENDING"))
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &sVar18))
		{
			if (sVar18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(sVar18.f_0, sVar18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

int func_175(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_91();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f /*3*/ };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f /*3*/ };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f /*3*/ };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f /*3*/ };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f /*3*/ };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f /*3*/ };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f /*3*/ };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f /*3*/ };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_258(4) /*3*/ };
			*uParam1 = 0.0f;
			break;
		default:
			return 0;
	}
	return 1;
}

Vector3 func_176(Vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		fVar1 = (1.0f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) /*3*/ };
	}
	else
	{
		vParam0.x = 0.0f;
		vParam0.f_1 = 0.0f;
		vParam0.f_2 = 0.0f;
	}
	return vParam0;
}

bool func_177(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_326(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 /*3*/ };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + (float)iParam1);
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - (float)iParam1);
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - (float)iParam1);
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_178(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_179(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (bParam1)
			{
				if (func_200(Global_1360165[iParam0 /*1157*/], 1116471296, -1082130432, -1082130432, -1082130432))
				{
					return;
				}
				else if (func_200(iVar0, 1116471296, -1082130432, -1082130432, -1082130432))
				{
					return;
				}
			}
			if (func_182(iParam0))
			{
				return;
			}
			func_168(iParam0, 0, "force companion onto horse");
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			ENTITY::SET_ENTITY_COORDS(iVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false), true, false, true, true);
			PED::SET_PED_ONTO_MOUNT(Global_1360165[iParam0 /*1157*/], iVar0, -1, true);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
	}
}

float func_180(int iParam0, int iParam1)
{
	return func_327(iParam0, iParam1, 1, 1);
}

bool func_181(int iParam0, float fParam1)
{
	float fVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_67(func_128(iParam0), 0))
	{
		fVar0 = func_130(Global_1360165[iParam0 /*1157*/], func_128(iParam0), 1);
		if (fVar0 < fParam1)
		{
			return true;
		}
		if (func_328(func_128(iParam0)) && fVar0 < 625.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_182(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_67(func_128(iParam0), 0))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(func_128(iParam0), false);
		if (iVar0 != 0 && iVar0 != Global_1360165[iParam0 /*1157*/])
		{
			return true;
		}
	}
	return false;
}

void func_183(var uParam0, bool bParam1, char* sParam2)
{
	uParam0->f_103 = uParam0->f_102;
	func_170(uParam0, 0);
	func_168(*uParam0, bParam1, sParam2);
}

bool func_184(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_329(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_185(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if ((func_67(iVar0, 0) && !func_184(iVar0)) && !func_6(iParam0, (1 << 15), 1))
	{
		PED::_0xBCC76708E5677E1D(iVar0, false);
	}
	Global_1360165[iParam0 /*1157*/].f_70 = 0;
}

int func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	if (!func_56(iParam0))
	{
	}
	bVar0 = false;
	if (func_330(iParam1) == iParam0)
	{
	}
	else
	{
		func_320(iParam0, iParam1, bParam3, 0);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (!func_21(iParam0))
		{
			if (!func_331(iParam0, bParam4, 1, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	if (!bVar0)
	{
		func_332(iParam1, iParam0);
	}
	return 1;
}

void func_187(var uParam0)
{
	func_333(*uParam0, 0);
	bLocal_139 = true;
}

bool func_188(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return false;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false))
			{
				if ((iVar1 != joaat("OBJECT_1") && iVar1 != joaat("OBJECT_2")) && iVar1 != joaat("WEAPON_UNARMED"))
				{
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_189(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_4;
}

float func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1.0f;
		case 2:
			return 2.0f;
	}
	return 1.0f;
}

Vector3 func_191(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_7;
}

bool func_192(int iParam0)
{
	return ((iParam0 == Global_1357549.f_1497 && Global_1357549.f_1497.f_5 >= 4) && Global_1357549.f_1497.f_5 < 11);
}

bool func_193()
{
	return func_293(1) < 3;
}

bool func_194(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_125(iParam0) || func_4(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == joaat("SLEEP");
}

bool func_195(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_334(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_196(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			if (func_63(Global_1835011[43 /*74*/].f_1, 1) && !func_63(Global_1835011[59 /*74*/].f_1, 1))
			{
				return true;
			}
			break;
		case 4:
			if (func_195(joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"), 1))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_197(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
			{
				return -1205468859;
			}
			return -445211559;
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
		case 3:
		case 4:
		case 18:
			return 1744281750;
		case 11:
			return -946772361;
		default:
			break;
	}
	return 0;
}

int func_198(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_63(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_335(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_63(Global_1347702[63 /*49*/].f_15, 1) || func_336(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_335(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_63(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_6(18, (1 << 27), 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_335(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_63(Global_1347702[134 /*49*/].f_15, 1) || func_336(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_63(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_335(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_195(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_63(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_66(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_199(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_200(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_337(iParam0, Global_36, 1);
	}
	if (fParam2 > 0.0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			if (fParam4 > 0.0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_201(var uParam0)
{
	float fVar0;
	float fVar1;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_5, 0) || !uParam0->f_11)
	{
		fVar0 = 12500.0f;
	}
	else
	{
		fVar0 = 7500.0f;
	}
	fVar1 = BUILTIN::SQRT(func_337(uParam0->f_5, Global_36, 1));
	fVar0 /= fVar1;
	return BUILTIN::ROUND(fVar0);
}

void func_202(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("HATS")))
		{
			PED::_EQUIP_META_PED_OUTFIT(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("HATS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		}
	}
}

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_199(iParam2))
		{
			iVar0 = func_62(iParam2, -1);
			if (func_223(iParam1, iVar0))
			{
				if (func_338(iParam1, iVar0))
				{
					if (func_339(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_340(iParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(iParam1, iVar0);
				}
			}
		}
		func_225(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(iParam1, 0.0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_26(iParam0, 66, 0);
		}
	}
}

void func_204(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 1484386316)
			{
				func_65(*uParam0, (1 << 23), 1);
			}
			break;
		case 14:
			if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964)
			{
				func_65(*uParam0, (1 << 24), 1);
			}
			else if (Global_40.f_4942[*uParam0 /*60*/].f_3 == 1484386316 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 1254970547)
			{
				func_65(*uParam0, (1 << 24), 0);
				func_225(*uParam0, uParam0->f_5, 1);
				PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 622113465);
			}
			break;
		case 4:
			if (func_239(45))
			{
				if (func_195(joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"), 1))
				{
					func_65(*uParam0, (1 << 13), 1);
				}
				else
				{
					func_65(*uParam0, (1 << 13), 0);
					func_225(*uParam0, uParam0->f_5, 1);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 1544915253);
				}
				if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 867156718)
				{
					func_65(*uParam0, (1 << 26), 1);
				}
				else
				{
					func_65(*uParam0, (1 << 26), 0);
					func_225(*uParam0, uParam0->f_5, 1);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], -271415321);
				}
			}
			break;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;

	if (iParam1 == 4 && !(func_195(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1) || func_195(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1)))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		iVar1 = CLOCK::GET_CLOCK_MINUTES();
		if ((iVar0 >= 22 || iVar0 < 5) || (iVar0 == 5 && iVar1 <= 59))
		{
			iVar2 = func_81();
			if (iVar0 >= 22)
			{
				func_341(&iVar2, 0, 0, 0, 1, 0, 0, 1);
			}
			func_342(&iVar2, 6);
			func_343(&iVar2, 0);
			func_344(iVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7, &uVar8);
			if (iVar4 > 0 || iVar5 > 0)
			{
				func_345(iParam0, 0, iVar4, iVar5, 0, 0, 1);
			}
		}
	}
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (iParam1 == 6 || iParam1 == 5)
	{
		iVar0 = func_69();
		iVar1 = func_346(iParam0);
		bVar2 = false;
		bVar3 = false;
		if (iVar0 != 6 && iParam1 == 6)
		{
			if (iVar1 == 6)
			{
				bVar3 = true;
			}
			bVar2 = true;
		}
		else if (iVar0 != 0 && iParam1 == 5)
		{
			if (iVar1 == 5)
			{
				bVar3 = true;
			}
			bVar2 = true;
		}
		if (bVar2)
		{
			func_345(iParam0, 0, 0, 0, 0, bVar3, 0);
		}
	}
}

bool func_207(int iParam0)
{
	return iParam0 != -15;
}

bool func_208(int iParam0, int iParam1)
{
	if (!func_347(iParam1) || !func_347(iParam0))
	{
		return true;
	}
	return iParam0 >= iParam1;
}

void func_209(var uParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	func_348(Global_1899515, iParam2, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
	iVar6 = func_349(iParam2);
	iVar7 = func_350(iParam2);
	if ((iVar6 == func_349(Global_1899515) && iVar7 == func_350(Global_1899515)) && iVar3 == 0)
	{
		return;
	}
	PERSCHAR::_0xA4DCB3F0DD7488BD(uParam0->f_6, uParam1, iVar7, iVar6, iVar3);
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 13:
			return 25;
		case 14:
			return 26;
		case 15:
			return 27;
		case 16:
			return 28;
		case 17:
			return 29;
		case 18:
			return 30;
		case 19:
			return 31;
		case 20:
			return 32;
		case 21:
			return 33;
		case 22:
			return 34;
		case 23:
			return 35;
		default:
			break;
	}
	return -1;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
		case joaat("CSTAG_MOOD_BILL_DOWN"):
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
		case joaat("CSTAG_MOOD_JACK_DOWN"):
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 1;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 2;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 3;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 4;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
		case joaat("CSTAG_MOOD_BILL_COLTER"):
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
		case joaat("CSTAG_MOOD_JACK_COLTER"):
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 5;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 6;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 7;
		default:
			break;
	}
	return 0;
}

bool func_212(int iParam0)
{
	return iParam0 != 0;
}

bool func_213(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_6(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_6(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_6(iParam0, 4, 1))
	{
		return false;
	}
	if (func_4(iParam0, 33, 1))
	{
		return false;
	}
	if (func_125(iParam0))
	{
		return false;
	}
	if (func_351(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

int func_214(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_READY_TO_RENDER(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_215(int iParam0)
{
	switch (func_353())
	{
		case -1:
			return Global_1357549.f_1495 & iParam0 != 0;
	}
	return false;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_66(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

int func_218(int iParam0)
{
	if (!func_266(iParam0))
	{
		return -1;
	}
	return func_354(iParam0);
}

void func_219(int iParam0)
{
	func_221(iParam0, 1);
	func_221(iParam0, 128);
	func_221(iParam0, 256);
	func_221(iParam0, (1 << 9));
	func_221(iParam0, (1 << 10));
	func_221(iParam0, (1 << 11));
	func_221(iParam0, (1 << 12));
	func_221(iParam0, (1 << 16));
	func_221(iParam0, (1 << 14));
	func_221(iParam0, (1 << 18));
	func_221(iParam0, (1 << 19));
	func_221(iParam0, (1 << 20));
	func_221(iParam0, (1 << 21));
	func_221(iParam0, (1 << 15));
	func_221(iParam0, (1 << 17));
	func_221(iParam0, (1 << 27));
	func_221(iParam0, (1 << 30));
}

void func_220(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_221(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 -= Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1;
}

bool func_222(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 860729266;
			return true;
		case 128:
			*uParam1 = 1606325429;
			return true;
		case 256:
			*uParam1 = 1743550585;
			return true;
		case 512:
			*uParam1 = 1064646155;
			return true;
		case 1024:
			*uParam1 = -536694793;
			return true;
		case 2048:
			*uParam1 = -1304053509;
			return true;
		case 4096:
			*uParam1 = 879715242;
			return true;
		case 65536:
			*uParam1 = -972364774;
			return true;
		case 16384:
			*uParam1 = -1100875244;
			return true;
		case 262144:
			*uParam1 = 1153596794;
			return true;
		case 524288:
			*uParam1 = 1016389820;
			return true;
		case 1048576:
			*uParam1 = -726966617;
			return true;
		case 2097152:
			*uParam1 = 1365901568;
			return true;
		case 32768:
			*uParam1 = -1658942149;
			return true;
		case 131072:
			*uParam1 = -1980913856;
			return true;
		case 134217728:
			*uParam1 = -1683207356;
			return true;
		case 1073741824:
			*uParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_223(int iParam0, int iParam1)
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

void func_224(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 |= iParam1;
}

void func_225(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_223(iParam1, 860729266))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 12) > 0 && func_223(iParam1, 879715242))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_223(iParam1, 1606325429))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_223(iParam1, 1743550585))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 9) > 0 && func_223(iParam1, 1064646155))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 10) > 0 && func_223(iParam1, -536694793))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 11) > 0 && func_223(iParam1, -1304053509))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 31) > 0 && func_223(iParam1, 718939204))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 16) > 0 && func_223(iParam1, -972364774))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 14) > 0 && func_223(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 18) > 0 && func_223(iParam1, 1153596794))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 19) > 0 && func_223(iParam1, 1016389820))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 20) > 0 && func_223(iParam1, -726966617))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 21) > 0 && func_223(iParam1, 1365901568))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 15) > 0 && func_223(iParam1, -1658942149))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 17) > 0 && func_223(iParam1, -1980913856))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 22) > 0 && func_223(iParam1, 491764525))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 23) > 0 && func_223(iParam1, -76015264))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 24) > 0 && func_223(iParam1, 622113465))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 25) > 0 && func_223(iParam1, 781533162))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 26) > 0 && func_223(iParam1, -271415321))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 27) > 0 && func_223(iParam1, -1683207356))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 28) > 0 && func_223(iParam1, -254794762))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 29) > 0 && func_223(iParam1, 609066278))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 30) > 0 && func_223(iParam1, -1712783565))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 13) > 0 && func_223(iParam1, 1544915253))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

bool func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return false;
	}
	func_355(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_227(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_228(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_257() - fParam1);
	func_356(uParam0, 1);
	func_357(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_229(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_358(*uParam0, joaat("COMMENT_ON_FOOD_GOOD"), 0, 0);
		func_359(uParam0, 2);
		func_232(uParam0, 0);
	}
	else
	{
		func_358(*uParam0, joaat("COMMENT_ON_FOOD_BAD"), 0, 0);
		func_359(uParam0, 1);
		func_232(uParam0, 1);
	}
}

float func_230()
{
	return Global_1357549.f_1900;
}

bool func_231()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(*uParam0, joaat("COMMENT_ON_FOOD_GOOD"));
		func_360(uParam0, 2);
	}
	else
	{
		func_32(*uParam0, joaat("COMMENT_ON_FOOD_BAD"));
		func_360(uParam0, 1);
	}
}

bool func_233(var uParam0)
{
	return func_256(*uParam0, 2);
}

int func_234()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1092196885;
		case 6:
			return 837806200;
		case 0:
			return 1670677840;
		case 2:
			return -945092648;
		case 1:
			return -437500449;
		case 4:
			return -1701309802;
		case 3:
			return -1644068043;
		case 7:
			return -1904006265;
		case 8:
			return 1047384062;
		default:
			break;
	}
	return 0;
}

bool func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

int func_237(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 263, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 265, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 171, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 137, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 229, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 259, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 48, true);
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 321, true);
			break;
		case 1:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
			PED::SET_PED_CONFIG_FLAG(iParam0, 40, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 152, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 154, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 25, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 166, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 87, true);
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
			EVENT::SET_DECISION_MAKER(iParam0, joaat("DM_MEDIUM_DOMESTIC_ANIMAL"));
			break;
	}
	return 1;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_114(iParam0))
	{
		iVar1 = func_112(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_361(iParam0);
		}
	}
	if (func_4(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_112(iParam0), 137, true);
	}
}

bool func_239(int iParam0)
{
	if (!func_362(iParam0))
	{
		return false;
	}
	return func_363(iParam0);
}

bool func_240(int iParam0)
{
	if (func_353() != -1)
	{
		return false;
	}
	if (!func_264(iParam0))
	{
		return false;
	}
	return func_63(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_241()
{
	if (func_353() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_242(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;

	vVar0 = { Global_40.f_4942[iParam0 /*60*/].f_8 /*3*/ };
	if (func_134(vVar0.x))
	{
		iVar3 = vVar0.y;
		if (iVar3 != -15 && func_47(iVar3))
		{
			func_32(iParam0, vVar0.x);
		}
		else if (vVar0.z)
		{
		}
		else if (func_364(iParam0, vVar0.x))
		{
		}
	}
	iVar4 = 0;
	while (iVar4 < 10)
	{
		vVar0 = { Global_40.f_4942[iParam0 /*60*/].f_11[iVar4 /*3*/] /*3*/ };
		if (func_134(vVar0.x))
		{
			iVar5 = vVar0.y;
			if (iVar5 != -15 && func_47(iVar5))
			{
				func_32(iParam0, vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (func_364(iParam0, vVar0.x))
			{
			}
		}
		iVar4++;
	}
}

void func_243(int iParam0, float fParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!func_67(iVar0, 0))
	{
		return;
	}
	PED::_0x85F500F4E24CA43E(iVar0, fParam1);
	if (bParam3)
	{
		PED::_0x9B9B9FA0EA283E3D(iVar0, fParam1);
	}
	PED::_0xEC60D1D225BC50AA(iVar0, fParam2);
}

void func_244(var uParam0, bool bParam1)
{
	switch (*uParam0)
	{
		case 20:
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JAVIER"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("GRIMSHAW"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JAVIER"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("GRIMSHAW"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("DUTCH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("BILL"), 2, bParam1);
			break;
		case 13:
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("BILL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JAVIER"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("CLEET"), 1, bParam1);
			break;
		case 7:
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("BILL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("CLEET"), 1, bParam1);
			break;
		case 0:
			MISC::_0x0358B8A41916C613(joaat("DUTCH"), joaat("ABIGAIL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("DUTCH"), joaat("JOHN"), 2, bParam1);
			break;
		case 19:
			MISC::_0x0358B8A41916C613(joaat("GRIMSHAW"), joaat("KAREN"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("GRIMSHAW"), joaat("KAREN"), 1, bParam1);
			break;
		case 14:
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("CLEET"), 1, bParam1);
			break;
		case 2:
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("ABIGAIL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("JOHN"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("SADIE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("JACK"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("CHARLES"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("ABIGAIL"), 1, bParam1);
			break;
		case 1:
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("BILL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("DUTCH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("DUTCH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("BILL"), 1, bParam1);
			break;
		case 15:
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("CLEET"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("JOE"), 1, bParam1);
			break;
		case 11:
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("CLEET"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("BILL"), 1, bParam1);
			break;
		case 22:
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("CLEET"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("JOE"), 1, bParam1);
			break;
		case 3:
		case 4:
		case 6:
		case 17:
		case 18:
		case 21:
		case 23:
			break;
	}
}

void func_245(var uParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
}

void func_246(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_365(iParam0, bParam3);
	}
	else
	{
		func_366(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_249(iParam0, bParam3);
	}
	else
	{
		func_367(iParam0, bParam3);
	}
}

void func_247(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_114(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_37());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_368(iParam0, 0, 0);
}

void func_248(var uParam0)
{
	if (Global_1359489.f_673 == -1)
	{
		Global_1359489.f_673 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	}
	uParam0->f_101 = Global_1359489.f_673;
	Global_1359489.f_673++;
	if (Global_1359489.f_673 > 8)
	{
		Global_1359489.f_673 = 1;
	}
}

void func_249(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_369(iVar0);
	if (iParam0 == 14)
	{
		func_370(iVar0);
	}
	func_26(iParam0, 61, 1);
	if (bParam1)
	{
		func_371(iParam0);
	}
}

void func_250(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_12(iParam0, 50, 1);
		func_12(iParam0, 48, 1);
		func_12(iParam0, 49, 1);
		func_12(iParam0, 51, 1);
		func_12(iParam0, 52, 1);
		func_12(iParam0, 54, 1);
		func_12(iParam0, 55, 1);
	}
	else
	{
		func_26(iParam0, 50, 1);
		func_26(iParam0, 48, 1);
		func_26(iParam0, 49, 1);
		func_26(iParam0, 51, 1);
		if (bParam3)
		{
			func_26(iParam0, 54, 1);
		}
		else
		{
			func_12(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_26(iParam0, 52, 1);
			if (bParam3)
			{
				func_26(iParam0, 55, 1);
			}
		}
		else
		{
			func_12(iParam0, 52, 1);
			if (!bParam3)
			{
				func_12(iParam0, 55, 1);
			}
		}
	}
}

void func_251(int iParam0)
{
	func_219(iParam0);
	func_220(iParam0, 0);
}

void func_252(var uParam0, bool bParam1)
{
	if (!TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7) && !func_157(uParam0->f_5, joaat("SCRIPT_TASK_PERSISTENT_CHARACTER")))
	{
		if (bParam1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_5, true, false);
		}
		PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_44(*uParam0, 0));
	}
}

int func_253(int iParam0, bool bParam1)
{
	Vector3 vVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(func_372(iParam0), bParam1, false) /*3*/ };
	return func_373(vVar0, 4);
}

bool func_254(int iParam0, bool bParam1)
{
	if (func_374(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_375(5000))
		{
			return true;
		}
	}
	switch (func_376(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & (1 << 9) != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_255()
{
	return Global_1898164.f_163;
}

bool func_256(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_257()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

Vector3 func_258(int iParam0)
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
			return func_377();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_259()
{
	int iVar0;

	iVar0 = func_91();
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

bool func_260(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_296(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_261(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_262()
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
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_263(int iParam0)
{
	if (!func_266(iParam0))
	{
		return -1;
	}
	return func_379(func_378(iParam0));
}

bool func_264(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_265(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_266(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_267(int iParam0)
{
	switch (func_353())
	{
		case -1:
			return Global_1357549.f_1494 & iParam0 != 0;
	}
	return false;
}

int func_268()
{
	return Global_1894899.f_2;
}

int func_269(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_270(int iParam0)
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
		iVar0 = func_354(iParam0);
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

int func_271()
{
	if (Global_1894899.f_187)
	{
		return 1;
	}
	if (func_380(16) && !func_380(21))
	{
		return 1;
	}
	return 0;
}

bool func_272(int iParam0, var uParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[64];
	char cVar16[64];
	char* sVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;

	sVar0.f_0 = Global_1357549.f_576;
	iVar5 = func_381(iParam0);
	iVar6 = -1651099034;
	iVar7 = iVar5;
	iVar26 = func_91();
	iVar28 = func_69();
	iVar29 = func_61(iParam0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		iParam2 = 60;
	}
	iVar30 = *uParam1;
	iVar31 = (iVar30 + iParam2);
	if (iVar31 >= 60)
	{
		iVar31 = 59;
	}
	*uParam1 = iVar30;
	while (*uParam1 <= iVar31)
	{
		if (Global_40.f_4283.f_6[*uParam1 /*5*/] == 176656832)
		{
			return true;
		}
		iVar32 = func_382(Global_40.f_4283.f_6[*uParam1 /*5*/]);
		Global_1357549.f_578 = func_383(Global_40.f_4283.f_6[*uParam1 /*5*/], &iVar32);
		sVar0.f_1 = Global_1357549.f_578;
		iVar27 = func_384(Global_40.f_4283.f_6[*uParam1 /*5*/]);
		if (iVar27 != iVar28)
		{
		}
		else
		{
			iVar25 = func_385(iVar27);
			if (iVar25 == -1)
			{
				iVar25 = iVar26;
			}
			sVar24 = func_386(iVar25);
			sVar0.f_3 = iVar7;
			if (func_387(sVar0, iVar6, &cVar8, 0))
			{
				strcpy_s(&cVar16, 64, sVar24);
				strcat_s(&cVar16, 64, "/");
				strcat_s(&cVar16, 64, &cVar8);
				Global_40.f_4942[iParam0 /*60*/].f_51 = { cVar16 /*8*/ };
				if (!func_4(iParam0, 17, 1))
				{
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(iVar29, &(Global_40.f_4942[iParam0 /*60*/].f_51));
				}
				Global_1360165[iParam0 /*1157*/].f_47 = 0;
				Global_1360165[iParam0 /*1157*/].f_56 = 1;
				return true;
			}
		}
		*uParam1++;
	}
	return *uParam1 >= 60;
}

bool func_273(var uParam0)
{
	int iVar0;

	if (uParam0->f_120 > -1)
	{
		if (func_388(uParam0->f_5, uParam0->f_120))
		{
			if (func_389(&(uParam0->f_115), uParam0->f_5, uParam0->f_120))
			{
				return true;
			}
		}
		else
		{
			uParam0->f_120 = -1;
		}
	}
	else
	{
		iVar0 = func_390(uParam0->f_5);
		if (iVar0 > -1)
		{
			uParam0->f_120 = iVar0;
			func_391(&(uParam0->f_115));
		}
	}
	return false;
}

int func_274(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
	{
		return -1;
	}
	return Global_1359489.f_63.f_242[iParam0 /*18*/];
}

void func_275(int iParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;

	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_16)
	{
		vVar0 = { Global_1359489.f_63.f_242[iParam1 /*18*/].f_2 /*3*/ };
		iVar3 = Global_1359489.f_63.f_242[iParam1 /*18*/];
		iVar4 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_7;
		uVar5 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_9;
		uVar6 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_12;
		uVar7 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_17;
		func_392(iVar3, iVar4, uVar5, 0.0f, 0.0f, 0.0f, vVar0, 1069547520, 1075838976, 1056964608, uVar6, iParam1, 0, uVar7);
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_16 = 1;
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_8++;
	}
	else
	{
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_8++;
	}
}

void func_276(var uParam0)
{
	Vector3 vVar0;

	func_393(uParam0);
	func_246(*uParam0, 1, 0, 1);
	if (bLocal_138)
	{
		vVar0 = { func_191(uParam0->f_120) /*3*/ };
		if (!func_60(vVar0))
		{
			TASK::TASK_LOOK_AT_COORD(uParam0->f_5, vVar0, 10000, 0, 51, 0);
		}
	}
	if (func_394(uParam0->f_108))
	{
		uParam0->f_110 = { func_395(uParam0->f_108) /*4*/ };
		func_89(&(uParam0->f_19), 1);
		func_98(uParam0, (1 << 15));
	}
	uParam0->f_114 = func_396(uParam0->f_108);
	uParam0->f_109 = 0;
	uParam0->f_8 = { 0.0f, 0.0f, 0.0f /*3*/ };
	func_2(uParam0, 18);
}

void func_277(var uParam0)
{
	if (bLocal_138)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
	}
	uParam0->f_105 = -1650437862;
	func_2(uParam0, 19);
}

bool func_278(var uParam0)
{
	Vector3 vVar0;
	var uVar3;

	func_175(&vVar0, &uVar3);
	if (func_337(uParam0->f_5, vVar0, 1) < 6.5f)
	{
		return true;
	}
	return false;
}

bool func_279(var uParam0)
{
	Vector3 vVar0;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(uParam0->f_5, 1000))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) /*3*/ };
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 7.5f))
	{
		return true;
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 3.0f, true))
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0)
{
	return func_397(iParam0, 4);
}

bool func_281(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_282(var uParam0)
{
	Vector3 vVar0;
	var uVar3;
	Vector3 vVar4;

	if (func_281(uParam0->f_5))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_70) || (!func_161((1 << 9)) && !(func_181(*uParam0, 400.0f) && !func_182(*uParam0))))
	{
		func_175(&vVar0, &uVar3);
		vVar4 = { vVar0 /*3*/ };
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), vVar4) < (float)func_398(func_69()))
		{
			return false;
		}
	}
	return true;
}

void func_283(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (func_144(iParam0, 64))
	{
		func_22(iParam0, 0, 1, 1, 0);
	}
	func_23(iParam0);
}

bool func_284(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return false;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return false;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_15;
}

bool func_285(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return false;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		if (Global_1359489.f_63.f_242[iParam1 /*18*/].f_14 != 0 && Global_1359489.f_63.f_242[iParam1 /*18*/].f_14 != 1)
		{
			return false;
		}
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(func_399(iParam0)) <= Global_1359489.f_63.f_242[iParam1 /*18*/].f_11)
		{
			return true;
		}
	}
	else
	{
		if (Global_1359489.f_63.f_242[iParam1 /*18*/].f_13 != 0 && Global_1359489.f_63.f_242[iParam1 /*18*/].f_13 != 1)
		{
			return false;
		}
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0) <= Global_1359489.f_63.f_242[iParam1 /*18*/].f_10)
		{
			return true;
		}
	}
	return false;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	var uVar6;
	int iVar7;
	Vector3 vVar8;
	Vector3 vVar11;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	if (Global_1359489.f_63[iParam0 /*24*/].f_15 || Global_1359489.f_63[iParam0 /*24*/].f_18)
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) /*3*/ };
	vVar3 = { Global_1359489.f_63[iParam0 /*24*/].f_7 /*3*/ };
	uVar6 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_6;
	iVar7 = Global_1359489.f_63[iParam0 /*24*/].f_1;
	vVar8 = { func_400(iParam1, iParam0, vVar0, vVar3, uVar6) /*3*/ };
	vVar11 = { func_176(vVar3 - vVar8) /*3*/ };
	Global_1359489.f_63[iParam0 /*24*/].f_4 = { vVar8 /*3*/ };
	Global_1359489.f_63[iParam0 /*24*/].f_10 = func_401(MISC::GET_HEADING_FROM_VECTOR_2D(vVar11.x, vVar11.y));
	Global_1359489.f_63[iParam0 /*24*/].f_3 = func_402(iVar7);
	Global_1359489.f_63[iParam0 /*24*/].f_18 = 1;
}

int func_287(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
	{
		return -1;
	}
	return Global_1359489.f_63.f_242[iParam0 /*18*/].f_14;
}

Vector3 func_288(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { func_176(Global_1359489.f_63[iParam0 /*24*/].f_4 - Global_1359489.f_63[iParam0 /*24*/].f_7) /*3*/ };
	vVar3 = { Global_1359489.f_63[iParam0 /*24*/].f_4 + Vector(5.0f, 5.0f, 5.0f) * vVar0 /*3*/ };
	fVar6 = 0.0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fVar6, false))
	{
		vVar3.f_2 = fVar6;
	}
	return vVar3;
}

int func_289(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return 0;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_23;
}

void func_290(var uParam0)
{
	if (uParam0->f_1 == 18 || uParam0->f_1 == 19)
	{
		if (uParam0->f_108 > -1)
		{
			func_403(uParam0->f_108);
		}
		uParam0->f_108 = -1;
		uParam0->f_120 = -1;
		uParam0->f_8 = { 0.0f, 0.0f, 0.0f /*3*/ };
		uParam0->f_109 = 0;
		func_25(uParam0, (1 << 17));
		func_165(uParam0, (1 << 15));
	}
	if (bLocal_139)
	{
		func_77(uParam0);
	}
	else if (func_90(uParam0->f_5))
	{
		func_104(uParam0);
	}
	else
	{
		func_79(uParam0);
	}
}

void func_291(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_292(int iParam0)
{
	return func_404(iParam0, 2);
}

int func_293(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_405(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_37(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_37(), iVar3);
		if (func_406(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_294()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_407(iVar0);
		iVar2 = func_407(iVar0 + 1);
		if (!func_114(iVar1))
		{
			if (func_114(iVar2))
			{
				Global_1359489[iVar0] = iVar2;
				Global_1359489[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

bool func_295(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_125(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_296(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_56(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; // curOff = 150
		}
		iVar1++;
	}
	if (!func_56(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_298(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_131(iParam0, 1);
		iVar1 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

bool func_299(int iParam0, int iParam1)
{
	return Global_40.f_4942[iParam0 /*60*/].f_8 == iParam1;
}

bool func_300(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] == iParam1)
		{
			return true;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return false;
}

bool func_301(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_299(iParam0, iParam1))
	{
		return func_408(iParam0);
	}
	iVar0 = -1;
	if (func_300(iParam0, iParam1, &iVar0))
	{
		return func_304(iParam0, iVar0);
	}
	return false;
}

void func_302(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_112(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		PED::_0x2B4CE170DE09F346(bVar0, iParam1);
	}
	func_409(iParam0, iParam1, 0);
}

void func_303(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_304(int iParam0, int iParam1)
{
	if ((!func_56(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1);
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	if ((!func_56(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
		{
			MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
	}
}

int func_306(int iParam0)
{
	Vector3 vVar0;

	if (!func_410(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_307(int iParam0)
{
	if (Global_1327590.f_19744 == -1)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		if (func_411(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_308(int iParam0, bool bParam1)
{
	return func_412(func_81(), iParam0, bParam1);
}

void func_309(var uParam0)
{
	if (func_161(128))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if (func_4(*uParam0, 50, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
	}
	if (func_4(*uParam0, 48, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if ((func_255() || func_4(*uParam0, 49, 0)) || func_413() == 0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
	}
	if (func_161((1 << 22)))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, 0.0f);
		func_26(*uParam0, 59, 1);
	}
	else if (func_4(*uParam0, 59, 1))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_139);
		func_12(*uParam0, 59, 1);
	}
	if (func_4(*uParam0, 56, 0))
	{
		if (func_85(&(Global_1359489.f_40)) && func_86(&(Global_1359489.f_40)) < 120.0f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		}
		else
		{
			func_12(*uParam0, 56, 1);
		}
	}
	if (func_4(*uParam0, 57, 0))
	{
		if (func_85(&(Global_1359489.f_43)) && func_86(&(Global_1359489.f_43)) < 10.0f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		}
		else
		{
			func_12(*uParam0, 57, 1);
		}
	}
}

void func_310(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;

	if (PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 34, 60000))
	{
		PED::_0xEBD49472BCCF7642(uParam0->f_5, PLAYER::PLAYER_ID());
		PED::_0x19173C3F15367B54(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
		PED::_0x5708EDD71B50C008(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
	}
	bVar0 = func_4(*uParam0, 53, 0);
	bVar1 = func_4(*uParam0, 52, 0);
	bVar2 = func_4(*uParam0, 55, 0);
	bVar3 = func_4(*uParam0, 51, 0);
	bVar4 = func_161(64);
	bVar5 = func_161((1 << 10));
	bVar6 = func_4(*uParam0, 54, 0);
	bVar7 = ((*uParam0 == 16 && func_67(func_112(0), 0)) && func_130(uParam0->f_5, func_112(0), 1) < 64.0f);
	bVar8 = PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("WORLD_HUMAN_PEE"));
	bVar9 = false;
	if (func_4(*uParam0, 58, 0))
	{
		if (func_85(&(Global_1359489.f_46)) && func_86(&(Global_1359489.f_46)) < 600.0f)
		{
			bVar9 = true;
		}
		else
		{
			func_12(*uParam0, 58, 1);
			func_88(&(Global_1359489.f_46));
		}
	}
	if (bVar8)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		if (!bVar0)
		{
			func_26(*uParam0, 53, 1);
			bVar0 = true;
		}
	}
	if (bVar0 && !bVar8)
	{
		func_12(*uParam0, 53, 1);
		bVar0 = false;
	}
	if (bVar1 || bVar0)
	{
		if (bVar2)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 53, true);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, true);
		}
	}
	if ((!bVar1 && !bVar0) && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, false);
	}
	if (bVar5 && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, true);
	}
	if (((((bVar3 || bVar4) || bVar9) || bVar5) || bVar7) || bVar0)
	{
		if (bVar6)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 185, true);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, true);
		}
	}
	if ((((((!bVar3 && !bVar4) && !bVar9) && !bVar5) && !bVar7) && !bVar0) && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, false);
	}
	if (!bVar5 && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, false);
	}
}

bool func_311(int iParam0, int iParam1, int iParam2)
{
	return func_414(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), iParam2);
}

int func_312(int iParam0)
{
	iParam0 = func_415(iParam0);
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

char* func_313(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_63(Global_1835011[59 /*74*/].f_1, 1) || func_63(Global_1347702[1 /*49*/].f_15, 1)) || func_336(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_195(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_314(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_416(iParam0, &iVar0, &iVar1);
	if (!func_417(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_418(iParam0, (1 << 10)))
	{
		return;
	}
	func_419(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

bool func_315(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_67(func_128(iParam0), 0))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(func_128(iParam0), false);
		if (iVar0 == Global_35)
		{
			return true;
		}
	}
	return false;
}

bool func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return !func_420(1);
		case 6:
			return !func_420(2);
		case 7:
			return !func_420(4);
		default:
			break;
	}
	return false;
}

char* func_317(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_416(iParam0, &iVar0, &iVar1);
	if (!func_417(iParam0, iVar0, iVar1, bParam3))
	{
		return;
	}
	if (!func_418(iParam0, (1 << 10)))
	{
		return;
	}
	func_419(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	Global_1905944.f_22[iParam0 /*9*/].f_3[1 /*2*/] = iParam2;
	Global_1905944.f_22[iParam0 /*9*/].f_3[1 /*2*/].f_1 = 2;
}

void func_319(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 != Global_1360165[iParam0 /*1157*/].f_13 || func_4(iParam0, 36, 1))
	{
		func_12(iParam0, 36, 1);
		Global_1360165[iParam0 /*1157*/].f_12 = Global_1360165[iParam0 /*1157*/].f_13;
		func_421(iParam0, &(Global_1360165[iParam0 /*1157*/].f_2));
	}
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_26(iParam0, 43, 1);
	}
	iVar0 = func_128(iParam0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iParam1) && PED::_GET_ACTIVE_ANIMAL_OWNER(iVar0) == func_112(iParam0))
	{
		PED::_0xBCC76708E5677E1D(iVar0, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != func_112(iParam0))
	{
		return 0;
	}
	iVar2 = PED::_GET_ACTIVE_ANIMAL_OWNER(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar3 = func_422(iVar2);
		if (func_114(iVar3))
		{
			if (iVar3 != iParam0)
			{
				return 0;
			}
		}
		else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
		{
			return 0;
		}
		else if (PED::_IS_MOUNT_SEAT_FREE(iParam1, -1))
		{
			PED::_0xBCC76708E5677E1D(iParam1, false);
		}
		else
		{
			return 0;
		}
	}
	bVar4 = func_67(func_112(iParam0), 0);
	if (bParam3 || bVar4)
	{
		if (bVar4)
		{
			PED::SET_PED_OWNS_ANIMAL(func_112(iParam0), iParam1, false);
			PED::_0xED1C764997A86D5A(func_112(iParam0), iParam1);
		}
	}
	else
	{
		func_26(iParam0, 38, 1);
	}
	func_332(iParam1, iParam0);
	Global_1360165[iParam0 /*1157*/].f_70 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_124 = 0;
	return 1;
}

bool func_321(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7, float fParam8)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	float fVar7;
	Vector3 vVar8;
	bool bVar11;
	int iVar12;

	iVar6 = 12;
	if (func_60(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) /*3*/ };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_423(vParam4, vParam1, 1);
	}
	fVar7 += ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10.0f) * func_424((uParam0->f_2 % 2) == 0, 1.0f, -1.0f));
	vVar0 = { vParam1 + Vector(0.0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FloatToVector(((80.0f + 40.0f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) /*3*/ };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_425(uParam0))
	{
		case 0:
			func_426(uParam0, 0.0f, 0.0f, 0.0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_427(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3.0f, 0.0f))
			{
				if (func_428(vVar3, vParam1, 0, 0))
				{
					func_426(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_427(uParam0, 3);
					}
					else
					{
						func_427(uParam0, 4);
					}
				}
				else
				{
					func_427(uParam0, 2);
				}
			}
			else
			{
				func_427(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_429(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344, 1101004800, -1138501878, -1138501878, 0))
			{
				if (func_428(func_430(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_427(uParam0, 3);
					}
					else
					{
						func_427(uParam0, 4);
					}
				}
				else
				{
					func_427(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_427(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(iParam7, func_430(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_427(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_NAVMESH_QUERY_STATUS(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						func_427(uParam0, 5);
						break;
					case 1:
						iVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_431(iVar12, 2) && iVar6 != 13)
						{
							func_427(uParam0, 5);
						}
						else
						{
							func_427(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_177(&(uParam0->f_3.f_3), 1, 1, 0);
			func_427(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_427(uParam0, 0);
			break;
	}
	return false;
}

void func_322(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(iParam0, iParam1, iParam2);
}

bool func_323(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

Vector3 func_324(int iParam0)
{
	Vector3 vVar0[3];
	int iVar10;

	vVar0[0 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	vVar0[1 /*3*/] = { 0.0f, -4.5f, 0.0f /*3*/ };
	vVar0[2 /*3*/] = { 3.5f, 2.5f, 0.0f /*3*/ };
	iVar10 = 0;
	while (iVar10 < func_293(1))
	{
		if (Global_1359489[iVar10] == iParam0)
		{
			return vVar0[iVar10 /*3*/];
		}
		iVar10++;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_325(bool bParam0, bool bParam1, bool bParam2)
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

bool func_326(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_327(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_328(int iParam0)
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

int func_329(int iParam0)
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

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (func_67(iParam0, 0))
	{
		iVar1 = PED::_GET_ACTIVE_ANIMAL_OWNER(iParam0);
		iVar0 = func_422(iVar1);
	}
	return iVar0;
}

bool func_331(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	Vector3 vVar1;

	if (!func_56(iParam0))
	{
		return false;
	}
	bVar0 = func_128(iParam0);
	if (func_67(Global_1360165[iParam0 /*1157*/].f_70, 0))
	{
		if (!func_21(iParam0))
		{
			if (bParam2)
			{
				if (!func_432(iParam0, bVar0, 1))
				{
					return false;
				}
			}
			else if (!func_433(iParam0, bVar0))
			{
				return false;
			}
			if (Global_1360165[iParam0 /*1157*/].f_70.f_11 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
				}
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(bVar0, 0);
				func_26(iParam0, 39, 1);
				func_30(iParam0, 8, 1);
				func_30(iParam0, 64, 0);
				func_434(iParam0, 0, 0, 1);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			vVar1.x = iParam3;
			vVar1.f_1 = iParam4;
			vVar1.f_2 = iParam5;
			if (!func_60(vVar1) && bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(bVar0, -1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(bVar0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(bVar0))
						{
							TASK::CLEAR_PED_TASKS(bVar0, true, false);
						}
						else
						{
							ENTITY::DETACH_ENTITY(bVar0, true, true);
						}
					}
					func_435(bVar0, vVar1, iParam6, 2, (1 << 30));
					return true;
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar0, 0) && !TASK::IS_PED_EXITING_SCENARIO(bVar0, true))
					{
						TASK::CLEAR_PED_TASKS(bVar0, true, false);
					}
					return false;
				}
			}
			return true;
		}
		else if (bParam1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
			func_26(iParam0, 39, 1);
			func_30(iParam0, 8, 1);
			func_30(iParam0, 64, 0);
			func_434(iParam0, 0, 0, 1);
			Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return true;
		}
	}
	return false;
}

void func_332(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_437(iParam0, func_436(iParam1));
	if (func_144(iParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_112(iParam1), iParam0, false);
		PED::_0xED1C764997A86D5A(func_112(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_26(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_144(iParam1, (1 << 12)))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 3, false);
	func_434(iParam1, func_144(iParam1, (1 << 13)), func_144(iParam1, (1 << 14)), 1);
}

int func_333(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> /*120*/ sVar1;

	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_18(iParam0, 0))
	{
		func_438(iParam0, 1);
		return 1;
	}
	if (!func_193())
	{
		return 0;
	}
	if (bParam1)
	{
		func_168(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			Global_1359489[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_438(iParam0, 1);
	Global_1359489.f_15 = func_293(1);
	func_26(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_COMPANION_GROUP"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_SET_PED_COMBAT_BEHAVIOUR(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_112(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_112(iParam0), Global_1391438.f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_37(), 0);
	func_439(iParam0);
	sVar1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	sVar1.f_12 = 3;
	sVar1.f_3 = Global_1360165[iParam0 /*1157*/];
	sVar1.f_7 = func_268();
	sVar1.f_8 = 0;
	sVar1.f_11 = 10;
	sVar1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_CREATE_AI_MEMORY(&sVar1, 17);
	return 1;
}

bool func_334(int iParam0)
{
	int iVar0;
	int iVar1;

	func_440(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_335(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_336(int iParam0)
{
	int iVar0;

	iVar0 = func_218(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

float func_337(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_338(int iParam0, int iParam1)
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

bool func_339(int iParam0, int iParam1)
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
	if (!func_223(iParam0, iVar0))
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

void func_340(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_441(*iParam0);
	iVar1 = func_442(*iParam0);
	iVar2 = func_443(*iParam0);
	iVar3 = func_350(*iParam0);
	iVar4 = func_349(*iParam0);
	iVar5 = func_444(*iParam0);
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
	iVar6 = func_445(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_445(iVar1, iVar0);
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
	func_446(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= *iParam0 & 126976;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_343(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 4032;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_344(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	func_348(func_81(), iParam0, uParam1, iParam2, iParam3, iParam4, uParam5, uParam6);
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = func_81();
	if (bVar0)
	{
		func_341(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!func_347(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			Global_1360165[iParam0 /*1157*/].f_1152 = iParam1;
			Global_1360165[iParam0 /*1157*/].f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_42 = iParam1;
		Global_40.f_4942[iParam0 /*60*/].f_43 = iVar1;
	}
	else
	{
		Global_40.f_4942[iParam0 /*60*/].f_44 = iParam1;
		if (bParam5)
		{
			Global_40.f_4942[iParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[iParam0 /*60*/].f_43 = -15;
		}
	}
}

int func_346(int iParam0)
{
	if (!func_56(iParam0))
	{
		return -1;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_42;
}

bool func_347(int iParam0)
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
	iVar0 = func_444(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_349(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_350(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_441(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_442(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_443(iParam0);
	if (iVar5 < 1 || iVar5 > func_445(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_348(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_412(iParam0, iParam1, 1))
	{
		iVar0 = func_442(iParam1);
		iVar1 = func_441(iParam0);
		iVar2 = (func_441(iParam0) - func_441(iParam1));
		iVar3 = (func_442(iParam0) - func_442(iParam1));
		iVar4 = (func_443(iParam0) - func_443(iParam1));
		iVar5 = (func_350(iParam0) - func_350(iParam1));
		iVar6 = (func_349(iParam0) - func_349(iParam1));
		iVar7 = (func_444(iParam0) - func_444(iParam1));
	}
	else
	{
		iVar0 = func_442(iParam0);
		iVar1 = func_441(iParam1);
		iVar2 = (func_441(iParam1) - func_441(iParam0));
		iVar3 = (func_442(iParam1) - func_442(iParam0));
		iVar4 = (func_443(iParam1) - func_443(iParam0));
		iVar5 = (func_350(iParam1) - func_350(iParam0));
		iVar6 = (func_349(iParam1) - func_349(iParam0));
		iVar7 = (func_444(iParam1) - func_444(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_445(iVar0, iVar1);
		iVar3--;
		iVar0 = BUILTIN::ROUND(func_447(BUILTIN::TO_FLOAT(iVar0 + 1), 0.0f, 12.0f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_349(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_350(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_351(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;

	if (!func_56(iParam1))
	{
		return 0;
	}
	iVar0 = func_128(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_67(iVar0, 0)) || (bParam3 && !func_129(iParam1)))
	{
		if (bParam2)
		{
			if (func_131(iParam1, 1) != 0)
			{
				iVar0 = func_448(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_67(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_449(iParam1, iVar0);
		func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_353()
{
	return Global_1572887.f_12;
}

int func_354(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_450(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_355(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_451(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_356(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_357(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return 0;
	}
	func_452(iParam0);
	iVar0 = -1;
	if (!func_453(iParam0, iParam1, &iVar0, 1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_364(iParam0, iParam1))
	{
	}
	return 1;
}

void func_359(var uParam0, int iParam1)
{
	uParam0->f_4 |= iParam1;
}

void func_360(var uParam0, int iParam1)
{
	uParam0->f_4 -= uParam0->f_4 & iParam1;
}

void func_361(int iParam0)
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
		{
			func_99(iParam0, (1 << 26), 1);
			func_12(iParam0, 19, 1);
		}
	}
}

bool func_362(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_364(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_454(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_112(iParam0);
	if (!func_67(iVar0, 0))
	{
		return false;
	}
	iVar1 = -1;
	if (!func_135(iParam0, iParam1, &iVar1, &uVar2))
	{
		return false;
	}
	if (func_301(iParam0, iParam1))
	{
	}
	if (!func_455(iParam0, (1 << 9), 0))
	{
		func_456(iParam0, (1 << 9), 0, -1);
	}
	if (PED::_0x1E017404784AA6A3(iVar0, iParam1))
	{
		func_409(iParam0, iParam1, 1);
		return true;
	}
	return false;
}

void func_365(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	bVar0 = func_112(iParam0);
	func_457(bVar0);
	func_26(iParam0, 60, 1);
	if (bParam1)
	{
		func_458(iParam0);
	}
}

void func_366(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_459(iVar0);
	func_12(iParam0, 60, 1);
	if (bParam1)
	{
		func_460(iParam0);
	}
}

void func_367(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_461(iVar0);
	func_12(iParam0, 61, 1);
	if (bParam1)
	{
		func_462(iParam0);
	}
}

void func_368(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_463(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	bVar0 = func_112(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(bVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(bVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(bVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(bVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(bVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(bVar0, func_464(iParam0));
		PED::_SET_PED_COMBAT_BEHAVIOUR(bVar0, -1972074710);
		PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(bVar0);
		if (!func_465())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

void func_369(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_370(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_125(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_371(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_128(iParam0);
	func_369(iVar0);
	func_30(iParam0, (1 << 14), 1);
}

int func_372(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_373(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (Global_1888801[iVar0 /*35*/].f_20 == iParam3)
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_374(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_375(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_376(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

Vector3 func_377()
{
	if (func_380(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_380(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

int func_378(int iParam0)
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

int func_379(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_380(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_63(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("HASH_COMPANION_DUTCH");
		case 1:
			return joaat("HASH_COMPANION_JOHN");
		case 2:
			return joaat("HASH_COMPANION_JAVIER");
		case 3:
			return joaat("HASH_COMPANION_BILL");
		case 4:
			return joaat("HASH_COMPANION_UNCLE");
		case 5:
			return joaat("HASH_COMPANION_HOSEA");
		case 6:
			return joaat("HASH_COMPANION_MICAH");
		case 7:
			return joaat("HASH_COMPANION_CHARLES");
		case 8:
			return joaat("HASH_COMPANION_SEAN");
		case 9:
			return joaat("HASH_COMPANION_LENNY");
		case 10:
			return joaat("HASH_COMPANION_ODRISCOLL");
		case 11:
			return joaat("HASH_COMPANION_SADIE_ADLER");
		case 13:
			return joaat("HASH_COMPANION_ABIGAIL");
		case 14:
			return joaat("HASH_COMPANION_JACK");
		case 15:
			return joaat("HASH_COMPANION_MARY_BETH");
		case 16:
			return joaat("HASH_COMPANION_MOLLY_OSHEA");
		case 17:
			return joaat("HASH_COMPANION_PEARSON");
		case 18:
			return joaat("HASH_COMPANION_STRAUSS");
		case 19:
			return joaat("HASH_COMPANION_SUSAN_GRIMSHAW");
		case 20:
			return joaat("HASH_COMPANION_KAREN");
		case 21:
			return joaat("HASH_COMPANION_SWANSON");
		case 22:
			return joaat("HASH_COMPANION_TILLY");
		case 23:
			return joaat("HASH_COMPANION_TRELAWNY");
		case 24:
			return joaat("HASH_COMPANION_CLEET");
		case 25:
			return joaat("HASH_COMPANION_JOE");
		case 26:
			return 1271180667;
		case 12:
			return joaat("HASH_COMPANION_DOG");
	}
	return -1;
}

int func_382(var uParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_1 = 0;
	sVar0.f_3 = uParam0;
	if (func_466(sVar0, 2065727156, &iVar5, 0))
	{
		return func_468(func_467(iVar5));
	}
	return 0;
}

int func_383(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_0 = Global_1357549.f_576;
	if (*iParam1 != 0)
	{
		sVar0.f_1 = *iParam1;
	}
	else
	{
		sVar0.f_1 = Global_1357549.f_577;
	}
	sVar0.f_2 = 1032438694;
	sVar0.f_3 = uParam0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		return sVar0.f_1;
	}
	return 0;
}

int func_384(var uParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_1 = 0;
	sVar0.f_3 = uParam0;
	if (func_466(sVar0, 2065727156, &iVar5, 0))
	{
		return func_467(iVar5);
	}
	return -1;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

char* func_386(int iParam0)
{
	if (!func_261(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 29:
			return "WatsonsCabin";
		case 30:
			return "Canebreak Manor";
		case 31:
			return "Copperhead";
		case 32:
			return "SisikaPenitentiary";
		case 33:
			return "BacchuBridge";
		case 34:
			return "DinoLady";
		case 35:
			return "OldFortWallace";
		case 36:
			return "SixPointCabin";
		case 37:
			return "BeechersHope";
		case 38:
			return "Blackwater";
		case 39:
			return "QuakersCove";
		case 40:
			return "AdlerRanch";
		case 41:
			return "DeadRival";
		case 50:
			return "CalumetRavine";
		case 51:
			return "CivilWarBride";
		case 42:
			return "ChezPorter";
		case 52:
			return "Cohutta";
		case 43:
			return "Colter";
		case 44:
			return "FrozenExplorer";
		case 53:
			return "GunFight";
		case 45:
			return "MillesaniClaim";
		case 46:
			return "MountainMan";
		case 47:
			return "StarvingChildren";
		case 48:
			return "TempestRim";
		case 54:
			return "TheLoft";
		case 55:
			return "Veteran";
		case 56:
			return "Wapiti";
		case 49:
			return "WinterMiningTown";
		case 57:
			return "AguasDulces";
		case 58:
			return "GuarmaCamp";
		case 59:
			return "CincoTorres";
		case 60:
			return "LaCapilla";
		case 61:
			return "Manicato";
		case 62:
			return "Abandoned Mill";
		case 64:
			return "CarmodyDell";
		case 65:
			return "CornwallKerosene";
		case 66:
			return "CropFarm";
		case 67:
			return "CumberlandFalls";
		case 68:
			return "DownsRanch";
		case 69:
			return "EmeraldRanch";
		case 70:
			return "GrangersHoggery";
		case 71:
			return "HorseshoeOverlook";
		case 72:
			return "LarnedSod";
		case 73:
			return "LoonyCult";
		case 74:
			return "LuckysCabin";
		case 75:
			return "SwansonsStation";
		case 76:
			return "Valentine";
		case 77:
			return "AberdeenPigFarm";
		case 78:
			return "Annesburg";
		case 63:
			return "BeechersC";
		case 79:
			return "BeaverHollow";
		case 80:
			return "BlackBalsamRise";
		case 81:
			return "BrandywineDrop";
		case 82:
			return "ButcherCreek";
		case 83:
			return "Doverhill";
		case 84:
			return "HappyFamily";
		case 85:
			return "Isolationist";
		case 86:
			return "MacLeansHouse";
		case 87:
			return "MossyFlats";
		case 88:
			return "RoanokeValley";
		case 89:
			return "RockySeven";
		case 90:
			return "RoanokeTrapper";
		case 91:
			return "VanHornMansion";
		case 92:
			return "VanHornTradingPost";
		case 93:
			return "BraithewaiteManor";
		case 94:
			return "BulgerGlade";
		case 95:
			return "CaligaHall";
		case 96:
			return "CatfishJacksons";
		case 97:
			return "ClemensCove";
		case 98:
			return "ClemensPoint";
		case 99:
			return "CompsonsStead";
		case 100:
			return "Dairy Farm";
		case 101:
			return "ScarletMeadowsHorseShop";
		case 102:
			return "LonniesShack";
		case 103:
			return "LoveTriangle";
		case 104:
			return "Radleys Pasture";
		case 105:
			return "Rhodes";
		case 106:
			return "SlavePen";
		case 107:
			return "AuroraBasinShack";
		case 108:
			return "DeadSettler";
		case 109:
			return "Cochinay";
		case 110:
			return "ManzanitaPost";
		case 111:
			return "PacificUnionRailroad";
		case 112:
			return "TannersReach";
		case 113:
			return "TallTreesTrapper";
		case 126:
			return "MacFarlanesRanch";
		case 127:
			return "ThievesLanding";
		case 120:
			return "Armadillo";
		case 121:
			return "CootsChapel";
		case 122:
			return "DonJulioHouse";
		case 124:
			return "RidgewoodFarm";
		case 123:
			return "RileysCharge";
		case 125:
			return "TwinRocks";
		case 114:
			return "Gaptooth Breach";
		case 115:
			return "Tumbleweed";
		case 116:
			return "Rathskeller Fork";
		case 129:
			return "SolomonsFolly";
		case 117:
			return "BenedictPoint";
		case 118:
			return "FortMercer";
		case 119:
			return "Plainview";
		case 128:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

bool func_387(Vector3 vParam0, int iParam3, var uParam4, int iParam5, char* sParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_388(int iParam0, var uParam1)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
		return func_469(vVar0, uParam1);
	}
	return false;
}

bool func_389(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 3)
	{
		return false;
	}
	if (!Global_1359489.f_63.f_242[iParam2 /*18*/].f_15)
	{
		return false;
	}
	if (func_470(uParam0, iParam1, Global_1359489.f_63.f_242[iParam2 /*18*/].f_2))
	{
		return true;
	}
	return false;
}

int func_390(int iParam0)
{
	Vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (Global_1359489.f_63.f_242[iVar3 /*18*/].f_15)
		{
			if (Global_1359489.f_63.f_242[iVar3 /*18*/].f_8 < Global_1359489.f_63.f_242[iVar3 /*18*/].f_7)
			{
				if (Global_1359489.f_63.f_242[iVar3 /*18*/].f_14 != 3)
				{
					if (func_469(vVar0, iVar3))
					{
						return iVar3;
					}
				}
			}
		}
		iVar3++;
	}
	return -1;
}

void func_391(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_392(int iParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, int iParam9, var uParam10, int iParam11, int iParam12, var uParam13, bool bParam14, var uParam15)
{
	Vector3 vVar0[3];
	Vector3 vVar10[3];
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;

	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = func_471(iParam0, iParam1);
		func_472(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, uParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		strcpy_s(&cVar23, 32, "");
		iVar27 = 0;
		if (iVar21 > 0)
		{
			strcpy_s(&cVar23, 32, func_473(iParam0, 3));
			iVar21--;
			iVar27 = 1;
		}
		func_474(iParam0, func_402(iParam0), iVar27, bParam14, &cVar23, vVar0[iVar22 /*3*/], vVar10[iVar22 /*3*/], vParam6, iVar22, 0, -1082130432, iParam12, uParam13, uParam15);
		iVar22++;
	}
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (PED::GET_PED_AS_GROUP_MEMBER(func_37(), iVar1) == uParam0->f_5)
			{
				uParam0->f_108 = iVar1;
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_394(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 10)
	{
		return false;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return false;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_16;
}

struct<4> /*32*/ func_395(int iParam0)
{
	char cVar0[32];
	char cVar4[32];

	if (iParam0 < 0 || iParam0 > 10)
	{
		strcpy_s(&cVar0, 32, "ERR");
		return cVar0;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		strcpy_s(&cVar4, 32, "ERR");
		return cVar4;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_19;
}

float func_396(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0.0f;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return 0.0f;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_13;
}

bool func_397(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[iParam1]))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[iParam1], true, 0);
}

int func_398(int iParam0)
{
	int iVar0;

	iVar0 = 250;
	switch (iParam0)
	{
		case 0:
			iVar0 = 100;
			break;
		case 1:
			iVar0 = 150;
			break;
		case 2:
			iVar0 = 150;
			break;
		case 3:
			iVar0 = 200;
			break;
		case 5:
			iVar0 = 100;
			break;
		case 6:
			iVar0 = 100;
			break;
		case 7:
			iVar0 = 200;
			break;
		case 8:
			iVar0 = 200;
			break;
	}
	return (iVar0 * iVar0);
}

int func_399(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

Vector3 func_400(int iParam0, int iParam1, Vector3 vParam2, Vector3 vParam5, float fParam8)
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	float fVar7;
	float fVar8;
	int iVar9;
	float fVar10;

	fVar0 = BUILTIN::VDIST(vParam2, vParam5);
	vVar1 = { vParam2 /*3*/ };
	vVar4 = { vParam2 - vParam5 /*3*/ };
	vVar4.f_2 = 0.0f;
	vVar4 = { func_176(vVar4) /*3*/ };
	if (fVar0 > fParam8)
	{
		vVar1 = { vParam5 + Vector(fParam8, fParam8, fParam8) * vVar4 /*3*/ };
	}
	fVar7 = 1.0f;
	fVar8 = func_475((fVar7 / fParam8));
	iVar9 = 0;
	while (iVar9 < 5)
	{
		fVar10 = (fParam8 * func_401(func_476(iParam0, iParam1, vParam5, vVar4)));
		if (fVar10 < fVar7)
		{
			vVar1 = { func_477(vParam5, vVar1, fVar8) /*3*/ };
		}
		else
		{
			return vVar1;
		}
		iVar9++;
	}
	return vVar1;
}

float func_401(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

var func_402(int iParam0)
{
	int iVar0;
	int iVar1[10];

	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			iVar1[0] = joaat("WORLD_HUMAN_STARE_STOIC");
			iVar1[1] = joaat("WORLD_HUMAN_SMOKE");
			iVar1[2] = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 1:
			iVar0 = 3;
			iVar1[0] = joaat("WORLD_HUMAN_SMOKE");
			iVar1[1] = joaat("WORLD_HUMAN_WAITING_IMPATIENT");
			iVar1[2] = joaat("WORLD_HUMAN_STARE_STOIC");
			break;
		case 2:
			iVar0 = 2;
			iVar1[0] = joaat("WORLD_HUMAN_STAND_WAITING");
			iVar1[1] = joaat("WORLD_HUMAN_SHOP_BROWSE");
			break;
		default:
			break;
	}
	return iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
}

void func_403(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	Global_1359489.f_63[iParam0 /*24*/] = 4;
}

bool func_404(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

int func_405(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_478(&iVar1, (1 << 31));
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 &= (iVar1 - 1);
		iVar0++;
	}
	return iVar0;
}

bool func_406(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_353() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_407(int iParam0)
{
	if (!func_56(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_293(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_408(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_1154;
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_299(iParam0, iParam1))
	{
		func_479(iParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (func_300(iParam0, iParam1, &iVar0))
	{
		func_305(iParam0, iVar0, bParam2);
	}
}

bool func_410(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_411(int iParam0)
{
	if (Global_1327590.f_19744 == -1)
	{
		return false;
	}
	return Global_1327590.f_19744 == iParam0;
}

bool func_412(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_347(iParam1) || !func_347(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_413()
{
	switch (func_353())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_414(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

int func_415(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_416(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_417(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_480(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_481(iParam0))
	{
		return false;
	}
	if (func_482(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_418(iParam0, 1)) || func_483((1 << 15)))
	{
		if (!func_418(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_484())
	{
		return false;
	}
	return true;
}

bool func_418(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

void func_419(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_420(int iParam0)
{
	return Global_1391410 & iParam0 != 0;
}

void func_421(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_56(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 == 0 || func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*uParam1))
		{
			func_13(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_115(&(Global_1360165[iParam0 /*1157*/].f_12), (1 << 9));
	if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 128))
	{
		iVar0 = joaat("BLIP_MODIFIER_ENEMY");
	}
	else if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
	{
		iVar0 = joaat("BLIP_MODIFIER_COMPANION_OBJECTIVE");
	}
	if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 256))
	{
		iVar1 = func_485(-1739349092);
	}
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), func_112(iParam0));
	}
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		if (iVar0 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*uParam1, iVar0);
			if (iVar0 == joaat("BLIP_MODIFIER_COMPANION_OBJECTIVE"))
			{
				MAP::BLIP_ADD_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
			}
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(*uParam1, iVar0);
		}
		if (bVar2 && !func_94(0, 0, 1))
		{
			MAP::_BLIP_SET_STYLE(*uParam1, joaat("BLIP_STYLE_CAMP_REQUEST"));
			if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), (1 << 10)))
			{
				MAP::BLIP_ADD_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_URGENT"));
			}
			if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), (1 << 11)))
			{
				MAP::BLIP_ADD_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_LOCKED"));
			}
		}
		if (iVar1 != 0)
		{
			MAP::SET_BLIP_SPRITE(*uParam1, iVar1, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_14)) && func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, &(Global_1360165[iParam0 /*1157*/].f_14));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_313(iParam0, 0));
		}
	}
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!func_406(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_423(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (sParam3.f_0 - sParam0.f_0);
	fVar2 = (sParam3.f_1 - sParam0.f_1);
	if (fVar2 != 0.0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0.0f)
	{
		fVar0 = -90.0f;
	}
	else
	{
		fVar0 = 90.0f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1.0f;
		if (fVar0 < 0.0f)
		{
			fVar0 += 360.0f;
		}
	}
	return fVar0;
}

float func_424(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_425(var uParam0)
{
	return *uParam0;
}

void func_426(var uParam0, Vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 /*3*/ };
}

void func_427(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_428(Vector3 vParam0, Vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5.0f);
	if (bParam6)
	{
		if (func_486(vParam0 + Vector(0.2f, 0.0f, 0.0f)))
		{
			return false;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1.0f, 0.0f, 0.0f), &uVar1, false))
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7.0f))
	{
		return false;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10.0f))
			{
				return false;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 40.0f && fVar2 < 80.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_429(Vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_487(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_488(&(iParam3->f_1), iParam5);
				if (!func_60(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_176(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) /*3*/ };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

Vector3 func_430(var uParam0)
{
	return uParam0->f_3.f_3;
}

bool func_431(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_432(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (func_144(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_67(bParam1, iVar0))
	{
		return false;
	}
	PED::_EQUIP_META_PED_OUTFIT(bParam1, func_489(iParam0));
	PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, false);
	func_30(iParam0, 256, 1);
	return true;
}

bool func_433(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (!func_144(iParam0, 256))
	{
		return true;
	}
	if (!func_67(bParam1, 256))
	{
		return false;
	}
	PED::_0xA2F8B3B5FEDFC100(bParam1, func_489(iParam0));
	PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, false);
	func_30(iParam0, 256, 0);
	return true;
}

void func_434(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_490(func_128(iParam0), 1.0f, 0);
	}
	if (bParam1)
	{
		func_458(iParam0);
	}
	else
	{
		func_460(iParam0);
	}
	if (bParam2)
	{
		func_371(iParam0);
	}
	else
	{
		func_462(iParam0);
	}
}

void func_435(bool bParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (bParam0 == func_491(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_492(bParam0))
	{
		if (func_328(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(bParam0);
		}
	}
	if (func_227(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 -= iParam5 & 4;
				func_435(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 -= iParam5 & 4;
				func_435(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_227(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_227(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_227(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_227(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_227(iParam5, 129))
	{
		if (func_227(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_227(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_227(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_227(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_492(bParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_227(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_227(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_239(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_239(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_437(int iParam0, int iParam1)
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

void func_438(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_114(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, false))
	{
		return;
	}
	COMPANION::_ACTIVATE_COMPANION_ANALYSIS(func_37());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_368(iParam0, 1, Global_35);
	}
}

void func_439(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_114(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_493(&iVar0, 1);
				break;
			case 14:
				func_493(&iVar0, 8);
				func_493(&iVar1, 4);
				func_493(&iVar1, 5);
				func_493(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_493(&iVar0, 8);
				func_493(&iVar0, 5);
				func_493(&iVar1, 4);
				func_493(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_112(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_112(iParam0), iVar1);
	}
}

int func_440(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_494(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_441(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_495(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_442(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_443(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_444(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_445(int iParam0, int iParam1)
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

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_496(iParam0, iParam6);
	func_497(iParam0, iParam5);
	func_498(iParam0, iParam4);
	func_342(iParam0, iParam3);
	func_343(iParam0, iParam2);
	func_499(iParam0, iParam1);
}

float func_447(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 -= ((float)BUILTIN::ROUND(((fParam0 - fParam1) / fVar0)) * fVar0);
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

int func_448(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	Vector3 vVar0;
	int iVar3;
	char[] cVar4[8];
	char* sVar12;

	if (!func_56(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 /*3*/ };
	iVar3 = func_133(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_29(iParam0, 3);
			}
			else
			{
				if (!func_500(iParam0) && func_501(iParam0, &cVar4))
				{
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_131(iParam0, 1), &cVar4);
				}
				func_30(iParam0, 256, 0);
				func_29(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_502();
				}
				if (bParam2 && !func_60(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_503(iParam0, vVar0, iParam6, bParam10))
				{
					return func_502();
				}
				if (func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_29(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_29(iParam0, 1);
				return func_502();
			}
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
			{
				func_29(iParam0, 3);
			}
			break;
		case 3:
			if (!func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_29(iParam0, 1);
				return func_502();
			}
			if (bParam7)
			{
				if (!func_432(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_502();
				}
			}
			if ((bParam2 && !func_60(vVar0)) && !func_504(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_435(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, (1 << 30));
			}
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (func_4(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_26(iParam0, 39, 1);
				func_30(iParam0, 8, 1);
				func_30(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_332(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = func_317(iParam0, func_241());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_131(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_12(iParam0, 40, 0);
			func_30(iParam0, 32, 0);
			func_29(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return func_502();
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND(((float)iVar1 * 0.4f)), BUILTIN::ROUND(((float)iVar1 * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND(((float)iVar1 * 0.1f)), BUILTIN::ROUND(((float)iVar1 * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

int func_450(int iParam0)
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

int func_451(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

void func_452(int iParam0)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	func_505(iParam0, 0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_505(iParam0, 0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/]));
		iVar0++;
	}
}

bool func_453(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam3)
	{
		if (func_300(iParam0, iParam1, iParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar0 = func_81();
				func_341(&iVar0, 0, iParam4, iParam5, 0, 0, 0, 1);
				Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = iVar0;
			}
			else
			{
				Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = -15;
			}
			return true;
		}
	}
	*iParam2 = 0;
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (!func_134(Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/]))
		{
			iVar1 = -15;
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar1 = func_81();
				func_341(&iVar1, 0, iParam4, iParam5, 0, 0, 0, 1);
			}
			Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] = iParam1;
			Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = iVar1;
			Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_2 = 0;
			return true;
		}
		*iParam2++;
	}
	func_137(iParam0, 0);
	*iParam2 = 9;
	iVar2 = -15;
	if (iParam4 > 0 || iParam5 > 0)
	{
		iVar2 = func_81();
		func_341(&iVar2, 0, iParam4, iParam5, 0, 0, 0, 1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] = iParam1;
	Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = iVar2;
	Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_2 = 0;
	return true;
}

bool func_454(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (!func_135(iParam0, iParam1, &iVar0, &bVar1))
	{
		return false;
	}
	if (bVar1)
	{
		return Global_40.f_4942[iParam0 /*60*/].f_8.f_2;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_2;
}

bool func_455(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if (!func_506(iParam0))
	{
		return false;
	}
	if (func_507(iParam0, (1 << 31)))
	{
		return true;
	}
	if (func_507(iParam0, (1 << 30)))
	{
		return true;
	}
	iVar0 = func_508(iParam1);
	if (iVar0 < Global_1360165[iParam0 /*1157*/].f_22)
	{
		return true;
	}
	if (iVar0 == Global_1360165[iParam0 /*1157*/].f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!func_507(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_456(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_455(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 |= iParam1;
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		func_341(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

void func_457(bool bParam0)
{
	if (func_87(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_458(int iParam0)
{
	bool bVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_128(iParam0);
	func_457(bVar0);
	func_30(iParam0, (1 << 13), 1);
}

void func_459(bool bParam0)
{
	if (func_87(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_460(int iParam0)
{
	bool bVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_128(iParam0);
	func_459(bVar0);
	func_30(iParam0, (1 << 13), 0);
}

void func_461(bool bParam0)
{
	if (func_87(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_462(int iParam0)
{
	bool bVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_128(iParam0);
	func_461(bVar0);
	func_30(iParam0, (1 << 14), 0);
}

bool func_463(int iParam0)
{
	if (func_114(iParam0))
	{
		if (func_67(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

char* func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_465()
{
	if (func_353() != -1)
	{
		return false;
	}
	return func_293(1) > 0;
}

bool func_466(Vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CC_LAKAY"):
			return 5;
		case joaat("CC_BEAVER_HOLLOW"):
			return 6;
		case joaat("CC_COLTER"):
			return 0;
		case joaat("CC_CLEMENS_POINT"):
			return 2;
		case joaat("CC_GUARMA"):
			return 4;
		case joaat("CC_HORSESHOE_OVERLOOK"):
			return 1;
		case joaat("CC_SHADY_BELLE"):
			return 3;
		case joaat("CC_PRONGHORN_RANCH"):
			return 7;
		case joaat("CC_BEECHERS_HOPE"):
			return 8;
		default:
			break;
	}
	return -1;
}

int func_468(int iParam0)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_2 = 29309381;
	sVar0.f_3 = func_509(iParam0);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		return sVar0.f_1;
	}
	return 0;
}

bool func_469(Vector3 vParam0, int iParam3)
{
	if (iParam3 < 0 || iParam3 >= 3)
	{
		return false;
	}
	if (!Global_1359489.f_63.f_242[iParam3 /*18*/].f_15)
	{
		return false;
	}
	if (BUILTIN::VDIST2(vParam0, Global_1359489.f_63.f_242[iParam3 /*18*/].f_2) < Global_1359489.f_63.f_242[iParam3 /*18*/].f_5)
	{
		return true;
	}
	return false;
}

bool func_470(var uParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	vVar0 = { func_510(iParam1) /*3*/ };
	return func_511(uParam0, vVar0, vParam2, 0);
}

int func_471(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			if (iParam1 == 1)
			{
				return 0;
			}
			else if (iParam1 == 2)
			{
				return 1;
			}
			else if (iParam1 == 3)
			{
				return 2;
			}
			break;
		case 2:
			return 0;
	}
	return -1;
}

void func_472(var uParam0, var uParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	float fVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	fVar0 = (fParam9 / 2.0f);
	fVar1 = (fParam10 / 2.0f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { func_176(vParam6 - vParam3) /*3*/ };
			vVar8 = { func_512(vVar5, 0.0f, 0.0f, 1.0f) /*3*/ };
			*(uParam0[0 /*3*/]) = { vParam3 + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			*(uParam0[1 /*3*/]) = { vParam3 + vVar8 * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			*(uParam0[2 /*3*/]) = { vParam3 - vVar8 * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			*(uParam1[0 /*3*/]) = { vVar5 /*3*/ };
			*(uParam1[1 /*3*/]) = { vVar5 /*3*/ };
			*(uParam1[2 /*3*/]) = { vVar5 /*3*/ };
			break;
		case 1:
			vVar2 = { func_514() /*3*/ };
			*(uParam1[0 /*3*/]) = { func_176(vVar2) /*3*/ };
			*(uParam1[1 /*3*/]) = { -*(uParam1[0 /*3*/]) /*3*/ };
			*(uParam0[0 /*3*/]) = { vParam3 - *(uParam1[0 /*3*/]) * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			*(uParam0[1 /*3*/]) = { vParam3 - *(uParam1[1 /*3*/]) * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			break;
		case 2:
			vVar2 = { func_514() /*3*/ };
			*(uParam1[0 /*3*/]) = { func_176(vVar2) /*3*/ };
			func_515(&vVar2, &(vVar2.f_1), 120.0f);
			*(uParam1[1 /*3*/]) = { func_176(vVar2) /*3*/ };
			func_515(&vVar2, &(vVar2.f_1), 120.0f);
			*(uParam1[2 /*3*/]) = { func_176(vVar2) /*3*/ };
			*(uParam0[0 /*3*/]) = { vParam3 - *(uParam1[0 /*3*/]) * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			*(uParam0[1 /*3*/]) = { vParam3 - *(uParam1[1 /*3*/]) * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			*(uParam0[2 /*3*/]) = { vParam3 - *(uParam1[2 /*3*/]) * FloatToVector(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0.0f, 0.0f, 0.0f, fParam11, 0.1f) /*3*/ };
			break;
	}
}

char* func_473(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1[5];

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			sVar1[0] = "INDIFF1";
			sVar1[1] = "INDIFF2";
			break;
		case 1:
			iVar0 = 1;
			if (iParam1 > 1)
			{
				sVar1[0] = "WAIT1";
			}
			else
			{
				sVar1[0] = "WAIT2";
			}
			break;
		case 2:
			iVar0 = 2;
			sVar1[0] = "SHOCK1";
			sVar1[1] = "SHOCK2";
			break;
		default:
			break;
	}
	return sVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
}

void func_474(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, Vector3 vParam5, struct<2> /*16*/ sParam8, int iParam10, Vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, var uParam18, var uParam19)
{
	struct<24> /*192*/ sVar0;

	if (Global_1359489.f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		sVar0.f_10 = func_401(MISC::GET_HEADING_FROM_VECTOR_2D(sParam8.f_0, sParam8.f_1));
		sVar0.f_0 = 1;
	}
	else
	{
		sVar0.f_23 = 0;
		sVar0.f_10 = 0.0f;
		sVar0.f_0 = 2;
	}
	sVar0.f_3 = uParam1;
	sVar0.f_4 = { vParam5 /*3*/ };
	sVar0.f_7 = { vParam11 /*3*/ };
	sVar0.f_11 = iParam15;
	sVar0.f_12 = iParam16;
	sVar0.f_13 = (fParam17 * fParam17);
	sVar0.f_1 = iParam0;
	sVar0.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	sVar0.f_14 = uParam18;
	sVar0.f_15 = bParam3;
	sVar0.f_16 = iParam2;
	strcpy_s(&(sVar0.f_19), 32, sParam4);
	sVar0.f_17 = uParam19;
	Global_1359489.f_63[iParam14 /*24*/] = { sVar0 /*24*/ };
	if (Global_1359489.f_63[iParam14 /*24*/].f_15)
	{
		func_516(&(Global_1359489.f_63[iParam14 /*24*/]));
	}
}

float func_475(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_476(int iParam0, int iParam1, Vector3 vParam2, struct<2> /*16*/ sParam5, var uParam7)
{
	float fVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;

	fVar0 = 999999.0f;
	iVar1 = 0;
	while (iVar1 < Global_1359489.f_63.f_241)
	{
		if ((Global_1359489.f_63[iVar1 /*24*/].f_14 == iParam0 && (Global_1359489.f_63[iVar1 /*24*/].f_15 || Global_1359489.f_63[iVar1 /*24*/].f_18)) && iVar1 != iParam1)
		{
			vVar2 = { func_176(Global_1359489.f_63[iVar1 /*24*/].f_4 - vParam2) /*3*/ };
			fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(sParam5.f_0, sParam5.f_1, vVar2.x, vVar2.y);
			if (fVar5 < fVar0)
			{
				fVar0 = fVar5;
			}
		}
		iVar1++;
	}
	return fVar0;
}

Vector3 func_477(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	var uVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	uVar0 = vParam0.z;
	vVar1 = { vParam3 - vParam0 /*3*/ };
	vVar4 = { ((vVar1.x * BUILTIN::COS(fParam6)) - (vVar1.y * BUILTIN::SIN(fParam6))), ((vVar1.x * BUILTIN::SIN(fParam6)) + (vVar1.y * BUILTIN::COS(fParam6))), 0.0f /*3*/ };
	vVar4 = { vVar4 + vParam0 /*3*/ };
	vVar4.f_2 = uVar0;
	return vVar4;
}

void func_478(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

void func_479(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_1154 = bParam1;
}

bool func_480(int iParam0, int iParam1)
{
	if (func_353() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_481(int iParam0)
{
	if (func_353() != -1)
	{
		if (func_418(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_418(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_418(iParam0, (1 << 16)) && !func_418(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_418(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_418(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_483(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_484()
{
	return Global_1905944.f_5694;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return joaat("BLIP_REGION_HUNTING");
		case 654481153:
			return joaat("BLIP_MG_FISHING");
		case -2036347356:
			return joaat("BLIP_MG_POKER");
		case -1341684320:
			return joaat("BLIP_MG_POKER");
		case -1567081107:
			return joaat("BLIP_MG_DOMINOES");
		case -919476462:
			return joaat("BLIP_ROBBERY_COACH");
		case -1670940721:
			return joaat("BLIP_ROBBERY_BANK");
		case 754620122:
			return joaat("BLIP_AMBIENT_HERD");
		case -1739349092:
			return joaat("BLIP_REGION_CARAVAN");
		case -1511391406:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET");
		case 565221344:
			return joaat("BLIP_ROBBERY_HOME");
		default:
			break;
	}
	return 0;
}

bool func_486(Vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return true;
		}
	}
	return false;
}

void func_487(var uParam0, int iParam1, Vector3 vParam2, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_60(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, fParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90.0f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180.0f);
			break;
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
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0.0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
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
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, (1 << 14));
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80.0f - 40.0f) / 2.0f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0.0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6.0f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18.0f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55.0f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15.0f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40.0f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80.0f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150.0f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150.0f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20.0f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80.0f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6.0f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45.0f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20.0f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140.0f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125.0f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80.0f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(10.0f, 40.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(40.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(50.0f, 90.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(50.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(0.0f, 10.0f, 1.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(5.0f, 15.0f, 1.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(60.0f, 120.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(100.0f, 130.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(10.0f, 35.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(25.0f, 50.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(50.0f, 80.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(75.0f, 95.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_517(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(125.0f, 115.0f, 100.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1.0f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5.0f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5.0f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15.0f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15.0f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35.0f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1.0f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65.0f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35.0f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160.0f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65.0f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_488(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25.0f);
			TASK::_0x450080DDEDB91258(*uParam0, 25.0f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40.0f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}
}

int func_489(int iParam0)
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

void func_490(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_518(fParam1, 0.0f, 1.0f);
		iVar0 = BUILTIN::FLOOR((fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2)));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

bool func_491(var uParam0)
{
	return uParam0;
}

bool func_492(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

void func_493(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 |= BUILTIN::SHIFT_LEFT(1, iVar0);
}

int func_494(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
		case joaat("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case joaat("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case joaat("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case joaat("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case joaat("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case joaat("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case joaat("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case joaat("CSTAG_PLAYER_DIRTY"):
			return 339;
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case joaat("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case joaat("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case joaat("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case joaat("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case joaat("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case joaat("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case joaat("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case joaat("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case joaat("CSTAG_PLAYER_AWAY"):
			return 340;
		case joaat("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case joaat("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case joaat("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case joaat("CSTAG_FLOW_REV1_POST"):
			return 390;
		case joaat("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case joaat("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case joaat("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case joaat("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case joaat("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case joaat("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case joaat("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case joaat("CSTAG_FLOW_MR52_POST"):
			return 475;
		case joaat("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case joaat("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case joaat("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case joaat("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case joaat("CSTAG_SDB_BASE"):
			return 5;
		case joaat("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case joaat("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case joaat("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case joaat("CSTAG_FLOW_TRN2_POST"):
			return 465;
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

int func_495(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_496(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= *iParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= *iParam0 & (1 << 31);
	}
}

void func_497(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= *iParam0 & 62914560;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_442(*iParam0);
	iVar1 = func_441(*iParam0);
	if (iParam1 < 1 || iParam1 > func_445(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= *iParam0 & 4063232;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_499(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 63;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_500(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case joaat("PERSCHAR_COMP_HORSE_COMMON_2"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_3"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_1"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_4"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_5"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_501(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "colter/col_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "colter/col_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "colter/col_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "colter/col_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "colter/col_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "colter/col_default_horse_john");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "colter/col_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "colter/col_default_horse_micah");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "colter/col_default_horses1");
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horses1");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_sadie");
					return true;
				case 8:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_sean");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horses1");
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_kieran");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_sadie");
					return true;
				case 8:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_sean");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "clemensPoint/clm_default_horses1");
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horses1");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "shadyBelle/shb_default_horses1");
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_dutch");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_john");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "lakay/lak_default_horses1");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "lakay/lak_default_horses1");
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_dutch");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_john");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horses1");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horses1");
			return true;
		case 8:
			strcpy_s(sParam1, 64, "beechersHope/bch_default_horses");
			return true;
	}
	return false;
}

int func_502()
{
	return -1;
}

bool func_503(int iParam0, Vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, false);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126, false);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_131(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_519(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		func_30(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_504(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_505(int iParam0, bool bParam1, var uParam2)
{
	if (!func_134(*uParam2))
	{
		uParam2->f_1 = -15;
		return;
	}
	if (!func_520(iParam0, *uParam2, bParam1))
	{
		if (!uParam2->f_2)
		{
			if (func_521(iParam0, *uParam2, bParam1))
			{
			}
		}
	}
	if (uParam2->f_1 == -15 || (uParam2->f_1 != -15 && !func_47(uParam2->f_1)))
	{
		return;
	}
	func_522(iParam0, *uParam2, bParam1);
}

bool func_506(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_140 != 0 || Global_1360165[iParam0 /*1157*/].f_141 != 0)
	{
		return true;
	}
	return false;
}

bool func_507(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_140 & iParam1 != 0)
	{
		return true;
	}
	if (Global_1360165[iParam0 /*1157*/].f_141 & iParam1 != 0)
	{
		return true;
	}
	return false;
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CC_COLTER");
		case 1:
			return joaat("CC_HORSESHOE_OVERLOOK");
		case 2:
			return joaat("CC_CLEMENS_POINT");
		case 3:
			return joaat("CC_SHADY_BELLE");
		case 4:
			return joaat("CC_GUARMA");
		case 5:
			return joaat("CC_LAKAY");
		case 6:
			return joaat("CC_BEAVER_HOLLOW");
		case 7:
			return joaat("CC_PRONGHORN_RANCH");
		case 8:
			return joaat("CC_BEECHERS_HOPE");
		default:
			break;
	}
	return 991030100;
}

Vector3 func_510(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) /*3*/ };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) /*3*/ };
			vVar0.x = ((vVar3.x + vVar6.x) / 2.0f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2.0f);
			vVar0.f_2 = func_523(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_60(vVar0))
	{
	}
	return vVar0;
}

int func_511(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_391(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

Vector3 func_512(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_513(Vector3 vParam0, float fParam3, float fParam4)
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), 0.0f /*3*/ };
	fVar3 = (fParam4 / 2.0f);
	vVar0 = { func_524(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, fParam3)) /*3*/ };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_514()
{
	Vector3 vVar0;

	vVar0 = { 1.0f, 0.0f, 0.0f /*3*/ };
	func_515(&vVar0, &(vVar0.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 360.0f));
	return vVar0;
}

void func_515(var uParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*uParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

int func_516(var uParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23))
	{
		if (TASK::_GET_PED_USING_SCENARIO_POINT(uParam0->f_23) != func_502())
		{
			return 0;
		}
		else
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_23);
		}
	}
	if (func_177(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_525(uParam0->f_3, uParam0->f_4, func_475(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		TASK::_0xE69FDA40AAC3EFC0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

float func_517(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 += (fParam2 * (float)iParam3);
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

float func_518(float fParam0, float fParam1, float fParam2)
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

int func_519(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_526(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_520(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_527(iParam1);
	}
	return func_301(iParam0, iParam1);
}

bool func_521(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_528(iParam1);
	}
	return func_364(iParam0, iParam1);
}

void func_522(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_529(iParam1);
	}
	else
	{
		func_32(iParam0, iParam1);
	}
}

float func_523(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

Vector3 func_524(Vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0.0f)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		return vParam0 * FloatToVector((fParam3 / fVar0));
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_525(int iParam0, Vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	return TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vParam1, fParam4, fParam5, fParam6, bParam7);
}

void func_526(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_530(iParam1))
		{
			func_531(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_532(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
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
			func_533(iParam0, 0);
			bVar0 = true;
		}
		func_437(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_527(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_534(iParam0, &iVar0))
	{
		return func_535(iVar0);
	}
	return false;
}

int func_528(int iParam0)
{
	int iVar0;

	if (func_536(iParam0))
	{
		return 0;
	}
	if (!func_67(Global_35, 0))
	{
		return 0;
	}
	iVar0 = -1;
	if (!func_534(iParam0, &iVar0))
	{
		return 0;
	}
	if (func_527(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		func_537(iParam0, 1);
		return 1;
	}
	return 0;
}

void func_529(int iParam0)
{
	int iVar0;

	if (!func_134(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_534(iParam0, &iVar0))
	{
		func_538(iVar0);
	}
}

bool func_530(int iParam0)
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

void func_531(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_223(iParam0, iParam1))
		{
			if (func_338(iParam0, iParam1))
			{
				if (func_339(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_340(iParam0);
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

void func_532(int iParam0, int iParam1, bool bParam2)
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

void func_533(int iParam0, bool bParam1)
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

bool func_534(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return false;
}

bool func_535(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

bool func_536(int iParam0)
{
	int iVar0;

	if (!func_534(iParam0, &iVar0))
	{
		return false;
	}
	return Global_40.f_4237[iVar0 /*3*/].f_2;
}

void func_537(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_534(iParam0, &iVar0))
	{
		func_539(iVar0, bParam1);
	}
}

void func_538(int iParam0)
{
	int iVar0;

	func_540(&(Global_40.f_4237[iParam0 /*3*/]));
	if (func_134(Global_40.f_4237[iParam0 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_134(Global_40.f_4237[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4237[iVar0 /*3*/] = Global_40.f_4237[iVar0 + 1 /*3*/];
			Global_40.f_4237[iVar0 /*3*/].f_1 = Global_40.f_4237[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4237[iVar0 /*3*/].f_2 = Global_40.f_4237[iVar0 + 1 /*3*/].f_2;
			func_539(iVar0, func_535(iVar0 + 1));
			func_303(&(Global_40.f_4237[iVar0 + 1 /*3*/]));
			func_539(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_539(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
		{
			MISC::SET_BIT(&Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(&Global_1347701, iParam0);
	}
}

void func_540(var uParam0)
{
	if ((func_67(Global_35, 0) && func_527(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_541(*uParam0);
	}
	if ((!func_67(Global_35, 0) || !func_527(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_303(uParam0);
	}
}

void func_541(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_537(iParam0, 0);
}

