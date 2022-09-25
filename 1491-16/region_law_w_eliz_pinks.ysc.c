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
	struct<4> /*32*/ sLocal_15 = { 0, 0, 0, 0 } ;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	Vector3 vLocal_24 = { 0.0f, 0.0f, 0.0f };
	float fLocal_27 = 0.0f;
	float fLocal_28 = 0.0f;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	int iLocal_35[3] = { 0, 0, 0 };
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_51[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_59 = 0;
	var uScriptParam_0 = 0;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_14 = 1;
	iLocal_31 = 10;
	iLocal_34 = joaat("S_M_M_PINLAW_01");
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while ((((!func_2(PLAYER::PLAYER_ID(), 0, 0, 1) && func_3()) && !func_4()) && !func_5(13)) && func_6())
	{
		func_7();
		BUILTIN::WAIT(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;

	bLocal_32 = false;
	bLocal_33 = false;
	iLocal_30 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_43)
	{
		if (func_8(iLocal_43[iVar0], 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43[iVar0], -1728.259f, -2578.3f, 64.1206f, 1.75f, 20000, 0.25f, 4, 40000.0f);
			if (bParam0)
			{
				func_9(&(iLocal_43[iVar0]), 1, 1, 1);
				func_9(&(iLocal_51[iVar0]), 1, 1, 1);
			}
			else
			{
				if ((func_10(Global_35, iLocal_43[iVar0], 1, 1) > 20.0f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_43[iVar0]) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_43[iVar0]))) || CAM::IS_SCREEN_FADED_OUT())
				{
					func_11(&(iLocal_43[iVar0]));
				}
				else
				{
					func_9(&(iLocal_43[iVar0]), 1, 1, 1);
				}
				if ((func_10(Global_35, iLocal_51[iVar0], 1, 1) > 20.0f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_51[iVar0]) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_51[iVar0]))) || CAM::IS_SCREEN_FADED_OUT())
				{
					func_11(&(iLocal_51[iVar0]));
				}
				else
				{
					func_9(&(iLocal_51[iVar0]), 1, 1, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_12(bParam1, bParam2, bParam3);
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

bool func_3()
{
	if (func_14(func_13(), 1))
	{
		return true;
	}
	if (func_16(func_15(), 1))
	{
		return true;
	}
	if (func_18(func_17()))
	{
		return true;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1934266.f_151))
	{
		if (func_19())
		{
			return true;
		}
	}
	return false;
}

bool func_4()
{
	if (func_20() == -1)
	{
		if (func_21() || func_22())
		{
			return true;
		}
	}
	else if (func_23(1, 255))
	{
		return true;
	}
	return false;
}

bool func_5(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_24(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_6()
{
	if (Global_1934266.f_56)
	{
		return false;
	}
	return true;
}

void func_7()
{
	bool bVar0;
	bool bVar1;
	Vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	Vector3 vVar13;
	float fVar16;
	Vector3 vVar17;
	int iVar20;
	int iVar21;
	int iVar22;

	bVar0 = func_25(Global_35, iLocal_39, 1, 0);
	if (bVar0)
	{
		fLocal_27 = 250.0f;
		fLocal_28 = 150.0f;
		if (iLocal_14 > 2 && iLocal_14 != 0)
		{
			iLocal_14 = 0;
		}
	}
	else
	{
		fLocal_27 = 120.0f;
		fLocal_28 = 110.0f;
		if (iLocal_14 == 0)
		{
			iLocal_14 = 3;
		}
	}
	switch (iLocal_14)
	{
		case 1:
			func_26(&uLocal_40);
			iLocal_35[0] = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
			iLocal_35[1] = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
			iLocal_35[2] = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
			iLocal_29 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7);
			PED::_RESERVE_AMBIENT_PEDS(14);
			if (!func_27(120))
			{
				func_28(120, 0);
			}
			iLocal_14 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_34, false);
			STREAMING::REQUEST_MODEL(iLocal_35[0], false);
			STREAMING::REQUEST_MODEL(iLocal_35[1], false);
			STREAMING::REQUEST_MODEL(iLocal_35[2], false);
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_34) && STREAMING::HAS_MODEL_LOADED(iLocal_35[0])) && STREAMING::HAS_MODEL_LOADED(iLocal_35[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_35[2])) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY()) && func_29(&uLocal_40) > (float)iLocal_31)
			{
				if (func_30(13))
				{
					iLocal_39 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_39, -846.6119f, -1065.891f, 54.10397f, 0.0f, 0.0f, 12.2577f, 134.1237f, 68.95397f, 53.79238f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_39, -957.0787f, -1000.424f, 57.02654f, 0.0f, 0.0f, 47.19107f, 141.1471f, 213.5969f, 75.77352f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_39, -1165.555f, -1038.077f, 70.67178f, 0.0f, 0.0f, 12.46235f, 390.3466f, 336.1672f, 80.72659f);
					iLocal_31 = 20;
				}
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (bVar0)
			{
				if (func_31())
				{
					vVar2 = { -1048.537f, -1182.096f, 58.1195f /*3*/ };
				}
				else
				{
					vVar2 = { -1049.912f, -962.8728f, 61.4584f /*3*/ };
				}
			}
			else
			{
				vVar2 = { Global_36 /*3*/ };
			}
			fVar7 = func_29(&uLocal_40);
			if (fVar7 < 30.0f)
			{
				fVar6 = 90.0f;
			}
			else if (fVar7 < 110.0f)
			{
				fVar6 = 80.0f;
			}
			else
			{
				fVar6 = 70.0f;
			}
			if (func_30(13))
			{
				fVar5 = 180.0f;
			}
			else
			{
				fVar5 = 45.0f;
			}
			if (func_32(vVar2, &sLocal_15, &bVar1, 47, 1, fVar5, 1101004800, fVar6, (fLocal_27 - 10.0f), 0))
			{
				if (((!func_33(sLocal_15.f_3, 0, 0, 0) && !func_34(iLocal_39, sLocal_15.f_3)) && (func_35(sLocal_15.f_3) == 4 || func_35(sLocal_15.f_3) == 12)) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(sLocal_15.f_3, 0, &(sLocal_15.f_3.f_2)) != 1)
				{
					bVar9 = WATER::GET_WATER_HEIGHT(Global_36, &fVar8);
					if ((bVar9 && fVar8 < 0.3f) || !bVar9)
					{
						vLocal_24 = { sLocal_15.f_3 /*3*/ };
						iLocal_14 = 4;
					}
				}
				func_36(&sLocal_15, 1, 0);
			}
			else if (bVar1)
			{
				func_36(&sLocal_15, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_32 && !bLocal_33)
			{
				func_37();
			}
			else if (bLocal_32 && !bLocal_33)
			{
				func_38(MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
			}
			else
			{
				iVar11 = 0;
				while (iVar11 < iLocal_43)
				{
					func_39(iVar11);
					func_40(iLocal_43[iVar11], iLocal_51[iVar11], 0, -1, 1);
					bVar12 = false;
					if (iVar11 == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_59))
						{
							iLocal_59 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_59, 9);
						}
						bVar12 = true;
					}
					if (func_8(iLocal_43[iVar11], 0))
					{
						if (func_29(&uLocal_40) < fLocal_28 || bVar0)
						{
							if (bVar0)
							{
								vVar13 = { func_41(-1124.641f, -1140.979f, 63.6238f, 30.0f, 10.0f) /*3*/ };
							}
							else
							{
								fVar16 = 25.0f;
								vVar17 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_36, MISC::GET_RANDOM_FLOAT_IN_RANGE(-80.0f, 80.0f), 0.0f, fVar16, 0.0f) /*3*/ };
								vVar13 = { func_41(vVar17, (fVar16 - 10.0f), 10.0f) /*3*/ };
							}
							func_42(&vVar13, 50, 10, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar10);
							TASK::OPEN_SEQUENCE_TASK(&iVar10);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar13, 2.5f, -1, 0.25f, 0, 40000.0f);
							TASK::TASK_STAND_STILL(0, 3000);
							TASK::CLOSE_SEQUENCE_TASK(iVar10);
							TASK::TASK_POLICE(iLocal_43[iVar11], true);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_43[iVar11], iVar10);
						}
						else if (func_8(Global_35, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_43[iVar11], Global_35, 0, 0);
						}
						func_43(&(iLocal_43[iVar11]), &iLocal_59, bVar12, 1, 1, 1, 0);
					}
					iVar11++;
				}
				iLocal_14 = 5;
			}
			break;
		case 5:
			iVar22 = 0;
			while (iVar22 < iLocal_43)
			{
				if (func_8(iLocal_43[iVar22], 0))
				{
					if (func_10(Global_35, iLocal_43[iVar22], 1, 1) > (fLocal_27 + 20.0f))
					{
						iVar20++;
					}
					else
					{
						iVar21 = iLocal_43[iVar22];
					}
				}
				iVar22++;
			}
			if (iVar20 >= iLocal_29)
			{
				func_1(0);
				iLocal_14 = 3;
				return;
			}
			if (func_29(&uLocal_40) > fLocal_28 && !bVar0)
			{
				if (func_8(iVar21, 0) && func_8(Global_35, 0))
				{
					TASK::TASK_COMBAT_PED(iVar21, Global_35, 0, 0);
				}
			}
			break;
	}
}

