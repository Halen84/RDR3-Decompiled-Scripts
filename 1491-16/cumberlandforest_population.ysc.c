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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	char* sLocal_22 = NULL;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
#pragma endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_1();
	func_2();
	func_3();
	func_4();
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-62.722f, 1237.699f, 171.558f, 0.0f, 0.0f, -149.673f, 9.464f, 6.4f, 4.872f, "Six Point - m_volCabin");
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-43.43f, 1218.674f, 178.511f, 0.0f, 0.0f, 64.393f, 78.051f, 80.713f, 30.156f, "Six Point - m_volCamp");
	iVar0 = 0;
	func_5(&iVar0, 5);
	func_5(&iVar0, 0);
	func_5(&iVar0, 11);
	iVar1 = 0;
	func_5(&iVar1, 5);
	func_5(&iVar1, 0);
	func_5(&iVar1, 17);
	func_5(&iVar1, 28);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_24, 2, iVar0);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_23, 2, iVar1);
	bVar2 = true;
	while (bVar2)
	{
		BUILTIN::WAIT(0);
	}
	func_6();
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
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160.0f, 0.0f, 0.0f, 0.0f, 75.0f, 75.0f, 50.0f, "m_volOldFortWallace_Restriction");
	func_7(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 576.5f, 1692.5f, 190.0f, 0.0f, 0.0f, -45.0f, 40.0f, 22.0f, 15.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 565.0f, 1713.0f, 190.0f, 0.0f, 0.0f, 0.0f, 33.0f, 33.0f, 15.0f);
	func_8(iLocal_15, 0, 0, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_16, -61.78288f, 1236.599f, 171.7316f, 0.0f, 0.0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_16, -26.60302f, 1223.117f, 175.0363f, 0.0f, 0.0f, 0.0f, 17.60465f, 14.42418f, 5.206519f);
	func_9(iLocal_16, 0, 0, 1);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800.0f, 890.0f, 118.0f, 0.0f, 0.0f, 66.0f, 80.0f, 65.0f, 12.0f, "m_volCarmodyDell_Restriction");
	func_10(iLocal_17, 1);
}

void func_3()
{
	if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_11(52)) && (!func_13(func_12()) && func_12() != 52))
	{
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 343.4911f, 1484.906f, 183.6585f, 0.0f, 0.0f, 125.4594f, 50.44129f, 27.58693f, 15.20348f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 366.8338f, 1481.555f, 183.3052f, 0.0f, 0.0f, 70.84903f, 9.450991f, 11.24788f, 14.86582f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 361.6927f, 1499.326f, 183.0759f, 0.0f, 0.0f, 14.50761f, 15.72725f, 35.53953f, 16.71587f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 327.8768f, 1483.835f, 182.8865f, 0.0f, 0.0f, -11.76057f, 17.00056f, 10.34268f, 16.34857f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 319.2722f, 1495.286f, 184.5413f, 0.0f, 0.0f, -53.96134f, 23.05555f, 18.03384f, 21.16078f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 320.7645f, 1509.291f, 188.6127f, 0.0f, 0.0f, -25.21897f, 4.516489f, 7.110216f, 18.25474f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 324.6142f, 1502.853f, 184.9036f, 0.0f, 0.0f, -24.95285f, 14.96967f, 13.84794f, 21.22798f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 350.3736f, 1501.781f, 184.2531f, 0.0f, 0.0f, 33.49929f, 9.61958f, 30.69061f, 13.84341f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 352.1387f, 1513.729f, 182.7722f, 0.0f, 0.0f, 24.7492f, 10.80241f, 11.25904f, 15.89185f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 355.6973f, 1518.419f, 184.7034f, 0.0f, 0.0f, 0.0f, 1.984145f, 5.500231f, 12.25786f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 357.9312f, 1517.985f, 184.7034f, 0.0f, 0.0f, -16.95034f, 4.391377f, 5.500231f, 12.25786f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 362.5482f, 1516.343f, 182.8423f, 0.0f, 0.0f, 0.0f, 3.488632f, 3.541783f, 9.602388f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, 366.5602f, 1473.809f, 182.5569f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 7.516581f);
		iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRestrictedVolume Agg");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 345.1969f, 1487.955f, 182.5569f, 0.0f, 0.0f, 0.0f, 47.3f, 47.3f, 13.83329f);
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_20, iLocal_18);
		iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volWarningVolume Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_21, iLocal_20);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 345.1969f, 1487.955f, 182.5569f, 0.0f, 0.0f, 0.0f, 63.65347f, 68.76788f, 13.83329f);
		iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_19, iLocal_21);
		sLocal_22 = "OLD_FORT_WALLACE";
		LAW::_CREATE_GUARD_ZONE(sLocal_22);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_22, iLocal_19);
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_22, iLocal_18);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_22, iLocal_20);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_22, iLocal_21);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_22, 346.9555f, 1488.217f, 182.0683f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_22, iLocal_18);
	}
}

void func_4()
{
	func_14(160425541, 1);
	func_14(-1127035680, 1);
}

void func_5(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 |= BUILTIN::SHIFT_LEFT(1, iVar0);
}

void func_6()
{
	COMPANION::_0x7274F84B1501B523(iLocal_24);
	COMPANION::_0x7274F84B1501B523(iLocal_23);
	LAW::_REMOVE_GUARD_ZONE(sLocal_22);
	func_15(iLocal_18);
	func_15(iLocal_20);
	func_15(iLocal_19);
	func_15(iLocal_21);
}

void func_7(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 2228479, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 2228479, (1 << 14), 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_8(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_16(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_16(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_10(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 231, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 231, (1 << 14), 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, (1 << 14), 0, -1, -1, iParam0);
	}
}

bool func_11(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_17(Global_1835011[iParam0 /*74*/].f_1);
}

int func_12()
{
	return func_18(Global_1347343.f_2);
}

bool func_13(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_14(int iParam0, int iParam1)
{
	func_19(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_15(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_16(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

bool func_17(int iParam0)
{
	int iVar0;

	iVar0 = func_20(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_18(int iParam0)
{
	if (func_21(iParam0) == 1)
	{
		return func_22(iParam0);
	}
	return -1;
}

void func_19(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_23(iParam0, 0, 0);
	if (func_24(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_25(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_26(iParam0, 1);
			}
			else
			{
				func_27(iParam0, 1);
			}
		}
		else
		{
			func_28(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_29())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_20(int iParam0)
{
	if (!func_30(iParam0))
	{
		return -1;
	}
	return func_31(iParam0);
}

int func_21(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	return func_33(func_32(iParam0));
}

int func_22(int iParam0)
{
	if (!func_30(iParam0))
	{
		return -1;
	}
	return func_34(func_32(iParam0));
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

bool func_24(int iParam0)
{
	if (func_35(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_25(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_26(int iParam0, bool bParam1)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_27(int iParam0, bool bParam1)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_28(int iParam0, bool bParam1)
{
	if (func_24(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_29()
{
	return true;
}

bool func_30(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_31(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_36(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_32(int iParam0)
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

int func_33(int iParam0)
{
	return iParam0 & 31;
}

int func_34(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_35(int iParam0)
{
	return iParam0 != 0;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40431 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40431 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40431.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40431.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

