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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	struct<113> /*904*/ sLocal_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	struct<5> /*40*/ sLocal_136 = { -1, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = -1;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 1073741824;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 1;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	struct<17> /*136*/ sLocal_180[2];
	bool bLocal_215 = false;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	bool bLocal_222 = false;
	int iLocal_223 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_148 = 1;
	iLocal_149 = 1;
	iLocal_19 = sScriptParam_0.f_0;
	Global_1392235.f_3 = 0;
	if (func_1() != -1)
	{
		func_2(&sLocal_20, -1);
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BOUNTY_POSTER") /* GXTEntry: "Bounty Poster" */) > 1)
	{
		func_2(&sLocal_20, -1);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		sLocal_136.f_4 = { TASK::_GET_SCENARIO_POINT_COORDS(sScriptParam_0.f_1, true) /*3*/ };
	}
	else
	{
		func_2(&sLocal_20, -1);
	}
	sLocal_136.f_1 = func_3(sLocal_136.f_4);
	sLocal_136.f_2 = func_4(sLocal_136.f_1);
	sLocal_136.f_3 = func_5(0, sLocal_136.f_2, 2, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&sLocal_20, -1);
	}
	func_6(&sLocal_136, &sLocal_20);
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1, 1);
	func_8(sLocal_20.f_112);
	SCRIPTS::_0xE7282390542F570D(iLocal_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3(Vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_9(vParam0, 0);
	switch (iVar1)
	{
		case 76:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 105:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 38:
			iVar0 = 5;
			break;
		case 115:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_4(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 26;
			break;
		case 3:
			iVar0 = 105;
			break;
		case 4:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 38;
			break;
		case 6:
			iVar0 = 115;
			break;
	}
	return iVar0;
}

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_10())
	{
		iVar2 = func_10();
	}
	iVar5 = func_11(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_12(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_12(iVar6) == 0)
			{
				return func_13(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_12(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_12(iVar6) == 0)
			{
				return func_13(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == 0)
			{
				return func_13(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_6(var uParam0, var uParam1)
{
	while (func_14(uParam1, uParam0))
	{
		if (func_15(uParam0))
		{
			func_2(uParam1, uParam0->f_2);
		}
		if (!Global_1879534)
		{
			func_16(uParam1, uParam0);
			if (func_17())
			{
				if (func_18(1))
				{
					func_19(1, 0, 0);
				}
				func_20(&iLocal_159, 0);
				func_21(&(uParam1->f_6), &iLocal_159, &sLocal_180, 1, 1);
				if (iLocal_14 < 4)
				{
					func_22(uParam0);
				}
				func_23(5);
			}
			switch (iLocal_14)
			{
				case 0:
					if (!VOLUME::DOES_VOLUME_EXIST(uParam1->f_112))
					{
						func_24(uParam0->f_1, &(uParam1->f_112));
					}
					if (func_25(uParam0, 1, uParam1->f_6))
					{
						if (iLocal_223 >= 3)
						{
							if (func_26(uParam0, uParam1))
							{
								if (!CAM::IS_SCREEN_FADED_OUT())
								{
									func_27(uParam0);
									func_24(uParam0->f_1, &(uParam1->f_112));
									if (!VOLUME::DOES_VOLUME_EXIST(uParam1->f_115))
									{
										uParam1->f_115 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_28(uParam0->f_1), 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f, "BHPOSTER_CLEAR_AREA");
									}
									if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam1->f_114))
									{
										uParam1->f_114 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam1->f_115, false, 15);
									}
									if (TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_4) && !func_29())
									{
										TASK::_SET_SCENARIO_POINT_ACTIVE(uParam1->f_4, true);
									}
									func_30(uParam0);
									func_31(0);
									func_23(1);
								}
							}
							else
							{
								Global_1392235.f_3 = 1;
							}
						}
					}
					break;
				case 1:
					func_30(uParam0);
					if (bLocal_222 || func_25(uParam0, 0, uParam1->f_6))
					{
						if (func_32(uParam0))
						{
							func_33(uParam0, uParam1);
							func_34(uParam1, uParam0);
							func_35(uParam1, uParam0);
							if (func_36(uParam1))
							{
								func_37(uParam0);
								func_38(uParam0);
								Global_1392235.f_3 = 1;
								func_23(2);
							}
						}
					}
					else
					{
						func_23(0);
						func_7(uParam1, uParam0->f_2, 0);
					}
					break;
				case 2:
					if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) || func_39())
					{
						func_40(*uParam0, 1);
						func_41(*uParam0);
						func_42(*uParam0);
						func_43(uParam0);
						func_44(*uParam0);
						func_45(*uParam0);
						func_46(0, -1);
						func_23(3);
					}
					break;
				case 3:
					if (iLocal_144 >= 3)
					{
						func_22(uParam0);
						if (func_47(uParam1->f_6, 0))
						{
							func_23(4);
						}
						else
						{
							func_2(uParam1, uParam0->f_2);
						}
					}
					break;
				case 4:
					if (!func_48(Global_35, uParam1->f_112, 1, 0))
					{
						if (!func_49(uParam0->f_2, 0, 0) && func_50(Global_35, uParam1->f_6, 1, 1) > 15.0f)
						{
							func_23(5);
						}
					}
					break;
				case 5:
					if ((!TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_9) || !PED::IS_PED_USING_THIS_SCENARIO(uParam1->f_6, uParam1->f_9)) || func_50(Global_35, uParam1->f_6, 1, 1) > 50.0f)
					{
						func_2(uParam1, uParam0->f_2);
					}
					break;
			}
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_112) && (func_48(Global_35, uParam1->f_112, 1, 0) || func_49(uParam0->f_2, 0, 1)))
		{
			BUILTIN::WAIT(0);
		}
		else if (iLocal_14 >= 2)
		{
			BUILTIN::WAIT(0);
		}
		else if (BUILTIN::VDIST2(Global_36, func_28(uParam0->f_1)) < 1225.0f)
		{
			BUILTIN::WAIT(100);
		}
		else
		{
			BUILTIN::WAIT(500);
		}
	}
}

void func_7(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iLocal_144 < 4)
	{
		func_31(4);
	}
	func_51(0);
	func_52(0);
	iLocal_147 = 0;
	if (func_18(1))
	{
		func_19(1, 0, 0);
	}
	func_20(&iLocal_159, 0);
	func_21(&(uParam0->f_6), &iLocal_159, &sLocal_180, 1, 1);
	if (bParam2)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_4);
		}
	}
	else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_4, false);
	}
	Global_1392235.f_3 = 1;
	if (bParam2)
	{
		func_53(uParam0, bParam2);
		STREAMING::_REMOVE_SCENARIO_ASSET(joaat("SC_BOUNTY_HUNTER_SHERIFF"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_JOURNAL_OPEN01X"));
		func_54(iParam1);
	}
	if (uParam0->f_10 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_10);
		uParam0->f_10 = 0;
	}
	if (uParam0->f_2)
	{
		INTERIOR::UNPIN_INTERIOR(uParam0->f_1);
		uParam0->f_2 = 0;
	}
	iVar0 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (iVar0 > 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(iVar0);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_114))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_114, false);
	}
	func_8(uParam0->f_115);
}

void func_8(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_9(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_55();
	if (func_56(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_57(vParam0, iParam3);
}

int func_10()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_12(int iParam0)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_58(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_10())
	{
		return -1;
	}
	iVar0 = func_11(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_59(iVar1, 0);
	func_60(iVar1, 0);
	func_61(iVar1, 0);
	func_62(iVar1, 0);
	func_63(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_64(iVar1, iParam4);
	}
	return iVar1;
}

bool func_14(var uParam0, var uParam1)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(uParam0, uParam1->f_2);
		return false;
	}
	return true;
}

bool func_15(var uParam0)
{
	if (Global_1879534)
	{
		return false;
	}
	if (func_1() != -1)
	{
		return true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_4, true) > 250.0f)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SADIE4")) >= 1)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SADIE4_OUTRO")) >= 1)
	{
		return true;
	}
	return false;
}

void func_16(var uParam0, var uParam1)
{
	if (func_47(uParam0->f_6, 0) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_112, Global_36))
	{
		if (func_18(1))
		{
			func_65(&uLocal_219);
		}
		else if (func_66(&uLocal_219) && func_67(&uLocal_219) > 10.0f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_6, 116 /*PRF_0x3091E1F5*/, true);
		}
	}
	if (iLocal_14 >= 1 && iLocal_144 < 4)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_112, Global_36))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 328 /*PRF_DisableLoiteringInLawOfficeTrigger*/, true);
		}
		if (func_47(uParam0->f_6, 0))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_6, 49 /*PRF_DisableAgitationTriggers*/, true);
		}
		func_68(uParam0, uParam1);
		func_69(uParam0, uParam1);
		if (iLocal_14 >= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
			{
				if ((((PED::IS_PED_DEAD_OR_DYING(uParam0->f_6, true) || func_70(uParam0->f_6, Global_35)) || PED::IS_PED_LASSOED(uParam0->f_6)) || func_71(PLAYER::PLAYER_ID(), 0, 0, 1)) || PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(uParam0->f_6, Global_35))
				{
					func_31(4);
				}
				if ((uParam1->f_2 == 105 && iLocal_144 == 3) && iLocal_147 != 9)
				{
					if (func_72(Global_35, 1225.51f, -1294.05f, 75.91f, 0) < 2.0f || func_72(Global_35, 1231.15f, -1299.86f, 75.9f, 0) < 2.0f)
					{
						func_73(uParam0);
						func_74(&(uParam0->f_6), 1, 0, 1);
						func_31(5);
					}
				}
			}
		}
	}
	switch (iLocal_144)
	{
		case 0:
			if (iLocal_14 >= 1)
			{
				if (func_56(sLocal_136.f_2) && func_75(sLocal_136.f_2))
				{
					if (func_76(uParam0, uParam1))
					{
						func_65(&(uParam0->f_109));
						func_31(1);
					}
				}
			}
			break;
		case 1:
			if (iLocal_14 >= 2)
			{
				func_31(2);
			}
			else if (func_77(sLocal_136.f_2))
			{
				func_78(uParam0, uParam1);
			}
			break;
		case 2:
			func_79(uParam0, uParam1);
			if (iLocal_146 == 5)
			{
				func_65(&(uParam0->f_109));
				func_31(3);
			}
			break;
		case 3:
			break;
		case 4:
			if ((PED::IS_PED_DEAD_OR_DYING(uParam0->f_6, true) || !PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9)) || TASK::IS_PED_EXITING_SCENARIO(uParam0->f_6, false))
			{
				func_73(uParam0);
				func_74(&(uParam0->f_6), 1, 0, 1);
				func_31(5);
			}
			break;
		case 5:
			if (func_47(uParam0->f_6, 0))
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && !PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_9);
				}
			}
			break;
	}
}

bool func_17()
{
	if (iLocal_14 >= 3 && iLocal_14 < 5)
	{
		if (iLocal_144 >= 4)
		{
			return true;
		}
	}
	return false;
}

bool func_18(bool bParam0)
{
	return AUDIO::_0xFE5C6177064BD390(bParam0);
}

void func_19(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_20(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_80(&(iParam0->f_18));
}

void func_21(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_81(uParam0);
		func_82(iParam1, uParam2);
	}
	func_83(*uParam0, 1, bParam4);
}

void func_22(var uParam0)
{
	char cVar0[16];

	cVar0.f_0 = func_84(*uParam0);
	strcpy_s(&cVar1, 16, "PSTR_O_");
	strcat_s(&cVar1, 16, &cVar0);
	func_85(&cVar1, 7500, 0, 0, 0, 1);
	if (*uParam0 == 155)
	{
		if (!func_86(128))
		{
			func_87("PSTR_NGHT" /* GXTEntry: "This Bounty Target is only available at night." */, 10000, 0, 0, 0, 1);
		}
	}
}

void func_23(int iParam0)
{
	if (iLocal_14 != iParam0)
	{
		iLocal_14 = iParam0;
	}
}

void func_24(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			func_88(76, uParam1);
			break;
		case 5:
			func_88(38, uParam1);
			break;
		case 3:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1230.39f, -1295.224f, 77.42734f, 0.0f, 0.0f, -44.02999f, 20.63289f, 8.455379f, 3.559948f, "Rhodes Station");
			break;
		case 4:
			func_88(5, uParam1);
			break;
		case 2:
			func_88(26, uParam1);
			break;
		case 6:
			func_88(115, uParam1);
			break;
		default:
			break;
	}
}

bool func_25(var uParam0, bool bParam1, int iParam2)
{
	if (func_89(Global_1935630, (1 << 21)))
	{
		return false;
	}
	if (func_71(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	if (func_47(iParam2, 0) && PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(iParam2, Global_35))
	{
		return false;
	}
	if (iLocal_223 >= 3)
	{
		iLocal_223 = 0;
	}
	if (func_90(uParam0->f_2, iLocal_223, 1))
	{
		iLocal_223++;
	}
	else
	{
		iLocal_223 = 0;
	}
	if (bParam1)
	{
		if (iLocal_223 >= 3)
		{
			return true;
		}
	}
	else if (iLocal_223 > 0)
	{
		return true;
	}
	return false;
}

bool func_26(var uParam0, var uParam1)
{
	if (func_29() && Global_1392235.f_1 == 1)
	{
		return true;
	}
	if (func_48(Global_35, uParam1->f_112, 1, 0))
	{
		return false;
	}
	if (func_72(Global_35, uParam0->f_4, 1) < 25.0f)
	{
		return false;
	}
	return true;
}

void func_27(var uParam0)
{
	*uParam0 = func_91(uParam0->f_2);
	func_92(*uParam0);
	if (!func_29())
	{
		Global_1392235.f_3 = 0;
	}
	PED::_RESERVE_AMBIENT_PEDS(1);
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { -274.9763f, 805.6725f, 118.3688f };
		case 3:
			return { 1233.915f, -1293.723f, 75.902f };
		case 4:
			return { 2513.311f, -1304.996f, 47.954f };
		case 2:
			return { -1809.173f, -352.972f, 163.661f };
		case 5:
			return { -757.932f, -1265.766f, 43.041f };
		case 6:
			return { -5532.741f, -2927.213f, -2.361f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_29()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BEAT_BANDITO_EXECUTION")) > 0)
	{
		return true;
	}
	return false;
}

void func_30(var uParam0)
{
	STREAMING::REQUEST_MODEL(joaat("P_JOURNAL_OPEN01X"), false);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
	func_93(uParam0->f_2);
}

void func_31(int iParam0)
{
	iLocal_144 = iParam0;
}

bool func_32(var uParam0)
{
	if (func_94(uParam0->f_2) && STREAMING::HAS_MODEL_LOADED(joaat("P_JOURNAL_OPEN01X")))
	{
		return true;
	}
	return false;
}

void func_33(var uParam0, var uParam1)
{
	if (uParam0->f_2 != 105)
	{
		if (func_48(Global_35, uParam1->f_112, 1, 0) || func_49(uParam0->f_2, 0, 1))
		{
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 31, true);
		}
	}
}

void func_34(var uParam0, var uParam1)
{
	if (!uParam0->f_2)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1))
		{
			uParam0->f_1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_95(uParam1), func_96(uParam1->f_2));
		}
		else
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_1);
			uParam0->f_2 = 1;
		}
	}
}

void func_35(var uParam0, var uParam1)
{
	if (uParam0->f_2)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
		{
			uParam0->f_4 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X"), func_28(uParam1->f_1), func_97(uParam1->f_1), 1.0f, 0.0f, true);
			if (func_29())
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_4, false);
			}
		}
		else
		{
			func_98(uParam0, *uParam1);
		}
	}
	else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_3));
		}
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_4);
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_114))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_114, false);
		}
		func_8(uParam0->f_115);
	}
}

