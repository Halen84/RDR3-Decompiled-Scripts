#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0.0f;
	float fLocal_13 = 0.0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<69> /*552*/ sLocal_19 = { 0, 0, 10, 0, 0, 0, 0, 0, -1, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_118 = 3;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 10;
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
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_185 = 0;
	var uLocal_186[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	bool bLocal_203 = false;
	bool bLocal_204 = false;
	bool bLocal_205 = false;
	int iLocal_206 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __SCRIPT()
{
	iLocal_0 = 1;
	fLocal_12 = 1.0f;
	fLocal_13 = 1.0f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
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
	char[] cVar0[8];
	Vector3 vVar4;
	Vector3 vVar7;
	char[] cVar10[8];

	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_19.f_0))
	{
		sLocal_19.f_0 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_19.f_5))
	{
		func_12(&sLocal_19);
		bLocal_203 = true;
		sLocal_19.f_6 = iLocal_3;
		sLocal_19.f_7 = uLocal_4;
		sLocal_19.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_3);
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_19.f_5))
		{
			iLocal_197 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(sLocal_19.f_5);
			OBJECT::CREATE_OBJECT_SKELETON(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(sLocal_19.f_5));
		}
	}
	switch (iLocal_202)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_19.f_5) && OBJECT::CREATE_OBJECT_SKELETON(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(sLocal_19.f_5)))
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_19.f_6))
				{
					iLocal_0 = 0;
					return;
				}
				if (TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(sLocal_19.f_5))
				{
					iLocal_0 = 0;
					return;
				}
				func_13(&sLocal_19);
				func_14(&sLocal_19);
				bLocal_205 = func_15(&sLocal_19);
				if (bLocal_205)
				{
					sLocal_19.f_3 = !func_16(sLocal_19.f_5);
				}
				else
				{
					sLocal_19.f_3 = 1;
					func_17(0, 0.0f, 0.0f, 0.0f, &iLocal_197, 0, 0);
				}
				iLocal_198 = func_18(&sLocal_19, bLocal_205);
				func_19(sLocal_19.f_5);
				sLocal_19.f_1 = ENTITY::GET_ENTITY_MODEL(sLocal_19.f_5);
				func_20(&sLocal_19);
				func_21(&uLocal_199);
				iLocal_202 = 1;
			}
			break;
		case 1:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_19.f_6))
			{
				iLocal_0 = 0;
				return;
			}
			if (bLocal_203)
			{
				iLocal_206 = 0;
				while (iLocal_206 < 10)
				{
					MISC::_INT_TO_STRING(iLocal_206, "%i", &cVar0);
					func_23(&(uLocal_174[iLocal_206]), &(sLocal_19.f_12[iLocal_206]), &sLocal_19, &(uLocal_186[iLocal_206]), &cVar0, sLocal_19.f_37[iLocal_206 /*3*/], sLocal_19.f_68[iLocal_206 /*3*/], 0, 1, 1, func_22(&uLocal_199, 2.0f), sLocal_19.f_26[iLocal_206]);
					iLocal_206++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_19.f_5))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(sLocal_19.f_5, true, false) /*3*/ };
					vVar7 = { ENTITY::GET_ENTITY_ROTATION(sLocal_19.f_5, 2) /*3*/ };
				}
				else
				{
					vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) /*3*/ };
					vVar7 = { 0.0f, 0.0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) /*3*/ };
				}
				func_24(&iLocal_185, &iLocal_198, &sLocal_19, vVar4, vVar7);
			}
			bLocal_204 = true;
			iLocal_206 = 0;
			while (iLocal_206 < 10)
			{
				if (uLocal_174[iLocal_206] < 2)
				{
					bLocal_204 = false;
				}
				else
				{
					iLocal_206++;
					if (iLocal_185 != 4)
					{
						bLocal_204 = false;
					}
					if (bLocal_204)
					{
						func_21(&uLocal_199);
						iLocal_202 = 2;
					}
					Jump @776; // curOff = 561
					if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_19.f_6))
					{
						iLocal_0 = 0;
						return;
					}
					if (bLocal_203)
					{
						iLocal_206 = 0;
						while (iLocal_206 < 10)
						{
							MISC::_INT_TO_STRING(iLocal_206, "%i", &cVar10);
							func_23(&(uLocal_174[iLocal_206]), &(sLocal_19.f_12[iLocal_206]), &sLocal_19, &(uLocal_186[iLocal_206]), &cVar10, sLocal_19.f_37[iLocal_206 /*3*/], sLocal_19.f_68[iLocal_206 /*3*/], 0, 1, 0, func_22(&uLocal_199, 2.0f), sLocal_19.f_26[iLocal_206]);
							iLocal_206++;
						}
					}
					bLocal_204 = true;
					iLocal_206 = 0;
					while (iLocal_206 < 10)
					{
						if (uLocal_174[iLocal_206] != 4)
						{
							bLocal_204 = false;
						}
						else
						{
							iLocal_206++;
							if (bLocal_204)
							{
								func_25(&uLocal_199);
								iLocal_202 = 3;
							}
							Jump @776; // curOff = 734
							if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_19.f_6) || !PED::IS_PED_USING_THIS_SCENARIO(Global_35, sLocal_19.f_6))
							{
								iLocal_0 = 0;
								return;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_7()
{
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_19.f_5))
	{
		if (TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(sLocal_19.f_5))
		{
			func_26(sLocal_19.f_5);
		}
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
		func_27(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_28(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_29(&iVar0);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	iParam0->f_1 = 0;
	iParam0->f_154 = -1;
	iParam0->f_7 = 0;
	iParam0->f_8 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iParam0->f_99[iVar0] = -1;
		iVar0++;
	}
}

void func_13(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iParam0->f_103[iVar0 /*5*/] = -1;
		iParam0->f_103[iVar0 /*5*/].f_3 = 0;
		iParam0->f_103[iVar0 /*5*/].f_1 = 0;
		iParam0->f_103[iVar0 /*5*/].f_2 = 0.0f;
		iParam0->f_103[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

void func_14(int iParam0)
{
	func_30(iParam0);
	func_31(iParam0);
	func_32(iParam0);
}

int func_15(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0->f_5, "loot_allow_random") && DECORATOR::DECOR_GET_BOOL(iParam0->f_5, "loot_allow_random"))
	{
		return 1;
	}
	if (TASK::_IS_SCENARIO_POINT_FLAG_SET(iParam0->f_6, 25))
	{
		return 0;
	}
	if (func_33() == 0)
	{
		return 0;
	}
	if (func_34(TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_6, true)))
	{
		return 0;
	}
	if (func_35(0) || func_35(3))
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0)
{
	if ((((((((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		return false;
	}
	return true;
}

void func_17(int iParam0, Vector3 vParam1, var uParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_36(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_37(*uParam4);
	}
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5) && DECORATOR::DECOR_EXIST_ON(iParam0->f_5, "lootable_interior"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0->f_5, "lootable_interior");
		if (iVar0 == 0)
		{
			bParam1 = true;
		}
		else
		{
			return iVar0;
		}
	}
	if (bParam1)
	{
		switch (iParam0->f_8)
		{
			case 0:
				return func_38();
			case 1:
				return func_39();
			case 16:
				return func_40();
			case 17:
				return func_41(iParam0);
			default:
				break;
		}
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	struct<10> /*80*/ sVar1;

	iVar0 = OBJECT::_0x250EBB11E81A10BE(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_42(OBJECT::_0x2BF1953C0C21AC88(iVar0), 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
		return;
	}
	OBJECT::_0x7D4411D6736CD295(iVar0, &sVar1);
	if (sVar1.f_0 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_money", sVar1.f_0);
	}
	if (sVar1.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", sVar1.f_1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", sVar1.f_2);
	}
	if (sVar1.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", sVar1.f_3);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", sVar1.f_4);
	}
	if (sVar1.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", sVar1.f_5);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", sVar1.f_6);
	}
	if (sVar1.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", sVar1.f_7);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", sVar1.f_8);
	}
	if (sVar1.f_9 != 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", sVar1.f_9);
	}
}

void func_20(int iParam0)
{
	struct<13> /*104*/ sVar0;
	int iVar23;
	int iVar24;

	if (iParam0->f_3 & func_43(iParam0->f_5))
	{
		return;
	}
	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	if (!func_44(iParam0->f_5))
	{
		MISC::_0x48E4D50F87A96AA5(*iParam0, true, true, iParam0->f_1, &sVar0, 0);
	}
	if (sVar0.f_0 <= 0 && !iParam0->f_3)
	{
		return;
	}
	if (iParam0->f_3)
	{
		func_45(iParam0, &sVar0, 10);
	}
	if (iParam0->f_2 > 10)
	{
		iParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < iParam0->f_2)
	{
		iParam0->f_26[iVar23] = sVar0.f_1[iVar23];
		if (iParam0->f_103[iVar23 /*5*/].f_4 != 0)
		{
			iParam0->f_12[iVar23] = iParam0->f_103[iVar23 /*5*/].f_4;
		}
		else
		{
			iVar24 = TASK::_FIND_MODEL_FOR_ITEM(sVar0.f_1[iVar23]);
			if (iVar24 == 0 && iParam0->f_26[iVar23] != 0)
			{
				iParam0->f_12[iVar23] = joaat("SCRIPTEDBALL");
			}
			else
			{
				iParam0->f_12[iVar23] = iVar24;
			}
		}
		iVar23++;
	}
}

void func_21(var uParam0)
{
	func_46(uParam0, 0.0f);
}

bool func_22(var uParam0, float fParam1)
{
	if (!func_47(uParam0))
	{
		return false;
	}
	if (func_48(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_23(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, Vector3 vParam5, Vector3 vParam8, bool bParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;

	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*uParam1, false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*uParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_5))
				{
					if (iParam2->f_154 != -1)
					{
						vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam2->f_5, iParam2->f_154) /*3*/ };
						vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(iParam2->f_5), vParam5) /*3*/ };
					}
					else
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2->f_5, vParam5) /*3*/ };
					}
				}
				else if (TASK::DOES_SCENARIO_POINT_EXIST(iParam2->f_6))
				{
					vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iParam2->f_6, true), TASK::_GET_SCENARIO_POINT_HEADING(iParam2->f_6, true), vParam5) /*3*/ };
				}
			else
			{
				}
				else
				{
					*uParam3 = OBJECT::CREATE_OBJECT(*uParam1, vVar0, true, true, false, false, bParam11);
					ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
					OBJECT::_MAKE_ITEM_CARRIABLE(*uParam3);
					if (bParam12)
					{
						iVar6 = func_49(iParam2->f_4, iParam2->f_154, 0);
						vVar0 = { func_50(iParam2->f_4, vParam5, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2->f_5, ENTITY::GET_ENTITY_COORDS(*uParam3, true, false))) /*3*/ };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, iParam2->f_5, iVar6, vVar0, vParam8, false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_ROTATION(*uParam3, vParam8, 2, true);
					}
					*uParam0 = 2;
					Jump @359; // curOff = 348
					if (bParam14)
					{
					}
					Jump @502; // curOff = 359
					if (!bParam13)
					{
						if (iParam15 != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
						{
							*uParam0 = iVar7;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
						{
							*uParam0 = iVar7;
						}
						else if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam2->f_6))
						{
							*uParam0 = iVar7;
						}
						else if (TASK::_ASSOCIATE_PROP_WITH_SCENARIO(iParam2->f_6, *uParam3, sParam4, true))
						{
							*uParam0 = iVar7;
						}
						else if (bParam14)
						{
							*uParam0 = iVar7;
						}
					}
					Jump @502; // curOff = 474
					if (iParam15 != 0)
					{
						TASK::_0xA6A76D666A281F2D(*uParam3, iParam15);
						*uParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_24(int iParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6)
{
	int iVar0;
	int iVar1;

	switch (*iParam0)
	{
		case 0:
			if (*iParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*iParam1, false);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*iParam1))
			{
				if (*iParam1 == joaat("P_DRESSINGLCMHAY01X"))
				{
					vParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam3, vParam6.z, 0.0f, 0.0f, 0.08f) /*3*/ };
				}
				iVar0 = OBJECT::CREATE_OBJECT(*iParam1, vParam3, true, true, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_5))
				{
					iVar1 = func_49(iParam2->f_4, iParam2->f_154, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iParam2->f_5, iVar1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, false, false, false, false, 2, true, true, false);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iVar0, vParam3, vParam6.z, false, true);
				}
				*iParam0 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_25(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "chest_open", true);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_52(func_51(joaat("CHESTS_LOOTED")), 1);
	}
	else
	{
		func_52(func_51(joaat("CHESTS_SEARCHED")), 1);
	}
}

