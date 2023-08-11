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
	var uLocal_15 = 20;
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
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<4> /*32*/ sLocal_81 = { 0, 0, 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	Vector3 vLocal_92[10] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	int iLocal_123[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	struct<15> /*120*/ sLocal_140[9];
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uScriptParam_0 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	uScriptParam_0 = uScriptParam_0;
	if ((PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1(1, 0)) || func_1(8, 0))
	{
		func_2(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_6(&uLocal_14, 0, 551, 812, 1008);
	func_6(&uLocal_14, 1, 1083, 1130, 1483);
	func_6(&uLocal_14, 2, 1491, 1854, 2359);
	func_6(&uLocal_14, 3, 2367, 2381, 2817);
	func_6(&uLocal_14, 4, 2825, 2833, 2851);
	func_19(&uLocal_14, 0);
	func_20(&sLocal_140);
	while (true)
	{
		BUILTIN::WAIT(0);
		func_21();
		func_22(&uLocal_14);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0, bool bParam1)
{
	if (func_23(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_24(5000))
		{
			return true;
		}
	}
	switch (func_25(0))
	{
		case 0:
			return false;
		case 1:
			if ((iParam0 & 1) != 0)
			{
				return true;
			}
			break;
		case 4:
			if ((iParam0 & 2) != 0)
			{
				return true;
			}
			break;
		case 6:
			if ((iParam0 & 4) != 0)
			{
				return true;
			}
			break;
		case 2:
			if ((iParam0 & 16) != 0)
			{
				return true;
			}
			break;
		case 5:
			if ((iParam0 & 32) != 0)
			{
				return true;
			}
			break;
		case 9:
			if ((iParam0 & 64) != 0)
			{
				return true;
			}
			break;
		case 8:
			if ((iParam0 & 8) != 0)
			{
				return true;
			}
			break;
		case 10:
			if ((iParam0 & (1 << 9)) != 0)
			{
				return true;
			}
			break;
		case 3:
			if ((iParam0 & 128) != 0)
			{
				return true;
			}
			break;
		case 11:
			if ((iParam0 & 256) != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_2(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		if (bParam0)
		{
			func_26(&(iLocal_123[iVar0]));
		}
		else
		{
			func_27(&(iLocal_123[iVar0]), 1, 0, 1);
		}
		iLocal_123[iVar0] = 0;
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_136);
}

void func_3()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_79))
	{
		iLocal_79 = VOLUME::CREATE_VOLUME_AGGREGATE();
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_79, 1533.805f, -7264.535f, 91.877f, 0.0f, 0.0f, 39f, 128.0f, 74.0f, 53.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_79, 1398.397f, -7289.793f, 85.0f, 0.0f, 0.0f, -26.99999f, 112.0f, 85.0f, 43.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_79, 1368.051f, -7198.679f, 59.2032f, 0.0f, 0.0f, -12f, 112.0f, 13.0f, 25.0f);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_80))
	{
		iLocal_80 = VOLUME::CREATE_VOLUME_AGGREGATE();
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_80, 1448.072f, -7241.104f, 105.654f, 0.0f, 0.0f, 18f, 233.0f, 168.0f, 86.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_80, 1293.052f, -7122.601f, 123.6654f, 0.0f, 0.0f, 117f, 91.0f, 91.0f, 115.0f);
	}
	func_28(&sLocal_140);
}

int func_4()
{
	int iVar0;

	if ((func_29() != 8 || func_1(1, 0)) || func_1(8, 0))
	{
		return 4;
	}
	switch (iLocal_90)
	{
		case 0:
			iLocal_91 = MISC::GET_GAME_TIMER();
			iVar0 = 0;
			while (iVar0 < iLocal_123)
			{
				if (func_30(iLocal_123[iVar0], 0) && func_31(Global_35, iLocal_123[iVar0], 1, 1) < 120.0f)
				{
					func_27(&(iLocal_123[iVar0]), 1, 0, 1);
				}
				else
				{
					func_26(&(iLocal_123[iVar0]));
				}
				iLocal_123[iVar0] = 0;
				iVar0++;
			}
			func_20(&sLocal_140);
			return -1;
		case 1:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				iLocal_90 = 2;
			}
			break;
	}
	return 1;
}

void func_5()
{
}

