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
	bool bLocal_20 = false;
	int iLocal_21[3] = { 0, 0, 0 };
	char* sLocal_25 = NULL;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_1();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		func_4();
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3685.423f, -2597.155f, -10.0f, 0.0f, 0.0f, -24.7897f, 116.6365f, 76.68949f, 15.0f, "m_volArmadillo_Restriction");
	func_7(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4800.448f, -2704.913f, 28.17212f, 0.0f, 0.0f, -47.25f, 134.75f, 95.75f, 50.0f, "m_VolRidgewoodFarm_Restriction");
	func_8(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.882f, -2132.151f, -5.324f, 0.0f, 0.0f, 0.0f, 35.0f, 35.0f, 20.0f, "m_volTwinRocks_Restriction");
	func_8(iLocal_16, 1);
}

void func_3()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_9())
		{
			iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardThreat");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, -3960.03f, -2122.22f, -4.99f, 0.0f, 0.0f, 51.0f, 4.85f, 7.96f, 13.94f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, -3955.38f, -2127.12f, -4.19f, 0.0f, 0.0f, 51.0f, 7.61f, 7.5f, 12.32f);
			iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRestricted");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_18, iLocal_19);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, -3962.87f, -2135.84f, -5.32f, 0.0f, 0.0f, 0.0f, 27.0f, 27.0f, 20.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, -3934.91f, -2138.85f, -5.32f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 20.0f);
			iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRegistration");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_17, iLocal_18);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_17, -3959.88f, -2132.15f, -5.32f, 0.0f, 0.0f, 0.0f, 50.0f, 50.0f, 20.0f);
			sLocal_25 = "TWIN_ROCKS";
			LAW::_CREATE_GUARD_ZONE(sLocal_25);
			LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_25, iLocal_17);
			LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_25, iLocal_18);
			LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_25, iLocal_18);
			LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_25, iLocal_19);
		}
	}
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_OWNER"));
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_WIFE"));
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_1"));
	iVar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_2"));
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar3))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar3) && func_10(joaat("WS_RID_CHIMNEY_OFF")))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(joaat("WS_RID_CHIMNEY_OFF"));
			}
		}
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar2))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar2) && func_10(joaat("WS_RID_CHIMNEY_OFF")))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(joaat("WS_RID_CHIMNEY_OFF"));
			}
		}
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1) && func_10(joaat("WS_RID_CHIMNEY_OFF")))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(joaat("WS_RID_CHIMNEY_OFF"));
			}
		}
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0) && func_10(joaat("WS_RID_CHIMNEY_OFF")))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(joaat("WS_RID_CHIMNEY_OFF"));
			}
		}
		else if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0) && !func_10(joaat("WS_RID_CHIMNEY_OFF")))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_12(joaat("WS_RID_CHIMNEY_OFF"));
			}
		}
	}
}

void func_5()
{
	int iVar0[3];
	int iVar4[3];
	int iVar8[7];
	int iVar16[3];
	int iVar20;
	int iVar21;

	if (!bLocal_20)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			return;
		}
		iVar21 = 0;
		while (iVar21 < 3)
		{
			switch (iVar21)
			{
				case 0:
					iVar0[0] = joaat("ARM_01_DEBRIS_A");
					iVar0[1] = joaat("ARM_01_DEBRIS_B");
					iVar0[2] = joaat("ARM_01_DEBRIS_C");
					iVar4[0] = joaat("ARM_01_EMBERS_A");
					iVar4[1] = joaat("ARM_01_EMBERS_B");
					iVar4[2] = joaat("ARM_01_EMBERS_C");
					iVar8[0] = -72482077;
					iVar8[1] = 1941336822;
					iVar8[2] = 1710282603;
					iVar8[3] = -1122265410;
					iVar8[4] = 1309948033;
					iVar8[5] = 712371053;
					iVar8[6] = -935952905;
					iVar16[0] = joaat("ARM_01_SMOULDER_A");
					iVar16[1] = joaat("ARM_01_SMOULDER_B");
					iVar16[2] = joaat("ARM_01_SMOULDER_A");
					iVar20 = 574303518;
					break;
				case 1:
					iVar0[0] = joaat("ARM_05_DEBRIS01_A");
					iVar0[1] = joaat("ARM_05_DEBRIS01_B");
					iVar0[2] = joaat("ARM_05_DEBRIS01_C");
					iVar4[0] = joaat("ARM_05_EMBERS01_A");
					iVar4[1] = joaat("ARM_05_EMBERS01_B");
					iVar4[2] = joaat("ARM_05_EMBERS01_C");
					iVar8[0] = -772691681;
					iVar8[1] = 1011350990;
					iVar8[2] = 705321299;
					iVar8[3] = -2110850686;
					iVar8[4] = 32078073;
					iVar8[5] = 1007204499;
					iVar8[6] = -1142062162;
					iVar16[0] = joaat("ARM_05_SMOULDER01_A");
					iVar16[1] = joaat("ARM_05_SMOULDER01_B");
					iVar16[2] = joaat("ARM_05_SMOULDER01_C");
					iVar20 = 112916013;
					break;
				case 2:
					iVar0[0] = joaat("ARM_05_DEBRIS02_A");
					iVar0[1] = joaat("ARM_05_DEBRIS02_B");
					iVar0[2] = joaat("ARM_05_DEBRIS02_C");
					iVar4[0] = joaat("ARM_05_EMBERS02_A");
					iVar4[1] = joaat("ARM_05_EMBERS02_B");
					iVar4[2] = joaat("ARM_05_EMBERS02_C");
					iVar8[0] = 1049317994;
					iVar8[1] = -279038963;
					iVar8[2] = 161441935;
					iVar8[3] = -820561187;
					iVar8[4] = -1268841107;
					iVar8[5] = 2087785010;
					iVar8[6] = -280121448;
					iVar16[0] = joaat("ARM_05_SMOULDER02_A");
					iVar16[1] = joaat("ARM_05_SMOULDER02_B");
					iVar16[2] = joaat("ARM_05_SMOULDER02_C");
					iVar20 = -1603458673;
					break;
			}
			func_13(iVar21, &iVar0, &iVar4, &iVar8, &iVar16, iVar20);
			iVar21++;
		}
		if (func_10(joaat("WS_COOTS_GRAVE_1_DUG")) && func_10(joaat("WS_COOTS_GRAVE_2_DUG")))
		{
			func_14(joaat("WS_COOTS_GRAVE_1_DUG"), 0, 0);
			func_14(joaat("WS_COOTS_GRAVE_2_DUG"), 0, 0);
			func_14(joaat("WS_COOTS_GRAVE_FILLED_IN"), 1, 0);
		}
		bLocal_20 = true;
	}
}