void func_27(int iParam0)
{
}

void func_28(int iParam0)
{
	if (iParam0->f_1 != sLocal_19.f_0)
	{
		return;
	}
	if (TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(sLocal_19.f_5))
	{
		if (!func_53(sLocal_19.f_5))
		{
			func_26(sLocal_19.f_5);
		}
	}
}

void func_29(int iParam0)
{
}

void func_30(int iParam0)
{
	switch (iParam0->f_7)
	{
		case joaat("RANSACK_PROP_CHEST_MEDIUM_OPEN"):
			iParam0->f_8 = 0;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CHEST_LARGE_OPEN"):
			iParam0->f_8 = 1;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_HIGH_OPEN_B"):
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_HIGH_OPEN_A"):
			if (ENTITY::GET_ENTITY_MODEL(iParam0->f_5) == joaat("P_MEDICINECHEST01X"))
			{
				iParam0->f_8 = 2;
			}
			else
			{
				iParam0->f_8 = 3;
			}
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_MID_OPEN"):
			iParam0->f_8 = 5;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_OPEN_B"):
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_OPEN_A"):
			iParam0->f_8 = 6;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_HIGH_OPEN"):
			iParam0->f_8 = 4;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_MID_OPEN"):
			iParam0->f_8 = 9;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_LOW_OPEN"):
			iParam0->f_8 = 10;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_LEFT_OPEN"):
			iParam0->f_8 = 7;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_RIGHT_OPEN"):
			iParam0->f_8 = 8;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_DRAWER_SINGLE_1_OPEN"):
			iParam0->f_8 = 16;
			iParam0->f_154 = func_54(iParam0, 0);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_SINGLE_2_OPEN"):
			iParam0->f_8 = 16;
			iParam0->f_154 = func_54(iParam0, 1);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_SINGLE_3_OPEN"):
			iParam0->f_8 = 16;
			iParam0->f_154 = func_54(iParam0, 2);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_SINGLE_4_OPEN"):
			iParam0->f_8 = 16;
			iParam0->f_154 = func_54(iParam0, 3);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_ATTACHED_DS_12"):
		case joaat("RANSACK_ATTACHED_DS_234"):
		case joaat("RANSACK_ATTACHED_DS_23"):
		case joaat("RANSACK_ATTACHED_DS_123"):
			iParam0->f_8 = 16;
			iParam0->f_154 = func_54(iParam0, 0);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_1_OPEN"):
			iParam0->f_8 = 17;
			iParam0->f_154 = func_54(iParam0, 4);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_2_OPEN"):
			iParam0->f_8 = 17;
			iParam0->f_154 = func_54(iParam0, 5);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_3_OPEN"):
			iParam0->f_8 = 17;
			iParam0->f_154 = func_54(iParam0, 6);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_4_OPEN"):
			iParam0->f_8 = 17;
			iParam0->f_154 = func_54(iParam0, 7);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_ATTACHED_DD_123"):
		case joaat("RANSACK_ATTACHED_DD_234"):
		case joaat("RANSACK_ATTACHED_DD_1234"):
		case joaat("RANSACK_ATTACHED_DD_34"):
			iParam0->f_8 = 17;
			iParam0->f_154 = func_54(iParam0, 4);
			iParam0->f_4 = 1;
			break;
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_1M05"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_1M05"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0M0"):
			iParam0->f_8 = 13;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_1M05"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_1M05"):
			iParam0->f_8 = 14;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_1M05"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0M60"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0M80"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0M45"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_1M05"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0M0"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0M60"):
			iParam0->f_8 = 15;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_LOW_LEFT_OPEN"):
			iParam0->f_8 = 11;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_LOW_RIGHT_OPEN"):
			iParam0->f_8 = 12;
			iParam0->f_154 = func_54(iParam0, -1);
			break;
		default:
			iParam0->f_8 = -1;
			break;
	}
}

