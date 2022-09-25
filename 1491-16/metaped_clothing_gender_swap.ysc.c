void __EntryFunction__()
{
	func_1(-1);
	func_2();
}

void func_1(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

void func_2()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

