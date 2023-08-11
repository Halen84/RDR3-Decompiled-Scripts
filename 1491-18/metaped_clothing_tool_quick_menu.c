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
	var uLocal_9 = 10;
	var uLocal_10 = 0;
	var uLocal_11 = -1;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = -1;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = -1;
	var uLocal_20 = -904317931;
	var uLocal_21 = 605478457;
	var uLocal_22 = 0;
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = -1;
	var uLocal_32 = -904317931;
	var uLocal_33 = 605478457;
	var uLocal_34 = 0;
	var uLocal_35 = -1;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = -1;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = -1;
	var uLocal_44 = -904317931;
	var uLocal_45 = 605478457;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = -1;
	var uLocal_53 = 0;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = -904317931;
	var uLocal_57 = 605478457;
	var uLocal_58 = 0;
	var uLocal_59 = -1;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = -1;
	var uLocal_65 = 0;
	var uLocal_66 = -1;
	var uLocal_67 = -1;
	var uLocal_68 = -904317931;
	var uLocal_69 = 605478457;
	var uLocal_70 = 0;
	var uLocal_71 = -1;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = -1;
	var uLocal_77 = 0;
	var uLocal_78 = -1;
	var uLocal_79 = -1;
	var uLocal_80 = -904317931;
	var uLocal_81 = 605478457;
	var uLocal_82 = 0;
	var uLocal_83 = -1;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = -1;
	var uLocal_89 = 0;
	var uLocal_90 = -1;
	var uLocal_91 = -1;
	var uLocal_92 = -904317931;
	var uLocal_93 = 605478457;
	var uLocal_94 = 0;
	var uLocal_95 = -1;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = -1;
	var uLocal_103 = -1;
	var uLocal_104 = -904317931;
	var uLocal_105 = 605478457;
	var uLocal_106 = 0;
	var uLocal_107 = -1;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = -1;
	var uLocal_113 = 0;
	var uLocal_114 = -1;
	var uLocal_115 = -1;
	var uLocal_116 = -904317931;
	var uLocal_117 = 605478457;
	var uLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -1;
	var uLocal_125 = 0;
	var uLocal_126 = -1;
	var uLocal_127 = -1;
	var uLocal_128 = -904317931;
	var uLocal_129 = 605478457;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_1(-1);
	bVar0 = false;
	while (!bVar0 && iLocal_131 < 3)
	{
		if (func_2() == -1)
		{
			bVar0 = func_3(1);
		}
		else
		{
			bVar0 = func_4(0, 0);
		}
		func_5(&iLocal_131, &uLocal_9);
		BUILTIN::WAIT(0);
	}
	func_6();
}

void func_1(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

int func_2()
{
	return Global_1572887.f_12;
}

int func_3(bool bParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	return 0;
}

int func_4(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_11)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == joaat("EVENT_NETWORK_NETWORK_BAIL"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_5(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 0:
			(uParam1[0 /*12*/])->f_1.f_2 = 1;
			(uParam1[0 /*12*/])->f_1.f_1 = 1;
			func_7(iParam0, 1);
			break;
		case 1:
			func_7(iParam0, 2);
			break;
		case 2:
			if (iParam0->f_4)
			{
				func_7(iParam0, 3);
			}
			break;
		case 3:
			break;
	}
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

