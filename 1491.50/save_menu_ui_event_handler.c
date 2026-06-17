#pragma region Statics
	int iScriptParam_0 = 0;
#pragma endregion

void __SCRIPT()
{
	Vector3 vVar0;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
	}
	while (true)
	{
		while (UIEVENTS::EVENTS_UI_IS_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iScriptParam_0, &vVar0))
			{
				switch (vVar0.x)
				{
					case -493190640:
						if (vVar0.z == 1535628899)
						{
							Global_20 = 1;
						}
						break;
				}
				UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

