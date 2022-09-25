#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
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
	var uLocal_39 = 4;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	Vector3 vLocal_49[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	int iLocal_59 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
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
	int iVar0;

	iLocal_0 = 0;
	return;
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (func_12(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!func_12(3))
			{
				func_13(1);
				func_14();
				func_15(3);
			}
		}
	}
	switch (iLocal_6)
	{
		case 0:
			vLocal_49[0 /*3*/] = { func_16() /*3*/ };
			vLocal_49[1 /*3*/] = { func_17() /*3*/ };
			vLocal_49[2 /*3*/] = { func_18() /*3*/ };
			func_19(Global_35, &vLocal_49, &iVar0);
			iLocal_59 = func_20(iVar0);
			func_15(1);
			break;
		case 1:
			if (!func_21(&uLocal_7))
			{
				OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iLocal_59, true);
				func_22(&uLocal_7, 0);
			}
			else if (func_23(&uLocal_7, 3.0f))
			{
				func_24(&uLocal_7);
				func_25(1);
				func_15(2);
			}
			break;
		case 2:
			if (!func_26())
			{
				return;
			}
			func_27(&uLocal_10, 1, 1, 0, 0);
			if (func_23(&uLocal_7, 3.5f))
			{
				func_14();
				func_13(1);
				func_15(3);
			}
			break;
		case 3:
			break;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iLocal_59, false);
		iLocal_0 = 0;
	}
}

void func_7()
{
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
		func_28(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_29(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_30(&iVar0);
	}
}

bool func_12(int iParam0)
{
	return iLocal_5 & iParam0 != 0;
}

void func_13(int iParam0)
{
	if (!func_12(iParam0))
	{
		return;
	}
	iParam0 -= iParam0 & iParam0;
}

void func_14()
{
	func_31(&uLocal_10);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
	OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iLocal_59, false);
	func_25(3);
}

void func_15(int iParam0)
{
	iLocal_6 = iParam0;
}

Vector3 func_16()
{
	return { 2710.57f, -1291.2f, 48.63f };
}

Vector3 func_17()
{
	return { -290.86f, 813.36f, 118.42f };
}

Vector3 func_18()
{
	return { -281.07f, 815.24f, 118.42f };
}

Vector3 func_19(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;

	iVar5 = *uParam1;
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		*uParam2 = iVar0;
		fVar6 = func_32(iParam0, *(uParam1[iVar0 /*3*/]), 1);
		if (func_33(*(uParam1[iVar0 /*3*/])))
		{
		}
		else if (iVar0 == 0)
		{
			fVar4 = fVar6;
			vVar1 = { *(uParam1[iVar0 /*3*/]) /*3*/ };
		}
		else if (fVar4 > fVar6)
		{
			vVar1 = { *(uParam1[iVar0 /*3*/]) /*3*/ };
		}
		iVar0++;
	}
	return vVar1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOOR_NEW_GUNSHOP_INT_BACK");
		case 1:
			return joaat("DOOR_VAL_DOC_BACK_RM");
		case 2:
			return joaat("DOOR_VAL_DOC_BACK");
		default:
			break;
	}
	return 0;
}

bool func_21(var uParam0)
{
	return func_34(*uParam0, 1);
}

void func_22(var uParam0, bool bParam1)
{
	if (bParam1 || !func_21(uParam0))
	{
		func_24(uParam0);
	}
}