void func_6(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/] = iParam2;
	uParam0->f_1[iVar0 /*3*/].f_1 = iParam3;
	uParam0->f_1[iVar0 /*3*/].f_2 = iParam4;
}

void func_7()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		vLocal_92[iVar0 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
		iVar0++;
	}
	iLocal_138 = 0;
	iLocal_139 = MISC::GET_GAME_TIMER();
}

int func_8()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;

	if (iLocal_90 == 0)
	{
		return 0;
	}
	if (iLocal_138 >= 10)
	{
		return 2;
	}
	switch (iLocal_90)
	{
		case 1:
			return 2;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_91) < 30000)
			{
				fVar0 = 100.0f;
				fVar1 = 120.0f;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_91) < 55000)
			{
				fVar0 = 90.0f;
				fVar1 = 100.0f;
			}
			else
			{
				fVar0 = 70.0f;
				fVar1 = 90.0f;
			}
			if (func_32(Global_36, &sLocal_81, &bVar2, 19, 1, 270.0f, 40.0f, fVar0, fVar1, 0))
			{
				if (!func_33(iLocal_79, sLocal_81.f_3) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(sLocal_81.f_3, 0, &(sLocal_81.f_3.f_2)) != 1)
				{
					vLocal_92[iLocal_138 /*3*/] = { sLocal_81.f_3 /*3*/ };
				}
				func_34(&sLocal_81, 1, 0);
			}
			else if (bVar2)
			{
				func_34(&sLocal_81, 1, 0);
			}
			if (!func_35(vLocal_92[iLocal_138 /*3*/]))
			{
				iLocal_138++;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_139) > 7500 && !func_35(vLocal_92[0 /*3*/]))
			{
				iVar3 = 0;
				while (iVar3 < vLocal_92.x)
				{
					if (func_35(vLocal_92[iVar3 /*3*/]))
					{
						vLocal_92[iVar3 /*3*/] = { vLocal_92[0 /*3*/] /*3*/ };
					}
					iVar3++;
				}
				return 2;
			}
			break;
	}
	return -1;
}

void func_9()
{
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iLocal_136 = joaat("S_M_M_FUSSARHENCHMAN_01");
	PED::_RESERVE_AMBIENT_PEDS(10);
	STREAMING::REQUEST_MODEL(iLocal_136, false);
	iLocal_134 = 0;
	iLocal_135 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < sLocal_140.f_0)
		{
			if (sLocal_140[iVar2 /*15*/].f_1 != 0 && sLocal_140[iVar2 /*15*/].f_1 == iLocal_123[iVar0])
			{
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_123[iVar0]))
		{
			if (iVar1 != -1)
			{
				sLocal_140[iVar1 /*15*/].f_1 = 0;
			}
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_123[iVar0]) && PED::IS_PED_INJURED(iLocal_123[iVar0]))
		{
			if (iVar1 != -1)
			{
				sLocal_140[iVar1 /*15*/].f_1 = 0;
			}
			func_27(&(iLocal_123[iVar0]), 1, 0, 1);
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		else if (func_31(Global_35, iLocal_123[iVar0], 1, 1) > 200.0f)
		{
			if (iVar1 != -1)
			{
				sLocal_140[iVar1 /*15*/].f_1 = 0;
			}
			func_26(&(iLocal_123[iVar0]));
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		iVar0++;
	}
	if (iLocal_90 == 2)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_91) < 30000)
		{
			iLocal_135 = func_36(iLocal_135, 0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_91) < 55000)
		{
			iLocal_135 = func_36(iLocal_135, 0, 4);
		}
		else
		{
			iLocal_135 = func_36(iLocal_135, 0, 6);
		}
	}
}

