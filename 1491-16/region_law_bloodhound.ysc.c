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
	var uLocal_15 = 3;
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
	struct<10> /*80*/ sLocal_41[3];
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<4> /*32*/ sLocal_76 = { 0, 0, 0, 0 } ;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	Vector3 vLocal_85 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_88 = { 0.0f, 0.0f, 0.0f };
	int iScriptParam_0 = 0;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_74 = joaat("A_C_DOGHOUND_01");
	iLocal_72 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(9);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_72))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1(0);
}

void func_1(int iParam0)
{
	int iVar0;

	MAP::REMOVE_BLIP(&(sLocal_41[iParam0 /*10*/].f_8));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_5(sLocal_41[iParam0 /*10*/].f_1[iVar0], 0))
		{
			func_6(sLocal_41[iParam0 /*10*/].f_1[iVar0]);
			func_7(&(sLocal_41[iParam0 /*10*/].f_1[iVar0]), 1, 0, 1);
		}
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(sLocal_41[iParam0 /*10*/].f_7))
	{
		PED::REMOVE_GROUP(sLocal_41[iParam0 /*10*/].f_7);
	}
}

void func_2()
{
	iLocal_73 = 1;
	PED::_RESERVE_AMBIENT_PEDS(4);
	switch (iLocal_72)
	{
		case 76:
			vLocal_85 = { -297.8979f, 783.4763f, 117.3506f /*3*/ };
			break;
		default:
			vLocal_85 = { func_8(iLocal_72, 1) /*3*/ };
			break;
	}
}

bool func_3(int iParam0)
{
	if (func_9() != -1)
	{
		return false;
	}
	if (!func_10(iParam0, 8))
	{
		return false;
	}
	if (!func_12(Global_35, func_11(iParam0), 1, 0))
	{
		return false;
	}
	if (!func_13(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	return true;
}

void func_4()
{
	int iVar0;

	switch (iLocal_73)
	{
		case 1:
			iLocal_75 = func_14(2, 2, -156825994, 1, 0, 0.0f, 0.0f, 0.0f);
			if (!STREAMING::IS_MODEL_VALID(iLocal_75))
			{
				iLocal_75 = joaat("S_M_M_AMBIENTLAWRURAL_01");
			}
			iLocal_73 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_74, false);
			STREAMING::REQUEST_MODEL(iLocal_75, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_74) && STREAMING::HAS_MODEL_LOADED(iLocal_75)) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iLocal_73 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				func_16(0);
				func_17(0);
				iLocal_73 = 5;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (sLocal_41[iVar0 /*10*/] == 1)
				{
					if (func_5(sLocal_41[iVar0 /*10*/].f_6, 0))
					{
						if (func_12(Global_35, sLocal_41[iVar0 /*10*/].f_9, 1, 0))
						{
							func_18(iVar0);
						}
					}
					else if (func_12(Global_35, sLocal_41[iVar0 /*10*/].f_9, 1, 0))
					{
						func_18(iVar0);
					}
					else
					{
						sLocal_41[iVar0 /*10*/] = 3;
					}
				}
				else if (sLocal_41[iVar0 /*10*/] == 2)
				{
					if (func_5(sLocal_41[iVar0 /*10*/].f_6, 0))
					{
						if (!PED::IS_PED_IN_COMBAT(sLocal_41[iVar0 /*10*/].f_6, 0) && !func_12(Global_35, sLocal_41[iVar0 /*10*/].f_9, 1, 0))
						{
							func_17(iVar0);
						}
					}
				}
				else if (sLocal_41[iVar0 /*10*/] == 3)
				{
					func_1(iVar0);
				}
				iVar0++;
			}
			break;
		case 6:
			break;
	}
}

