void __SCRIPT()
{
	bool bVar0;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::GAME_FRAMEWORK_MANAGER_INIT(-1329374618);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM();
	BUILTIN::WAIT(1000);
	if (!REPLAY::IS_VIDEO_EDITOR_RUNNING())
	{
		if (REPLAY::OPEN_VIDEO_EDITOR())
		{
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1();
		func_2();
	}
	while (bVar0)
	{
		bVar0 = REPLAY::IS_VIDEO_EDITOR_RUNNING();
		if (!bVar0)
		{
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	func_2();
	if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
	{
		REPLAY::CLOSE_VIDEO_EDITOR(1);
	}
	MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	func_3(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	struct<19> /*152*/ sVar0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_152)))
	{
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_152));
	}
	sVar0.f_5 = 2;
	sVar0.f_12 = -1;
	sVar0.f_17 = -1;
	Global_1572887.f_152 = { sVar0 /*19*/ };
}

void func_2()
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887.f_94.f_41 = 0;
	if (Global_1572887.f_94.f_53 == 2)
	{
		Global_1572887.f_94.f_53 = 0;
	}
}

void func_3(int iParam0)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, -1);
	}
	func_8(4);
	func_9(1);
}

void func_4()
{
	Global_1572887.f_94.f_40 = MISC::GET_GAME_TIMER();
}

void func_5(int iParam0)
{
	Global_1572887.f_94.f_1 = iParam0;
}

void func_6(int iParam0)
{
	Global_1572887.f_94 = iParam0;
}

void func_7(int iParam0, int iParam1)
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
}

void func_8(int iParam0)
{
	Global_1572864.f_3 |= iParam0;
}

void func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

