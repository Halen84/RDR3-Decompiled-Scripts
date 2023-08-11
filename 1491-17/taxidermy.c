#pragma region Local_Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	Vector3 vLocal_5 = { 0.0f, 0.0f, 0.0f };
	int iLocal_8 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	iLocal_8 = sScriptParam_0.f_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
	{
		func_2(&uLocal_3);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_2(&uLocal_3);
	}
	vLocal_5 = { TASK::_GET_SCENARIO_POINT_COORDS(sScriptParam_0.f_1, true) /*3*/ };
	while (func_3())
	{
		if (func_4())
		{
			func_2(&uLocal_3);
		}
		if (func_5(0, 0, 1))
		{
			func_2(&uLocal_3);
		}
		else if (func_6(&uLocal_3))
		{
		}
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_3);
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
	SCRIPTS::_0xE7282390542F570D(iLocal_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&uLocal_3);
		return false;
	}
	return true;
}

bool func_4()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	return false;
}

bool func_5(int iParam0, bool bParam1, bool bParam2)
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
		if (func_7())
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
		iVar0 = func_8(Global_1898164.f_1[0 /*5*/]);
		if (func_9(iVar0) && func_10(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_11(Global_1898164.f_1[0 /*5*/]))
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

bool func_6(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_13(uParam0);
			}
			else
			{
				uParam0->f_1 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_PICKUP_OBJECT"), vLocal_5);
				func_13(uParam0);
			}
			func_14(uParam0, 1);
			break;
		case 1:
			if (func_15(Global_35, vLocal_5, 0) < 25.0f)
			{
				func_14(uParam0, 2);
			}
			break;
		case 2:
			break;
	}
	return false;
}

bool func_7()
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

int func_8(int iParam0)
{
	if (!func_11(iParam0))
	{
		return -1;
	}
	return func_17(func_16(iParam0));
}

bool func_9(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_10(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_11(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_12(var uParam0)
{
	return *uParam0;
}

void func_13(var uParam0)
{
	MAP::SET_BLIP_SPRITE(uParam0->f_1, joaat("BLIP_TAXIDERMIST"), true);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_15(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_16(int iParam0)
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

int func_17(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

