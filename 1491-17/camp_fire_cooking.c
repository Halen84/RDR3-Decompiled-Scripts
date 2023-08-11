#pragma region Local_Variables
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	bool bLocal_5 = false;
	struct<8> /*64*/ sLocal_6 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __SCRIPT()
{
	bLocal_0 = true;
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
			return bLocal_0;
		}
		else
		{
			return true;
		}
	}
	return bLocal_0;
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
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		bLocal_0 = false;
	}
	if (bLocal_5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(sLocal_6.f_3))
		{
			bLocal_0 = false;
		}
		else if (PED::IS_PED_DEAD_OR_DYING(sLocal_6.f_3, true))
		{
			bLocal_0 = false;
		}
		else if (!PED::IS_PED_USING_THIS_SCENARIO(sLocal_6.f_3, iLocal_3))
		{
			bLocal_0 = false;
		}
	}
	if (!bLocal_0)
	{
		return;
	}
	switch (sLocal_6.f_7)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(sLocal_6.f_3))
			{
				sLocal_6.f_3 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				bLocal_5 = true;
			}
			else
			{
				sLocal_6.f_7 = 1;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_6.f_3, joaat("OBJECTCREATED")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(sLocal_6.f_2))
				{
					sLocal_6.f_2 = PED::_GET_PED_REGISTER_PROP(sLocal_6.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", false);
				}
				sLocal_6.f_7 = 2;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_6.f_2))
			{
				sLocal_6.f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(sLocal_6.f_2);
				OBJECT::_SET_OBJECT_BURN_LEVEL(sLocal_6.f_1, 0.0f, true);
				sLocal_6.f_7 = 3;
			}
			else
			{
				bLocal_0 = false;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_6.f_3, joaat("STARTEDCOOKING")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_6.f_2))
				{
					if (!func_12(&(sLocal_6.f_4)))
					{
						func_13(&(sLocal_6.f_4));
					}
					sLocal_6.f_7 = 4;
				}
				else
				{
					bLocal_0 = false;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_6.f_2))
			{
				sLocal_6.f_0 = func_14(&(sLocal_6.f_4));
				if (sLocal_6.f_0 > 0.0f && sLocal_6.f_0 <= 10.0f)
				{
					OBJECT::_SET_OBJECT_BURN_LEVEL(sLocal_6.f_1, (sLocal_6.f_0 / 10.0f), true);
				}
				else
				{
					bLocal_0 = false;
				}
			}
			break;
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
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_17(&iVar0);
	}
}

bool func_12(var uParam0)
{
	return func_18(*uParam0, 1);
}

void func_13(var uParam0)
{
	func_19(uParam0, 0.0f);
}

float func_14(var uParam0)
{
	if (!func_12(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_20(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_21() - uParam0->f_1);
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

bool func_18(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_19(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_21() - fParam1);
	func_22(uParam0, 1);
	func_23(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_20(var uParam0)
{
	return func_18(*uParam0, 2);
}

float func_21()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

