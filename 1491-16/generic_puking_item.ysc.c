void __EntryFunction__()
{
	var uVar0;
	int iVar3;
	var uVar4;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
	}
	iVar3 = 0;
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*iParam0 < 5)
	{
		if (((func_2() || (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, *uParam1))) || !func_3()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return true;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				func_4(uParam3, 0);
			}
			if (func_5(uParam3) && func_6(uParam3) > 2.0f)
			{
				func_7(iParam0, 1);
				func_8(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_7(iParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_7(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_7(iParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_7(iParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_2()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_3()
{
	return func_9(1);
}

void func_4(var uParam0, bool bParam1)
{
	if (bParam1 || !func_5(uParam0))
	{
		func_10(uParam0);
	}
}

bool func_5(var uParam0)
{
	return func_11(*uParam0, 1);
}

float func_6(var uParam0)
{
	if (!func_5(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_12(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_13() - uParam0->f_1);
}

void func_7(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_9(int iParam0)
{
	return func_14(iParam0);
}

void func_10(var uParam0)
{
	func_15(uParam0, 0.0f);
}

bool func_11(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_12(var uParam0)
{
	return func_11(*uParam0, 2);
}

float func_13()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_14(int iParam0)
{
	return func_16(Global_1935496.f_27, iParam0);
}

void func_15(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13() - fParam1);
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_16(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