int func_11()
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;

	if (iLocal_90 == 0)
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_136))
	{
		return -1;
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return -1;
	}
	if (!func_37())
	{
		return -1;
	}
	if (iLocal_134 >= iLocal_135)
	{
		return 3;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		if (!func_30(iLocal_123[iVar0], 0))
		{
			switch (iLocal_90)
			{
				case 1:
					iVar4 = 0;
					while (iVar4 < sLocal_140.f_0)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_140[iVar4 /*15*/]) && func_38(&(sLocal_140[iVar4 /*15*/])))
						{
							vVar1 = { func_39(&(sLocal_140[iVar4 /*15*/])) /*3*/ };
							if (func_35(vVar1))
							{
							}
							else
							{
								iLocal_123[iVar0] = func_40(joaat("S_M_M_FUSSARHENCHMAN_01"), vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_123[iVar0]))
								{
									func_41(iLocal_123[iVar0]);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_123[iVar0], 27, true);
									PED::_0x712B2C2B2471B493(iLocal_123[iVar0], joaat("DISABLED"));
									PED::SET_PED_ID_RANGE(iLocal_123[iVar0], (PED::_GET_PED_ID_RANGE(iLocal_123[iVar0]) + 20.0f));
									TASK::TASK_POLICE(iLocal_123[iVar0], true);
									TASK::_TASK_PATROL_2(iLocal_123[iVar0], sLocal_140[iVar4 /*15*/], 1, vVar1, 0, 1);
								}
								iLocal_134++;
								sLocal_140[iVar4 /*15*/].f_1 = iLocal_123[iVar0];
								return -1;
							}
						}
						iVar4++;
					}
					iLocal_134++;
					break;
				case 2:
					if (!CAM::IS_SPHERE_VISIBLE(vLocal_92[iVar0 /*3*/], 2.0f) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_136, vLocal_92[iVar0 /*3*/], true))
					{
						iLocal_123[iVar0] = func_40(joaat("S_M_M_FUSSARHENCHMAN_01"), vLocal_92[iVar0 /*3*/], 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						func_41(iLocal_123[iVar0]);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_123[iVar0], 27, true);
						PED::_0x712B2C2B2471B493(iLocal_123[iVar0], joaat("DISABLED"));
						iLocal_134++;
						return -1;
					}
					else
					{
						iLocal_134++;
					}
					break;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_12()
{
}

void func_13()
{
	iLocal_137 = MISC::GET_GAME_TIMER();
}

int func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;

	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < iLocal_123)
	{
		if (func_30(iLocal_123[iVar2], 0))
		{
			switch (iLocal_90)
			{
				case 1:
					func_42(&sLocal_140, iLocal_123[iVar2]);
					break;
				case 2:
					vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_36, 0.0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3.0f, 3.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5.0f, 5.0f), 0.0f) /*3*/ };
					if ((MISC::GET_GAME_TIMER() - iLocal_91) < 55000)
					{
						if ((!func_43(iLocal_123[iVar2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) && !func_43(iLocal_123[iVar2], joaat("SCRIPT_TASK_COMBAT"))) && !func_43(iLocal_123[iVar2], joaat("SCRIPT_TASK_POLICE")))
						{
							vVar6 = { func_44(vVar3, 15.0f, 10.0f) /*3*/ };
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 3.0f, 20000, 0.25f, 7602180, 40000.0f);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1.0f, 1, 10.0f, 4.0f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 7602180);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_POLICE(iLocal_123[iVar2], true);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_123[iVar2], iVar0);
						}
					}
					else if (!func_43(iLocal_123[iVar2], joaat("SCRIPT_TASK_COMBAT")) && !func_43(iLocal_123[iVar2], joaat("SCRIPT_TASK_POLICE")))
					{
						TASK::TASK_POLICE(iLocal_123[iVar2], true);
						TASK::TASK_COMBAT_PED(iLocal_123[iVar2], Global_35, 0, 0);
					}
					break;
			}
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (((MISC::GET_GAME_TIMER() - iLocal_137) > 10000 || iVar1 == 10) || iLocal_90 == 0)
	{
		return 0;
	}
	return -1;
}

void func_15()
{
}

void func_16()
{
}

int func_17()
{
	func_2(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return -1;
}

void func_18()
{
}

void func_19(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	func_45(uParam0);
}

void func_20(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_46(iParam0, iVar0);
		iVar0++;
	}
}

