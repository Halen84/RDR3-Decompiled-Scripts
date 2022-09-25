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
	int iLocal_16 = 0;
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
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (func_3(4, func_2(4), &uLocal_17, iLocal_15))
		{
			func_1();
		}
		switch (iLocal_14)
		{
			case 0:
				func_4(&uLocal_17);
				func_5(1);
				break;
			case 1:
				func_5(2);
				break;
			case 2:
				if (func_6())
				{
					if (!func_7(4, (1 << 29)))
					{
						func_8(4, (1 << 29), 1);
						func_5(3);
					}
				}
				break;
			case 3:
				if (func_9())
				{
					func_5(4);
				}
				break;
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_15);
	}
	func_10(&uLocal_17);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

bool func_3(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_11(0) == 1 || func_11(0) == 2) || func_11(0) == 8) || func_12(Global_1935630, (1 << 11)))
			{
				func_13(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_11(0) == 11)
			{
				func_13(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_11(0) == 6)
			{
				func_13(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_13(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_14(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_14(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_15();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_14(iVar2) > func_14(iVar1))
				{
					if (func_14(iVar0) > func_14(iVar2) + 1 || func_14(iVar0) < func_14(iVar1))
					{
						func_13(uParam2, 32);
					}
				}
				else if (func_14(iVar0) > func_14(iVar2) + 1 && func_14(iVar0) < func_14(iVar1))
				{
					func_13(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_16(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_16(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_17(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_17(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_18(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_13(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_19(&iParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) | func_20(&iParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, (1 << 11)))
				{
					if (!func_21(&(uParam2->f_13)))
					{
						func_22(&(uParam2->f_13), 0.0f);
					}
					else if (func_23(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_24(&(uParam2->f_13));
						func_13(uParam2, (1 << 9));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_21(&(uParam2->f_13)))
					{
						func_24(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_25())
			{
				func_13(uParam2, (1 << 10));
			}
		}
		if (uParam2->f_10)
		{
			if (func_26())
			{
				func_13(uParam2, (1 << 11));
			}
		}
		if (func_12(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_13(uParam2, 128);
		}
		if (func_27(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_13(uParam2, 256);
		}
	}
	if ((((((((((func_28(*uParam2, 2) || func_28(*uParam2, 4)) || func_28(*uParam2, 8)) || func_28(*uParam2, 16)) || func_28(*uParam2, 32)) || func_28(*uParam2, 64)) || func_28(*uParam2, 128)) || func_28(*uParam2, 256)) || func_28(*uParam2, (1 << 9))) || func_28(*uParam2, (1 << 10))) || func_28(*uParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

void func_4(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_5(int iParam0)
{
	iLocal_14 = iParam0;
}

bool func_6()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
	{
		return false;
	}
	if (PED::_GET_ACTIVE_ANIMAL_OWNER(PED::GET_MOUNT(Global_35)) == Global_35)
	{
		return false;
	}
	if (func_29(PED::GET_MOUNT(Global_35), joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		iLocal_15 = PED::GET_MOUNT(Global_35);
		iLocal_16 = MISC::GET_GAME_TIMER() + 2000;
		return false;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_16)
	{
		return false;
	}
	TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(Global_35), 2, 0, 0);
	return true;
}

bool func_7(int iParam0, int iParam1)
{
	return func_30(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_31(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
	else
	{
		func_32(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
}

bool func_9()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		return false;
	}
	if (func_29(PED::GET_MOUNT(Global_35), joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (func_29(iLocal_15, joaat("SCRIPT_TASK_FLEE")))
	{
		return true;
	}
	PED::_0xBCC76708E5677E1D(iLocal_15, false);
	TASK::TASK_FLEE_PED(iLocal_15, Global_35, 3, 0, -1.0f, -1, 0);
	return false;
}

void func_10(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_20);
	}
	if (func_21(&(uParam0->f_13)))
	{
		func_24(&(uParam0->f_13));
	}
}

int func_11(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_12(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_13(var uParam0, int iParam1)
{
	func_33(uParam0, iParam1);
}

int func_14(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_15()
{
	return Global_1899515;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_34(Global_1835011[iParam0 /*74*/].f_1);
}

int func_17(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_35(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_18(int iParam0)
{
	int iVar0;

	iVar0 = func_36();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("HIGHPRESSURE"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("OVERCAST"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("SNOWLIGHT"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("SHOWER"):
				case joaat("SNOW"):
				case joaat("HIGHPRESSURE"):
				case joaat("SLEET"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("RAIN"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case joaat("FOG"):
				case joaat("MISTY"):
					return true;
			}
			break;
	}
	return false;
}

int func_19(int iParam0, var uParam1, float fParam2, var uParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_37(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) /*3*/ };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) /*3*/ };
	if (!func_38(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1.0f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) /*3*/ };
		if (!func_39(iVar1, 0))
		{
			func_40(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

bool func_21(var uParam0)
{
	return func_41(*uParam0, 1);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_42() - fParam1);
	func_43(uParam0, 1);
	func_44(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_23(var uParam0)
{
	if (!func_21(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_45(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_46() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_25()
{
	return Global_1392040.f_6;
}

bool func_26()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_27(var uParam0, int iParam1)
{
	return func_30(*uParam0, iParam1);
}

bool func_28(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_29(int iParam0, int iParam1)
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

bool func_30(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_33(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_34(int iParam0)
{
	int iVar0;

	iVar0 = func_47(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_35(int iParam0)
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
		iVar0 = func_48(iParam0);
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

int func_36()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_37(var uParam0, Vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_38(var uParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_49(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_39(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_40(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_29(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

bool func_41(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_42()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_45(var uParam0)
{
	return func_41(*uParam0, 2);
}

int func_46()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_47(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_48(iParam0);
}

int func_48(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_51(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_49(int iParam0, int iParam1, bool bParam2)
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

bool func_50(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_51(int iParam0)
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

