#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9[4] = { 0, 0, 0, 0 };
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	Vector3 vLocal_19 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_22 = { 0.0f, 0.0f, 0.0f };
	int iLocal_25 = 0;
	Vector3 vLocal_26 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_29 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_32 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_35 = false;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __SCRIPT()
{
	iLocal_0 = 1;
	iLocal_16 = 20;
	iLocal_17 = 10;
	iLocal_18 = 3;
	vLocal_19 = { -287.356f, 818.9039f, 119.8698f /*3*/ };
	vLocal_22 = { -13.3335f, 0.0591f, -170.8708f /*3*/ };
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
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (func_12(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!func_12(2))
			{
				func_13();
			}
		}
	}
	func_14();
	switch (iLocal_6)
	{
		case 0:
			iLocal_7 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -287.0813f, 818.8734f, 119.85f, -11.269f, 0.0f, -171.0697f, 50.0f, false, 2);
			func_15(1);
			func_16(1);
			break;
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.0f)
			{
				return;
			}
			CAM::SET_CAM_ACTIVE(iLocal_7, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, 4000, true, false, 0);
			func_16(2);
			break;
		case 2:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_7))
			{
				return;
			}
			iLocal_8 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_19, vLocal_22, 40.0f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_8, iLocal_7, 4000, 3, 1);
			CAM::DESTROY_CAM(iLocal_7, false);
			func_16(3);
			break;
		case 3:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_8))
			{
				return;
			}
			func_16(4);
			break;
		case 4:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				if (!TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
				{
					func_17(&iLocal_8, 1);
				}
				else
				{
					func_16(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_7()
{
	CAM::DESTROY_CAM(iLocal_7, false);
	CAM::DESTROY_CAM(iLocal_8, false);
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
		func_18(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_20(&iVar0);
	}
}

bool func_12(int iParam0)
{
	return (iLocal_5 & iParam0) != 0;
}

void func_13()
{
	if (func_12(2))
	{
		return;
	}
	func_21();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	func_22(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
	CAM::DESTROY_CAM(iLocal_8, false);
	func_15(2);
}

void func_14()
{
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		if (TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
		{
			func_13();
		}
		return;
	}
	if (!func_12(2))
	{
		func_13();
	}
	else if (CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
	{
		func_21();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		iLocal_0 = 0;
	}
}

void func_15(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	iLocal_5 |= iParam0;
}

void func_16(int iParam0)
{
	iLocal_6 = iParam0;
}

void func_17(int iParam0, bool bParam1)
{
	float fVar0;
	Vector3 vVar1;

	func_23(&(uLocal_9[0]), &(uLocal_9[1]), &(uLocal_9[2]), &(uLocal_9[3]), joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (iLocal_14 == uLocal_9[2] && iLocal_15 == uLocal_9[3])
	{
		if (iLocal_25 < MISC::GET_GAME_TIMER())
		{
			iLocal_14 = 0;
			iLocal_15 = 0;
		}
	}
	else
	{
		iLocal_14 = uLocal_9[2];
		iLocal_15 = uLocal_9[3];
		iLocal_25 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam1)
	{
		vLocal_26.f_2 = (-(BUILTIN::TO_FLOAT(uLocal_9[2]) / 127.0f) * (float)iLocal_16);
		vLocal_26.f_1 = ((-vLocal_26.z * (float)iLocal_18) / (float)iLocal_16);
		if (PAD::IS_LOOK_INVERTED())
		{
			vLocal_26.x = ((BUILTIN::TO_FLOAT(uLocal_9[3]) / 127.0f) * (float)iLocal_17);
		}
		else
		{
			vLocal_26.x = (-(BUILTIN::TO_FLOAT(uLocal_9[3]) / 127.0f) * (float)iLocal_17);
		}
	}
	else
	{
		vLocal_26 = { 0.0f, 0.0f, 0.0f /*3*/ };
		iLocal_14 = 0;
		iLocal_15 = 0;
	}
	fVar0 = (30.0f * BUILTIN::TIMESTEP());
	vVar1 = { vLocal_26 + vLocal_32 /*3*/ };
	vLocal_29.x += func_24((((vVar1.x - vLocal_29.x) * 0.05f) * fVar0), -3.0f, 3.0f);
	vLocal_29.f_1 = (vLocal_29.y + func_24((((vVar1.y - vLocal_29.y) * 0.05f) * fVar0), -3.0f, 3.0f));
	vLocal_29.f_2 = (vLocal_29.z + func_24((((vVar1.z - vLocal_29.z) * 0.05f) * fVar0), -3.0f, 3.0f));
	if (bLocal_35)
	{
		vLocal_29.x = func_24(vLocal_29.x, BUILTIN::TO_FLOAT(-iLocal_17), BUILTIN::TO_FLOAT(iLocal_17));
		vLocal_29.f_1 = func_24(vLocal_29.y, BUILTIN::TO_FLOAT(-iLocal_18), BUILTIN::TO_FLOAT(iLocal_18));
		vLocal_29.f_2 = func_24(vLocal_29.z, BUILTIN::TO_FLOAT(-iLocal_16), BUILTIN::TO_FLOAT(iLocal_16));
	}
	CAM::SET_CAM_PARAMS(*iParam0, vLocal_19, vLocal_22 + vLocal_29, 40.0f, 0, 1, 1, 2, 1, 0);
}

void func_18(int iParam0)
{
}

void func_19(int iParam0)
{
}

void func_20(int iParam0)
{
}

void func_21()
{
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
}

void func_22(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1.0f);
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127.0f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127.0f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127.0f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127.0f));
}

float func_24(float fParam0, float fParam1, float fParam2)
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