void func_31(int iParam0)
{
	switch (iParam0->f_8)
	{
		case 0:
			iParam0->f_99[0] = 10;
			break;
		case 1:
			iParam0->f_99[0] = 10;
			break;
		case 2:
			iParam0->f_99[0] = 150;
			break;
		case 3:
			iParam0->f_99[0] = 105;
			iParam0->f_99[1] = 150;
			break;
		case 4:
			iParam0->f_99[0] = 105;
			iParam0->f_99[1] = 150;
			break;
		case 5:
			iParam0->f_99[0] = 105;
			iParam0->f_99[1] = 150;
			break;
		case 6:
			iParam0->f_99[0] = 10;
			break;
		case 7:
			iParam0->f_99[0] = 10;
			break;
		case 8:
			iParam0->f_99[0] = 10;
			break;
		case 9:
			iParam0->f_99[0] = 80;
			iParam0->f_99[1] = 105;
			iParam0->f_99[2] = 150;
			break;
		case 10:
			iParam0->f_99[0] = 10;
			break;
		case 11:
			iParam0->f_99[0] = 10;
			break;
		case 12:
			iParam0->f_99[0] = 10;
			break;
		case 13:
			iParam0->f_99[0] = 5;
			break;
		case 14:
			iParam0->f_99[0] = 5;
			break;
		case 15:
			iParam0->f_99[0] = 5;
			break;
		case 16:
			break;
		case 17:
			break;
	}
}

