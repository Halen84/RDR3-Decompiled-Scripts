#pragma region Local_Variables
	bool bLocal_0 = false;
#pragma endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2();
	while (!bLocal_0)
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	bLocal_0 = false;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
}

void func_3()
{
}