void func_21()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	int iVar12;

	if ((VOLUME::DOES_VOLUME_EXIST(iLocal_79) && VOLUME::DOES_VOLUME_EXIST(iLocal_80)) && func_30(Global_35, 0))
	{
		if ((func_47(Global_35, iLocal_79, 1, 0) || func_48(40)) || func_48(41))
		{
			iLocal_277 = 0;
			iLocal_90 = 0;
		}
		else if (func_47(Global_35, iLocal_80, 1, 0))
		{
			iLocal_277 = 0;
			func_49(20);
			func_49(21);
			func_49(22);
			if (!PED::IS_PED_IN_COMBAT(Global_35, 0) && (MISC::GET_GAME_TIMER() - iLocal_91) < 15000)
			{
				iLocal_90 = 1;
			}
			else
			{
				iLocal_90 = 2;
			}
		}
		else
		{
			func_49(20);
			func_49(21);
			func_49(22);
			if (MISC::GET_GAME_TIMER() - iLocal_276) > MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000)
			{
				vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
				vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) /*3*/ };
				iVar12 = 9999;
				if (iLocal_277 == 0)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.2f, -1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 1.2f), 0.5f /*3*/ };
					iVar12 = 50;
				}
				else if (iLocal_277 == 1)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 1.2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 1.2f), 0.1f /*3*/ };
					iVar12 = 60;
				}
				else if (iLocal_277 == 2)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.5f, -0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 0.5f), 0.3f /*3*/ };
					iVar12 = 20;
				}
				else if (iLocal_277 == 3)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 1.2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 1.2f), 0.0f /*3*/ };
					iVar12 = 50;
				}
				else if (iLocal_277 == 4)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.4f, 0.4f), 0.0f, 0.0f /*3*/ };
					iVar12 = 60;
				}
				vVar6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar0.z, 0.0f, -1.0f, 0.0f) /*3*/ };
				vVar9 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, vVar3) /*3*/ };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vVar6, vVar9, iVar12, true, joaat("WEAPON_SNIPERRIFLE_CARCANO") /* GXTEntry: "Carcano Rifle" */, 0, true, true, -1.0f, false);
				iLocal_276 = MISC::GET_GAME_TIMER();
				iLocal_277++;
			}
		}
	}
	else
	{
		iLocal_90 = 0;
	}
}

void func_22(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/].f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/].f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/]);
		Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/].f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

bool func_23(int iParam0)
{
	return (Global_1935630 & iParam0) != 0;
}

