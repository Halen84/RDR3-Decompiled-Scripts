#pragma region Local_Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#pragma endregion

void __EntryFunction__()
{
	func_1(iScriptParam_0);
	uLocal_0 = uLocal_0;
	while (func_2())
	{
		BUILTIN::WAIT(0);
		uLocal_1 = uLocal_1;
	}
	func_3(iScriptParam_0);
}

void func_1(int iParam0)
{
	iParam0 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(iParam0);
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
	}
}

bool func_2()
{
	return true;
}

void func_3(int iParam0)
{
	func_4(iParam0, 4);
	func_4(iParam0, 8);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_4(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= Global_23118[iParam0 /*11*/] & iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= Global_1058888.f_40545[iParam0 /*11*/] & iParam1;
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