bool func_36(var uParam0)
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
	{
		return false;
	}
	if (!bLocal_222)
	{
		if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uParam0->f_4))
		{
			bLocal_222 = true;
		}
	}
	else if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	else if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, uParam0->f_4))
	{
		bLocal_222 = false;
	}
	return false;
}

void func_37(var uParam0)
{
	switch (*uParam0)
	{
		case 11:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOSHUA_BROWN" /* GXTEntry: "Joshua Brown" */));
			break;
		case 12:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LINDSEY_WOFFORD" /* GXTEntry: "Lindsey Wofford" */));
			break;
		case 13:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MARK_JOHNSON" /* GXTEntry: "Mark Johnson" */));
			break;
		case 153:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BART_CAVANAUGH" /* GXTEntry: "Bart Cavanaugh" */));
			break;
		case 14:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ELLIE_SWAN" /* GXTEntry: "Ellie Anne Swan" */));
			break;
		case 154:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CAMILLE_MILLEMONT" /* GXTEntry: "Camille de Millemont" */));
			break;
		case 15:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ROBBIE_LAIDLAW" /* GXTEntry: "Robbie Laidlaw" */));
			break;
		case 16:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANTONY_FOREMAN" /* GXTEntry: "Anthony Foreman" */));
			break;
		case 17:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_OTIS_SKINNER" /* GXTEntry: "Otis Skinner" */));
			break;
		case 18:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ELIAS_GREEN" /* GXTEntry: "Elias Green" */));
			break;
		case 155:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HERMAN_ZIZENDORF" /* GXTEntry: "Herman Zizendorf" */));
			break;
		case 19:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOAQUIN_ARROYO" /* GXTEntry: "Joaquín Arroyo" */));
			break;
		case 20:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ESTABAN_CORTEZ" /* GXTEntry: "Esteban Cortez" */));
			break;
	}
}

void func_38(var uParam0)
{
	switch (*uParam0)
	{
		case 11:
		case 153:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_VERNON_FARLEY" /* GXTEntry: "Sheriff Farley" */));
			break;
		case 12:
		case 16:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BENJAMIN_LAMBERT" /* GXTEntry: "Police Chief Lambert" */));
			break;
		case 14:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CURTIS_MALLOY" /* GXTEntry: "Sheriff Malloy" */));
			break;
		case 13:
		case 15:
		case 154:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HARMON_THOMAS" /* GXTEntry: "Sheriff Thomas" */));
			break;
		case 17:
		case 18:
		case 155:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_OSWALD_DUNBAR" /* GXTEntry: "Police Chief Dunbar" */));
			break;
		case 19:
		case 20:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SHERIFF_FREEMAN" /* GXTEntry: "Sheriff Freeman" */));
			break;
	}
}