void func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13[10];

	iVar10 = 1;
	iVar11 = 1;
	iVar12 = 1;
	switch (iParam0->f_8)
	{
		case 4:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.6f;
			break;
		case 9:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.3f;
			break;
		case 10:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 3:
			fVar2 = 0.07f;
			fVar3 = 0.63f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.6f;
			break;
		case 2:
			fVar2 = 0.14f;
			fVar3 = 0.56f;
			fVar4 = 0.05f;
			fVar5 = 0.16f;
			fVar9 = 1.6f;
			break;
		case 5:
			func_55(iParam0);
			return;
		case 6:
			func_56(iParam0);
			return;
		case 16:
			func_57(iParam0);
			return;
		case 17:
			func_58(iParam0);
			return;
		case 0:
			func_59(iParam0);
			return;
		case 1:
			fVar2 = -0.55f;
			fVar3 = 0.55f;
			fVar4 = -0.2f;
			fVar5 = 0.2f;
			break;
		case 7:
			fVar2 = 0.12f;
			fVar3 = 0.21f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 8:
			fVar2 = (-1.0f * 0.21f);
			fVar3 = (-1.0f * 0.12f);
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 11:
			fVar2 = 0.12f;
			fVar3 = 0.48f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 12:
			fVar2 = (-1.0f * 0.48f);
			fVar3 = (-1.0f * 0.12f);
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 13:
			func_60(iParam0);
			return;
		case 14:
			func_61(iParam0);
			return;
		case 15:
			func_62(iParam0);
			return;
	}
	fVar7 = fVar4;
	fVar5 = fVar5;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0->f_99[iVar0] != -1)
		{
			iVar1++;
		}
		iVar0++;
	}
	func_63(&uVar13, 10, 1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		fVar6 = func_64(fVar6, fVar2, fVar3, 0.15f, 0.25f, &iVar11);
		if (iVar10 != iVar11)
		{
			fVar7 = func_64(fVar7, fVar4, fVar5, 0.13f, 0.13f, &iVar12);
			iVar10 = iVar11;
		}
		if (iVar1 > 0)
		{
			fVar8 = ((BUILTIN::TO_FLOAT(iParam0->f_99[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)]) / 100.0f) - fVar9);
		}
		iParam0->f_37[uVar13[iVar0] /*3*/] = { fVar6, fVar7, fVar8 /*3*/ };
		iVar0++;
	}
}

