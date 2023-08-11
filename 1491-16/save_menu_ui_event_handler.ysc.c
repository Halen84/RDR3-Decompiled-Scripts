#pragma region Local_Variables
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
					case joaat("ITEM_SELECTED_ACTION_SUCCEEDED"):
						if (vVar0.z == joaat("SAVE_COMPLETE"))
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
	SCRIPTS::TERMINATE_THIS_THREAD();
}