bool func_5(int iParam0, int iParam1)
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
	if (func_19(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_6(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_20(&iVar0);
}

void func_7(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

Vector3 func_8(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_21(iParam0))
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

int func_9()
{
	return Global_1572887.f_12;
}

bool func_10(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

int func_11(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_12(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_22(bParam1, bParam2, bParam3);
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

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, Vector3 vParam5)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (func_24(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_24(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

bool func_15()
{
	float fVar0;
	float fVar1;
	var uVar2;

	fVar0 = 25.0f;
	fVar1 = 60.0f;
	if (!func_25(vLocal_85, &sLocal_76, &uVar2, 1, 1, 1127481344, 50.0f, fVar0, fVar1, 0))
	{
		return false;
	}
	vLocal_88 = { sLocal_76.f_3 /*3*/ };
	return true;
}

void func_16(int iParam0)
{
	Vector3 vVar0;
	int iVar3;

	if (!PED::DOES_GROUP_EXIST(sLocal_41[iParam0 /*10*/].f_7))
	{
		sLocal_41[iParam0 /*10*/].f_7 = PED::CREATE_GROUP(1);
	}
	vVar0 = { func_26(vLocal_88, 3.0f, 1.0f) /*3*/ };
	sLocal_41[iParam0 /*10*/].f_6 = func_27(iLocal_75, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 180.0f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(sLocal_41[iParam0 /*10*/].f_6, 279, true);
	PED::SET_PED_AS_GROUP_LEADER(sLocal_41[iParam0 /*10*/].f_6, sLocal_41[iParam0 /*10*/].f_7, false);
	TASK::TASK_POLICE(sLocal_41[iParam0 /*10*/].f_6, false);
	PED::SET_PED_CONFIG_FLAG(sLocal_41[iParam0 /*10*/].f_6, 188, true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		sLocal_41[iParam0 /*10*/].f_1[iVar3] = func_27(iLocal_74, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 180.0f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (func_5(sLocal_41[iParam0 /*10*/].f_1[iVar3], 0))
		{
		}
		iVar3++;
	}
}

void func_17(int iParam0)
{
	int iVar0;
	Vector3 vVar1;

	if (!func_5(sLocal_41[iParam0 /*10*/].f_6, 0))
	{
		return;
	}
	sLocal_41[iParam0 /*10*/] = 1;
	if (!VOLUME::DOES_VOLUME_EXIST(sLocal_41[iParam0 /*10*/].f_9))
	{
		sLocal_41[iParam0 /*10*/].f_9 = VOLUME::CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(sLocal_41[iParam0 /*10*/].f_6, true, false), 0.0f, 0.0f, 0.0f, 35.0f, 35.0f, 10.0f);
		PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_41[iParam0 /*10*/].f_9, sLocal_41[iParam0 /*10*/].f_6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
	if (!MAP::DOES_BLIP_EXIST(sLocal_41[iParam0 /*10*/].f_8))
	{
		sLocal_41[iParam0 /*10*/].f_8 = MAP::_BLIP_ADD_FOR_VOLUME(joaat("BLIP_STYLE_RADIUS"), sLocal_41[iParam0 /*10*/].f_9);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_5(sLocal_41[iParam0 /*10*/].f_1[iVar0], 0))
		{
			vVar1 = { (float)iVar0 + 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f), 0.0f /*3*/ };
			func_6(sLocal_41[iParam0 /*10*/].f_1[iVar0]);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(sLocal_41[iParam0 /*10*/].f_1[iVar0], sLocal_41[iParam0 /*10*/].f_6, vVar1, 2.0f, -1, 0.1f, true, true, false, false, true, false);
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;

	if (!func_5(Global_35, 0))
	{
		return;
	}
	sLocal_41[iParam0 /*10*/] = 2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_5(sLocal_41[iParam0 /*10*/].f_1[iVar0], 0))
		{
			PED::REMOVE_PED_FROM_GROUP(sLocal_41[iParam0 /*10*/].f_1[iVar0]);
			TASK::TASK_COMBAT_PED(sLocal_41[iParam0 /*10*/].f_1[iVar0], Global_35, 0, 0);
			MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), sLocal_41[iParam0 /*10*/].f_1[iVar0]);
			MAP::REMOVE_BLIP(&(sLocal_41[iParam0 /*10*/].f_8));
		}
		iVar0++;
	}
}

bool func_19(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_20(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_21(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_22(bool bParam0, bool bParam1, bool bParam2)
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

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_24(int iParam0)
{
	int iVar0;

	if (!func_23(iParam0))
	{
		return -1;
	}
	iVar0 = func_29(func_28());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

bool func_25(Vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_30(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_31(&(iParam3->f_1), iParam5);
				if (!func_32(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_33(iParam3->f_6));
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
						*iParam4 = 1;
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

Vector3 func_26(Vector3 vParam0, float fParam3, float fParam4)
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), 0.0f /*3*/ };
	fVar3 = (fParam4 / 2.0f);
	vVar0 = { func_34(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, fParam3)) /*3*/ };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_27(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_35(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_28()
{
	return Global_1894899.f_2;
}

int func_29(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

void func_30(var uParam0, int iParam1, Vector3 vParam2, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_32(vParam2))
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(10.0f, 40.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(40.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(50.0f, 90.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(50.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(0.0f, 10.0f, 1.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(5.0f, 15.0f, 1.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(60.0f, 120.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(100.0f, 130.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(10.0f, 35.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(25.0f, 50.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(50.0f, 80.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(75.0f, 95.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_36(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_36(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_36(125.0f, 115.0f, 100.0f, iParam1));
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

void func_31(var uParam0, int iParam1)
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

bool func_32(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

Vector3 func_33(Vector3 vParam0)
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

Vector3 func_34(Vector3 vParam0, float fParam3)
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

void func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_37(iParam1))
		{
			func_38(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_39(iParam0, 0, 1);
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
			func_40(iParam0, 0);
			bVar0 = true;
		}
		func_41(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_36(float fParam0, float fParam1, float fParam2, int iParam3)
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

bool func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_42(iParam0, iParam1))
		{
			if (func_43(iParam0, iParam1))
			{
				if (func_44(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_45(iParam0);
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

void func_39(int iParam0, int iParam1, bool bParam2)
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

void func_40(int iParam0, bool bParam1)
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

void func_41(int iParam0, int iParam1)
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

bool func_42(int iParam0, int iParam1)
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

bool func_43(int iParam0, int iParam1)
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

bool func_44(int iParam0, int iParam1)
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
	if (!func_42(iParam0, iVar0))
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

void func_45(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}