int func_33()
{
	return Global_1572887.f_12;
}

bool func_34(Vector3 vParam0)
{
	int iVar0;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_35(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_65(Global_1835011[iParam0 /*74*/].f_1);
}

int func_36(int iParam0, Vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, iParam5, 1.0f, 0, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iParam4))
		{
			iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("EMPTY"));
	}
}

int func_38()
{
	return joaat("P_DRESSINGLCMHAY01X");
}

int func_39()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iVar1 = 0;
	switch (iVar0)
	{
		case 0:
			iVar1 = joaat("S_LOOTABLEBEDCHEST_A");
			break;
		case 1:
			iVar1 = joaat("S_LOOTABLEBEDCHEST_B");
			break;
		case 2:
			iVar1 = joaat("S_LOOTABLEBEDCHEST_C");
			break;
		case 3:
			iVar1 = joaat("S_LOOTABLEBEDCHEST_D");
			break;
	}
	return 0;
}

int func_40()
{
	int iVar0;

	iVar0 = 0;
	if (func_35(0))
	{
		iVar0 = joaat("P_ADL_DRWSNG01X");
	}
	return iVar0;
}

int func_41(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_35(3) && ENTITY::GET_ENTITY_MODEL(iParam0->f_5) == joaat("P_DESK09BX"))
	{
		iVar0 = joaat("P_WNT4_DRWDRESSING01X");
	}
	return iVar0;
}

