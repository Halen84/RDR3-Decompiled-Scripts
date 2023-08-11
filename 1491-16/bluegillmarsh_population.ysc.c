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
#pragma endregion

void __SCRIPT()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_1();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		BUILTIN::WAIT(0);
	}
	func_3();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_3();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCanebreakManor_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 2482.625f, -400.4976f, 45.0f, 0.0f, 0.0f, 34f, 25.0f, 35.0f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 2493.368f, -424.8734f, 45.0f, 0.0f, 0.0f, 34f, 25.0f, 22.5f, 30.0f);
	func_4(iLocal_14, 0, 0, 0);
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquatic_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 2212.785f, -513.7505f, 42.64256f, 0.0f, 0.0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 2123.317f, -450.1633f, 42.35445f, 0.0f, 0.0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 2079.136f, -508.0375f, 40.54353f, 0.0f, 0.0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 2072.09f, -541.5287f, 41.15696f, 0.0f, 0.0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	func_5(iLocal_15, 0);
}

void func_3()
{
}

void func_4(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_6(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_5(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, iParam0);
	}
}

void func_6(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