bool func_24(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_25(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_26(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_27(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_28(int iParam0)
{
	char* sVar0;

	(*iParam0)[0 /*15*/] = "miss_NorthField";
	(iParam0[0 /*15*/])->f_2[0 /*3*/] = { 1547.69f, -7061.763f, 80.98825f /*3*/ };
	(iParam0[0 /*15*/])->f_2[1 /*3*/] = { 1463.462f, -6979.851f, 72.17596f /*3*/ };
	(iParam0[0 /*15*/])->f_2[2 /*3*/] = { 1492.056f, -6945.109f, 75.02325f /*3*/ };
	(iParam0[0 /*15*/])->f_2[3 /*3*/] = { 1569.833f, -7010.37f, 84.61304f /*3*/ };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[0 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[0 /*15*/])->f_2[0 /*3*/], (iParam0[0 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[0 /*15*/])->f_2[1 /*3*/], (iParam0[0 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[0 /*15*/])->f_2[2 /*3*/], (iParam0[0 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[0 /*15*/])->f_2[3 /*3*/], (iParam0[0 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[1 /*15*/] = "miss_CastleFront";
	(iParam0[1 /*15*/])->f_2[0 /*3*/] = { 1423.832f, -7077.051f, 68.73053f /*3*/ };
	(iParam0[1 /*15*/])->f_2[1 /*3*/] = { 1332.573f, -7009.969f, 52.6828f /*3*/ };
	(iParam0[1 /*15*/])->f_2[2 /*3*/] = { 1394.447f, -6937.98f, 61.26836f /*3*/ };
	(iParam0[1 /*15*/])->f_2[3 /*3*/] = { 1466.745f, -7052.835f, 70.23048f /*3*/ };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[1 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[1 /*15*/])->f_2[0 /*3*/], (iParam0[1 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[1 /*15*/])->f_2[1 /*3*/], (iParam0[1 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[1 /*15*/])->f_2[2 /*3*/], (iParam0[1 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[1 /*15*/])->f_2[3 /*3*/], (iParam0[1 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[2 /*15*/] = "miss_ShoreLine";
	(iParam0[2 /*15*/])->f_2[0 /*3*/] = { 1276.878f, -6914.748f, 42.99872f /*3*/ };
	(iParam0[2 /*15*/])->f_2[1 /*3*/] = { 1269.852f, -6986.301f, 44.36502f /*3*/ };
	(iParam0[2 /*15*/])->f_2[2 /*3*/] = { 1252.001f, -7091.143f, 40.75356f /*3*/ };
	(iParam0[2 /*15*/])->f_2[3 /*3*/] = { 1211.104f, -7103.643f, 41.48995f /*3*/ };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[2 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[2 /*15*/])->f_2[0 /*3*/], (iParam0[2 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[2 /*15*/])->f_2[1 /*3*/], (iParam0[2 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[2 /*15*/])->f_2[2 /*3*/], (iParam0[2 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[2 /*15*/])->f_2[3 /*3*/], (iParam0[2 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[3 /*15*/] = "miss_SouthField";
	(iParam0[3 /*15*/])->f_2[0 /*3*/] = { 1309.89f, -7050.633f, 47.73157f /*3*/ };
	(iParam0[3 /*15*/])->f_2[1 /*3*/] = { 1282.163f, -7093.915f, 45.52501f /*3*/ };
	(iParam0[3 /*15*/])->f_2[2 /*3*/] = { 1397.532f, -7138.745f, 67.66041f /*3*/ };
	(iParam0[3 /*15*/])->f_2[3 /*3*/] = { 1411.206f, -7068.766f, 66.23284f /*3*/ };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[3 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[3 /*15*/])->f_2[0 /*3*/], (iParam0[3 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[3 /*15*/])->f_2[1 /*3*/], (iParam0[3 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[3 /*15*/])->f_2[2 /*3*/], (iParam0[3 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[3 /*15*/])->f_2[3 /*3*/], (iParam0[3 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[4 /*15*/] = "miss_CastleRidge";
	(iParam0[4 /*15*/])->f_2[0 /*3*/] = { 1683.376f, -7223.112f, 132.7217f /*3*/ };
	(iParam0[4 /*15*/])->f_2[1 /*3*/] = { 1623.999f, -7313.509f, 112.2114f /*3*/ };
	(iParam0[4 /*15*/])->f_2[2 /*3*/] = { 1577.847f, -7362.998f, 100.5893f /*3*/ };
	(iParam0[4 /*15*/])->f_2[3 /*3*/] = { 1657.111f, -7251.768f, 124.6736f /*3*/ };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[4 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[4 /*15*/])->f_2[0 /*3*/], (iParam0[4 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[4 /*15*/])->f_2[1 /*3*/], (iParam0[4 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[4 /*15*/])->f_2[2 /*3*/], (iParam0[4 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[4 /*15*/])->f_2[3 /*3*/], (iParam0[4 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[5 /*15*/] = "miss_TreeClose";
	(iParam0[5 /*15*/])->f_2[0 /*3*/] = { 1576.992f, -7361.878f, 100.3456f /*3*/ };
	(iParam0[5 /*15*/])->f_2[1 /*3*/] = { 1631.623f, -7419f, 120.9224f /*3*/ };
	(iParam0[5 /*15*/])->f_2[2 /*3*/] = { 1608.229f, -7481.153f, 128.0874f /*3*/ };
	(iParam0[5 /*15*/])->f_2[3 /*3*/] = { 1540.681f, -7432.281f, 113.7524f /*3*/ };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[5 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[5 /*15*/])->f_2[0 /*3*/], (iParam0[5 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[5 /*15*/])->f_2[1 /*3*/], (iParam0[5 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[5 /*15*/])->f_2[2 /*3*/], (iParam0[5 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[5 /*15*/])->f_2[3 /*3*/], (iParam0[5 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[6 /*15*/] = "miss_TreeFar";
	(iParam0[6 /*15*/])->f_2[0 /*3*/] = { 1506.142f, -7520.447f, 158.1895f /*3*/ };
	(iParam0[6 /*15*/])->f_2[1 /*3*/] = { 1620.642f, -7540.919f, 144.9812f /*3*/ };
	(iParam0[6 /*15*/])->f_2[2 /*3*/] = { 1542.976f, -7397.477f, 106.9753f /*3*/ };
	(iParam0[6 /*15*/])->f_2[3 /*3*/] = { 1470.417f, -7369.557f, 97.17374f /*3*/ };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[6 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[6 /*15*/])->f_2[0 /*3*/], (iParam0[6 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[6 /*15*/])->f_2[1 /*3*/], (iParam0[6 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[6 /*15*/])->f_2[2 /*3*/], (iParam0[6 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[6 /*15*/])->f_2[3 /*3*/], (iParam0[6 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[7 /*15*/] = "miss_RuinsRidge";
	(iParam0[7 /*15*/])->f_2[0 /*3*/] = { 1143.145f, -7259.119f, 73.90079f /*3*/ };
	(iParam0[7 /*15*/])->f_2[1 /*3*/] = { 1192.581f, -7217.897f, 68.34444f /*3*/ };
	(iParam0[7 /*15*/])->f_2[2 /*3*/] = { 1163.34f, -7129.541f, 50.03685f /*3*/ };
	(iParam0[7 /*15*/])->f_2[3 /*3*/] = { 1230.028f, -7148.012f, 52.79202f /*3*/ };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[7 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[7 /*15*/])->f_2[0 /*3*/], (iParam0[7 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[7 /*15*/])->f_2[1 /*3*/], (iParam0[7 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[7 /*15*/])->f_2[2 /*3*/], (iParam0[7 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[7 /*15*/])->f_2[3 /*3*/], (iParam0[7 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[8 /*15*/] = "miss_BeachTown";
	(iParam0[8 /*15*/])->f_2[0 /*3*/] = { 1208.154f, -7057.239f, 40.75641f /*3*/ };
	(iParam0[8 /*15*/])->f_2[1 /*3*/] = { 1144.686f, -7038.287f, 41.26281f /*3*/ };
	(iParam0[8 /*15*/])->f_2[2 /*3*/] = { 1142.318f, -7114.154f, 46.50215f /*3*/ };
	(iParam0[8 /*15*/])->f_2[3 /*3*/] = { 1223.22f, -7103.775f, 40.93461f /*3*/ };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[8 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[8 /*15*/])->f_2[0 /*3*/], (iParam0[8 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[8 /*15*/])->f_2[1 /*3*/], (iParam0[8 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[8 /*15*/])->f_2[2 /*3*/], (iParam0[8 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[8 /*15*/])->f_2[3 /*3*/], (iParam0[8 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), false);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

int func_29()
{
	return Global_1897952.f_41;
}

bool func_30(int iParam0, int iParam1)
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
	if (func_50(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_50(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_50(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

float func_31(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_32(Vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
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
			func_51(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_52(&(iParam3->f_1), iParam5);
				if (!func_35(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_53(iParam3->f_6));
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

bool func_33(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

bool func_35(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_36(int iParam0, int iParam1, int iParam2)
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

bool func_37()
{
	if (func_29() == 8)
	{
		if (func_54(0, 0, 1))
		{
			return false;
		}
		if (!func_55(39))
		{
			return false;
		}
		if (func_55(40) && func_55(41))
		{
			return false;
		}
		if (func_56(40))
		{
			return false;
		}
		if (func_56(41))
		{
			return false;
		}
		if (func_57(42))
		{
			return false;
		}
	}
	return true;
}

bool func_38(var uParam0)
{
	Vector3 vVar0;
	int iVar3;

	if (uParam0->f_1 != 0 && func_30(uParam0->f_1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) /*3*/ };
		return false;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_58(Global_35, uParam0->f_2[iVar3 /*3*/], 1) < 200.0f)
		{
			return true;
		}
		iVar3++;
	}
	return false;
}

Vector3 func_39(var uParam0)
{
	float fVar0;
	Vector3 vVar1;
	int iVar4;
	float fVar5;

	fVar0 = 9999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_2[iVar4 /*3*/], 2.0f) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("S_M_M_FUSSARHENCHMAN_01"), uParam0->f_2[iVar4 /*3*/], true))
		{
			fVar5 = func_58(Global_35, uParam0->f_2[iVar4 /*3*/], 1);
			if (fVar5 < fVar0)
			{
				fVar0 = fVar5;
				vVar1 = { uParam0->f_2[iVar4 /*3*/] /*3*/ };
			}
		}
		iVar4++;
	}
	return vVar1;
}

int func_40(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_59(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_41(int iParam0)
{
	LAW::_SET_PED_LAW_BEHAVIOUR(iParam0, 2);
	LAW::_SET_PED_LAW_BEHAVIOUR(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188 /*PCF_0x66114902*/, true);
	PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(iParam0, joaat("LAW"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("GROUP_REVOLVER"), 100, true, false, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("GROUP_SNIPER"), 100, false, true, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
}

void func_42(int iParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iVar3 = -1;
	if ((!func_43(iParam1, joaat("SCRIPT_TASK_PATROL")) && !func_43(iParam1, joaat("SCRIPT_TASK_COMBAT"))) && !func_43(iParam1, joaat("SCRIPT_TASK_POLICE")))
	{
		iVar4 = 0;
		while (iVar4 < *iParam0)
		{
			if ((iParam0[iVar4 /*15*/])->f_1 == iParam1)
			{
				vVar0 = { func_39(iParam0[iVar4 /*15*/]) /*3*/ };
				iVar3 = iVar4;
			}
			iVar4++;
		}
		if (!func_35(vVar0))
		{
			TASK::TASK_POLICE(iParam1, true);
			TASK::_TASK_PATROL_2(iParam1, (*iParam0)[iVar3 /*15*/], 1, vVar0, 0, 1);
		}
	}
}

bool func_43(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

Vector3 func_44(Vector3 vParam0, float fParam3, float fParam4)
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), 0.0f /*3*/ };
	fVar3 = (fParam4 / 2.0f);
	vVar0 = { func_60(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, fParam3)) /*3*/ };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

void func_45(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_46(int iParam0, int iParam1)
{
	(*iParam0)[iParam1 /*15*/] = "";
	(iParam0[iParam1 /*15*/])->f_1 = 0;
	(iParam0[iParam1 /*15*/])->f_2[0 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	(iParam0[iParam1 /*15*/])->f_2[1 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	(iParam0[iParam1 /*15*/])->f_2[2 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	(iParam0[iParam1 /*15*/])->f_2[3 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
}

bool func_47(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_48(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_61(Global_1835011[iParam0 /*74*/].f_1);
}

void func_49(int iParam0)
{
	if (func_62(&(Global_1425247.f_9), iParam0, 2))
	{
	}
}

bool func_50(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_51(var uParam0, int iParam1, Vector3 vParam2, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_35(vParam2))
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(10.0f, 40.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(40.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(50.0f, 90.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(50.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(0.0f, 10.0f, 1.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(5.0f, 15.0f, 1.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(60.0f, 120.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(100.0f, 130.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(10.0f, 35.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(25.0f, 50.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(50.0f, 80.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(75.0f, 95.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_63(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_63(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_63(125.0f, 115.0f, 100.0f, iParam1));
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

void func_52(var uParam0, int iParam1)
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

Vector3 func_53(Vector3 vParam0)
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

bool func_54(int iParam0, bool bParam1, bool bParam2)
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
		if (func_64())
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
		iVar0 = func_65(Global_1898164.f_1[0 /*5*/]);
		if (func_66(iVar0) && func_67(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_68(Global_1898164.f_1[0 /*5*/]))
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

bool func_55(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_69(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_56(int iParam0)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_72(func_71(iParam0));
	if (!func_73(iVar0))
	{
		return false;
	}
	return func_74(iVar0, 4);
}

bool func_57(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

float func_58(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_75(iParam1))
		{
			func_76(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_77(iParam0, 0, 1);
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
			func_78(iParam0, 0);
			bVar0 = true;
		}
		func_79(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

Vector3 func_60(Vector3 vParam0, float fParam3)
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

bool func_61(int iParam0)
{
	int iVar0;

	iVar0 = func_80(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

float func_63(float fParam0, float fParam1, float fParam2, int iParam3)
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

bool func_64()
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

int func_65(int iParam0)
{
	if (!func_68(iParam0))
	{
		return -1;
	}
	return func_82(func_81(iParam0));
}

bool func_66(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_67(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_68(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_69(int iParam0, bool bParam1)
{
	switch (func_80(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_70(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_71(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_72(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_73(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_74(int iParam0, int iParam1)
{
	return (func_73(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 & iParam1) != 0);
}

bool func_75(int iParam0)
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

void func_76(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_83(iParam0, iParam1))
		{
			if (func_84(iParam0, iParam1))
			{
				if (func_85(iParam0, iParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_86(iParam0);
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

void func_77(int iParam0, int iParam1, bool bParam2)
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

void func_78(int iParam0, bool bParam1)
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

void func_79(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1.0f);
	}
}

int func_80(int iParam0)
{
	if (!func_68(iParam0))
	{
		return -1;
	}
	return func_87(iParam0);
}

int func_81(int iParam0)
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

int func_82(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_83(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_84(int iParam0, int iParam1)
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

bool func_85(int iParam0, int iParam1)
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
	if (!func_83(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(iVar1);
}

void func_86(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_87(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_88(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_88(int iParam0)
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