bool func_8(int iParam0, int iParam1)
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
	if (func_44(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_44(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_44(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_44(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_9(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

float func_10(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_11(int* iParam0)
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

int func_12(bool bParam0, bool bParam1, bool bParam2)
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

int func_13()
{
	return Global_1934266.f_4;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!func_45(iParam0))
	{
		return false;
	}
	if (func_46(iParam0, 1) || (bParam1 && func_46(iParam0, 2)))
	{
		return true;
	}
	return false;
}

int func_15()
{
	return Global_1897952.f_41;
}

bool func_16(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_48(iParam0, 8))
		{
			return false;
		}
	}
	if (func_48(iParam0, 1))
	{
		return true;
	}
	return false;
}

int func_17()
{
	return Global_1894899.f_2;
}

bool func_18(int iParam0)
{
	if (!func_49(iParam0))
	{
		return false;
	}
	return func_50(iParam0, (1 << 25));
}

bool func_19()
{
	int iVar0;

	iVar0 = func_13();
	if (!func_45(iVar0))
	{
		return false;
	}
	if (func_51(Global_40.f_358[iVar0 /*12*/].f_1) || Global_40.f_358[iVar0 /*12*/].f_4 < 1.0f)
	{
		return false;
	}
	if (func_52(Global_35, Global_40.f_358[iVar0 /*12*/].f_1, (Global_40.f_358[iVar0 /*12*/].f_4 + 10.0f), 1, 1))
	{
		return true;
	}
	return false;
}

int func_20()
{
	return Global_1572887.f_12;
}

bool func_21()
{
	return func_53(Global_1935630, (1 << 12));
}

bool func_22()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_54(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_55())
	{
		return func_54(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_54(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_24(int iParam0)
{
	int iVar0;

	iVar0 = func_56(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_25(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_26(var uParam0)
{
	func_57(uParam0, 0.0f);
}

bool func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_20() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_58(iParam0, &iVar0, &iVar1);
	if (!func_59(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_60(iVar0, iVar1);
}

float func_29(var uParam0)
{
	if (!func_61(uParam0))
	{
		return 0.0f;
	}
	if (func_62(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_63() - uParam0->f_1);
}

bool func_30(int iParam0)
{
	int iVar0;

	if (!func_64(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_31()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
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
			func_65(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_66(&(iParam3->f_1), iParam5);
				if (!func_51(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_67(iParam3->f_6));
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

bool func_33(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_51(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = (1 << 14);
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_34(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

int func_35(Vector3 vParam0)
{
	return func_68(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_36(var uParam0, bool bParam1, bool bParam2)
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

void func_37()
{
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_24, 5.0f))
	{
		iLocal_43[iLocal_30] = func_69(iLocal_34, vLocal_24, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		iLocal_30++;
		if (iLocal_30 >= iLocal_29)
		{
			iLocal_30 = 0;
			bLocal_32 = true;
		}
	}
}

void func_38(int iParam0)
{
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_24, 5.0f))
	{
		iLocal_51[iLocal_30] = func_69(iLocal_35[iParam0], vLocal_24, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iLocal_51[iLocal_30], false);
		iLocal_30++;
		if (iLocal_30 >= iLocal_29)
		{
			bLocal_33 = true;
		}
	}
}

void func_39(int iParam0)
{
	if (!func_8(iLocal_43[iParam0], 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_43[iParam0], 188, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_43[iParam0], 527, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iLocal_43[iParam0], false);
	LAW::_SET_PED_LAW_BEHAVIOUR(iLocal_43[iParam0], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_43[iParam0], 27, true);
	PED::_0x712B2C2B2471B493(iLocal_43[iParam0], joaat("DISABLED"));
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_43[iParam0], false);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_43[iParam0], joaat("GROUP_SNIPER"), 100, true, false, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
}

int func_40(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

Vector3 func_41(Vector3 vParam0, float fParam3, float fParam4)
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), 0.0f /*3*/ };
	fVar3 = (fParam4 / 2.0f);
	vVar0 = { func_70(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, fParam3)) /*3*/ };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_42(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_71(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_43(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *iParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, bParam5);
	}
	PED::_0x97C475212B327666(*iParam1, bParam6);
}

bool func_44(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_45(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_46(int iParam0, int iParam1)
{
	if (!func_45(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/].f_5 & iParam1 != 0;
	}
	return Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1 != 0;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_48(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_431[iParam0] & iParam1 != 0;
	}
	return Global_1058888.f_42269[iParam0] & iParam1 != 0;
}

bool func_49(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_50(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

bool func_51(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_52(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_72(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_54(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_55()
{
	return Global_1109000.f_245;
}

int func_56(int iParam0)
{
	if (!func_73(iParam0))
	{
		return -1;
	}
	return func_74(iParam0);
}

void func_57(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_63() - fParam1);
	func_75(uParam0, 1);
	func_76(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_58(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_59(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_77(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_78(iParam0))
	{
		return false;
	}
	if (func_79(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_80(iParam0, 1)) || func_81((1 << 15)))
	{
		if (!func_80(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_82())
	{
		return false;
	}
	return true;
}

void func_60(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_61(var uParam0)
{
	return func_83(*uParam0, 1);
}

bool func_62(var uParam0)
{
	return func_83(*uParam0, 2);
}

float func_63()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_64(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_65(var uParam0, int iParam1, Vector3 vParam2, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_51(vParam2))
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(10.0f, 40.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(40.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(50.0f, 90.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(50.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(0.0f, 10.0f, 1.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(5.0f, 15.0f, 1.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(60.0f, 120.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(100.0f, 130.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(10.0f, 35.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(25.0f, 50.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(50.0f, 80.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(75.0f, 95.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_84(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_84(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_84(125.0f, 115.0f, 100.0f, iParam1));
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

void func_66(var uParam0, int iParam1)
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

Vector3 func_67(Vector3 vParam0)
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

int func_68(int iParam0)
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

int func_69(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_85(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_70(Vector3 vParam0, float fParam3)
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

bool func_71(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_72(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_73(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_74(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_86(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_77(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_78(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_80(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_80(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_80(iParam0, (1 << 16)) && !func_80(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_80(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_80(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_80(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_81(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_82()
{
	return Global_1905944.f_5694;
}

bool func_83(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_84(float fParam0, float fParam1, float fParam2, int iParam3)
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

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_87(iParam1))
		{
			func_88(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_89(iParam0, 0, 1);
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
			func_90(iParam0, 0);
			bVar0 = true;
		}
		func_91(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_86(int iParam0)
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

bool func_87(int iParam0)
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

void func_88(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_92(iParam0, iParam1))
		{
			if (func_93(iParam0, iParam1))
			{
				if (func_94(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_95(iParam0);
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

void func_89(int iParam0, int iParam1, bool bParam2)
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

void func_90(int iParam0, bool bParam1)
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

void func_91(int iParam0, int iParam1)
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

bool func_92(int iParam0, int iParam1)
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

bool func_93(int iParam0, int iParam1)
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

bool func_94(int iParam0, int iParam1)
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
	if (!func_92(iParam0, iVar0))
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

void func_95(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