void func_6()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_25);
	func_15();
}

void func_7(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 2229503, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
	}
}

void func_8(int iParam0, bool bParam1)
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

bool func_9()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_16(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_16(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_16(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40497[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_13(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	func_17(iParam5);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	switch (iVar0)
	{
		case 0:
			func_17((*iParam1)[0]);
			func_17((*iParam1)[1]);
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 1);
			func_18(&(iLocal_21[iParam0]), 2);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
		case 1:
			func_17((*iParam1)[0]);
			func_18(&(iLocal_21[iParam0]), 1);
			break;
		case 2:
			func_17((*iParam1)[1]);
			func_18(&(iLocal_21[iParam0]), 2);
			break;
		case 3:
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
		case 4:
			func_17((*iParam1)[0]);
			func_17((*iParam1)[1]);
			func_18(&(iLocal_21[iParam0]), 1);
			func_18(&(iLocal_21[iParam0]), 2);
			break;
		case 5:
			func_17((*iParam1)[0]);
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 1);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
		case 6:
			func_17((*iParam1)[1]);
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 2);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
	}
	if (func_19(iLocal_21[iParam0], 1))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam2)[0]);
			func_18(&(iLocal_21[iParam0]), 8);
		}
	}
	if (func_19(iLocal_21[iParam0], 2))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam2)[1]);
			func_18(&(iLocal_21[iParam0]), 16);
		}
	}
	if (func_19(iLocal_21[iParam0], 4))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam2)[2]);
			func_18(&(iLocal_21[iParam0]), 32);
		}
	}
	if ((func_19(iLocal_21[iParam0], 8) && func_19(iLocal_21[iParam0], 16)) && func_19(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[6]);
				func_18(&(iLocal_21[iParam0]), (1 << 12));
				break;
			case 2:
				func_17((*iParam3)[3]);
				func_18(&(iLocal_21[iParam0]), (1 << 9));
				break;
			case 3:
				func_17((*iParam3)[4]);
				func_18(&(iLocal_21[iParam0]), (1 << 10));
				break;
			case 4:
				func_17((*iParam3)[5]);
				func_18(&(iLocal_21[iParam0]), (1 << 11));
				break;
			case 5:
				func_17((*iParam3)[0]);
				func_18(&(iLocal_21[iParam0]), 64);
				break;
			case 6:
				func_17((*iParam3)[1]);
				func_18(&(iLocal_21[iParam0]), 128);
				break;
			case 7:
				func_17((*iParam3)[2]);
				func_18(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 8) && func_19(iLocal_21[iParam0], 16))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[3]);
				func_18(&(iLocal_21[iParam0]), (1 << 9));
				break;
			case 1:
				func_17((*iParam3)[0]);
				func_18(&(iLocal_21[iParam0]), 64);
				break;
			case 2:
				func_17((*iParam3)[1]);
				func_18(&(iLocal_21[iParam0]), 128);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 16) && func_19(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[5]);
				func_18(&(iLocal_21[iParam0]), (1 << 11));
				break;
			case 1:
				func_17((*iParam3)[1]);
				func_18(&(iLocal_21[iParam0]), 128);
				break;
			case 2:
				func_17((*iParam3)[2]);
				func_18(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 8) && func_19(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[4]);
				func_18(&(iLocal_21[iParam0]), (1 << 10));
				break;
			case 1:
				func_17((*iParam3)[0]);
				func_18(&(iLocal_21[iParam0]), 64);
				break;
			case 2:
				func_17((*iParam3)[2]);
				func_18(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 8))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam3)[0]);
			func_18(&(iLocal_21[iParam0]), 64);
		}
	}
	else if (func_19(iLocal_21[iParam0], 16))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam3)[1]);
			func_18(&(iLocal_21[iParam0]), 128);
		}
	}
	else if (func_19(iLocal_21[iParam0], 32))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam3)[2]);
			func_18(&(iLocal_21[iParam0]), 256);
		}
	}
	if (!func_19(iLocal_21[iParam0], 8128))
	{
		if (func_19(iLocal_21[iParam0], 8))
		{
			func_17((*iParam4)[0]);
		}
		if (func_19(iLocal_21[iParam0], 16))
		{
			func_17((*iParam4)[1]);
		}
		if (func_19(iLocal_21[iParam0], 32))
		{
			func_17((*iParam4)[2]);
		}
	}
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_12(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_11(joaat("WS_DOWNS_RANCH_EDITH"));
			func_11(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_11(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_11(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_12(joaat("WS_DOWNS_RANCH_EDITH"));
			func_11(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_11(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_11(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_11(joaat("WS_DOWNS_RANCH_EDITH"));
			func_12(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_11(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_11(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_11(joaat("WS_DOWNS_RANCH_EDITH"));
			func_11(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_12(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_11(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_11(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_11(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_12(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_20();
			func_12(iParam0);
			break;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
		case joaat("WS_BEECHERS_SHACK"):
		case joaat("WS_BEECHERS_BARN_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			func_21();
			func_12(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_11(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_11(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_12(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_11(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_11(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_12(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_11(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_11(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_12(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_11(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_11(joaat("WS_RHODES_GRAVE_OPEN"));
			func_12(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_11(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_11(joaat("WS_RHODES_GRAVE_OPEN"));
			func_12(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_11(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_11(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_12(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_11(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_12(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_11(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_12(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_11(joaat("WS_UTOPIA_TREE_MISSION"));
			func_11(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_11(joaat("WS_UTOPIA_TREE_STUMP"));
			func_12(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_11(joaat("WS_UTOPIA_TREE_STANDING"));
			func_11(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_11(joaat("WS_UTOPIA_TREE_STUMP"));
			func_12(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_11(joaat("WS_UTOPIA_TREE_STANDING"));
			func_11(joaat("WS_UTOPIA_TREE_MISSION"));
			func_11(joaat("WS_UTOPIA_TREE_STUMP"));
			func_12(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_11(joaat("WS_UTOPIA_TREE_STANDING"));
			func_11(joaat("WS_UTOPIA_TREE_MISSION"));
			func_11(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_12(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_11(joaat("WS_MICAH_CAMP"));
			func_11(joaat("WS_MICAH_CAMP_POST"));
			func_12(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_11(joaat("WS_MICAH_CAMP_EMPTY"));
			func_11(joaat("WS_MICAH_CAMP_POST"));
			func_12(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_11(joaat("WS_MICAH_CAMP_EMPTY"));
			func_11(joaat("WS_MICAH_CAMP"));
			func_12(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_11(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_12(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_11(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_11(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_10(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_12(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_11(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_11(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_12(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_11(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_12(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_11(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_12(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_11(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_12(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_11(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_12(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_11(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_12(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_11(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_11(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_12(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_11(joaat("WS_NEW_COM_BANK_START"));
			func_11(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_11(joaat("WS_NEW_COM_BANK_AFTER"));
			func_11(joaat("WS_NEW_COM_BANK_POST"));
			func_12(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_11(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_11(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_11(joaat("WS_NEW_COM_BANK_AFTER"));
			func_11(joaat("WS_NEW_COM_BANK_POST"));
			func_12(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_11(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_11(joaat("WS_NEW_COM_BANK_START"));
			func_11(joaat("WS_NEW_COM_BANK_AFTER"));
			func_11(joaat("WS_NEW_COM_BANK_POST"));
			func_12(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_11(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_11(joaat("WS_NEW_COM_BANK_START"));
			func_11(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_11(joaat("WS_NEW_COM_BANK_POST"));
			func_12(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_11(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_11(joaat("WS_NEW_COM_BANK_START"));
			func_11(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_11(joaat("WS_NEW_COM_BANK_AFTER"));
			func_12(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_11(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_12(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_11(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_12(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_11(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_12(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_11(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_11(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_12(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_12(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_12(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_12(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_11(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_12(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_12(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_12(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_12(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_12(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_11(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_12(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_11(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_12(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_11(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_12(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_11(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_12(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_11(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_12(0);
			func_11(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_11(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_12(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_11(0);
			func_11(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_12(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_11(0);
			func_11(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_12(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_11(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_12(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_11(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_12(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_12(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_12(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_12(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_11(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_12(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_11(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_11(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_11(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_12(joaat("WS_SHADY_BELLE_ABANDON"));
			func_11(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_11(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_12(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_11(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_11(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_12(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_11(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_12(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_11(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_10(iParam0))
				{
					func_12(iParam0);
				}
			}
			else if (func_10(iParam0))
			{
				func_11(iParam0);
			}
			break;
	}
}

void func_15()
{
	func_22(joaat("ARM_01_DEBRIS_A"));
	func_22(joaat("ARM_01_DEBRIS_B"));
	func_22(joaat("ARM_01_DEBRIS_C"));
	func_22(joaat("ARM_01_EMBERS_A"));
	func_22(joaat("ARM_01_EMBERS_B"));
	func_22(joaat("ARM_01_EMBERS_C"));
	func_22(-72482077);
	func_22(1941336822);
	func_22(1710282603);
	func_22(-1122265410);
	func_22(1309948033);
	func_22(-935952905);
	func_22(712371053);
	func_22(joaat("ARM_01_SMOULDER_A"));
	func_22(joaat("ARM_01_SMOULDER_B"));
	func_22(-407026996);
	func_22(574303518);
	func_22(joaat("ARM_05_DEBRIS01_A"));
	func_22(joaat("ARM_05_DEBRIS01_B"));
	func_22(joaat("ARM_05_DEBRIS01_C"));
	func_22(joaat("ARM_05_EMBERS01_A"));
	func_22(joaat("ARM_05_EMBERS01_B"));
	func_22(joaat("ARM_05_EMBERS01_C"));
	func_22(-772691681);
	func_22(1011350990);
	func_22(705321299);
	func_22(-2110850686);
	func_22(32078073);
	func_22(-1142062162);
	func_22(1007204499);
	func_22(joaat("ARM_05_SMOULDER01_A"));
	func_22(joaat("ARM_05_SMOULDER01_B"));
	func_22(joaat("ARM_05_SMOULDER01_C"));
	func_22(112916013);
	func_22(joaat("ARM_05_DEBRIS02_A"));
	func_22(joaat("ARM_05_DEBRIS02_B"));
	func_22(joaat("ARM_05_DEBRIS02_C"));
	func_22(joaat("ARM_05_EMBERS02_A"));
	func_22(joaat("ARM_05_EMBERS02_B"));
	func_22(joaat("ARM_05_EMBERS02_C"));
	func_22(1049317994);
	func_22(-279038963);
	func_22(161441935);
	func_22(-820561187);
	func_22(-1268841107);
	func_22(-280121448);
	func_22(2087785010);
	func_22(joaat("ARM_05_SMOULDER02_A"));
	func_22(joaat("ARM_05_SMOULDER02_B"));
	func_22(joaat("ARM_05_SMOULDER02_C"));
	func_22(-1603458673);
	iLocal_21[0] = 0;
	iLocal_21[1] = 0;
	iLocal_21[2] = 0;
	bLocal_20 = false;
}

int func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MICAH_HIDEOUT_ABANDON"):
			return 292;
		case joaat("WS_RIDE_THE_LIGHTNING_CHAIR"):
			return 104;
		case joaat("WS_FAST_TRAVEL_MARKERS"):
			return 195;
		case joaat("WS_RHODES_SADIE3_COVER_ON"):
			return 59;
		case joaat("WS_SHOWS_SD_MOV_01"):
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case joaat("WS_CLAY_EXIST"):
			return 197;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
			return 49;
		case joaat("WS_HIDEOUT_SIX_POINT_LIGHTS"):
			return 92;
		case joaat("WS_GRAND_KORRIGAN_LOW_RAILING"):
			return 265;
		case joaat("WS_NBX_BUILDING_FUNDED"):
			return 112;
		case joaat("WS_RHODES_BANK_WALL_INTACT"):
			return 278;
		case joaat("WS_WAR_VETERAN_WOLF_TROPHY_ON"):
			return 208;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01_END"):
			return 165;
		case joaat("WS_DEWCLM_DOMINOES_SEATS"):
			return 276;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case joaat("WS_SHOWS_SD_VAUD_02"):
			return 10;
		case joaat("WS_SAINT_DENIS_BOATS_FOUND"):
			return 376;
		case joaat("WS_SWA_CHAIRS_CINEMATIC"):
			return 289;
		case joaat("WS_SHOWS_SD_MOV_02"):
			return 26;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			return 57;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			return 56;
		case joaat("WS_VALENTINE_BANK_WINDOWS"):
			return 123;
		case joaat("WS_ANTENOR_DOCKED"):
			return 266;
		case joaat("WS_GRZ_WEST_CAMP_SITE"):
			return 277;
		case joaat("WS_FIN1_DISABLE_VANHORN_FIRE"):
			return 253;
		case joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED"):
			return 257;
		case joaat("WS_FEUD1_WATER_TOWER_UP"):
			return 372;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS"):
			return 141;
		case joaat("WS_RHODES_BANK_LIGHTS_OFF"):
			return 64;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			return 3;
		case joaat("WS_SHOWS_SD_MAG_04"):
			return 23;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			return 61;
		case joaat("WS_SHOWS_SD_VAUD_05"):
			return 13;
		case joaat("WS_INDUSTRY3_POKER_TABLES"):
			return 233;
		case joaat("WS_MP_PROPERTY_LOCATIONS"):
			return 53;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			return 55;
		case joaat("WS_GUARMA_RUIN1_FLOOR_INTACT"):
			return 33;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON"):
			return 146;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON_DOORS"):
			return 147;
		case joaat("WS_THOMAS_DOWNES"):
			return 301;
		case -1556423728:
			return 218;
		case joaat("WS_BEAVER_HOLLOW_HIDEOUT"):
			return 116;
		case joaat("WS_CRD_CHIMNEY_OFF"):
			return 311;
		case joaat("WS_STRAWBERRY_JAIL_INTACT"):
			return 209;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS"):
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case joaat("WS_MP_LAKAY"):
			return 215;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_02"):
			return 172;
		case joaat("WS_SHOWS_SD_VAUD_04"):
			return 12;
		case joaat("WS_ROCKY_SEVEN_ENDLESS"):
			return 32;
		case joaat("WS_SHOWS_SD_MAG_03"):
			return 22;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			return 73;
		case joaat("WS_RIDE_THE_LIGHTNING_WAGON"):
			return 105;
		case joaat("WS_MP_HIDEOUT_HANGING_DOG"):
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON"):
			return 140;
		case -1318987693:
			return 222;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case joaat("WS_ON_THE_RUN_SHACK_HELPED_CONVICT"):
			return 270;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_01"):
			return 171;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			return 98;
		case joaat("WS_SHOWS_SD_MAG_02"):
			return 21;
		case joaat("WS_GRAVE_SUSAN"):
			return 300;
		case joaat("WS_VALENTINE_JAIL_INTACT"):
			return 235;
		case joaat("WS_STD_GALA_BALCONY_HIGH_MEM"):
			return 113;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_03"):
			return 170;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			return 126;
		case joaat("WS_VALENTINE_LOCKDOWN_BANK"):
			return 131;
		case joaat("WS_MP_HIDEOUT_TWIN_ROCKS"):
			return 333;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON"):
			return 156;
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
			return 45;
		case joaat("WS_VALENTINE_LOCKDOWN_JAIL"):
			return 136;
		case joaat("WS_COLTER_STAGE_FIRES_LIT"):
			return 46;
		case joaat("WS_RHODES_JAIL_INTACT"):
			return 234;
		case joaat("WS_VALENTINE_SALOON_WINDOWS"):
			return 124;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			return 100;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			return 242;
		case joaat("WB_DISCO_ALCHEMIST_HOUSE"):
			return 29;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			return 378;
		case joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED"):
			return 194;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS"):
			return 151;
		case joaat("WS_ORCHIDS_APPLESEED"):
			return 79;
		case joaat("WS_CHELONIAN_CAMP"):
			return 239;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
			return 176;
		case joaat("WS_RHODES_GRAYS3_COVER_ON"):
			return 58;
		case joaat("WS_RIDE_THE_LIGHTNING_BARRELS"):
			return 106;
		case joaat("WS_SWA_CHAIRS_REGULAR"):
			return 288;
		case joaat("WS_THIEVES_LANDING_BOAT"):
			return 251;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			return 36;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS"):
			return 152;
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
			return 44;
		case -939114198:
			return 221;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH"):
			return 236;
		case joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE"):
			return 84;
		case joaat("WS_HIDEOUT_HANGING_DOG_INACTIVE"):
			return 83;
		case joaat("WS_RHODES_SHERIFF_LOCKED"):
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case joaat("WS_BACCHUS_BRIDGE_DESTROYED"):
			return 260;
		case joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER"):
			return 245;
		case joaat("WS_HIDEOUT_TWIN_ROCKS_INACTIVE"):
			return 88;
		case joaat("WS_SHADY_BELLE_DOMINO_SEATS"):
			return 254;
		case joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER"):
			return 262;
		case joaat("WS_SAINTDENIS_BOAT"):
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case joaat("WS_NEW_COM_BANK_VAULT_RF"):
			return 228;
		case joaat("WS_TAXIDERMY_NOTICES"):
			return 78;
		case joaat("WS_RHODES_SALOON_POST_BRAITHWAITES"):
			return 60;
		case joaat("WS_SEAN_1_TENT"):
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case joaat("WS_BRAITHWAITES_3_ACTIVE"):
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case joaat("WS_RARE_FISH_CABIN_END"):
			return 80;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON_DOORS"):
			return 157;
		case joaat("WS_RHODES_ENDLESS_SUMMER"):
			return 67;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			return 191;
		case joaat("WS_RHODES_FENCE_OPEN"):
			return 261;
		case joaat("WS_MP_EVENT_AREAS"):
			return 214;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
			return 185;
		case joaat("WS_VALENTINE_GENSTORE_LIGHTS_OFF"):
			return 71;
		case joaat("WS_NATIVE1_ARMY_CAMP"):
			return 370;
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
			return 187;
		case joaat("WS_BGV_SHACK_LADDER_DOWN"):
			return 377;
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
			return 175;
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			return 174;
		case joaat("WS_VALENTINE_SALOON_BED_BLOODY"):
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			return 117;
		case joaat("WS_POST_CARAVAN_SHADY"):
			return 364;
		case joaat("WS_VALENTINE_SHOOTOUT"):
			return 238;
		case joaat("WS_FLAG_BRONTE_ADD_SP_DRESSING"):
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			return 8;
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
			return 186;
		case joaat("WS_NBX_MAUSOLEUM_PLUNDERED"):
			return 111;
		case joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN"):
			return 268;
		case joaat("WS_MP_HIDEOUT_MILLESANI_CLAIM"):
			return 316;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			return 225;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			return 205;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 143;
		case joaat("WS_WAPITI_TENT_OPEN"):
			return 272;
		case joaat("WS_MOB3_TROLLEY_DAMAGE"):
			return 368;
		case joaat("WS_SERIAL_KILLER_CABIN_OPEN"):
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case joaat("WS_BOOBY_TRAP_GUAMA_01"):
			return 162;
		case joaat("WS_POST_CARAVAN_HORSESHOE"):
			return 362;
		case joaat("WS_WATSON_GRAVE"):
			return 69;
		case joaat("WS_SISIKA_WINDOW_COVER"):
			return 361;
		case joaat("WS_MP_SDS_WELL_COVER"):
			return 360;
		case joaat("WS_VANHORN_BOATS_FOUND"):
			return 375;
		case joaat("WS_MP_STRAWBERRY_DR_MILO"):
			return 213;
		case joaat("WS_NEW_MRK_04_HIDEFORIND3"):
			return 267;
		case joaat("WS_DISCO_DEAD_SNAKE"):
			return 30;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			return 244;
		case joaat("WS_VALENTINE_LOCKDOWN_DOCTOR"):
			return 132;
		case joaat("WS_VALENTINE_WAGON"):
			return 121;
		case joaat("WS_CLM_DOMINOES_LANTERN"):
			return 273;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			return 204;
		case joaat("WS_VALENTINE_LOCKDOWN_RESTAURANT"):
			return 139;
		case joaat("WS_RHODES_LOCKDOWN_SALOON_DOORS"):
			return 149;
		case joaat("WS_PRONGHORN_RANCH_BURNED"):
			return 177;
		case joaat("WS_RID_CHIMNEY_OFF"):
			return 309;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			return 97;
		case -144653976:
			return 219;
		case joaat("WS_SHOWS_SD_VAUD_03"):
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND"):
			return 28;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02_END"):
			return 167;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON_DOORS"):
			return 145;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON"):
			return 154;
		case joaat("WS_TRAINROB1_SHOOTOUT"):
			return 373;
		case joaat("WS_VALENTINE_GENSTORE_ACTIVE"):
			return 258;
		case joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS"):
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case joaat("WS_SHOWS_SD_MAG_05"):
			return 24;
		case joaat("WS_FIN2_EXT_P19_FRAMES"):
			return 290;
		case joaat("WS_VALENTINE_HOTEL_CURTAINS_MUD3"):
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 153;
		case joaat("WS_GRAVE_HOSEA"):
			return 297;
		case joaat("WS_FLAG_BRONTE_ADD_MP_DRESSING"):
			return 248;
		case joaat("WS_VALENTINE_SHOOTOUT_START"):
			return 237;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			return 74;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			return 243;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case joaat("WS_MICAH_HIDEOUT"):
			return 291;
		case joaat("WS_UTP1_COVER01"):
			return 101;
		case joaat("WS_STD_DOCTORS_OFFICE"):
			return 114;
		case joaat("WS_HIDEOUT_SMUGGLER_DOCKS_INACTIVE"):
			return 86;
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
			return 183;
		case 171107021:
			return 381;
		case joaat("WS_ROANOKE_BOOBY_TRAP_HOLES"):
			return 283;
		case joaat("WS_SHOWS_VAL_MAG_03"):
			return 16;
		case joaat("WS_SHOWS_VAL_MAG_01"):
			return 14;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			return 241;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			return 62;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS"):
			return 142;
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case joaat("WS_CRN1_BURNT_BARN"):
			return 286;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01"):
			return 164;
		case joaat("WS_CARMODY_DELL_ABANDONED"):
			return 54;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE"):
			return 81;
		case joaat("WS_MICAH_CAMP"):
			return 95;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			return 119;
		case joaat("WS_SHB_DOMINOES_LANTERN"):
			return 275;
		case joaat("WS_VALENTINE_LOCKDOWN_RENT"):
			return 138;
		case joaat("WS_MP_BLACKWATER"):
			return 216;
		case joaat("WS_SADIE_BEDROLL"):
			return 198;
		case joaat("WS_VALENTINE_LOCKDOWN_GENERAL_STORE"):
			return 133;
		case joaat("WS_RHODES_GUNSMITH_FIRE_OFF"):
			return 66;
		case joaat("WS_FIN1_BURNT_LADDER"):
			return 287;
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
			return 47;
		case joaat("WS_FUSSAR2_LIGHTING"):
			return 281;
		case joaat("WS_GUARMA_EXISTS"):
			return 188;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS"):
			return 90;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			return 34;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_03"):
			return 173;
		case joaat("WS_GRAVE_EAGLE_FLIES"):
			return 293;
		case joaat("WS_SHOWS_VAL_MAG_04"):
			return 17;
		case joaat("WS_HSO_TABLE_SEATS"):
			return 303;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			return 42;
		case joaat("WS_SHOWS_VAL_MAG_02"):
			return 15;
		case joaat("WS_TANNERSREACH_BURNT"):
			return 199;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			return 108;
		case joaat("WS_DROUGHT_ENDED"):
			return 31;
		case joaat("WS_HSO_DOMINOES_SEATS"):
			return 302;
		case joaat("WS_NEW_COM_BANK_POST"):
			return 227;
		case joaat("WS_COLTER_STAGE_MP"):
			return 52;
		case joaat("WS_RE_MUC_ROCK_SCENE"):
			return 231;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			return 2;
		case joaat("WS_RE_MUC_KNIFE_SCENE"):
			return 232;
		case joaat("WS_RHODES_LOCKDOWN_SALOON"):
			return 148;
		case joaat("WS_COOTS_GRAVE_2_DUG"):
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case joaat("WS_STRAWBERRY_IGNORE_NEM_HOUSE"):
			return 246;
		case joaat("WS_SAINT_DENIS_DOCK_TRAINS"):
			return 279;
		case joaat("WS_MP_FETCH_OTH_MAC"):
			return 355;
		case joaat("WS_BLACKWATER_BURIAL"):
			return 159;
		case joaat("WS_STD_GAMBLING_DEN"):
			return 115;
		case joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES"):
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
			return 179;
		case joaat("WS_TAXIDERMY_MARITAL"):
			return 77;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			return 128;
		case joaat("WS_GRAVE_KIERAN"):
			return 294;
		case joaat("WS_GUARMA_WATER"):
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case joaat("WS_MP_HIDEOUT_LAKE_SHORE"):
			return 327;
		case joaat("WS_VALENTINE_LOCKDOWN_GUNSMITH"):
			return 134;
		case joaat("WS_WAR_VETERAN_FISH_TROPHY_ON"):
			return 207;
		case joaat("WS_BEECHERS_SHACK"):
			return 178;
		case joaat("WS_GRAND_KORRIGAN_DOCKED_INTERIOR"):
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
			return 48;
		case joaat("WS_FOR_MY_ART_NOBARPROPS"):
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case joaat("WS_SHOWS_VAL_MAG_05"):
			return 18;
		case joaat("WS_ANNES_SETTLERS_CLOSED_OFF"):
			return 240;
		case joaat("WS_RE_SP_SAVAGEWARNING_02"):
			return 285;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case joaat("WS_MP_HIDEOUT_MANTECA_FALLS"):
			return 335;
		case joaat("WS_NEW_COM_BANK_START"):
			return 224;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			return 298;
		case joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS"):
			return 247;
		case joaat("WS_SHOWS_VAL_MAG_CLOSED"):
			return 19;
		case joaat("WS_PAI_CHIMNEY_OFF"):
			return 310;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			return 7;
		case joaat("WS_VALENTINE_MAGIC_LANTERN_DOOR"):
			return 122;
		case joaat("WS_RE_SP_SAVAGEWARNING_01"):
			return 284;
		case joaat("WS_NBX_ART_RC_MASON_PASSED"):
			return 110;
		case joaat("WS_MP_HIDEOUT_BRANDYWINE"):
			return 319;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON"):
			return 144;
		case joaat("WS_SHOWS_SD_MOV_05"):
			return 27;
		case joaat("WS_VALENTINE_RES_CURTAINS_CLOSED"):
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case joaat("WS_VALENTINE_LOCKDOWN_HOTEL"):
			return 135;
		case joaat("WS_RHODES_BURIAL"):
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case joaat("WS_MFR_CHIMNEY_OFF"):
			return 307;
		case joaat("WS_CINCO_TORRES_DOOR_INTACT"):
			return 38;
		case joaat("WS_RE_MUC_TREE_SCENE"):
			return 230;
		case joaat("WS_BEECHERS_BARN_FINISHED"):
			return 184;
		case joaat("WS_HSO_DOMINOES_LANTERN"):
			return 274;
		case joaat("WS_HIDEOUT_SIX_POINT_INACTIVE"):
			return 85;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_02"):
			return 169;
		case joaat("WS_HORSESHOE_BARREL"):
			return 160;
		case 1216784232:
			return 269;
		case joaat("WS_PHONOGRAPH_BOAT_FOUND"):
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case joaat("WS_VALENTINE_BUTCHER_ACTIVE"):
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case joaat("WS_SHOWS_SD_MAG_01"):
			return 20;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			return 75;
		case joaat("WS_ON_THE_RUN_SHACK_REWARD_FOUND"):
			return 271;
		case joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED"):
			return 263;
		case joaat("WS_HIDEOUT_FORT_MERCER_INACTIVE"):
			return 82;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			return 223;
		case joaat("WS_STRAWBERRY_JAIL_IGNORE"):
			return 210;
		case joaat("WS_HUNTING_2_ABANDONED_CAMP"):
			return 217;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02"):
			return 166;
		case joaat("WS_TRELAWNY_1_HOUSE_TRASHED"):
			return 211;
		case 1446719356:
			return 380;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			return 125;
		case joaat("WS_SHADY_BELLE_EXTRA_BLOCKER"):
			return 120;
		case joaat("WS_SEAN_1_CAMP"):
			return 367;
		case joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR"):
			return 50;
		case joaat("WS_NATIVE_SON2_TREE_FALLEN"):
			return 102;
		case joaat("WS_GRAVE_SEAN"):
			return 295;
		case joaat("WS_MP_VALENTINE_AMBIENT"):
			return 212;
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			return 5;
		case joaat("WS_VALENTINE_AUCTION_GATES_OPEN"):
			return 72;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			return 35;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_01"):
			return 168;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			return 206;
		case joaat("WS_SAINT_DENIS_DOCK_BOATS"):
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case joaat("WS_BOOBY_TRAP_GUAMA_01_END"):
			return 163;
		case joaat("WS_NEW_GAR_BRON_MPCOVER_01"):
			return 359;
		case joaat("WS_COOTS_GRAVE_1_DUG"):
			return 304;
		case joaat("WS_POST_CARAVAN_BEAVERHOLLOW"):
			return 365;
		case joaat("WS_SHOWS_SD_VAUD_01"):
			return 9;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			return 107;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			return 118;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			return 127;
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
			return 181;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON"):
			return 150;
		case joaat("WS_HIDEOUT_HANGING_DOG_MARSTON4"):
			return 93;
		case 1672143046:
			return 383;
		case joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED"):
			return 68;
		case joaat("WS_MP_HIDEOUT_MOSSY_FLATS"):
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case joaat("WS_VALENTINE_LOCKDOWN_LAW_OFFICE"):
			return 137;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			return 94;
		case joaat("WS_POST_CARAVAN_CLEMENS"):
			return 363;
		case 1804403874:
			return 382;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			return 200;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			return 99;
		case joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"):
			return 196;
		case joaat("WS_VALENTINE_POKER_LESS_CHAIRS"):
			return 70;
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			return 51;
		case joaat("WS_MICAH_CAMP_POST"):
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case joaat("WS_CLEMENS_POINT_BARREL"):
			return 161;
		case joaat("WS_NBD1_ABANDONED_BUILDING_INTERIOR"):
			return 229;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			return 203;
		case joaat("WS_POISONED_WELL_BLOCKED_ENTRY"):
			return 371;
		case joaat("WS_HIDEOUT_SIX_POINT_TABLE"):
			return 91;
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			return 180;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			return 6;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			return 190;
		case joaat("WS_GUARMA3_GUARDS_DISABLED"):
			return 193;
		case joaat("WS_NATIVE1_COH_DESTROYED"):
			return 369;
		case joaat("WS_MAC_CHIMNEY_OFF"):
			return 308;
		case joaat("WS_RHODES_SALOON2_GRAVE"):
			return 63;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			return 299;
		case joaat("WS_COOTS_GRAVE_FILLED_IN"):
			return 306;
		case joaat("WS_FUSSAR2_NOCLIMB"):
			return 282;
		case joaat("WS_CRASHED_BOAT"):
			return 39;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case joaat("WS_SHADY_BELLE_SHUTTERS_CLOSED"):
			return 255;
		case joaat("WS_HIDEOUT_THIEVES_LANDING_INACTIVE"):
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_17(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_20()
{
	func_11(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_11(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_11(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_11(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_11(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_11(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_11(joaat("WS_COLTER_STAGE_MP"));
}

void func_21()
{
	func_11(joaat("WS_BEECHERS_SHACK"));
	func_11(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_11(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_11(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_11(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_11(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_11(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_11(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_11(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_11(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

void func_22(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