bool func_42(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_43(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "scripted_loot_only")) && DECORATOR::DECOR_GET_BOOL(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	int iVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	while (!func_16(iParam0->f_5) && iVar8 < iParam2)
	{
		bVar0 = func_66(iParam0->f_5, &uVar9, &uVar1, &uVar10, &uVar11, &vVar2, &vVar5);
		if (func_67(bVar0, 0))
		{
			func_68(iParam0, uVar1, vVar2, vVar5, bVar0, uVar9, uVar10, uVar11);
			iParam1->f_1[iVar8] = bVar0;
			iVar8++;
		}
	}
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_69() - fParam1);
	func_70(uParam0, 1);
	func_71(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_47(var uParam0)
{
	return func_72(*uParam0, 1);
}

float func_48(var uParam0)
{
	if (!func_47(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_73(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_69() - uParam0->f_1);
}

int func_49(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

Vector3 func_50(bool bParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

struct<2> /*16*/ func_51(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_52(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_53(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return false;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_74(iParam0, iParam1)))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_5, func_74(iParam0, iParam1));
		return iVar0;
	}
	return 0;
}

void func_55(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { 0.05f, 0.07f, 0.2f /*3*/ };
	vVar0[1 /*3*/] = { 0.17f, 0.21f, 0.2f /*3*/ };
	vVar0[2 /*3*/] = { 0.28f, 0.07f, 0.2f /*3*/ };
	vVar0[3 /*3*/] = { 0.39f, 0.23f, 0.2f /*3*/ };
	vVar0[4 /*3*/] = { 0.41f, 0.08f, 0.2f /*3*/ };
	vVar0[5 /*3*/] = { 0.08f, 0.08f, -0.25f /*3*/ };
	vVar0[6 /*3*/] = { 0.22f, 0.19f, -0.25f /*3*/ };
	vVar0[7 /*3*/] = { 0.35f, 0.09f, -0.25f /*3*/ };
	vVar0[8 /*3*/] = { 0.49f, 0.19f, -0.25f /*3*/ };
	vVar0[9 /*3*/] = { 0.63f, 0.08f, -0.25f /*3*/ };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_56(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { 0.08f, 0.08f, 0.15f /*3*/ };
	vVar0[1 /*3*/] = { 0.22f, 0.19f, 0.15f /*3*/ };
	vVar0[2 /*3*/] = { 0.35f, 0.09f, 0.15f /*3*/ };
	vVar0[3 /*3*/] = { 0.49f, 0.19f, 0.15f /*3*/ };
	vVar0[4 /*3*/] = { 0.63f, 0.08f, 0.15f /*3*/ };
	vVar0[5 /*3*/] = { 0.08f, 0.08f, -0.35f /*3*/ };
	vVar0[6 /*3*/] = { 0.22f, 0.19f, -0.35f /*3*/ };
	vVar0[7 /*3*/] = { 0.35f, 0.09f, -0.35f /*3*/ };
	vVar0[8 /*3*/] = { 0.49f, 0.19f, -0.35f /*3*/ };
	vVar0[9 /*3*/] = { 0.63f, 0.08f, -0.35f /*3*/ };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_57(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { 0.15f, 0.07f, -0.06f /*3*/ };
	vVar0[1 /*3*/] = { 0.07f, 0.12f, -0.06f /*3*/ };
	vVar0[2 /*3*/] = { 0.0f, 0.08f, -0.06f /*3*/ };
	vVar0[3 /*3*/] = { -0.09f, 0.13f, -0.06f /*3*/ };
	vVar0[4 /*3*/] = { -0.15f, 0.08f, -0.06f /*3*/ };
	vVar0[5 /*3*/] = { -0.16f, 0.24f, -0.06f /*3*/ };
	vVar0[6 /*3*/] = { -0.1f, 0.29f, -0.06f /*3*/ };
	vVar0[7 /*3*/] = { 0.0f, 0.23f, -0.06f /*3*/ };
	vVar0[8 /*3*/] = { 0.08f, 0.29f, -0.06f /*3*/ };
	vVar0[9 /*3*/] = { 0.14f, 0.21f, -0.06f /*3*/ };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_58(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { 0.04f, 0.17f, -0.04f /*3*/ };
	vVar0[1 /*3*/] = { -0.13f, 0.22f, -0.04f /*3*/ };
	vVar0[2 /*3*/] = { -0.26f, 0.13f, -0.04f /*3*/ };
	vVar0[3 /*3*/] = { -0.4f, 0.23f, -0.04f /*3*/ };
	vVar0[4 /*3*/] = { -0.57f, 0.18f, -0.04f /*3*/ };
	vVar0[5 /*3*/] = { -0.56f, 0.33f, -0.04f /*3*/ };
	vVar0[6 /*3*/] = { -0.41f, 0.37f, -0.04f /*3*/ };
	vVar0[7 /*3*/] = { -0.23f, 0.36f, -0.04f /*3*/ };
	vVar0[8 /*3*/] = { -0.05f, 0.38f, -0.04f /*3*/ };
	vVar0[9 /*3*/] = { 0.08f, 0.34f, -0.04f /*3*/ };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_59(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { -0.34f, -0.11f, 0.11f /*3*/ };
	vVar0[1 /*3*/] = { -0.32f, -0.02f, 0.11f /*3*/ };
	vVar0[2 /*3*/] = { -0.19f, -0.14f, 0.11f /*3*/ };
	vVar0[3 /*3*/] = { -0.1f, -0.01f, 0.11f /*3*/ };
	vVar0[4 /*3*/] = { -0.32f, 0.17f, 0.11f /*3*/ };
	vVar0[5 /*3*/] = { -0.15f, 0.18f, 0.11f /*3*/ };
	vVar0[6 /*3*/] = { 0.06f, 0.13f, 0.11f /*3*/ };
	vVar0[7 /*3*/] = { 0.13f, 0.03f, 0.11f /*3*/ };
	vVar0[8 /*3*/] = { 0.27f, 0.12f, 0.11f /*3*/ };
	vVar0[9 /*3*/] = { 0.28f, -0.03f, 0.11f /*3*/ };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 10)
	{
		iParam0->f_68[iVar42 /*3*/] = { 0.0f, 0.0f, 90.0f /*3*/ };
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_60(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { 0.0f, 0.07f, 0.02f /*3*/ };
	vVar0[1 /*3*/] = { 0.0f, -0.07f, 0.02f /*3*/ };
	vVar0[2 /*3*/] = { -0.16f, -0.07f, 0.02f /*3*/ };
	vVar0[3 /*3*/] = { 0.16f, -0.07f, 0.02f /*3*/ };
	vVar0[4 /*3*/] = { -0.16f, 0.07f, 0.02f /*3*/ };
	vVar0[5 /*3*/] = { 0.16f, 0.07f, 0.02f /*3*/ };
	iParam0->f_2 = 6;
	func_63(&uVar31, iParam0->f_2, 1);
	iVar42 = 0;
	while (iVar42 < iParam0->f_2)
	{
		iParam0->f_68[iVar42 /*3*/] = { 0.0f, 0.0f, 90.0f /*3*/ };
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_61(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	vVar0[0 /*3*/] = { -0.11f, 0.07f, 0.02f /*3*/ };
	vVar0[1 /*3*/] = { 0.11f, 0.07f, 0.02f /*3*/ };
	vVar0[2 /*3*/] = { -0.11f, -0.07f, 0.02f /*3*/ };
	vVar0[3 /*3*/] = { 0.11f, -0.07f, 0.02f /*3*/ };
	vVar0[4 /*3*/] = { 0.0f, 0.0f, 0.02f /*3*/ };
	iParam0->f_2 = 5;
	func_63(&uVar31, iParam0->f_2, 1);
	iVar42 = 0;
	while (iVar42 < iParam0->f_2)
	{
		iParam0->f_68[iVar42 /*3*/] = { 0.0f, 0.0f, 90.0f /*3*/ };
		iParam0->f_37[iVar42 /*3*/] = { vVar0[uVar31[iVar42] /*3*/] /*3*/ };
		iVar42++;
	}
}

void func_62(int iParam0)
{
	Vector3 vVar0[10];
	var uVar31[10];
	float fVar42;
	int iVar43;

	fVar42 = 0.005f;
	iVar43 = 0;
	while (iVar43 < 9)
	{
		vVar0[iVar43 /*3*/] = { 0.0f, 0.0f, fVar42 /*3*/ };
		fVar42 += 0.02f;
		iParam0->f_68[iVar43 /*3*/] = { 0.0f, 0.0f, 90.0f /*3*/ };
		iVar43++;
	}
	iParam0->f_2 = 2;
	func_63(&uVar31, iParam0->f_2, 1);
	iVar43 = 0;
	while (iVar43 < iParam0->f_2)
	{
		iParam0->f_37[iVar43 /*3*/] = { vVar0[uVar31[iVar43] /*3*/] /*3*/ };
		iVar43++;
	}
}

void func_63(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 += -1;
	}
}

float func_64(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = func_76(func_75(), fParam3, fParam4);
	if (*iParam5)
	{
		if ((fVar0 + fParam0) > fParam2)
		{
			*iParam5 = 0;
			fVar1 = (fParam2 - MISC::ABSF(((fVar0 + fParam0) - fParam2)));
		}
		else
		{
			fVar1 = (fVar0 + fParam0);
		}
	}
	else if ((fParam0 - fVar0) < fParam1)
	{
		*iParam5 = 1;
		fVar1 = (fParam1 + MISC::ABSF(((fParam0 - fVar0) - fParam1)));
	}
	else
	{
		fVar1 = (fParam0 - fVar0);
	}
	return fVar1;
}

bool func_65(int iParam0)
{
	int iVar0;

	iVar0 = func_77(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_66(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	char cVar6[16];
	struct<2> /*16*/ sVar8;
	struct<2> /*16*/ sVar10;
	int iVar12;
	int iVar13;

	iVar0 = 0;
	iVar1 = 0;
	*uParam1 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 0;
	}
	*uParam1 = 1;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
		*uParam2 = 0;
		return joaat("CURRENCY_CASH");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
		*uParam2 = 0;
		return func_78(*uParam3);
	}
	strcpy_s(&cVar6, 16, "loot_ammo");
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		sVar8 = { cVar6 /*2*/ };
		sVar10 = { cVar6 /*2*/ };
		StringIntConCat(&sVar8, iVar5, 16);
		StringIntConCat(&sVar10, iVar5, 16);
		strcat_s(&sVar8, 16, "_type");
		strcat_s(&sVar10, 16, "_amt");
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &sVar8))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(iParam0, &sVar8);
			if (iVar1 != 0)
			{
				iVar0 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar1);
				DECORATOR::DECOR_REMOVE(iParam0, &sVar8);
				if (DECORATOR::DECOR_EXIST_ON(iParam0, &sVar10))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, &sVar10);
					DECORATOR::DECOR_REMOVE(iParam0, &sVar10);
					*uParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_weapon");
		if (iVar1 != 0)
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
			*uParam2 = 3;
			return func_79(iVar1);
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 /*3*/ };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 /*3*/ };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
		}
		iVar12 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
		*uParam2 = 1;
		return iVar12;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 /*3*/ };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 /*3*/ };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
		}
		iVar13 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
		*uParam2 = 1;
		return iVar13;
	}
	return 0;
}

