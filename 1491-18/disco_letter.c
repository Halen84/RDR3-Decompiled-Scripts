#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	struct<26> /*208*/ sLocal_5 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __SCRIPT()
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
	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(sLocal_5.f_0))
	{
		iLocal_0 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_5.f_18)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(sLocal_5.f_18)))
		{
			if (func_12())
			{
				func_13(0);
			}
		}
		return;
	}
	switch (func_14())
	{
		case 0:
			if (func_15())
			{
				sLocal_5.f_7 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(sLocal_5.f_0);
				strcpy_s(&(sLocal_5.f_1), 32, "LETTER" /* GXTEntry: "Letter" */);
				sLocal_5.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(sLocal_5.f_0, false);
				sLocal_5.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(sLocal_5.f_6, &(sLocal_5.f_1));
				sLocal_5.f_8.f_1 = sLocal_5.f_6;
				sLocal_5.f_8 = sLocal_5.f_5;
				sLocal_5.f_8.f_3 = 1;
				sLocal_5.f_8.f_5 = 1;
				sLocal_5.f_22 = (1 << 10);
				func_16();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(sLocal_5.f_18));
				func_13(1);
				func_16();
			}
			func_17(2);
			break;
		case 2:
			if (func_15())
			{
				func_16();
			}
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(sLocal_5.f_18)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(sLocal_5.f_0, 0))
			{
				sLocal_5.f_23 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(sLocal_5.f_18), &(sLocal_5.f_8), 10, sLocal_5.f_22);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(sLocal_5.f_18));
				func_17(3);
			}
			break;
		case 3:
			if (func_15())
			{
				func_16();
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(sLocal_5.f_0))
			{
				iLocal_0 = 0;
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

bool func_12()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_13(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_14()
{
	return sLocal_5.f_25;
}

bool func_15()
{
	return sLocal_5.f_24;
}

void func_16()
{
	sLocal_5.f_24 = 0;
}

void func_17(int iParam0)
{
	sLocal_5.f_25 = iParam0;
	func_21();
}

void func_18(int iParam0)
{
	sLocal_5.f_0 = iParam0->f_1;
}

void func_19(int iParam0)
{
}

void func_20(int iParam0)
{
}

void func_21()
{
	sLocal_5.f_24 = 1;
}