bool func_39()
{
	if ((((((((((func_99(joaat("DOCUMENT_POSTER_SB_DUEL") /* GXTEntry: "Bounty Poster - Joshua Brown" */, 0, 0) > 0 || func_99(-120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_LEMOYNE_RAIDERS") /* GXTEntry: "Bounty Poster - Lindsey Wofford" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_WIFE_LOVER") /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_SKINNER_BROS") /* GXTEntry: "Bounty Poster - Otis Skinner" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_SKINNER_SEARCH") /* GXTEntry: "Bounty Poster - Elias Green" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_SHACK_ESCAPE") /* GXTEntry: "Bounty Poster - Robbie Laidlaw" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_SD_SALOON") /* GXTEntry: "Bounty Poster - Anthony Foreman" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_BANDITO_SHACK") /* GXTEntry: "Bounty Poster - Joaquín Arroyo" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_POSTER_BANDITO_MINE") /* GXTEntry: "Bounty Poster - Esteban Cortez" */, 0, 0) > 0) || func_99(joaat("DOCUMENT_TEST_BOUNTY_POSTER") /* GXTEntry: "Bounty Poster" */, 0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_100(Global_1347702[iParam0 /*49*/].f_12, (1 << 21)))
		{
			if (func_101(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
		else if (func_100(Global_1347702[iParam0 /*49*/].f_12, 256))
		{
			if (!func_101(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_102(iParam0);
}

void func_41(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 26)) != 0)
	{
		return;
	}
	iVar10 = func_103(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG" /* GXTEntry: "Dutch\'s Gang" */);
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	strcat_s(&cVar0, 64, "_DESC");
	iVar13 = func_104(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_105(iParam0), Global_1347702[iParam0 /*49*/].f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), Global_1347702[iParam0 /*49*/].f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_105(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_105(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_105(iParam0)))
	{
		func_106(iParam0, 4);
	}
}

void func_42(int iParam0)
{
	char cVar0[16];
	char* sVar3;

	switch (iParam0)
	{
		case 11:
			strcpy_s(&cVar0, 8, "DUL");
			break;
		case 13:
			strcpy_s(&cVar0, 8, "RCH");
			break;
		case 12:
			strcpy_s(&cVar0, 8, "ECF");
			break;
		case 14:
			strcpy_s(&cVar0, 8, "WIL");
			break;
		case 15:
			strcpy_s(&cVar0, 8, "SHE");
			break;
		case 16:
			strcpy_s(&cVar0, 8, "NBS");
			break;
		case 17:
			strcpy_s(&cVar0, 8, "SKN");
			break;
		case 18:
			strcpy_s(&cVar0, 8, "RDE");
			break;
		case 19:
			strcpy_s(&cVar0, 8, "BDS");
			break;
		case 20:
			strcpy_s(&cVar0, 8, "BDM");
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		strcpy_s(&cVar1, 16, "PSTR_O_");
		strcat_s(&cVar1, 16, &cVar0);
		sVar3 = func_107(0, &cVar1, 0, 0, -1, -1);
		func_108(iParam0, &cVar1, sVar3, -1082130432 /* Float: -1f */);
	}
}

void func_43(var uParam0)
{
	switch (*uParam0)
	{
		case 17:
		case 18:
			func_109(0, 3, 0, 0, 1);
			break;
	}
}

void func_44(int iParam0)
{
	func_110();
	if (!func_111(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

void func_45(int iParam0)
{
	func_112(Global_1347702[iParam0 /*49*/].f_15, 0);
}

void func_46(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_113(&Global_0, 8);
	}
	if (!func_114() || func_1() != -1)
	{
		return;
	}
	func_113(&Global_0, 1);
}

bool func_47(int iParam0, int iParam1)
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
	if (func_115(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_115(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_115(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_115(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_48(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_49(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;

	fVar0 = 0.0f;
	if (bParam2)
	{
		fVar0 = 4.0f;
	}
	switch (iParam0)
	{
		case 76:
			if (func_72(Global_35, -275.43f, 802.52f, 118.41f, 0) < (1.0f + fVar0) || func_72(Global_35, -276.39f, 812.02f, 118.42f, 0) < (1.0f + fVar0))
			{
				return true;
			}
			break;
		case 78:
			if (func_72(Global_35, 2911.362f, 1310.298f, 43.94069f, 0) < (1.0f + fVar0))
			{
				return true;
			}
			break;
		case 26:
			if (!bParam1 && func_72(Global_35, -1806.44f, -350.96f, 163.65f, 0) < (1.0f + fVar0))
			{
				return true;
			}
			if (func_72(Global_35, -1812.81f, -345.61f, 163.66f, 0) < (1.0f + fVar0))
			{
				return true;
			}
			break;
		case 105:
			if (func_72(Global_35, 1359.11f, -1305.88f, 76.77f, 0) < (1.0f + fVar0) || func_72(Global_35, 1358.8f, -1298.06f, 76.78f, 0) < (1.0f + fVar0))
			{
				return true;
			}
			break;
		case 5:
			if ((((((func_72(Global_35, 2511.1f, -1311.37f, 47.95f, 0) < (1.5f + fVar0) || func_72(Global_35, 2507.45f, -1317.49f, 47.62f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2496.77f, -1317.49f, 47.81f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2493.1f, -1311.09f, 47.94f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2493.22f, -1306.48f, 47.95f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2511.18f, -1306.25f, 47.95f, 0) < (1.5f + fVar0)) || func_72(Global_35, 2516.28f, -1308.78f, 47.96f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
		case 38:
			if (func_72(Global_35, -756.9f, -1269.2f, 43.03f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			else if (func_72(Global_35, -769.19f, -1269.29f, 42.98f, 0) < (1.0f + fVar0))
			{
				return true;
			}
			break;
		case 115:
			if (!bParam1 && func_72(Global_35, -5527.72f, -2930.482f, -2.2717f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_50(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_51(int iParam0)
{
	iLocal_145 = iParam0;
}

void func_52(int iParam0)
{
	iLocal_146 = iParam0;
}

void func_53(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		func_73(uParam0);
		func_74(&(uParam0->f_6), 1, 0, 1);
	}
	if (bParam1 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
}

void func_54(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		HUD::_TEXT_BLOCK_DELETE(sVar0);
	}
}

int func_55()
{
	return Global_1894899.f_2;
}

bool func_56(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_57(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_116(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2--;
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_58(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_59(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_117(iParam0);
	}
	else
	{
		func_118(iParam0, iParam1);
	}
	func_119();
}

void func_60(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_61(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_62(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_63(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_64(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

void func_65(var uParam0)
{
	func_120(uParam0, 0.0f);
}

bool func_66(var uParam0)
{
	return func_121(*uParam0, 1);
}

float func_67(var uParam0)
{
	if (!func_66(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_122(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_123() - uParam0->f_1);
}

void func_68(var uParam0, var uParam1)
{
	if (bLocal_215)
	{
		if (func_124(uParam1))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_6, 0, 1);
		}
		if (func_18(1))
		{
			func_65(&uLocal_216);
		}
		if (func_67(&uLocal_216) > 3.0f)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_6, 0) && TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_6, true))
			{
				if (!PED::_0x2DC0E8DCBD3546E9(uParam0->f_6))
				{
					TASK::REACT_LOOK_AT_END(uParam0->f_6, 1, false);
				}
			}
			TASK::TASK_CLEAR_LOOK_AT(uParam0->f_6);
			bLocal_215 = false;
		}
		else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_6, 0))
		{
			if (!PED::_0x2DC0E8DCBD3546E9(uParam0->f_6))
			{
				if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_6, true))
				{
					TASK::REACT_LOOK_AT(uParam0->f_6, Global_35, 1, 1, -1.0f, 1, 0, 0, 0);
				}
			}
		}
	}
}

void func_69(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iLocal_147;
	iVar1 = -1;
	if ((iLocal_147 > 0 && iLocal_147 < 6) && iLocal_146 >= 2)
	{
		func_125(&(sLocal_180[0 /*17*/]), 0, 0);
		func_125(&(sLocal_180[1 /*17*/]), 0, 0);
		iLocal_147 = 6;
	}
	if (func_48(Global_35, uParam0->f_112, 1, 0))
	{
		func_65(&uLocal_153);
	}
	if (iLocal_147 >= 8)
	{
		func_126(uParam0, uParam1);
	}
	func_127(uParam0, uParam1);
	switch (iLocal_147)
	{
		case 0:
			if (func_47(uParam0->f_6, 0))
			{
				if (sLocal_136.f_2 == 105)
				{
					iLocal_147 = 6;
				}
				else if (!bLocal_15)
				{
					func_128(&(sLocal_180[0 /*17*/]), "INTERACT_GREET" /* GXTEntry: "Greet" */, " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_128(&(sLocal_180[1 /*17*/]), "INTERACT_INSULT" /* GXTEntry: "Antagonize" */, " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					func_125(&(sLocal_180[0 /*17*/]), 0, 0);
					func_125(&(sLocal_180[1 /*17*/]), 0, 0);
					iLocal_147 = 1;
				}
				else if (iLocal_145 >= 3)
				{
					func_128(&(sLocal_180[0 /*17*/]), "INTERACT_QUESTION" /* GXTEntry: "Question" */, " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_128(&(sLocal_180[1 /*17*/]), "INTERACT_INSULT" /* GXTEntry: "Antagonize" */, " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					func_125(&(sLocal_180[0 /*17*/]), 1, 0);
					func_125(&(sLocal_180[1 /*17*/]), 0, 0);
					func_20(&iLocal_159, 0);
					iLocal_147 = 4;
				}
			}
			break;
		case 1:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iLocal_145 >= 3)
			{
				func_125(&(sLocal_180[0 /*17*/]), 1, 0);
				func_125(&(sLocal_180[1 /*17*/]), 1, 0);
				func_20(&iLocal_159, 0);
				func_65(&uLocal_150);
				iLocal_147 = 2;
			}
			break;
		case 2:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 != -1)
			{
				func_130(uParam0, uParam1, iVar1);
				iLocal_147 = 6;
			}
			else if (func_67(&uLocal_150) > 20.0f || (func_67(&uLocal_150) > 10.0f && !func_48(Global_35, uParam0->f_112, 1, 0)))
			{
				func_125(&(sLocal_180[0 /*17*/]), 0, 0);
				func_125(&(sLocal_180[1 /*17*/]), 0, 0);
				func_20(&iLocal_159, 0);
				func_65(&uLocal_150);
				iLocal_147 = 3;
			}
			break;
		case 3:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (func_67(&uLocal_150) > 10.0f)
			{
				func_128(&(sLocal_180[0 /*17*/]), "INTERACT_QUESTION" /* GXTEntry: "Question" */, " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_125(&(sLocal_180[0 /*17*/]), 1, 0);
				func_125(&(sLocal_180[1 /*17*/]), 0, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 4;
			}
			break;
		case 4:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 != -1)
			{
				func_131(uParam0, uParam1);
				iLocal_147 = 5;
			}
			break;
		case 5:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (!func_18(1))
			{
				func_132(uParam0, uParam1);
				func_133();
				iLocal_147 = 6;
			}
			break;
		case 6:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iLocal_146 == 4)
			{
				func_128(&(sLocal_180[0 /*17*/]), "INTERACT_QUESTION" /* GXTEntry: "Question" */, " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_128(&(sLocal_180[1 /*17*/]), "INTERACT_INSULT" /* GXTEntry: "Antagonize" */, " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_125(&(sLocal_180[0 /*17*/]), 0, 0);
				func_125(&(sLocal_180[1 /*17*/]), 0, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 7;
			}
			break;
		case 7:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iLocal_146 == 5)
			{
				func_125(&(sLocal_180[0 /*17*/]), 1, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 8;
			}
			break;
		case 8:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 == 0)
			{
				func_134(uParam0, uParam1);
				iLocal_149++;
				func_133();
				func_125(&(sLocal_180[0 /*17*/]), 0, 0);
				func_125(&(sLocal_180[1 /*17*/]), 0, 0);
				func_20(&iLocal_159, 0);
				iLocal_147 = 9;
			}
			break;
		case 9:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (!func_18(1))
			{
				if (iLocal_149 > func_135(*uParam1, iLocal_148))
				{
					iLocal_148++;
					iLocal_149 = 1;
					func_125(&(sLocal_180[0 /*17*/]), 1, 0);
					func_20(&iLocal_159, 0);
					if (iLocal_148 > 2)
					{
						func_65(&uLocal_150);
						iLocal_147 = 10;
					}
					else
					{
						iLocal_147 = 8;
					}
				}
				else
				{
					func_134(uParam0, uParam1);
					iLocal_149++;
				}
			}
			break;
		case 10:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 == 0)
			{
				func_81(&(uParam0->f_6));
				func_136(uParam0, uParam1);
				iLocal_147 = 11;
			}
			else if (func_67(&uLocal_150) > 60.0f)
			{
				func_125(&(sLocal_180[0 /*17*/]), 0, 0);
				func_125(&(sLocal_180[1 /*17*/]), 0, 0);
				func_20(&iLocal_159, 0);
				func_80(&uLocal_150);
				iLocal_147 = 12;
			}
			break;
		case 11:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8.0f, &sLocal_180, 0.0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (!func_18(1))
			{
				if (*uParam1 != 11)
				{
					func_133();
					func_137(uParam0, uParam1);
				}
				func_81(&(uParam0->f_6));
				iLocal_147 = 12;
			}
			break;
		case 12:
			break;
	}
	if (iVar0 != iLocal_147)
	{
	}
}

bool func_70(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_138(bParam1, bParam2, bParam3);
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

float func_72(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_73(var uParam0)
{
	int iVar0;

	func_20(&iLocal_159, 0);
	func_21(&(uParam0->f_6), &iLocal_159, &sLocal_180, 1, 1);
	if (func_47(uParam0->f_6, 0))
	{
		TASK::TASK_CLEAR_LOOK_AT(uParam0->f_6);
		if (func_18(1))
		{
			func_19(1, 0, 0);
		}
		iVar0 = func_139(uParam0->f_6, 0);
		if (iVar0 != -1 && func_140(iVar0, 0))
		{
			func_141(iVar0, 0, 0, 0, 0);
		}
	}
}

void func_74(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

bool func_75(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return func_142(iParam0, 8);
}

bool func_76(var uParam0, var uParam1)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9) || uParam1->f_2 == 105)
	{
		return true;
	}
	if (func_143(uParam0))
	{
		if (func_144(uParam0, uParam1))
		{
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_7, func_95(uParam1), func_145(uParam1), true, false, true);
				if (*uParam1 == 12)
				{
					uParam0->f_9 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SHOPKEEPER"), 2510.472f, -1308.54f, 47.954f, 275.9725f, 0.0f, 0.0f, true);
				}
				else if (func_146(uParam1))
				{
					uParam0->f_9 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_7, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, true);
				}
				else
				{
					uParam0->f_9 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("SC_BOUNTY_HUNTER_SHERIFF"), func_147(), func_148(), 0.0f, 0.0f, false);
				}
				TASK::_0xE69FDA40AAC3EFC0(uParam0->f_9, 0);
				TASK::_0xA7479FB665361EDB(uParam0->f_9, 0);
				if (func_124(uParam1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (uParam1->f_2 == 115)
						{
							uParam0->f_8 = OBJECT::CREATE_OBJECT(joaat("P_JOURNAL_OPEN01X"), -5530.3f, -2930.37f, -1.575f, true, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_8, -59.08f);
						}
						else if (uParam1->f_2 == 76)
						{
							uParam0->f_8 = OBJECT::CREATE_OBJECT(joaat("P_JOURNAL_OPEN01X"), -276.93f, 804.75f, 119.18f, true, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_8, -55.0f);
						}
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_77(int iParam0)
{
	if (iParam0 == 105)
	{
		return false;
	}
	return true;
}

void func_78(var uParam0, var uParam1)
{
	Vector3 vVar0[24];
	var uVar3;

	func_149(uParam0, uParam1);
	cVar0 = { func_150(uParam1) /*3*/ };
	switch (iLocal_145)
	{
		case 0:
			if (*uParam1 == 19 && func_29())
			{
				if (func_151(uParam0, uParam1))
				{
					TASK::TASK_POLICE(uParam0->f_6, true);
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_6, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -5531.23f, -2930.05f, -2.36f, -30.53f, -1, true, false, 0, -1.0f, false);
					func_152(uParam0, uParam1);
					func_51(1);
				}
			}
			else if (func_153(*uParam1))
			{
				if (func_154(uParam1))
				{
					if (func_151(uParam0, uParam1))
					{
						if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_6, -1))
						{
							func_152(uParam0, uParam1);
							func_155(uParam0);
							func_51(1);
						}
					}
				}
			}
			else if (func_156(uParam0, uParam1))
			{
				if (func_151(uParam0, uParam1))
				{
					func_152(uParam0, uParam1);
					func_65(&(uParam0->f_109));
					func_51(1);
				}
			}
			break;
		case 1:
			if (func_157(uParam0, uParam1))
			{
				if (func_67(&(uParam0->f_109)) > 1.0f || !func_49(uParam1->f_2, 0, 0))
				{
					if (!func_158(&uVar3) && !bLocal_15)
					{
						func_159(uParam0, uParam1);
						func_160(&(uParam0->f_11), cVar0, 0, -1, 0, 0);
						func_65(&(uParam0->f_109));
						PED::_0x15F4732C357B1D6D(uParam0->f_6, PLAYER::PLAYER_ID(), 6);
						bLocal_15 = true;
						func_51(2);
					}
					else
					{
						func_51(2);
					}
				}
			}
			else
			{
				func_65(&(uParam0->f_109));
			}
			break;
		case 2:
			if (!func_18(1))
			{
				func_65(&(uParam0->f_109));
				func_51(3);
			}
			else if (!func_48(Global_35, uParam0->f_112, 1, 0) && !func_49(uParam1->f_2, 0, 0))
			{
				func_161(&cVar0, 1, 0);
				func_65(&(uParam0->f_109));
				func_51(3);
			}
			else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&cVar0) >= 2)
			{
				func_162(uParam0);
			}
			break;
		case 3:
			if (func_67(&(uParam0->f_109)) > 1.0f)
			{
				func_162(uParam0);
				if (func_163(uParam0->f_6, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_6, true, false);
				}
				func_51(4);
			}
			break;
		case 4:
			break;
	}
}

void func_79(var uParam0, var uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3[24];
	int iVar6;
	Vector3 vVar7;

	func_149(uParam0, uParam1);
	if (iLocal_146 == 2 || iLocal_146 == 4)
	{
		if (bLocal_215 == 0)
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_6, 0, 1);
		}
	}
	switch (iLocal_146)
	{
		case 0:
			if (func_56(uParam1->f_2) && func_75(uParam1->f_2))
			{
				if (func_151(uParam0, uParam1))
				{
					if (func_153(*uParam1) && sLocal_136.f_2 != 105)
					{
						func_65(&(uParam0->f_109));
						func_52(1);
					}
					else if (!func_164(uParam1->f_2))
					{
						if (sLocal_136.f_2 == 105)
						{
							if (func_165(uParam0, uParam1))
							{
								func_152(uParam0, uParam1);
								func_65(&(uParam0->f_109));
								func_52(1);
							}
						}
						else
						{
							func_166(uParam0, uParam1);
							func_152(uParam0, uParam1);
							func_65(&(uParam0->f_109));
							func_52(1);
						}
					}
				}
				if (iLocal_14 >= 3 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_52(5);
				}
			}
			break;
		case 1:
			vVar0 = { func_167(uParam1) /*3*/ };
			if (func_168() || MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				func_52(2);
			}
			else if (!func_18(1))
			{
				if (func_67(&(uParam0->f_109)) > 1.0f)
				{
					func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
					func_52(2);
				}
			}
			break;
		case 2:
			func_169(uParam0, uParam1);
			if (func_168())
			{
				if (!func_48(uParam0->f_6, uParam0->f_112, 1, 0))
				{
					func_170(uParam0, uParam1);
				}
				else if (!PED::_0x2DC0E8DCBD3546E9(uParam0->f_6))
				{
					func_171(uParam0);
					func_65(&(uParam0->f_109));
					uParam1->f_7 = 0;
					func_52(4);
				}
				else if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_112, Global_36))
				{
					func_52(5);
				}
			}
			break;
		case 4:
			if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_112, Global_36))
			{
				if (func_18(1))
				{
					iVar6 = (uParam1->f_7 - 1);
					if (iVar6 >= 0)
					{
						cVar3 = { func_172(uParam1, iVar6) /*3*/ };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar3))
						{
							func_161(&cVar3, 1, 0);
						}
					}
					func_52(5);
				}
			}
			else if (!func_18(1))
			{
				vVar7 = { func_172(uParam1, uParam1->f_7) /*3*/ };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar7))
				{
					if (func_160(&(uParam0->f_11), vVar7, 0, -1, 0, 0))
					{
						uParam1->f_7++;
					}
				}
				else
				{
					func_52(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_80(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_81(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_82(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<10> /*80*/ sVar22;

	sVar1.f_1 = -1;
	sVar1.f_3 = -1;
	sVar1.f_6 = -1;
	sVar1.f_12 = (1 << 30);
	sVar1.f_16 = 1;
	sVar22.f_2 = 570;
	sVar22.f_3 = 1065353216;
	sVar22.f_4 = -1082130432;
	sVar22.f_9 = 2;
	func_173(iParam0, uParam1, 1);
	func_174(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
}

char[] func_84(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case 11:
			strcpy_s(&cVar0, 8, "DUL");
			break;
		case 13:
			strcpy_s(&cVar0, 8, "RCH");
			break;
		case 12:
			strcpy_s(&cVar0, 8, "ECF");
			break;
		case 153:
			strcpy_s(&cVar0, 8, "ODS");
			break;
		case 14:
			strcpy_s(&cVar0, 8, "WIL");
			break;
		case 154:
			strcpy_s(&cVar0, 8, "CPR");
			break;
		case 15:
			strcpy_s(&cVar0, 8, "SHE");
			break;
		case 16:
			strcpy_s(&cVar0, 8, "NBS");
			break;
		case 17:
			strcpy_s(&cVar0, 8, "SKN");
			break;
		case 18:
			strcpy_s(&cVar0, 8, "RDE");
			break;
		case 155:
			strcpy_s(&cVar0, 8, "BWH");
			break;
		case 19:
			strcpy_s(&cVar0, 8, "BDS");
			break;
		case 20:
			strcpy_s(&cVar0, 8, "BDM");
			break;
		default:
			strcpy_s(&cVar0, 8, "BM1");
			break;
	}
	return cVar0;
}

int func_85(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = cParam0;
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&sVar0, &sVar13, bParam5);
	return iVar15;
}

bool func_86(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_176(func_175());
	if (func_177(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_177(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_177(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_177(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_177(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_177(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_177(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_177(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_177(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_177(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_87(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_88(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2504.735f, -1308.831f, 49.06328f, 0.0f, 0.0f, 0.0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -1810.522f, -349.3201f, 163.474f, 0.0f, 0.0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -1813.445f, -353.8168f, 163.474f, 0.0f, 0.0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -272.9176f, 809.1227f, 119.4f, 0.0f, 0.0f, -80.06616f, 6.765059f, 4.518183f, 3.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -277.2155f, 807.0856f, 119.8f, 0.0f, 0.0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.428f, 1312.199f, 45.46901f, 0.0f, 0.0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 1355.464f, -1302.104f, 77.52525f, 0.0f, 0.0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 1360.674f, -1301.562f, 77.52525f, 0.0f, 0.0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -763.0246f, -1269.283f, 43.6176f, 0.0f, 0.0f, 0.0f, 12.03637f, 8.528987f, 5.107259f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -764.7173f, -1263.493f, 43.76242f, 0.0f, 0.0f, 0.0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5529.529f, -2927.852f, -1.033f, 0.0f, 0.0f, 25.0f, 6.7f, 6.3f, 3.0f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

bool func_89(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_90(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (iParam1 == -1)
	{
		bVar0 = true;
	}
	if (bVar0 || iParam1 == 0)
	{
		if (func_1() != -1)
		{
			return false;
		}
		if (func_178(0, 1, 1))
		{
			return false;
		}
		if (!func_179(0))
		{
			return false;
		}
		if (!func_180())
		{
			return false;
		}
		if (func_142(iParam0, (1 << 21)))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_181())
			{
				return false;
			}
		}
		else if (iParam0 == 76)
		{
			if (func_182(14) && !func_182(17))
			{
				return false;
			}
			if (Global_1392235.f_2)
			{
				return false;
			}
		}
		else if (iParam0 == 26)
		{
			if (!func_182(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!func_182(27))
			{
				return false;
			}
			else if (func_183(31, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 5)
		{
			if (func_183(130, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!func_184())
			{
				return false;
			}
		}
		if (func_181() && !func_182(69))
		{
			return false;
		}
		if (func_71(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_142(iParam0, (1 << 25)))
		{
			return false;
		}
		if (func_185(iParam0))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 2)
	{
		if ((((((((((((func_183(11, 0) || func_183(12, 0)) || func_183(13, 0)) || func_183(153, 0)) || func_183(14, 0)) || func_183(154, 0)) || func_183(15, 0)) || func_183(16, 0)) || func_183(17, 0)) || func_183(18, 0)) || func_183(155, 0)) || func_183(19, 0)) || func_183(20, 0))
		{
			return false;
		}
		if (func_91(iParam0) == -1)
		{
			return false;
		}
		if (!func_186(iParam0))
		{
			return false;
		}
		if (Global_1392235.f_4)
		{
			return false;
		}
	}
	return true;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_187(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_188(iParam0, iVar0);
		if (!func_189(iVar2))
		{
			if (func_190(iVar2))
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_191(iParam0);
	iVar1 = func_192(iParam0);
	func_193(iParam0);
	func_194(iVar0);
	func_195(iVar1);
}

void func_93(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !HUD::TEXT_BLOCK_IS_LOADED(sVar0))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar0);
	}
}

bool func_94(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	else if (HUD::TEXT_BLOCK_IS_LOADED(sVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_95(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 76:
			return { -277.57f, 804.27f, 118.39f };
		case 26:
			return { -1806.93f, -347.69f, 163.68f };
		case 5:
			return { 2508.8f, -1308.84f, 47.98f };
		case 38:
			return { -761.88f, -1266.28f, 43.07f };
		case 115:
			return { -5531.12f, -2930.71f, -2.36f };
		case 105:
			return { 1230.29f, -1298.66f, 75.9f };
		case 78:
			return { 2907.484f, 1314.698f, 44.38533f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "val_jail_int";
		case 105:
			return "rho_train_int";
		case 5:
			return "new_police_int";
		case 38:
			return "bla_jail_int";
		case 26:
			return "str_jailpost_int";
		case 115:
			return "tum_jail_int";
		default:
			break;
	}
	return "";
}

float func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -79.834f;
		case 3:
			return -42.0f;
		case 4:
			return 0.0f;
		case 2:
			return 154.4f;
		case 5:
			return 0.0f;
		case 6:
			return 115.25f;
		default:
			break;
	}
	return 0.0f;
}

void func_98(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		iVar0 = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->f_4, "PrimaryItem");
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) != func_196(iParam1))
		{
			STREAMING::REQUEST_MODEL(func_196(iParam1), false);
			if (STREAMING::HAS_MODEL_LOADED(func_196(iParam1)))
			{
				uParam0->f_3 = OBJECT::CREATE_OBJECT(func_196(iParam1), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_3, ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2, true);
				TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(uParam0->f_4, "PrimaryItem");
				ENTITY::DELETE_ENTITY(&iVar0);
				TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_4, uParam0->f_3, "PrimaryItem", true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_196(iParam1));
			}
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "letter_item"))
	{
		DECORATOR::DECOR_SET_INT(uParam0->f_3, "letter_item", func_197(iParam1));
	}
}

int func_99(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_200(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_201(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_202(bParam2), iParam0, false);
	return iVar2;
}

bool func_100(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_101(int iParam0, bool bParam1)
{
	switch (func_203(iParam0))
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

int func_102(int iParam0)
{
	int iVar0;

	if (func_189(iParam0))
	{
		return 0;
	}
	if (func_183(iParam0, 0))
	{
		func_204(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar0] == -1)
			{
				func_204(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_103(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return joaat("BLIP_SCM_DORKINS") /* GXTEntry: "Brother Dorkins" */;
	}
	else if (iParam0 == 26)
	{
		return joaat("BLIP_RC_CALLOWAY") /* GXTEntry: "Jim \'Boy\' Calloway" */;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return joaat("BLIP_RC_CHAIN_GANG") /* GXTEntry: "Chain Gang" */;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return joaat("BLIP_RC_CRACKPOT") /* GXTEntry: "Marco Dragic" */;
	}
	else if (iParam0 == 58)
	{
		return joaat("BLIP_SHOP_DOCTOR") /* GXTEntry: "Doctor" */;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return joaat("BLIP_SCM_STRAUSS") /* GXTEntry: "Leopold Strauss" */;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return joaat("BLIP_SCM_EVELYN") /* GXTEntry: "Evelyn Miller" */;
	}
	else if (iParam0 == 77)
	{
		return joaat("BLIP_RC_ART") /* GXTEntry: "Charles Châtenay" */;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return joaat("BLIP_AMBIENT_GANG_LEADER") /* GXTEntry: "Gang Leader" */;
	}
	else if (iParam0 == 89)
	{
		return joaat("BLIP_RC_KITTY") /* GXTEntry: "Margaret" */;
	}
	else if (iParam0 == 101)
	{
		return joaat("BLIP_RC_ALBERT") /* GXTEntry: "Albert Mason" */;
	}
	else if (iParam0 == 115)
	{
		return joaat("BLIP_SCM_EAGLE_FLIES") /* GXTEntry: "Eagle Flies" */;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return joaat("BLIP_RC_OH_BROTHER") /* GXTEntry: "Oh Brother" */;
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || func_101(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			return joaat("BLIP_RC_OBEDIAH_HINTON") /* GXTEntry: "Obediah Hinton" */;
		}
	}
	else if (iParam0 == 127)
	{
		return joaat("BLIP_RC_LIGHTNING") /* GXTEntry: "Professor" */;
	}
	else if (iParam0 == 136)
	{
		return joaat("BLIP_RC_SLAVE_CATCHER") /* GXTEntry: "Jeremiah Compson" */;
	}
	else if (iParam0 == 143)
	{
		return joaat("BLIP_RC_ODD_FELLOWS") /* GXTEntry: "Magnifico" */;
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || func_101(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			return joaat("BLIP_RC_WAR_VETERAN") /* GXTEntry: "Hamish Sinclair" */;
		}
	}
	if (iParam0 == 151)
	{
		return joaat("BLIP_RC_HERBALIST") /* GXTEntry: "William" */;
	}
	return Global_1347702[iParam0 /*49*/].f_36;
}

int func_104(int iParam0)
{
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0 || (Global_1347702[iParam0 /*49*/].f_12 & (1 << 25)) != 0)
	{
		return 1;
	}
	return 3;
}

int func_105(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_106(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] |= iParam1;
}

char* func_107(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_205(sParam1));
}

void func_108(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 26)) != 0)
	{
		return;
	}
	iVar0 = func_104(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_105(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_105(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_206(&Global_1393447, 1);
	func_207();
	func_208();
	func_209((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_210() / 1000);
		if ((Global_1392135.f_1 & 4) != 0)
		{
			Global_1392135.f_1 -= (Global_1392135.f_1 & 4);
		}
		func_211();
		if (iParam1 == -1)
		{
			if (func_177(iParam0, 1))
			{
				func_212((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_177(iParam0, 2))
			{
				func_212((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_177(iParam0, 4))
			{
				func_212((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_213(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_214(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_214((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

void func_110()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_215(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (func_111(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					func_216(iVar1, 0);
					func_218(iVar1, func_217(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

bool func_111(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_112(int iParam0, int iParam1)
{
	if (!func_219(iParam0))
	{
		return;
	}
	func_61(iParam0, iParam1);
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_114()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_115(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_116(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_220(vParam0, 0.0f, 0.0f, 0, 2);
	return func_220(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_117(int iParam0)
{
	int iVar0;

	iVar0 = func_221(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_222(iVar0);
}

int func_118(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (Global_1058888.f_40431 >= 32)
	{
		return -1;
	}
	sVar0 = -1;
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	if (Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			func_223(iVar2);
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
	}
	if (Global_1058888.f_40431 < 31)
	{
		iVar2 = Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		if (Global_1058888.f_40431 > 32)
		{
			Global_1058888.f_40431 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_119()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

void func_120(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_123() - fParam1);
	func_224(uParam0, 1);
	func_225(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_121(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_122(var uParam0)
{
	return func_121(*uParam0, 2);
}

float func_123()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_124(var uParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(func_226(uParam0, 10), "SCRIPT_COMMON_SHERIFF_SIT_WRITING"))
	{
		return true;
	}
	return false;
}

void func_125(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_227(iParam0, 13))
	{
		func_228(iParam0, 0);
	}
	else
	{
		func_229(iParam0, 0);
	}
	if (func_230(iParam0->f_6))
	{
		if (bParam2)
		{
			func_231(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_126(var uParam0, var uParam1)
{
	Vector3 vVar0;

	if (iLocal_16 | iLocal_18)
	{
		return 1;
	}
	else if (!func_48(Global_35, uParam0->f_112, 1, 0))
	{
		if (!func_66(&uLocal_156))
		{
			func_232(&uLocal_156, 0);
		}
		else if (func_67(&uLocal_156) > 10.0f)
		{
			iLocal_18 = 1;
		}
	}
	if (func_67(&uLocal_153) < 5.0f)
	{
		if (!func_18(1))
		{
			if (func_49(uParam1->f_2, 0, 0))
			{
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::GET_VOLUME_COORDS(uParam0->f_112), 135.0f) && !TASK::IS_PED_STILL(Global_35))
				{
					vVar0 = { func_233(uParam1) /*3*/ };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
					{
						iLocal_16 = 1;
					}
					else if (func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0))
					{
						iLocal_16 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_127(var uParam0, var uParam1)
{
	Vector3 vVar0[24];

	if ((uParam1->f_2 == 115 && iLocal_17 == 0) && !func_39())
	{
		if (iLocal_145 >= 2 && !func_18(1))
		{
			if (!func_48(Global_35, uParam0->f_112, 1, 0))
			{
				if (!func_49(uParam1->f_2, 0, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::GET_VOLUME_COORDS(uParam0->f_112), 135.0f))
				{
					strcpy_s(&cVar0, 24, "TWD_LVE_ERLY");
					if (func_160(&(uParam0->f_11), cVar0, 0, -1, 0, 0))
					{
						iLocal_17 = 1;
					}
				}
			}
		}
	}
}

void func_128(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_230(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_234(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_235(iParam0->f_6, iParam0->f_5, 0);
			}
			func_236(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_237(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_129(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_239(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, func_238(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

void func_130(var uParam0, var uParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0 = { func_240(uParam1->f_2) /*3*/ };
	if (iParam2 == 0)
	{
		strcat_s(&vVar0, 24, "GREETPOS_");
	}
	else
	{
		strcat_s(&vVar0, 24, "GREETNEG_");
	}
	vVar0 = { func_241(vVar0) /*3*/ };
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_131(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { func_240(uParam1->f_2) /*3*/ };
	if ((uParam1->f_2 == 38 || uParam1->f_2 == 26) || uParam1->f_2 == 115)
	{
		strcat_s(&vVar0, 24, "ASKP_");
	}
	else if (uParam1->f_2 == 5)
	{
		strcat_s(&vVar0, 24, "ASK");
	}
	else if (uParam1->f_2 == 76)
	{
		strcat_s(&vVar0, 24, "POSTER_");
	}
	if (uParam1->f_2 == 26 && func_181())
	{
		strcat_s(&vVar0, 24, "B");
	}
	else
	{
		vVar0 = { func_241(vVar0) /*3*/ };
	}
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_132(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { func_240(uParam1->f_2) /*3*/ };
	if (((uParam1->f_2 == 38 || uParam1->f_2 == 26) || uParam1->f_2 == 5) || uParam1->f_2 == 115)
	{
		strcat_s(&vVar0, 24, "ASK_RPL");
	}
	else if (uParam1->f_2 == 76)
	{
		strcat_s(&vVar0, 24, "POSTER_SH");
	}
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_133()
{
	func_65(&uLocal_216);
	bLocal_215 = true;
}

void func_134(var uParam0, var uParam1)
{
	Vector3 vVar0;

	if (sLocal_136.f_2 == 105)
	{
		vVar0 = { func_242(uParam1, iLocal_148) /*3*/ };
	}
	else
	{
		vVar0 = { func_243(uParam1, iLocal_148, iLocal_149) /*3*/ };
	}
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

int func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 13:
		case 15:
		case 154:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 1;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 17:
		case 18:
		case 155:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					return 3;
				case 2:
					return 2;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					return 3;
				case 2:
					return 2;
			}
			break;
	}
	return 2;
}

void func_136(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { func_244(uParam1) /*3*/ };
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_137(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { func_245(uParam1, Global_40.f_9074.f_4 == 0) /*3*/ };
	func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
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

int func_139(int iParam0, bool bParam1)
{
	return func_246(iParam0, Global_1894899.f_2, bParam1);
}

bool func_140(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	if (!func_248(iParam0) && bParam1)
	{
		return false;
	}
	return func_249(iParam0, 1);
}

void func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_247(iParam0))
	{
		return;
	}
	if (!func_249(iParam0, 1))
	{
		return;
	}
	if (!func_249(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_248(iParam0)) && func_250(iParam0))
	{
		return;
	}
	func_251(iParam0, 1);
	func_252(iParam0);
	if (func_254(func_253(iParam0)))
	{
		iVar0 = func_255(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171 /*PCF_0x6868B572*/, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_251(iParam0, 16);
	}
	if (func_249(iParam0, 128) && !bParam3)
	{
		func_256(iParam0, 0);
	}
}

bool func_142(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

bool func_143(var uParam0)
{
	if (uParam0->f_2)
	{
		if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_1) && INTERIOR::IS_INTERIOR_READY(uParam0->f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_144(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		return true;
	}
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = ENTITY::PIN_CLOSEST_MAP_ENTITY(func_257(uParam1->f_2), func_95(uParam1), 7);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_10))
	{
		uParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_10));
	}
	return false;
}

float func_145(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 76:
			return 125.0f;
		case 26:
			return -28.0f;
		case 5:
			return -65.0f;
		case 38:
			return -10.33f;
		case 115:
			return 115.51f;
	}
	return 0.0f;
}

bool func_146(var uParam0)
{
	return true;
}

Vector3 func_147()
{
	return { -277.96f, 804.6f, 118.38f };
}

float func_148()
{
	return -30.0f;
}

void func_149(var uParam0, var uParam1)
{
	if (func_29())
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && func_47(uParam0->f_6, 0))
		{
			if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9))
			{
				if (!func_48(Global_35, uParam0->f_112, 1, 0) && !func_49(uParam1->f_2, 0, 0))
				{
					func_155(uParam0);
				}
				else if (func_258() && !ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
				{
					func_155(uParam0);
				}
			}
		}
	}
}

Vector3 func_150(var uParam0)
{
	Vector3 vVar0[24];
	bool bVar3;

	strcpy_s(&cVar0, 24, "");
	bVar3 = func_259(uParam0);
	switch (*uParam0)
	{
		case 14:
			if (func_181())
			{
				strcpy_s(&cVar0, 24, "VAL_INTR_A");
			}
			else
			{
				strcpy_s(&cVar0, 24, "VAL_INTR_B");
			}
			break;
		case 12:
		case 16:
			if (!func_181() && func_189(130))
			{
				if (func_189(133))
				{
					strcpy_s(&cVar0, 24, "NBX_RTL_DONE7");
				}
				else
				{
					strcpy_s(&cVar0, 24, "NBX_RTL_DONE4");
				}
			}
			else if (bVar3)
			{
				strcpy_s(&cVar0, 24, "STD_INTR_B");
			}
			else
			{
				strcpy_s(&cVar0, 24, "STD_INTR_A");
			}
			break;
		case 18:
			strcpy_s(&cVar0, 24, "BLW_RB20_IG2_P1");
			break;
		case 155:
			if (!bVar3)
			{
				strcpy_s(&cVar0, 24, "BLW_RB21_IG3_P");
			}
			else
			{
				strcpy_s(&cVar0, 24, "BLW_INTR_B");
			}
			break;
		case 17:
			if (!bVar3)
			{
				strcpy_s(&cVar0, 24, "BLW_RB18_IG1_P");
			}
			else
			{
				strcpy_s(&cVar0, 24, "BLW_INTR_B");
			}
			break;
		case 11:
		case 153:
			if (!bVar3)
			{
				strcpy_s(&cVar0, 24, "STR_INTR_A");
			}
			else
			{
				strcpy_s(&cVar0, 24, "STR_INTR_B");
			}
			break;
		case 13:
		case 15:
		case 154:
			break;
		case 19:
			if (func_29())
			{
				strcpy_s(&cVar0, 24, "TWD_TG22_G_BEX");
			}
			else
			{
				strcpy_s(&cVar0, 24, "TWD_TG22_G_LTR");
			}
			break;
		case 20:
			strcpy_s(&cVar0, 24, "TWD_POST_LOC");
			break;
	}
	return cVar0;
}

bool func_151(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam1->f_2 == 105 && func_183(87, 1))
	{
		return false;
	}
	iVar0 = func_260(uParam1->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || !func_140(iVar0, 1))
	{
		uParam0->f_6 = func_261(iVar0, 1, 0, 1, 1, 1);
		if (func_47(uParam0->f_6, 0))
		{
			PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(uParam0->f_6, joaat("LAW_SHERIFF"));
		}
	}
	else if (uParam1->f_1 == 3)
	{
		return true;
	}
	else if (func_76(uParam0, uParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_6, 168 /*PCF_EnableShockingEvents*/, true);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_6, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, true, 0, false, false);
		return true;
	}
	return false;
}

void func_152(var uParam0, var uParam1)
{
	if (!func_181())
	{
		func_262(&(uParam0->f_11), Global_35, "ARTHUR", 1);
	}
	else
	{
		func_262(&(uParam0->f_11), Global_35, "JOHN", 1);
	}
	func_262(&(uParam0->f_11), uParam0->f_6, func_263(uParam1->f_1), 1);
}

bool func_153(int iParam0)
{
	if (iParam0 == 20)
	{
		return false;
	}
	return true;
}

bool func_154(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_29() && Global_1392235.f_1 == 1)
	{
		return true;
	}
	iVar1 = func_260(uParam0->f_2);
	iVar0 = func_264(iVar1);
	if (func_47(iVar0, 0))
	{
		if (func_50(Global_35, iVar0, 1, 1) > 20.0f)
		{
			if (func_265(ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) && !func_265(Global_36))
			{
				return true;
			}
		}
		if (func_50(Global_35, iVar0, 1, 1) < 80.0f)
		{
			if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3.0f) && !ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				return false;
			}
		}
	}
	return true;
}

void func_155(var uParam0)
{
	if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
		TASK::TASK_POLICE(uParam0->f_6, true);
		TASK::TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(&sLocal_136, 10), -1, false, true, 0, false, -1.0f, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_6, false, false);
	}
}

bool func_156(var uParam0, var uParam1)
{
	int iVar0;
	Vector3 vVar1;

	if (!func_48(Global_35, uParam0->f_112, 1, 0))
	{
		return false;
	}
	iVar0 = func_260(uParam1->f_2);
	vVar1 = { func_266(iVar0) /*3*/ };
	if (func_267(uParam0->f_112, vVar1) && func_72(Global_35, vVar1, 1) < 12.0f)
	{
		return true;
	}
	return false;
}

bool func_157(var uParam0, var uParam1)
{
	if (func_48(Global_35, uParam0->f_112, 1, 0))
	{
		if (uParam1->f_2 == 5)
		{
			if (func_50(Global_35, uParam0->f_6, 1, 1) < 8.0f)
			{
				return true;
			}
			else if (*uParam1 == 16 && func_72(Global_35, 2498.72f, -1308.83f, 47.95f, 1) < 2.5f)
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

bool func_158(var uParam0)
{
	if (joaat("MASK_UP") == func_268(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_269(uParam0))
		{
			return true;
		}
	}
	else if (func_270(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		if (func_269(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_159(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9))
	{
		func_271(uParam0, &iVar0, &iVar1);
		sVar2 = func_226(uParam1, iVar0);
		sVar3 = func_226(uParam1, iVar1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			TASK::_0x79197F7D2BB5E73A(uParam0->f_6, uParam0->f_9, func_226(uParam1, iVar0), func_226(uParam1, iVar1), func_226(uParam1, 10), 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
		}
		else
		{
			func_133();
		}
	}
	else if (*uParam1 == 19 && func_29())
	{
		func_133();
	}
	else
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_6, true, false);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_6, Global_35, -1, -1.0f, -1.0f, -1.0f);
		func_133();
	}
}

bool func_160(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_272(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_161(char* sParam0, bool bParam1, bool bParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
}

void func_162(var uParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_4) && !TASK::_IS_SCENARIO_POINT_ACTIVE(uParam0->f_4))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_4, true);
		Global_1392235.f_3 = 0;
	}
}

bool func_163(int iParam0, int iParam1)
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

bool func_164(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_273(iParam0) /*4*/ };
	if (CAM::IS_SPHERE_VISIBLE(vVar0 + Vector(1.0f, 0.0f, 0.0f), 1.0f))
	{
		return true;
	}
	return false;
}

bool func_165(var uParam0, var uParam1)
{
	int iVar0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		iVar0 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_95(uParam1), joaat("WORLD_HUMAN_SHOPKEEPER"), 1.0f, 0, true);
		uParam0->f_9 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SHOPKEEPER"), TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true), TASK::_GET_SCENARIO_POINT_HEADING(iVar0, true), 0.0f, -1.0f, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9))
		{
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(uParam1, 10), -1, false, true, 0, false, -1.0f, false);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_166(var uParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	sVar0 = { func_273(uParam1->f_2) /*4*/ };
	if (!func_48(uParam0->f_6, uParam0->f_112, 1, 0))
	{
		func_274(uParam0->f_6, sVar0, 2, (1 << 30));
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_6, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -5531.35f, -2929.76f, -2.36f, 1.0f, -1, 0.25f, 0, 40000.0f);
	TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -5531.35f, -2929.76f, -2.36f, -12.96f, -1, true, false, 0, -1.0f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar4);
	TASK::TASK_PERFORM_SEQUENCE(uParam0->f_6, iVar4);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
	PED::FORCE_PED_MOTION_STATE(uParam0->f_6, joaat("MOTIONSTATE_WALK"), false, 0, false);
}

Vector3 func_167(var uParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "");
	switch (uParam0->f_1)
	{
		case 1:
			strcpy_s(&cVar0, 24, "VAL_INSPECT_");
			cVar0 = { func_241(cVar0) /*3*/ };
			break;
		case 4:
			break;
		case 5:
			break;
		case 2:
			strcpy_s(&cVar0, 24, "STR_INSP_");
			cVar0 = { func_241(cVar0) /*3*/ };
			break;
		case 3:
			strcpy_s(&cVar0, 24, "RHO_ALD_INSPECT");
			break;
		case 6:
			break;
	}
	return cVar0;
}

bool func_168()
{
	if (iLocal_14 == 3)
	{
		return true;
	}
	return false;
}

int func_169(var uParam0, var uParam1)
{
	Vector3 vVar0;

	if (iLocal_145 >= 2)
	{
		return 1;
	}
	if (func_48(uParam0->f_6, uParam0->f_112, 1, 0) && !func_18(1))
	{
		vVar0 = { func_275(uParam1) /*3*/ };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			func_160(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
		}
		iLocal_145 = 2;
		return 1;
	}
	return 0;
}

void func_170(var uParam0, var uParam1)
{
	float fVar0;

	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
	if (uParam1->f_2 == 105)
	{
		TASK::TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(uParam1, 10), -1, false, true, 0, false, -1.0f, false);
	}
	else
	{
		fVar0 = func_277(func_276(uParam1->f_2), Global_36, 1);
		TASK::TASK_POLICE(uParam0->f_6, true);
		TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_6, joaat("WORLD_HUMAN_STERNGUY_IDLES"), func_276(uParam1->f_2), fVar0, -1, false, true, 0, -1.0f, false);
	}
}

void func_171(var uParam0)
{
	char* sVar0;
	char* sVar1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_6, uParam0->f_9))
	{
		sVar0 = func_226(&sLocal_136, 8);
		sVar1 = func_226(&sLocal_136, 9);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			TASK::_0x79197F7D2BB5E73A(uParam0->f_6, uParam0->f_9, sVar0, sVar1, func_226(&sLocal_136, 10), 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
		}
		else
		{
			func_133();
		}
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
		func_133();
	}
}

Vector3 func_172(var uParam0, int iParam1)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "");
	switch (*uParam0)
	{
		case 14:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "BHPVA_WIFE_MI");
				cVar0 = { func_241(cVar0) /*3*/ };
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (func_181())
				{
					strcpy_s(&cVar0, 24, "NBX_CON_DEPTIPJ");
				}
				else
				{
					strcpy_s(&cVar0, 24, "NBX_CON_DEPTIPA");
				}
			}
			else if (iParam1 == 1)
			{
				strcpy_s(&cVar0, 24, "NBX_CON_DEPWLK");
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "NBX_NBS_IG2_TIP");
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "BLW_RB18_IG1_T");
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "BLW_RB20_IG2_T");
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "BLW_RB21_IG3_T");
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "STR_BHDL_TIPK");
			}
			else if (iParam1 == 1)
			{
				if (func_181())
				{
					strcpy_s(&cVar0, 24, "STR_BHDL_TIPB");
				}
				else
				{
					strcpy_s(&cVar0, 24, "STR_BHDL_TIPA");
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "STR_BHSL_TIPJ");
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "RHO_RNCH");
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "RBT12_OUTRO");
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "BHPRO_14_IG2");
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				strcpy_s(&cVar0, 24, "TWD_TG22_TIP");
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (func_182(70))
				{
					strcpy_s(&cVar0, 24, "TWD_BDM_POST_A");
				}
				else
				{
					strcpy_s(&cVar0, 24, "TWD_BDM_POST_B");
				}
			}
			else if (iParam1 == 1)
			{
				strcpy_s(&cVar0, 24, "TWD_TG23_TIP");
			}
			else if (iParam1 == 2)
			{
				if (func_182(70))
				{
					strcpy_s(&cVar0, 24, "TWD_BDM_YSADJ");
				}
				else
				{
					strcpy_s(&cVar0, 24, "TWD_BDM_NSADJ");
				}
			}
			break;
	}
	return cVar0;
}

void func_173(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_231(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_20(iParam0, 0);
		}
	}
}

void func_174(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_230((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_231(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

int func_175()
{
	return Global_1899515;
}

int func_176(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_177(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_178(int iParam0, bool bParam1, bool bParam2)
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
		if (func_278())
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
		iVar0 = func_279(Global_1898164.f_1[0 /*5*/]);
		if (func_111(iVar0) && func_100(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_219(Global_1898164.f_1[0 /*5*/]))
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

bool func_179(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	if (func_1() == 0)
	{
		return true;
	}
	return (!func_114() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0));
}

bool func_180()
{
	if (func_281(1))
	{
		return false;
	}
	return Global_1934181;
}

bool func_181()
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

bool func_182(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_101(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_183(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_1() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (Global_1347702[iVar0 /*49*/].f_13 & (1 << 14)) == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_184()
{
	if (func_29())
	{
		if (Global_1392235.f_1 == 1)
		{
			return true;
		}
	}
	else if (func_282(76) >= 1)
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return func_142(iParam0, (1 << 26));
}

bool func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_5(0, iParam0, 2, 0);
	iVar2 = func_283(iVar0);
	if (iVar2 == -15)
	{
		iVar2 = func_175();
		func_284(&iVar2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		func_285(&iVar2, 0, 0, 20, 0, 0, 0, 0);
	}
	if (func_286(iParam0, &iVar1))
	{
		if (func_287(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_288(&iVar1))
	{
		if (func_287(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_289(iVar2, 1))
	{
		return true;
	}
	return false;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

bool func_189(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_111(iParam0))
	{
		return false;
	}
	return func_101(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_190(int iParam0)
{
	if (func_181())
	{
		if (func_100(Global_1347702[iParam0 /*49*/].f_12, (1 << 21)))
		{
			return false;
		}
	}
	else if (func_100(Global_1347702[iParam0 /*49*/].f_12, 256))
	{
		return false;
	}
	switch (iParam0)
	{
		case 15:
			if (!func_182(20))
			{
				return false;
			}
			else if (!func_290())
			{
				return false;
			}
			break;
		case 16:
			if (func_291(Global_1347702[16 /*49*/].f_15) == 1)
			{
				return false;
			}
			break;
		case 153:
			if (!func_292())
			{
				return false;
			}
			break;
		case 155:
			if (!func_292())
			{
				return false;
			}
			break;
		case 154:
			if (!func_292())
			{
				return false;
			}
			break;
		case -1:
			return false;
	}
	return true;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 10000;
		case 19:
			return 6000;
		case 20:
			return 6500;
		case 17:
			return 7500;
		case 18:
			return 9000;
		case 154:
			return 5500;
		case 153:
			return 6000;
		case 11:
			return 4000;
		case 13:
			return 2500;
		case 14:
			return 2500;
		case 15:
			return 3500;
		case 16:
			return 8500;
		case 155:
			return 3000;
	}
	return func_293(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, -1);
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 13:
		case 14:
		case 15:
		case 16:
		case 19:
		case 155:
			return 0;
		case 12:
		case 17:
		case 18:
		case 20:
		case 153:
		case 154:
			return func_191(iParam0);
	}
	return 0;
}

void func_193(int iParam0)
{
	Global_40.f_9074.f_2 = iParam0;
}

void func_194(int iParam0)
{
	Global_40.f_9074.f_3 = iParam0;
}

void func_195(int iParam0)
{
	Global_40.f_9074.f_4 = iParam0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return joaat("P_CS_STRAWBERRY_DUEL01X");
		case 12:
			return joaat("P_CS_LEMOYNE_RAIDERS01X");
		case 13:
			return joaat("P_CS_RHODES_RANCHER01X");
		case 153:
			return joaat("P_CS_LARAMIE_SLEEPING01X");
		case 14:
			return joaat("P_CS_WIFE_AND_LOVER01X");
		case 154:
			return joaat("P_CS_CAMP_RETURN01X");
		case 15:
			return joaat("P_CS_SHACK_ESCAPE01X");
		case 16:
			return joaat("P_CS_SAINTDENIS_SALOON01X");
		case 17:
			return joaat("P_CS_SKINNER_BROTHER01X");
		case 18:
			return joaat("P_CS_SKINNER_SEARCH01X");
		case 155:
			return joaat("P_CS_BLACKWATER_HUNT01X");
		case 19:
			return joaat("P_CS_BANDITO_SHACK01X");
		case 20:
			return joaat("P_CS_BANDITO_MINE01X");
		case 31:
			return joaat("P_CS_CHAIN_GANG01X");
		default:
			break;
	}
	return joaat("P_CS_WANTEDALIVE01X");
	return joaat("P_CS_WANTEDALIVE01X");
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return joaat("DOCUMENT_POSTER_SB_DUEL") /* GXTEntry: "Bounty Poster - Joshua Brown" */;
		case 13:
			return -120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */;
		case 12:
			return joaat("DOCUMENT_POSTER_LEMOYNE_RAIDERS") /* GXTEntry: "Bounty Poster - Lindsey Wofford" */;
		case 14:
			return joaat("DOCUMENT_POSTER_WIFE_LOVER") /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */;
		case 17:
			return joaat("DOCUMENT_POSTER_SKINNER_BROS") /* GXTEntry: "Bounty Poster - Otis Skinner" */;
		case 18:
			return joaat("DOCUMENT_POSTER_SKINNER_SEARCH") /* GXTEntry: "Bounty Poster - Elias Green" */;
		case 15:
			return joaat("DOCUMENT_POSTER_SHACK_ESCAPE") /* GXTEntry: "Bounty Poster - Robbie Laidlaw" */;
		case 16:
			return joaat("DOCUMENT_POSTER_SD_SALOON") /* GXTEntry: "Bounty Poster - Anthony Foreman" */;
		case 19:
			return joaat("DOCUMENT_POSTER_BANDITO_SHACK") /* GXTEntry: "Bounty Poster - Joaquín Arroyo" */;
		case 20:
			return joaat("DOCUMENT_POSTER_BANDITO_MINE") /* GXTEntry: "Bounty Poster - Esteban Cortez" */;
		case 155:
			return joaat("DOCUMENT_POSTER_BLACKWATER_HUNT") /* GXTEntry: "Bounty Poster - Herman Zizendorf" */;
		case 153:
			return joaat("DOCUMENT_POSTER_LARAMIE_SLEEPING") /* GXTEntry: "Bounty Poster - Bart Cavanaugh" */;
		case 154:
			return joaat("DOCUMENT_POSTER_CAMP_RETURN") /* GXTEntry: "Bounty Poster - Camille de Millemont" */;
		default:
			break;
	}
	return joaat("DOCUMENT_TEST_BOUNTY_POSTER") /* GXTEntry: "Bounty Poster" */;
}

bool func_198(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_199(int iParam0)
{
	Vector3 vVar0;

	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_294(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_295(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_201(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_296(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_298(&sVar0, func_297(0));
	}
	if (!func_299(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_300(iVar18);
	return iVar19;
}

int func_202(bool bParam0)
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

int func_203(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_301(iParam0);
}

void func_204(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1347702[iParam0 /*49*/].f_13 & 2) == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_302(Global_1347702[iParam0 /*49*/].f_29[iVar1]))
			{
				func_304(&iVar0, func_303(Global_1347702[iParam0 /*49*/].f_29[iVar1]));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_305(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
		else if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
		{
			if (func_307(iVar0, Global_1347702[iParam0 /*49*/].f_15, 1, Global_1347702[iParam0 /*49*/].f_27, func_306()))
			{
				func_305(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			}
		}
		else
		{
			func_305(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
	}
}

char* func_205(char* sParam0)
{
	return sParam0;
}

void func_206(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_207()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_308(iVar0, 128))
		{
			func_309(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_208()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_308(iVar0, 128) && func_308(iVar0, 1))
		{
			func_309(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_209(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_210()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_211()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_310(iVar0, (1 << 24)))
		{
			if (!func_311(iVar0))
			{
				func_312(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_313(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_314(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_315(iVar0) < func_316(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_317(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_318(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_318(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_318(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_318(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_318(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_318(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_318(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_214(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_123();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0.0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

bool func_215(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_216(int iParam0, bool bParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		func_319(&(Global_1347702[iParam0 /*49*/].f_14));
		func_320(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		func_321(iParam0);
		if ((!func_322(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1347702[iParam0 /*49*/].f_40, false);
			func_320(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 12));
			func_323(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			func_324(iParam0, (1 << 14));
			func_325(iParam0, 1, func_217(iParam0));
		}
	}
}

Vector3 func_217(int iParam0)
{
	Vector3 vVar0;

	if (!func_111(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (func_326(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 /*3*/ };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_218(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3[24];
	char* sVar6;

	if (!func_111(iParam0))
	{
		return;
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & 256) != 0 && func_178(0, 0, 1))
	{
		return;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 16) != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (func_327((1 << 15)))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = func_328(iParam0);
	if (!bParam5 && func_329(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_330(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		func_331(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES" /* GXTEntry: "Thomas Downes" */);
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_SEAN"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB" /* GXTEntry: "Home Robbery - Sean" */);
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH" /* GXTEntry: "Jeremy Gill" */);
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN" /* GXTEntry: "Deborah MacGuiness" */);
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF" /* GXTEntry: "Francis Sinclair" */);
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO" /* GXTEntry: "Algernon Wasp" */);
	}
	func_332(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (func_1() == -1)
	{
		func_333(iParam0);
		iVar0 = func_334(Global_40.f_4283);
		if (func_56(iVar0) && func_335(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = func_336(iVar0);
		}
		if (func_337(iParam0, bVar1, iVar0))
		{
			func_338(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & 1) == 0)
	{
		func_305(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!func_329(iParam0) || func_100(Global_1347702[iParam0 /*49*/].f_12, 1)) || func_100(Global_1347702[iParam0 /*49*/].f_12, (1 << 9))) || func_339(Global_1347702[iParam0 /*49*/].f_13, (1 << 11)))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		}
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & (1 << 15)) == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && (Global_1347702[iParam0 /*49*/].f_12 & 1) == 0) && (Global_1347702[iParam0 /*49*/].f_12 & 2) != 0)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		}
		else
		{
			func_305(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 15));
		}
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 8) != 0 && (Global_40.f_490.f_402[iParam0] & 2) == 0)
	{
		if (func_340(iParam0))
		{
			if (iParam0 == 97)
			{
				func_341(185, 0);
			}
			else
			{
				func_341(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			strcat_s(&cVar3, 24, "_FIRST");
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = func_87(MISC::VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_106(iParam0, 2);
	}
}

bool func_219(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_220(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (sParam0.f_0 < fParam3)
	{
		if (sParam0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (sParam0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_221(int iParam0)
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

int func_222(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40431)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] /*2*/ };
		}
		iVar0++;
	}
	sVar1 = -1;
	if (Global_1058888.f_40431 < 32)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar1 /*2*/ };
	}
	Global_1058888.f_40431--;
	if (Global_1058888.f_40431 < 0)
	{
		Global_1058888.f_40431 = 0;
	}
	return 1;
}

int func_223(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = (Global_1058888.f_40431 - 1);
	sVar1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 /*2*/] /*2*/ };
		}
		iVar0--;
	}
	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { sVar1 /*2*/ };
	Global_1058888.f_40431++;
	if (Global_1058888.f_40431 > 32)
	{
		Global_1058888.f_40431 = 32;
	}
	return 1;
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

char* func_226(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 6:
			switch (*uParam0)
			{
				case 19:
					switch (iParam1)
					{
						case 0:
							if (func_29())
							{
								return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@WAS_HOPING_SHERIFF";
							}
							else
							{
								return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@HERE_TO_HELP_B_SHERIFF";
							}
							break;
						case 1:
							if (func_29())
							{
								return "WAS_HOPING_SHERIFF";
							}
							else
							{
								return "HERE_TO_HELP_B_SHERIFF";
							}
							break;
						case 2:
							return "";
						case 3:
							return "";
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@LOCATION_SHERIFF";
						case 9:
							return "LOCATION_SHERIFF";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
					}
					break;
				case 20:
					switch (iParam1)
					{
						case 0:
							return "";
						case 1:
							return "";
						case 2:
							return "";
						case 3:
							return "";
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "";
						case 9:
							return "";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 5:
					return "";
				case 6:
					return "";
				case 7:
					return "";
				case 8:
					return "";
				case 9:
					return "";
				case 10:
					return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
				default:
					break;
			}
			break;
		case 1:
			switch (*uParam0)
			{
				case 14:
					switch (iParam1)
					{
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "SCRIPT_PROC@BOUNTY@WIFE_AND_LOVER@TIP_SHERIFF@GRAB_POSTER_sheriff";
						case 9:
							return "GRAB_POSTER_sheriff";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
			}
			break;
		case 5:
			switch (*uParam0)
			{
				case 155:
					switch (iParam1)
					{
						case 4:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_ACTION_LEFT";
						case 5:
							return "SHERIFF_IG3_ACTION_LEFT";
						case 6:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_ACTION_RIGHT";
						case 7:
							return "SHERIFF_IG3_ACTION_RIGHT";
						case 8:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_MAIN_ACTION";
						case 9:
							return "SHERIFF_IG3_MAIN_ACTION";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
			}
			break;
		case 3:
			switch (*uParam0)
			{
				case 15:
					switch (iParam1)
					{
						case 8:
							return "SCRIPT_PROC@BOUNTY@SHACK_ESCAPE@IG@S1_IG2@Alden_talks_to_player_alden";
						case 9:
							return "Alden_talks_to_player_alden";
						case 10:
							return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
			}
			break;
		case 4:
			if (*uParam0 == 12)
			{
				switch (iParam1)
				{
					case 8:
						return "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_BOUNTY@DIALOGUE_DEPUTY";
					case 9:
						return "DIALOGUE_DEPUTY";
					case 10:
						return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_GREET_FRONT";
					case 1:
						return "GSM0_GREET_FORWARD";
					case 2:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_GREET_BACK";
					case 3:
						return "GSM0_GREET_BACK";
					case 4:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@GSM0_GREET_LEFT";
					case 5:
						return "GSM0_GREET_LEFT";
					case 6:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@GSM0_GREET_RIGHT";
					case 7:
						return "GSM0_GREET_RIGHT";
					case 8:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_ACTION_TIP";
					case 9:
						return "GSM0_ACTION_TIP";
					case 10:
						return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

bool func_227(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_228(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_229(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_230(int iParam0)
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

void func_231(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_230(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_342(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_343(iVar0);
	*uParam0 = 0;
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1 || !func_66(uParam0))
	{
		func_65(uParam0);
	}
}

Vector3 func_233(var uParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "");
	switch (uParam0->f_2)
	{
		case 76:
			strcpy_s(&cVar0, 24, "VAL_TAKEDOWN_SH");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "NBX_TAKE_LVE");
			break;
		case 105:
			strcpy_s(&cVar0, 24, "");
			break;
		case 38:
			strcpy_s(&cVar0, 24, "BLW_TAKE_LVE");
			break;
		case 26:
			strcpy_s(&cVar0, 24, "STR_TAKE_LVE");
			break;
		case 115:
			strcpy_s(&cVar0, 24, "TWD_TAKE_LVE");
			break;
	}
	return cVar0;
}

void func_234(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_235(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_236(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (bParam1)
	{
		func_344(iParam0, 4);
		func_345(iVar0, 1);
		func_346(iVar0, 1);
	}
	else
	{
		func_347(iParam0, 4);
		func_346(iVar0, 0);
	}
}

void func_237(int* iParam0, char* sParam1)
{
	if (func_230(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_235(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_229(iParam0, 1);
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= (1 << 24);
	if (iParam1 != 0)
	{
		iVar0 |= iParam1;
	}
	if (iParam2 != 0)
	{
		iVar0 -= (iVar0 & iParam2);
	}
	return iVar0;
}

int func_239(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_348(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_349(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!(iParam8 & (1 << 21)) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184 /*PRF_DisableAutoGreets*/, true);
		}
		if ((iParam8 & (1 << 23)) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281 /*PRF_0xC5C24250*/, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_65(&(iParam1->f_13));
		}
		if (func_350(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_351(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_239(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_81(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_352(*uParam0, 1, 1);
						}
					}
					else if (func_353(iParam1, 22))
					{
						func_352(*uParam0, 0, 1);
					}
				}
				if (func_354(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_355(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_356(iParam8);
					if (func_357(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_358(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_359(iParam1, uParam3, fVar8);
					if (func_360(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_174(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_361(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_354(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_362(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_357(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_355(uParam0, func_354(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_356(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_174(uParam3, 0, 0, 1, 1);
					}
					func_363(iParam1, 1);
				}
				func_359(iParam1, uParam3, fVar8);
				if (func_361(uParam0, iParam1, fParam4, bVar6))
				{
					if ((iParam8 & (1 << 9)) != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!(iParam8 & (1 << 10)) != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_82(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

Vector3 func_240(int iParam0)
{
	Vector3 vVar0[24];

	switch (iParam0)
	{
		case 26:
			strcpy_s(&cVar0, 24, "STR_");
			break;
		case 76:
			strcpy_s(&cVar0, 24, "VAL_");
			break;
		case 105:
			strcpy_s(&cVar0, 24, "RHO_");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "NBX_");
			break;
		case 38:
			strcpy_s(&cVar0, 24, "BLW_");
			break;
		case 115:
			strcpy_s(&cVar0, 24, "TWD_");
			break;
		case 78:
			strcpy_s(&cVar0, 24, "ANS_");
			break;
		default:
			strcpy_s(&cVar0, 24, "STR_");
			break;
	}
	return cVar0;
}

Vector3 func_241(char[12] cParam0)
{
	if (func_181())
	{
		strcat_s(&cParam0, 24, "J");
	}
	else
	{
		strcat_s(&cParam0, 24, "A");
	}
	return cParam0;
}

Vector3 func_242(var uParam0, int iParam1)
{
	Vector3 vVar0[24];

	switch (*uParam0)
	{
		case 13:
			strcpy_s(&cVar0, 24, "RHO_RNCH_ILO_");
			StringIntConCat(&cVar0, iParam1, 24);
			if (func_181())
			{
				strcat_s(&cVar0, 24, "J");
			}
			else
			{
				strcat_s(&cVar0, 24, "A");
			}
			break;
		case 154:
			strcpy_s(&cVar0, 24, "RBT12_CR_ILO_");
			StringIntConCat(&cVar0, iParam1, 24);
			if (func_181())
			{
				strcat_s(&cVar0, 24, "J");
			}
			else
			{
				strcat_s(&cVar0, 24, "A");
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				if (func_181())
				{
					strcpy_s(&cVar0, 24, "RHO_TG14_OUT_BJ");
				}
				else
				{
					strcpy_s(&cVar0, 24, "RHO_TG14_OUT_B");
				}
			}
			else if (func_181())
			{
				strcpy_s(&cVar0, 24, "RHO_TG14_OT_B2J");
			}
			else
			{
				strcpy_s(&cVar0, 24, "RHO_TG14_OT_B2A");
			}
			break;
	}
	return cVar0;
}

Vector3 func_243(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3[24];

	vVar0 = { func_240(uParam0->f_2) /*3*/ };
	cVar3.x = func_84(*uParam0);
	strcat_s(&vVar0, 24, &cVar3);
	strcat_s(&vVar0, 24, "_Q");
	StringIntConCat(&vVar0, iParam1, 24);
	if (func_364(*uParam0, iParam1, iParam2))
	{
		if (func_181())
		{
			strcat_s(&vVar0, 24, "J");
		}
		else
		{
			strcat_s(&vVar0, 24, "A");
		}
	}
	else
	{
		strcat_s(&vVar0, 24, "S");
	}
	StringIntConCat(&vVar0, iParam2, 24);
	return vVar0;
}

Vector3 func_244(var uParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "");
	switch (uParam0->f_2)
	{
		case 76:
			strcpy_s(&cVar0, 24, "VAL_TAKEDOWN_");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "NBX_TAKEP_");
			break;
		case 105:
			strcpy_s(&cVar0, 24, "RHO_TAKEP_");
			break;
		case 38:
			strcpy_s(&cVar0, 24, "BLW_TAKEP_");
			break;
		case 26:
			strcpy_s(&cVar0, 24, "STR_THANK_");
			break;
		case 115:
			if (*uParam0 == 20)
			{
				if (func_181())
				{
					strcpy_s(&cVar0, 24, "TWD_BDM_Q2J2");
					return cVar0;
				}
				else
				{
					strcpy_s(&cVar0, 24, "TWD_BDM_Q2A2");
					return cVar0;
				}
			}
			else
			{
				strcpy_s(&cVar0, 24, "TWD_TAKEP_");
			}
			break;
	}
	if (func_181())
	{
		strcat_s(&cVar0, 24, "J");
	}
	else
	{
		strcat_s(&cVar0, 24, "A");
	}
	return cVar0;
}

Vector3 func_245(var uParam0, bool bParam1)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "");
	switch (uParam0->f_2)
	{
		case 76:
			strcpy_s(&cVar0, 24, "VAL_EXT_");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "NBX_EXT_");
			break;
		case 105:
			strcpy_s(&cVar0, 24, "RHO_ALD_");
			break;
		case 38:
			strcpy_s(&cVar0, 24, "BLW_TAKE_");
			break;
		case 26:
			strcpy_s(&cVar0, 24, "STR_TAKE_");
			break;
		case 115:
			if (*uParam0 == 20)
			{
				strcpy_s(&cVar0, 24, "TWD_BDM_SGL");
				return cVar0;
			}
			else
			{
				strcpy_s(&cVar0, 24, "TWD_TAKE_");
			}
			break;
	}
	switch (uParam0->f_2)
	{
		case 5:
		case 76:
			if (bParam1)
			{
				strcat_s(&cVar0, 24, "A");
			}
			else
			{
				strcat_s(&cVar0, 24, "D");
			}
			break;
		case 26:
		case 38:
		case 115:
			if (bParam1)
			{
				strcat_s(&cVar0, 24, "ALVE");
			}
			else
			{
				strcat_s(&cVar0, 24, "DORA");
			}
			break;
		case 105:
			if (bParam1)
			{
				strcat_s(&cVar0, 24, "ALIVE");
			}
			else
			{
				strcat_s(&cVar0, 24, "DORA");
			}
			break;
	}
	return cVar0;
}

int func_246(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_365(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_366(iParam0, uVar0, iVar1, bParam2);
}

bool func_247(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_248(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_249(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

bool func_250(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_251(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_247(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

void func_252(int iParam0)
{
	int iVar0;

	if (!func_247(iParam0))
	{
		return;
	}
	iVar0 = func_264(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_253(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_254(int iParam0)
{
	return iParam0 != 0;
}

int func_255(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_256(int iParam0, bool bParam1)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	if (!func_249(iParam0, 2))
	{
		return 0;
	}
	if (func_253(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_255(iParam0)))
	{
		return 1;
	}
	if (func_249(iParam0, 1) && !bParam1)
	{
		func_367(iParam0, 128);
		return 1;
	}
	func_251(iParam0, 129);
	func_252(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_255(iParam0));
	func_368(iParam0, 0);
	return 1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("P_CHAIRDESK02X");
		case 105:
			return joaat("P_WOODENCHAIR01X");
		case 26:
			return joaat("P_CHAIR24X");
		case 76:
			return joaat("P_DININGCHAIRS01X");
		case 38:
			return joaat("P_DININGCHAIRS01X");
		case 115:
			return joaat("P_WINDSORCHAIR03X");
		case 78:
			return joaat("P_WOODENCHAIR01X");
	}
	return joaat("P_CHAIR24X");
}

bool func_258()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

int func_259(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_5(0, uParam0->f_2, 2, 0);
	if (func_181())
	{
		iVar1 = func_369(iVar0);
	}
	else
	{
		iVar1 = func_291(iVar0);
		if (uParam0->f_2 == 76)
		{
			iVar1++;
		}
	}
	if (iVar1 >= 1)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			iVar0 = 3;
			break;
		case 78:
			iVar0 = 382;
			break;
		case 105:
			iVar0 = 72;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 115:
			iVar0 = 348;
			break;
		case 5:
			iVar0 = 256;
			break;
	}
	return iVar0;
}

int func_261(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_370(iParam0, 1))
	{
		return 0;
	}
	if (func_254(func_253(iParam0)))
	{
		iVar1 = func_255(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_REVIVE_PERSCHAR(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_248(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171 /*PCF_0x6868B572*/, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_367(iParam0, 1);
	func_371(iParam0);
	if (bParam3)
	{
		func_367(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_262(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_372(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

char* func_263(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1:
			sVar0 = "VAL_Sheriff";
			break;
		case 3:
			sVar0 = "RHO_STATWRK";
			break;
		case 4:
			sVar0 = "SD_PoliceChief";
			break;
		case 2:
			sVar0 = "STR_Sheriff";
			break;
		case 5:
			sVar0 = "BLW_Police_Chief";
			break;
		case 6:
			sVar0 = "TWD_Sheriff";
			break;
	}
	return sVar0;
}

int func_264(int iParam0)
{
	int iVar0;

	iVar0 = func_255(iParam0);
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

bool func_265(Vector3 vParam0)
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

Vector3 func_266(int iParam0)
{
	if (!func_247(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_255(iParam0)))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return PERSCHAR::_0x5EE6FCCC9C832CA2(func_255(iParam0));
}

bool func_267(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

int func_268(int iParam0)
{
	int iVar0;

	iVar0 = func_374(func_373(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_269(var uParam0)
{
	if (func_270(joaat("CI_CATEGORY_WARDROBE_MASK"), uParam0))
	{
		return true;
	}
	if (func_270(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		return true;
	}
	return false;
}

bool func_270(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_374(func_373(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_375(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

void func_271(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	int iVar1;

	fVar0 = 0.7f;
	if (sLocal_136.f_2 == 38 || sLocal_136.f_2 == 76)
	{
		fVar0 = 1.0f;
	}
	iVar1 = func_376(uParam0->f_6, Global_35, fVar0);
	if (iVar1 == 0)
	{
		*uParam1 = 0;
		*uParam2 = 1;
	}
	else if (iVar1 == 3)
	{
		*uParam1 = 4;
		*uParam2 = 5;
	}
	else if (iVar1 == 1)
	{
		*uParam1 = 2;
		*uParam2 = 3;
	}
	else
	{
		*uParam1 = 6;
		*uParam2 = 7;
	}
}

void func_272(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

struct<4> /*32*/ func_273(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 76:
			sVar0 = { -275.23f, 801.13f, 118.39f /*3*/ };
			sVar0.f_3 = 22.69f;
			break;
		case 26:
			sVar0 = { -1805.57f, -351.47f, 163.13f /*3*/ };
			sVar0.f_3 = 55.93f;
			break;
		case 5:
			sVar0 = { 2507.44f, -1315.83f, 47.95f /*3*/ };
			sVar0.f_3 = -13.52f;
			break;
		case 38:
			sVar0 = { -756.04f, -1269.03f, 43.03f /*3*/ };
			sVar0.f_3 = 89.32f;
			break;
		case 115:
			sVar0 = { -5527.88f, -2931.45f, -2.37f /*3*/ };
			sVar0.f_3 = 21.53f;
			break;
	}
	return sVar0;
}

void func_274(int iParam0, struct<4> /*32*/ sParam1, int iParam5, float fParam6)
{
	func_377(iParam0, sParam1, sParam1.f_3, iParam5, fParam6);
}

Vector3 func_275(var uParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "");
	switch (*uParam0)
	{
		case 20:
			strcpy_s(&cVar0, 24, "TWD_TG23_GREET");
			break;
	}
	return cVar0;
}

Vector3 func_276(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return { -276.86f, 805.53f, 118.38f };
		case 26:
			return { -1809.47f, -349.04f, 163.65f };
		case 5:
			return { 2510.14f, -1308.79f, 47.95f };
		case 38:
			return { -759.9f, -1268.74f, 43.04f };
		case 115:
			return { -5531.46f, -2925.73f, -2.36f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_277(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
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

bool func_278()
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

int func_279(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_378(func_12(iParam0));
}

bool func_280(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

bool func_281(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return (Global_1146476.f_1 & iParam0) != 0;
}

int func_282(int iParam0)
{
	if (!func_379(iParam0))
	{
		return 0;
	}
	return Global_17504.f_42[iParam0 /*8*/];
}

int func_283(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -15;
	}
	return func_380(iParam0);
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_381(*iParam0);
	iVar1 = func_382(*iParam0);
	iVar2 = func_383(*iParam0);
	iVar3 = func_176(*iParam0);
	iVar4 = func_384(*iParam0);
	iVar5 = func_385(*iParam0);
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
		iVar7 = func_386(iVar6, iVar0);
		iVar2 += iVar7;
	}
	iVar1 -= iParam5;
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 -= iParam6;
	func_387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_381(*iParam0);
	iVar1 = func_382(*iParam0);
	iVar2 = func_383(*iParam0);
	iVar3 = func_176(*iParam0);
	iVar4 = func_384(*iParam0);
	iVar5 = func_385(*iParam0);
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
	iVar6 = func_386(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_386(iVar1, iVar0);
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
	func_387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_286(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -15;
	iVar1 = 0;
	if (iParam0 == 105)
	{
		iVar2 = func_260(iParam0);
		if (!func_388(iVar2, 0))
		{
			iVar0 = func_389(iVar2);
			if (iVar0 != -15)
			{
				func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
		else
		{
			iVar0 = func_389(iVar2);
			if (iVar0 != -15)
			{
				func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	iVar3 = func_390(iParam0);
	if (!func_388(iVar3, 0))
	{
		iVar0 = func_389(iVar3);
		if (iVar0 != -15)
		{
			func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			*uParam1 = iVar0;
		}
	}
	else
	{
		iVar0 = func_389(iVar3);
		if (iVar0 != -15)
		{
			func_285(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			if (func_287(iVar0, *uParam1, 1))
			{
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

bool func_287(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_391(iParam1) || !func_391(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_288(int iParam0)
{
	int iVar0;

	iVar0 = Global_40.f_11182.f_1;
	if (iVar0 == -15)
	{
		return false;
	}
	func_285(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	*iParam0 = iVar0;
	return true;
}

bool func_289(int iParam0, bool bParam1)
{
	return func_287(func_175(), iParam0, bParam1);
}

bool func_290()
{
	int iVar0;
	int iVar1;

	iVar1 = func_5(func_392((1 << 16)), 0, 3, func_393((1 << 16)));
	if (func_219(iVar1))
	{
		iVar0 = func_291(iVar1);
		if (!func_115(iVar0, 4))
		{
			return false;
		}
	}
	return true;
}

int func_291(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_394(iParam0);
}

bool func_292()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_293(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_395(joaat("PROVISION_TRINKET_ELK_ANTLER") /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
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
			if (func_198(iVar25, 0) && func_294(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_294(int iParam0, int iParam1)
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

void func_295(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX") /* GXTEntry: "Revolver Cartridges - Regular" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED") /* GXTEntry: "Opened Revolver Cartridges" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS") /* GXTEntry: "Revolver Cartridges - Express" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS"); /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Revolver Cartridges - High Velocity" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY"); /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX") /* GXTEntry: "Pistol Cartridges - Regular" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED") /* GXTEntry: "Opened Pistol Cartridges" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS") /* GXTEntry: "Pistol Cartridges - Express" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS"); /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Pistol Cartridges - High Velocity" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY"); /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Regular" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED") /* GXTEntry: "Opened Rifle Cartridges" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS") /* GXTEntry: "Rifle Cartridges - Express" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS"); /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Rifle Cartridges - High Velocity" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY"); /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX") /* GXTEntry: "Repeater Cartridges - Regular" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED") /* GXTEntry: "Opened Repeater Cartridges" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS") /* GXTEntry: "Repeater Cartridges - Express" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS"); /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Repeater Cartridges - High Velocity" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY"); /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX") /* GXTEntry: "Shotgun Shells - Regular" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED") /* GXTEntry: "Opened Shotgun Shells" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG") /* GXTEntry: "Shotgun - Slug" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG"); /* GXTEntry: "Shotgun - Slug" */
			break;
		case joaat("AMMO_22_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Varmint" */:
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22"); /* GXTEntry: "Rifle Cartridges - Varmint" */
			break;
	}
}

struct<18> /*144*/ func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_297(bool bParam0)
{
	int iVar0;

	iVar0 = func_202(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_397(joaat("CARRIED_WEAPONS"), func_396(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_397(joaat("CARRIED_WEAPONS"), func_396(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_397(joaat("CARRIED_WEAPONS"), func_396(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_298(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_299(var uParam0, var uParam1, int* iParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_202(bParam3), uParam0, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_221(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_302(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_303(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_304(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_306()
{
	return Global_40.f_4283.f_1;
}

bool func_307(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_1() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_178(0, 1, 1))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (func_398(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_399(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0 /*60*/].f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_400(iVar0, (1 << 9), 1);
			}
			else
			{
				func_401(iVar0, (1 << 9), 1);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_308(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1) != 0;
}

void func_309(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_379(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_311(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_312(int iParam0, int iParam1)
{
	if (!func_379(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= (Global_1310750[iParam0 /*111*/].f_1 & iParam1);
}

bool func_313(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_314(int iParam0)
{
	if (!func_379(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_315(int iParam0)
{
	if (func_379(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_316(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0.0f;
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30.0f;
			break;
		case 1:
			fVar2 = 1.0f;
			break;
		case 2:
			fVar2 = 2.0f;
			break;
		case 3:
			fVar2 = 3.0f;
			break;
		case 4:
			fVar2 = 4.0f;
			break;
		case 5:
			fVar2 = 6.0f;
			break;
		case 6:
			fVar2 = 8.0f;
			break;
		case 7:
			fVar2 = 12.0f;
			break;
		case 8:
			fVar3 = 1.0f;
			break;
		case 9:
			fVar3 = 2.0f;
			break;
		case 10:
			fVar3 = 3.0f;
			break;
		case 11:
			fVar3 = 4.0f;
			break;
		case 12:
			fVar3 = 5.0f;
			break;
		case 13:
			fVar3 = 6.0f;
			break;
		case 14:
			fVar3 = 7.0f;
			break;
		case 15:
			fVar3 = 8.0f;
			break;
		case 16:
			fVar3 = 10.0f;
			break;
		case 17:
			fVar3 = 12.0f;
			break;
		case 18:
			fVar3 = 15.0f;
			break;
		case 19:
			fVar3 = 18.0f;
			break;
		case 20:
			fVar3 = 20.0f;
			break;
		case 21:
			fVar3 = 25.0f;
			break;
		case 22:
			fVar2 = -1.0f;
			break;
		case 23:
			fVar3 = -5.0f;
			break;
		case 24:
			fVar3 = -7.0f;
			break;
		case 25:
			fVar3 = -8.0f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60.0f * fVar1)) + (3600.0f * fVar2)) + (86400.0f * fVar3)));
	return iVar4;
}

void func_317(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0.0f;
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30.0f;
			break;
		case 1:
			fVar2 = 1.0f;
			break;
		case 2:
			fVar2 = 2.0f;
			break;
		case 3:
			fVar2 = 3.0f;
			break;
		case 4:
			fVar2 = 4.0f;
			break;
		case 5:
			fVar2 = 6.0f;
			break;
		case 6:
			fVar2 = 8.0f;
			break;
		case 7:
			fVar2 = 12.0f;
			break;
		case 8:
			fVar3 = 1.0f;
			break;
		case 9:
			fVar3 = 2.0f;
			break;
		case 10:
			fVar3 = 3.0f;
			break;
		case 11:
			fVar3 = 4.0f;
			break;
		case 12:
			fVar3 = 5.0f;
			break;
		case 13:
			fVar3 = 6.0f;
			break;
		case 14:
			fVar3 = 7.0f;
			break;
		case 15:
			fVar3 = 8.0f;
			break;
		case 16:
			fVar3 = 10.0f;
			break;
		case 17:
			fVar3 = 12.0f;
			break;
		case 18:
			fVar3 = 15.0f;
			break;
		case 19:
			fVar3 = 18.0f;
			break;
		case 20:
			fVar3 = 20.0f;
			break;
		case 21:
			fVar3 = 25.0f;
			break;
		case 22:
			fVar2 = -1.0f;
			break;
		case 23:
			fVar3 = -5.0f;
			break;
		case 24:
			fVar3 = -7.0f;
			break;
		case 25:
			fVar3 = -8.0f;
			break;
	}
	func_318(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_318(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_402(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_1() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

void func_319(var uParam0)
{
	*uParam0 = 0;
}

void func_320(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_321(int iParam0)
{
	if (func_403(179) || func_403(180))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			if (Global_1347702[iParam0 /*49*/].f_37 == Global_1905944.f_5698)
			{
				func_404(1);
			}
		}
	}
	if (func_405(179))
	{
		func_406(179);
	}
	if (func_405(180))
	{
		func_406(180);
	}
}

bool func_322(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_71(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (LAW::_ARE_WITNESSES_PENDING(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_323(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_111(iParam0))
	{
		return;
	}
	func_407(&(Global_1347702[iParam0 /*49*/].f_14), iParam1);
	func_407(&(Global_1347702[iParam0 /*49*/].f_14), 2);
	func_408(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 14));
	func_320(&(Global_1347702[iParam0 /*49*/].f_13), 32);
	if (iParam1 != (1 << 14))
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_111(Global_40.f_450[iVar0]))
			{
				if (Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_325(int iParam0, bool bParam1, Vector3 vParam2)
{
	if (!func_111(iParam0))
	{
		return;
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & 32) != 0)
	{
		return;
	}
	else if ((Global_1347702[iParam0 /*49*/].f_13 & (1 << 12)) != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_321(iParam0);
	if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 20)) != 0 && (Global_1347702[iParam0 /*49*/].f_13 & (1 << 11)) == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_218(iParam0, func_330(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1.0f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_218(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_218(iParam0, vParam2, 0, 0);
	}
	MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
	func_305(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 12));
}

bool func_326(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_291(Global_1347702[iParam0 /*49*/].f_15) != 0)
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

bool func_327(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

int func_328(int iParam0)
{
	int iVar0;

	iVar0 = joaat("BLIP_STYLE_RCM");
	if (!func_111(iParam0))
	{
		return iVar0;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		iVar0 = joaat("BLIP_STYLE_MISSION");
	}
	else if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 9)) != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = joaat("BLIP_STYLE_RCM_TRACKED");
		}
		else
		{
			iVar0 = joaat("BLIP_STYLE_RCM");
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = joaat("BLIP_STYLE_RCM_TRACKED");
	}
	else
	{
		iVar0 = joaat("BLIP_STYLE_RCM");
	}
	return iVar0;
}

bool func_329(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_111(iParam0))
	{
		return false;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 20)) != 0 && (Global_1347702[iParam0 /*49*/].f_13 & (1 << 11)) != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 > -1.0f)
	{
		return true;
	}
	return false;
}

Vector3 func_330(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return { 1794.04f, -1314.792f, 43.0923f };
		case 26:
			return { -235.2066f, 763.6583f, 117.085f };
		case 30:
			return { 1288.87f, -1397.85f, 77.93f };
		case 32:
			return { 1234.24f, -1425.58f, 71.18f };
		case 33:
			return { 905.92f, -421.19f, 88.23f };
		case 36:
			return { -2476.07f, 832.13f, 141.25f };
		case 38:
			return { -329.32f, -366.6f, 87.0f };
		case 39:
			return { 97.4f, -212.47f, 111.6f };
		case 43:
			return { 2586.494f, -1009.154f, 43.24f };
		case 41:
			return { 337.3075f, -684.5404f, 41.8362f };
		case 49:
			return { -2178.646f, -245.6886f, 191.1569f };
		case 51:
			return { -1709.38f, -335.07f, 176.95f };
		case 53:
			return { 2480.1f, -1377.69f, 45.32f };
		case 56:
			return { 2011.776f, -504.0132f, 40.983f };
		case 57:
			return { 1383.38f, -1336.83f, 77.59f };
		case 65:
			return { -2095.11f, 656.32f, 119.87f };
		case 69:
			return { 2943.93f, 1377.15f, 43.22f };
		case 70:
			return { 2945.42f, 1342.78f, 43.92f };
		case 77:
			return { 2793.35f, -1174.5f, 46.89f };
		case 78:
			return { 2734.359f, -1207.682f, 48.6752f };
		case 80:
			return { 2740.808f, -1312.805f, 46.648f };
		case 81:
			return { 2503.755f, -1164.531f, 48.1928f };
		case 84:
			return { -73.18f, -392.3f, 70.84f };
		case 88:
			return { 2480.53f, -399.62f, 41.42f };
		case 89:
			return { 1576.261f, -251.85f, 79.21f };
		case 91:
			return { 1496.348f, -1083.286f, 54.1105f };
		case 92:
			return { 1407.31f, 316.83f, 88.9555f };
		case 94:
			return { 1414.4f, 248.2f, 88.85f };
		case 101:
			return { -1378.656f, -735.3399f, 90.8243f };
		case 102:
			return { -1666.59f, 610.82f, 124.03f };
		case 103:
			return { 1356.44f, 533.95f, 86.12f };
		case 104:
			return { 2407.0f, -585.32f, 40.66f };
		case 105:
			return { -219.25f, 212.93f, 94.15f };
		case 116:
			return { 211.99f, 512.98f, 126.54f };
		case 117:
			return { -329.2f, 797.9f, 116.89f };
		case 118:
			return { -300.3652f, 814.9069f, 117.4111f };
		case 119:
			return { -1043.989f, 434.5095f, 53.6802f };
		case 121:
			return { 2520.88f, 421.94f, 65.91f };
		case 127:
			return { 2834.68f, -1048.04f, 42.86f };
		case 133:
			return { 2688.427f, -1121.766f, 49.6782f };
		case 135:
			return { -576.08f, 524.9f, 97.86f };
		case 136:
			return { 1248.01f, -1280.07f, 75.17f };
		case 143:
			return { 2954.45f, 523.05f, 44.47f };
		case 144:
			return { 2304.697f, -0.13289f, 45.70486f };
		case 151:
			return { 556.271f, 172.08f, 133.3435f };
		case 152:
			return { 556.271f, 172.08f, 133.3435f };
		case 146:
			return { -585.6761f, -347.216f, 81.28532f };
		default:
			break;
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_331(int iParam0)
{
	switch (func_1())
	{
		case -1:
			Global_1357549.f_1494 |= iParam0;
			break;
	}
}

void func_332(int iParam0)
{
	if (!func_329(iParam0))
	{
		if ((Global_1347702[iParam0 /*49*/].f_13 & 16) != 0)
		{
			if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
				}
				func_305(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			}
			func_320(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

void func_333(int iParam0)
{
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}
}

int func_334(int iParam0)
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

bool func_335(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_336(int iParam0)
{
	if (!func_409(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_410(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_411(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_411(iParam0), false) <= func_412();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_412();
	}
	return func_413();
}

bool func_337(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && (Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

void func_338(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_219(iParam0))
	{
		return;
	}
	switch (func_414(iParam0))
	{
		case 1:
			iVar0 = func_279(iParam0);
			if (func_415(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_416(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && (Global_1835011[iVar0 /*74*/].f_63 & 2) == 0)
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				}
				else
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
				}
			}
			else if ((func_416(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && (Global_1835011[iVar0 /*74*/].f_63 & 2) == 0)
			{
				iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS");
			}
			else
			{
				iVar2 = joaat("BLIP_STYLE_MISSION");
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!func_417(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
				}
				if (func_418(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_279(iParam0);
			if (func_419(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_328(iVar1))
				{
					case joaat("BLIP_STYLE_RCM"):
						iVar2 = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						iVar2 = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						iVar2 = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
					case joaat("BLIP_STYLE_MISSION"):
						iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
					default:
						iVar2 = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				iVar2 = func_328(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_333(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_339(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_340(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_341(int iParam0, bool bParam1)
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

int func_342(int iParam0)
{
	return iParam0;
}

void func_343(int iParam0)
{
	if (!func_423(iParam0))
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

void func_344(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_345(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_424(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_346(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_347(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_348(var uParam0)
{
	if ((*uParam0 & 1) != 0)
	{
		*uParam0 |= 64 | 16 | (1 << 24);
	}
}

float func_349(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_350(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_425(iParam0, uParam1))
		{
			if (!func_177(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_174(uParam2, 0, 0, 1, 0);
				func_426(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_177(uParam1->f_10, 1))
		{
			func_427(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_428(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_351(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5.0f))
	{
		return false;
	}
	strcpy_s(&cVar0, 32, sParam5);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		bVar4 = func_177(iParam4, 32);
		func_173(iParam1, uParam2, 0);
		iVar5 = func_429(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_174(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_177(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_177(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_177(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_177(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_177(iParam4, (1 << 23)) || func_177(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_177(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_177(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_353(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_353(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_177(iParam4, (1 << 26)))
		{
			iVar6 |= (1 << 14);
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_430(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
			if (func_177(iParam4, (1 << 28)))
			{
				iVar8 = func_431(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_432(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_353(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331 /*PCF_0x9663C8F2*/, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493 /*PCF_0xA58B6703*/, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315 /*PCF_0xD38AEF95*/, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493 /*PCF_0xA58B6703*/, false);
			}
			if (func_177(iParam4, 2) || func_177(iParam4, 16))
			{
				func_352(*uParam0, 1, 1);
			}
			else
			{
				func_352(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_352(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_353(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_354(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = (iParam1 & 32) != false;
	bVar2 = (iParam1 & 65792) != false;
	bVar3 = (iParam1 & 1179648) != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_433(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_355(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_434(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_177(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_356(int iParam0)
{
	if (func_177(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM") /* GXTEntry: "Aim weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK") /* GXTEntry: "Fire weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM") /* GXTEntry: "Aim drive-by weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK") /* GXTEntry: "Fire drive-by weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2") /* GXTEntry: "Fire secondary vehicle weapon" */, true);
	}
	if (func_177(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD") /* GXTEntry: "Reload" */, false);
	}
	if (func_177(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK") /* GXTEntry: "Melee attack" */, false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_357(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_435(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_436(Global_35)) || func_437(Global_35)) || func_438(Global_35));
	fVar12 = -1.0f;
	if (func_66(&(iParam1->f_13)))
	{
		fVar12 = func_67(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_230((uParam4[iVar0 /*17*/])->f_6);
		func_439(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_440(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_441(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_174(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_442(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_173(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_443(iParam1, fParam6, iParam1->f_9))
					{
						func_65(&(iParam1->f_18));
						if (bVar6)
						{
							func_442(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_444(iParam1, fParam2);
	}
	return bVar5;
}

void func_358(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_359(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_445(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_444(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_360(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_446(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_447(iParam1, 0);
				func_173(iParam1, uParam2, func_353(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_361(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_65(&(iParam1->f_18));
			return false;
		}
		else if (func_66(&(iParam1->f_18)))
		{
			func_80(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_66(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0.0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_448(&(iParam1->f_18), fParam2);
	return true;
}

void func_362(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_439(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_363(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_364(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				return true;
			}
			break;
		case 11:
		case 153:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
		case 13:
		case 15:
		case 154:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 1)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 2:
					if (iParam2 == 1 || iParam2 == 3)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			break;
		case 12:
		case 16:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 1)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 2:
					return true;
			}
			break;
		case 17:
		case 18:
		case 155:
			return true;
		case 19:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
		case 20:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_365(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_1() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_366(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_253(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_255(iVar2)))
		{
			if (func_255(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_367(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_247(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_368(int iParam0, int iParam1)
{
	if (!func_247(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

int func_369(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_449(iParam0);
}

bool func_370(int iParam0, bool bParam1)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	if ((func_249(iParam0, 1) && !func_248(iParam0)) && func_250(iParam0))
	{
		return false;
	}
	if (!func_249(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_388(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_371(int iParam0)
{
	if (!func_247(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_372(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			strcpy_s(&((uParam0[uParam0->f_97 /*4*/])->f_1), 24, sParam2);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_373(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_450(iVar0);
}

int func_374(int iParam0, int iParam1)
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

int func_375(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_198(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_376(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_451(iParam0, vVar0, fParam2);
}

void func_377(int iParam0, Vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (iParam0 == func_452(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_453(iParam0))
	{
		if (func_454(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_115(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= (iParam5 & 4);
				func_377(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= (iParam5 & 4);
				func_377(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_115(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_115(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_115(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_115(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_115(iParam5, 129))
	{
		if (func_115(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_115(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_115(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_115(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_453(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_115(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_115(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

int func_378(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_379(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_380(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_6;
	}
	return -15;
}

int func_381(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_455(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_382(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_383(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_384(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_385(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_386(int iParam0, int iParam1)
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

void func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_456(iParam0, iParam6);
	func_457(iParam0, iParam5);
	func_458(iParam0, iParam4);
	func_459(iParam0, iParam3);
	func_460(iParam0, iParam2);
	func_461(iParam0, iParam1);
}

bool func_388(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_247(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_255(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_264(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_255(iParam0));
}

int func_389(int iParam0)
{
	if (func_1() != -1)
	{
		return func_175();
	}
	if (!func_247(iParam0))
	{
		return func_175();
	}
	return Global_24887[iParam0 /*2*/].f_1;
}

int func_390(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_391(int iParam0)
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
	iVar0 = func_385(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_384(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_176(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_381(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_382(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_383(iParam0);
	if (iVar5 < 1 || iVar5 > func_386(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_395(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_198(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_199(iParam0);
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
		if (!func_462(iParam0, 1))
		{
			return false;
		}
	}
	return func_99(iParam0, 0, bParam2) >= iParam1;
}

struct<4> /*32*/ func_396(bool bParam0)
{
	return func_397(joaat("CHARACTER"), func_463(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_397(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_198(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_202(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_398(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_399(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0 /*60*/].f_59 != 0 && Global_40.f_4942[iVar0 /*60*/].f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_399(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_302(iParam0))
	{
		return false;
	}
	iVar0 = func_303(iParam0);
	return (*iParam1 & iVar0) != 0;
}

void func_400(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_302(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_401(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_302(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

int func_402(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_403(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_404(int iParam0)
{
	func_464(1);
}

bool func_405(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_420(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_406(int iParam0)
{
	int iVar0;
	int iVar1;

	func_420(iParam0, &iVar0, &iVar1);
	func_465(iVar0, iVar1);
}

void func_407(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_408(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_409(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_410(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_411(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return { -2578.509f, 389.3037f, 148.3825f };
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_412()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70.0f;
	}
	return 25.0f;
}

bool func_413()
{
	return (Global_1894899 & 2) != 0;
}

int func_414(int iParam0)
{
	if (!func_219(iParam0))
	{
		return 0;
	}
	return func_466(func_12(iParam0));
}

bool func_415(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_467(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_416(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_468(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

int func_417(int iParam0)
{
	return func_469(iParam0);
}

bool func_418(var uParam0, int iParam1)
{
	return (uParam0->f_63 & iParam1) != 0;
}

bool func_419(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_337(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
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
	if (func_470(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_471(iParam0))
	{
		return false;
	}
	if (func_472(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_473(iParam0, 1)) || func_327((1 << 15)))
	{
		if (!func_473(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_474())
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

bool func_423(int iParam0)
{
	return func_424(iParam0, 2);
}

bool func_424(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

bool func_425(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if ((uParam1->f_11 & 1) != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if ((uParam1->f_11 & 2) != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = (uParam1->f_11 & 4) != false;
	bVar1 = (uParam1->f_11 & 8) != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_475((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_427(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_445(uParam0[iVar0 /*17*/]))
		{
			func_228(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_428(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_429(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_476(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_230((uParam2[iVar0 /*17*/])->f_6))
		{
			func_228(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_430(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_477(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_431(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_432(int* iParam0, int* iParam1)
{
	if (!func_353(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_228(iParam1, 19);
			func_447(iParam0, 23);
			func_478(iParam1, 2);
		}
	}
}

bool func_433(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_479(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_480(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_434(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_476(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_435(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_436(int iParam0)
{
	return func_481(iParam0, 4) | func_481(iParam0, 5);
}

int func_437(int iParam0)
{
	return func_481(iParam0, 7);
}

int func_438(int iParam0)
{
	return func_481(iParam0, 6);
}

void func_439(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_445(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_476(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_440(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_482(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_483(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_236(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_236(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_484(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_441(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_485(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_486(iParam1, 1))
	{
		func_487(iParam1, 1);
		return true;
	}
	return false;
}

void func_442(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_125(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_443(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0.0f)
		{
			return true;
		}
	}
	return false;
}

void func_444(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_445(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_447(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_448(var uParam0, float fParam1)
{
	if (func_488(uParam0, fParam1))
	{
		func_80(uParam0);
		return 1;
	}
	return 0;
}

int func_449(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_489(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_451(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	}
	vVar6 = { vParam1 - vVar0 /*3*/ };
	fVar9 = func_490(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0.0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_491(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_452(var uParam0)
{
	return uParam0;
}

bool func_453(int iParam0)
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

bool func_454(int iParam0)
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

int func_455(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_456(int iParam0, int iParam1)
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

void func_457(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_458(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_382(*iParam0);
	iVar1 = func_381(*iParam0);
	if (iParam1 < 1 || iParam1 > func_386(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_459(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_460(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_461(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_462(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_198(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_200(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_492("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_493(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_494(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_300(iVar1);
				return true;
			}
			iVar3++;
		}
		func_300(iVar1);
	}
	return false;
}

struct<4> /*32*/ func_463()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

void func_464(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_465(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_466(int iParam0)
{
	return (iParam0 & 31);
}

bool func_467(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_468(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_495(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

bool func_470(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_471(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_473(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_473(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_473(iParam0, (1 << 16)) && !func_473(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_473(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_473(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_473(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_474()
{
	return Global_1905944.f_5694;
}

int func_475(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_476(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_230(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_231(&(iParam1->f_6), 0, 1);
	}
	if (!func_230(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_445(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_496(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_230(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_484(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_497(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_498(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_234(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_497(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_236(iParam1->f_6, 0, 1);
				}
				else
				{
					func_236(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_477(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_478(int* iParam0, int iParam1)
{
	if (!func_227(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_228(iParam0, 14);
		}
	}
}

bool func_479(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_480(int iParam0)
{
	Global_22 |= iParam0;
}

int func_481(int iParam0, int iParam1)
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

bool func_482(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1.0f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_483(int iParam0, bool bParam1)
{
	if (bParam1 && !func_230(iParam0))
	{
		return false;
	}
	return !func_424(iParam0, 4);
}

void func_484(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_230(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	func_497(iParam0, 18, 0, 1);
	func_497(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_485(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_230(iParam0))
	{
		return false;
	}
	iVar0 = func_342(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_486(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_230(iParam0))
	{
		return false;
	}
	iVar0 = func_342(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_487(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_488(var uParam0, float fParam1)
{
	if (!func_66(uParam0))
	{
		return false;
	}
	if (func_67(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_489(int iParam0, int iParam1)
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

float func_490(Vector3 vParam0, Vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		vParam0.x /= fVar0;
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0.0f)
	{
		vParam3.x /= fVar0;
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_491(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

bool func_492(char* sParam0, var uParam1, int* iParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_202(bParam4), sParam0, iParam3, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_493(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_494(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_495(var uParam0)
{
	if (func_499(&(uParam0->f_29), 62))
	{
		switch (func_500())
		{
			case 1:
				if (!func_499(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_499(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_499(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_499(&(uParam0->f_29), 32))
				{
					if (func_499(&(uParam0->f_29), 2))
					{
						if (func_176(func_175()) < 5)
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

int func_496(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_424(iVar0, 2))
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
				func_501(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_497(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_498(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_230(iParam0))
	{
		return;
	}
	iVar0 = func_342(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_499(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 & iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_500()
{
	return Global_1899516;
}

void func_501(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_345(iParam0, 1);
	func_346(iParam0, 1);
	func_347(iParam0, 128);
}