bool func_67(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_68(int iParam0, var uParam1, Vector3 vParam2, Vector3 vParam5, bool bParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam0->f_103[iVar0 /*5*/] == -1)
		{
			iParam0->f_103[iVar0 /*5*/] = uParam1;
			iParam0->f_103[iVar0 /*5*/].f_3 = bParam8;
			iParam0->f_103[iVar0 /*5*/].f_1 = uParam9;
			iParam0->f_103[iVar0 /*5*/].f_2 = uParam10;
			iParam0->f_103[iVar0 /*5*/].f_4 = uParam11;
			if (!func_80(vParam2))
			{
				iParam0->f_37[iVar0 /*3*/] = { vParam2 /*3*/ };
			}
			if (!func_80(vParam5))
			{
				iParam0->f_68[iVar0 /*3*/] = { vParam5 /*3*/ };
			}
		}
		else
		{
			iVar0++;
		}
	}
}

float func_69()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_72(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_73(var uParam0)
{
	return func_72(*uParam0, 2);
}

char* func_74(int iParam0, int iParam1)
{
	switch (iParam0->f_8)
	{
		case -1:
			return "";
		case 0:
			return "Root_p_CHEST_MED";
		case 1:
			return "Root_p_CHEST_LRG";
		case 2:
		case 3:
			return "p_CUPBOARDS_NARROW_TalL";
		case 4:
			return "p_CUPBOARDS_WIDE_TalL";
		case 5:
			return "p_CUPBOARDS_NARROW_MedL";
		case 6:
			return "p_CUPBOARDS_NARROW_LowL";
		case 7:
			return "p_CUPBOARDS_NARROW_LowL";
		case 8:
			return "p_CUPBOARDS_NARROW_LowR";
		case 9:
			return "p_CUPBOARDS_WIDE_MedL";
		case 10:
			return "p_CUPBOARDS_WIDE_LowL";
		case 11:
			return "p_CUPBOARDS_WIDE_LowL";
		case 12:
			return "p_CUPBOARDS_WIDE_LowR";
		case 13:
			return "Root_p_LOCKBOX_LRG";
		case 14:
			return "Root_p_LOCKBOX_MED";
		case 15:
			return "Root_p_LOCKBOX_SML";
		case 16:
			return func_81(iParam1);
		case 17:
			return func_81(iParam1);
	}
	return "";
}

bool func_75()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -1;
	}
	return func_83(iParam0);
}