bool func_23(var uParam0, float fParam1)
{
	if (!func_21(uParam0))
	{
		return false;
	}
	if (func_35(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_24(var uParam0)
{
	func_36(uParam0, 0.0f);
}

void func_25(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	iLocal_5 |= iParam0;
}

bool func_26()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	float fVar7;

	if (!func_37(iLocal_59))
	{
		return false;
	}
	iVar0 = func_38(iLocal_59, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, func_39()) /*3*/ };
	if (func_33(vVar1))
	{
		return false;
	}
	vVar4 = { func_40() /*3*/ };
	switch (iLocal_59)
	{
		case joaat("DOOR_NEW_GUNSHOP_INT_BACK"):
			fVar7 = 115.0f;
			break;
		case joaat("DOOR_VAL_DOC_BACK_RM"):
			fVar7 = 10.0f;
			break;
		case joaat("DOOR_VAL_DOC_BACK"):
			fVar7 = 100.0f;
			break;
	}
	fVar7 += vVar4.z;
	func_41(&uLocal_10, vVar1, vVar4.x, vVar4.y, fVar7, 35.0f, 20, 10, 1077936128, 1101004800, 1, 0, 0.24f, 0, 0, 1044549468);
	func_25(2);
	return true;
}

void func_27(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	Vector3 vVar2;

	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127.0f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127.0f));
	}
	else
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127.0f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127.0f));
	}
	if (uParam0->f_29[2] != 0 || uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == uParam0->f_29[2] && uParam0->f_35 == uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = uParam0->f_29[2];
		uParam0->f_35 = uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[2]) / 127.0f) * (float)uParam0->f_25);
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / (float)uParam0->f_25);
		if (PAD::IS_LOOK_INVERTED())
		{
			uParam0->f_13 = ((BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127.0f) * (float)uParam0->f_26);
		}
		else
		{
			uParam0->f_13 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127.0f) * (float)uParam0->f_26);
		}
	}
	else
	{
		uParam0->f_13 = { 0.0f, 0.0f, 0.0f /*3*/ };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30.0f * BUILTIN::TIMESTEP());
	if (!func_42(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 += MISC::GET_FRAME_TIME();
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_43(uParam0->f_1, uParam0->f_8, fVar1) /*3*/ };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 /*3*/ };
	uParam0->f_19 += func_44((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3.0f, 3.0f);
	uParam0->f_19.f_1 += func_44((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3.0f, 3.0f);
	uParam0->f_19.f_2 += func_44((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3.0f, 3.0f);
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_44(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_44(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_44(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (BUILTIN::TO_FLOAT(uParam0->f_29[1]) < 0.0f)
			{
				uParam0->f_22 += (float)BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128.0f) * uParam0->f_24));
			}
		}
		else
		{
			uParam0->f_22 += (float)BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128.0f) * uParam0->f_24));
		}
	}
	uParam0->f_23 += (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

void func_28(int iParam0)
{
}

void func_29(int iParam0)
{
}

void func_30(int iParam0)
{
}

void func_31(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_7 = 0.0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0.0f;
	uParam0->f_8 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_11 = 0.0f;
	uParam0->f_12 = 0.0f;
	uParam0->f_13 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_16 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_22 = 0.0f;
	uParam0->f_23 = 0.0f;
}

float func_32(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_33(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_34(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_35(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_45(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_46() - uParam0->f_1);
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_46() - fParam1);
	func_47(uParam0, 1);
	func_48(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_37(int iParam0)
{
	return iParam0 != 0;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_49(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

Vector3 func_39()
{
	return { 0.585564f, 0.325876f, 1.6871f };
}

Vector3 func_40()
{
	return { -7.766f, 0.0f, 175.2488f };
}

void func_41(var uParam0, Vector3 vParam1, Vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 /*3*/ };
	uParam0->f_4 = { vParam4 /*3*/ };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = iParam10;
	uParam0->f_8 = { vParam1 /*3*/ };
	uParam0->f_11 = 1.0f;
	uParam0->f_12 = 0.0f;
	uParam0->f_13 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_16 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = fParam12;
	uParam0->f_24 = iParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0.0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_42(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_43(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return FloatToVector((1.0f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

bool func_45(var uParam0)
{
	return func_34(*uParam0, 2);
}

float func_46()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_48(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;

	func_50(iParam0, 0, 0);
	if (func_51(iParam0))
	{
		iVar0 = ENTITY::_GET_ENTITY_BY_DOORHASH(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

bool func_51(int iParam0)
{
	if (func_37(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