int func_78(float fParam0)
{
	int iVar0;
	float fVar1;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	fVar1 += fParam0;
	if (fVar1 > 0.75f)
	{
		iVar0 = joaat("MONEY_BILLSTACK");
	}
	else if (fVar1 > 0.5f)
	{
		iVar0 = joaat("MONEY_MONEYCLIP");
	}
	else if (fVar1 > 0.25f)
	{
		iVar0 = joaat("MONEY_COINPURSE");
	}
	else
	{
		iVar0 = joaat("MONEY_COIN");
	}
	return iVar0;
}

int func_79(int iParam0)
{
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	return 0;
}

bool func_80(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "p_DRAWER_SGL_Drawer1";
		case 1:
			return "p_DRAWER_SGL_Drawer2";
		case 2:
			return "p_DRAWER_SGL_Drawer3";
		case 3:
			return "p_DRAWER_SGL_Drawer4";
		case 4:
			return "p_DRAWER_DBL_Drawer1_NUB";
		case 5:
			return "p_DRAWER_DBL_Drawer2_NUB";
		case 6:
			return "p_DRAWER_DBL_Drawer3_NUB";
		case 7:
			return "p_DRAWER_DBL_Drawer4_NUB";
	}
	return "";
}

bool func_82(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_83(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_84(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_84(int iParam0)
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

