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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;
	bool bVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::GAME_FRAMEWORK_MANAGER_INIT(496295564);
	func_1(-1);
	func_2();
	func_3();
	func_4(1);
	func_5(1);
	func_6(0);
	func_7(0);
	if (NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING() && !func_8())
	{
		NETWORK::_0x5B9C6AC118FD4774();
	}
	bVar0 = true;
	while (bVar0)
	{
		func_9();
		if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
		{
			PLAYER::FORCE_CLEANUP((1 << 9));
			func_10();
			bVar0 = false;
		}
		if (func_11())
		{
			PLAYER::FORCE_CLEANUP(2);
			CAM::DO_SCREEN_FADE_OUT(0);
			func_12(0);
			bVar0 = false;
		}
		if (func_13() != 2)
		{
			bVar0 = false;
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = false;
			bVar1 = true;
		}
		if (bVar0)
		{
			if (func_14())
			{
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE") /* GXTEntry: "Pause" */, false);
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
			}
			func_15();
		}
		else if (!bVar1 || Global_0.f_14)
		{
			if (func_16() & func_17())
			{
			}
		}
		BUILTIN::WAIT(0);
	}
	if (bVar1 && !Global_0.f_14)
	{
		func_18();
	}
	while (func_19(&Global_0, 2))
	{
		func_9();
		func_17();
		BUILTIN::WAIT(0);
	}
	func_20();
	while (!func_21())
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	if (func_13() == 3 && !REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 5000.0f, 2442122);
	}
	func_2();
	func_22();
	MISC::_0x1096603B519C905F("");
	func_23();
	MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	UILOG::_0xDA0A30153FCC0FFD();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	Global_1572887.f_12 = iParam0;
}

void func_2()
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

void func_3()
{
	func_24();
	func_25(-1);
	func_26(0);
	Global_1572887.f_94.f_41 = 0;
	if (Global_1572887.f_94.f_53 == 2)
	{
		Global_1572887.f_94.f_53 = 0;
	}
}

void func_4(int iParam0)
{
	Global_1572887.f_94.f_44 = iParam0;
}

void func_5(bool bParam0)
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
}

void func_6(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_27() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_28(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_29();
		Global_1898077.f_9 = func_30(Global_1894899.f_2);
		func_31(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; // curOff = 52
		}
		else
		{
			func_32(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_33(1);
	}
}

bool func_8()
{
	return Global_1572887.f_94 > 0;
}

void func_9()
{
	int iVar0;
	struct<2> /*16*/ sVar1;
	struct<2> /*16*/ sVar3;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case joaat("EVENT_NETWORK_PLAYER_SIGNED_OFFLINE"):
				break;
			case joaat("EVENT_NETWORK_PLAYER_SIGNED_ONLINE"):
				break;
			case joaat("EVENT_NETWORK_SIGN_IN_STATE_CHANGED"):
				func_34();
				break;
			case joaat("EVENT_NETWORK_SIGN_IN_START_NEW_GAME"):
				break;
			case joaat("EVENT_NETWORK_NETWORK_ROS_CHANGED"):
				break;
			case joaat("EVENT_NETWORK_SYSTEM_SERVICE_EVENT"):
				sVar1 = { sVar3 /*2*/ };
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &sVar1, 2))
				{
					switch (sVar1.f_0)
					{
						case 0:
							func_34();
							break;
						case 1:
							func_34();
							break;
					}
				}
				break;
			case joaat("EVENT_NETWORK_NETWORK_BAIL"):
				break;
		}
		iVar0++;
	}
}

void func_10()
{
	func_35(4);
	func_36(joaat("CLIP"), 0);
	func_37(4);
}

bool func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case joaat("EVENT_NETWORK_SIGN_IN_START_NEW_GAME"):
				return true;
		}
		iVar0++;
	}
	return false;
}

void func_12(int iParam0)
{
	if (iParam0 != 0)
	{
		func_38(iParam0, -1);
	}
	func_35(4);
	func_37(1);
}

int func_13()
{
	return Global_1572864;
}

bool func_14()
{
	if (func_39(32))
	{
		return true;
	}
	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return true;
	}
	return false;
}

void func_15()
{
	int iVar0;

	if (iLocal_18 > 0)
	{
		func_40();
	}
	if (!func_41(2))
	{
		func_42();
	}
	switch (iLocal_18)
	{
		case 0:
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("main")) <= 0)
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				if (func_39(32))
				{
					if (func_39(8))
					{
						iVar0 = 1;
					}
					else if (func_39(16))
					{
						func_43(0);
						iVar0 = 0;
						func_44(&(Global_1347343.f_11), (1 << 9));
					}
					MISC::COPY_SCRIPT_STRUCT(&Global_40, &(Global_2621440[iVar0 /*12066*/]), 12066);
					MISC::COPY_SCRIPT_STRUCT(&Global_12106, &(Global_2645573[iVar0 /*5398*/]), 5398);
					MISC::COPY_SCRIPT_STRUCT(&Global_17504, &(Global_2656370[iVar0 /*3206*/]), 3206);
					MISC::COPY_SCRIPT_STRUCT(&Global_20710, &(Global_2662783[iVar0 /*2408*/]), 2408);
					MISC::COPY_SCRIPT_STRUCT(&Global_23118, &(Global_2667600[iVar0 /*1769*/]), 1769);
					MISC::COPY_SCRIPT_STRUCT(&Global_24887, &(Global_2671139[iVar0 /*1909*/]), 1909);
					MISC::COPY_SCRIPT_STRUCT(&Global_26796, &(Global_2674958[iVar0 /*777*/]), 777);
					MISC::COPY_SCRIPT_STRUCT(&Global_27573, &(Global_2676513[iVar0 /*4501*/]), 4501);
					MISC::COPY_SCRIPT_STRUCT(&Global_32074, &(Global_2685516[iVar0 /*4234*/]), 4234);
					if (iVar0 == 1)
					{
						if (MISC::_0x7CF96F1250EF3221(iVar0))
						{
							MISC::_0x6C7B68D3CE60E8DE(iVar0);
						}
						else if (MISC::_0x7CF96F1250EF3221(0))
						{
							MISC::_0x6C7B68D3CE60E8DE(0);
							func_45();
							iVar0 = 0;
						}
						if (func_39((1 << 15)))
						{
							SCRIPTS::_ACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_REPLAYING_MISSION"));
						}
					}
					else
					{
						if (MISC::_0x7CF96F1250EF3221(iVar0))
						{
							if (func_39((1 << 15)) && func_46(Global_1879514.f_1))
							{
								MISC::_0x627B68D9CE6EE8DE(iVar0);
							}
							else
							{
								MISC::_0x6C7B68D3CE60E8DE(iVar0);
							}
							func_45();
						}
						else if (MISC::_0x7CF96F1250EF3221(1))
						{
							MISC::_0x6C7B68D3CE60E8DE(1);
							iVar0 = 1;
						}
						if (func_39((1 << 15)))
						{
							func_47((1 << 15));
							func_48();
							func_49();
							SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_REPLAYING_MISSION"));
							HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
							func_50(PLAYER::PLAYER_PED_ID());
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							func_52(func_51(Global_1879514.f_1));
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							AUDIO::TRIGGER_MUSIC_EVENT("STOP_MUSIC_8S");
						}
						else if (!func_39(2))
						{
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
						}
					}
					func_53(iVar0);
					func_47(24);
				}
				else if (func_54())
				{
					func_55();
					func_56(1);
				}
				func_57();
				if ((!func_39(32) && func_58()) && !Global_40)
				{
					CLOCK::SET_CLOCK_DATE(1, 0, 1898);
				}
				func_59();
				func_22();
				func_60(1);
				func_61(1);
				func_62();
				func_63();
				func_64();
				MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
				MISC::_0x1096603B519C905F("");
				func_23();
				GRAPHICS::_0xA21AF60C9F99CCC5();
				func_65(1);
			}
			break;
		case 1:
			if (func_66("main", (1 << 10), &(Global_23[0])))
			{
				func_67();
				func_65(2);
			}
			break;
		case 2:
			func_68();
			func_65(3);
			break;
		case 3:
			if (Global_43889)
			{
				Global_43889 = 0;
				PLAYER::FORCE_CLEANUP(2);
				func_65(4);
			}
			break;
		case 4:
			func_20();
			func_65(5);
			break;
		case 5:
			if (func_21())
			{
				if (func_39((1 << 12)))
				{
					func_69(4);
				}
				func_65(0);
			}
			break;
	}
}

int func_16()
{
	if (Global_1572887.f_12 == -1)
	{
		if (!func_58())
		{
			return 0;
		}
		else if (!func_70(0))
		{
			return 0;
		}
		else if (func_71())
		{
			return 0;
		}
	}
	if (!(Global_21 & 64) != 0)
	{
		return 0;
	}
	if (func_39(32898))
	{
		return 0;
	}
	if (func_46(Global_1572864.f_8))
	{
		return 0;
	}
	if (Global_1572864.f_21 != 0)
	{
		return 0;
	}
	if (func_19(&Global_0, 32))
	{
		if (func_19(&Global_0, 2))
		{
			return 1;
		}
		if (func_19(&Global_0, 64))
		{
			return 1;
		}
	}
	if (func_72(0, 1, 1))
	{
		return 0;
	}
	if (func_73(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return 0;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return 0;
	}
	if (func_13() != 2 && func_13() != 3)
	{
		return 0;
	}
	if (func_74())
	{
		return 0;
	}
	return 1;
}

int func_17()
{
	if (!func_19(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			func_75(&Global_0, 1);
			return 0;
		}
		if (!func_58())
		{
			func_75(&Global_0, 1);
			return 0;
		}
		if (func_46(func_76(0)))
		{
			return 0;
		}
		if (Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_77(Global_1935630, (1 << 11)) || func_39(38))
		{
			return 0;
		}
		if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
		{
			return 0;
		}
		if (SAVE::SAVEGAME_IS_SAVE_PENDING())
		{
			return 0;
		}
		if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != Global_1905941)
		{
			return 0;
		}
		if (func_19(&Global_0, 16))
		{
			func_75(&Global_0, 16);
			return 0;
		}
		if (Global_1914319.f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_78(0);
	}
	if (SAVE::SAVEGAME_IS_SAVE_PENDING())
	{
		return 0;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return 0;
	}
	func_79(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 /*3*/ };
	Global_0.f_14 = 0;
	func_80(&Global_0, 4);
	func_75(&Global_0, 2);
	func_75(&Global_0, 32);
	func_75(&Global_0, 64);
	return 1;
}

void func_18()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 /*3*/ };
	func_81(&Global_0);
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

void func_20()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_23[iVar0], false) && !SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_23[iVar0]))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_23[iVar0]);
		}
		iVar0++;
	}
}

bool func_21()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_23[iVar1], false))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_22()
{
	int iVar0;

	func_82((1 << 9));
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_83(iVar0);
		iVar0++;
	}
	DATAFILE::_0x3168BA5D6DECE323();
}

void func_23()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_24()
{
	Global_1572887.f_94.f_40 = MISC::GET_GAME_TIMER();
}

void func_25(int iParam0)
{
	Global_1572887.f_94.f_1 = iParam0;
}

void func_26(int iParam0)
{
	Global_1572887.f_94 = iParam0;
}

int func_27()
{
	return Global_1572887.f_12;
}

void func_28(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_29()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_31(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_32(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_33(1);
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_84(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_85(&(Global_40.f_12019.f_42), 1);
	}
}

void func_34()
{
	Global_1898077 = 1;
}

void func_35(int iParam0)
{
	Global_1572864.f_3 |= iParam0;
}

void func_36(int iParam0, int iParam1)
{
	Global_1572887.f_182 = iParam0;
	Global_1572887.f_182.f_1 = iParam1;
	func_86(28);
}

void func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

void func_38(int iParam0, int iParam1)
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
}

bool func_39(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

void func_40()
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	var uVar8;
	int iVar9;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	switch (iLocal_19)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			func_87(1);
			if (func_88())
			{
				vVar2 = { func_89(&fVar1) /*3*/ };
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, vVar2, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, fVar1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
				else
				{
					return;
				}
				STREAMING::LOAD_SCENE_START_SPHERE(vVar2, 75.0f, 1);
				iLocal_20 = 0;
				func_69(1);
			}
			else
			{
				func_69(3);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			if (STREAMING::IS_LOAD_SCENE_ACTIVE() || iLocal_20 >= 100)
			{
				iLocal_20 = 0;
				func_69(2);
			}
			else
			{
				iLocal_20++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			if ((STREAMING::IS_LOAD_SCENE_ACTIVE() && STREAMING::IS_LOAD_SCENE_LOADED()) || iLocal_20 >= 100)
			{
				STREAMING::LOAD_SCENE_STOP();
				func_69(3);
			}
			else
			{
				iLocal_20++;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			else
			{
				return;
			}
			if ((func_58() && Global_40) && Global_40.f_39 != 0)
			{
				if (func_90(Global_40.f_39))
				{
					func_69(4);
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO") || func_90(joaat("PLAYER_ZERO")))
			{
				func_69(4);
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			Global_35 = iVar0;
			func_91();
			if (!func_92())
			{
				if (func_93())
				{
					func_94();
				}
			}
			if (func_88())
			{
				func_43((1 << 12));
				func_69(5);
			}
			else if (func_41(256))
			{
				func_95();
				func_96();
				Global_1894899.f_8 = 1;
				if (func_97(func_41((1 << 15))))
				{
					func_99(func_98(), &vVar5, &uVar8);
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), vVar5) > 5.0f)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar5, false, false, true, true);
					}
					if (func_100(func_98()))
					{
						func_101(1, func_98());
						func_43((1 << 12));
						func_69(5);
					}
				}
				else
				{
					iVar9 = func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
					if (func_100(iVar9))
					{
						func_101(0, iVar9);
						func_43((1 << 12));
						func_69(5);
					}
				}
			}
			break;
		case 5:
			if (!Global_40 && !func_41(4))
			{
				func_103();
			}
			break;
	}
}

bool func_41(int iParam0)
{
	return (Global_21 & iParam0) != 0;
}

int func_42()
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 /*3*/ };
		return Global_1224589.f_5;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) /*3*/ };
	return PLAYER::PLAYER_ID();
}

void func_43(int iParam0)
{
	Global_21 |= iParam0;
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_45()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(false);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_104(iVar0))
		{
			func_105(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

bool func_46(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_47(int iParam0)
{
	Global_1572864.f_3 -= (Global_1572864.f_3 & iParam0);
}

void func_48()
{
	func_106();
	func_107();
	func_108();
	func_109();
}

void func_49()
{
	Global_1327590.f_9 = -1;
	Global_1327590.f_10.f_11 = 0;
	strcpy_s(&(Global_1327590.f_10.f_1), 64, "");
}

void func_50(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	func_110(iParam0);
	PED::CLEAR_PED_WETNESS(iParam0);
	PED::_0xA7A806677F8DE138(iParam0);
	PED::_0xA064BBABB064446F(iParam0);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::_0x9184788BFF1EDAD7(iParam0, 0.0f);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, iVar0, "ALL");
		iVar0++;
	}
}

char[] func_51(int iParam0)
{
	char[] cVar0[8];

	if (!func_46(iParam0))
	{
		return cVar0;
	}
	switch (func_111(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_112(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_113(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_114(0, 10, 11, joaat("CABR01") /* GXTEntry: "High and Low Finance" */))
			{
				strcpy_s(&cVar0, 8, "CABR01" /* GXTEntry: "High and Low Finance" */);
			}
			break;
	}
	return cVar0;
}

void func_52(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_115();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_111(Global_1879514.f_1) == 1)
			{
				func_116(5, 1);
			}
			else if (func_111(Global_1879514.f_1) == 8 && (func_117(Global_1347702[func_113(Global_1879514.f_1) /*49*/].f_12, 1) || func_117(Global_1347702[func_113(Global_1879514.f_1) /*49*/].f_12, (1 << 25))))
			{
				func_116(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_53(int iParam0)
{
	func_118(Global_2621440[iParam0 /*12066*/].f_9.f_14);
	LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), 0);
	LAW::CLEAR_WANTED_SCORE(PLAYER::GET_PLAYER_INDEX());
	COMPAPP::_0xCCB4635A071FB62D();
	if (Global_40.f_9.f_20 > 0)
	{
		LAW::ADD_BOUNTY(PLAYER::GET_PLAYER_INDEX(), Global_40.f_9.f_20);
	}
}

bool func_54()
{
	if (func_39((1 << 13)))
	{
		return true;
	}
	return false;
}

void func_55()
{
	func_119();
	func_120();
	func_121();
	func_122();
	func_123();
	func_124();
	func_125();
	func_126();
	func_127();
}

void func_56(bool bParam0)
{
	if (Global_1572887.f_12 == 0)
	{
		return;
	}
	Global_40.f_1 = bParam0;
	TELEMETRY::_TELEMETRY_SET_IS_FLOW(bParam0);
}

void func_57()
{
	func_128(&(Global_40.f_40));
}

bool func_58()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_59()
{
	Global_21 = 0;
}

void func_60(bool bParam0)
{
	func_22();
	if (bParam0)
	{
		func_130(3, 488600546, 17995);
		func_130(5, joaat("POST_OFFICE"), 18101);
		func_130(6, joaat("SHOP_INVENTORIES"), 18331);
		func_130(7, 1515062182, 19003);
		func_130(9, joaat("AMBIENTVIGNETTES"), 19377);
		func_130(10, -1408350261, 19674);
		func_130(11, -1226891409, 19757);
		func_130(13, 2146271685, 19974);
		func_130(12, joaat("TRAIN_ROUTES"), 20417);
		func_130(15, joaat("RESPAWNLOCATIONS"), 20648);
		func_130(16, -1516564258, 21695);
		func_130(17, joaat("COLLECTIBLES"), 21901);
		func_130(18, joaat("SATCHEL_ELEMENTS"), 22371);
		func_130(19, joaat("CARAVAN_CAMPS"), 22475);
		func_130(20, joaat("COMPANION_ACTIVITIES"), 23553);
		func_130(21, -1132418307, 25059);
		func_130(22, -1336593721, 25224);
		func_130(23, joaat("HONOR_ITEMS"), 25581);
	}
	func_43((1 << 9));
}

void func_61(int iParam0)
{
	bool bVar0;
	var uVar1[150];
	var uVar152[150];
	var uVar303[150];
	int iVar454;

	bVar0 = func_27() == -1;
	func_82((1 << 16));
	if (bVar0)
	{
		func_148();
	}
	if (func_149())
	{
		return;
	}
	func_150();
	func_151();
	func_152();
	VOLUME::_0x748C5F51A18CB8F0(false);
	func_153(&uVar1, &(Global_1894899.f_172), " ");
	func_153(&uVar152, &(Global_1894899.f_173), " - Town");
	func_153(&uVar303, &(Global_1894899.f_174), " - Wanted");
	VOLUME::_0x748C5F51A18CB8F0(true);
	func_154(1);
	if (func_27() == -1)
	{
		func_155(&(Global_1894899.f_170));
		func_156();
		func_157(&(Global_1894899.f_171));
		func_158();
	}
	func_159();
	VOLUME::_0x748C5F51A18CB8F0(false);
	Global_1894899.f_176 = 0;
	Global_1894899.f_177 = 0;
	Global_1894899.f_178 = 0;
	Global_1894899.f_179 = 0;
	Global_1894899.f_180 = 0;
	Global_1894899.f_181 = 0;
	iVar454 = 0;
	while (iVar454 < 130)
	{
		func_160(&(Global_1894899.f_170), iVar454, uVar1[iVar454], uVar152[iVar454], uVar303[iVar454]);
		func_161(&(Global_1894899.f_171), iVar454);
		iVar454++;
	}
	func_162();
	VOLUME::_0x748C5F51A18CB8F0(true);
	func_163(&(Global_1894899.f_170));
	func_164(&(Global_1894899.f_171));
	func_165();
	func_166();
	func_43((1 << 16));
}

void func_62()
{
	func_167(8);
}

void func_63()
{
	func_167(256);
}

void func_64()
{
	func_168();
	func_169(0);
	func_169(joaat("WS_PRONGHORN_RANCH_EMPTY"));
	func_169(joaat("WS_DOWNS_RANCH_DOWNS"));
	func_169(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
	func_169(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_169(joaat("WS_CINCO_TORRES_DOOR_INTACT"));
	func_169(joaat("WS_RHODES_GRAVE_NORMAL"));
	func_169(joaat("WS_NEW_COM_BANK_BEFORE"));
	func_169(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
	func_169(joaat("WS_HERE_KITTY_WAGONS_GONE"));
	func_169(joaat("WS_NO_ANIMALS_GRIZZLIES"));
	func_169(joaat("WS_GUARMA_RUIN1_FLOOR_INTACT"));
	func_169(joaat("WS_UTOPIA_TREE_STANDING"));
	func_169(joaat("WS_STRAWBERRY_JAIL_INTACT"));
	func_169(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
	func_169(joaat("WS_RHODES_JAIL_INTACT"));
	func_169(joaat("WS_VALENTINE_JAIL_INTACT"));
	func_169(joaat("WS_ANNES_SETTLERS_CLOSED_OFF"));
	func_169(joaat("WS_VALENTINE_RES_CURTAINS_CLOSED"));
	func_169(-1556423728);
	func_169(-144653976);
	func_169(-351362068);
	func_169(-939114198);
	func_169(-1318987693);
	func_169(joaat("WS_RHODES_SHERIFF_LOCKED"));
	func_169(joaat("WS_GRZ_WEST_CAMP_SITE"));
	func_169(joaat("WS_RHODES_BANK_WALL_INTACT"));
	func_169(1216784232);
	func_169(joaat("WS_GUARMA3_TOWER_NORMAL"));
	func_169(joaat("WS_VALENTINE_BANK_WINDOWS"));
	func_169(joaat("WS_VALENTINE_SALOON_WINDOWS"));
	func_169(joaat("WS_RHODES_FENCE_OPEN"));
	func_169(joaat("WS_RHODES_SALOON_TABLE_UP"));
	func_169(joaat("WS_BGV_SHACK_LADDER_DOWN"));
	func_169(joaat("WS_CALIGA_HALL_TABACCO_START"));
	func_169(joaat("WS_POISONED_WELL_BLOCKED_ENTRY"));
	func_169(joaat("WS_SHADY_BELLE_HIDEOUT"));
	func_169(joaat("WS_FEUD1_WATER_TOWER_UP"));
	func_169(joaat("WS_SISIKA_WINDOW_COVER"));
	func_169(joaat("WS_MICAH_CAMP_EMPTY"));
	func_169(joaat("WS_ANTENOR_DOCKED"));
	func_169(joaat("WS_VALENTINE_AUCTION_GATES_OPEN"));
	func_169(joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER"));
	func_169(joaat("WS_THIEVES_LANDING_BOAT"));
	func_169(joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS"));
	func_169(joaat("WS_SAINT_DENIS_DOCK_BOATS"));
	func_169(joaat("WS_BEECHERS_SHACK"));
	func_169(joaat("WS_VALENTINE_GENSTORE_ACTIVE"));
	func_169(joaat("WS_VALENTINE_BUTCHER_ACTIVE"));
	func_169(joaat("WS_SAINT_DENIS_DOCK_TRAINS"));
	func_170(joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED"));
	func_170(joaat("WS_GUARMA_WATER"));
	func_171();
	func_170(joaat("WS_NEW_GAR_BRON_MPCOVER_01"));
	func_170(joaat("WS_MP_SDS_WELL_COVER"));
}

void func_65(int iParam0)
{
	iLocal_18 = iParam0;
}

bool func_66(char* sParam0, int iParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return false;
	}
	*uParam2 = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_67()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	SCRIPTS::REQUEST_SCRIPT("long_update");
	SCRIPTS::REQUEST_SCRIPT("medium_update");
	SCRIPTS::REQUEST_SCRIPT("short_update");
	SCRIPTS::REQUEST_SCRIPT("flow_controller");
	SCRIPTS::REQUEST_SCRIPT("player_horse");
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	while (!bVar0)
	{
		if (!bVar1)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("long_update"))
			{
				Global_23[1] = SCRIPTS::START_NEW_SCRIPT("long_update", 1300);
				bVar1 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("long_update");
			}
		}
		if (!bVar2)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("medium_update"))
			{
				Global_23[2] = SCRIPTS::START_NEW_SCRIPT("medium_update", 1300);
				bVar2 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("medium_update");
			}
		}
		if (!bVar3)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("short_update"))
			{
				Global_23[3] = SCRIPTS::START_NEW_SCRIPT("short_update", 1300);
				bVar3 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("short_update");
			}
		}
		if (!bVar4)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("flow_controller"))
			{
				Global_23[4] = SCRIPTS::START_NEW_SCRIPT("flow_controller", (1 << 10));
				bVar4 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("flow_controller");
			}
		}
		if (!bVar5)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("player_horse"))
			{
				Global_23[5] = SCRIPTS::START_NEW_SCRIPT("player_horse", (1 << 10));
				bVar5 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("player_horse");
			}
		}
		if (Global_1572887.f_12 == -1)
		{
			if ((((bVar1 && bVar2) && bVar3) && bVar4) && bVar5)
			{
				bVar0 = true;
			}
		}
		else if ((((bVar1 && bVar2) && bVar3) && bVar4) && bVar5)
		{
			bVar0 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("long_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("medium_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("short_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_horse");
}

void func_68()
{
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	Global_43889 = 0;
}

void func_69(int iParam0)
{
	iLocal_19 = iParam0;
}

bool func_70(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_172(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_71()
{
	return Global_1425247.f_53;
}

bool func_72(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_173())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_113(Global_1898164.f_1[0 /*5*/]);
		if (func_174(iVar0) && func_117(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_46(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 & (40959 & (-1 - iParam0))) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return (iParam0 & 1) == 0;
		case 4:
			return (iParam0 & 2) == 0;
		case 6:
			return (iParam0 & 4) == 0;
		case 2:
			return (iParam0 & 16) == 0;
		case 5:
			return (iParam0 & 32) == 0;
		case 9:
			return (iParam0 & 64) == 0;
		case 8:
			return (iParam0 & 8) == 0;
		case 10:
			return (iParam0 & (1 << 9)) == 0;
		case 3:
			return (iParam0 & 128) == 0;
		case 11:
			return (iParam0 & 256) == 0;
		default:
			break;
	}
	return false;
}

bool func_73(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_175(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &sVar0);
		if ((bParam3 || sVar0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == joaat("LAW_DISPATCH_PENDING"))
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &sVar18))
		{
			if (sVar18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(sVar18.f_0, sVar18.f_7) > 0))
			{
				return true;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iParam0, false, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_74()
{
	return (func_77(Global_1935630, (1 << 12)) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RESPAWN_DUMP_BODY")) > 0);
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_2 -= (uParam0->f_2 & iParam1);
}

int func_76(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_78(bool bParam0)
{
	if (!func_19(&Global_0, 2))
	{
		func_176(0, 0);
		SAVE::SAVEGAME_SAVE_SP(joaat("SAVEGAMETYPE_SP_AUTOSAVE"));
		func_80(&Global_0, 2);
		if (bParam0)
		{
			func_80(&Global_0, 32);
		}
		func_75(&Global_0, 1);
	}
}

void func_79(int iParam0, bool bParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_39((1 << 15)))
	{
		return;
	}
	if (!func_39((1 << 15)))
	{
		func_176(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (func_39((1 << 15)))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_177();
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_81(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_82(int iParam0)
{
	Global_21 -= (Global_21 & iParam0);
}

void func_83(int iParam0)
{
	if (!func_178(iParam0))
	{
		return;
	}
	if (Global_1914270[iParam0] != 0)
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1914270[iParam0]);
		Global_1914270[iParam0] = 0;
	}
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887.f_182.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887.f_182.f_2 != -1)
	{
	}
	if (Global_1572887.f_182.f_3 != -1)
	{
	}
	if (Global_1572887.f_182.f_4 != -1)
	{
	}
	if (Global_1572887.f_182.f_5 != -1)
	{
	}
	if (Global_1572887.f_182.f_6 != -1)
	{
	}
	if (Global_1572887.f_182.f_8 != 0)
	{
	}
}

void func_87(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_179(1, bParam0))
	{
	}
	func_180();
	Global_1934765 = 0;
}

bool func_88()
{
	if (func_39(128) && !func_39((1 << 12)))
	{
		return true;
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_181(joaat("BENCHMARK"))))
	{
		return true;
	}
	if (func_39(32))
	{
		return false;
	}
	if (Global_40)
	{
		return false;
	}
	return true;
}

Vector3 func_89(float fParam0)
{
	Vector3 vVar0;

	if (!func_182(Global_40.f_9.f_7, 0.0f, 0.0f, 0.0f, 1056964608 /* Float: 0.5f */, 1))
	{
		*fParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}
	if (func_58())
	{
		if (func_39(2))
		{
			*fParam0 = func_183();
			return func_184();
		}
		else
		{
			return Global_40.f_9.f_7;
		}
	}
	else if (func_39(32))
	{
		*fParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}
	return vVar0;
}

bool func_90(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			PED::_REMOVE_PED_FROM_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true, false);
			return false;
		}
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return false;
	}
	PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iParam0, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_185(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0);
	func_186(iParam0, -1);
	Global_40.f_39 = iParam0;
	Global_1935630.f_2 = iParam0;
	func_187(2, 0, 2, 0, 0);
	return true;
}

void func_91()
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0.f_1 = -15;
	iVar3 = 0;
	while (iVar3 < 15)
	{
		vVar0 = { Global_40.f_4237[iVar3 /*3*/] /*3*/ };
		if (func_188(vVar0.x))
		{
			iVar4 = vVar0.y;
			if (iVar4 != -15 && func_189(iVar4))
			{
				func_190(vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (func_191(vVar0.x))
			{
			}
		}
		iVar3++;
	}
}

bool func_92()
{
	return Global_1900383.f_443;
}

bool func_93()
{
	if (func_27() != -1)
	{
		return false;
	}
	if (!func_58())
	{
		return false;
	}
	if (!func_172(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_172(Global_1835011[2 /*74*/].f_1, 1) && func_172(Global_1347702[120 /*49*/].f_15, 1)) && !func_172(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_172(Global_1835011[37 /*74*/].f_1, 1) && !func_172(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_172(Global_1835011[57 /*74*/].f_1, 1) && !func_172(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_172(Global_1835011[26 /*74*/].f_1, 1) && !func_172(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_172(Global_1835011[62 /*74*/].f_1, 1) && func_172(Global_1835011[63 /*74*/].f_1, 1)) && !func_172(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_172(Global_1835011[75 /*74*/].f_1, 1) && !func_172(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_172(Global_1835011[76 /*74*/].f_1, 1) && !func_172(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_172(Global_1835011[40 /*74*/].f_1, 1) && func_172(Global_1835011[41 /*74*/].f_1, 1)) && !func_172(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_172(Global_1835011[62 /*74*/].f_1, 1) && func_172(Global_1835011[63 /*74*/].f_1, 1)) && !func_172(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_172(Global_1835011[65 /*74*/].f_1, 1) && func_172(Global_1835011[66 /*74*/].f_1, 1)) && !func_172(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_94()
{
	Global_1900383.f_443 = 1;
}

void func_95()
{
	bool bVar0;
	int iVar1;

	if (func_149())
	{
		return;
	}
	func_192(8);
	func_193(Global_1897952.f_35);
	func_194(Global_1897952.f_35);
	Global_1897952.f_35++;
	if (Global_1897952.f_35 >= 17)
	{
		Global_1897952.f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952.f_36 != -1)
	{
		if (Global_1897952.f_36 != func_195())
		{
			func_196(Global_1897952.f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_197(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_195() != iVar1)
		{
			Global_1897952.f_37 = 1;
			if (func_196(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952.f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false)) && func_195() != -1)
		{
			func_196(func_195());
		}
		Global_1897952.f_37 = 0;
	}
}

void func_96()
{
	if (func_27() == -1)
	{
		if (func_198())
		{
			func_199();
		}
	}
	if ((Global_1894899 & 64) != 0)
	{
		func_200();
		func_201(0);
	}
	func_202();
	func_203();
	func_204();
}

bool func_97(bool bParam0)
{
	if (!Global_40)
	{
		return false;
	}
	if (!func_58())
	{
		return false;
	}
	if (func_205())
	{
		return false;
	}
	if (func_39(2))
	{
		return false;
	}
	if (bParam0)
	{
		return false;
	}
	if (!func_206())
	{
		return false;
	}
	if (func_93())
	{
		return false;
	}
	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
	{
		return false;
	}
	return true;
}

int func_98()
{
	return Global_40.f_4283.f_1;
}

void func_99(int iParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	if (!func_207(iParam0))
	{
		*uParam1 = { Global_36 /*3*/ };
		if (!Global_1935630.f_12)
		{
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f /*3*/ };
			*uParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486.0f, 2215.8f, 246.9f /*3*/ };
			*uParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f /*3*/ };
			*uParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f /*3*/ };
			*uParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f /*3*/ };
			*uParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f /*3*/ };
			*uParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f /*3*/ };
			*uParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f /*3*/ };
			*uParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f /*3*/ };
			*uParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f /*3*/ };
			*uParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f /*3*/ };
			*uParam2 = 163.0f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473.0f, 179.7f /*3*/ };
			*uParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f /*3*/ };
			*uParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f /*3*/ };
			*uParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f /*3*/ };
			*uParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f /*3*/ };
			*uParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f /*3*/ };
			*uParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f /*3*/ };
			*uParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f /*3*/ };
			*uParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f /*3*/ };
			*uParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f /*3*/ };
			*uParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f /*3*/ };
			*uParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471.0f, -7120.0f, 77.0f /*3*/ };
			*uParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f /*3*/ };
			*uParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607.0f, -3059.301f, 1.8f /*3*/ };
			*uParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f /*3*/ };
			*uParam2 = 90.0f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f /*3*/ };
			*uParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f /*3*/ };
			*uParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f /*3*/ };
			*uParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f /*3*/ };
			*uParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f /*3*/ };
			*uParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f /*3*/ };
			*uParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f /*3*/ };
			*uParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f /*3*/ };
			*uParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f /*3*/ };
			*uParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f /*3*/ };
			*uParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f /*3*/ };
			*uParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f /*3*/ };
			*uParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f /*3*/ };
			*uParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683.0f, 187.7f /*3*/ };
			*uParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f /*3*/ };
			*uParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f /*3*/ };
			*uParam2 = 170.0f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508.0f, 146.6f /*3*/ };
			*uParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f /*3*/ };
			*uParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f /*3*/ };
			*uParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f /*3*/ };
			*uParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f /*3*/ };
			*uParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f /*3*/ };
			*uParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f /*3*/ };
			*uParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f /*3*/ };
			*uParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f /*3*/ };
			*uParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f /*3*/ };
			*uParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f /*3*/ };
			*uParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f /*3*/ };
			*uParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122.0f, 482.2f, 94.7f /*3*/ };
			*uParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f /*3*/ };
			*uParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f /*3*/ };
			*uParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f /*3*/ };
			*uParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f /*3*/ };
			*uParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f /*3*/ };
			*uParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f /*3*/ };
			*uParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f /*3*/ };
			*uParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f /*3*/ };
			*uParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f /*3*/ };
			*uParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888.0f, -745.2f, 41.8f /*3*/ };
			*uParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f /*3*/ };
			*uParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f /*3*/ };
			*uParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f /*3*/ };
			*uParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f /*3*/ };
			*uParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f /*3*/ };
			*uParam2 = 14.4916f;
			return;
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f /*3*/ };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f /*3*/ };
				*uParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f /*3*/ };
			*uParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f /*3*/ };
			*uParam2 = 121.0f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f /*3*/ };
			*uParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f /*3*/ };
			*uParam2 = 353.0f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f /*3*/ };
			*uParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f /*3*/ };
			*uParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f /*3*/ };
			*uParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f /*3*/ };
			*uParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f /*3*/ };
			*uParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f /*3*/ };
			*uParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f /*3*/ };
			*uParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f /*3*/ };
			*uParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f /*3*/ };
			*uParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f /*3*/ };
			*uParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f /*3*/ };
			*uParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f /*3*/ };
			*uParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f /*3*/ };
			*uParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f /*3*/ };
			*uParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171.0f /*3*/ };
			*uParam2 = 0.0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f /*3*/ };
			*uParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f /*3*/ };
			*uParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f /*3*/ };
			*uParam2 = 34.0605f;
			return;
		case 25:
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f /*3*/ };
			*uParam2 = 304.563f;
			return;
		default:
			break;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		*uParam1 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) /*3*/ };
		vVar0 = { VOLUME::GET_VOLUME_ROTATION(Global_1888801[iParam0 /*35*/].f_3) /*3*/ };
		*uParam2 = vVar0.z;
	}
}

bool func_100(int iParam0)
{
	if (func_205())
	{
		return true;
	}
	if (!func_207(iParam0))
	{
		return true;
	}
	if (func_208(iParam0) == 4)
	{
		if (iParam0 != func_98())
		{
			return true;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_23)))
	{
		return true;
	}
	if (func_209(iParam0))
	{
		return true;
	}
	else
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iParam0 /*35*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
		}
		if (func_210(iParam0, 2))
		{
		}
		if (func_210(iParam0, 1))
		{
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
		}
	}
	return false;
}

void func_101(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	Vector3 vVar2;
	int iVar5;
	struct<55> /*440*/ sVar6;
	struct<10> /*80*/ sVar75;
	struct<16> /*128*/ sVar85;
	struct<16> /*128*/ sVar101;

	if (func_93())
	{
		return;
	}
	if (bParam0 || Global_40.f_9 == 3)
	{
		if ((Global_40.f_9 == 1 || Global_40.f_9 == 2) || Global_40.f_9 == 0)
		{
			vVar2 = { func_212(func_211(iParam1), &uVar0, &uVar1) /*3*/ };
			if (!func_213(vVar2))
			{
				func_214(vVar2);
				Global_40.f_9.f_15 = iParam1;
				func_215(vVar2, uVar1, uVar0, 0);
				func_216();
				func_217(6);
				func_35((1 << 12));
				func_43((1 << 14));
				func_82((1 << 13));
				func_218(&Global_1935630, (1 << 17));
			}
			else
			{
				iVar5 = func_219(iParam1);
				if (func_220(iVar5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(Global_1395601.f_5[iVar5 /*28*/].f_23))
					{
						func_82((1 << 13));
						func_43((1 << 17));
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[iVar5 /*28*/].f_24, false))
						{
							func_221(iVar5, (1 << 19));
							SCRIPTS::REQUEST_SCRIPT("property_use_core");
							while (!SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
							{
								BUILTIN::WAIT(0);
							}
							func_218(&Global_1935630, (1 << 14));
							sVar6.f_5 = 8;
							sVar6.f_14 = -1;
							sVar6.f_22 = -1082130432;
							sVar6.f_23 = -1;
							sVar6.f_34 = 6;
							sVar6.f_54.f_4 = 1;
							sVar6.f_54.f_5 = 1;
							sVar6.f_2 = Global_1395601.f_5[iVar5 /*28*/].f_23;
							sVar6.f_15 = 1;
							Global_1395601.f_5[iVar5 /*28*/].f_24 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &sVar6, 69, 6096);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
							func_218(&Global_1935630, (1 << 17));
						}
					}
				}
			}
		}
		else if (Global_40.f_9 == 3)
		{
			func_82((1 << 13));
			if (!func_222("player_camp"))
			{
				sVar75.f_0 = 536871424;
				sVar85 = { sVar75 /*10*/ };
				strcpy_s(&(sVar85.f_10), 32, "player_camp");
				sVar85.f_14 = 6096;
				sVar85.f_15 = 1;
				func_223(sVar85, 0);
				func_218(&Global_1935630, (1 << 17));
			}
		}
		else if (Global_40.f_9 == 4)
		{
			if (func_197(Global_40.f_9.f_7) != 8)
			{
				func_82((1 << 13));
				if (!func_222("ambient_load"))
				{
					strcpy_s(&(sVar101.f_10), 32, "ambient_load");
					sVar101.f_14 = (1 << 10);
					sVar101.f_15 = 0;
					func_223(sVar101, 0);
					func_218(&Global_1935630, (1 << 17));
				}
			}
			else
			{
				func_35((1 << 12));
			}
		}
		if (func_72(0, 0, 1))
		{
			func_82((1 << 13));
			MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}
	else
	{
		func_35((1 << 12));
		if (Global_40)
		{
			func_218(&Global_1935630, (1 << 17));
		}
	}
	if (func_77(Global_1935630, (1 << 17)))
	{
		func_118(Global_40.f_9.f_14);
	}
	if (((((((Global_40 && func_58()) && func_206()) || func_39((1 << 12))) && !func_41((1 << 14))) && !func_41((1 << 15))) && !func_41((1 << 17))) && Global_40.f_9 != 3)
	{
		func_224(1);
		func_216();
		func_217(6);
		func_35((1 << 12));
	}
}

int func_102(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_225();
	if (func_207(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_226(vParam0, iParam3);
}

void func_103()
{
	int iVar0;

	if (Global_1934603.f_161 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
			{
				func_227(iVar0);
			}
			iVar0++;
		}
	}
}

bool func_104(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(false);
	if (!func_104(iParam0))
	{
		return;
	}
	func_228(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_207(iVar0))
		{
			if (func_230(func_229(iVar0, 1, 1)) == iParam0)
			{
				func_231(iVar0, 0);
				func_232(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_233(iVar1))
		{
			if (func_234(iVar1) == iParam0)
			{
				func_235(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_236(iVar0))
		{
			iVar1 = func_237(iVar0);
			if (func_238(iVar1))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar1))
				{
					STREAMING::REMOVE_IPL_HASH(iVar1);
				}
			}
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (func_239(iVar0, iVar2))
				{
					iVar1 = func_240(iVar0, iVar2);
					func_241(iVar1, 0);
					if (func_238(iVar1))
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(iVar1))
						{
							STREAMING::REMOVE_IPL_HASH(iVar1);
						}
					}
				}
				iVar2++;
			}
			iVar5 = 0;
			while (iVar5 < 27)
			{
				iVar3 = func_242(iVar0, iVar5, 0);
				iVar4 = func_242(iVar0, iVar5, 1);
				if (func_238(iVar3))
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(iVar3))
					{
						STREAMING::REMOVE_IPL_HASH(iVar3);
					}
				}
				if (func_238(iVar4))
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(iVar4))
					{
						STREAMING::REMOVE_IPL_HASH(iVar4);
					}
				}
				iVar5++;
			}
		}
		iVar6 = -1;
		func_243(-1, 0, 0);
		func_244(-1, &iVar6, 0, 0, 0);
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	int iVar9;

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("dewclm_nav_camp_00"))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("dewclm_nav_camp_00");
	}
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("shb_nav_camp_00"))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_236(iVar0))
		{
			iVar9 = 0;
			while (iVar9 <= 2)
			{
				if (func_239(iVar0, iVar9))
				{
					sVar1 = { func_245(iVar0, iVar9) /*8*/ };
					if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(&sVar1))
					{
						PATHFIND::_NAVMESH_DEACTIVATE_SWAP(&sVar1);
					}
				}
				iVar9++;
			}
		}
		iVar0++;
	}
}

void func_108()
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(iVar0[iVar4]))
		{
			STREAMING::REMOVE_IPL_HASH(iVar0[iVar4]);
		}
		iVar4++;
	}
}

void func_109()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_247(iVar0, func_246(iVar0), 0, 0);
		iVar0++;
	}
}

void func_110(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

int func_111(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return func_249(func_248(iParam0));
}

int func_112(int iParam0)
{
	if (func_111(iParam0) == 1)
	{
		return func_113(iParam0);
	}
	return -1;
}

int func_113(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_250(func_248(iParam0));
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_251())
	{
		iVar2 = func_251();
	}
	iVar5 = func_252(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_248(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_248(iVar6) == 0)
			{
				return func_253(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_248(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_248(iVar6) == 0)
			{
				return func_253(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == 0)
			{
				return func_253(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_254(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_255(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_256(iParam0))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (!func_257(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_117(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_118(int iParam0)
{
	CLOCK::SET_CLOCK_TIME(func_258(iParam0), func_259(iParam0), func_260(iParam0));
	CLOCK::SET_CLOCK_DATE(func_261(iParam0), func_262(iParam0), func_263(iParam0));
}

void func_119()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_40, &Global_2693985, 12066);
}

void func_120()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 771)
	{
		Global_12106[iVar0 /*7*/].f_2 = 0;
		Global_12106[iVar0 /*7*/].f_3 = 0;
		Global_12106[iVar0 /*7*/].f_4 = 0;
		Global_12106[iVar0 /*7*/].f_6 = -15;
		iVar0++;
	}
}

void func_121()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_17504, &Global_2711449, 3206);
}

void func_122()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_20710, &Global_2714655, 2408);
}

void func_123()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_23118, &Global_2717063, 1769);
}

void func_124()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_24887, &Global_2718832, 1909);
}

void func_125()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_26796, &Global_2720741, 777);
}

void func_126()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_27573, &Global_2721518, 4501);
}

void func_127()
{
	MISC::COPY_SCRIPT_STRUCT(&Global_32074, &Global_2726019, 4234);
}

void func_128(var uParam0)
{
	if (func_27() == -1)
	{
		if (!Global_40)
		{
			return;
		}
		if (!func_58())
		{
			return;
		}
	}
	else if (func_27() == 0)
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1879534.f_7301), uParam0, 243);
}

void func_129()
{
	var uVar0;

	if (!func_264(3, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2017996124, "cashtags/cashtag(name=%x):value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1732391141, "cashtags/modifierTags/modifierTag(name=%x):value");
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	if (!func_178(iParam0))
	{
		return;
	}
	Global_1914270[iParam0] = DATAFILE::_0xCA56DD6AB7A39F64(iParam1);
	if (Global_1914270[iParam0] == 0)
	{
		return;
	}
	Stack.Invoke(iParam2);
}

void func_131()
{
	var uVar0;

	if (!func_264(5, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 192444604, "postOffice/trackedParcels/parcel(name=%x)/parcelItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 833374898, "postOffice/trackedParcels/parcel(name=%x)/parcelItem(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1392893044, ":itemID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1214284824, ":itemCnt");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -122991295, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1902296053, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 396654621, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1450050975, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 724542304, "postOffice/trackedParcels/parcel(name=%x)/flags:isCardSet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1842227093, "postOffice/trackedParcels/parcel(name=%x)/flags:isLegendaryFish");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1203822305, "postOffice/trackedParcels/parcel(name=%x)/collectibleID:collectibleID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 51132409, "postOffice/trackedParcels/parcel(name=%x)/bit0:CardSet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1601599279, "postOffice/trackedParcels/parcel(name=%x)/parcelDesc:desc");
}

void func_132()
{
	var uVar0;

	if (!func_264(6, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 465794448, func_265(465794448));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -815325344, func_265(-815325344));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -764679122, func_265(-764679122));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1893576372, func_265(-1893576372));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 549615901, func_265(549615901));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 656138654, func_265(656138654));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1661050588, func_265(-1661050588));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -860974647, func_265(-860974647));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 53142323, func_265(53142323));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1970263451, func_265(-1970263451));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -101978662, func_265(-101978662));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 521381610, "region(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2073822671, ":shop");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 701084451, "shelfObj");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -412700030, "shelfObj(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2042406626, "shelfObj(inventoryItem=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2123036120, ":entitySet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1712903544, ":cabinetSet");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1792709277, ":worldIPL");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 932018906, ":inventoryItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1247398698, ":inventoryItemOverride");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2067444527, ":OpenOnly");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2125553816, ":EnforcePickup");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1037227702, ":TargetPosition");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -788806526, "dressingObj");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 791653025, "dressingObj(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1218877676, "dressingObj(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -205647334, ":inventoryItemUnlock");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1986163665, func_265(1986163665));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1976824961, func_265(1976824961));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -199231160, func_265(-199231160));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -908395502, func_265(-908395502));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 421691991, func_265(421691991));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1400723349, func_265(-1400723349));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -562246383, func_265(-562246383));
}

void func_133()
{
	var uVar0;

	if (!func_264(7, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1655936658, "campingLocationLists/campingLocationList(district=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1058386141, "campingLocation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -738381918, "campingLocation(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 170329912, ":type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1808799200, ":name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 519988399, "campPos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -518277907, ":x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1363423190, ":y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 861329762, ":z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1425398587, ":heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1381741405, "campingReqs");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1310625191, ":reqCampMap");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1212650007, "camData");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1692540711, ":camDict");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 506092813, ":shotName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1800728046, ":camName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 353205560, ":camHeading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -175720391, "todData");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1980941829, ":time");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1359035379, ":weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1067565689, ":horsePos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -596203594, ":horseHeading");
}

void func_134()
{
	var uVar0;

	if (!func_264(9, &Global_1415419))
	{
		return;
	}
	uVar0 = Global_1415419;
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 217083545, "ambientVignettes/authoredLocations"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1275853848, "ambientVignette(%i)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -596571389, "ambientVignette(id=%x)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 165653806, "ambientVignettes/authoredLocations/ambientVignette(id=%x)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -713081767, ":id"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -971201246, "ambientVignettes/authoredLocations/ambientVignette(id=%x)/district(id=%x)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2135093769, "ambientVignettes/authoredLocations/ambientVignette(%i)/district(id=%x)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -641542860, "district(id=%x)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 121239534, "district(%i)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1696282352, "authoredLocation(%i)"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1983241935, ":rotation"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1119853910, ":position"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -143463129, ":variation"))
	{
	}
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1341709093, ":seenDelayHours"))
	{
	}
}

void func_135()
{
	var uVar0;

	if (!func_264(10, &(Global_1415419.f_1)))
	{
		return;
	}
	uVar0 = Global_1415419.f_1;
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 0, "ambientVignettes/ambientVignette(id=%x)/tunings(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1, ":triggerDist");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2, ":triggerTime");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 3, ":triggerClose");
}

void func_136()
{
	if (!func_264(11, &(Global_1327590.f_19720)))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 1604180342, "vignetteData/vignettes/vignette(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -657975000, ":scriptFile");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 1085469397, ":TODStart");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1535977529, ":TODEnd");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1060281697, ":size");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1800491381, ":weight");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 35230954, "tag:name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, -1556005224, "companion(%i):hash");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1327590.f_19720, 1185638752, "required_listeners:num");
}

void func_137()
{
	var uVar0;

	if (!func_264(13, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 0, "itemset/item(id=%x)/components/component:category");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1, "itemset/item(id=%x)/components/component:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2, "itemset/item(id=%x)/components/component/texture(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 3, "itemset/item(id=%x)/components/component/palette:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 4, "itemset/item(id=%x)/components/component/tint1:val");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 5, "itemset/item(id=%x)/components/component/tint2:val");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 6, "itemset/item(id=%x)/components/component/tint3:val");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1170159957, func_266(1170159957));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -956415585, func_266(-956415585));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1063445323, func_266(1063445323));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1574188157, func_266(-1574188157));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1752779714, func_266(-1752779714));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1004470061, func_266(1004470061));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1218801571, func_266(-1218801571));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1580989022, func_266(-1580989022));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -641661298, func_266(-641661298));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1179965762, func_266(-1179965762));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2059916790, func_266(-2059916790));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1574347650, func_266(-1574347650));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 503961584, func_266(503961584));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -612355112, func_266(-612355112));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 71109396, func_266(71109396));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1918885948, func_266(-1918885948));
}

void func_138()
{
	var uVar0;

	if (!func_264(12, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -608279732, "train_routes/junctions/track(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -870751591, "Item(%i)/junction:position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -853103500, "Item(%i)/junction:name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1956866776, "train_routes/train(name=%x)/junction(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1817584937, ":switch");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1830263756, "train_routes/train_stations/train(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 530786772, "Item(%i)/station:track");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1642930494, "Item(%i)/station:position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -959168135, "Item(%i)/station:direction");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1804008182, "Item(%i)/station:isStation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1008236233, "train_routes/train_stations/train(name=%x)/Item(%i)/times");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1882285204, "time(%i)/departure:hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 674301239, "time(%i)/departure:minute");
}

void func_139()
{
	var uVar0;

	if (!func_264(15, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 723128514, "respawnLocationData/locationList");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 185256713, "respawnLocationData/locationList/Item(%i)/name:locationName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1748960728, "respawnLocationData/locationList/Item(%i)/name:establisher");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -125049320, "respawnLocationData/locationList/Item(%i)/name:caravan");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 303248275, "respawnLocationData/locationList/Item(%i)/name:isShop");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -786414325, "respawnLocationData/locationList/Item(%i)/playerPos:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1756016266, "respawnLocationData/locationList/Item(%i)/playerPos:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1264284652, "respawnLocationData/locationList/Item(%i)/playerPos:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -566397848, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 599260570, "animation(%i):ID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1368867264, "animation(%i):dictionary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -544081353, "respawnLocationData/respawnAnimList");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1783498894, "respawnLocationData/respawnAnimList/anim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1222062814, "respawnLocationData/respawnAnimList/anim(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 824674748, "flags:useLooping");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1565562604, "flags:useAction");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -233815074, "flags:useSecondaryUpper");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -477049661, "flags:loopAsSecondary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -899679477, "flags:disablePhysics");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -62070419, "flags:disableLegIK");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1689379704, "flags:usesHat");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 660059998, "flags:useIdles");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1854764018, "flags:prop");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -391550498, "flags:prop2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1625090004, "flags:rifleLH");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 76128139, "flags:rifleRH");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1148228754, "flags:useHorse");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 939842437, "flags:needInventory");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2055089342, "flags:walkTillBreakout");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1514205951, "idle:dict");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1597176581, "idle:count");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1726340653, "animOverride:loopingDic");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2000223992, "alternateAnimation:dictionary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1571721931, "respawnLocationData/locationList/Item(%i)/animations/animation(ID=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1999103282, "respawnLocationData/locationList/Item(%i)/animations/animation(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1148748386, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1737068032, "respawnLocationData/locationList/Item(%i)/animations/animation(%i):ID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -495185473, "playerPos:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1276360309, "playerHeading:float");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1081618208, "camPosition:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1993680615, "camRotation:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 151706215, "camFov:float");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1075437165, "horsePos:vector");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 482880665, "horsePos:heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1818584824, "horsePos:hitched");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2009151738, "time:min");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1565059035, "time:max");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1786497406, "quickCamExit:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2069884107, "time:weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 383290544, "shop:name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -182204340, "tracks:waypointRecording");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2016118713, "tracks:waypointHorse");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1563492982, "flow:before");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1975530226, "flow:after");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 108838230, "flow:beforeRCM");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 181294442, "flow:afterRCM");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1374679209, "respawnLocationData/respawnAnimList/anim(name=%x)/startAnimations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 805008619, "startAnim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 908023140, "respawnLocationData/respawnAnimList/anim(name=%x)/idleAnimations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1100654060, "idleAnim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 669343399, "respawnLocationData/respawnAnimList/anim(name=%x)/exitAnimations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1312010450, "exitAnim(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1814582423, "respawnLocationData/regionEstablishers/regionEstablisher(district=%x):establisher");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1318367208, "respawnLocationData/regionEstablishers/regionEstablisher(region=%x):establisher");
}

void func_140()
{
	if (!func_264(16, &(Global_1935183.f_30)))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 0, "root/town(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 1, "townStateTag(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 2, "scenarioGroups");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 3, "scenarioGroup(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 4, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 5, ":enable");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 6, "iplGroups");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 7, "iplGroup(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 8, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 9, ":enable");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935183.f_30, 10, "schedules/perschar(id=%x):schedule");
}

void func_141()
{
	var uVar0;

	if (!func_264(17, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 0, "collectibles/name(id=%x):modelName0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1, "collectibles/name(id=%x):modelName1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2, "collectibles/name(id=%x):modelName2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 3, "collectibles/name(id=%x):modelName3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 4, "collectibles/name(id=%x):modelName4");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 5, "collectibles/name(id=%x):inventoryItem0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 6, "collectibles/name(id=%x):inventoryItem1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 7, "collectibles/name(id=%x):inventoryItem2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 8, "collectibles/name(id=%x):inventoryItem3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 9, "collectibles/name(id=%x):inventoryItem4");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 10, "collectibles/name(id=%x):inventoryItem5");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 11, "collectibles/name(id=%x):text0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 12, "collectibles/name(id=%x):text1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 13, "collectibles/name(id=%x):text2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 14, "collectibles/name(id=%x):text3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 15, "collectibles/name(id=%x):int0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 16, "collectibles/name(id=%x):int1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 17, "collectibles/name(id=%x):int2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 18, "collectibles/name(id=%x):int3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 19, "collectibles/name(id=%x):int4");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 20, "collectibles/name(id=%x):int5");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 21, "collectibles/name(id=%x):scenarioType");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 22, "collectibles/name(id=%x):trackedparcels");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 23, "collectibles/name(id=%x):cashTag");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 24, "collectibles/name(id=%x):lootableDef");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 25, "collectibles/name(id=%x):bit0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 26, "collectibles/name(id=%x):bool0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 27, "collectibles/name(id=%x):vector0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 28, "collectibles/name(id=%x):vector1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 29, "collectibles/name(id=%x):vector2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 30, "collectibles/name(id=%x):vector3");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 31, "collectibles/name(id=%x):heading0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 32, "collectibles/name(id=%x):heading1");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 33, "collectibles/name(id=%x):heading2");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 34, "collectibles/name(id=%x):heading3");
}

void func_142()
{
	if (func_27() == -1)
	{
		if (!func_264(18, &(Global_1935689.f_9475)))
		{
			return;
		}
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 3, "satchel_elements/name(id=%x):description0");
}

void func_143()
{
	if (!func_264(19, &(Global_1357549.f_576)))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 29309381, "camps/camp(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1032438694, "tag(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 367288306, ":priority");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1875502208, "camps/tagData/tag(id=%x):priority");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1250625855, "camps/tagData/tag(id=%x):persistence");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 70005598, "camps/tagData/tag(id=%x):category");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 2065727156, "camps/tagData/tag(id=%x):camp");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -416772466, "camps/tagData/tag(id=%x):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 38091777, "events");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -2121542775, "event(%i):type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1703567845, "event(%i):tagID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1635537271, "event(%i):persistence");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -881673417, "event(%i):priority");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1520535178, "event(%i):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 131366045, "schedules");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1811142696, "greets");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1717836031, "moods");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1770089518, "activities");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1671282280, "scouts");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -23319581, "miniExchanges");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1390301875, "vignetteInfo");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1715662773, "category(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -99632347, "category(%i):slots");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 290349293, "category(%i):weight");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1192477482, "category(%i):visitMax");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 550828398, "category(%i):totalMax");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -176494405, "category(%i):delayMin");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1087786295, "category(%i):delayMax");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1066925324, "category(%i):delayInc");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 730646859, "vignettes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 161473965, "vignette(%i):name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -407988477, "vignette(%i):effect");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1756408348, "moods/mood(id=%x):moodID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1648808149, "moods/mood(id=%x):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1461397771, "moods/mood(%i):moodID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 151697783, "moods/mood(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 824852062, "moods/mood(%i):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1949665568, "moods/mood(%i):player");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1378669256, "moods/mood(%i):remove");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -913813077, "greets/greet(%i):greetRule");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1526752584, "greets/greet(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1740164857, "greets/greet(%i):duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1289919464, "greets/greet(%i):remove");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 132295407, "greets/greet(%i):tempdisable");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -606763260, "greets/greet(%i):immediate");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 1007407053, "greets/greet(%i):player");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1309341906, "activities/activity(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1682013963, "miniExchanges/miniExchange(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, 132559829, "miniExchanges/miniExchange(%i):enabled");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1357549.f_576, -1651099034, "schedules/schedule(id=%x):scheduleID");
}

void func_144()
{
	if (!func_264(20, &(Global_1359489.f_21)))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 429892159, "activities/camp(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -904684498, "activities");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 149448507, "activity(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1699652051, "activity(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 13127246, "activity(instanceID=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1688140176, ":enabled");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 191541852, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -286179123, ":instanceID");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -12317914, ":location");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 482834189, ":heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -620745170, ":customActivityUpdate");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1946033125, ":scriptToLaunch");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1371217890, ":stackSize");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2015824487, "participants");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 287603469, "participants/participant(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 919971448, "participants/participant(%i):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2137406745, ":minCampLevel");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 429172948, "timeblocks");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1857445163, "timeblock(%i):start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1738420189, "timeblock(%i):end");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -431208529, ":shouldLaunchScriptEarly");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -547065739, ":launchScript");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 693772275, ":prerequisiteActivity");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 950875968, ":autoAddParticipants");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1023837085, ":requireAllParticipants");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -350109401, ":hostShouldLead");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1153145259, ":useSimpleVolume");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -768200779, ":activityVolRadius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -972717455, "activity(instanceID=%x):ipl");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1140954353, "activity(instanceID=%x):speechRuleset");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1749910275, ":horseStartLocation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -240512847, ":horseStartHeading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1498558552, ":hostWaitLocation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -950402515, ":hostWaitHeading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1156974471, ":invitePos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -102247125, ":launchSceneType");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 879932920, "assets/anims:looseAnimScene");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -665861927, "assets/dialogue:beatDialogue");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 2090390096, "assets/anims:playbackListAnimScene");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 886360362, "assets/scenarios:scenarioCallovers");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1524147455, "assets/scenarios/scenario(type=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -320556862, "assets/scenarios/scenario(type=%x):position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1394784022, "assets/scenarios/scenario(type=%x):heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -808176988, "assets/scenarios/scenario(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2112723510, "assets/dialogue");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 35939498, "assets/dialogue:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 738913608, "assets/music:musicFileName");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1202064540, "activity(instanceID=%x)/assets/anims/anim(type=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1449499638, "activity(instanceID=%x)/assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -561019962, "activity(instanceID=%x)/assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 954609930, "assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1080121180, "assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1643627018, "activity(instanceID=%x)/assets/anims/anim(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 899481067, "assets/anims/anim(type=%x):idle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 366733363, "assets/anims/anim(type=%x):invite");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 61184076, "assets/anims/anim(type=%x):callover");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1746427169, "assets/anims/anim(type=%x):calloverLeft");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1746252387, "assets/anims/anim(type=%x):calloverRight");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 708078506, "assets/anims:dontanimatePlayer");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 770042177, "assets/anims:playerUpperbodyOnly");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1903557952, "assets/anims:registerPlayerForLeadin");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 2072518271, "activities/activity(instanceID=%x)/assets/dialogue/line(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1445554035, "assets/cutscenes/scene(type=%x):hostPedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 443199092, "participants/participant(id=%x):pedHandle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2047775528, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1102408038, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -1750702392, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 909172229, "activity(instanceID=%x)/assets/props");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 809005032, "prop(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -2077191478, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 2029403190, ":isVehicle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1932515175, ":position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, 1283690869, ":rotation");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_21, -145970252, ":propHandle");
}

void func_145()
{
	if (!func_264(21, &(Global_1359489.f_361.f_195)))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 0, "Items" /* GXTEntry: "Items" */);
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 2, "Item(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 6, ":itemRequest");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 7, ":inventoryItem");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 3, ":region");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 8, ":position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1359489.f_361.f_195, 9, ":rotation");
}

void func_146()
{
	var uVar0;

	if (!func_264(22, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1023752283, func_267(-1023752283));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1076906043, func_267(-1076906043));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -153135980, func_267(-153135980));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 12851681, func_267(12851681));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1386325051, func_267(1386325051));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 43722464, func_267(43722464));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -581476215, func_267(-581476215));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1906982261, func_267(-1906982261));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1035806543, func_267(-1035806543));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1579284209, func_267(1579284209));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1172613177, func_267(-1172613177));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 495869290, func_267(495869290));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1382561665, func_267(-1382561665));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 684071069, func_267(684071069));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1357371535, func_267(1357371535));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -1221865546, func_267(-1221865546));
}

void func_147()
{
	var uVar0;

	if (!func_264(23, &uVar0))
	{
		return;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 1781729525, func_268(1781729525));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -2103982008, func_268(-2103982008));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, -57097983, func_268(-57097983));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 2027336698, func_268(2027336698));
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(uVar0, 316053773, func_268(316053773));
}

void func_148()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
			Global_1911670[iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_149()
{
	return false;
}

void func_150()
{
	func_269(1416977006, 1);
	func_269(1731133409, 1);
	func_269(-227771192, 1);
	func_269(-522528347, 1);
	func_269(1446885586, 1);
	func_269(1208032345, 1);
}

void func_151()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(false);
	func_270(1);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		func_271(iVar0);
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

void func_152()
{
	if (func_27() == -1)
	{
		Global_1894899.f_172 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("REGIONVOLUMES"));
		Global_1894899.f_173 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-858572145);
		Global_1894899.f_174 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(1814852958);
		while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_172) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_173)) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_174))
		{
			BUILTIN::WAIT(0);
		}
		func_272();
		func_273();
		func_274();
	}
}

void func_153(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	var uVar16;
	int iVar24;
	bool bVar25;
	int iVar26;
	char cVar27[64];

	iVar0 = MISC::GET_FRAME_COUNT();
	sVar2.f_0 = *uParam1;
	sVar2.f_2 = joaat("RQID_REGION_VOLUMES");
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar2.f_1), &sVar2))
	{
	}
	sVar2.f_2 = 0;
	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar2.f_0, sVar2.f_1) > iVar26)
	{
		bVar25 = false;
		sVar2.f_3 = iVar26;
		sVar2.f_2 = -734680005;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar16, &sVar2);
		iVar1 = func_275(MISC::GET_HASH_KEY(&uVar16));
		if (iVar1 == -1)
		{
			sVar2.f_2 = -1285134888;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar16, &sVar2);
			iVar1 = func_275(MISC::GET_HASH_KEY(&uVar16));
			bVar25 = true;
			if (iVar1 == -1)
			{
			}
		}
		if (iVar1 != -1)
		{
			sVar2.f_2 = -177723663;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vVar7, &sVar2);
			sVar2.f_2 = -968243019;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar7.f_1), &sVar2);
			sVar2.f_2 = -646025442;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar7.f_2), &sVar2);
			sVar2.f_2 = 1397255209;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vVar10, &sVar2);
			sVar2.f_2 = 503447965;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar10.f_1), &sVar2);
			sVar2.f_2 = 800892178;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar10.f_2), &sVar2);
			sVar2.f_2 = 1348766134;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vVar13, &sVar2);
			sVar2.f_2 = 1572185176;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar13.f_1), &sVar2);
			sVar2.f_2 = -1543393037;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar13.f_2), &sVar2);
			sVar2.f_2 = 1958238202;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar16, &sVar2);
			iVar24 = MISC::GET_HASH_KEY(&uVar16);
			strcpy_s(&cVar27, 64, func_276(iVar1));
			strcat_s(&cVar27, 64, sParam2);
			if (!bVar25)
			{
				switch (iVar24)
				{
					case joaat("VOLCYLINDER"):
						(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar7, vVar10, vVar13, &cVar27);
						break;
					case joaat("VOLBOX"):
						(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar7, vVar10, vVar13, &cVar27);
						break;
				}
			}
			else
			{
				if (!VOLUME::DOES_VOLUME_EXIST((*uParam0)[iVar1]))
				{
					(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar27);
				}
				switch (iVar24)
				{
					case joaat("VOLCYLINDER"):
						VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE((*uParam0)[iVar1], vVar7, vVar10, vVar13);
						break;
					case joaat("VOLBOX"):
						VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE((*uParam0)[iVar1], vVar7, vVar10, vVar13);
						break;
				}
			}
		}
		iVar26++;
	}
}

void func_154(bool bParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar23;

	if (bParam0)
	{
		if (func_27() == -1)
		{
			Global_1894899.f_175 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("REGION_DATA"));
			while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1894899.f_175))
			{
				BUILTIN::WAIT(0);
			}
			func_277();
		}
	}
	else
	{
		Global_1894899.f_175 = DATAFILE::_0xCA56DD6AB7A39F64(joaat("REGION_DATA"));
		func_277();
	}
	sVar0.f_0 = Global_1894899.f_175;
	sVar0.f_2 = joaat("RQID_REGION_DATA");
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
	}
	sVar0.f_2 = 0;
	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar0.f_0, sVar0.f_1) > iVar23)
	{
		sVar0.f_3 = iVar23;
		sVar0.f_2 = 1489686829;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar5, &sVar0);
		iVar13 = func_275(MISC::GET_HASH_KEY(&uVar5));
		if (func_207(iVar13))
		{
			sVar0.f_2 = 596301644;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar14, &sVar0);
			Global_1888801[iVar13 /*35*/].f_10 = uVar14;
			sVar0.f_2 = 325957282;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar14, &sVar0);
			Global_1888801[iVar13 /*35*/].f_11 = uVar14;
			sVar0.f_2 = 426139466;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar15, &sVar0);
			Global_1888801[iVar13 /*35*/].f_12 = MISC::GET_HASH_KEY(&uVar15);
		}
		iVar23++;
	}
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_175);
}

void func_155(var uParam0)
{
	*uParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("REGIONS"));
	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_156()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION"), "regions/region(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_SCRIPT"), ":script");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_PREFIX"), ":prefix");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_TYPE"), ":type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_MP_TYPE"), ":mpType");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_RICH_PRESENCE"), ":richPresence");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_LOCK_SESSIONING"), ":lockSessioning");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_GUAMA"), ":guama");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_MP_GHOST_TOWN"), ":mpGhosttown");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_MP_TYPE_OVERRIDE"), ":mpTypeOverride");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_NO_GPS"), ":noGPS");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_170, joaat("RQID_REGION_HIDE_NAME"), ":hideName");
}

void func_157(var uParam0)
{
	*uParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("REGION_BOUNTY_DATA"));
	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_158()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 1252559615, "regions/region(name=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 1711029673, "bCanBeRestricted:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 1758612600, "bUseStoredBountyForWanted:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_171, 115903213, "iBountyForWanted:value");
}

void func_159()
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_172);
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_173);
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1894899.f_174);
}

void func_160(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<20> /*160*/ sVar0;

	if (iParam1 > 150)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
	}
	if (!func_278(uParam0, iParam1, &sVar0))
	{
		return;
	}
	Global_1888801[iParam1 /*35*/].f_3 = iParam2;
	Global_1888801[iParam1 /*35*/].f_4 = uParam3;
	Global_1888801[iParam1 /*35*/].f_5 = uParam4;
	Global_1888801[iParam1 /*35*/].f_6 = { VOLUME::GET_VOLUME_COORDS(iParam2) /*3*/ };
	MemCopy(&(Global_1888801[iParam1 /*35*/].f_23), {sVar0}, 3);
	MemCopy(&(Global_1888801[iParam1 /*35*/].f_22), {sVar0.f_8}, 1);
	Global_1888801[iParam1 /*35*/].f_30 = MISC::GET_HASH_KEY(&(Global_1888801[iParam1 /*35*/].f_22));
	Global_1888801[iParam1 /*35*/].f_20 = sVar0.f_16;
	Global_1888801[iParam1 /*35*/].f_9 = 0;
	Global_1888801[iParam1 /*35*/].f_1 = 0;
	Global_1888801[iParam1 /*35*/].f_15 = { func_279(iParam1) /*3*/ };
	func_280(iParam1, 15);
	func_281(iParam1, sVar0.f_18);
	if (func_282(iParam1, 64))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam2))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iParam2, 0, 1);
		}
	}
	if (func_27() != -1)
	{
		if (func_282(iParam1, 32))
		{
			if (sVar0.f_19 != 0)
			{
				Global_1888801[iParam1 /*35*/].f_20 = sVar0.f_19;
			}
		}
	}
	switch (sVar0.f_16)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
			break;
		default:
			break;
	}
	if (func_27() == -1)
	{
		switch (func_283(iParam1))
		{
			case 0:
			case 2:
			case 11:
				Global_1894899.f_176++;
				break;
			case 1:
			case 5:
			case 6:
			case 7:
			case 12:
				Global_1894899.f_178++;
				break;
			case 3:
			case 10:
				Global_1894899.f_177++;
				break;
			case 4:
			case 9:
				Global_1894899.f_179++;
				break;
			case 8:
				Global_1894899.f_180++;
				break;
			case 13:
			case 14:
			case 15:
			case 16:
				Global_1894899.f_181++;
				break;
		}
	}
}

void func_161(var uParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 > 150)
	{
		return;
	}
	if (!func_284(uParam0, iParam1, &bVar0))
	{
		return;
	}
	Global_1888801[iParam1 /*35*/].f_31 = bVar0;
}

void func_162()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_207(iVar0))
		{
			if (func_285(iVar0) && func_286(iVar0))
			{
				func_232(iVar0, 1, 350);
			}
			else
			{
				func_232(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
}

void func_163(var uParam0)
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*uParam0);
}

void func_164(var uParam0)
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*uParam0);
}

void func_165()
{
	int iVar0;

	Global_1894899.f_161 = 0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_287(iVar0) && VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
		{
			Global_1894899.f_10[Global_1894899.f_161] = iVar0;
			Global_1894899.f_161++;
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[16];
	int iVar27[4];

	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	func_288();
	iVar8 = 0;
	while (iVar8 < 16)
	{
		iVar9 = 0;
		while (iVar9 < 50)
		{
			Global_1894065[iVar8 /*51*/][iVar9] = -1;
			iVar9++;
		}
		Global_1894882[iVar8] = 0;
		iVar8++;
	}
	VOLUME::_0x748C5F51A18CB8F0(false);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
		{
			VOLUME::_GET_VOLUME_BOUNDS(Global_1888801[iVar0 /*35*/].f_3, &vVar1, &vVar4);
			iVar8 = 0;
			while (iVar8 < 16)
			{
				iVar10[iVar8] = 1;
				iVar8++;
			}
			iVar7 = 0;
			while (iVar7 < 4)
			{
				iVar27[iVar7] = 1;
				iVar7++;
			}
			func_289(vVar1, vVar4, 0.0f, 0.0f, &iVar27, 0, 2);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (iVar27[iVar7])
				{
					func_289(vVar1, vVar4, Global_1894052[iVar7 /*3*/].f_1, Global_1894052[iVar7 /*3*/].f_2, &iVar10, Global_1894052[iVar7 /*3*/], 4);
				}
				else
				{
					func_290(&iVar10, Global_1894052[iVar7 /*3*/], 4);
				}
				iVar7++;
			}
			iVar8 = 0;
			while (iVar8 < 16)
			{
				if (iVar10[iVar8])
				{
					if (Global_1894882[iVar8] >= 50)
					{
					}
					Global_1894065[iVar8 /*51*/][Global_1894882[iVar8]] = iVar0;
					Global_1894882[iVar8]++;
				}
				iVar8++;
			}
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
	iVar8 = 0;
	while (iVar8 < 16)
	{
		iVar9 = 0;
		while (iVar9 < Global_1894882[iVar8])
		{
			iVar9++;
		}
		iVar8++;
	}
}

void func_167(int iParam0)
{
	Global_1894899 -= (Global_1894899 & iParam0);
}

void func_168()
{
	struct<202> /*1616*/ sVar0;

	sVar0 = 100;
	sVar0.f_1 = -1;
	sVar0.f_1.f_1 = 1;
	sVar0.f_1.f_2 = -1;
	sVar0.f_1.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	sVar0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Global_1934765.f_69 = { sVar0 /*202*/ };
}

void func_169(int iParam0)
{
	func_291(iParam0, 1);
}

void func_170(int iParam0)
{
	func_291(iParam0, 0);
}

void func_171()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_292(iVar0);
		iVar0++;
	}
}

bool func_172(int iParam0, bool bParam1)
{
	switch (func_293(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_173()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && (Global_1572887.f_6 & 1) != 0)
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == joaat("LAW_DISPATCH_PENDING"))
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_176(bool bParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_27() == -1)
	{
		func_294();
	}
	else
	{
		return;
	}
	func_295();
	Global_40.f_9.f_14 = func_177();
	Global_40.f_9.f_20 = LAW::GET_BOUNTY(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_296())
		{
			func_214(Global_1310720.f_1);
		}
		else if (func_98() == func_102(Global_36, 1) && func_297() != 2)
		{
			func_214(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_214(Global_36);
		}
		func_298(Global_36, &vVar0, &uVar4);
		if (!func_296())
		{
			if (func_299(vVar0, Global_36) < func_299(Global_40.f_9.f_7, Global_36))
			{
				func_214(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_102(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_298(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0.0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_218(&Global_1935630, (1 << 13));
	}
	func_300();
}

int func_177()
{
	return Global_1899515;
}

bool func_178(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_179(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];

	if (!bParam0)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			return false;
		}
		if (func_301())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !func_39((1 << 15)))
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				return false;
			}
		}
	}
	switch (Global_1934765)
	{
		case 0:
			func_302(666617953);
			func_302(1733948592);
			func_302(1700234797);
			func_302(1305074360);
			func_302(-436566493);
			func_302(-1995815064);
			func_302(-483649675);
			func_302(212587871);
			func_302(joaat("TAX_SHUTTERS_CLOSED"));
			func_302(1190076410);
			func_302(350100475);
			func_302(2033090463);
			func_302(-688011628);
			func_302(-787042507);
			func_302(joaat("ARM_01_CHOLERA"));
			func_302(joaat("ARM_02_CHOLERA"));
			func_302(joaat("ARM_03_CHOLERA"));
			func_302(joaat("ARM_04_CHOLERA"));
			func_302(joaat("ARM_05_CHOLERA"));
			if (func_303())
			{
				func_302(-693659956);
				func_302(joaat("SPPACK_A1SUP_OBELISK"));
				func_302(-400238535);
				func_302(1416512144);
			}
			func_302(joaat("SPPACK_A4SUP_AQUADUCT"));
			func_302(-846479900);
			func_302(-866774384);
			if (!Global_1934765.f_288)
			{
				func_304(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38.0f, -1186.829f, -18.19722f, 45.0f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38.0f, -1170.786f, -12.71267f, 42.0f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38.0f, -1163.424f, -13.43965f, 42.0f, 6, 1);
			func_305();
			func_306();
			func_307();
			return false;
		case 1:
			func_308();
			func_307();
			return false;
		case 2:
			func_309();
			func_307();
			return false;
		case 3:
			break;
	}
	if (!func_310(joaat("WS_STRAWBERRY_IGNORE_NEM_HOUSE")))
	{
		func_302(1892122519);
	}
	if (func_310(joaat("WS_NO_ANIMALS_GRIZZLIES")))
	{
		if (!func_311(Global_1934765.f_20, 1))
		{
			func_312(5, 1);
			func_312(7, 1);
			func_312(6, 1);
			func_312(1, 1);
			func_84(&(Global_1934765.f_20), 1);
		}
	}
	else if (func_311(Global_1934765.f_20, 1))
	{
		func_312(5, 2);
		func_312(1, 2);
		func_85(&(Global_1934765.f_20), 1);
	}
	if (func_310(joaat("WS_CARMODY_DELL_ABANDONED")))
	{
		func_313(382484708);
		func_302(-910880980);
	}
	else
	{
		func_313(-910880980);
		func_302(382484708);
	}
	if (func_310(joaat("WS_TAXIDERMY_NOTICES")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (func_310(joaat("WS_TAXIDERMY_MARITAL")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (func_310(joaat("WS_ORCHIDS_APPLESEED")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (func_310(joaat("WS_RARE_FISH_CABIN_END")))
	{
		func_314(203);
		func_304(204);
	}
	else
	{
		func_314(204);
		func_304(203);
	}
	func_315(joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE"), 79, 2, (1 << 12));
	func_315(joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE"), 9, 32, (1 << 12));
	func_315(joaat("WS_HIDEOUT_SIX_POINT_INACTIVE"), 36, 64, (1 << 12));
	if (func_310(joaat("WS_GUARMA_EXISTS")))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_SET_MINIMAP_ZONE(joaat("GUARMA") /* GXTEntry: "Guarma" */);
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = 1;
	}
	else
	{
		if (func_310(joaat("WS_GUARMA_WATER")))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_SET_MINIMAP_ZONE(joaat("WORLD") /* GXTEntry: "World" */);
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!func_39(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (func_310(joaat("WS_CLAY_EXIST")))
	{
		if (func_27() == -1)
		{
		}
	}
	else if (func_27() == -1)
	{
	}
	if (func_310(joaat("WS_SADIE_BEDROLL")))
	{
		func_302(-1786365097);
		func_304(178);
	}
	else
	{
		func_313(-1786365097);
		func_314(178);
	}
	if (!func_310(joaat("WS_STRAWBERRY_JAIL_IGNORE")))
	{
		func_313(1934919499);
		func_313(joaat("DES_STR_JAIL_EXP_END"));
		func_313(-515396642);
		func_313(joaat("DES_STR_JAIL_END"));
		func_313(joaat("DES_STR_JAIL"));
		if (func_310(joaat("WS_STRAWBERRY_JAIL_INTACT")))
		{
			func_302(joaat("DES_STR_JAIL"));
			func_304(193);
		}
		else
		{
			iVar0 = func_317(func_316(11));
			if (func_318(iVar0, 1))
			{
				func_302(joaat("DES_STR_JAIL"));
				func_304(193);
			}
			else
			{
				func_314(193);
				if (func_318(iVar0, 2))
				{
					func_302(joaat("DES_STR_JAIL_END"));
				}
				else if (func_318(iVar0, 4))
				{
					func_302(joaat("DES_STR_JAIL_EXP_END"));
				}
			}
		}
	}
	if (func_310(joaat("WS_DOWNS_RANCH_DOWNS")))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_319(557, 32);
			func_319(563, 32);
			func_319(560, 32);
			func_319(561, 32);
			func_319(562, 32);
			func_320(565, 32);
			func_321(565, 0);
			func_320(564, 32);
			func_321(564, 0);
			func_320(554, 32);
			func_321(554, 0);
			func_320(555, 32);
			func_321(555, 0);
			func_320(556, 32);
			func_321(556, 0);
		}
		func_314(199);
		func_304(198);
	}
	else if (func_310(joaat("WS_DOWNS_RANCH_EDITH")))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_319(557, 32);
			func_319(563, 32);
			func_320(560, 32);
			func_321(560, 0);
			func_320(561, 32);
			func_321(561, 0);
			func_320(562, 32);
			func_321(562, 0);
			func_320(554, 32);
			func_321(554, 0);
			func_320(555, 32);
			func_321(555, 0);
			func_320(556, 32);
			func_321(556, 0);
			func_320(565, 32);
			func_321(565, 0);
			func_320(564, 32);
			func_321(564, 0);
		}
		func_314(199);
		func_314(198);
	}
	else if (func_310(joaat("WS_DOWNS_RANCH_EMPTY")))
	{
		if (func_27() == -1)
		{
			func_322(68, 16);
			func_321(554, 0);
			func_321(555, 0);
			func_321(556, 0);
			func_321(557, 0);
			func_321(563, 0);
			func_321(560, 0);
			func_321(561, 0);
			func_321(562, 0);
			func_321(565, 0);
			func_321(564, 0);
		}
		func_314(199);
		func_304(198);
	}
	else if (func_310(joaat("WS_DOWNS_RANCH_REPOPULATED")))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_320(554, 32);
			func_320(555, 32);
			func_320(556, 32);
			func_320(557, 32);
			func_320(563, 32);
			func_321(554, 0);
			func_321(555, 0);
			func_321(556, 0);
			func_321(557, 0);
			func_321(563, 0);
			func_319(565, 32);
			func_319(564, 32);
			func_319(560, 32);
			func_319(561, 32);
			func_319(562, 32);
		}
		func_314(198);
		func_304(199);
	}
	if (func_310(joaat("WS_DROUGHT_ENDED")))
	{
		func_313(376665102);
	}
	else
	{
		func_302(376665102);
	}
	if (func_310(joaat("WS_ROCKY_SEVEN_ENDLESS")))
	{
		if (func_27() == -1)
		{
			func_319(800, 32);
		}
	}
	else if (func_27() == -1)
	{
		func_320(800, 32);
		func_321(800, 0);
	}
	func_323();
	if (func_310(0))
	{
		func_302(1149195254);
		func_302(2016081133);
		func_302(363257921);
		func_302(joaat("BRA_MANSION_INT_01"));
		func_302(-1521525254);
		func_302(-761186147);
		func_302(-1872939092);
		func_302(-964156415);
		func_324(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_AFTER_BRAITHWAITES_3"), false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_STABLE_HAND_1"), true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_325(-434746250, 1);
		if (func_310(joaat("WS_BRAITHWAITES_3_ACTIVE")))
		{
			func_302(-2137633069);
			func_304(121);
			func_304(123);
			func_304(125);
			if (func_27() == -1)
			{
				func_322(93, 16);
				func_326(93);
			}
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
			}
		}
		else
		{
			func_302(1944013855);
			func_304(120);
			func_304(122);
			func_304(124);
			func_280(93, 16);
			if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (func_310(joaat("WS_BRAITHWAITE_MANSION_BURNED")))
	{
		func_302(-1643869063);
		func_302(-1108618313);
		func_302(-787678727);
		func_324(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_AFTER_BRAITHWAITES_3"), true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_STABLE_HAND_1"), true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_325(-434746250, 1);
		if (func_310(joaat("WS_BRAITHWAITES_3_ACTIVE")))
		{
			func_327("bra_man_burned_bra3");
		}
		else
		{
			func_327("bra_man_burned");
		}
		func_280(93, 16);
		if (func_27() == -1)
		{
			func_319(621, 32);
			func_319(622, 32);
			func_319(623, 32);
			func_319(624, 32);
			func_320(909, 32);
			func_321(909, 0);
			func_320(910, 32);
			func_321(910, 0);
			func_320(911, 32);
			func_321(911, 0);
			func_320(912, 32);
			func_321(912, 0);
			func_320(913, 32);
			func_321(913, 0);
			func_320(914, 32);
			func_321(914, 0);
			func_320(617, 32);
			func_321(617, 0);
			func_320(618, 32);
			func_321(618, 0);
			func_320(619, 32);
			func_321(619, 0);
			func_320(620, 32);
			func_321(620, 0);
			func_320(915, 32);
			func_321(915, 0);
			func_320(916, 32);
			func_321(916, 0);
			func_320(917, 32);
			func_321(917, 0);
			func_320(625, 32);
			func_321(625, 0);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (func_310(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER")))
	{
		func_302(-1643869063);
		func_302(622597018);
		func_302(1649275138);
		func_324(1);
		func_327("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_AFTER_BRAITHWAITES_3"), true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_STABLE_HAND_1"), false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_269(-434746250, 1);
		func_322(93, 16);
		if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
		}
	}
	if (!func_310(joaat("WS_NEW_MRK_04_HIDEFORIND3")))
	{
		func_302(1355914142);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0.0f, 0.0f, -42.0f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_16, 7);
		}
	}
	else
	{
		func_313(1355914142);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_16);
			VOLUME::DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (func_310(joaat("WS_GUARMA_RUIN1_FLOOR_INTACT")))
	{
		func_313(joaat("LAC_01_LOOTERS_2"));
		func_302(joaat("LAC_01_LOOTERS_1"));
	}
	else
	{
		func_313(joaat("LAC_01_LOOTERS_1"));
		func_302(joaat("LAC_01_LOOTERS_2"));
	}
	if (func_310(joaat("WS_OLDFORTWALLACE_WALL_INTACT")))
	{
		func_313(-1052023588);
		func_313(-745087561);
		func_328("old_nav_wall_hole");
		func_328("old_nav_nts3_start");
		func_328("old_nav_nts3_end");
		func_302(944314155);
		func_327("old_nav_wall_fill");
	}
	else if (func_310(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3")))
	{
		func_313(-1052023588);
		func_328("old_nav_wall_fill");
		func_328("old_nav_wall_hole");
		func_328("old_nav_nts3_end");
		func_302(944314155);
		func_302(-745087561);
		func_327("old_nav_nts3_start");
	}
	else if (func_310(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3")))
	{
		func_313(944314155);
		func_328("old_nav_wall_fill");
		func_328("old_nav_nts3_start");
		func_328("old_nav_wall_hole");
		func_302(-1052023588);
		func_302(-745087561);
		func_327("old_nav_nts3_end");
	}
	else if (func_310(joaat("WS_OLDFORTWALLACE_WALL_BROKEN")))
	{
		func_313(944314155);
		func_313(-745087561);
		func_328("old_nav_wall_fill");
		func_328("old_nav_nts3_start");
		func_328("old_nav_nts3_end");
		func_302(-1052023588);
		func_327("old_nav_wall_hole");
	}
	if (func_310(joaat("WS_CRASHED_BOAT")))
	{
		func_302(joaat("VAN_02_HORSEBOAT"));
	}
	else
	{
		func_313(joaat("VAN_02_HORSEBOAT"));
	}
	if (func_310(joaat("WS_NEW_COM_BANK_BEFORE")))
	{
		func_313(-920505696);
		func_313(281772765);
		func_313(-516683274);
		func_314(135);
		func_314(136);
		func_314(137);
		func_314(138);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_shootout");
		func_328("nav_std_bank_dest");
		func_304(134);
		func_302(1017355491);
		func_302(-1004522372);
	}
	else if (func_310(joaat("WS_NEW_COM_BANK_START")))
	{
		func_313(-920505696);
		func_313(-516683274);
		func_314(135);
		func_314(136);
		func_314(137);
		func_314(138);
		func_328("nav_std_bank_shootout");
		func_328("nav_std_bank_dest");
		func_302(-1004522372);
		func_304(134);
		func_302(1017355491);
		func_302(281772765);
		func_327("nav_std_bank_start");
	}
	else if (func_310(joaat("WS_NEW_COM_BANK_SHOOTOUT")))
	{
		func_313(-920505696);
		func_313(-516683274);
		func_314(134);
		func_314(137);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_dest");
		func_302(-1004522372);
		func_304(135);
		func_304(136);
		func_304(138);
		func_302(1017355491);
		func_302(281772765);
		func_327("nav_std_bank_shootout");
	}
	else if (func_310(joaat("WS_NEW_COM_BANK_AFTER")))
	{
		func_313(1017355491);
		func_313(281772765);
		func_313(-1004522372);
		func_314(134);
		func_314(135);
		func_304(137);
		func_304(138);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_shootout");
		func_302(-516683274);
		func_302(-920505696);
		func_327("nav_std_bank_dest");
	}
	else if (func_310(joaat("WS_NEW_COM_BANK_POST")))
	{
		func_313(1017355491);
		func_313(-516683274);
		func_313(281772765);
		func_314(134);
		func_314(135);
		func_314(136);
		func_314(138);
		func_302(-1004522372);
		func_304(137);
	}
	if (func_310(joaat("WS_NEW_COM_BANK_VAULT_RF")))
	{
		func_314(140);
		func_304(139);
	}
	else
	{
		func_314(139);
		func_304(140);
	}
	if (func_310(joaat("WS_POST_CARAVAN_HORSESHOE")))
	{
		func_302(140744122);
		func_302(-1795618779);
		func_327("hso_post_caravan");
	}
	else
	{
		func_313(140744122);
		func_313(-1795618779);
		func_328("hso_post_caravan");
	}
	if (func_310(joaat("WS_POST_CARAVAN_CLEMENS")))
	{
		func_302(1691578074);
		func_302(-1936937394);
		func_327("dewclm_post_caravan");
	}
	else
	{
		func_313(1691578074);
		func_313(-1936937394);
		func_328("dewclm_post_caravan");
	}
	if (func_310(joaat("WS_POST_CARAVAN_SHADY")))
	{
		func_302(-1130111983);
		func_302(-1015786727);
	}
	else
	{
		func_313(-1130111983);
		func_313(-1015786727);
	}
	if (func_310(joaat("WS_POST_CARAVAN_BEAVERHOLLOW")))
	{
		func_302(560821199);
	}
	else
	{
		func_313(560821199);
	}
	if (func_310(joaat("WS_CINCO_TORRES_DOOR_INTACT")))
	{
		func_313(-313831898);
		func_313(634920011);
		func_302(1694736240);
		func_302(2035758463);
	}
	else
	{
		func_313(1694736240);
		func_313(2035758463);
		func_302(-313831898);
		func_302(634920011);
	}
	func_329();
	func_330();
	if (func_310(joaat("WS_COLTER_STAGE_MP")))
	{
		func_302(474287981);
		func_302(joaat("ADL_WINTER01_HOUSE"));
		func_302(-1636879249);
		func_302(205214733);
		func_313(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		func_304(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_331(joaat("WS_COLTER_STAGE_FIRES_LIT"));
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (func_310(joaat("WS_COLTER_STAGE_MUDTOWN1")))
	{
		func_302(867231253);
		func_302(joaat("ADL_WINTER01_HOUSEBURNT"));
		func_302(-1316886711);
		func_302(205214733);
		func_313(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_310(joaat("WS_COLTER_STAGE_THAWED_SNOW")))
	{
		func_302(867231253);
		func_302(-1670453688);
		func_302(joaat("ADL_WINTER01_HOUSEBURNT"));
		func_302(-1316886711);
		func_302(205214733);
		func_327("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(joaat("WS_COLTER_STAGE_MEDIUM_SNOW")))
	{
		func_302(1248111234);
		func_302(-1670453688);
		func_302(joaat("ADL_WINTER01_HOUSEBURNT"));
		func_302(-1316886711);
		func_302(205214733);
		func_327("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(joaat("WS_COLTER_STAGE_CABIN_BURNING")))
	{
		func_302(474287981);
		func_302(-1670453688);
		func_302(-1636879249);
		func_302(joaat("ADL_WINTER01_HOUSE"));
		func_304(186);
		func_327("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_302(474287981);
		func_302(-1670453688);
		func_302(joaat("ADL_WINTER01_HOUSE"));
		func_302(-1636879249);
		func_327("col_nav_wint1_cabin_prefire");
		func_304(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(joaat("WS_COLTER_STAGE_WINTER1_INTRO")))
	{
		func_302(joaat("WIN1_INTRO_CUTSCENE"));
		func_302(474287981);
		func_302(-717025835);
		func_302(joaat("ADL_WINTER01_HOUSE"));
		func_302(-1636879249);
		func_304(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_331(joaat("WS_COLTER_STAGE_FIRES_LIT"));
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (func_310(joaat("WS_COLTER_STAGE_FIRES_LIT")))
	{
		func_302(-1306375743);
		func_302(-743781837);
		func_302(2114706334);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0.0f, 0.0f, 0.0f, 0.4f, 0.4f, 1.0f);
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_15, 7);
		}
		func_304(149);
		func_304(150);
		func_304(151);
		func_304(152);
	}
	else
	{
		func_313(-1306375743);
		func_313(-743781837);
		func_313(2114706334);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_15);
			VOLUME::DELETE_VOLUME(Global_1934765.f_15);
		}
		func_314(149);
		func_314(150);
		func_314(151);
		func_314(152);
	}
	func_332();
	if (func_310(joaat("WS_FUSSAR2_NOCLIMB")))
	{
		func_302(-1055748784);
	}
	else
	{
		func_313(-1055748784);
	}
	if (func_310(joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR")))
	{
		func_304(147);
		func_314(148);
	}
	else
	{
		func_314(147);
		func_304(148);
	}
	if (func_310(joaat("WS_BEAVER_HOLLOW_HIDEOUT")))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (func_310(joaat("WS_SHADY_BELLE_SHUTTERS_CLOSED")))
	{
		func_302(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		func_313(joaat("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		func_302(joaat("SHA_EXT_SHUTTERS_NORMAL"));
		func_313(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (func_310(joaat("WS_SHADY_BELLE_HIDEOUT")))
	{
		func_302(809554858);
		func_302(1810083187);
		func_313(159921796);
		func_313(-1739900853);
		func_302(2113454609);
		func_302(-520163372);
		func_313(-90228526);
		func_314(17);
		func_314(2);
		func_314(4);
		func_304(1);
		func_304(5);
		func_333(931206119, 1, 0, 0, 0, 0, 0, 0);
		func_333(1783003505, 1, 0, 0, 0, 0, 0, 0);
		func_302(-646014955);
		func_328("shb_nav_camp_running");
		func_328("shb_nav_camp_teardown");
		func_313(1265596420);
		func_328("shb_nav_camp_01");
		func_327("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		func_328("shb_nav_camp_00");
		func_328("shb_nav_camp_01");
		func_313(809554858);
		func_313(1265596420);
		func_313(1810083187);
		func_333(931206119, 0, 0, 0, 1, 0, 0, 0);
		func_333(1783003505, 0, 0, 0, 1, 0, 0, 0);
		func_313(-646014955);
		if (func_310(joaat("WS_SHADY_BELLE_ABANDON")))
		{
			func_314(5);
			func_314(17);
			func_314(1);
			func_314(2);
			func_304(4);
			func_313(-520163372);
			func_302(-90228526);
			func_302(159921796);
			func_313(-1739900853);
			func_313(2113454609);
		}
		else if (func_310(joaat("WS_SHADY_BELLE_GANG_0_2")))
		{
			func_314(5);
			func_314(4);
			func_314(1);
			func_314(2);
			func_304(17);
			func_313(-520163372);
			func_302(-90228526);
			func_302(159921796);
			func_302(-1739900853);
			func_313(2113454609);
		}
		else
		{
			func_313(-90228526);
			func_313(159921796);
			func_313(-1739900853);
			func_302(2113454609);
		}
		func_314(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (func_310(joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS")))
	{
		func_313(1929440211);
		func_313(2126897368);
		func_302(-833857740);
		func_302(-825836321);
		if (func_310(joaat("WS_HIDEOUT_HANGING_DOG_MARSTON4")))
		{
			func_302(-1718055184);
			func_328("han_nav_endless_summer");
			func_327("han_nav_endless_summer_marston4");
		}
		else
		{
			func_313(-1718055184);
			func_328("han_nav_endless_summer_marston4");
			func_327("han_nav_endless_summer");
		}
	}
	else
	{
		func_313(-833857740);
		func_313(-825836321);
		func_313(-1718055184);
		func_328("han_nav_endless_summer");
		func_328("han_nav_endless_summer_marston4");
		func_302(1929440211);
	}
	if (func_310(joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS")))
	{
		func_304(164);
		func_327("bvh_nav_endless_summer");
	}
	else
	{
		func_314(164);
		func_328("bvh_nav_endless_summer");
	}
	if (func_310(joaat("WS_HIDEOUT_SIX_POINT_TABLE")))
	{
		func_304(20);
	}
	else
	{
		func_314(20);
	}
	if (func_310(joaat("WS_HIDEOUT_SIX_POINT_LIGHTS")))
	{
		STREAMING::REQUEST_IPL_HASH(joaat("SIX_POINT_LIGHTS_ON"));
		func_314(22);
		func_314(24);
		func_304(21);
		func_304(23);
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(joaat("SIX_POINT_LIGHTS_ON"));
		func_314(21);
		func_314(23);
		func_304(22);
		func_304(24);
	}
	if (func_310(joaat("WS_SWA_CHAIRS_REGULAR")))
	{
		func_304(200);
	}
	else
	{
		func_314(200);
	}
	if (func_310(joaat("WS_SWA_CHAIRS_CINEMATIC")))
	{
		func_304(201);
	}
	else
	{
		func_314(201);
	}
	if (func_27() == -1)
	{
		if (func_310(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_334((1 << 16), 1);
		}
		else
		{
			func_334((1 << 16), 0);
		}
	}
	func_335();
	if (func_310(joaat("WS_RHODES_SADIE3_COVER_ON")))
	{
		func_302(1343484786);
		func_302(1989074279);
		func_327("sad3_nav_rhodes_shootout_00");
	}
	else if (func_310(joaat("WS_RHODES_GRAVE_NORMAL")))
	{
		if (func_310(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_302(1871051363);
			func_302(-2144587490);
			func_302(1033721560);
			func_327("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(1871051363);
			func_302(-2144587490);
			func_327("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_310(joaat("WS_RHODES_GRAVE_FRESHLY_DUG")))
	{
		if (func_310(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_302(-2144587490);
			func_302(1033721560);
			func_327("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(-2144587490);
			func_327("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_310(joaat("WS_RHODES_GRAVE_OPEN")))
	{
		if (func_310(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_302(146746575);
			func_302(1033721560);
			func_327("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(146746575);
			func_327("rho_nav_grave_norm_gry3_off");
		}
	}
	if (func_310(joaat("WS_RHODES_FENCE_OPEN")))
	{
		func_313(1882605165);
		func_302(869642051);
	}
	else
	{
		func_313(869642051);
		func_302(1882605165);
	}
	if (func_310(joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED")))
	{
		func_313(-184821200);
		func_302(-490818122);
		func_302(1412515639);
		func_302(-1377139506);
	}
	else
	{
		func_302(-184821200);
		func_313(-490818122);
		func_313(1412515639);
		func_313(-1377139506);
	}
	if (func_310(joaat("WS_RHODES_SALOON_POST_BRAITHWAITES")))
	{
		func_314(130);
		func_304(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3.0f, 1.5f, 347.0f, false, 7);
		}
	}
	else
	{
		func_314(131);
		func_304(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (func_310(joaat("WS_RHODES_SALOON_TABLE_UP")))
	{
		func_314(133);
		func_304(132);
	}
	else if (func_310(joaat("WS_RHODES_SALOON_TABLE_DOWN")))
	{
		func_314(132);
		func_304(133);
	}
	if (func_310(joaat("WS_RHODES_JAIL_INTACT")))
	{
		func_313(1603294144);
		func_302(349486662);
		func_314(144);
		func_304(143);
	}
	else
	{
		func_313(349486662);
		func_302(1603294144);
		func_314(143);
		func_304(144);
	}
	if (func_310(joaat("WS_VALENTINE_JAIL_INTACT")))
	{
		func_313(897455211);
		func_313(774477221);
		func_302(1136898294);
		func_302(1097534152);
		func_314(146);
		func_304(145);
	}
	else
	{
		func_313(1136898294);
		func_313(1097534152);
		func_302(897455211);
		func_302(774477221);
		func_314(145);
		func_304(146);
	}
	if (func_310(joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED")))
	{
		func_314(170);
		func_304(169);
	}
	else
	{
		func_314(169);
		func_304(170);
	}
	if (func_310(joaat("WS_VALENTINE_GENSTORE_LIGHTS_OFF")))
	{
		func_304(180);
	}
	else
	{
		func_314(180);
	}
	if (func_310(joaat("WS_VALENTINE_AUCTION_GATES_OPEN")))
	{
		func_302(724436573);
		func_313(-1475403379);
	}
	else
	{
		func_302(-1475403379);
		func_313(724436573);
	}
	if (func_310(joaat("WS_RHODES_BANK_LIGHTS_OFF")))
	{
		func_314(179);
	}
	else
	{
		func_304(179);
	}
	if (func_310(joaat("WS_RHODES_SHERIFF_LOCKED")))
	{
		if (func_27() == -1)
		{
			if (!func_336(70, 32))
			{
				func_320(70, 32);
				func_337(70);
			}
		}
	}
	else if (func_27() == -1)
	{
		if (func_336(70, 32))
		{
			func_319(70, 32);
			func_338(70);
		}
	}
	if (func_310(joaat("WS_WATSON_GRAVE")))
	{
		func_302(1138093977);
		func_327("wat_nav_grave");
	}
	else
	{
		func_313(1138093977);
		func_328("wat_nav_grave");
	}
	if (func_310(joaat("WS_MICAH_CAMP_POST")))
	{
		func_313(1849913721);
		func_302(573576705);
	}
	else if (func_310(joaat("WS_MICAH_CAMP")))
	{
		func_302(1849913721);
		func_313(573576705);
	}
	else if (func_310(joaat("WS_MICAH_CAMP_EMPTY")))
	{
		func_313(1849913721);
		func_313(573576705);
	}
	if (func_310(joaat("WS_UTOPIA_TREE_STANDING")))
	{
		func_313(-848315456);
		func_313(105426297);
		func_313(2095421392);
		func_313(-1614141377);
		func_313(45121961);
		func_313(-7594117);
		func_313(1388161943);
		func_302(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38.0f, -1170.786f, -12.71267f, 42.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1.0f, 1.0f, 6.0f, 0.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		func_328("utp2_nav_tree_fallen");
	}
	else if (func_310(joaat("WS_UTOPIA_TREE_MISSION")))
	{
		func_313(-642132908);
		func_313(105426297);
		func_313(-1614141377);
		func_313(45121961);
		func_313(-7594117);
		func_313(1388161943);
		func_302(2095421392);
		func_302(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38.0f, -1186.829f, -18.19722f, 45.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1.0f, 13.0f, 1.0f, 15.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1.0f, 1.0f, 9.0f, -7.41f, false, 7);
		}
		func_328("utp2_nav_tree_fallen");
	}
	else if (func_310(joaat("WS_UTOPIA_TREE_FALLEN")))
	{
		func_313(-642132908);
		func_313(2095421392);
		func_313(105426297);
		func_313(-7594117);
		func_302(45121961);
		func_302(-1614141377);
		func_302(-848315456);
		func_302(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38.0f, -1186.829f, -18.19722f, 45.0f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38.0f, -1163.424f, -13.43965f, 42.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1.0f, 13.0f, 3.0f, 15.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1.0f, 1.0f, 9.0f, -7.41f, false, 7);
		}
		func_327("utp2_nav_tree_fallen");
	}
	else if (func_310(joaat("WS_UTOPIA_TREE_STUMP")))
	{
		func_313(-642132908);
		func_313(-848315456);
		func_313(-1614141377);
		func_313(45121961);
		func_313(2095421392);
		func_313(-7594117);
		func_313(1388161943);
		func_302(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38.0f, -1170.786f, -12.71267f, 42.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1.0f, 1.0f, 6.0f, 0.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		func_328("utp2_nav_tree_fallen");
	}
	if (!func_339(51))
	{
		if (func_310(joaat("WS_NATIVE_SON2_TREE_FALLEN")))
		{
			func_313(1672215059);
			func_313(-1177027698);
			func_313(joaat("DES_NTVS2_TREEFALL_END"));
			func_313(604668055);
			func_313(joaat("DES_NTVS2_TREEFALL"));
			func_302(1708195603);
			func_327("nts2_fallen_tree_ridge");
		}
		else
		{
			func_313(joaat("DES_NTVS2_TREEFALL_END"));
			func_313(604668055);
			func_313(1708195603);
			func_302(joaat("DES_NTVS2_TREEFALL"));
			func_302(1672215059);
			func_302(-1177027698);
			func_328("nts2_fallen_tree_ridge");
		}
	}
	if (func_27() == -1)
	{
		if (func_310(joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER")))
		{
			if (func_336(497, 32))
			{
				func_319(497, 32);
				func_338(497);
			}
			if (func_336(498, 32))
			{
				func_319(498, 32);
				func_338(498);
			}
		}
		else
		{
			if (!func_336(497, 32))
			{
				func_320(497, 32);
				func_337(497);
			}
			if (!func_336(498, 32))
			{
				func_320(498, 32);
				func_337(498);
			}
		}
	}
	if (func_310(joaat("WS_UTP1_COVER01")))
	{
		func_313(-1403908542);
		func_313(1598834669);
		func_313(1299817544);
		func_313(1204787444);
		func_313(66523468);
		func_313(2040259178);
		func_313(1947806010);
		func_328("str_nav_construction_stage_0");
		func_328("str_nav_construction_stage_1");
		func_328("str_nav_construction_stage_2");
		func_328("str_nav_construction_stage_3");
		func_302(1924458218);
		func_327("utp1_bridge_cover");
	}
	else
	{
		func_313(1924458218);
		func_328("utp1_bridge_cover");
		if (func_310(joaat("WS_STRAWBERRY_HOUSE_STAGE_0")))
		{
			func_313(1299817544);
			func_313(1204787444);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_2");
			func_328("str_nav_construction_stage_3");
			func_302(-1403908542);
			func_302(1598834669);
			func_327("str_nav_construction_stage_0");
			if (func_27() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_310(joaat("WS_STRAWBERRY_HOUSE_STAGE_1")))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1204787444);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_2");
			func_328("str_nav_construction_stage_3");
			func_302(1299817544);
			func_327("str_nav_construction_stage_1");
			if (func_27() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_310(joaat("WS_STRAWBERRY_HOUSE_STAGE_2")))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1299817544);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_3");
			func_302(1204787444);
			func_327("str_nav_construction_stage_2");
			if (func_27() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_310(joaat("WS_STRAWBERRY_HOUSE_STAGE_3")))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1299817544);
			func_313(1204787444);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_2");
			func_302(66523468);
			func_302(2040259178);
			func_302(1947806010);
			func_327("str_nav_construction_stage_3");
			if (func_27() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (func_310(joaat("WS_SERIAL_KILLER_CABIN_OPEN")))
	{
		func_313(73781828);
		func_302(-391567710);
	}
	else
	{
		func_313(-391567710);
		func_302(73781828);
	}
	if (func_310(joaat("WS_RIDE_THE_LIGHTNING_CHAIR")))
	{
	}
	else if (func_310(joaat("WS_RIDE_THE_LIGHTNING_BARRELS")))
	{
	}
	if (func_310(joaat("WS_FOR_MY_ART_NOBARPROPS")))
	{
		func_314(168);
	}
	else
	{
		func_304(168);
	}
	if (func_310(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
	{
		func_302(-205116461);
		func_302(-1490034522);
		func_313(-1473336090);
		func_313(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		func_314(158);
		if (!func_339(47))
		{
			func_304(159);
		}
		else
		{
			func_314(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (func_310(joaat("WS_NBX_ART_EXHIBIT_CANCELLED")))
		{
			func_304(155);
			func_314(154);
			func_304(157);
			func_314(156);
		}
		else
		{
			func_304(156);
			func_340(156);
			func_304(154);
			func_314(155);
			func_314(157);
		}
	}
	else
	{
		func_302(-1473336090);
		func_302(-1013403664);
		func_313(-205116461);
		func_313(-1490034522);
		Global_1934765.f_289 = 0;
		func_314(154);
		func_314(155);
		func_314(157);
		func_314(156);
		func_314(159);
		func_304(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_341(-179.0f), false, 7);
		}
	}
	if (func_310(joaat("WS_NBX_BUILDING_FUNDED")) && func_342())
	{
		func_313(432272547);
		func_302(204868257);
		func_327("nav_sdn_fundraiser");
	}
	else
	{
		func_313(204868257);
		func_302(432272547);
		func_328("nav_sdn_fundraiser");
	}
	if (func_310(joaat("WS_STD_GALA_BALCONY_HIGH_MEM")))
	{
		func_313(206289712);
		func_302(-1225383143);
	}
	else
	{
		func_313(-1225383143);
		func_302(206289712);
	}
	if (func_310(joaat("WS_STD_DOCTORS_OFFICE")))
	{
		func_313(-473077489);
		func_302(619024057);
		func_302(-836433697);
		func_325(586229709, 1);
	}
	else
	{
		func_313(-836433697);
		func_313(619024057);
		func_302(-473077489);
		func_269(586229709, 1);
	}
	if (func_310(joaat("WS_STD_GAMBLING_DEN")))
	{
		func_313(1821956151);
		func_302(-704461521);
	}
	else
	{
		func_313(-704461521);
		func_302(1821956151);
	}
	if (func_310(joaat("WS_FLAG_BRONTE_ADD_MP_DRESSING")))
	{
		func_304(166);
	}
	else
	{
		func_314(166);
	}
	if (func_310(joaat("WS_FLAG_BRONTE_ADD_SP_DRESSING")))
	{
		func_304(167);
	}
	else
	{
		func_314(167);
	}
	if (func_310(joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS")))
	{
		func_304(161);
		func_304(163);
		func_314(160);
		func_314(162);
	}
	else
	{
		func_304(160);
		func_304(162);
		func_314(161);
		func_314(163);
	}
	if (func_310(joaat("WS_INDUSTRY3_POKER_TABLES")))
	{
		func_304(142);
		func_314(141);
	}
	else
	{
		func_314(141);
		func_314(142);
	}
	if (func_310(joaat("WS_MICAH_HIDEOUT")))
	{
		func_302(-1499162505);
		func_302(joaat("AMB_CAMP_GRZ_FINALE2"));
		if (func_310(joaat("WS_MICAH_HIDEOUT_ABANDON")))
		{
			func_313(-1832103801);
			func_314(230);
			func_328("fin2_micah_hideout");
			func_327("fin2_micah_hideout_abandon");
		}
		else
		{
			func_302(-1832103801);
			func_304(230);
			func_328("fin2_micah_hideout_abandon");
			func_327("fin2_micah_hideout");
		}
	}
	else
	{
		func_313(-1499162505);
		func_313(joaat("AMB_CAMP_GRZ_FINALE2"));
		func_313(-1832103801);
		func_314(230);
		func_328("fin2_micah_hideout");
		func_328("fin2_micah_hideout_abandon");
	}
	if (func_310(joaat("WS_FIN2_EXT_P19_FRAMES")))
	{
		func_313(-468702164);
		func_314(192);
		func_302(-1436188587);
		func_304(191);
	}
	else
	{
		func_313(-1436188587);
		func_314(191);
		func_302(-468702164);
		func_304(192);
	}
	if (func_310(joaat("WS_VALENTINE_GENSTORE_ACTIVE")))
	{
		func_302(1573766063);
	}
	else
	{
		func_313(1573766063);
	}
	if (func_310(joaat("WS_VALENTINE_BUTCHER_ACTIVE")))
	{
		func_302(-892659042);
	}
	else
	{
		func_313(-892659042);
	}
	if (func_310(joaat("WS_VALENTINE_BANK_WINDOWS")))
	{
		func_304(194);
		func_314(195);
	}
	else
	{
		func_304(195);
		func_314(194);
	}
	if (func_310(joaat("WS_VALENTINE_SALOON_WINDOWS")))
	{
		func_304(196);
	}
	else
	{
		func_314(196);
	}
	if (func_310(joaat("WS_NBX_ART_RC_MASON_PASSED")))
	{
		func_304(19);
		func_314(18);
	}
	else
	{
		func_304(18);
		func_314(19);
	}
	if (func_310(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF")))
	{
	}
	else if (func_310(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON")))
	{
	}
	if (func_310(joaat("WS_WAR_VETERAN_FISH_TROPHY_ON")))
	{
		func_304(176);
	}
	else
	{
		func_314(176);
	}
	if (func_310(joaat("WS_WAR_VETERAN_WOLF_TROPHY_ON")))
	{
		func_304(177);
	}
	else
	{
		func_314(177);
	}
	if (func_310(joaat("WS_HERE_KITTY_WAGONS_GONE")))
	{
		func_313(943998860);
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_343(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_310(joaat("WS_HERE_KITTY_WAGONS_TRASHED")))
	{
		func_313(943998860);
		func_302(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_302(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_302(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_327("HKK_Trashed_Wagons");
		func_344(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_310(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED")))
	{
		func_302(943998860);
		func_302(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Camp_Only");
		func_327("HKK_Part_Fixed");
		func_344(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_310(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP")))
	{
		func_302(943998860);
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_327("HKK_Camp_Only");
		func_344(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_310(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP")))
	{
		func_313(943998860);
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_313(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_343(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (func_310(joaat("WS_RIDE_THE_LIGHTNING_WAGON")))
	{
		func_302(2015532863);
	}
	else
	{
		func_313(2015532863);
	}
	if (func_310(joaat("WS_NBX_MAUSOLEUM_PLUNDERED")))
	{
		func_313(-800942395);
		func_302(-741366935);
	}
	else
	{
		func_313(-741366935);
		func_302(-800942395);
	}
	if (func_310(joaat("WS_VALENTINE_WAGON")))
	{
		func_302(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3.0f, 9.6f, false, 7);
		}
	}
	else
	{
		func_313(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (func_310(joaat("WS_SHOWS_SD_VAUD_01")))
	{
		func_302(808576710);
		func_313(-775951892);
		func_313(1547403545);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	else if (func_310(joaat("WS_SHOWS_SD_VAUD_02")))
	{
		func_302(1547403545);
		func_313(-775951892);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	else if (func_310(joaat("WS_SHOWS_SD_VAUD_03")))
	{
		func_302(-660075384);
		func_313(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
	}
	else if (func_310(joaat("WS_SHOWS_SD_VAUD_04")))
	{
		func_302(137316925);
		func_313(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(-660075384);
	}
	else
	{
		func_302(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	if (func_310(joaat("WS_SHOWS_VAL_MAG_01")))
	{
		func_302(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(joaat("WS_SHOWS_VAL_MAG_02")))
	{
		func_302(-2142987163);
		func_313(1104143966);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(joaat("WS_SHOWS_VAL_MAG_03")))
	{
		func_302(1027093524);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(joaat("WS_SHOWS_VAL_MAG_04")))
	{
		func_302(1879779330);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(joaat("WS_SHOWS_VAL_MAG_05")))
	{
		func_302(-1617847332);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(317070801);
	}
	else
	{
		func_302(317070801);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
	}
	if (func_345(45))
	{
		if (func_310(joaat("WS_SHOWS_SD_MOV_02")))
		{
			func_302(-771786794);
			func_313(-1267247536);
			func_313(-468635897);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
		else if (func_310(joaat("WS_SHOWS_SD_MOV_05")))
		{
			func_302(-1267247536);
			func_313(-468635897);
			func_313(-771786794);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
		else
		{
			func_302(-468635897);
			func_313(-771786794);
			func_313(-1267247536);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
	}
	else if (func_310(joaat("WS_SHOWS_SD_MAG_02")))
	{
		func_302(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(joaat("WS_SHOWS_SD_MAG_03")))
	{
		func_302(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(joaat("WS_SHOWS_SD_MAG_04")))
	{
		func_302(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(joaat("WS_SHOWS_SD_MAG_05")))
	{
		func_302(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else
	{
		func_302(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	if (func_310(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND")))
	{
		func_313(-205505701);
		func_302(-51262018);
	}
	else
	{
		func_313(-51262018);
		func_302(-205505701);
	}
	if (func_310(joaat("WB_DISCO_ALCHEMIST_HOUSE")))
	{
		func_313(874022542);
		func_313(joaat("DES_DIS_ALCHEMIST"));
		func_302(552030279);
		func_327("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_313(552030279);
		func_328("disco_nav_alchemist_house_burnt");
		func_302(874022542);
		func_302(joaat("DES_DIS_ALCHEMIST"));
	}
	if (func_310(joaat("WS_DISCO_DEAD_SNAKE")))
	{
		func_302(joaat("DIS_SCM_DEADSNAKE"));
	}
	else
	{
		func_313(joaat("DIS_SCM_DEADSNAKE"));
	}
	func_302(-791673850);
	func_302(-395621323);
	func_302(-1799943886);
	func_302(-1436313374);
	func_302(1473078398);
	func_313(-2116659774);
	func_302(-953275122);
	func_302(-893624314);
	func_302(1193359531);
	func_302(1145227353);
	func_302(1915867459);
	func_302(98482444);
	func_302(26932594);
	func_302(-1930879809);
	func_302(46370274);
	func_302(-1279036865);
	func_302(781058494);
	func_302(1467466015);
	func_302(-363626454);
	func_302(-1314125880);
	func_302(1763246099);
	func_302(-593457329);
	func_302(274045919);
	func_302(-1047394327);
	func_302(-1535282356);
	func_302(-1816233372);
	func_302(-551038153);
	func_302(-1022426685);
	func_302(-262759679);
	func_302(976641588);
	func_302(1601053042);
	func_313(453346329);
	func_302(-1233192626);
	func_313(-620856989);
	func_302(1262164851);
	func_302(joaat("DIS_TAL_CIRCUS_IPL"));
	func_328("disco_nav_circus_wagon_off");
	func_302(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	func_304(202);
	func_304(231);
	if (func_310(joaat("WS_VALENTINE_MAGIC_LANTERN_DOOR")))
	{
		func_313(317070801);
		func_302(-763477089);
	}
	else
	{
		func_313(-763477089);
		func_302(317070801);
	}
	if (func_310(joaat("WS_VALENTINE_POKER_LESS_CHAIRS")))
	{
		func_314(175);
		func_304(174);
	}
	else
	{
		func_314(174);
		func_304(175);
	}
	if (func_310(joaat("WS_VALENTINE_SALOON_BED_BLOODY")))
	{
		func_314(197);
	}
	else
	{
		func_304(197);
	}
	if (func_310(joaat("WS_VALENTINE_HOTEL_CURTAINS_MUD3")))
	{
		func_314(173);
		func_304(171);
		func_304(172);
	}
	else
	{
		func_304(173);
		func_314(171);
		func_314(172);
	}
	if (func_310(joaat("WS_VALENTINE_BURIAL_DRUNK")))
	{
		func_313(1886602884);
		func_313(-1640200357);
		func_302(-1280884206);
	}
	else if (func_310(joaat("WS_VALENTINE_BURIAL_POST_DRUNK")))
	{
		func_313(-1280884206);
		func_302(1886602884);
		func_302(-1640200357);
	}
	else
	{
		func_313(-1280884206);
		func_313(-1640200357);
		func_302(1886602884);
	}
	if (func_310(joaat("WS_VALENTINE_BURIAL_MURDER")))
	{
		func_313(-2127665186);
		func_313(-451832572);
		func_313(-689352221);
		func_313(1854980771);
		func_313(325677491);
		func_313(-391187090);
		func_313(1513363974);
		func_313(-1349539327);
		func_313(1963724330);
		func_302(-1902184438);
		func_302(1236921921);
		func_302(740012805);
	}
	else if (func_310(joaat("WS_VALENTINE_BURIAL_POST_MURDER")))
	{
		func_313(-1902184438);
		func_313(-689352221);
		func_313(1236921921);
		func_313(-391187090);
		func_313(740012805);
		func_313(1963724330);
		func_302(-2127665186);
		func_302(-451832572);
		func_302(1854980771);
		func_302(325677491);
		func_302(1513363974);
		func_302(-1349539327);
	}
	else
	{
		func_313(-1902184438);
		func_313(-451832572);
		func_313(1236921921);
		func_313(325677491);
		func_313(740012805);
		func_313(-1349539327);
		func_302(-2127665186);
		func_302(-689352221);
		func_302(1854980771);
		func_302(-391187090);
		func_302(1513363974);
		func_302(1963724330);
	}
	if (func_310(joaat("WS_RHODES_BURIAL")))
	{
		func_313(-1366431554);
		func_302(-960136064);
	}
	else
	{
		func_313(-960136064);
		func_302(-1366431554);
	}
	if (func_310(joaat("WS_BLACKWATER_BURIAL")))
	{
		func_313(-2122914678);
		func_302(-518004776);
	}
	else
	{
		func_313(-518004776);
		func_302(-2122914678);
	}
	if (func_310(joaat("WS_CLEMENS_POINT_BARREL")))
	{
		func_302(joaat("DEWCLM_BARREL"));
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1.0f, 0.0f, false, 7);
		}
	}
	else
	{
		func_313(joaat("DEWCLM_BARREL"));
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (func_310(joaat("WS_HORSESHOE_BARREL")))
	{
		func_302(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0.0f, false, 7);
		}
	}
	else
	{
		func_313(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (func_310(1216784232))
	{
		func_302(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		func_313(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (func_310(joaat("WS_HUNTING_2_ABANDONED_CAMP")))
	{
		func_302(joaat("REG_HRT_HUNTING02"));
		func_344(joaat("REG_HRT_HUNTING02"));
	}
	else
	{
		func_313(joaat("REG_HRT_HUNTING02"));
		func_343(joaat("REG_HRT_HUNTING02"));
	}
	if (func_310(joaat("WS_PRONGHORN_RANCH_EXIST")))
	{
		if (func_346((1 << 29)) == 0)
		{
			func_347((1 << 29));
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"), -2550.0f, 400.0f, 0.0f, 0);
		}
		func_313(1221694281);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_328("pro_empty_nav");
		func_328("pro_fence_fixed_nav");
		func_328("pro_burned_nav");
		func_302(1423681694);
		func_302(775893260);
		func_302(joaat("PRO_MANSION_INT_MILO"));
		func_302(joaat("PRO_BARN_INT_MILO"));
		func_302(1031662866);
		func_302(-1041976064);
		func_302(joaat("PRO_ES_01_WORKERHOUSE"));
		func_302(-436084091);
		func_302(-868830916);
		func_302(joaat("PRO_WRKSHP_INT_MILO"));
		func_302(-262959893);
		func_302(1049886174);
		func_302(-1042390616);
		func_302(2038589758);
		func_327("pro_fence_broken_nav");
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_310(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED")))
	{
		if (func_346((1 << 29)) == 0)
		{
			func_347((1 << 29));
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"), -2550.0f, 400.0f, 0.0f, 0);
		}
		func_313(-436084091);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_328("pro_empty_nav");
		func_328("pro_fence_broken_nav");
		func_328("pro_burned_nav");
		func_302(1423681694);
		func_302(775893260);
		func_302(-329355129);
		func_302(2117211184);
		func_302(joaat("PRO_MANSION_INT_MILO"));
		func_302(joaat("PRO_BARN_INT_MILO"));
		func_302(1031662866);
		func_302(-1041976064);
		func_302(joaat("PRO_ES_01_WORKERHOUSE"));
		func_302(1221694281);
		func_302(-868830916);
		func_302(joaat("PRO_WRKSHP_INT_MILO"));
		func_302(-262959893);
		func_302(1049886174);
		func_302(-1042390616);
		func_302(2038589758);
		func_327("pro_fence_fixed_nav");
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_310(joaat("WS_PRONGHORN_RANCH_BURNED")))
	{
		if (func_346((1 << 29)) == 0)
		{
			func_347((1 << 29));
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"), -2550.0f, 400.0f, 0.0f, 0);
		}
		func_313(-436084091);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-1042390616);
		func_328("pro_empty_nav");
		func_328("pro_fence_broken_nav");
		func_328("pro_fence_fixed_nav");
		func_302(1423681694);
		func_302(joaat("PRO_MANSION_INT_MILO"));
		func_302(joaat("PRO_BARN_INT_MILO"));
		func_302(1031662866);
		func_302(-1041976064);
		func_302(joaat("PRO_ES_01_WORKERHOUSE"));
		func_302(1221694281);
		func_302(-868830916);
		func_302(joaat("PRO_WRKSHP_INT_MILO"));
		func_302(-262959893);
		func_302(1049886174);
		func_302(-118700196);
		func_302(-735136865);
		func_302(636278554);
		func_302(2038589758);
		func_327("pro_burned_nav");
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (func_346((1 << 29)))
		{
			func_349((1 << 29));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"));
		}
		func_313(1423681694);
		func_313(joaat("PRO_MANSION_INT_MILO"));
		func_313(joaat("PRO_BARN_INT_MILO"));
		func_313(1031662866);
		func_313(-1041976064);
		func_313(joaat("PRO_ES_01_WORKERHOUSE"));
		func_313(1221694281);
		func_313(-436084091);
		func_313(joaat("PRO_WRKSHP_INT_MILO"));
		func_313(-262959893);
		func_313(1049886174);
		func_313(-1042390616);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_313(2038589758);
		func_313(775893260);
		func_328("pro_fence_broken_nav");
		func_328("pro_fence_fixed_nav");
		func_328("pro_burned_nav");
		func_302(-1552951782);
		func_302(-1142569437);
		func_302(474113610);
		func_302(-297340751);
		func_302(-868830916);
		func_302(1802934313);
		func_302(2108112010);
		func_302(1208537422);
		func_302(361734047);
		func_302(446554495);
		func_327("pro_empty_nav");
		if (func_27() == -1)
		{
			func_322(22, 16);
			func_350(22);
		}
		if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(Global_1888801[22 /*35*/].f_4, false, 15);
			}
		}
	}
	if (func_310(joaat("WS_GUARMA3_TOWER_NORMAL")))
	{
		func_313(-217646849);
		func_313(-694809996);
		func_313(-2053475031);
		func_302(-279703229);
		func_302(-623091266);
	}
	else if (func_310(joaat("WS_GUARMA3_TOWER_FRAG")))
	{
		func_313(-279703229);
		func_313(-2053475031);
		func_302(-217646849);
		func_302(-694809996);
		func_302(-623091266);
	}
	else if (func_310(joaat("WS_GUARMA3_TOWER_DESTROYED")))
	{
		func_313(-279703229);
		func_313(-217646849);
		func_313(-623091266);
		func_302(-694809996);
		func_302(-2053475031);
	}
	if (func_310(joaat("WS_GUARMA3_GUARDS_DISABLED")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (func_310(joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED")))
	{
		func_313(-961488528);
		func_302(-1569624057);
	}
	else
	{
		func_313(-1569624057);
		func_302(-961488528);
	}
	if (func_310(joaat("WS_MP_STRAWBERRY_DR_MILO")))
	{
		func_302(131323483);
		func_313(-134556459);
	}
	else
	{
		func_313(131323483);
		func_302(-134556459);
	}
	if (func_345(45))
	{
		func_313(joaat("WAP_RAINSFALLS_BASE"));
		func_313(661576070);
		func_313(795060201);
		func_313(1003623269);
		func_313(-395621323);
		func_313(-924329535);
		func_302(739805687);
		func_302(-243627670);
		func_302(-198004806);
		func_327("nav_wapiti_es");
	}
	else
	{
		func_313(739805687);
		func_313(-243627670);
		func_313(-198004806);
		func_328("nav_wapiti_es");
		func_302(1003623269);
		func_302(-924329535);
		func_302(-395621323);
		if (func_310(joaat("WS_WAPITI_TENT_OPEN")))
		{
			func_313(661576070);
			func_302(joaat("WAP_RAINSFALLS_BASE"));
			func_302(795060201);
		}
		else
		{
			func_313(795060201);
			func_302(joaat("WAP_RAINSFALLS_BASE"));
			func_302(661576070);
		}
	}
	if (func_310(joaat("WS_GRZ_WEST_CAMP_SITE")))
	{
		func_302(1489268640);
	}
	else
	{
		func_313(1489268640);
	}
	func_351();
	if (func_310(joaat("WS_PHONOGRAPH_BOAT_FOUND")))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_HOUSEBOAT"), 2300.0f, -330.0f, 0.0f, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_HOUSEBOAT"));
		Global_1934765.f_297 = 0;
	}
	if (func_310(joaat("WS_VANHORN_BOATS_FOUND")))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_VANHORNBOAT"), 3012.5f, 507.5f, 0.0f, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_VANHORNBOAT"));
		Global_1934765.f_298 = 0;
	}
	if (func_310(joaat("WS_SAINT_DENIS_BOATS_FOUND")))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_STDENISBOAT"), 2700.0f, -1600.0f, 0.0f, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_STDENISBOAT"));
		Global_1934765.f_299 = 0;
	}
	if (!func_310(joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER")))
	{
		func_302(joaat("SER_01_GRANDKOR"));
		func_302(joaat("SER_01_GRANDKOR2"));
		func_302(joaat("SER_01_GRANDKOR3"));
		if (func_310(joaat("WS_GRAND_KORRIGAN_LOW_RAILING")))
		{
			func_302(-1716205818);
			func_313(-276259505);
		}
		else
		{
			func_302(-276259505);
			func_313(-1716205818);
		}
		if (!Global_1934765.f_295 && func_352(5))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOAT"), 3290.0f, -1310.0f, 0.0f, 0);
			Global_1934765.f_295 = 1;
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_THE_GRAND_KORRIGAN_SEA"));
		}
	}
	else
	{
		func_313(joaat("SER_01_GRANDKOR"));
		func_313(joaat("SER_01_GRANDKOR2"));
		func_313(joaat("SER_01_GRANDKOR3"));
		func_313(-276259505);
		func_313(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(joaat("MAP_SPECIAL_SETTLEMENT_THE_GRAND_KORRIGAN_SEA"));
		}
	}
	if (func_310(joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED")))
	{
		func_302(joaat("NEW_BOATS_01_GRANDKOR"));
		func_302(joaat("NEW_BOATS_01_GRANDKOR2"));
		func_302(146172383);
		if (func_310(joaat("WS_GRAND_KORRIGAN_DOCKED_INTERIOR")))
		{
			func_302(joaat("NEW_BOATS_01_GRANDKOR3"));
			func_313(1157695860);
		}
		else
		{
			func_302(1157695860);
			func_313(joaat("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && func_352(5))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870.0f, -1400.0f, 0.0f, 0);
			Global_1934765.f_294 = 1;
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_THE_GRAND_KORRIGAN_DOCKED"));
		}
	}
	else
	{
		func_313(joaat("NEW_BOATS_01_GRANDKOR"));
		func_313(joaat("NEW_BOATS_01_GRANDKOR2"));
		func_313(joaat("NEW_BOATS_01_GRANDKOR3"));
		func_313(1157695860);
		func_313(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(joaat("MAP_SPECIAL_SETTLEMENT_THE_GRAND_KORRIGAN_DOCKED"));
		}
	}
	func_353();
	strcpy_s(&cVar1, 64, "nav_sdn_docks_");
	if (func_310(joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED")))
	{
		strcat_s(&cVar1, 64, "korrigan_");
	}
	if (func_310(joaat("WS_ANTENOR_DOCKED")))
	{
		strcat_s(&cVar1, 64, "antenor_");
		func_302(-445068262);
		func_302(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED"), false);
		}
	}
	else
	{
		func_313(-445068262);
		func_313(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED"), true);
		}
	}
	if (func_310(joaat("WS_SAINT_DENIS_DOCK_TRAINS")))
	{
		func_302(1048677741);
		func_302(-2035101386);
		func_302(1284188544);
		func_302(1520435387);
		func_302(876228895);
		strcat_s(&cVar1, 64, "trains_");
	}
	else
	{
		func_313(1048677741);
		func_313(-2035101386);
		func_313(1284188544);
		func_313(1520435387);
		func_313(876228895);
	}
	if (!func_345(45))
	{
		func_313(-274080837);
		func_313(-1036688493);
		func_313(-1512794226);
		func_313(913995529);
		func_302(481139295);
		func_302(165972019);
		func_302(1679182807);
		func_302(-1986089134);
		strcat_s(&cVar1, 64, "pre_es");
	}
	else
	{
		func_313(481139295);
		func_313(165972019);
		func_313(1679182807);
		func_313(-1986089134);
		func_302(-274080837);
		func_302(-1036688493);
		func_302(-1512794226);
		func_302(913995529);
		strcat_s(&cVar1, 64, "es");
	}
	func_327(&cVar1);
	if (func_310(joaat("WS_ROANOKE_BOOBY_TRAP_HOLES")))
	{
		func_313(-890900091);
		func_302(-1758697759);
	}
	else
	{
		func_313(-1758697759);
		func_302(-890900091);
	}
	if (func_310(joaat("WS_CRN1_BURNT_BARN")))
	{
		func_313(joaat("COM_MULESHED"));
		func_313(joaat("COM_MULESHED_INTERIOR"));
		func_313(joaat("COM_MULESHED_PROPS"));
		func_328("nav_crn1_barn");
		func_302(joaat("COM_MULESHED_BURNT"));
		func_327("nav_crn1_barn_burnt");
	}
	else
	{
		func_313(joaat("COM_MULESHED_BURNT"));
		func_328("nav_crn1_barn_burnt");
		func_302(joaat("COM_MULESHED"));
		func_302(joaat("COM_MULESHED_INTERIOR"));
		func_302(joaat("COM_MULESHED_PROPS"));
		func_327("nav_crn1_barn");
	}
	if (func_310(joaat("WS_FIN1_BURNT_LADDER")))
	{
		func_314(190);
		func_304(189);
	}
	else
	{
		func_314(189);
		func_304(190);
	}
	if (func_310(joaat("WS_MFR_CHIMNEY_OFF")))
	{
		func_313(1736386364);
	}
	else
	{
		func_302(1736386364);
	}
	if (func_310(joaat("WS_MAC_CHIMNEY_OFF")))
	{
		func_313(516817794);
	}
	else
	{
		func_302(516817794);
	}
	if (func_310(joaat("WS_RID_CHIMNEY_OFF")))
	{
		func_313(-262371610);
	}
	else
	{
		func_302(-262371610);
	}
	if (func_310(joaat("WS_CRD_CHIMNEY_OFF")))
	{
		func_313(-389510791);
	}
	else
	{
		func_302(-389510791);
	}
	if (func_310(joaat("WS_PAI_CHIMNEY_OFF")))
	{
		func_313(71064384);
	}
	else
	{
		func_302(71064384);
	}
	func_302(579127040);
	func_302(-2011620387);
	if (func_310(joaat("WS_GRAVE_EAGLE_FLIES")))
	{
		func_302(joaat("DIS_BGV_00_EAGLE_GRAVE"));
	}
	else
	{
		func_313(joaat("DIS_BGV_00_EAGLE_GRAVE"));
	}
	if (func_310(joaat("WS_GRAVE_KIERAN")))
	{
		func_302(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		func_313(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (func_310(joaat("WS_GRAVE_SEAN")))
	{
		func_302(joaat("DIS_BAY_00_SEAN_GRAVE"));
	}
	else
	{
		func_313(joaat("DIS_BAY_00_SEAN_GRAVE"));
	}
	if (func_310(joaat("WS_GRAVE_LENNY")))
	{
		func_302(joaat("DIS_BAY_00_LENNY_GRAVE"));
	}
	else
	{
		func_313(joaat("DIS_BAY_00_LENNY_GRAVE"));
	}
	if (func_310(joaat("WS_GRAVE_HOSEA")))
	{
		func_302(joaat("DIS_BAY_00_HOSEA_GRAVE"));
	}
	else
	{
		func_313(joaat("DIS_BAY_00_HOSEA_GRAVE"));
	}
	if (func_310(joaat("WS_GRAVE_ARTHUR_GOOD")))
	{
		func_302(-1754541271);
		func_302(-1363999915);
		func_302(-1116430120);
	}
	else
	{
		func_313(-1754541271);
		func_313(-1363999915);
		func_313(-1116430120);
	}
	if (func_310(joaat("WS_GRAVE_ARTHUR_BAD")))
	{
		func_302(-163883900);
	}
	else
	{
		func_313(-163883900);
	}
	if (func_310(joaat("WS_GRAVE_SUSAN")))
	{
		func_302(-1010679388);
	}
	else
	{
		func_313(-1010679388);
	}
	if (func_310(joaat("WS_THOMAS_DOWNES")))
	{
		func_302(1033367448);
	}
	else
	{
		func_313(1033367448);
	}
	if (func_310(joaat("WS_COOTS_GRAVE_FILLED_IN")))
	{
		func_313(391022529);
		func_313(-1560636071);
		func_313(1870870569);
		func_313(-904833761);
		func_313(1713084298);
		func_313(928528900);
		func_302(-2118853492);
		func_302(-597126658);
	}
	else
	{
		func_313(-2118853492);
		func_313(-597126658);
		if (func_310(joaat("WS_COOTS_GRAVE_1_DUG")))
		{
			func_313(391022529);
			func_313(-1560636071);
			func_302(1713084298);
		}
		else
		{
			func_313(1713084298);
			func_302(391022529);
			func_302(-1560636071);
		}
		if (func_310(joaat("WS_COOTS_GRAVE_2_DUG")))
		{
			func_313(1870870569);
			func_313(-904833761);
			func_302(928528900);
		}
		else
		{
			func_313(928528900);
			func_302(1870870569);
			func_302(-904833761);
		}
	}
	if (func_310(-1556423728))
	{
		func_302(-1023331176);
	}
	else
	{
		func_313(-1023331176);
	}
	if (func_310(-144653976))
	{
		func_302(-1809571159);
	}
	else
	{
		func_313(-1809571159);
	}
	if (func_310(-351362068))
	{
		func_302(-2071756699);
	}
	else
	{
		func_313(-2071756699);
	}
	if (func_310(-939114198))
	{
		func_302(-1625703283);
	}
	else
	{
		func_313(-1625703283);
	}
	if (func_310(-1318987693))
	{
		func_302(-1696865897);
	}
	else
	{
		func_313(-1696865897);
	}
	if (func_310(joaat("WS_BGV_SHACK_LADDER_DOWN")))
	{
		func_313(-1950049852);
		func_302(-724913398);
	}
	else
	{
		func_313(-724913398);
		func_302(-1950049852);
	}
	func_328("railroad_stageMP");
	if (func_310(joaat("WS_FAST_TRAVEL_MARKERS")))
	{
		func_302(1858796535);
		func_302(945532872);
		func_302(-2043326480);
		func_302(992791293);
		func_302(-1815023148);
		func_302(731209239);
		func_302(1531008020);
		func_302(-952533419);
		func_302(582879672);
		func_302(1750312025);
		func_302(-759698431);
		func_302(59954835);
		func_302(-1461922204);
		func_302(2079207010);
		func_302(-1360840312);
		func_302(-816857367);
	}
	else
	{
		func_313(1858796535);
		func_313(945532872);
		func_313(-2043326480);
		func_313(992791293);
		func_313(-1815023148);
		func_313(731209239);
		func_313(1531008020);
		func_313(-952533419);
		func_313(582879672);
		func_313(1750312025);
		func_313(-759698431);
		func_313(59954835);
		func_313(-1461922204);
		func_313(2079207010);
		func_313(-1360840312);
		func_313(-816857367);
	}
	if (func_310(joaat("WS_TANNERSREACH_BURNT")))
	{
		func_302(-715865581);
		func_313(-1387511711);
		func_313(1901132483);
		func_313(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_328("rmllr_cabin_normal");
		func_327("rmllr_cabin_burnt");
	}
	else
	{
		func_302(-1387511711);
		func_302(1901132483);
		func_313(-2082345587);
		func_313(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_328("rmllr_cabin_burnt");
		func_327("rmllr_cabin_normal");
	}
	if (func_310(joaat("WS_RE_MUC_TREE_SCENE")))
	{
		func_302(joaat("CVB_MURDERTREE"));
	}
	else
	{
		func_313(joaat("CVB_MURDERTREE"));
	}
	if (func_310(joaat("WS_RE_MUC_ROCK_SCENE")))
	{
		func_302(joaat("M_07_P_MURDERROCK"));
	}
	else
	{
		func_313(joaat("M_07_P_MURDERROCK"));
	}
	if (func_310(joaat("WS_RE_MUC_KNIFE_SCENE")))
	{
		func_302(joaat("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		func_313(joaat("M_09_P_CAMPFIREMURDER"));
	}
	if (func_310(joaat("WS_NBD1_ABANDONED_BUILDING_INTERIOR")))
	{
		func_302(1628286919);
		func_313(joaat("NEW_COM_07_NOHOTEL"));
		func_313(joaat("NEW_COM_07_WIN"));
	}
	else
	{
		func_302(joaat("NEW_COM_07_NOHOTEL"));
		func_302(joaat("NEW_COM_07_WIN"));
		func_313(1628286919);
	}
	if (func_310(joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH")))
	{
		func_313(1928252407);
		func_302(-98843293);
	}
	else
	{
		func_313(-98843293);
		func_302(1928252407);
	}
	if (func_310(joaat("WS_RE_SP_SAVAGEWARNING_01")))
	{
		func_302(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		func_313(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	if (func_310(joaat("WS_RE_SP_SAVAGEWARNING_02")))
	{
		func_302(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		func_313(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	if (func_310(joaat("WS_VALENTINE_SHOOTOUT")))
	{
		func_313(-892659042);
		func_313(30201771);
		func_302(517553365);
		func_327("mud4_saloon_fight");
	}
	else if (func_310(joaat("WS_VALENTINE_SHOOTOUT_START")))
	{
		func_328("mud4_saloon_fight");
		func_313(30201771);
		func_302(-2083943324);
		func_302(517553365);
		func_327("mud4_saloon_fight_start");
	}
	else
	{
		func_328("mud4_saloon_fight_start");
		func_328("mud4_saloon_fight");
		func_313(517553365);
		func_313(-2083943324);
		func_302(30201771);
	}
	if (func_310(joaat("WS_CHELONIAN_CAMP")))
	{
		if (func_345(45))
		{
			func_313(joaat("K_11_P_MARY1_CAMP"));
			func_328("MS_MARY1_CAMP");
			func_302(joaat("K_11_P_CHELONIAN_CAMP"));
			func_327("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_313(joaat("K_11_P_CHELONIAN_CAMP"));
			func_328("MS_CHELONIAN_CAMP");
			func_302(joaat("K_11_P_MARY1_CAMP"));
			func_327("MS_MARY1_CAMP");
		}
		func_354(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		func_354(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3.0f);
		func_354(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		func_313(joaat("K_11_P_MARY1_CAMP"));
		func_313(joaat("K_11_P_CHELONIAN_CAMP"));
		func_355(&(Global_1934765.f_17), 1);
		func_355(&(Global_1934765.f_18), 1);
		func_355(&(Global_1934765.f_19), 1);
	}
	if (func_310(joaat("WS_ANNES_SETTLERS_CLOSED_OFF")))
	{
		func_302(-1417469821);
	}
	else
	{
		func_313(-1417469821);
	}
	if (func_310(joaat("WS_SAINTDENIS_BOAT")))
	{
	}
	else
	{
		func_313(146172383);
	}
	if (func_310(joaat("WS_BOOBY_TRAP_GUAMA_01_END")))
	{
		func_313(joaat("C_13_NOTRAP_01"));
		func_313(765343099);
		func_302(-909306169);
	}
	else if (func_310(joaat("WS_BOOBY_TRAP_GUAMA_01")))
	{
		func_313(joaat("C_13_NOTRAP_01"));
		func_313(-909306169);
		func_302(765343099);
	}
	else
	{
		func_313(765343099);
		func_313(-909306169);
		func_302(joaat("C_13_NOTRAP_01"));
	}
	if (func_310(joaat("WS_BOOBY_TRAP_ROANOKE_01_END")))
	{
		func_313(-890900091);
		func_313(-1758697759);
		func_302(591001924);
	}
	else if (func_310(joaat("WS_BOOBY_TRAP_ROANOKE_01")))
	{
		func_313(-890900091);
		func_313(591001924);
		func_302(-1758697759);
	}
	else
	{
		func_313(-1758697759);
		func_313(591001924);
		func_302(-890900091);
	}
	if (func_310(joaat("WS_BOOBY_TRAP_ROANOKE_02_END")))
	{
		func_313(-2092712551);
		func_302(-1307469679);
	}
	else if (func_310(joaat("WS_BOOBY_TRAP_ROANOKE_02")))
	{
		func_313(-1307469679);
		func_302(-2092712551);
	}
	else
	{
		func_313(-2092712551);
		func_313(-1307469679);
	}
	func_356(joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_01"), joaat("GANG_SKINAFTERMATH_LOC01_01"));
	func_356(joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_02"), joaat("GANG_SKINAFTERMATH_LOC02_01"));
	func_356(joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_03"), joaat("GANG_SKINAFTERMATH_LOC03_01"));
	func_356(joaat("WS_SAVAGE_AFTERMATH_WEEPING_01"), joaat("GANG_SKINAFTERMATH_LOC01_02"));
	func_356(joaat("WS_SAVAGE_AFTERMATH_WEEPING_02"), joaat("GANG_SKINAFTERMATH_LOC02_02"));
	func_356(joaat("WS_SAVAGE_AFTERMATH_WEEPING_03"), joaat("GANG_SKINAFTERMATH_LOC03_02"));
	if (func_310(joaat("WS_THIEVES_LANDING_BOAT")))
	{
		func_302(1111220101);
		func_302(1372565859);
		func_302(1644962309);
		if (!Global_1934765.f_296 && func_352(127))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_THIEVESLANDINGBOAT"), -1350.0f, -2300.0f, 0.0f, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		func_313(1111220101);
		func_313(1372565859);
		func_313(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (func_310(joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES")))
	{
		func_313(1137646647);
		func_302(-898081380);
	}
	else
	{
		func_313(-898081380);
		func_302(1137646647);
	}
	if (func_310(joaat("WS_FIN1_DISABLE_VANHORN_FIRE")))
	{
		func_313(1584946069);
	}
	else
	{
		func_302(1584946069);
	}
	if (func_310(joaat("WS_SHADY_BELLE_DOMINO_SEATS")))
	{
		func_313(-1828030290);
		func_302(827269092);
	}
	else
	{
		func_302(-1828030290);
		func_313(827269092);
	}
	if (func_310(joaat("WS_VALENTINE_RES_CURTAINS_CLOSED")))
	{
		func_304(165);
	}
	else
	{
		func_314(165);
	}
	if (func_310(joaat("WS_BACCHUS_BRIDGE_DESTROYED")))
	{
		func_313(1364392658);
		func_302(-794503195);
		func_327("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BRIDGEDESTROYED"), 512.0f, 1756.0f, 0.0f, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		func_313(-794503195);
		func_302(1364392658);
		func_328("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (func_310(joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN")))
	{
		func_313(-1192199739);
		func_302(-65072454);
	}
	else
	{
		func_313(-65072454);
		func_302(-1192199739);
	}
	if (func_310(joaat("WS_CLM_DOMINOES_LANTERN")))
	{
		func_302(joaat("DEWCLM_LANTERN"));
	}
	else
	{
		func_313(joaat("DEWCLM_LANTERN"));
	}
	if (func_310(joaat("WS_HSO_DOMINOES_LANTERN")))
	{
		func_302(joaat("HSO_LANTERN"));
	}
	else
	{
		func_313(joaat("HSO_LANTERN"));
	}
	if (func_310(joaat("WS_SHB_DOMINOES_LANTERN")))
	{
		func_302(joaat("SHB_LANTERN"));
	}
	else
	{
		func_313(joaat("SHB_LANTERN"));
	}
	if (func_357() == 2)
	{
		if (func_310(joaat("WS_DEWCLM_DOMINOES_SEATS")))
		{
			func_313(1734859244);
			func_302(719147410);
		}
		else
		{
			func_302(1734859244);
			func_313(719147410);
		}
	}
	if (!func_339(4))
	{
		if (func_357() == 1 && func_297() == 1)
		{
			if (func_310(joaat("WS_HSO_DOMINOES_SEATS")))
			{
				func_313(1948051928);
				func_302(1453569688);
			}
			else
			{
				func_302(1948051928);
				func_313(1453569688);
			}
		}
		else
		{
			func_313(1453569688);
			func_313(1948051928);
		}
	}
	if (func_310(joaat("WS_SEAN_1_TENT")))
	{
		func_302(joaat("MISSION_SEAN_1"));
		func_344(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20.0f, 0, 1);
	}
	else
	{
		func_313(joaat("MISSION_SEAN_1"));
		func_343(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20.0f, 1, 1);
	}
	if (func_310(joaat("WS_SEAN_1_CAMP")))
	{
		func_313(1759143160);
		func_302(398639187);
		func_328("reservation_abandoned");
		func_327("nav_sean1_camp");
	}
	else
	{
		func_313(398639187);
		func_302(1759143160);
	}
	if (func_310(joaat("WS_MOB3_TROLLEY_DAMAGE")))
	{
		func_313(1136457806);
		func_302(1255880931);
	}
	else
	{
		func_302(1136457806);
		func_313(1255880931);
	}
	if (func_310(joaat("WS_NATIVE1_COH_DESTROYED")))
	{
		func_313(-753844687);
		func_302(joaat("NAT_NATIVE1_COH_02"));
		func_327("ntv1_cohutta");
	}
	else
	{
		func_302(-753844687);
		func_313(joaat("NAT_NATIVE1_COH_02"));
		func_328("ntv1_cohutta");
	}
	if (func_310(joaat("WS_NATIVE1_ARMY_CAMP")))
	{
		func_302(joaat("NAT_NATIVE1_ARMY_01"));
		func_327("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			func_358(798.2925f, 1509.681f, 203.7047f, 21.0f, "native1_camp", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		func_313(joaat("NAT_NATIVE1_ARMY_01"));
		func_328("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			func_359(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (func_310(joaat("WS_POISONED_WELL_BLOCKED_ENTRY")))
	{
		func_302(-1835067413);
		func_313(-1392150519);
		func_304(226);
	}
	else
	{
		func_302(-1392150519);
		func_313(-1835067413);
		func_314(226);
	}
	if (func_310(joaat("WS_MP_SDS_WELL_COVER")))
	{
		func_302(joaat("SDS_WELL_COVER"));
	}
	else
	{
		func_313(joaat("SDS_WELL_COVER"));
	}
	if (func_310(joaat("WS_FEUD1_WATER_TOWER_UP")))
	{
		func_313(joaat("N_1114_WATERTOWER01_FEUD1"));
		func_302(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		func_302(joaat("N_1114_WATERTOWER01_FEUD1"));
		func_313(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (func_310(joaat("WS_TRAINROB1_SHOOTOUT")))
	{
		func_302(-1085363933);
		func_302(-537740003);
		func_327("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_313(-1085363933);
		func_313(-537740003);
		func_328("trn1_nav_ann_shootout_00");
	}
	if (func_310(joaat("WS_SISIKA_WINDOW_COVER")))
	{
		func_302(728046625);
	}
	else
	{
		func_313(728046625);
	}
	if (func_310(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE")))
	{
		func_304(228);
	}
	else
	{
		func_314(228);
	}
	if (func_310(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE")))
	{
		func_304(227);
	}
	else
	{
		func_314(227);
	}
	if (func_310(joaat("WS_SAINT_DENIS_DOCK_BOATS")))
	{
		func_302(-929277449);
		func_302(-723094901);
		func_302(-801609437);
	}
	else
	{
		func_313(-929277449);
		func_313(-723094901);
		func_313(-801609437);
	}
	if (func_310(1446719356))
	{
		func_302(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		func_313(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	if (func_310(171107021))
	{
		func_302(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		func_313(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

void func_180()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			Global_1934765.f_39[iVar0] = Global_40.f_283[iVar0];
		}
		else
		{
			Global_1934765.f_39[iVar0] = Global_1058888.f_40497[iVar0];
		}
		iVar0++;
	}
}

char* func_181(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("DEMO"):
			sVar0 = "demo";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("PRIVATE"):
			sVar0 = "private";
			break;
		case joaat("FRIENDLY"):
			sVar0 = "friendly";
			break;
		case joaat("HARDCORE"):
			sVar0 = "hardcore";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_POSSE"):
			sVar0 = "random_posse";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("SPAWN_LOCATION"):
			sVar0 = "spawn_location";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case joaat("HANDHELD"):
			sVar0 = "handheld";
			break;
		case joaat("BENCHMARK"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

bool func_182(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0.0f)
	{
		fParam6 = 0.0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

var func_183()
{
	if (func_360(Global_1347343.f_11, (1 << 9)))
	{
		return Global_2621440[0 /*12066*/].f_9.f_13;
	}
	return Global_2621440[1 /*12066*/].f_9.f_13;
}

Vector3 func_184()
{
	if (func_360(Global_1347343.f_11, (1 << 9)))
	{
		return Global_2621440[0 /*12066*/].f_9.f_7;
	}
	return Global_2621440[1 /*12066*/].f_9.f_7;
}

void func_185(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_361(iParam1);
	PED::_SET_PED_ACTIVE_PLAYER_TYPE(iParam0, iVar0);
	func_362();
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_27();
	}
	if (iVar0 == -1)
	{
		switch (iParam0)
		{
			case joaat("PLAYER_ZERO"):
				func_363(joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
				break;
			case joaat("PLAYER_THREE"):
				func_363(joaat("MPC_PLAYER_TYPE_SP_MARSTON"));
				break;
			default:
				break;
		}
		return;
	}
	if (iParam0 == joaat("MP_MALE"))
	{
		func_363(joaat("MPC_PLAYER_TYPE_MP_MALE"));
	}
	else if (iParam0 == joaat("MP_FEMALE"))
	{
		func_363(joaat("MPC_PLAYER_TYPE_MP_FEMALE"));
	}
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_364((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_365(sVar0);
}

bool func_188(int iParam0)
{
	return iParam0 != 0;
}

bool func_189(int iParam0)
{
	return Global_1899515 > iParam0;
}

void func_190(int iParam0)
{
	int iVar0;

	if (!func_188(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_366(iParam0, &iVar0))
	{
		func_367(iVar0);
	}
}

bool func_191(int iParam0)
{
	int iVar0;

	if (func_368(iParam0))
	{
		return false;
	}
	if (!func_369(Global_35, 0))
	{
		return false;
	}
	iVar0 = -1;
	if (!func_366(iParam0, &iVar0))
	{
		return false;
	}
	if (func_370(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		func_371(iParam0, 1);
		return true;
	}
	return false;
}

void func_192(int iParam0)
{
	Global_22 |= iParam0;
}

void func_193(int iParam0)
{
	int iVar0;

	if (func_372(iParam0, 1) || func_372(iParam0, 2))
	{
		iVar0 = func_373(iParam0);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			if (func_372(iParam0, 1))
			{
				func_374(iVar0, 0);
				func_375(iVar0, 0);
				func_376(iParam0, 1);
			}
			if (func_372(iParam0, 2))
			{
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iVar0);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iVar0);
				VOLUME::DELETE_VOLUME(iVar0);
				func_376(iParam0, 2);
			}
		}
	}
}

void func_194(int iParam0)
{
	if (func_372(iParam0, 4))
	{
		func_377(iParam0);
		func_376(iParam0, 4);
	}
	if (func_372(iParam0, 8))
	{
		func_378(iParam0);
		func_376(iParam0, 8);
	}
}

int func_195()
{
	return Global_1897952.f_41;
}

bool func_196(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = func_379(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		if (func_27() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952.f_42, 523);
				return true;
			}
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				func_380(sVar0, 523);
				return true;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952.f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952.f_43), Global_1897952.f_51, true, 0))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1897952.f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return false;
		}
		Global_1897952.f_42 = SCRIPTS::START_NEW_SCRIPT(sVar0, (1 << 10));
		strcpy_s(&(Global_1897952.f_43), 64, sVar0);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		bVar1 = func_381(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), (bVar1 || func_382(func_234(iParam0))));
		if (func_234(iParam0) != func_234(func_195()) || bVar1)
		{
			func_383(func_195(), 0);
			iVar2 = func_102(Global_36, 1);
			if (!func_287(iVar2))
			{
				if (!func_77(Global_1935630, (1 << 14)) && !func_384())
				{
					if (func_385(func_234(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						func_386(-1, -1, -1, 0, func_234(iParam0), 0);
					}
					else if (bVar1)
					{
						func_386(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_73(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_387(iParam0);
			}
			else
			{
				func_383(iParam0, 1);
			}
		}
		if (func_195() != -1)
		{
			func_388(func_195());
			func_377(func_195());
		}
		func_389(iParam0);
		if (func_390(iParam0))
		{
			PLAYER::_0x14E57F88BA0A07FC(func_391(iParam0));
		}
		func_392(iParam0);
		func_393(iParam0);
		iVar3 = -1000;
		if (func_207(func_225()))
		{
			iVar3 = Global_1888801[func_225() /*35*/].f_1;
		}
		if (iVar3 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar4 = func_102(Global_36, 1);
			if (func_229(iVar4, 1, 0) == 0)
			{
				func_395(func_394(iParam0, 1), func_234(iParam0));
			}
			func_396(0.775f, 0.2f, 0.025f, 0.0f);
			func_378(iParam0);
		}
		if (8 == iParam0 != func_310(joaat("WS_GUARMA_EXISTS")))
		{
			func_397(joaat("WS_GUARMA_EXISTS"), 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

int func_197(Vector3 vParam0)
{
	return func_398(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_198()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	fVar2 = 4.0f;
	fVar3 = 3.0f;
	if ((Global_1357549.f_1641 >= 6 && Global_1357549.f_1641 != 10) || (Global_1357549.f_1641 == 10 && func_399(&(Global_1357549.f_1642)) < ((fVar2 + fVar3) + 6.75f)))
	{
		CAM::_0x71D71E08A7ED5BD7(1);
	}
	switch (Global_1357549.f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129 /*PRF_DisableAmbientPrompts*/, true);
			break;
	}
	switch (Global_1357549.f_1641)
	{
		case 0:
			if (func_400() == 0 || func_401())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_369(func_402(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_402(iVar0));
					if (iVar1 == 3)
					{
						Global_1357549.f_1645 = func_403(iVar0);
						PED::SET_PED_CONFIG_FLAG(func_402(iVar0), 343 /*PCF_0x8FD863AF*/, true);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0)))
						{
							func_404(func_402(Global_1357549.f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549.f_1646 = 1;
							Global_1357549.f_1647 = 1;
							Global_1357549.f_1641 = 1;
						}
					}
					else if (iVar1 == 1)
					{
						Global_1357549.f_1645 = func_403(iVar0);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0)))
						{
							if (Global_1357549.f_1646 == 1 || ENTITY::GET_IS_ANIMAL(func_402(iVar0)))
							{
								if (ENTITY::GET_IS_ANIMAL(func_402(iVar0)))
								{
									func_404(func_402(Global_1357549.f_1645), "LEAVE_DOG_ALONE", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(func_402(iVar0));
								}
								else
								{
									Global_1357549.f_1646 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										func_404(func_402(Global_1357549.f_1645), "GENERIC_MOCK", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									}
									else
									{
										func_405(iVar0);
									}
								}
							}
						}
					}
					else if (iVar1 == 2)
					{
						Global_1357549.f_1645 = func_403(iVar0);
						if (((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0))) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(Global_1357549.f_1645)))
						{
							if (Global_1357549.f_1647 == 1)
							{
								Global_1357549.f_1647 = 0;
								if (func_406(iVar0))
								{
									func_404(func_402(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								}
								else
								{
									func_404(func_402(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
								}
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
			func_407(Global_1357549.f_1635, &(Global_1357549.f_1637), &(Global_1357549.f_1640));
			if ((func_400() == 0 || func_401()) || func_213(Global_1357549.f_1637))
			{
				func_408();
				Global_1357549.f_1641 = 0;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_369(func_402(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_402(iVar0));
					if (iVar1 == 4)
					{
						if (func_213(Global_1357549.f_1637) == 0)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == 0 && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == 0)
								{
									Global_1357549.f_1645 = func_409(iVar0, 1);
									if (func_410(Global_1357549.f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(Global_1357549.f_1645)))
									{
										if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
										}
										func_408();
										Global_1357549.f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(func_411(), 0, func_412(Global_1357549.f_1635), false, true);
										Global_1357549.f_1641 = 3;
									}
									else
									{
										func_408();
										Global_1357549.f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1636);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Global_1357549.f_1636, func_412(Global_1357549.f_1635));
			Global_1357549.f_1641 = 2;
			break;
		case 2:
			if (func_413(Global_1357549.f_1645))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1357549.f_1636, true, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Global_1357549.f_1636, func_412(Global_1357549.f_1635)))
						{
							TASK::CLEAR_PED_TASKS(func_402(Global_1357549.f_1645), true, false);
							func_414();
							func_415(0, 0, 0);
							Global_1357549.f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_416(Global_1357549.f_1645, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			break;
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1357549.f_1636, false))
			{
				if (func_369(Global_35, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				func_417();
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_PLAYER_SLEEP_GROUND"), 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(func_402(Global_1357549.f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_402(Global_1357549.f_1645), false, false, true, false);
				func_404(func_402(Global_1357549.f_1645), func_418(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549.f_1641 = 5;
			}
			else
			{
				func_419();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1636);
			}
			break;
		case 5:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.15f)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				}
			}
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.92f || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.37f))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549.f_1636, false);
				func_420(&(Global_1357549.f_1642), 0);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_402(Global_1357549.f_1645), true, false, true, false);
				func_421(joaat("CSTAG_GRIEFING_KNOCKOUT_POST"), joaat("CSTP_NORMAL"), joaat("CSTAG_PRIORITY_CRITICAL"), 6, 1, 1, 0);
				Global_1357549.f_1641 = 6;
			}
			break;
		case 6:
			if (func_399(&(Global_1357549.f_1642)) > fVar2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549.f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549.f_1640);
				ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(Global_1357549.f_1636, func_412(Global_1357549.f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549.f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549.f_1641 = 8;
				func_422(Global_1357549.f_1645, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				func_423();
				func_424(fVar3);
				return true;
			}
			break;
		case 8:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_PLAYER_SLEEP_GROUND"), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					if (func_399(&(Global_1357549.f_1642)) > (fVar2 + 2.5f))
					{
						Global_1357549.f_1641 = 7;
					}
				}
			}
			break;
		case 7:
			Global_1357549.f_1635++;
			if (Global_1357549.f_1635 >= 4)
			{
				Global_1357549.f_1635 = 0;
			}
			PED::_0xC494C76A34266E82(Global_35, 3);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			func_425();
			Global_1357549.f_1641 = 9;
			break;
		case 9:
			func_426();
			if (func_399(&(Global_1357549.f_1642)) > (fVar2 + fVar3))
			{
				Global_1357549.f_1641 = 10;
			}
			break;
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				if (func_369(Global_35, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
				}
				func_427(&(Global_1357549.f_1642));
				STREAMING::_REMOVE_SCENARIO_ASSET(joaat("WORLD_PLAYER_SLEEP_GROUND"));
				func_428(2, joaat("HONOR_EVENT_ANTAGONIZE") /* GXTEntry: "Antagonize" */, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				Global_1357549.f_1641 = 0;
			}
			break;
	}
	return false;
}

void func_199()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] != -1)
		{
			func_429(iVar0);
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_430(iVar0) != 0)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				func_431(iVar0);
			}
		}
		iVar0++;
	}
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 -= (Global_1894899 & 64);
	}
}

int func_202()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;

	if (Global_1572887.f_8)
	{
		return 1;
	}
	if ((Global_36 == 0.0f && Global_36.f_1 == 0.0f) && Global_36.f_2 == 0.0f)
	{
		return 1;
	}
	if ((Global_1894899 & 264) != 0)
	{
		return 1;
	}
	if (Global_1572887.f_12 == -1 && func_41(64))
	{
		bVar0 = true;
	}
	else if (Global_1572887.f_12 == 0)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_207(Global_1894899.f_2))
	{
		bVar2 = VOLUME::DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_3);
		bVar3 = true;
		if (bVar2)
		{
			bVar1 = VOLUME::IS_POINT_IN_VOLUME(Global_1888801[Global_1894899.f_2 /*35*/].f_3, Global_36);
		}
	}
	bVar4 = PED::IS_PED_INJURED(Global_35);
	bVar5 = func_72(0, 1, 1);
	if (bVar0 && !bVar4)
	{
		if (func_207(Global_1894899.f_2))
		{
			func_432(Global_1894899.f_2, Global_1894899.f_2, bVar5);
			if (Global_1894899.f_5 != Global_1894899.f_2)
			{
				func_432(Global_1894899.f_5, Global_1894899.f_2, bVar5);
			}
		}
		else
		{
			func_432(Global_1894899.f_5, Global_1894899.f_2, bVar5);
		}
	}
	Global_1894899.f_5++;
	if (Global_1894899.f_5 >= 130)
	{
		Global_1894899.f_5 = 0;
	}
	if (bVar3)
	{
		func_433(Global_1894899.f_2, bVar1, bVar2);
	}
	else
	{
		iVar6 = 0;
		iVar7 = (130 - 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar8 = func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			if (func_207(iVar8))
			{
				iVar6 = iVar8;
				iVar7 = iVar8;
			}
		}
		else if (func_434(8))
		{
			if (func_233(Global_1897952.f_41))
			{
				if ((Global_1897952.f_41 == 5 || Global_1897952.f_41 == 6) || Global_1897952.f_41 == 7)
				{
					iVar6 = func_435(7);
					iVar7 = func_436(6);
				}
				else
				{
					iVar6 = func_435(Global_1897952.f_41);
					iVar7 = func_436(Global_1897952.f_41);
				}
			}
		}
		if (Global_1894899.f_4 < iVar6 || Global_1894899.f_4 > iVar7)
		{
			bVar10 = func_437(&bVar9);
			if (!bVar10)
			{
				Global_1894899.f_4 = iVar6;
			}
		}
		func_433(Global_1894899.f_4, bVar1, VOLUME::DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_4 /*35*/].f_3));
		if (bVar9)
		{
			Global_1894899.f_4 = iVar6;
		}
		else if (!bVar10)
		{
			Global_1894899.f_4++;
		}
	}
	return 1;
}

void func_203()
{
	if (Global_1894899.f_9)
	{
		if (!func_438(Global_1934266.f_148))
		{
			func_439();
		}
	}
	switch (HUD::_0x7EC0D68233E391AC(6))
	{
		case 1:
			if (!func_438(Global_1934266.f_148))
			{
				func_439();
			}
			break;
		case 2:
			if (func_438(Global_1934266.f_148))
			{
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1934266.f_148, false);
			}
			break;
	}
}

void func_204()
{
	int iVar0;

	if (func_440(Global_36, Global_1894899.f_6))
	{
		iVar0 = func_441(Global_1894899.f_6);
		if (iVar0 != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
			{
				if (func_345(45) || !func_442(Global_1894899.f_6))
				{
					MAP::_MAP_DISCOVER_REGION(iVar0);
				}
			}
		}
		Global_1894899.f_3 = Global_1894899.f_6;
	}
	else if (Global_1894899.f_3 != -1 && !func_440(Global_36, Global_1894899.f_3))
	{
		Global_1894899.f_3 = -1;
	}
	Global_1894899.f_6++;
	if (Global_1894899.f_6 >= 51)
	{
		Global_1894899.f_6 = 0;
	}
}

bool func_205()
{
	return false;
}

bool func_206()
{
	if (func_70(43) && !func_70(44))
	{
		return false;
	}
	if (func_70(67) && func_357() != 8)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_208(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_209(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return func_210(iParam0, 8);
}

bool func_210(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

float func_211(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

Vector3 func_212(float fParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0 = { func_443(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10.0f) /*3*/ };
	return vVar0;
}

bool func_213(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_214(Vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 /*3*/ };
}

void func_215(Vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720.f_1 = { vParam0 /*3*/ };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_216()
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;

	Global_1310720.f_8 = 0;
	Global_1935630.f_4 = 1;
	sVar10 = { sVar0 /*10*/ };
	strcpy_s(&(sVar10.f_10), 32, "respawn_persistence");
	sVar10.f_14 = (1 << 10);
	sVar10.f_15 = 0;
	func_223(sVar10, 0);
}

void func_217(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_219(int iParam0)
{
	int iVar0;

	if (!func_207(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (Global_1395601.f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_220(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_221(int iParam0, int iParam1)
{
	if (!func_220(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] |= iParam1;
}

bool func_222(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_223(struct<16> /*128*/ sParam0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(sParam0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!func_444(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(sParam0.f_10))) > 0 || func_222(&(sParam0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { sParam0 /*16*/ };
			Global_1934603.f_161++;
			func_445(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_224(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

int func_225()
{
	return Global_1894899.f_2;
}

int func_226(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_446(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2--;
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_227(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	bVar0 = false;
	if (Global_1934603[iParam0 /*16*/].f_15 == 1)
	{
		bVar0 = func_447(&(Global_1934603[iParam0 /*16*/].f_10), Global_1934603[iParam0 /*16*/], Global_1934603[iParam0 /*16*/].f_14);
	}
	else
	{
		bVar0 = func_448(&(Global_1934603[iParam0 /*16*/].f_10), Global_1934603[iParam0 /*16*/].f_14);
	}
	if (bVar0)
	{
		func_449(iParam0);
	}
}

void func_228(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_104(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_451(iParam0, 1);
	}
	else
	{
		func_452(iParam0, 1);
	}
	func_453(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_234(iVar0) == iParam0)
		{
			func_235(iVar0, 0);
		}
		iVar0++;
	}
}

int func_229(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_285(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_285(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
		case 61:
			return joaat("LAW_REGION_MANICATO");
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 38:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_345(45))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
		case 65:
			return joaat("LAW_REGION_CORNWALL");
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 32:
			return joaat("LAW_REGION_SISIKA");
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 56:
			return joaat("LAW_REGION_WAPITI");
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 127:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_345(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_172(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_172(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_345(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_98())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_345(45))
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			else
			{
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_454(iParam0);
		if (iVar0 != -1)
		{
			return func_394(iVar0, bParam1);
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_231(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_207(iParam0))
	{
		return;
	}
	bVar0 = func_210(iParam0, (1 << 26));
	if (bParam1)
	{
		if (((!bVar0 && func_208(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_455(iParam0, func_177());
			func_322(iParam0, (1 << 26));
		}
	}
	else if (bVar0)
	{
		func_280(iParam0, (1 << 26));
		func_455(iParam0, -15);
	}
	func_456(iParam0);
}

void func_232(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return;
	}
	if (func_457(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		iVar0 = Global_1888801[iParam0 /*35*/].f_5;
	}
	else
	{
		iVar0 = func_458(iParam0);
	}
	bVar1 = func_210(iParam0, (1 << 25));
	if (bParam1)
	{
		iVar2 = func_459(iParam0);
		if (iParam2 > iVar2 || !func_461(func_460(iParam0)))
		{
			func_462(iParam0, func_177());
			func_463(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_322(iParam0, (1 << 25));
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_280(iParam0, (1 << 25));
		func_462(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_464(iParam0);
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_235(int iParam0, bool bParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_465(iParam0, 1);
	}
	else
	{
		if (func_381(iParam0))
		{
			return;
		}
		func_466(iParam0, 1);
	}
	func_467(iParam0, bParam1);
}

bool func_236(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return true;
	}
	return false;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1395712024;
		case 1:
			return -1611076340;
		case 2:
			return 2108368013;
		case 6:
			return -1162254606;
		case 3:
			return -412827149;
		default:
			break;
	}
	return func_468();
}

bool func_238(int iParam0)
{
	return iParam0 != 0;
}

bool func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}
	return true;
}

int func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_468();
				case 1:
					return -1232260252;
				case 2:
					return 1404611977;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
				case 1:
					return joaat("HSO_P_CAMP_02");
				case 2:
					return -1177590512;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
				case 1:
					return joaat("DEWCLM_P_CAMP_02");
				case 2:
					return -1458944281;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return func_468();
				case 1:
					return -1869016398;
				case 2:
					if (func_469((1 << 28)))
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(806681228))
						{
							STREAMING::REMOVE_IPL_HASH(806681228);
						}
						return 1311984381;
					}
					else
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(1311984381))
						{
							STREAMING::REMOVE_IPL_HASH(1311984381);
						}
						return 806681228;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_468();
				case 1:
					return joaat("SHB_P_CAMP_02");
				case 2:
					return 557551306;
				default:
					break;
			}
			break;
	}
	return func_468();
}

void func_241(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("CLE_UPG_CAMPFIRE_RUG_COW"):
			iVar0 = joaat("CLE_UPG_CAMPFIRE_RUG_COW");
			break;
		case joaat("SHB_P_CAMP_02"):
			iVar0 = joaat("SHB_P_CAMP_02");
			break;
		case joaat("DEWCLM_P_CAMP_02"):
			iVar0 = joaat("DEWCLM_P_CAMP_02");
			break;
		case joaat("HSO_P_CAMP_02"):
			iVar0 = joaat("VEGMODS_HSO_PEARSON_WAGON");
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iVar0) == 0)
			{
				GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(iVar0);
			}
		}
		else if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iVar0))
		{
			GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iVar0);
		}
	}
}

int func_242(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return func_470(iParam1, bParam2);
		case 2:
			return func_471(iParam1, bParam2);
		case 6:
			return func_472(iParam1, bParam2);
	}
	return func_468();
}

void func_243(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		func_473(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		func_474(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		func_475(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		func_476(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549.f_575++;
		if (Global_1357549.f_575 >= 18)
		{
			Global_1357549.f_575 = 0;
		}
	}
}

void func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;

	iVar0 = func_477(16);
	fVar1 = func_478();
	if (!bParam4 || iParam0 == 1)
	{
		func_479(iParam0, iParam1, bParam2);
		func_480(iParam0, fVar1, bParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		func_481(iParam0, iParam1, bParam2, bParam3);
		func_482(iParam0, fVar1, bParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		func_483(iParam0, iParam1, bParam2);
		func_484(iParam0, fVar1, bParam2);
	}
	func_485(iParam0, Global_40.f_4283.f_314);
	func_486(iParam0, iVar0);
}

struct<8> /*64*/ func_245(int iParam0, int iParam1)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, func_487(iParam0));
	strcat_s(&cVar0, 64, "_nav_camp_");
	strcat_s(&cVar0, 64, func_488(iParam1));
	return cVar0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_247(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (func_236(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				func_489(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_248(int iParam0)
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

int func_249(int iParam0)
{
	return (iParam0 & 31);
}

int func_250(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_251()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_490(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_251())
	{
		return -1;
	}
	iVar0 = func_252(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_491(iVar1, 0);
	func_492(iVar1, 0);
	func_493(iVar1, 0);
	func_494(iVar1, 0);
	func_495(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_496(iVar1, iParam4);
	}
	return iVar1;
}

int func_254(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;

	if (!func_46(iParam0))
	{
		return 0;
	}
	cVar0 = func_51(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_255(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

bool func_256(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_257(int iParam0, int iParam1, int iParam2)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

int func_258(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_259(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_260(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_261(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_262(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_263(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_497(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

bool func_264(int iParam0, var uParam1)
{
	if (!func_178(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case 465794448:
			return "shopInventories/shelfType(id=%x)";
		case -815325344:
			return "shopInventories/shopSellableItems(shopType=%x)";
		case -764679122:
			return "invItem";
		case -1893576372:
			return "invItem(%i)";
		case 549615901:
			return "invItem(itemID=%x)";
		case 656138654:
			return "requirement";
		case -1661050588:
			return "requirement(%i)";
		case 53142323:
			return "invItem(itemID=%x)/variations";
		case -1970263451:
			return "item(%i)";
		case -101978662:
			return "variations(%i)";
		case 1986163665:
			return ":type";
		case 1976824961:
			return ":reqName";
		case -199231160:
			return ":state";
		case -908395502:
			return ":itemID";
		case 421691991:
			return ":itemCnt";
		case -1400723349:
			return ":itemStackSize";
		case -562246383:
			return "item(%i):itemID";
		default:
			break;
	}
	return "";
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case 1170159957:
			return "itemset";
		case -956415585:
			return "itemset/item(%i)";
		case 1063445323:
			return "itemset/item(id=%x)";
		case -1574188157:
			return "components";
		case -1752779714:
			return "component(%i)";
		case 1004470061:
			return "components/component(%i)";
		case -1218801571:
			return "texture(%i)";
		case -1864618971:
			return "category_sets";
		case 122953168:
			return "categories(%i)";
		case -225486300:
			return "type(%i)";
		case 902278251:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x)";
		case 72319938:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i)";
		case -950930560:
			return "METAPED_CLOTHING_LOGIC/HIDE_ACTIONS/HIDE_ACTION(id=%x)";
		case -1384491765:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x)";
		case -1995898785:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(id=%x)";
		case 1814477267:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(%i)";
		case 435382182:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_ITEMS(id=%x)";
		case 293643052:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_COMPONENT_ITEMS(id=%x)";
		case 371382169:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_TEMPLATE(id=%x)";
		case -1062209954:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)";
		case 757000479:
			return "CLOTHING_TAGS/CLOTHING_TAG(tag=%x)";
		case 580624393:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i)";
		case -616834454:
			return "CLOTHING_TAG(%i)";
		case 2124169410:
			return "ITEM(%i)";
		case -1167877887:
			return "ITEM(id=%x)";
		case -850610138:
			return "MOD_LIST";
		case 670821262:
			return "MOD_LIST/ITEM(mod=%x)";
		case -1330667583:
			return "PREREQ(%i)";
		case -684355284:
			return "VARIATION(%i)";
		case -1418665930:
			return "GLOBAL_REQUIREMENTS";
		case -1507835846:
			return "PREREQ(id=%x)";
		case -901251340:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_LISTS/ITEM_LIST(id=%x)";
		case 1786184768:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(id=%x)";
		case 181728933:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(%i)";
		case -929624153:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/OUTFIT_TINTS(id=%x)/TINT_SET(id=%x)";
		case -575241652:
			return "TINT_SET(id=%x)";
		case -1636119814:
			return "GENDER(id=%x)";
		case -1990973241:
			return "TINT(%i)";
		case 570854305:
			return "OUTFIT(%i)";
		case -441020063:
			return "METAPED_CLOTHING_LOGIC/MOD_ACTIONS/MOD_ACTION(id=%x)";
		case -621257950:
			return "ITEM_TYPE(%i)";
		case -180564037:
			return "MOD_ITEM(%i)";
		case 791623761:
			return "MOD_ITEM(conflicting_mod=%x)";
		case 1921232557:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)";
		case -785467695:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(%i)";
		case 1645903593:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)/ITEM(%i)";
		case -780950631:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT_GROUP(id=%x)";
		case -1516336530:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x)";
		case 1397673214:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ASSET(id=%x)";
		case -1894594100:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_COMPONENT_OUTFIT(id=%x)";
		case -1509637852:
			return "MOD_ACTION(%i)";
		case -1873083679:
			return "MOD_ACTION(id=%x)";
		case 18833337:
			return "ASSET_TINTS/ITEM(%i)";
		case 683611174:
			return "ASSET_TINTS/ITEM(tag=%x)";
		case 1495456772:
			return "ITEM(type=%x)";
		case -662697758:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(switch_to_mod=%x)";
		case 532664358:
			return "METAPED_CLOTHING_LOGIC/PRIORITY_LISTS/PRIORITY_LIST(id=%x)";
		case 206913325:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM_GROUP(id=%x)";
		case -575695046:
			return "METAPED_CLOTHING_LOGIC/TAG_INFO/ITEM(id=%x)";
		case -902846119:
			return "METAPED_CLOTHING_LOGIC/TYPE_INFO/ITEM(id=%x)";
		case 1069236071:
			return "METAPED_CLOTHING_LOGIC/PED_EXPRESSION_INFO";
		case 294713880:
			return "METAPED_CLOTHING_LOGIC/META_COMPONENT_INFO";
		case 1895156137:
			return "INFO_FLAGS/ITEM(%i)";
		case -1580989022:
			return "CLOTHING_ITEM(id=%x)/CLOTHING_TAGS/CLOTHING_TAG/ITEM(id=%x):length";
		case -1119978610:
			return "META_TAG(%i)";
		case -641661298:
			return ":id";
		case -1179965762:
			return ":category";
		case -2059916790:
			return ":type";
		case 75574092:
			return ":label";
		case -1574347650:
			return ":name";
		case 503961584:
			return ":description";
		case -1761676834:
			return ":base";
		case -612355112:
			return ":tag";
		case 1650660506:
			return ":is_list";
		case 1422969767:
			return ":element";
		case -50676598:
			return ":conflicting_mod";
		case -274378420:
			return ":switch_to_mod";
		case -922450292:
			return ":debug_name";
		case -20900817:
			return ":weather_rating";
		case 1533929150:
			return ":modifiable";
		case 607361843:
			return ":palette_hash";
		case -914904147:
			return ":tint0";
		case -2114544496:
			return ":tint1";
		case -1925926132:
			return ":tint2";
		case 478480241:
			return ":action";
		case 1147691011:
			return ":mod";
		case -2108295561:
			return ":gender_type";
		case -2143122356:
			return ":group_id";
		case 595361980:
			return ":item_id";
		case -1872363127:
			return ":requirement";
		case -346222474:
			return ":player_type";
		case 1702953056:
			return ":male";
		case 1724971146:
			return ":female";
		case -2091945982:
			return ":model_male";
		case -1930670456:
			return ":model_female";
		case 139135334:
			return ":chin_length";
		case -377475286:
			return ":chops_length";
		case -1032429045:
			return ":stache_length";
		case -1310250464:
			return ":pdata_file";
		case 1140322086:
			return ":template";
		case 1257828006:
			return ":layer_type";
		case -1837131440:
			return ":drawable";
		case 416492924:
			return ":albedo";
		case -1391664603:
			return ":normal";
		case -589329400:
			return ":material";
		case 1983683828:
			return ":tex_alpha";
		case -1610948558:
			return ":blend_type";
		case -1316510272:
			return ":roughness";
		case 389725116:
			return ":sheet_grid_index";
		case -1840536550:
			return ":mod_texture";
		case -1991054358:
			return ":mod_channel";
		case -1933358492:
			return ":mod_alpha";
		case -1675772613:
			return ":base_layer";
		case -465134547:
			return ":partial";
		case 798674206:
			return ":none_item";
		case -850484704:
			return ":slot_id";
		case -616287568:
			return "ITEM(length=%x):id";
		case -649824246:
			return "ITEM(%i):override";
		case 1273576207:
			return "ITEM(%i):mod";
		case 668292726:
			return "ITEM(%i):tag";
		case 476944399:
			return "ITEM(%i):id";
		case 1246928384:
			return "ITEM(%i):element";
		case -2102005109:
			return "ITEM(%i):hide_mod";
		case 1893749034:
			return "ITEM(%i):type";
		case -1750442909:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):base";
		case -2122922976:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):tag";
		case 1047718714:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i):id";
		case 71109396:
			return "itemset/item(id=%x):requirement";
		case -1918885948:
			return "itemset/item(id=%x):type";
		case 834216597:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):requirement";
		case 436847552:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):group_id";
		case 635931682:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):template";
		case 1465270576:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):requirement";
		case 523185636:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i):type";
		case 288969396:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):player_type";
		case -138791404:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x):player_type";
		case 1959938229:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x):player_type";
		case 353841523:
			return "INFO_FLAGS/ITEM(%i):id";
		case 730116258:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(conflicting_mod=%x):switch_to_mod";
		case -1991559626:
			return "META_TAG(%i):id";
		default:
			break;
	}
	return "invalid NET_CLOTHING_XML_REGISTERED_QUERIES";
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case -1023752283:
			return "shopProvisions/provision(inventoryItem=%x)";
		case -1076906043:
			return ":inventoryItem";
		case -153135980:
			return ":districtBAY";
		case 12851681:
			return ":districtBGV";
		case 1386325051:
			return ":districtBLU";
		case 43722464:
			return ":districtCML";
		case -581476215:
			return ":districtGRT";
		case -1906982261:
			return ":districtGRZ";
		case -1035806543:
			return ":districtHRT";
		case 1579284209:
			return ":districtROA";
		case -1172613177:
			return ":districtSCM";
		case 495869290:
			return ":districtTAL";
		case -1382561665:
			return ":districtHEN";
		case 684071069:
			return ":districtCHO";
		case 1357371535:
			return ":districtRIO";
		case -1221865546:
			return ":districtGAP";
		default:
			break;
	}
	return "";
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1781729525:
			return "honorItems";
		case -2103982008:
			return "item";
		case -57097983:
			return "item(%i)";
		case 2027336698:
			return ":inventoryItem";
		case 316053773:
			return ":unlockThreshold";
		default:
			break;
	}
	return "";
}

void func_269(int iParam0, int iParam1)
{
	func_333(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_270(bool bParam0)
{
	func_498(bParam0);
	func_499(bParam0);
	func_500(bParam0);
	func_501(bParam0);
	func_502(bParam0);
	func_503(bParam0);
	func_504(bParam0);
	func_505(bParam0);
}

void func_271(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/] = -1;
	Global_1888801[iParam0 /*35*/].f_1 = 0;
	Global_1888801[iParam0 /*35*/].f_2 = 0;
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		DECORATOR::DECOR_REMOVE_ALL(Global_1888801[iParam0 /*35*/].f_3);
		VOLUME::DELETE_VOLUME(Global_1888801[iParam0 /*35*/].f_3);
	}
	Global_1888801[iParam0 /*35*/].f_3 = 0;
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_4))
	{
		DECORATOR::DECOR_REMOVE_ALL(Global_1888801[iParam0 /*35*/].f_4);
		VOLUME::DELETE_VOLUME(Global_1888801[iParam0 /*35*/].f_4);
	}
	Global_1888801[iParam0 /*35*/].f_4 = 0;
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		DECORATOR::DECOR_REMOVE_ALL(Global_1888801[iParam0 /*35*/].f_5);
		VOLUME::DELETE_VOLUME(Global_1888801[iParam0 /*35*/].f_5);
	}
	Global_1888801[iParam0 /*35*/].f_5 = 0;
	Global_1888801[iParam0 /*35*/].f_9 = 0;
	Global_1888801[iParam0 /*35*/].f_10 = 1.0f;
	Global_1888801[iParam0 /*35*/].f_11 = -1.0f;
	Global_1888801[iParam0 /*35*/].f_13 = -1;
	Global_1888801[iParam0 /*35*/].f_14 = 0;
	Global_1888801[iParam0 /*35*/].f_15 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1888801[iParam0 /*35*/].f_20 = 0;
	strcpy_s(&(Global_1888801[iParam0 /*35*/].f_22), 8, "");
	strcpy_s(&(Global_1888801[iParam0 /*35*/].f_23), 24, "");
	strcpy_s(&(Global_1888801[iParam0 /*35*/].f_26), 32, "");
	Global_1888801[iParam0 /*35*/].f_31 = 0;
	Global_1888801[iParam0 /*35*/].f_31.f_1 = 0;
	Global_1888801[iParam0 /*35*/].f_31.f_2 = 0;
	Global_1888801[iParam0 /*35*/].f_31.f_3 = 0;
}

void func_272()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, joaat("RQID_REGION_VOLUMES"), "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -734680005, "Item(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -177723663, "Item(%i)/position:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -968243019, "Item(%i)/position:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -646025442, "Item(%i)/position:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_172, 1958238202, "Item(%i)/type:text");
}

void func_273()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, joaat("RQID_REGION_VOLUMES"), "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -734680005, "Item(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -177723663, "Item(%i)/position:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -968243019, "Item(%i)/position:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -646025442, "Item(%i)/position:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_173, 1958238202, "Item(%i)/type:text");
}

void func_274()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, joaat("RQID_REGION_VOLUMES"), "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -734680005, "Item(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -177723663, "Item(%i)/position:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -968243019, "Item(%i)/position:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -646025442, "Item(%i)/position:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_174, 1958238202, "Item(%i)/type:text");
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case joaat("REGION_FIRST"):
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 30;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 31;
		case joaat("REGION_BLU_SISIKA"):
			return 32;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 33;
		case joaat("REGION_CML_DINO_LADY"):
			return 34;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 35;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 36;
		case joaat("REGION_GRT_BEECHERS"):
			return 37;
		case joaat("REGION_GRT_BLACKWATER"):
			return 38;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 39;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 40;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 41;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 50;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 51;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 42;
		case joaat("REGION_GRZ_COHUTTA"):
			return 52;
		case joaat("REGION_GRZ_COLTER"):
			return 43;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 44;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 53;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 45;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 46;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 47;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 48;
		case joaat("REGION_GRZ_THELOFT"):
			return 54;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 55;
		case joaat("REGION_GRZ_WAPITI"):
			return 56;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 49;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 57;
		case joaat("REGION_GUA_CAMP"):
			return 58;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 59;
		case joaat("REGION_GUA_LACAPILLA"):
			return 60;
		case joaat("REGION_GUA_MANICATO"):
			return 61;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 62;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 64;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 65;
		case joaat("REGION_HRT_CROP_FARM"):
			return 66;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 67;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 68;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 69;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 70;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 71;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 72;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 73;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 74;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 75;
		case joaat("REGION_HRT_VALENTINE"):
			return 76;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 77;
		case joaat("REGION_ROA_ANNESBURG"):
			return 78;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 63;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 79;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 80;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 81;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 82;
		case joaat("REGION_ROA_DOVERHILL"):
			return 83;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 84;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 85;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 86;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 87;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 88;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 89;
		case joaat("REGION_ROA_TRAPPER"):
			return 90;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 91;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 92;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 93;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 94;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 95;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 96;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 97;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 98;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 101;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 102;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 103;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 99;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 100;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 104;
		case joaat("REGION_SCM_RHODES"):
			return 105;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 106;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 107;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 108;
		case joaat("REGION_TAL_COCHINAY"):
			return 109;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 110;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 111;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 112;
		case joaat("REGION_TAL_TRAPPER"):
			return 113;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 126;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 127;
		case joaat("REGION_CHO_ARMADILLO"):
			return 120;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 121;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 122;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 124;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 123;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 125;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 114;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 115;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 116;
		case joaat("REGION_GAP_SOLOMONS_FOLLY"):
			return 129;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 117;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 118;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 119;
		case joaat("REGION_CENTRALUNIONRR"):
			return 128;
		default:
			break;
	}
	return -1;
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

void func_277()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, joaat("RQID_REGION_DATA"), "Regions");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 1489686829, "Region(%i)/name:text");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 596301644, "Region(%i)/fPedRangeMult:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 325957282, "Region(%i)/fScenarioRangeMult:value");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1894899.f_175, 426139466, "Region(%i)/iScenarioPedDesinty:text");
}

bool func_278(var uParam0, int iParam1, char* sParam2)
{
	struct<4> /*32*/ sVar0;
	int iVar5;

	sVar0.f_0 = *uParam0;
	sVar0.f_2 = joaat("RQID_REGION");
	sVar0.f_3 = func_506(iParam1);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = joaat("RQID_REGION_SCRIPT");
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, &sVar0);
		sVar0.f_2 = joaat("RQID_REGION_PREFIX");
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(sParam2->f_8), &sVar0);
		sVar0.f_2 = joaat("RQID_REGION_TYPE");
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0);
		sParam2->f_16 = func_507(iVar5);
		sVar0.f_2 = joaat("RQID_REGION_RICH_PRESENCE");
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(sParam2->f_17), &sVar0);
		sParam2->f_18 = 0;
		sVar0.f_2 = joaat("RQID_REGION_LOCK_SESSIONING");
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &sVar0))
		{
			if (iVar5 == 1)
			{
				sParam2->f_18 |= 8;
			}
		}
		sVar0.f_2 = joaat("RQID_REGION_GUAMA");
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &sVar0))
		{
			if (iVar5 == 1)
			{
				sParam2->f_18 |= 1;
			}
		}
		sVar0.f_2 = joaat("RQID_REGION_MP_GHOST_TOWN");
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &sVar0))
		{
			if (iVar5 == 1)
			{
				sParam2->f_18 |= 4;
			}
		}
		sVar0.f_2 = joaat("RQID_REGION_NO_GPS");
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &sVar0))
		{
			if (iVar5 == 1)
			{
				sParam2->f_18 |= 64;
			}
		}
		sVar0.f_2 = joaat("RQID_REGION_HIDE_NAME");
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &sVar0))
		{
			if (iVar5 == 1)
			{
				sParam2->f_18 |= 16;
			}
		}
		sVar0.f_2 = joaat("RQID_REGION_MP_TYPE_OVERRIDE");
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &sVar0))
		{
			if (iVar5 == 1)
			{
				sParam2->f_18 |= 32;
				sVar0.f_2 = joaat("RQID_REGION_MP_TYPE");
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0);
				sParam2->f_19 = func_507(iVar5);
			}
			else
			{
				sParam2->f_19 = 0;
			}
		}
		else
		{
			sParam2->f_19 = 0;
		}
	}
	else
	{
		return false;
	}
	return true;
}

Vector3 func_279(int iParam0)
{
	if (!func_207(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	switch (iParam0)
	{
		case 9:
			return { 1904.414f, -1861.146f, 46.3769f };
		case 11:
			return { -1409.312f, -216.6785f, 104.2144f };
		case 109:
			return { -2419.6f, -997.0f, 166.8f };
		case 79:
			return { 2342.779f, 1359.049f, 106.3936f };
		case 43:
			return { -1356.339f, 2443.121f, 308.1876f };
		case 98:
			return { 654.1462f, -1245.725f, 43.7026f };
		case 71:
			return { -125.85f, -39.599f, 96.0908f };
		case 4:
			return { 2222.172f, -772.852f, 42.662f };
		case 22:
			return { -2593.808f, 457.4836f, 146.9974f };
		case 37:
			return { -1640.158f, -1361.486f, 84.5064f };
		case 125:
			return { -3962.021f, -2137.957f, -5.9562f };
		case 127:
			return { -1406.7f, -2308.9f, 42.5f };
		case 58:
			return { 1422.625f, -7332.473f, 80.5977f };
		default:
			break;
	}
	return func_508(iParam0, 0);
}

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= (Global_23118[iParam0 /*11*/] & iParam1);
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= (Global_1058888.f_40545[iParam0 /*11*/] & iParam1);
}

void func_281(int iParam0, var uParam1)
{
	if (!func_207(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_21 = (Global_1888801[iParam0 /*35*/].f_21 || uParam1);
}

bool func_282(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 & iParam1) != 0;
}

int func_283(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_284(var uParam0, int iParam1, bool bParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_0 = *uParam0;
	sVar0.f_2 = 1252559615;
	sVar0.f_3 = func_506(iParam1);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = 1711029673;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam2, &sVar0);
		sVar0.f_2 = 1758612600;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(bParam2->f_1), &sVar0);
		sVar0.f_2 = 115903213;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(bParam2->f_2), &sVar0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_285(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return func_210(iParam0, (1 << 25));
}

bool func_286(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

bool func_287(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_509(iParam0));
}

void func_288()
{
	Global_1894052[0 /*3*/] = 0;
	Global_1894052[0 /*3*/].f_1 = -1500.0f;
	Global_1894052[0 /*3*/].f_2 = 1500.0f;
	Global_1894052[1 /*3*/] = 2;
	Global_1894052[1 /*3*/].f_1 = 1500.0f;
	Global_1894052[1 /*3*/].f_2 = 1500.0f;
	Global_1894052[2 /*3*/] = 8;
	Global_1894052[2 /*3*/].f_1 = -1500.0f;
	Global_1894052[2 /*3*/].f_2 = -1500.0f;
	Global_1894052[3 /*3*/] = 10;
	Global_1894052[3 /*3*/].f_1 = 1500.0f;
	Global_1894052[3 /*3*/].f_2 = -1500.0f;
}

void func_289(struct<2> /*16*/ sParam0, float fParam2, struct<2> /*16*/ sParam3, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam9 + 1;
	iVar1 = (iParam9 + iParam10);
	iVar2 = iVar1 + 1;
	if (sParam0.f_0 > fParam6)
	{
		(*iParam8)[iParam9] = 0;
		(*iParam8)[iVar1] = 0;
	}
	if (sParam3.f_0 < fParam6)
	{
		(*iParam8)[iVar0] = 0;
		(*iParam8)[iVar2] = 0;
	}
	if (sParam0.f_1 > fParam7)
	{
		(*iParam8)[iVar1] = 0;
		(*iParam8)[iVar2] = 0;
	}
	if (sParam3.f_1 < fParam7)
	{
		(*iParam8)[iParam9] = 0;
		(*iParam8)[iVar0] = 0;
	}
	if ((((*iParam8)[iParam9] == 0 && (*iParam8)[iVar1] == 0) && (*iParam8)[iVar0] == 0) && (*iParam8)[iVar2] == 0)
	{
	}
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1 + 1;
	iVar1 = (iParam1 + iParam2);
	iVar2 = iVar1 + 1;
	(*iParam0)[iParam1] = 0;
	(*iParam0)[iVar0] = 0;
	(*iParam0)[iVar1] = 0;
	(*iParam0)[iVar2] = 0;
}

void func_291(int iParam0, bool bParam1)
{
	if (Global_1934765.f_69.f_201 >= 100)
	{
		return;
	}
	Global_1934765.f_69[Global_1934765.f_69.f_201 /*2*/] = iParam0;
	Global_1934765.f_69[Global_1934765.f_69.f_201 /*2*/].f_1 = bParam1;
	Global_1934765.f_69.f_201++;
	if (bParam1)
	{
	}
}

void func_292(int iParam0)
{
	func_510(iParam0, -1);
	func_511(iParam0, -15);
}

int func_293(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_512(iParam0);
}

void func_294()
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_58())
	{
		return;
	}
	func_513(&(Global_40.f_40));
}

void func_295()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1))
		{
			Global_40.f_11029[iVar0 /*5*/].f_1 = { VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1) /*3*/ };
			Global_40.f_11029[iVar0 /*5*/].f_4 = VEHICLE::_GET_TRAIN_DIRECTION_FROM_INDEX(Global_1425371[iVar0 /*373*/].f_1);
		}
		iVar0++;
	}
}

bool func_296()
{
	return !func_213(Global_1310720.f_1);
}

int func_297()
{
	return Global_40.f_4283.f_4;
}

void func_298(Vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_206())
	{
		fVar0 = func_514(vParam0, Global_40.f_6);
	}
	if (func_515((1 << 25)))
	{
		if (!func_182(Global_40.f_2, 0.0f, 0.0f, 0.0f, 1056964608 /* Float: 0.5f */, 1))
		{
			fVar1 = func_514(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150.0f && fVar0 > 150.0f)
	{
		*uParam3 = { Global_36 /*3*/ };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 /*3*/ };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 /*3*/ };
		*uParam4 = 3;
	}
}

float func_299(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_300()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> /*16*/ sVar6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_77(Global_1935630, (1 << 13)))
	{
		return;
	}
	if (func_39((1 << 15)))
	{
		return;
	}
	func_516(&Global_1935630, (1 << 13));
	fVar0 = 0.0f;
	fVar0 += (0.9259259f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP1"))));
	fVar0 += (0.2525252f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP2"))));
	fVar0 += (0.2923976f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP3"))));
	fVar0 += (0.462963f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP4"))));
	fVar0 += (0.9259259f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP5"))));
	fVar0 += (0.308642f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP6"))));
	fVar0 += (5.555555f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP7"))));
	fVar0 += (0.6944444f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP8"))));
	fVar0 += (0.3703704f * BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("MISSIONS_CHP9"))));
	fVar0 += (0.5f * func_518(10.0f, BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("RC_STRANDS")))));
	fVar0 += (0.6f * func_518(5.0f, BUILTIN::TO_FLOAT(func_517(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")))));
	fVar0 += (0.2f * func_518(25.0f, BUILTIN::TO_FLOAT(func_519(joaat("UNIQUE_BEATS_COMPLETED")))));
	fVar0 += (2.0f * func_518(1.0f, BUILTIN::TO_FLOAT(func_519(joaat("GANG_AMBUSH_ENCOUNTERED")))));
	fVar0 += (0.3333333f * func_518(6.0f, BUILTIN::TO_FLOAT(func_519(joaat("GANG_HIDEOUT_COMPLETED")))));
	fVar0 += (3.0f * func_518(1.0f, BUILTIN::TO_FLOAT(func_519(joaat("DISCOVERABLE_FOUND")))));
	iVar1 = func_520();
	fVar0 += (0.1111111f * func_518(9.0f, BUILTIN::TO_FLOAT(iVar1)));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES") /* GXTEntry: "Stars of the Stage" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES") /* GXTEntry: "Stars of the Stage" */)));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS") /* GXTEntry: "Americans" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS") /* GXTEntry: "Americans" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS") /* GXTEntry: "Fauna of America" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS") /* GXTEntry: "Fauna of America" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS") /* GXTEntry: "Artists" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS") /* GXTEntry: "Artists" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS") /* GXTEntry: "Gems Of Beauty" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS") /* GXTEntry: "Gems Of Beauty" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS") /* GXTEntry: "Famous Gunslingers" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS") /* GXTEntry: "Famous Gunslingers" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES") /* GXTEntry: "Horses" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES") /* GXTEntry: "Horses" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS") /* GXTEntry: "Amazing Inventions" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS") /* GXTEntry: "Amazing Inventions" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS") /* GXTEntry: "Vistas of America" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS") /* GXTEntry: "Vistas of America" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS") /* GXTEntry: "Flora of America" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS") /* GXTEntry: "Flora of America" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS") /* GXTEntry: "World Champions" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS") /* GXTEntry: "World Champions" */))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES") /* GXTEntry: "Marvels of Travel" */)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES") /* GXTEntry: "Marvels of Travel" */))));
	fVar0 += func_518(1.0f, fVar2);
	fVar0 += (0.05f * func_518(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_522())));
	if (func_523(40))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_523(42))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_523(48))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_523(50))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_523(52))
	{
		fVar0 += (1.0f * 1.0f);
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 += (1.0f * func_518(1.0f, fVar2));
	fVar0 += (0.2f * func_518(5.0f, BUILTIN::TO_FLOAT(func_519(joaat("SHACK_FOUND")))));
	fVar0 += (0.2f * func_518(5.0f, BUILTIN::TO_FLOAT(func_517(joaat("KILLS"), joaat("LEGENDARY_ANIMALS")))));
	fVar0 += (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50));
	fVar0 += (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("FISH") /* GXTEntry: "Fish" */), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS"));
	fVar0 += (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20));
	fVar0 += (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48));
	func_525(&iVar3, &iVar4);
	fVar0 += (2.0f * func_518((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1.0f));
	fVar0 += (2.0f * func_518(1.0f, BUILTIN::TO_FLOAT(func_526(joaat("HORSES_REACHED_MAX_BOND")))));
	fVar5 = BUILTIN::TO_FLOAT(func_527());
	fVar0 += ((3.0f * fVar5) / BUILTIN::TO_FLOAT(9));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("BLACKJACK")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("DOMINOES_HAND")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("FIVE_FINGER")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ATTEMPTS"), joaat("POKER_HAND")))));
	fVar0 += (0.2f * func_518(5.0f, BUILTIN::TO_FLOAT(func_519(joaat("SPECIAL_PED_INTERACTION")))));
	fVar0 += (0.5f * func_518(1.0f, BUILTIN::TO_FLOAT(func_519(joaat("BATHS_TAKEN")))));
	fVar0 += (0.5f * func_518(1.0f, BUILTIN::TO_FLOAT(func_519(joaat("SHOWS_SEEN")))));
	fVar0 += (0.5f * func_518(1.0f, BUILTIN::TO_FLOAT(func_519(joaat("THEATRE_VISITS")))));
	fVar0 += ((0.5f / 6.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")))));
	fVar0 += ((0.5f / 6.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")))));
	fVar0 += ((0.5f / 6.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")))));
	fVar0 += ((0.5f / 6.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")))));
	fVar0 += ((0.5f / 6.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")))));
	fVar0 += ((0.5f / 6.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ROB_COMPLETED"), joaat("COACH")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ROB_COMPLETED"), joaat("HOME")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ROB_COMPLETED"), joaat("SHOP")))));
	fVar0 += ((1.0f / 4.0f) * func_518(1.0f, BUILTIN::TO_FLOAT(func_517(joaat("ROB_COMPLETED"), joaat("TRAIN")))));
	sVar6 = { func_528(joaat("TOTAL_PROGRESS_MADE")) /*2*/ };
	fVar8 = func_529(sVar6);
	STATS::_0xE141F6B40B1E3683(&sVar6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_46(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!func_46(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_512(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_530(Global_1898330[iVar61]);
				}
				else
				{
					func_531(iVar61, 0);
					if (func_111(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_532(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_532(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_532(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_301()
{
	if (func_533(joaat("WS_SHADY_BELLE_HIDEOUT")))
	{
		if (func_534(809554858))
		{
			return true;
		}
		func_535(joaat("WS_SHADY_BELLE_HIDEOUT"));
	}
	if (func_533(joaat("WS_VALENTINE_BURIAL_DRUNK")))
	{
		if (func_534(-451832572))
		{
			return true;
		}
		func_535(joaat("WS_VALENTINE_BURIAL_DRUNK"));
	}
	if (func_533(joaat("WS_RHODES_GRAYS3_COVER_ON")))
	{
		if (func_534(1033721560) || func_536(func_458(105), Global_36))
		{
			return true;
		}
		func_535(joaat("WS_RHODES_GRAYS3_COVER_ON"));
	}
	if (func_533(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE")))
	{
		if (func_534(joaat("BEE_01_CAMP")))
		{
			return true;
		}
		func_535(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	}
	if (func_533(joaat("WS_SEAN_1_CAMP")))
	{
		if (func_537(398639187, 1120403456 /* Float: 100f */))
		{
			return true;
		}
		func_535(joaat("WS_SEAN_1_CAMP"));
	}
	return false;
}

void func_302(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

bool func_303()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_305()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!func_345(45))
	{
		if (Global_1934765.f_290)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERS_A"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERS_B"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERS_C"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_290 = 0;
		}
		if (Global_1934765.f_292)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_292 = 0;
		}
		if (!Global_1934765.f_291 && func_352(38))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BLACKWATER_REGULAR"), -811.0f, -1212.5f, 0.0f, 0);
			Global_1934765.f_291 = 1;
		}
		func_313(-37875204);
		func_313(258104717);
		func_313(-76700394);
		func_313(1614255891);
		func_313(1861460906);
		func_313(1044079550);
		func_328("nav_shack_BA");
		func_302(-1079295176);
		func_302(894787561);
		func_313(-1276109918);
		func_313(-1386423483);
		func_313(-1405375965);
		func_313(1277540472);
		func_313(-1331593143);
		func_313(1133172356);
		func_313(-559257162);
		func_328("nav_shack_BB");
		func_302(979670262);
		func_302(418666411);
		func_302(651621232);
		func_313(-574996782);
		func_313(1169511062);
		func_313(-1266106154);
		func_313(-1377975054);
		func_313(897624424);
		func_313(-2111718052);
		func_328("nav_shack_BC");
		func_302(-165202905);
		func_302(-1327148782);
		func_302(-1965378386);
		func_313(175578406);
		func_313(-686953321);
		func_313(-1737485501);
		func_313(-739754595);
		func_313(942470447);
		func_313(-1859413313);
		func_313(489834626);
		func_302(-1667265438);
		func_302(54029413);
		func_302(-1070234238);
		func_302(-931280709);
		func_302(-1170563128);
		func_302(1394163483);
		func_328("nav_std_train_station_es");
		func_313(-5339556);
		func_313(1258244391);
		func_313(1343343014);
		func_313(-2082201137);
		func_313(1641449717);
		func_313(739412171);
		func_313(-501793326);
		func_313(466168676);
		func_313(1479152994);
		func_328("nav_blackwater_endless_summer");
		func_302(1173561253);
		func_302(1470738186);
		func_302(-1632348233);
		func_313(903666582);
		func_302(1081087978);
		func_328("nav_val_es");
		func_328("nav_val_es_saloon_lockdown");
		func_328("nav_val_es_full_lockdown");
		func_313(joaat("ANN_05_HOUSE_ES"));
		func_302(joaat("ANN_05_HOUSE"));
		func_302(-693132475);
		func_328("nav_annesburg_es");
		func_313(158063004);
		func_328("nav_coots_graves");
		func_313(-1112373128);
		func_313(-891994084);
		func_313(-84516711);
		func_313(-657241692);
		func_302(1596089211);
		func_302(-2133417899);
		func_302(1274804496);
		func_302(1597665303);
		func_302(116162819);
		func_328("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		iVar0 = func_538(2087609309);
		if (!GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(iVar0))
		{
			GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(iVar0, true);
		}
		func_313(-1380983970);
		func_313(-1912028958);
		func_302(563944718);
		func_328("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("WAP_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAP_PREENDLESSSUMMER"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("VALENTINE_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("VALENTINE_PREENDLESSSUMMER"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_PREENDLESS_SUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_PREENDLESS_SUMMER"), true);
		}
		if (func_27() == -1)
		{
			if (func_539(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_319((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (func_539(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_319((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!func_72(0, 0, 1))
			{
				func_319(944, 32);
				func_319(940, 32);
			}
			func_540(joaat("META_OUTFIT_DEFAULT"));
			iVar4 = 0;
			while (iVar4 < 13)
			{
				func_542(iVar4, func_541(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765.f_290)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERS_A"), -1550.0f, 250.0f, 0.0f, 0);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERS_B"), 1440.0f, -1580.0f, 0.0f, 0);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERS_C"), 1770.0f, 480.0f, 0.0f, 0);
			Global_1934765.f_290 = 1;
		}
		if (!Global_1934765.f_292)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BLACKWATER_ENDSUM"), -811.0f, -1212.5f, 0.0f, 0);
			Global_1934765.f_292 = 1;
		}
		if (Global_1934765.f_291)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BLACKWATER_REGULAR"));
			Global_1934765.f_291 = 0;
		}
		func_302(-37875204);
		func_302(258104717);
		func_302(-76700394);
		func_302(1614255891);
		func_302(1861460906);
		func_302(1044079550);
		func_327("nav_shack_BA");
		func_313(-1079295176);
		func_313(894787561);
		func_302(-1276109918);
		func_302(-1386423483);
		func_302(-1405375965);
		func_302(1277540472);
		func_302(-1331593143);
		func_302(1133172356);
		func_302(-559257162);
		func_327("nav_shack_BB");
		func_313(979670262);
		func_313(418666411);
		func_313(651621232);
		func_302(-574996782);
		func_302(1169511062);
		func_302(-1266106154);
		func_302(-1377975054);
		func_302(-2111718052);
		func_302(897624424);
		func_327("nav_shack_BC");
		func_313(-165202905);
		func_313(-1327148782);
		func_313(-1965378386);
		func_313(-1667265438);
		func_313(54029413);
		func_313(-1070234238);
		func_313(-931280709);
		func_313(-1170563128);
		func_313(1394163483);
		func_302(175578406);
		func_302(489834626);
		func_302(-686953321);
		func_302(-1737485501);
		func_302(-739754595);
		func_302(942470447);
		func_302(-1859413313);
		func_327("nav_std_train_station_es");
		func_313(1173561253);
		func_313(1470738186);
		func_313(-1632348233);
		func_302(-5339556);
		func_302(1258244391);
		func_302(1343343014);
		func_302(-2082201137);
		func_302(1641449717);
		func_302(739412171);
		func_302(-501793326);
		func_302(466168676);
		func_302(1479152994);
		func_327("nav_blackwater_endless_summer");
		func_313(1081087978);
		func_302(903666582);
		if (func_310(joaat("WS_VALENTINE_LOCKDOWN_BANK")))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_full_lockdown");
		}
		else if (func_310(joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS")))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_saloon_lockdown");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		func_313(joaat("ANN_05_HOUSE"));
		func_313(-693132475);
		func_302(joaat("ANN_05_HOUSE_ES"));
		func_327("nav_annesburg_es");
		func_302(158063004);
		func_327("nav_coots_graves");
		func_313(1596089211);
		func_313(-2133417899);
		func_313(1274804496);
		func_313(1597665303);
		func_313(116162819);
		func_302(-1112373128);
		func_302(-891994084);
		func_302(-84516711);
		func_302(-657241692);
		func_327("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		iVar5 = func_538(2087609309);
		if (GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(iVar5))
		{
			GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(iVar5, false);
		}
		func_302(-1380983970);
		func_313(563944718);
		func_302(-1912028958);
		func_327("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("WAP_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAP_PREENDLESSSUMMER"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("VALENTINE_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("VALENTINE_PREENDLESSSUMMER"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_PREENDLESS_SUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_PREENDLESS_SUMMER"), false);
		}
		if (func_27() == -1)
		{
			if (func_539(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_320((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (func_539(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_320((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			func_320(944, 32);
			func_320(940, 32);
			func_540(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				func_542(iVar9, func_543(iVar9));
				iVar9++;
			}
		}
	}
}

void func_306()
{
	if (func_523(38))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", false);
	}
	if (func_544())
	{
		func_545(56);
	}
	else
	{
		func_546(56);
	}
	if (func_345(44))
	{
		func_545(105);
		func_545(95);
	}
	else
	{
		func_546(105);
		func_546(95);
	}
	if (func_285(105))
	{
		func_547(func_506(105));
	}
	else if (func_548(105))
	{
		func_549(105);
	}
	if (func_285(95))
	{
		func_547(func_506(95));
	}
	else if (func_548(95))
	{
		func_549(95);
	}
	func_313(481636996);
	func_304(212);
	func_304(211);
	func_304(213);
	func_304(214);
	func_304(215);
	func_304(216);
	func_304(217);
	func_304(218);
	func_304(219);
	func_304(220);
	func_304(221);
	func_304(222);
	func_304(223);
	func_304(224);
	func_304(225);
	func_302(1454866069);
	func_302(-383442850);
	func_302(531960211);
	func_302(joaat("DIS_SCM_CC_GRAFFITI"));
	func_302(-2041779893);
	func_302(1123990218);
	func_302(joaat("BEP_01_CC_GRAFFITI"));
	func_302(joaat("TWO_01_CC_GRAFFITI"));
	func_302(joaat("DIS_GAP_CC_GRAFFITI"));
	func_302(-1111286486);
	func_302(joaat("A_WATER_ICE_CC_GRAFFITI"));
	func_302(107317036);
	func_302(1193229750);
	func_302(1492183352);
	func_302(joaat("VAN_02_CC_GRAFFITI"));
	func_302(-1664053323);
	func_302(-1375030991);
	func_302(-313992757);
	func_304(205);
	func_304(206);
	func_304(207);
	func_304(208);
	func_304(209);
	func_304(210);
	func_302(-1176501741);
	if (!func_339(44))
	{
		func_304(26);
	}
	else
	{
		func_314(26);
	}
	func_269(1121239638, 1);
	func_269(-1677757270, 1);
	func_269(906662604, 1);
	func_269(-310410837, 1);
	func_314(185);
	func_304(184);
	func_302(642301973);
	func_313(1260721433);
	func_550();
	func_302(626046501);
}

void func_307()
{
	Global_1934765++;
}

void func_308()
{
	int iVar0;

	func_551();
	if (func_27() == 0)
	{
		func_302(-1253110600);
		func_302(-1402083909);
	}
	iVar0 = -1;
	if (func_310(joaat("WS_BEECHERS_SHACK")))
	{
		func_302(-1012618146);
		func_302(-722030448);
		func_327("nav_mesh_beech_shack");
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(-904669171);
		func_302(774601424);
		func_302(-584332967);
		func_302(-1615103170);
		func_302(1256771838);
		func_302(-1765152778);
		func_302(-2072231077);
		func_302(19217583);
	}
	else if (func_310(joaat("WS_BEECHERS_SHACK_WITH_FIRE")))
	{
		func_302(-1012618146);
		func_302(-722030448);
		func_302(1757739778);
		func_327("nav_mesh_beech_shack_with_fire");
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
	}
	else if (func_310(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
	{
		func_302(-1012618146);
		func_302(1757739778);
		func_327("nav_mesh_beech_shack_with_fire");
		func_302(joaat("BEE_01_CAMP"));
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_313(-722030448);
	}
	else if (func_310(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE")))
	{
		func_302(joaat("BEE_01_CAMP"));
		func_327("nav_mesh_beech_camp_with_rubble");
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(2111816145);
	}
	else if (func_310(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES")))
	{
		func_302(joaat("BEE_01_CAMP"));
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(578474998);
		func_327("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")))
	{
		func_302(joaat("BEE_01_CAMP"));
		func_302(-1667461262);
		func_302(-974480336);
		func_302(joaat("BEE_01_HOUSE_STAGE05"));
		func_302(1344772301);
		func_302(1467774743);
		func_302(joaat("BEE_01_WATERPUMP"));
		func_327("nav_mesh_beech_house_finished");
		func_302(-284612948);
		func_302(-1325016116);
		func_302(578474998);
		func_304(111);
		func_304(116);
		func_304(100);
		func_304(101);
	}
	else if (func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_302(-1667461262);
		func_302(joaat("BEE_01_HOUSE_STAGE05"));
		func_302(1344772301);
		func_302(1467774743);
		func_302(joaat("BEE_01_BARN_STAGE05"));
		func_302(578474998);
		func_302(joaat("BEE_01_WATERPUMP"));
		func_302(1353861354);
		func_302(1205945639);
		func_327("nav_mesh_beech_barn_finished");
		func_302(-284612948);
		func_302(431365499);
		func_302(276582710);
		func_302(1191890045);
		func_302(1864768904);
		func_302(-692583342);
		func_302(joaat("BEE_01_CAMP_FIRE"));
		func_304(116);
		func_304(100);
		func_304(102);
		func_304(103);
		if (func_70(75) && !func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(104);
		func_304(105);
		func_304(111);
		if (func_552(108))
		{
			func_314(107);
		}
		else
		{
			func_304(107);
		}
	}
	else if (func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_302(-1667461262);
		func_302(joaat("BEE_01_HOUSE_STAGE05"));
		func_302(1467774743);
		func_302(joaat("BEE_01_BARN_STAGE05"));
		func_302(1353861354);
		func_327("nav_mesh_beech_house_decor");
		func_302(578474998);
		func_302(1236917971);
		func_302(joaat("BEE_01_WATERPUMP"));
		func_302(-284612948);
		func_302(-2090209059);
		func_302(1977031606);
		func_302(1929454697);
		func_302(938290967);
		func_302(1532009326);
		func_302(1344772301);
		func_302(joaat("BEE_01_CAMP_FIRE"));
		func_302(-692583342);
		func_302(joaat("BEE_CRAFTINGFIRE01"));
		func_344(joaat("BEE_CRAFTINGFIRE01"));
		func_302(joaat("BEE_01_GAZEBO_STAGE05"));
		func_302(637627640);
		func_302(349494711);
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(110);
		func_304(106);
		if (!func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(111);
	}
	else if (func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")))
	{
		func_302(-1667461262);
		func_302(joaat("BEE_01_HOUSE_STAGE05"));
		func_302(1467774743);
		func_302(joaat("BEE_01_BARN_STAGE05"));
		func_302(1353861354);
		func_327("nav_mesh_beech_house_decor");
		func_302(578474998);
		func_302(1236917971);
		func_302(joaat("BEE_01_WATERPUMP"));
		func_302(-284612948);
		func_302(-2090209059);
		func_302(1977031606);
		func_302(1929454697);
		func_302(938290967);
		func_302(1532009326);
		func_302(1344772301);
		func_302(joaat("BEE_01_CAMP_FIRE"));
		func_302(-692583342);
		func_302(joaat("BEE_CRAFTINGFIRE01"));
		func_344(joaat("BEE_CRAFTINGFIRE01"));
		func_302(joaat("BEE_01_GAZEBO_STAGE05"));
		func_302(637627640);
		func_302(349494711);
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(110);
		if (func_552(108))
		{
			func_314(107);
		}
		else
		{
			func_304(107);
		}
		if (!func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(111);
	}
	else if (func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_302(-1667461262);
		func_302(joaat("BEE_01_HOUSE_STAGE05"));
		func_302(1467774743);
		func_302(joaat("BEE_01_BARN_STAGE05"));
		func_302(1353861354);
		func_327("nav_mesh_beech_house_completed");
		func_302(578474998);
		func_302(1236917971);
		func_302(joaat("BEE_01_WATERPUMP"));
		func_302(-284612948);
		func_302(349494711);
		func_302(1965249616);
		func_302(-2021605623);
		func_302(1649902358);
		func_302(1169279648);
		func_302(1532009326);
		func_302(1344772301);
		func_302(joaat("BEE_01_CAMP_FIRE"));
		func_302(-692583342);
		func_302(joaat("BEE_CRAFTINGFIRE01"));
		func_344(joaat("BEE_CRAFTINGFIRE01"));
		func_302(joaat("BEE_01_GAZEBO_STAGE05"));
		func_302(637627640);
		func_302(joaat("BEE_01_SILO_STAGE05"));
		if (!func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(112);
		func_304(113);
		func_304(111);
		func_304(113);
		if (func_552(115))
		{
			func_314(114);
		}
		else
		{
			func_304(114);
		}
	}
	if (Global_1934765.f_300 != iVar0)
	{
		if (Global_1934765.f_300 != -1)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERSHOPE"));
		}
		MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERSHOPE"), -1640.0f, -1370.0f, 0.0f, iVar0);
		Global_1934765.f_300 = iVar0;
	}
}

void func_309()
{
	Vector3 vVar0;
	Vector3 vVar10;

	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_BANK")))
	{
		func_313(-661560211);
		func_302(joaat("VAL_02_LOCKDOWN_BANK"));
		func_302(-784156210);
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_full_lockdown");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_full_lockdown");
		}
	}
	else
	{
		func_313(joaat("VAL_02_LOCKDOWN_BANK"));
		func_313(-784156210);
		func_302(-661560211);
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_328("nav_val_full_lockdown");
		}
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_DOCTOR")))
	{
		func_313(-1049500949);
		func_302(-981203673);
		func_302(-2009766528);
	}
	else
	{
		func_313(-981203673);
		func_313(-2009766528);
		func_302(-1049500949);
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_GENERAL_STORE")))
	{
		func_313(135886022);
		func_302(1228600352);
		func_302(406334892);
	}
	else
	{
		func_313(1228600352);
		func_313(406334892);
		func_302(135886022);
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_GUNSMITH")))
	{
		func_313(-1933617196);
		func_302(joaat("VAL_02_LOCKDOWN_GUN"));
		func_302(-1905652203);
	}
	else
	{
		func_313(joaat("VAL_02_LOCKDOWN_GUN"));
		func_313(-1905652203);
		func_302(-1933617196);
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_HOTEL")))
	{
		func_313(-1588793465);
		func_302(joaat("VAL_02_LOCKDOWN_HOTEL"));
		func_302(1519091923);
		func_333(1879307167, 1, 0, 0, 0, 0, 0, 0);
		func_333(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_313(joaat("VAL_02_LOCKDOWN_HOTEL"));
		func_313(1519091923);
		func_302(-1588793465);
		func_333(1879307167, 0, 0, 0, 1, 0, 0, 0);
		func_333(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_JAIL")))
	{
		func_313(joaat("VAL_03_DEFAULT_JAIL"));
		func_302(-1301569116);
		func_302(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
	}
	else
	{
		func_313(-1301569116);
		func_313(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
		func_302(joaat("VAL_03_DEFAULT_JAIL"));
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_LAW_OFFICE")))
	{
		func_313(924412185);
		func_302(joaat("VAL_02_LOCKDOWN_LAW"));
		func_302(-156313117);
	}
	else
	{
		func_313(joaat("VAL_02_LOCKDOWN_LAW"));
		func_313(-156313117);
		func_302(924412185);
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_RENT")))
	{
		func_313(-1781246069);
		func_302(282485265);
		func_302(-1744253204);
	}
	else
	{
		func_313(282485265);
		func_313(-1744253204);
		func_302(-1781246069);
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_RESTAURANT")))
	{
		func_313(joaat("VAL_03_DEFAULT_REST"));
		func_302(56708243);
	}
	else
	{
		func_313(56708243);
		func_302(joaat("VAL_03_DEFAULT_REST"));
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_SALOON")))
	{
		func_313(-1158072415);
		func_302(199047531);
		func_302(192173299);
		func_553(32, 1);
	}
	else
	{
		func_313(199047531);
		func_313(192173299);
		func_302(-1158072415);
		if ((!func_554(9, 0) && !func_555(5)) && !func_556(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			func_557(32, &vVar0, 1);
			func_558(&vVar0, 1, 1);
		}
	}
	if (func_310(joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS")))
	{
		func_302(-776975047);
		func_302(1385025009);
		if (!func_310(joaat("WS_VALENTINE_LOCKDOWN_BANK")))
		{
			if (func_345(45))
			{
				func_328("nav_val_saloon_lockdown");
				func_328("nav_val_full_lockdown");
				func_328("nav_val_es");
				func_328("nav_val_es_full_lockdown");
				func_327("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_328("nav_val_saloon_lockdown");
				func_328("nav_val_es_saloon_lockdown");
				func_328("nav_val_full_lockdown");
				func_328("nav_val_es_full_lockdown");
				func_328("nav_val_es");
				func_327("nav_val_saloon_lockdown");
			}
		}
		func_333(-908482159, 1, 0, 0, 0, 0, 0, 0);
		func_333(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		func_333(968874193, 1, 0, 0, 0, 0, 0, 0);
		func_333(1154795503, 1, 0, 0, 0, 0, 0, 0);
		func_333(583884620, 1, 0, 0, 0, 0, 0, 0);
		func_333(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		func_313(-776975047);
		func_313(1385025009);
		func_333(-908482159, 0, 0, 0, 1, 0, 0, 0);
		func_333(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		func_333(968874193, 0, 0, 0, 1, 0, 0, 0);
		func_333(1154795503, 0, 0, 0, 1, 0, 0, 0);
		func_333(583884620, 0, 0, 0, 1, 0, 0, 0);
		func_333(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_328("nav_val_full_lockdown");
		}
	}
	if (func_27() == -1)
	{
		if (func_310(joaat("WS_VAN_HORN_LOCKDOWN_SALOON")))
		{
			func_320(450, 32);
			func_320(451, 32);
			func_320(452, 32);
			func_320(453, 32);
			func_320(466, 32);
			func_320(467, 32);
			func_320(471, 32);
			func_320(464, 32);
		}
		else
		{
			func_319(450, 32);
			func_319(451, 32);
			func_319(452, 32);
			func_319(453, 32);
			func_319(466, 32);
			func_319(467, 32);
			func_319(471, 32);
			func_319(464, 32);
		}
		if (func_310(joaat("WS_VAN_HORN_LOCKDOWN_SALOON_DOORS")))
		{
			func_333(joaat("DOOR_VAN_SALOON_INT_1"), 1, 0, 0, 0, 0, 0, 0);
			func_333(244699522, 1, 0, 0, 0, 0, 0, 0);
			func_333(-590254598, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(joaat("DOOR_VAN_SALOON_INT_1"), 0, 0, 0, 1, 0, 0, 0);
			func_333(244699522, 0, 0, 0, 1, 0, 0, 0);
			func_333(-590254598, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(joaat("WS_ARMADILLO_LOCKDOWN_SALOON")))
		{
			func_320(433, 32);
		}
		else
		{
			func_319(433, 32);
		}
		if (func_310(joaat("WS_BLACKWATER_LOCKDOWN_SALOON_DOORS")))
		{
			func_333(551601484, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			func_333(-983069384, 1, 0, 0, 0, 0, 0, 0);
			func_333(-768760124, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(551601484, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			func_333(-983069384, 0, 0, 0, 1, 0, 0, 0);
			func_333(-768760124, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(joaat("WS_RHODES_LOCKDOWN_SALOON")))
		{
			func_320(83, 32);
			func_320(84, 32);
			func_320(85, 32);
			func_320(86, 32);
			func_320(87, 32);
			func_320(79, 32);
		}
		else
		{
			func_319(83, 32);
			func_319(84, 32);
			func_319(85, 32);
			func_319(86, 32);
			func_319(87, 32);
			func_319(79, 32);
		}
		if (func_310(joaat("WS_RHODES_LOCKDOWN_SALOON_DOORS")))
		{
			func_333(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			func_333(2046695029, 1, 0, 0, 0, 0, 0, 0);
			func_333(834296435, 1, 0, 0, 0, 0, 0, 0);
			func_333(1124531468, 1, 0, 0, 0, 0, 0, 0);
			func_333(-902483455, 1, 0, 0, 0, 0, 0, 0);
			func_333(-566797819, 1, 0, 0, 0, 0, 0, 0);
			func_333(1469250492, 1, 0, 0, 0, 0, 0, 0);
			func_333(678501753, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			func_333(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			func_333(2046695029, 0, 0, 0, 1, 0, 0, 0);
			func_333(834296435, 0, 0, 0, 1, 0, 0, 0);
			func_333(1124531468, 0, 0, 0, 1, 0, 0, 0);
			func_333(-902483455, 0, 0, 0, 1, 0, 0, 0);
			func_333(-566797819, 0, 0, 0, 1, 0, 0, 0);
			func_333(1469250492, 0, 0, 0, 1, 0, 0, 0);
			func_333(678501753, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			func_333(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS")))
		{
			func_333(1098854605, 1, 0, 0, 0, 0, 0, 0);
			func_333(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_553(19, 1);
		}
		else
		{
			func_333(1098854605, 0, 0, 0, 1, 0, 0, 0);
			func_333(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!func_554(9, 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RCM_CALLAWAY1")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RCM_CALLAWAY12")) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				func_557(19, &vVar10, 1);
				func_558(&vVar10, 1, 1);
			}
		}
		if (func_310(joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS")))
		{
			func_333(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			func_333(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			func_333(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON")))
		{
			func_320(320, 32);
			func_320(317, 32);
			func_320(318, 32);
			func_320(319, 32);
			func_320(250, 32);
		}
		else
		{
			func_319(320, 32);
			func_319(317, 32);
			func_319(318, 32);
			func_319(319, 32);
			func_319(250, 32);
		}
		if (func_310(joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS")))
		{
			func_333(-399528504, 1, 0, 0, 0, 0, 0, 0);
			func_333(804086151, 1, 0, 0, 0, 0, 0, 0);
			func_333(-923901632, 1, 0, 0, 0, 0, 0, 0);
			func_333(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-399528504, 0, 0, 0, 1, 0, 0, 0);
			func_333(804086151, 0, 0, 0, 1, 0, 0, 0);
			func_333(-923901632, 0, 0, 0, 1, 0, 0, 0);
			func_333(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON")))
		{
			func_320(354, 32);
			func_320(367, 32);
			func_320(368, 32);
			func_320(369, 32);
			func_320(370, 32);
			func_320(371, 32);
			func_320(886, 32);
		}
		else
		{
			func_319(354, 32);
			func_319(367, 32);
			func_319(368, 32);
			func_319(86, 32);
			func_319(370, 32);
			func_319(371, 32);
			func_319(886, 32);
		}
		if (func_310(joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS")))
		{
			func_333(2094297354, 1, 0, 0, 0, 0, 0, 0);
			func_333(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(2094297354, 0, 0, 0, 1, 0, 0, 0);
			func_333(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

bool func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_311(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_312(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] |= iParam1;
}

void func_313(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_310(iParam0))
	{
		if (func_311(Global_1934765.f_20, iParam2))
		{
			iVar0 = func_458(iParam1);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iVar0);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iVar0);
				func_85(&(Global_1934765.f_20), iParam2);
			}
		}
	}
	else if (!func_311(Global_1934765.f_20, iParam2))
	{
		iVar1 = func_458(iParam1);
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iVar1, iParam3, 0, 0, -1, -1, 0);
			func_84(&(Global_1934765.f_20), iParam2);
		}
	}
}

int func_316(int iParam0)
{
	if (!func_560(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_317(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_561(iParam0);
}

bool func_318(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_319(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_562(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

void func_320(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_562(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

bool func_321(int iParam0, bool bParam1)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	if (!func_336(iParam0, 2))
	{
		return false;
	}
	if (func_563(iParam0) == 0)
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
	{
		return true;
	}
	if (func_336(iParam0, 1) && !bParam1)
	{
		func_320(iParam0, 128);
		return true;
	}
	func_319(iParam0, 129);
	func_565(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_564(iParam0));
	func_566(iParam0, 0);
	return true;
}

void func_322(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] |= iParam1;
	}
	else
	{
		Global_1058888.f_40545[iParam0 /*11*/] |= iParam1;
	}
}

void func_323()
{
	if (!func_310(0))
	{
		func_313(1149195254);
		func_313(2016081133);
		func_313(363257921);
		func_313(joaat("BRA_MANSION_INT_01"));
		func_313(-1521525254);
		func_313(-761186147);
		func_313(-1872939092);
		func_313(-964156415);
	}
	else
	{
		func_313(-1643869063);
	}
	if (!func_310(joaat("WS_BRAITHWAITE_MANSION_BURNED")))
	{
		func_313(-1108618313);
		func_313(-787678727);
	}
	if (!func_310(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER")))
	{
		func_313(622597018);
		func_313(1649275138);
	}
	func_313(-2137633069);
	func_313(1944013855);
	func_313(-437251660);
	func_314(124);
	func_314(125);
	func_314(187);
	func_314(188);
	func_314(123);
	func_314(122);
	func_314(121);
	func_314(120);
	func_328("bra_man_burned");
	func_328("bra_man_burned_bra3");
	func_328("bra_man_endsum");
}

void func_324(bool bParam0)
{
	func_567(-1452136643, bParam0);
	func_567(-744260705, bParam0);
	func_567(1424293412, bParam0);
	func_567(1060557512, bParam0);
	func_567(-362403544, bParam0);
	func_567(-592147003, bParam0);
	func_567(2056145270, bParam0);
	func_567(748826019, bParam0);
	func_567(366542865, bParam0);
	func_567(-1508467572, bParam0);
	func_567(-1220264217, bParam0);
	func_567(-990258606, bParam0);
	func_567(-1508467572, bParam0);
	func_567(-1220264217, bParam0);
	func_567(-990258606, bParam0);
	func_567(-665583358, bParam0);
	func_567(-282972514, bParam0);
	func_567(-64632667, bParam0);
	func_567(314111435, bParam0);
	func_567(24859476, bParam0);
	func_567(340621560, bParam0);
	func_567(1266707689, bParam0);
	func_567(434145706, bParam0);
	func_567(654746614, bParam0);
	func_567(1965736001, bParam0);
	func_567(1650694835, bParam0);
	func_567(1891284833, bParam0);
	func_567(1576931820, bParam0);
	func_567(1812999696, bParam0);
	func_567(-1184151355, bParam0);
	func_567(-946313953, bParam0);
	func_567(-889100155, bParam0);
	func_567(-1296418825, bParam0);
	func_567(352816221, !bParam0);
	func_567(1128622296, !bParam0);
	func_567(979982112, !bParam0);
	func_567(1756640181, !bParam0);
	func_567(1557076971, !bParam0);
	func_567(1913538153, !bParam0);
	func_567(-1603329230, !bParam0);
	func_567(-1892843345, !bParam0);
	func_567(241205019, !bParam0);
}

void func_325(int iParam0, int iParam1)
{
	func_333(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return 0;
	}
	if (!func_539(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_337((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_327(char* sParam0)
{
	if (!PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_ACTIVATE_SWAP(sParam0);
	}
}

void func_328(char* sParam0)
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);
	}
}

void func_329()
{
	if (func_310(joaat("WS_CALIGA_HALL_TABACCO_START")))
	{
		func_313(419559004);
		func_313(1786931635);
		func_313(557212279);
		func_313(1426715569);
		func_313(2097480406);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_burning");
		func_328("cal_nav_tabacco_mission");
		func_302(702350293);
		func_302(-677977650);
		func_302(26815048);
		func_302(-1229109520);
		func_327("cal_nav_tabacco_clean");
	}
	else if (func_310(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION")))
	{
		func_313(419559004);
		func_313(1786931635);
		func_313(557212279);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_burning");
		func_328("cal_nav_tabacco_clean");
		func_302(702350293);
		func_302(-677977650);
		func_302(26815048);
		func_302(-1229109520);
		func_302(1426715569);
		func_302(2097480406);
		func_327("cal_nav_tabacco_mission");
	}
	else if (func_310(joaat("WS_CALIGA_HALL_TABACCO_BURNING")))
	{
		func_313(419559004);
		func_313(26815048);
		func_313(-1229109520);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_clean");
		func_328("cal_nav_tabacco_mission");
		func_302(702350293);
		func_302(-677977650);
		func_302(1786931635);
		func_302(557212279);
		func_302(1426715569);
		func_302(2097480406);
		func_327("cal_nav_tabacco_burning");
	}
	else if (func_310(joaat("WS_CALIGA_HALL_TABACCO_BURNT")))
	{
		func_313(702350293);
		func_313(-677977650);
		func_313(26815048);
		func_313(-1229109520);
		func_313(1426715569);
		func_313(2097480406);
		func_328("cal_nav_tabacco_clean");
		func_328("cal_nav_tabacco_mission");
		func_328("cal_nav_tabacco_burning");
		func_302(419559004);
		func_302(1786931635);
		func_302(557212279);
		func_327("cal_nav_tabacco_burnt");
	}
}

void func_330()
{
	func_313(-717025835);
	func_313(1248111234);
	if (!func_310(joaat("WS_COLTER_STAGE_MUDTOWN1")) && !func_310(joaat("WS_COLTER_STAGE_THAWED_SNOW")))
	{
		func_313(-1316886711);
		func_313(867231253);
	}
	if (!func_310(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_313(474287981);
		func_313(-1670453688);
	}
	func_313(2039534767);
	func_313(joaat("WIN1_INTRO_CUTSCENE"));
	func_313(joaat("ADL_WINTER01_HOUSEBURNT"));
	func_313(1590561203);
	func_313(205214733);
	if (!func_310(joaat("WS_COLTER_STAGE_CABIN_BURNING")) && !func_310(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_313(joaat("ADL_WINTER01_HOUSE"));
		func_313(-1106668087);
		func_313(-1636879249);
	}
	func_314(186);
	if (!func_310(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_328("col_nav_wint1_cabin_prefire");
	}
	func_328("col_nav_wint1_cabin_duringfire");
	func_328("col_nav_wint2_post");
	func_328("col_nav_wint_end");
}

void func_331(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
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

void func_332()
{
	if (func_310(joaat("WS_FUSSAR2_LIGHTING")))
	{
		func_302(263152228);
		func_302(1936009597);
	}
	else
	{
		func_313(263152228);
		func_313(1936009597);
	}
}

void func_333(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_568(iParam0, 0, 0);
	if (func_569(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_570(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_571(iParam0, 1);
			}
			else
			{
				func_572(iParam0, 1);
			}
		}
		else
		{
			func_573(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_574())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_334(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1310750.f_16074 |= iParam0;
	}
	else
	{
		Global_1310750.f_16074 -= (Global_1310750.f_16074 & iParam0);
	}
}

void func_335()
{
	if (!func_310(joaat("WS_RHODES_GRAYS3_COVER_ON")))
	{
		func_313(1033721560);
	}
	func_313(1343484786);
	func_313(1871051363);
	func_313(146746575);
	func_313(-2144587490);
	func_313(1989074279);
	func_313(-1671953459);
	func_328("rho_nav_grave_norm_gry3_off");
	func_328("rho_nav_grave_norm_gry3_on");
	func_328("rho_nav_grave_dug_gry3_off");
	func_328("rho_nav_grave_dug_gry3_on");
	func_328("rho_nav_grave_open_gry3_off");
	func_328("rho_nav_grave_open_gry3_on");
	func_328("sad3_nav_rhodes_shootout_00");
}

bool func_336(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return false;
	}
	if (!func_562(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

bool func_337(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return false;
	}
	if (!func_575(func_563(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_564(iParam0))))
		{
			return true;
		}
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_564(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_564(iParam0));
	return true;
}

bool func_338(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	if (!func_575(func_563(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
	{
		return false;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_564(iParam0));
	return true;
}

bool func_339(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_576(Global_1835011[iParam0 /*74*/].f_1);
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

float func_341(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_342()
{
	if (func_27() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_343(int iParam0)
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

void func_344(int iParam0)
{
	if (!GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

bool func_345(int iParam0)
{
	if (!func_577(iParam0))
	{
		return false;
	}
	return func_578(iParam0);
}

bool func_346(int iParam0)
{
	switch (func_27())
	{
		case -1:
			return (Global_1357549.f_1495 & iParam0) != 0;
	}
	return false;
}

void func_347(int iParam0)
{
	switch (func_27())
	{
		case -1:
			Global_1357549.f_1495 |= iParam0;
			break;
	}
}

int func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return 0;
	}
	if (!func_539(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_338((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_349(int iParam0)
{
	switch (func_27())
	{
		case -1:
			Global_1357549.f_1495 -= (Global_1357549.f_1495 & iParam0);
			break;
	}
}

int func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return 0;
	}
	if (!func_539(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_321((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_351()
{
	if (func_310(joaat("WS_RHODES_BANK_WALL_INTACT")))
	{
		func_313(758684739);
		func_313(-661825463);
		func_302(518127510);
		func_314(182);
		func_304(181);
	}
	else
	{
		func_313(518127510);
		func_302(758684739);
		func_302(-661825463);
		func_314(181);
		func_304(182);
	}
}

bool func_352(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & 32) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & 32) != 0;
}

void func_353()
{
	func_328("nav_sdn_docks_pre_es");
	func_328("nav_sdn_docks_korrigan_pre_es");
	func_328("nav_sdn_docks_antenor_pre_es");
	func_328("nav_sdn_docks_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_antenor_pre_es");
	func_328("nav_sdn_docks_antenor_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_328("nav_sdn_docks_es");
	func_328("nav_sdn_docks_korrigan_es");
	func_328("nav_sdn_docks_antenor_es");
	func_328("nav_sdn_docks_trains_es");
	func_328("nav_sdn_docks_korrigan_antenor_es");
	func_328("nav_sdn_docks_antenor_trains_es");
	func_328("nav_sdn_docks_korrigan_trains_es");
	func_328("nav_sdn_docks_korrigan_antenor_trains_es");
}

void func_354(var uParam0, Vector3 vParam1, float fParam4)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, 1, -1, 0);
	}
}

void func_355(int iParam0, int iParam1)
{
	if (*iParam0 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
		*iParam0 = -1;
	}
}

void func_356(int iParam0, int iParam1)
{
	if (func_310(iParam0))
	{
		func_302(iParam1);
	}
	else
	{
		func_313(iParam1);
	}
}

int func_357()
{
	return Global_40.f_4283;
}

int func_358(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_213(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_579(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) /*3*/ };
		iVar0 = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0.0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_580(iVar0, bParam8);
	return iVar0;
}

void func_359(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_213(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) /*3*/ };
			if (func_182(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_360(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return joaat("ARTHUR");
		case joaat("PLAYER_THREE"):
			return joaat("JOHN");
		default:
			break;
	}
	return 0;
}

void func_362()
{
	if (func_361(ENTITY::GET_ENTITY_MODEL(Global_35)) == joaat("JOHN"))
	{
		PED::_0x2B4CE170DE09F346(Global_35, joaat("DUTCH_GANG"));
		PED::_0x2B4CE170DE09F346(Global_35, joaat("JOHN"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER_JOHN"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("JOHN_CONV_CLOSER_REPLIES"));
	}
}

void func_363(int iParam0)
{
	Global_1946054.f_1 = iParam0;
}

void func_364(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_365(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	switch (sParam0.f_0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
			{
				return;
			}
			if (func_581(sParam0.f_0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946054.f_850)
				{
					iVar1 = ((Global_1946054.f_855 + iVar0) % 25);
					if ((Global_1946054.f_668[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_668[iVar1 /*4*/].f_1 == sParam0.f_1) && Global_1946054.f_668[iVar1 /*4*/].f_2 == sParam0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_582(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_364(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
			{
				return;
			}
			if (func_581(sParam0.f_0))
			{
				return;
			}
			func_582(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_364(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_583(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

bool func_366(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return false;
}

void func_367(int iParam0)
{
	int iVar0;

	func_584(&(Global_40.f_4237[iParam0 /*3*/]));
	if (func_188(Global_40.f_4237[iParam0 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_188(Global_40.f_4237[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4237[iVar0 /*3*/] = Global_40.f_4237[iVar0 + 1 /*3*/];
			Global_40.f_4237[iVar0 /*3*/].f_1 = Global_40.f_4237[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4237[iVar0 /*3*/].f_2 = Global_40.f_4237[iVar0 + 1 /*3*/].f_2;
			func_586(iVar0, func_585(iVar0 + 1));
			func_587(&(Global_40.f_4237[iVar0 + 1 /*3*/]));
			func_586(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

bool func_368(int iParam0)
{
	int iVar0;

	if (!func_366(iParam0, &iVar0))
	{
		return false;
	}
	return Global_40.f_4237[iVar0 /*3*/].f_2;
}

bool func_369(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_318(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_318(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_318(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_318(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_318(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_318(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_318(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_318(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_370(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_366(iParam0, &iVar0))
	{
		return func_585(iVar0);
	}
	return false;
}

void func_371(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_366(iParam0, &iVar0))
	{
		func_586(iVar0, bParam1);
	}
}

bool func_372(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] & iParam1) != 0;
}

int func_373(int iParam0)
{
	int iVar0;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2037.5f, -2050.0f, 150.0f, 0.0f, 0.0f, 18.0f, 575.0f, 750.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2485.0f, -1497.5f, 150.0f, 0.0f, 0.0f, 20.0f, 725.0f, 1050.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2060.0f, -1812.5f, 150.0f, 0.0f, 0.0f, 20.0f, 315.0f, 750.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1975.0f, -1452.5f, 150.0f, 0.0f, 0.0f, -43.0f, 200.0f, 350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2022.5f, -1277.5f, 150.0f, 0.0f, 0.0f, -7.0f, 100.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2022.5f, -925.0f, 150.0f, 0.0f, 0.0f, 20.0f, 865.0f, 365.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2200.0f, -2440.0f, 150.0f, 0.0f, 0.0f, 0.0f, 500.0f, 1000.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1762.5f, -737.5f, 150.0f, 0.0f, 0.0f, 20.0f, 500.0f, 175.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2020.944f, -580.694f, 150.0f, 0.0f, 0.0f, -111.0f, 400.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2116.078f, -612.5f, 150.0f, 0.0f, 0.0f, -1.0f, 240.0f, 540.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2197.5f, -693.982f, 150.0f, 0.0f, 0.0f, -111.0f, 200.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2527.5f, -785.0f, 150.0f, 0.0f, 0.0f, -80.0f, 400.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3550.0f, -1455.0f, 150.0f, 0.0f, 0.0f, 0.0f, 1800.0f, 1000.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2687.5f, -757.5f, 150.0f, 0.0f, 0.0f, -80.0f, 400.0f, 75.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2826.796f, -755.0f, 150.0f, 0.0f, 0.0f, 0.0f, 282.646f, 400.0f, 700.0f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1605.0f, -382.5f, 150.0f, 0.0f, 0.0f, 25.0f, 1100.0f, 1200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2035.0f, -810.0f, 150.0f, 0.0f, 0.0f, -65.0f, 400.0f, 100.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1887.5f, -1050.0f, 150.0f, 0.0f, 0.0f, -45.0f, 210.0f, 100.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2210.0f, -625.0f, 150.0f, 0.0f, 0.0f, -65.0f, 200.0f, 100.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2827.5f, -82.5f, 150.0f, 0.0f, 0.0f, 167.0f, 1500.0f, 1000.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -930.0f, -730.0f, 150.0f, 0.0f, 0.0f, 0.0f, 600.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -825.0f, -780.0f, 150.0f, 0.0f, 0.0f, -45.0f, 300.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -632.5f, -902.5f, 150.0f, 0.0f, 0.0f, -20.0f, 300.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -820.0f, -170.0f, 150.0f, 0.0f, 0.0f, 37.5f, 500.0f, 350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -835.0f, -525.0f, 150.0f, 0.0f, 0.0f, 41.0f, 200.0f, 400.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -532.5f, -32.5f, 150.0f, 0.0f, 0.0f, -27.0f, 150.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -605.0f, 50.0f, 150.0f, 0.0f, 0.0f, -75.0f, 200.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -540.0f, 50.0f, 150.0f, 0.0f, 0.0f, -140.0f, 150.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1127.5f, -90.0f, 150.0f, 0.0f, 0.0f, -32.5f, 200.0f, 100.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1500.0f, 392.5f, 150.0f, 0.0f, 0.0f, 160.0f, 700.0f, 400.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1477.5f, 552.5f, 150.0f, 0.0f, 0.0f, 143.0f, 800.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1656.969f, 378.098f, 150.0f, 0.0f, 0.0f, 122.0f, 795.0f, 1083.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2617.969f, 452.097f, 150.0f, 0.0f, 0.0f, 167.0f, 1763.0f, 1500.0f, 700.0f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3585.0f, -280.0f, 150.0f, 0.0f, 0.0f, 0.0f, 1800.0f, 550.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3085.0f, -337.5f, 150.0f, 0.0f, 0.0f, -80.5f, 300.0f, 1500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2440.0f, -465.0f, 150.0f, 0.0f, 0.0f, -1.0f, 400.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2322.5f, -537.5f, 150.0f, 0.0f, 0.0f, -111.0f, 100.0f, 150.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3100.0f, 125.0f, 150.0f, 0.0f, 0.0f, 41.0f, 1700.0f, 350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3670.0f, 80.0f, 150.0f, 0.0f, 0.0f, 41.0f, 1400.0f, 475.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2332.651f, -365.338f, 150.0f, 0.0f, 0.0f, 86.0f, 150.0f, 140.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2124.824f, -347.118f, 150.0f, 0.0f, 0.0f, 86.0f, 140.0f, 291.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3726.431f, -755.0f, 150.0f, 0.0f, 0.0f, 0.0f, 1518.809f, 400.0f, 700.0f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 190.4736f, 1214.829f, 200.0f, 0.0f, 0.0f, 59.0f, 488.2586f, 443.9291f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 695.0f, 1075.0f, 200.0f, 0.0f, 0.0f, 35f, 250.0f, 250.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -11.22244f, 1259.539f, 200.0f, 0.0f, 0.0f, 0.0f, 135.0f, 340.8336f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 667.5f, 1675.0f, 200.0f, 0.0f, 0.0f, 15f, 150.0f, 325.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 627.5f, 1255.0f, 200.0f, 0.0f, 0.0f, 9.999999f, 400.0f, 500.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 507.5f, 1532.5f, 200.0f, 0.0f, 0.0f, -45.0f, 300.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 72.5f, 1297.5f, 200.0f, 0.0f, 0.0f, 50f, 400.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 615.0f, 1750.0f, 200.0f, 0.0f, 0.0f, -93.0f, 200.0f, 150.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 510.0f, 1025.0f, 200.0f, 0.0f, 0.0f, 1.0f, 300.0f, 250.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 330.2712f, 1028.66f, 200.0f, 0.0f, 0.0f, 82.0f, 300.0f, 100.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 224.7084f, 1010.634f, 200.0f, 0.0f, 0.0f, 58.85596f, 175.0f, 267.2676f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 153.0846f, 1314.722f, 200.0f, 0.0f, 0.0f, -23.0f, 400.0f, 409.2231f, 800.0f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1285.0f, -1725.0f, 150.0f, 0.0f, 0.0f, 20.0f, 500.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1360.0f, -1540.0f, 150.0f, 0.0f, 0.0f, 30.0f, 500.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1492.5f, -1262.5f, 150.0f, 0.0f, 0.0f, 15.0f, 500.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1410.0f, -1147.5f, 150.0f, 0.0f, 0.0f, 25.0f, 700.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -865.0f, -1125.0f, 150.0f, 0.0f, 0.0f, -20.0f, 700.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -865.0f, -1725.0f, 150.0f, 0.0f, 0.0f, 0.0f, 800.0f, 1200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1300.0f, -1917.5f, 150.0f, 0.0f, 0.0f, -42.0f, 250.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1180.0f, -2122.5f, 150.0f, 0.0f, 0.0f, 20.0f, 300.0f, 350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -955.0f, -1065.0f, 150.0f, 0.0f, 0.0f, -45.0f, 250.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1052.5f, -990.0f, 150.0f, 0.0f, 0.0f, 1.25f, 200.0f, 200.0f, 700.0f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -100.0f, 1557.5f, 200.0f, 0.0f, 0.0f, 50.0f, 225.0f, 200.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -162.5f, 1660.0f, 200.0f, 0.0f, 0.0f, 0.0f, 135.0f, 500.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -162.5f, 1952.5f, 200.0f, 0.0f, 0.0f, 9.0f, 300.0f, 800.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -752.5f, 2135.0f, 200.0f, 0.0f, 0.0f, 0.0f, 1050.0f, 1975.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2139.972f, 1966.829f, 200.0f, 0.0f, 0.0f, 165.0f, 1814.271f, 1288.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1295.0f, 1090.0f, 200.0f, 0.0f, 0.0f, 122.0f, 1200.0f, 300.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1080.0f, 1132.5f, 200.0f, 0.0f, 0.0f, 105.0f, 1200.0f, 375.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -895.0f, 1150.0f, 200.0f, 0.0f, 0.0f, 45.0f, 800.0f, 800.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -845.0f, 720.0f, 200.0f, 0.0f, 0.0f, 0.0f, 200.0f, 300.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1015.0f, 560.0f, 200.0f, 0.0f, 0.0f, 143.0f, 75.0f, 200.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1940.0f, 3145.0f, 200.0f, 0.0f, 0.0f, 0.0f, 1400.0f, 2000.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -757.5f, 3625.0f, 200.0f, 0.0f, 0.0f, 0.0f, 975.0f, 1050.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -187.5f, 3210.0f, 200.0f, 0.0f, 0.0f, -6.0f, 400.0f, 1800.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2315.88f, 1498.498f, 150.0f, 0.0f, 0.0f, 167.0f, 1655.0f, 587.0f, 700.0f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 190.0f, 1630.0f, 200.0f, 0.0f, 0.0f, -23.0f, 225.0f, 200.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 715.0f, 3145.0f, 200.0f, 0.0f, 0.0f, 0.0f, 1200.0f, 2000.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1210.0f, 1212.5f, 200.0f, 0.0f, 0.0f, -14.0f, 585.0f, 500.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1510.0f, 1445.0f, 200.0f, 0.0f, 0.0f, 16.0f, 450.0f, 1000.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1935.0f, 1040.0f, 200.0f, 0.0f, 0.0f, 12.0f, 200.0f, 100.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1810.0f, 1030.0f, 200.0f, 0.0f, 0.0f, -14.0f, 100.0f, 100.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1495.0f, 1425.0f, 200.0f, 0.0f, 0.0f, -9.0f, 1200.0f, 650.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1050.0f, 1430.0f, 200.0f, 0.0f, 0.0f, 10.0f, 500.0f, 700.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2037.5f, 1630.0f, 200.0f, 0.0f, 0.0f, 118.0f, 200.0f, 200.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1400.0f, 2500.0f, 200.0f, 0.0f, 0.0f, -47.0f, 2000.0f, 800.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1810.0f, 2707.5f, 200.0f, 0.0f, 0.0f, -19.0f, 1500.0f, 900.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2175.0f, 3557.5f, 200.0f, 0.0f, 0.0f, -39.0f, 2000.0f, 1500.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1040.0f, 2120.0f, 200.0f, 0.0f, 0.0f, 15.0f, 800.0f, 1000.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 410.0f, 2112.5f, 200.0f, 0.0f, 0.0f, -93.0f, 500.0f, 600.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 307.5f, 1722.5f, 200.0f, 0.0f, 0.0f, -45.0f, 250.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 472.5f, 1880.0f, 200.0f, 0.0f, 0.0f, -93.0f, 200.0f, 150.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 135.0f, 2000.0f, 200.0f, 0.0f, 0.0f, 9.0f, 300.0f, 800.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 217.5f, 3245.0f, 200.0f, 0.0f, 0.0f, -6.0f, 400.0f, 1800.0f, 800.0f);
			break;
		case 5:
			if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2410.933f, -7578.265f, 50.0f, 0.0f, 0.0f, 0.0f, 2000.0f, 2000.0f, 890.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2388.016f, -4563.885f, 50.0f, 0.0f, 0.0f, 0.0f, 815.0f, 500.0f, 800.0f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -357.5f, -120.0f, 200.0f, 0.0f, 0.0f, -27.0f, 150.0f, 350.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -385.0f, 180.0f, 200.0f, 0.0f, 0.0f, -140f, 150.0f, 350.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -600.0f, 280.0f, 200.0f, 0.0f, 0.0f, -75.0f, 150.0f, 350.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 165.0f, 165.0f, 200.0f, 0.0f, 0.0f, 0.0f, 1100.0f, 1000.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -465.0f, -340.0f, 200.0f, 0.0f, 0.0f, 37.5f, 500.0f, 275.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -37.5f, -525.0f, 200.0f, 0.0f, 0.0f, 0.0f, 1125.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 670.0f, -315.0f, 200.0f, 0.0f, 0.0f, -42.0f, 365.0f, 817.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 860.0f, 487.5f, 200.0f, 0.0f, 0.0f, 35f, 650.0f, 900.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 512.5f, 800.0f, 200.0f, 0.0f, 0.0f, 1.0f, 300.0f, 200.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1230.0f, 695.0f, 200.0f, 0.0f, 0.0f, -14.0f, 875.0f, 500.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1560.0f, 835.0f, 200.0f, 0.0f, 0.0f, 16f, 450.0f, 200.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1727.5f, 702.5f, 200.0f, 0.0f, 0.0f, -14.0f, 100.0f, 575.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 964.14f, 59.521f, 200.0f, 0.0f, 0.0f, -71.00001f, 415.0f, 725.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1485.0f, 322.5f, 200.0f, 0.0f, 0.0f, -84.0f, 650.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1630.0f, 100.0f, 200.0f, 0.0f, 0.0f, -111.0f, 435.0f, 375.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1752.5f, 302.5f, 200.0f, 0.0f, 0.0f, -47.0f, 275.0f, 100.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 103.6867f, 807.6879f, 200.0f, 0.0f, 0.0f, 58.7951f, 295.0871f, 709.0376f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 302.139f, 780.344f, 200.0f, 0.0f, 0.0f, 82.0f, 200.0f, 157.492f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -847.5f, 240.0f, 200.0f, 0.0f, 0.0f, 33f, 797.0f, 225.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -975.0f, 280.0f, 200.0f, 0.0f, 0.0f, 142.0f, 329.0f, 450.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -245.4394f, 1000.0f, 200.0f, 0.0f, 0.0f, 0.0f, 333.3127f, 300.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -760.0f, 440.0f, 200.0f, 0.0f, 0.0f, 105f, 300.0f, 250.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -520.0f, 507.5f, 200.0f, 0.0f, 0.0f, 0.0f, 450.0f, 450.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -495.0f, 822.5f, 200.0f, 0.0f, 0.0f, 45.0f, 500.0f, 225.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -140.0f, 705.0f, 200.0f, 0.0f, 0.0f, 59.0f, 250.0f, 650.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -327.5f, 1080.0f, 200.0f, 0.0f, 0.0f, 45.0f, 100.0f, 100.0f, 800.0f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1838.526f, 72.693f, 200.0f, 0.0f, 0.0f, -111.0f, 525.0f, 311.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2827.5f, 1215.0f, 200.0f, 0.0f, 0.0f, -9.0f, 1500.0f, 650.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1920.0f, 655.0f, 200.0f, 0.0f, 0.0f, -14.0f, 300.0f, 575.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2181.992f, -132.078f, 200.0f, 0.0f, 0.0f, 86.0f, 315.0f, 322.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2130.0f, 825.0f, 200.0f, 0.0f, 0.0f, 12.0f, 500.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2345.0f, 1795.0f, 200.0f, 0.0f, 0.0f, 118.0f, 200.0f, 500.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2775.0f, 725.0f, 200.0f, 0.0f, 0.0f, 41.0f, 2000.0f, 985.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 2565.0f, 1537.5f, 200.0f, 0.0f, 0.0f, -47.0f, 1000.0f, 400.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3025.0f, 1632.5f, 200.0f, 0.0f, 0.0f, -19.0f, 1500.0f, 1000.0f, 800.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 3730.0f, 2300.0f, 200.0f, 0.0f, 0.0f, -39.0f, 2000.0f, 1500.0f, 800.0f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1025.0f, -642.5f, 150.0f, 0.0f, 0.0f, -42.0f, 600.0f, 800.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1335.0f, -407.5f, 150.0f, 0.0f, 0.0f, -71.0f, 717.0f, 325.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1585.0f, -330.0f, 150.0f, 0.0f, 0.0f, -111.0f, 400.0f, 625.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1250.0f, -1702.5f, 150.0f, 0.0f, 0.0f, 0.0f, 594.0f, 2000.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 612.5f, -1337.5f, 150.0f, 0.0f, 0.0f, 0.0f, 850.0f, 1200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 677.5f, -2270.0f, 150.0f, 0.0f, 0.0f, 45.0f, 1000.0f, 700.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1408.3f, -1687.9f, 150.0f, 0.0f, 0.0f, 5.0f, 450.0f, 1300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1600.0f, -545.0f, 100.0f, 0.0f, 0.0f, 20.0f, 325.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1807.467f, -1544.09f, 150.0f, 0.0f, 0.0f, -72.0f, 309.0f, 562.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1705.656f, -1257.077f, 150.0f, 0.0f, 0.0f, 20.0f, 400.0f, 50.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1946.824f, -1264.023f, 150.0f, 0.0f, 0.0f, 21.0f, 100.0f, 176.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1735.228f, -1334.945f, 150.0f, 0.0f, 0.0f, 20.0f, 295.0f, 150.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1902.5f, -432.5f, 150.0f, 0.0f, 0.0f, -111.0f, 365.0f, 75.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1827.5f, -580.0f, 150.0f, 0.0f, 0.0f, 20.0f, 75.0f, 75.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1571.834f, -1097.489f, 150.0f, 0.0f, 0.0f, 20.0f, 85.0f, 371.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, 1661.989f, -1972.796f, 150.0f, 0.0f, 0.0f, 18.0f, 85.0f, 371.0f, 700.0f);
			break;
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1762.5f, -2030.0f, 150.0f, 0.0f, 0.0f, 16.0f, 275.0f, 400.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1445.0f, -1987.5f, 150.0f, 0.0f, 0.0f, -42.0f, 125.0f, 50.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1600.0f, -1882.5f, 150.0f, 0.0f, 0.0f, 20.0f, 200.0f, 335.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1927.5f, -1750.0f, 150.0f, 0.0f, 0.0f, 30.0f, 690.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2052.5f, -1517.5f, 150.0f, 0.0f, 0.0f, 15.0f, 715.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2162.5f, -1237.5f, 150.0f, 0.0f, 0.0f, -45.0f, 500.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2272.5f, -1057.5f, 150.0f, 0.0f, 0.0f, -65.0f, 519.0f, 530.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2865.0f, -1112.5f, 150.0f, 0.0f, 0.0f, 167.0f, 1250.0f, 1000.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1972.5f, -2022.5f, 150.0f, 0.0f, 0.0f, 44.0f, 300.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1875.0f, -2087.5f, 150.0f, 0.0f, 0.0f, 70.0f, 300.0f, 180.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2140.0f, -1950.0f, 150.0f, 0.0f, 0.0f, 70.0f, 200.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2210.0f, -1890.0f, 150.0f, 0.0f, 0.0f, 24.0f, 200.0f, 175.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1397.5f, -2027.5f, 150.0f, 0.0f, 0.0f, 20.0f, 45.0f, 25.0f, 700.0f);
			break;
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3305.0f, -3380.0f, 150.0f, 0.0f, 0.0f, 123.0f, 300.0f, 575.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3335.0f, -3582.5f, 150.0f, 0.0f, 0.0f, 170.0f, 225.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3200.0f, -3515.0f, 150.0f, 0.0f, 0.0f, -154.0f, 235.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3515.0f, -3190.0f, 150.0f, 0.0f, 0.0f, 139.0f, 450.0f, 575.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3930.0f, -2912.5f, 150.0f, 0.0f, 0.0f, 154.0f, 700.0f, 575.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4537.5f, -2665.0f, 150.0f, 0.0f, 0.0f, -178.0f, 1000.0f, 800.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4967.5f, -2390.0f, 150.0f, 0.0f, 0.0f, -148.0f, 300.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4617.5f, -2080.0f, 150.0f, 0.0f, 0.0f, 175.0f, 1000.0f, 700.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3747.5f, -2030.0f, 150.0f, 0.0f, 0.0f, 99.0f, 700.0f, 1000.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3282.5f, -3050.0f, 150.0f, 0.0f, 0.0f, 107.0f, 750.0f, 400.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3370.0f, -2690.0f, 150.0f, 0.0f, 0.0f, 124.0f, 100.0f, 350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3355.0f, -2345.0f, 150.0f, 0.0f, 0.0f, 69.0f, 200.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3657.5f, -2610.0f, 150.0f, 0.0f, 0.0f, 98.0f, 500.0f, 850.0f, 700.0f);
			break;
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5420.0f, -3447.5f, 150.0f, 0.0f, 0.0f, 175.0f, 300.0f, 250.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5837.5f, -3530.0f, 150.0f, 0.0f, 0.0f, -32.0f, 1000.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -6142.5f, -3665.0f, 150.0f, 0.0f, 0.0f, -8.0f, 800.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5747.5f, -2905.0f, 150.0f, 0.0f, 0.0f, 136.5f, 1300.0f, 750.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5407.5f, -2487.5f, 150.0f, 0.0f, 0.0f, -148.0f, 550.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5232.5f, -2825.0f, 150.0f, 0.0f, 0.0f, -178.0f, 400.0f, 530.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5667.5f, -2040.0f, 150.0f, 0.0f, 0.0f, 175.0f, 1100.0f, 800.0f, 700.0f);
			break;
		case 16:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2510.0f, -2542.5f, 150.0f, 0.0f, 0.0f, 44.0f, 1200.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1632.5f, -2480.0f, 150.0f, 0.0f, 0.0f, 16.0f, 275.0f, 535.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1990.0f, -2525.0f, 150.0f, 0.0f, 0.0f, 70.0f, 600.0f, 850.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1452.5f, -2342.5f, 150.0f, 0.0f, 0.0f, 16.0f, 150.0f, 625.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1480.0f, -2177.5f, 150.0f, 0.0f, 0.0f, 20.0f, 165.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1487.5f, -2087.5f, 150.0f, 0.0f, 0.0f, -42.0f, 60.0f, 150.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1350.0f, -2330.0f, 150.0f, 0.0f, 0.0f, 20.0f, 165.0f, 575.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -1562.5f, -2652.5f, 150.0f, 0.0f, 0.0f, 28.0f, 500.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2445.0f, -2795.0f, 150.0f, 0.0f, 0.0f, 107.0f, 750.0f, 1350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2675.0f, -2177.5f, 150.0f, 0.0f, 0.0f, 70.0f, 600.0f, 900.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2947.5f, -2465.0f, 150.0f, 0.0f, 0.0f, 98.0f, 150.0f, 600.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3097.5f, -1977.5f, 150.0f, 0.0f, 0.0f, 99.0f, 800.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2467.5f, -3145.0f, 150.0f, 0.0f, 0.0f, 123.0f, 150.0f, 200.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2577.5f, -3182.5f, 150.0f, 0.0f, 0.0f, 85.0f, 150.0f, 150.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2985.0f, -2502.5f, 150.0f, 0.0f, 0.0f, 124.0f, 150.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -2942.5f, -2457.5f, 150.0f, 0.0f, 0.0f, 69.0f, 175.0f, 600.0f, 700.0f);
			break;
		case 14:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3540.0f, -3635.0f, 150.0f, 0.0f, 0.0f, 123.0f, 125.0f, 100.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3880.0f, -3687.5f, 150.0f, 0.0f, 0.0f, 105.0f, 225.0f, 625.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4495.0f, -3610.0f, 150.0f, 0.0f, 0.0f, 96.0f, 600.0f, 625.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4922.5f, -3742.5f, 150.0f, 0.0f, 0.0f, 131.0f, 500.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5135.0f, -3900.0f, 150.0f, 0.0f, 0.0f, 22.0f, 200.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5205.0f, -3887.5f, 150.0f, 0.0f, 0.0f, -16.0f, 300.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5350.0f, -3835.0f, 150.0f, 0.0f, 0.0f, -32.0f, 150.0f, 500.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -5125.0f, -3500.0f, 150.0f, 0.0f, 0.0f, 175.0f, 300.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4975.0f, -3360.0f, 150.0f, 0.0f, 0.0f, 137.0f, 450.0f, 350.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4645.0f, -3220.0f, 150.0f, 0.0f, 0.0f, -178.0f, 735.0f, 300.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -4205.0f, -3420.0f, 150.0f, 0.0f, 0.0f, 154.0f, 450.0f, 575.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3795.0f, -3510.0f, 150.0f, 0.0f, 0.0f, 139.0f, 450.0f, 275.0f, 700.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iVar0, -3992.5f, -3567.5f, 150.0f, 0.0f, 0.0f, 0.0f, 200.0f, 200.0f, 700.0f);
			break;
	}
	Global_1897952[iParam0 /*2*/].f_1 = iVar0;
	return iVar0;
}

void func_374(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_375(int iParam0, bool bParam1)
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

void func_376(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] -= (Global_1897952[iParam0 /*2*/] & iParam1);
}

void func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_588(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_321((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_27() != -1)
	{
		return;
	}
	if (func_588(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_589((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_380(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	func_590(MISC::GET_HASH_KEY(sParam0), iParam1);
}

bool func_381(int iParam0)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	return func_591(iParam0, 2);
}

bool func_382(int iParam0)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	return func_450(iParam0, 2);
}

void func_383(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	func_592(func_234(iParam0), iParam1);
}

bool func_384()
{
	return func_77(Global_1935630, (1 << 12));
}

int func_385(int iParam0)
{
	if (!func_104(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

void func_386(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_593())
	{
		return;
	}
	sVar1 = func_594(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_104(iParam4))
	{
		if (func_207(iParam0))
		{
			iParam4 = func_234(func_283(iParam0));
		}
		else
		{
			iParam4 = func_234(iParam1);
		}
	}
	if (func_104(iParam4))
	{
		iVar3 = func_385(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_596(func_595(iParam2));
	}
	else if ((func_591(iParam1, 2) || func_450(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M" /* GXTEntry: "~COLOR_RED~Wanted Dead or Alive~s~" */);
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F" /* GXTEntry: "~COLOR_RED~Wanted Dead or Alive~s~" */);
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((func_207(iParam0) && func_210(iParam0, (1 << 24))) && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA" /* GXTEntry: "~COLOR_RED~Restricted Area~s~" */);
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY" /* GXTEntry: "~COLOR_RED~BOUNTY: ~1$~~s~" */, iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = func_258(func_177());
		iVar5 = func_259(func_177());
		if (iVar5 < 10)
		{
			strcat_s(&cVar6, 8, "0");
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM" /* GXTEntry: "AM" */;
			if (iVar4 >= 12)
			{
				sVar9 = "PM" /* GXTEntry: "PM" */;
				if (iVar4 > 12)
				{
					iVar4 -= 12;
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C" /* GXTEntry: "~1~:~2~~3~ | ~4~°C" */;
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_597(fVar7);
				sVar8 = "TIME_AND_TEMP_F" /* GXTEntry: "~1~:~2~~3~ | ~4~°F" */;
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_598(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_598(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24" /* GXTEntry: "~1~:~2~ | ~3c~°C" */;
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_597(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24" /* GXTEntry: "~1~:~2~ | ~3c~°F" */;
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_598(&cVar6, joaat("COLOR_PURE_WHITE")), func_598(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_599(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_387(int iParam0)
{
	int iVar0;

	if (!func_233(iParam0))
	{
		return;
	}
	iVar0 = func_234(iParam0);
	func_600(iVar0);
	func_601(iVar0, func_385(iVar0));
}

void func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_602(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_321((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_389(int iParam0)
{
	Global_1897952.f_41 = iParam0;
}

bool func_390(int iParam0)
{
	if (!func_58())
	{
		return true;
	}
	if (!func_70(3))
	{
		return 7 == iParam0;
	}
	return true;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BAYOUNWA");
		case 1:
			return joaat("BIGVALLEY");
		case 2:
			return joaat("BLUEWATERMARSH");
		case 3:
			return joaat("CUMBERLAND");
		case 4:
			return joaat("GREATPLAINS");
		case 6:
			return joaat("GRIZZLIESEAST");
		case 7:
			return joaat("GRIZZLIESWEST");
		case 8:
			return joaat("GUARMAD");
		case 9:
			return joaat("HEARTLANDS");
		case 10:
			return joaat("ROANOKE");
		case 11:
			return joaat("SCARLETTMEADOWS");
		case 12:
			return joaat("TALLTREES");
		case 13:
			return joaat("GAPTOOTHRIDGE");
		case 14:
			return joaat("RIOBRAVO");
		case 15:
			return joaat("CHOLLASPRINGS");
		case 16:
			return joaat("HENNIGANSSTEAD");
		default:
			break;
	}
	return -1;
}

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_27() != -1)
	{
		return;
	}
	if (func_602(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_603((iVar1 + iVar0)))
			{
				func_589((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_393(int iParam0)
{
	if (!func_233(iParam0))
	{
		return;
	}
	func_604();
	switch (iParam0)
	{
		case 0:
			func_605(5, joaat("ANIMALS_ALLIGATOR"));
			func_605(10, joaat("ANIMALS_DEER"));
			func_605(11, joaat("ANIMALS_ALLIGATOR"));
			func_605(12, joaat("ANIMALS_BOAR"));
			func_605(13, joaat("ANIMALS_FOX"));
			func_605(7, joaat("ANIMALS_PELICAN"));
			break;
		case 1:
			func_605(5, joaat("ANIMALS_MOOSE"));
			func_605(10, joaat("ANIMALS_DEER"));
			func_605(11, joaat("ANIMALS_WOLF"));
			func_605(12, joaat("ANIMALS_RABBIT"));
			func_605(13, joaat("ANIMALS_COYOTES"));
			func_605(7, joaat("ANIMALS_HAWKS"));
			break;
		case 2:
			func_605(5, joaat("ANIMALS_TURTLE"));
			func_605(10, joaat("ANIMALS_POSSUMS"));
			func_605(11, joaat("ANIMALS_ALLIGATOR"));
			func_605(12, joaat("ANIMALS_POSSUMS"));
			func_605(13, joaat("ANIMALS_FOX"));
			func_605(7, joaat("ANIMALS_SONGBIRD"));
			break;
		case 3:
			func_605(5, joaat("ANIMALS_COYOTES"));
			func_605(10, joaat("ANIMALS_DEER"));
			func_605(11, joaat("ANIMALS_WOLF"));
			func_605(12, joaat("ANIMALS_RABBIT"));
			func_605(13, joaat("ANIMALS_COYOTES"));
			func_605(7, joaat("ANIMALS_VULTURES"));
			break;
		case 4:
			func_605(5, joaat("ANIMALS_DEER"));
			func_605(10, joaat("ANIMALS_DEER"));
			func_605(11, joaat("ANIMALS_WOLF"));
			func_605(12, joaat("ANIMALS_RACCOON"));
			func_605(13, joaat("ANIMALS_COYOTES"));
			func_605(7, joaat("ANIMALS_HAWKS"));
			func_605(8, joaat("ANIMALS_BUFFALO"));
			break;
		case 5:
		case 6:
		case 7:
			func_605(5, joaat("ANIMALS_DEER"));
			func_605(10, joaat("ANIMALS_FOX"));
			func_605(11, joaat("ANIMALS_COUGAR"));
			func_605(12, joaat("ANIMALS_DEER"));
			func_605(13, joaat("ANIMALS_FOX"));
			func_605(7, joaat("ANIMALS_EAGLES"));
			break;
		case 8:
			func_605(5, joaat("ANIMALS_BOAR"));
			func_605(10, joaat("ANIMALS_BOAR"));
			func_605(11, joaat("ANIMALS_SNAKE"));
			func_605(12, joaat("ANIMAL_HEN"));
			func_605(13, joaat("ANIMALS_BOAR"));
			func_605(7, joaat("ANIMALS_SEAGULL"));
			break;
		case 9:
			func_605(5, joaat("ANIMALS_DEER"));
			func_605(10, joaat("ANIMALS_DEER"));
			func_605(11, joaat("ANIMALS_COUGAR"));
			func_605(12, joaat("ANIMALS_BOAR"));
			func_605(13, joaat("ANIMALS_COYOTES"));
			func_605(7, joaat("ANIMALS_HAWKS"));
			func_605(8, joaat("ANIMALS_BUFFALO"));
			break;
		case 10:
			func_605(5, joaat("ANIMALS_COYOTES"));
			func_605(10, joaat("ANIMALS_DEER"));
			func_605(11, joaat("ANIMALS_COUGAR"));
			func_605(12, joaat("ANIMALS_RABBIT"));
			func_605(13, joaat("ANIMALS_COYOTES"));
			func_605(7, joaat("ANIMALS_HAWKS"));
			break;
		case 11:
			func_605(5, joaat("ANIMALS_DEER"));
			func_605(10, joaat("ANIMALS_TURKEYS_WILD"));
			func_605(11, joaat("ANIMALS_FOX"));
			func_605(12, joaat("ANIMALS_RACCOON"));
			func_605(13, joaat("ANIMALS_FOX"));
			func_605(7, joaat("ANIMALS_DUCKS"));
			break;
		case 12:
			func_605(5, joaat("ANIMALS_DEER"));
			func_605(10, joaat("ANIMALS_FOX"));
			func_605(11, joaat("ANIMALS_BEAR"));
			func_605(12, joaat("ANIMALS_RABBIT"));
			func_605(13, joaat("ANIMALS_COYOTES"));
			func_605(7, joaat("ANIMALS_SONGBIRD"));
			break;
	}
}

int func_394(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_345(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_345(45))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_27() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_345(45))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

void func_395(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_394(func_197(Global_36), 1);
	}
	if (func_606(iParam0, iParam1))
	{
	}
}

void func_396(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899.f_182 = fParam0;
	Global_1894899.f_183 = fParam1;
	Global_1894899.f_184 = fParam2;
	Global_1894899.f_185 = fParam3;
}

void func_397(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_607(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_331(joaat("WS_DOWNS_RANCH_EDITH"));
			func_331(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_331(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_331(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_607(joaat("WS_DOWNS_RANCH_EDITH"));
			func_331(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_331(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_331(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_331(joaat("WS_DOWNS_RANCH_EDITH"));
			func_607(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_331(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_331(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_331(joaat("WS_DOWNS_RANCH_EDITH"));
			func_331(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_607(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_331(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_331(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_331(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_607(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_608();
			func_607(iParam0);
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
			func_609();
			func_607(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_331(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_331(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_607(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_331(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_331(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_607(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_331(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_331(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_607(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_331(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_331(joaat("WS_RHODES_GRAVE_OPEN"));
			func_607(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_331(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_331(joaat("WS_RHODES_GRAVE_OPEN"));
			func_607(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_331(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_331(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_607(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_331(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_607(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_331(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_607(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_331(joaat("WS_UTOPIA_TREE_MISSION"));
			func_331(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_331(joaat("WS_UTOPIA_TREE_STUMP"));
			func_607(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_331(joaat("WS_UTOPIA_TREE_STANDING"));
			func_331(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_331(joaat("WS_UTOPIA_TREE_STUMP"));
			func_607(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_331(joaat("WS_UTOPIA_TREE_STANDING"));
			func_331(joaat("WS_UTOPIA_TREE_MISSION"));
			func_331(joaat("WS_UTOPIA_TREE_STUMP"));
			func_607(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_331(joaat("WS_UTOPIA_TREE_STANDING"));
			func_331(joaat("WS_UTOPIA_TREE_MISSION"));
			func_331(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_607(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_331(joaat("WS_MICAH_CAMP"));
			func_331(joaat("WS_MICAH_CAMP_POST"));
			func_607(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_331(joaat("WS_MICAH_CAMP_EMPTY"));
			func_331(joaat("WS_MICAH_CAMP_POST"));
			func_607(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_331(joaat("WS_MICAH_CAMP_EMPTY"));
			func_331(joaat("WS_MICAH_CAMP"));
			func_607(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_331(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_607(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_331(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_331(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_310(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_607(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_331(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_331(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_607(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_331(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_607(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_331(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_607(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_331(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_607(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_331(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_607(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_331(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_607(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_331(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_331(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_607(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_331(joaat("WS_NEW_COM_BANK_START"));
			func_331(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_331(joaat("WS_NEW_COM_BANK_AFTER"));
			func_331(joaat("WS_NEW_COM_BANK_POST"));
			func_607(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_331(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_331(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_331(joaat("WS_NEW_COM_BANK_AFTER"));
			func_331(joaat("WS_NEW_COM_BANK_POST"));
			func_607(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_331(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_331(joaat("WS_NEW_COM_BANK_START"));
			func_331(joaat("WS_NEW_COM_BANK_AFTER"));
			func_331(joaat("WS_NEW_COM_BANK_POST"));
			func_607(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_331(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_331(joaat("WS_NEW_COM_BANK_START"));
			func_331(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_331(joaat("WS_NEW_COM_BANK_POST"));
			func_607(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_331(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_331(joaat("WS_NEW_COM_BANK_START"));
			func_331(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_331(joaat("WS_NEW_COM_BANK_AFTER"));
			func_607(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_331(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_607(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_331(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_607(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_331(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_607(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_331(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_331(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_607(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_607(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_607(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_607(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_331(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_607(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_607(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_607(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_607(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_607(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_331(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_607(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_331(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_607(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_331(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_607(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_331(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_607(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_331(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_607(0);
			func_331(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_331(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_607(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_331(0);
			func_331(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_607(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_331(0);
			func_331(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_607(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_331(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_607(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_331(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_607(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_607(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_607(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_607(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_331(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_607(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_331(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_331(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_331(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_607(joaat("WS_SHADY_BELLE_ABANDON"));
			func_331(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_331(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_607(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_331(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_331(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_607(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_331(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_607(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_331(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_310(iParam0))
				{
					func_607(iParam0);
				}
			}
			else if (func_310(iParam0))
			{
				func_331(iParam0);
			}
			break;
	}
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

float func_399(var uParam0)
{
	if (!func_610(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_611(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_612() - uParam0->f_1);
}

bool func_400()
{
	return (Global_1894899 & 2) != 0;
}

bool func_401()
{
	return Global_1898164.f_163;
}

int func_402(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1[15];
	int iVar17;
	int iVar18;
	int iVar19;

	func_614(iParam0);
	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 20;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = 21;
			iVar1[4] = 16;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 0;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = 0;
			iVar1[7] = 15;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 5;
			break;
	}
	iVar19 = 0;
	while (iVar19 < 15)
	{
		if (iVar1[iVar19] != -1)
		{
			if (func_615(iVar1[iVar19], 1, 1) && func_616(iVar1[iVar19], 0) == 0)
			{
				iVar18 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_402(iVar1[iVar19]));
				iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (iVar17 == iVar18)
				{
					if (iParam0 != iVar1[iVar19])
					{
						if (iVar0 == -1)
						{
							if (func_617(Global_35, func_402(iVar1[iVar19]), 1, 1) < 35.0f)
							{
								iVar0 = iVar1[iVar19];
							}
						}
						else if (iVar1[iVar19] != -1)
						{
							if (func_617(Global_35, func_402(iVar0), 1, 1) > func_617(Global_35, func_402(iVar1[iVar19]), 1, 1))
							{
								iVar0 = iVar1[iVar19];
							}
						}
					}
				}
			}
		}
		iVar19++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

bool func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_618(iParam0, &sVar0);
}

void func_405(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 6)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0)))
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
				else if (func_617(func_402(iVar0), Global_35, 1, 1) > func_617(func_402(iVar1), Global_35, 1, 1))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		func_404(func_402(iVar1), "GENERIC_SYMPATHIZE_ON_DISPUTE", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
	}
}

bool func_406(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return false;
	}
	return true;
}

void func_407(int iParam0, var uParam1, var uParam2)
{
	switch (func_357())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 681.5647f, -1167.61f, 44.9204f /*3*/ };
					*uParam2 = 197.2448f;
					break;
				case 1:
					*uParam1 = { 810.8986f, -969.9656f, 53.016f /*3*/ };
					*uParam2 = 134.2209f;
					break;
				case 2:
					*uParam1 = { 864.3746f, -943.9187f, 56.2085f /*3*/ };
					*uParam2 = 150.086f;
					break;
				case 3:
					*uParam1 = { 933.3844f, -911.3843f, 59.72f /*3*/ };
					*uParam2 = 135.8932f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -67.4627f, 7.3844f, 92.8657f /*3*/ };
					*uParam2 = 131.3534f;
					break;
				case 1:
					*uParam1 = { -116.7554f, 188.6082f, 93.8397f /*3*/ };
					*uParam2 = 140.8986f;
					break;
				case 2:
					*uParam1 = { -87.3227f, 244.034f, 101.5532f /*3*/ };
					*uParam2 = 177.536f;
					break;
				case 3:
					*uParam1 = { -68.581f, 371.115f, 112.856f /*3*/ };
					*uParam2 = 206.1627f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 1786.846f, -1789.869f, 48.3654f /*3*/ };
					*uParam2 = 243.2151f;
					break;
				case 1:
					*uParam1 = { 1579.342f, -1728.154f, 53.9348f /*3*/ };
					*uParam2 = 246.6603f;
					break;
				case 2:
					*uParam1 = { 1453.837f, -1691.054f, 65.0555f /*3*/ };
					*uParam2 = 234.7165f;
					break;
				case 3:
					*uParam1 = { 1287f, -1603.052f, 64.1451f /*3*/ };
					*uParam2 = 273.4906f;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2374.944f, 1312.075f, 107.3511f /*3*/ };
					*uParam2 = 35.4268f;
					break;
				case 1:
					*uParam1 = { 2394.57f, 1225.873f, 100.4456f /*3*/ };
					*uParam2 = 329.851f;
					break;
				case 2:
					*uParam1 = { 2406.418f, 1114.158f, 95.6929f /*3*/ };
					*uParam2 = 21.6707f;
					break;
				case 3:
					*uParam1 = { 2391.831f, 1001.5f, 87.3075f /*3*/ };
					*uParam2 = 346.1555f;
					break;
			}
			break;
		default:
			*uParam1 = { 0.0f, 0.0f, 0.0f /*3*/ };
			break;
	}
}

void func_408()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			PED::_0xA7DC9266ED6A4E51(func_402(iVar0));
		}
		iVar0++;
	}
}

int func_409(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	Vector3 vVar14;

	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 12:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 13:
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 3:
			iVar1[0] = 2;
			iVar1[1] = 9;
			iVar1[2] = 1;
			iVar1[3] = 8;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
	}
	iVar13 = 0;
	while (iVar13 < 9)
	{
		if (iVar1[iVar13] != -1)
		{
			if (func_615(iVar1[iVar13], 1, 1) && func_616(iVar1[iVar13], 0) == 0)
			{
				vVar14 = { ENTITY::GET_ENTITY_COORDS(func_402(iVar1[iVar13]), true, false) /*3*/ };
				if (CAM::IS_SPHERE_VISIBLE(vVar14, 1.25f) == 0 || bParam1 == 0)
				{
					iVar12 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_402(iVar1[iVar13]));
					iVar11 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
					if (iVar11 == iVar12)
					{
						if (iParam0 != iVar1[iVar13])
						{
							if (iVar0 == -1)
							{
								if (func_617(Global_35, func_402(iVar1[iVar13]), 1, 1) < 25.0f || bParam1)
								{
									iVar0 = iVar1[iVar13];
								}
							}
							else if (iVar1[iVar13] != -1)
							{
								if (func_617(Global_35, func_402(iVar0), 1, 1) > func_617(Global_35, func_402(iVar1[iVar13]), 1, 1))
								{
									iVar0 = iVar1[iVar13];
								}
							}
						}
					}
				}
			}
		}
		iVar13++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

bool func_410(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

char* func_411()
{
	return "script@common@cnv_camp@grief@knockout@knockout";
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_griefing_ko_back_leadin";
		case 1:
			return "pbl_griefing_ko_back_noleadin";
		case 2:
			return "pbl_griefing_ko_front";
		case 3:
			return "pbl_griefing_ko_back_noleadin";
		default:
			break;
	}
	return "pbl_griefing_ko_back_leadin";
}

bool func_413(int iParam0)
{
	return func_619(iParam0, 16, 1);
}

void func_414()
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	vVar0.f_2 = (vVar0.z + 0.5f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iVar6 = func_402(Global_1357549.f_1645);
	vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), 0.0f, -1.5f, 0.0f) /*3*/ };
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar7, &(vVar7.f_2), false);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar7, true, false, true, true);
	if (func_369(Global_35, 0))
	{
		vVar3.f_2 = ENTITY::GET_ENTITY_HEADING(Global_35);
	}
	vVar7.f_2 = (vVar7.z + 0.25f);
	if (func_620(iVar6, Global_1357549.f_1663[0], 1, 0) || func_620(Global_35, Global_1357549.f_1663[0], 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90.0f);
		if (func_357() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f /*3*/ };
		}
		else if (func_357() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f /*3*/ };
		}
		else if (func_357() == 6)
		{
			vVar0 = { 2357.898f, 1372.787f, 105.298f /*3*/ };
		}
	}
	if (func_620(iVar6, Global_1357549.f_1663[1], 1, 0) || func_620(Global_35, Global_1357549.f_1663[1], 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90.0f);
		if (func_357() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f /*3*/ };
		}
		else if (func_357() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f /*3*/ };
		}
		else if (func_357() == 6)
		{
			vVar0 = { 2346.387f, 1352.174f, 105.0121f /*3*/ };
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549.f_1636, vVar0, vVar3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1636, "player_one", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1636, "CS_GENSTORYMALE", iVar6, 0);
}

void func_415(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

int func_416(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_410(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || (Global_1391438.f_5 & 8) != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_621(iParam0, 2, 1))
			{
				func_622(iParam0, 2, 1);
			}
			if (func_619(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_623(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_422(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_369(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_369(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_624(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_623(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_625(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_623(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_625(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_621(iParam0, 44, 0))
			{
				func_623(iParam0, 44, 0);
			}
			if (func_626(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_625(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171 /*PCF_0x6868B572*/, true);
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_622(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130 /*PCF_DisableTalkTo*/, false);
			func_627(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_628(iParam0, 0, 0, 1);
			}
			func_622(iParam0, 33, 1);
			func_622(iParam0, 34, 1);
			func_622(iParam0, 29, 1);
			if (!func_213(vVar0) && bParam7)
			{
				func_625(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_625(iParam0, 4);
			}
			else
			{
				func_625(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_624(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_629(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, (1 << 30));
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_625(iParam0, 4);
			}
			else
			{
				func_625(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_630(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_631(iParam0, iParam13, 0);
						func_632(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_621(iParam0, 25, 0))
						{
							func_622(iParam0, 25, 0);
						}
						func_623(iParam0, 66, 0);
						func_625(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_625(iParam0, 5);
				}
				func_623(iParam0, 28, 1);
			}
			else
			{
				func_625(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_625(iParam0, 6);
			}
			break;
		case 6:
			if (func_369(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[iParam0 /*1157*/], 0.0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0.0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_633(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_634(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_625(iParam0, 7);
		case 7:
			func_627(iParam0, bParam9, bParam15, 0);
			func_635(iParam0, 4, bParam11);
			func_636(iParam0);
			if (bParam20)
			{
				if (func_637(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_638(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_625(iParam0, 0);
			func_639(iParam0, 16, 1);
			func_622(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_417()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(func_402(iVar0), 343 /*PCF_0x8FD863AF*/, true))
			{
				PED::SET_PED_CONFIG_FLAG(func_402(iVar0), 343 /*PCF_0x8FD863AF*/, false);
			}
		}
		iVar0++;
	}
}

char* func_418()
{
	return "CUT_THAT_OUT";
}

void func_419()
{
	int iVar0;

	if (func_369(Global_35, 0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::DETACH_CARRIABLE_ENTITY(iVar0, false, false);
				PED::SET_PED_TO_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 10000, 10000, 0, false, false, 0);
			}
		}
	}
}

void func_420(var uParam0, bool bParam1)
{
	if (bParam1 || !func_610(uParam0))
	{
		func_640(uParam0);
	}
}

int func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_641(iParam0);
	iVar3 = func_642(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_177();
				func_643(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_644(iParam0, 1);
			if (func_645(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_646(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_647(1, iParam0);
				}
				else
				{
					func_648(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_422(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_410(iParam0))
	{
		return;
	}
	if (func_413(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_623(iParam0, 56, 1);
		func_420(&(Global_1359489.f_40), 1);
	}
	func_649(iParam0, 0);
	func_635(iParam0, 4, 0);
	func_650(iParam0);
	func_636(iParam0);
	func_622(iParam0, 37, 1);
	bVar0 = func_369(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_651(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true) && (Global_1359489.f_16 & (1 << 23)) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, false);
	}
	if (func_621(iParam0, 64, 1))
	{
		func_622(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_622(iParam0, 33, 1);
		func_622(iParam0, 34, 1);
		func_652(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_627(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_623(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_623(iParam0, 35, 1);
			if (bParam8)
			{
				func_623(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_653(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_622(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_623(iParam0, 33, 1);
		func_627(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_420(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_427(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_623(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_654(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_621(iParam0, 45, 1))
	{
		func_622(iParam0, 45, 1);
	}
	func_655(iParam0, 16, 1);
	func_622(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_369(func_656(iParam0), 0))
		{
			func_657(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_423()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			if (func_615(iVar0, 1, 1))
			{
				PERSCHAR::_0xD4B614179BCD0654(func_651(iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_424(float fParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, joaat("WORLD_PLAYER_SLEEP_GROUND"), 750, false, 0, -1.0f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.0f, BUILTIN::FLOOR(fParam0) * 1000, 0.0f, true, false);
	if (func_369(Global_35, 0))
	{
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_426();
}

void func_425()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_658(iVar0, 1, 0))
		{
			if (func_659(iVar0))
			{
				iVar2 = func_660(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::_0x97B06669AC569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_426()
{
	Vector3 vVar0;
	int iVar3;

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.0f, 1.0f);
	if (func_369(Global_35, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	}
	vVar0.f_2 = (vVar0.z - 2.0f);
	iVar3 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar3))
	{
		CAM::POINT_CAM_AT_COORD(iVar3, vVar0);
		CAM::SHAKE_CAM(iVar3, "HAND_SHAKE", 1.0f);
	}
}

void func_427(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_428(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_27() != -1)
	{
		return;
	}
	if ((Global_36616 & func_661(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_662(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_663(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_664(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_663(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_429(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590.f_19547)
	{
		Global_1327590.f_19547[iParam0 /*5*/].f_4 = 1;
	}
}

int func_430(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

void func_431(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_666(func_665(iParam0)) /*3*/ };
	Global_36308[iParam0] = MAP::BLIP_ADD_FOR_COORDS(func_667(func_430(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_36308[iParam0], func_668(func_430(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_36308[iParam0], func_430(iParam0), iParam0);
}

void func_432(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = Global_1888801[iParam0 /*35*/].f_20;
	bVar1 = func_210(iParam0, 32);
	if (iVar0 == 8)
	{
		return;
	}
	if ((!bVar1 && iVar0 != 3) && iVar0 != 4)
	{
		return;
	}
	bVar2 = false;
	if (Global_1572887.f_12 == -1 && iParam0 == func_98())
	{
		if (((((((iParam0 != 58 || func_669()) && !func_555(4)) && !func_670(67)) && !func_339(67)) && !(func_70(43) && !func_70(44))) && !(func_70(59) && !func_70(60))) && !func_672(func_671(iParam0), (1 << 13)))
		{
			bVar2 = true;
			iVar3 = 52;
			if (func_70(70))
			{
				iVar3 = 46;
			}
			else
			{
				iVar3 = 52;
			}
		}
	}
	else
	{
		switch (Global_1888801[iParam0 /*35*/].f_20)
		{
			case 3:
				bVar2 = false;
				break;
			case 4:
				if (Global_1888801[iParam0 /*35*/].f_13 != -1)
				{
					func_673(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
					Global_1888801[iParam0 /*35*/].f_13 = -1;
				}
				break;
			case 6:
				break;
		}
	}
	if (bVar2)
	{
	}
	if (bVar2 && !bParam2)
	{
		if (Global_1888801[iParam0 /*35*/].f_13 == -1)
		{
			Global_1888801[iParam0 /*35*/].f_14 = iVar3;
			Global_1888801[iParam0 /*35*/].f_13 = func_674(iParam0, iVar3, Global_1888801[iParam0 /*35*/].f_15, -1);
			func_675(iParam0, iVar3, Global_1888801[iParam0 /*35*/].f_15, &(Global_1888801[iParam0 /*35*/].f_22));
			if (iParam0 == 9)
			{
				if (MAP::DOES_BLIP_EXIST(Global_36308[Global_1888801[iParam0 /*35*/].f_13]))
				{
					MAP::SET_BLIP_COORDS(Global_36308[Global_1888801[iParam0 /*35*/].f_13], Global_1888801[iParam0 /*35*/].f_15);
					MAP::BLIP_ADD_MODIFIER(Global_36308[Global_1888801[iParam0 /*35*/].f_13], joaat("BLIP_MODIFIER_SHOW_HEIGHT"));
				}
			}
			if (Global_1572887.f_12 == -1)
			{
				if (iVar3 == 52 && Global_1357549.f_1708)
				{
					func_676(Global_1888801[iParam0 /*35*/].f_13, joaat("BLIP_STYLE_CAMP_HIDDEN"));
				}
			}
		}
		else if (Global_1888801[iParam0 /*35*/].f_14 != iVar3 || Global_1888801[iParam0 /*35*/].f_18)
		{
			func_673(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
			Global_1888801[iParam0 /*35*/].f_13 = -1;
			func_280(iParam0, (1 << 10));
			Global_1888801[iParam0 /*35*/].f_18 = 0;
		}
	}
	else if (Global_1888801[iParam0 /*35*/].f_13 != -1)
	{
		func_673(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
		Global_1888801[iParam0 /*35*/].f_13 = -1;
		func_280(iParam0, (1 << 10));
	}
	if (func_210(iParam0, 64))
	{
		func_280(iParam0, 64);
		func_677(iParam0);
	}
	if (bVar4)
	{
		if (!func_210(iParam0, (1 << 10)))
		{
			if (func_678(iParam0, iVar3, joaat("BLIP_MODIFIER_HIDEOUT_ABANDONED")))
			{
				func_322(iParam0, (1 << 10));
			}
		}
	}
	else if (func_210(iParam0, (1 << 10)))
	{
		if (func_679(iParam0, iVar3, joaat("BLIP_MODIFIER_HIDEOUT_ABANDONED")))
		{
			func_280(iParam0, (1 << 10));
		}
	}
}

void func_433(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_210(iParam0, 2))
		{
			func_680(iParam0, Global_36);
		}
		else if (func_210(iParam0, 1))
		{
			func_681(iParam0, 0);
		}
		else
		{
			func_682(iParam0, Global_36, bParam1);
		}
	}
}

bool func_434(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 11;
		case 2:
			return 30;
		case 3:
			return 33;
		case 4:
			return 37;
		case 7:
			return 40;
		case 6:
			return 50;
		case 8:
			return 57;
		case 9:
			return 62;
		case 10:
			return 77;
		case 11:
			return 93;
		case 12:
			return 107;
		case 13:
			return 114;
		case 14:
			return 117;
		case 15:
			return 120;
		case 16:
			return 126;
		default:
			break;
	}
	return -1;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 29;
		case 2:
			return 32;
		case 3:
			return 36;
		case 4:
			return 39;
		case 7:
			return 49;
		case 6:
			return 56;
		case 8:
			return 61;
		case 9:
			return 76;
		case 10:
			return 92;
		case 11:
			return 106;
		case 12:
			return 113;
		case 13:
			return 116;
		case 14:
			return 119;
		case 15:
			return 125;
		case 16:
			return 127;
		default:
			break;
	}
	return -1;
}

int func_437(var uParam0)
{
	switch (Global_1897952.f_41)
	{
		case 11:
			if (Global_1894899.f_4 != 9)
			{
				Global_1894899.f_4 = 9;
			}
			else
			{
				Global_1894899.f_4 = 77;
				*uParam0 = 1;
			}
			return 1;
		case 2:
			if (Global_1894899.f_4 != 3)
			{
				Global_1894899.f_4 = 3;
			}
			*uParam0 = 1;
			return 1;
		case 0:
			if (Global_1894899.f_4 != 95)
			{
				Global_1894899.f_4 = 95;
			}
			*uParam0 = 1;
			return 1;
		case 9:
		case 10:
			if (Global_1894899.f_4 != 128)
			{
				Global_1894899.f_4 = 128;
			}
			*uParam0 = 1;
			return 1;
		case 13:
			if (Global_1894899.f_4 != 117)
			{
				Global_1894899.f_4 = 117;
			}
			else
			{
				Global_1894899.f_4 = 129;
				*uParam0 = 1;
			}
			return 1;
	}
	return 0;
}

bool func_438(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_683(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

void func_439()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_102(Global_36, 1);
	iVar1 = func_195();
	iVar2 = func_684();
	if (func_287(iVar0) && 32 != iVar0)
	{
		iVar3 = Global_1888801[iVar0 /*35*/].f_4;
		if (VOLUME::DOES_VOLUME_EXIST(iVar3) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iVar3, false, 0))
		{
			func_386(iVar0, iVar1, iVar2, func_685(0), -1, 1);
		}
		else
		{
			func_386(-1, iVar1, iVar2, func_685(0), -1, 1);
		}
	}
	else
	{
		func_386(iVar0, iVar1, iVar2, func_685(0), -1, 1);
	}
}

bool func_440(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;
	struct<2> /*16*/ sVar3;
	var uVar6;

	func_686(iParam3, &vVar0, &sVar3, &uVar6);
	if (func_687(vParam0, vVar0, sVar3.f_0, sVar3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return joaat("MAP_HIDEOUT_PIKES_BASIN");
		case 31:
			return joaat("MAP_HIDEOUT_SOLOMONS_FOLLY");
		case 24:
			return joaat("MAP_LANDMARK_BLACK_BONE_FOREST");
		case 38:
			return joaat("MAP_LANDMARK_BROKEN_TREE");
		case 18:
			return joaat("MAP_LANDMARK_BRITTLEBRUSH_TRAWL");
		case 23:
			return joaat("MAP_LANDMARK_CHADWICK_FARM");
		case 44:
			return joaat("MAP_LANDMARK_CLINGMAN");
		case 26:
			return joaat("MAP_LANDMARK_CUEVO_SECO");
		case 40:
			return joaat("MAP_LANDMARK_FACE_ROCK");
		case 30:
			return joaat("MAP_LANDMARK_GREENHOLLOW");
		case 4:
			return joaat("MAP_LANDMARK_ODDFELLOWS_REST");
		case 22:
			return joaat("MAP_LANDMARK_PLEASANCE_HOUSE");
		case 5:
			return joaat("MAP_LANDMARK_RATTLESNAKE_HOLLOW");
		case 10:
			return joaat("MAP_LANDMARK_REPENTANCE");
		case 36:
			return joaat("MAP_LANDMARK_RIO_DEL_LOBO_HOUSE");
		case 1:
			return joaat("MAP_LANDMARK_SCRATCHING_POST");
		case 6:
			return joaat("MAP_LANDMARK_SILENT_STEAD");
		case 7:
			return joaat("MAP_LANDMARK_THE_HANGING_ROCK");
		case 41:
			return joaat("MAP_SHACK_GRIZZLIES3");
		case 43:
			return joaat("MAP_SHACK_RARE_FISH_SHACK");
		case 42:
			return joaat("MAP_SPECIAL_SHACK_BEECHERS_B");
		case 21:
			return joaat("MAP_LANDMARK_VENTERS_PLACE");
		case 45:
			return joaat("MAP_SHACK_TRAPPERS_CABIN");
		case 46:
			return joaat("MAP_LANDMARK_OLD_TOMS_BLIND");
		case 47:
			return joaat("MAP_LANDMARK_PRINZ_CO");
		case 48:
			return joaat("MAP_LANDMARK_HOUSEBOAT");
		case 49:
			return joaat("MAP_LANDMARK_STILLWATER_CABIN");
		case 50:
			return joaat("MAP_LANDMARK_NEKOTI_ROCK");
		default:
			break;
	}
	return 0;
}

bool func_442(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_443(Vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> /*40*/ sVar15;
	struct<5> /*40*/ sVar20;
	var uVar25;
	var uVar26;

	fVar2 = 9999999.0f;
	func_688(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_689() == 0 && !func_690(0))
		{
			bVar14 = true;
		}
	}
	if (!func_264(15, &sVar15))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	VOLUME::_0x748C5F51A18CB8F0(false);
	sVar20 = { sVar15 /*5*/ };
	if (bParam7)
	{
		bVar10 = func_691();
		if (VOLUME::DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_287(Global_1310720.f_21))
	{
		fParam10 = iParam11;
	}
	sVar15.f_2 = 723128514;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar25, &sVar15);
	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar15.f_0, uVar25) > iVar0)
	{
		iVar1 = 0;
		sVar20.f_2 = -1148748386;
		sVar20.f_3 = iVar0;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar26, &sVar20);
		while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar20.f_0, uVar26) > iVar1)
		{
			vVar7 = { func_692(iVar0, iVar1) /*3*/ };
			bVar11 = func_693(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_213(vVar7)) && func_694(iVar0, bParam8, iParam12)) && !func_695(iVar0)) || bVar11)
			{
				if (func_696(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 /*3*/ };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(true);
					return vVar4;
				}
			}
		}
	}
}

bool func_444(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_445(int iParam0)
{
	if (func_444(iParam0, 1))
	{
		func_697(1);
	}
}

int func_446(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_698(vParam0, 0.0f, 0.0f, 0, 2);
	return func_698(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_447(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam0, &uParam1, 10, iParam11);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

int func_448(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

void func_449(int iParam0)
{
	struct<16> /*128*/ sVar0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { sVar0 /*16*/ };
	Global_1934603.f_161--;
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

bool func_450(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

void func_451(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (!func_450(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 |= iParam1;
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 |= iParam1;
}

void func_452(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 -= (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1);
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 -= (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1);
}

void func_453(int iParam0, bool bParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_547(func_699(iParam0));
	}
	else
	{
		func_700(func_699(iParam0));
	}
}

int func_454(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

void func_455(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_2 = iParam1;
}

void func_456(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (func_548(iParam0))
	{
		func_549(iParam0);
	}
	else
	{
		func_701(iParam0);
	}
}

bool func_457(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return func_210(iParam0, (1 << 24));
}

int func_458(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

int func_459(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_207(iParam0))
	{
		return 0;
	}
	iVar0 = func_702(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_703(func_460(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_460(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_1;
	}
	return Global_1058888.f_40545[iParam0 /*11*/].f_1;
}

bool func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_260(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_259(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_258(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_263(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_262(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_261(iParam0);
	if (iVar5 < 1 || iVar5 > func_704(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_462(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_1 = iParam1;
}

void func_463(int iParam0, int iParam1)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0 /*11*/].f_3 = iParam1;
}

void func_464(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (func_285(iParam0) && func_286(iParam0))
	{
		func_547(func_506(iParam0));
	}
	else
	{
		func_700(func_506(iParam0));
	}
}

void func_465(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	if (!func_591(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] |= iParam1;
		return;
	}
	Global_1058888.f_42269[iParam0] |= iParam1;
}

void func_466(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] -= (Global_40.f_431[iParam0] & iParam1);
		return;
	}
	Global_1058888.f_42269[iParam0] -= (Global_1058888.f_42269[iParam0] & iParam1);
}

void func_467(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_233(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_705(iParam0);
	if (bParam1)
	{
		func_547(iVar0);
	}
	else
	{
		func_700(iVar0);
	}
}

int func_468()
{
	return 0;
}

bool func_469(int iParam0)
{
	switch (func_27())
	{
		case -1:
			return (Global_1357549.f_1494 & iParam0) != 0;
	}
	return false;
}

int func_470(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	int iVar17;

	iVar0 = func_468();
	iVar1[0] = -1687561002;
	iVar1[1] = 1957225320;
	iVar1[2] = -860696938;
	iVar5[0] = -1971474291;
	iVar5[1] = -1425946870;
	iVar5[2] = -1114426126;
	iVar9[0] = -316909020;
	iVar9[1] = -1962893335;
	iVar9[2] = 1351589798;
	iVar13[0] = 300868838;
	iVar13[1] = -1788578071;
	iVar13[2] = 1157066259;
	if (((func_706() || func_576(Global_1347702[59 /*49*/].f_15)) || func_576(Global_1347702[0 /*49*/].f_15)) || func_707(64))
	{
		iVar13[0] = -316909020;
		iVar13[1] = -1962893335;
		iVar13[2] = 1351589798;
		if (iParam0 == 0)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(300868838))
			{
				STREAMING::REMOVE_IPL_HASH(300868838);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(-1788578071))
			{
				STREAMING::REMOVE_IPL_HASH(-1788578071);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(1157066259))
			{
				STREAMING::REMOVE_IPL_HASH(1157066259);
			}
		}
		if (func_708(Global_1835011[9 /*74*/].f_1) == 0 && func_576(Global_1835011[9 /*74*/].f_1) == 0)
		{
			if (iParam0 == 0)
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
				{
					STREAMING::REMOVE_IPL_HASH(1475953931);
				}
				if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
				{
					STREAMING::REMOVE_IPL_HASH(1475953931);
				}
				if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
				{
					STREAMING::REMOVE_IPL_HASH(1475953931);
				}
			}
		}
	}
	if (((((func_708(Global_1835011[9 /*74*/].f_1) || func_576(Global_1835011[9 /*74*/].f_1)) || func_709()) || func_297() == 2) || func_576(Global_1347702[66 /*49*/].f_15)) || ((func_576(Global_1835011[10 /*74*/].f_1) && func_70(11)) && func_707(64) == 0))
	{
		iVar9[0] = 1475953931;
		iVar9[1] = 1475953931;
		iVar9[2] = 1475953931;
		iVar13[0] = 1475953931;
		iVar13[1] = 1475953931;
		iVar13[2] = 1475953931;
	}
	else
	{
		iVar9[0] = -316909020;
		iVar9[1] = -1962893335;
		iVar9[2] = 1351589798;
	}
	if (func_710() || func_576(Global_1835011[4 /*74*/].f_1))
	{
		iVar5[0] = iVar1[0];
		iVar5[1] = iVar1[1];
		iVar5[2] = iVar1[2];
	}
	if (func_711(1) && iParam0 == 1)
	{
		iVar1[0] = -1971474291;
		iVar1[1] = -1425946870;
		iVar1[2] = -1114426126;
		iVar5[0] = -1687561002;
		iVar5[1] = 1957225320;
		iVar5[2] = -860696938;
		iVar17 = 0;
		while (iVar17 < 3)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar1[iVar17]))
			{
				STREAMING::REMOVE_IPL_HASH(iVar1[iVar17]);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar5[iVar17]))
			{
				STREAMING::REMOVE_IPL_HASH(iVar5[iVar17]);
			}
			iVar17++;
		}
		return func_712();
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_713(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = func_713(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

int func_471(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];

	iVar0 = func_468();
	iVar1[0] = 1209017192;
	iVar1[1] = -2143243848;
	iVar1[2] = 510052409;
	iVar5[0] = -644575724;
	iVar5[1] = 291770965;
	iVar5[2] = 1700661865;
	iVar9[0] = 1070723367;
	iVar9[1] = 1070723367;
	iVar9[2] = 1070723367;
	if ((((((func_708(Global_1835011[22 /*74*/].f_1) || func_576(Global_1835011[22 /*74*/].f_1)) || func_708(Global_1835011[26 /*74*/].f_1)) || func_576(Global_1835011[26 /*74*/].f_1)) || ((func_576(Global_1835011[20 /*74*/].f_1) || func_70(20)) && func_70(22) == 0)) || (((func_576(Global_1835011[19 /*74*/].f_1) || (func_113(Global_1898437) == 19 && func_714())) || func_70(19)) && func_70(22) == 0)) && func_707(64) == 0)
	{
		if (iParam0 == 0)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(-109425099))
			{
				STREAMING::REMOVE_IPL_HASH(-109425099);
			}
		}
		iVar13[0] = 1261237250;
		iVar13[1] = 1261237250;
		iVar13[2] = 1261237250;
		iVar9[0] = 1261237250;
		iVar9[1] = 1261237250;
		iVar9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(1261237250))
			{
				STREAMING::REMOVE_IPL_HASH(1261237250);
			}
		}
		iVar13[0] = -109425099;
		iVar13[1] = -109425099;
		iVar13[2] = -109425099;
	}
	if ((((func_708(Global_1835011[23 /*74*/].f_1) || func_576(Global_1835011[23 /*74*/].f_1)) || (((func_70(22) && func_70(23) == 0) && func_70(24)) && (func_339(20) || func_70(20)))) || (((func_70(22) && func_70(23) == 0) && func_70(20)) && (func_339(24) || func_70(24)))) || func_707(64))
	{
		if (iParam0 == 0)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(1070723367))
			{
				STREAMING::REMOVE_IPL_HASH(1070723367);
			}
		}
		iVar9[0] = -109425099;
		iVar9[1] = -109425099;
		iVar9[2] = -109425099;
	}
	if (func_710())
	{
		iVar5[0] = iVar1[0];
		iVar5[1] = iVar1[1];
		iVar5[2] = iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_713(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = func_713(&iVar13, &iVar9, bParam1);
			break;
	}
	return iVar0;
}

int func_472(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];

	iVar0 = func_468();
	iVar1[0] = 531106429;
	iVar1[1] = 531106429;
	iVar1[2] = 531106429;
	iVar5[0] = 1069611813;
	iVar5[1] = 1069611813;
	iVar5[2] = 1069611813;
	iVar9[0] = 1102643191;
	iVar9[1] = 1102643191;
	iVar9[2] = 1102643191;
	iVar13[0] = 44502487;
	iVar13[1] = 44502487;
	iVar13[2] = 44502487;
	if ((((((func_708(Global_1835011[57 /*74*/].f_1) || func_576(Global_1835011[57 /*74*/].f_1)) || func_708(Global_1835011[59 /*74*/].f_1)) || func_576(Global_1835011[59 /*74*/].f_1)) || func_708(Global_1835011[58 /*74*/].f_1)) || func_576(Global_1835011[58 /*74*/].f_1)) || func_715())
	{
		iVar13[0] = 1102643191;
		iVar13[1] = 1102643191;
		iVar13[2] = 1102643191;
		if (iParam0 == 0)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(44502487))
			{
				STREAMING::REMOVE_IPL_HASH(44502487);
			}
		}
	}
	if (func_710())
	{
		iVar5[0] = iVar1[0];
		iVar5[1] = iVar1[1];
		iVar5[2] = iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_713(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = func_713(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

void func_473(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	bool bVar58;
	bool bVar59;

	iVar0[0] = joaat("UPGRADE_PCC_SEATINGWOLFHEAD_01"); /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[0] = -268335331;
	iVar38[0] = func_712();
	iVar0[1] = joaat("UPGRADE_PCC_CRAFTEDARTHURCHEST_01"); /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = 1546110128;
	iVar38[1] = -855912354;
	iVar0[2] = joaat("UPGRADE_PCC_CRAFTEDROOL_01"); /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 324486076;
	iVar38[2] = func_712();
	iVar0[3] = joaat("UPGRADE_PCC_CRAFTEDTABLE_01"); /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = -2052582076;
	iVar38[3] = -402976431;
	iVar0[4] = joaat("UPGRADE_PCC_RAMSKULL_01"); /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = 1029525997;
	iVar38[4] = func_712();
	iVar0[5] = joaat("UPGRADE_PCC_ALLIGATORSKULL_01"); /* GXTEntry: "Alligator Skull" */
	iVar19[5] = -1472352094;
	iVar38[5] = func_712();
	iVar0[6] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -745860880;
	iVar38[6] = func_712();
	iVar0[7] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1219276914;
	iVar38[7] = func_712();
	iVar0[8] = joaat("UPGRADE_PCC_COVERBOAR_01"); /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2104773585;
	iVar38[8] = func_712();
	iVar0[9] = joaat("UPGRADE_PCC_GRNDCOVERCOW_01"); /* GXTEntry: "Lean-to Cow Hide Ground Cover" */
	iVar19[9] = -302735166;
	iVar38[9] = func_712();
	iVar0[10] = joaat("UPGRADE_PCC_PRONGHORNSKULL_01"); /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -2077690059;
	iVar38[10] = func_712();
	iVar0[11] = joaat("UPGRADE_PCC_SCOUTFIREELKANTLERS_01"); /* GXTEntry: "Elk Antlers" */
	iVar19[11] = 1548546221;
	iVar38[11] = func_712();
	iVar0[12] = joaat("UPGRADE_PCC_SCOUTFIREGCOVER_01"); /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = 2101101756;
	iVar38[12] = func_712();
	iVar0[13] = joaat("UPGRADE_PCC_HANGINGBONES_01"); /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 1560807181;
	iVar38[13] = func_712();
	iVar0[14] = joaat("UPGRADE_PCC_MOUNTEDMOOSEANTLERS_01"); /* GXTEntry: "Moose Antlers" */
	iVar19[14] = 106249677;
	iVar38[14] = func_712();
	iVar0[15] = joaat("UPGRADE_PCC_FURCOVERSCRATE_01"); /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -723982773;
	iVar38[15] = func_712();
	iVar0[16] = joaat("UPGRADE_PCC_BANJOSNAKESKIN_01"); /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = 327932996;
	iVar38[16] = func_712();
	iVar0[17] = joaat("UPGRADE_PCC_WOLFSKULL_01"); /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -15722296;
	iVar38[17] = func_712();
	bVar59 = false;
	if (iParam0 == 1)
	{
		iVar57 = func_716(iVar0[Global_1357549.f_575], 3);
		bVar58 = func_717(iVar0[Global_1357549.f_575]);
		bVar59 = (iVar57 > 0 || bVar58);
		if (bVar59 || bParam1)
		{
			if (func_238(iVar19[Global_1357549.f_575]))
			{
				if (!STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
				{
					func_241(iVar19[Global_1357549.f_575], 1);
					func_718(iVar19[Global_1357549.f_575]);
				}
				if (func_238(iVar38[Global_1357549.f_575]))
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]))
					{
						STREAMING::REMOVE_IPL_HASH(iVar38[Global_1357549.f_575]);
					}
				}
			}
		}
		else
		{
			if (func_238(iVar19[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
				{
					func_241(iVar19[Global_1357549.f_575], 0);
					STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
				}
			}
			if (func_238(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]) == 0)
				{
					STREAMING::REQUEST_IPL_HASH(iVar38[Global_1357549.f_575]);
				}
			}
		}
	}
	if (iParam0 != 1 || func_297() == 2)
	{
		if (func_238(iVar38[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]))
			{
				STREAMING::REMOVE_IPL_HASH(iVar38[Global_1357549.f_575]);
			}
		}
		if (func_238(iVar19[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
			{
				func_241(iVar19[Global_1357549.f_575], 0);
				STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
			}
		}
	}
}

void func_474(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];

	iVar0[0] = joaat("UPGRADE_PCC_GRNDCOVERCOW_01"); /* GXTEntry: "Lean-to Cow Hide Ground Cover" */
	iVar19[0] = joaat("CLE_UPG_CAMPFIRE_RUG_COW");
	iVar38[0] = func_712();
	iVar0[1] = joaat("UPGRADE_PCC_CRAFTEDARTHURCHEST_01"); /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = -1774140220;
	iVar38[1] = -262271608;
	iVar0[2] = joaat("UPGRADE_PCC_CRAFTEDROOL_01"); /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 1601820048;
	iVar38[2] = func_712();
	iVar0[3] = joaat("UPGRADE_PCC_CRAFTEDTABLE_01"); /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = 2025485344;
	iVar38[3] = 901520480;
	iVar0[4] = joaat("UPGRADE_PCC_RAMSKULL_01"); /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = -1999465365;
	iVar38[4] = func_712();
	iVar0[5] = joaat("UPGRADE_PCC_ALLIGATORSKULL_01"); /* GXTEntry: "Alligator Skull" */
	iVar19[5] = 853723410;
	iVar38[5] = func_712();
	iVar0[6] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = 1169958167;
	iVar38[6] = func_712();
	iVar0[7] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = -792944828;
	iVar38[7] = func_712();
	iVar0[8] = joaat("UPGRADE_PCC_COVERBOAR_01"); /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2001921071;
	iVar38[8] = func_712();
	iVar0[9] = joaat("UPGRADE_PCC_HANGINGBONES_01"); /* GXTEntry: "Hanging Bones" */
	iVar19[9] = 157361403;
	iVar38[9] = func_712();
	iVar0[10] = joaat("UPGRADE_PCC_PRONGHORNSKULL_01"); /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -492479795;
	iVar38[10] = func_712();
	iVar0[11] = joaat("UPGRADE_PCC_SCOUTFIREELKANTLERS_01"); /* GXTEntry: "Elk Antlers" */
	iVar19[11] = -1284301817;
	iVar38[11] = func_712();
	iVar0[12] = joaat("UPGRADE_PCC_SCOUTFIREGCOVER_01"); /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = -1045282549;
	iVar38[12] = func_712();
	iVar0[13] = joaat("UPGRADE_PCC_MOUNTEDMOOSEANTLERS_01"); /* GXTEntry: "Moose Antlers" */
	iVar19[13] = -989202374;
	iVar38[13] = func_712();
	iVar0[14] = joaat("UPGRADE_PCC_SEATINGWOLFHEAD_01"); /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 1538837441;
	iVar38[14] = func_712();
	iVar0[15] = joaat("UPGRADE_PCC_FURCOVERSCRATE_01"); /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 530288130;
	iVar38[15] = func_712();
	iVar0[16] = joaat("UPGRADE_PCC_BANJOSNAKESKIN_01"); /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = -1887167048;
	iVar38[16] = func_712();
	iVar0[17] = joaat("UPGRADE_PCC_WOLFSKULL_01"); /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -347518940;
	iVar38[17] = func_712();
	if (iParam0 == 2)
	{
		if ((func_716(iVar0[Global_1357549.f_575], 3) > 0 || func_717(iVar0[Global_1357549.f_575])) || bParam1)
		{
			if (func_238(iVar19[Global_1357549.f_575]))
			{
				if (!STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
				{
					func_241(iVar19[Global_1357549.f_575], 1);
					func_718(iVar19[Global_1357549.f_575]);
				}
			}
			if (func_238(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]))
				{
					STREAMING::REMOVE_IPL_HASH(iVar38[Global_1357549.f_575]);
				}
			}
		}
		else
		{
			if (func_238(iVar19[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
				{
					func_241(iVar19[Global_1357549.f_575], 0);
					STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
				}
			}
			if (func_238(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]) == 0)
				{
					STREAMING::REQUEST_IPL_HASH(iVar38[Global_1357549.f_575]);
				}
			}
		}
	}
	if (iParam0 != 2 || func_297() != 1)
	{
		if (func_238(iVar38[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]))
			{
				STREAMING::REMOVE_IPL_HASH(iVar38[Global_1357549.f_575]);
			}
		}
		if (func_238(iVar19[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
			{
				func_241(iVar19[Global_1357549.f_575], 0);
				STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
			}
		}
	}
}

void func_475(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;

	iVar0[0] = joaat("UPGRADE_PCC_GRNDCOVERCOW_01"); /* GXTEntry: "Lean-to Cow Hide Ground Cover" */
	iVar19[0] = -134624703;
	iVar0[1] = joaat("UPGRADE_PCC_CRAFTEDARTHURCHEST_01"); /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = func_468();
	iVar0[2] = joaat("UPGRADE_PCC_CRAFTEDROOL_01"); /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = func_468();
	iVar0[3] = joaat("UPGRADE_PCC_CRAFTEDTABLE_01"); /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = func_468();
	iVar0[4] = joaat("UPGRADE_PCC_RAMSKULL_01"); /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = func_468();
	iVar0[5] = joaat("UPGRADE_PCC_ALLIGATORSKULL_01"); /* GXTEntry: "Alligator Skull" */
	iVar19[5] = func_468();
	iVar0[6] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = joaat("UPGRADE_PCC_COVERBOAR_01"); /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = func_468();
	iVar0[9] = joaat("UPGRADE_PCC_PRONGHORNSKULL_01"); /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = joaat("UPGRADE_PCC_SCOUTFIREELKANTLERS_01"); /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = joaat("UPGRADE_PCC_SCOUTFIREGCOVER_01"); /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = joaat("UPGRADE_PCC_MOUNTEDMOOSEANTLERS_01"); /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = joaat("UPGRADE_PCC_HANGINGBONES_01"); /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = joaat("UPGRADE_PCC_SEATINGWOLFHEAD_01"); /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = joaat("UPGRADE_PCC_FURCOVERSCRATE_01"); /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = joaat("UPGRADE_PCC_WOLFSKULL_01"); /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = joaat("UPGRADE_PCC_BANJOSNAKESKIN_01"); /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((func_719(iVar0[Global_1357549.f_575], 1, 0) || func_717(iVar0[Global_1357549.f_575])) || bParam1))
	{
		if (func_238(iVar19[Global_1357549.f_575]))
		{
			if (!STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
			{
				func_241(iVar19[Global_1357549.f_575], 1);
				func_718(iVar19[Global_1357549.f_575]);
			}
		}
	}
	else if (func_238(iVar19[Global_1357549.f_575]))
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
		{
			func_241(iVar19[Global_1357549.f_575], 0);
			STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
		}
	}
	iVar38[0] = joaat("UPGRADE_PCC_COVERBOAR_01"); /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = joaat("UPGRADE_PCC_CRAFTEDARTHURCHEST_01"); /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = joaat("UPGRADE_PCC_CRAFTEDROOL_01"); /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = joaat("UPGRADE_PCC_RAMSKULL_01"); /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = joaat("UPGRADE_PCC_CRAFTEDTABLE_01"); /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = joaat("UPGRADE_PCC_ALLIGATORSKULL_01"); /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = func_716(iVar38[iVar52], 3);
			bVar54 = func_717(iVar38[iVar52]);
			bVar55 = (iVar53 > 0 || bVar54);
		}
		if (bVar55 || bParam1)
		{
			if (func_552(iVar45[iVar52]) == 0)
			{
				func_304(iVar45[iVar52]);
			}
		}
		else if (func_552(iVar45[iVar52]))
		{
			func_314(iVar45[iVar52]);
		}
		iVar52++;
	}
}

void func_476(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	bool bVar58;
	bool bVar59;

	iVar0[0] = joaat("UPGRADE_PCC_GRNDCOVERCOW_01"); /* GXTEntry: "Lean-to Cow Hide Ground Cover" */
	iVar19[0] = 1104800593;
	iVar38[0] = func_712();
	iVar0[1] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[1] = 968084866;
	iVar38[1] = func_712();
	iVar0[2] = joaat("UPGRADE_PCC_COVERPRONGHORN_01"); /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[2] = -696422730;
	iVar38[2] = func_712();
	iVar0[3] = joaat("UPGRADE_PCC_PRONGHORNSKULL_01"); /* GXTEntry: "Pronghorn Skull" */
	iVar19[3] = 1423158124;
	iVar38[3] = func_712();
	iVar0[4] = joaat("UPGRADE_PCC_COVERBOAR_01"); /* GXTEntry: "Boar Skin Rug" */
	iVar19[4] = -1063259251;
	iVar38[4] = func_712();
	iVar0[5] = joaat("UPGRADE_PCC_CRAFTEDARTHURCHEST_01"); /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[5] = -317096325;
	iVar38[5] = 1025787994;
	iVar0[6] = joaat("UPGRADE_PCC_CRAFTEDROOL_01"); /* GXTEntry: "Ox Hide Rug" */
	iVar19[6] = -1255331540;
	iVar38[6] = func_712();
	iVar0[7] = joaat("UPGRADE_PCC_CRAFTEDTABLE_01"); /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[7] = -1063926197;
	iVar38[7] = 629519239;
	iVar0[8] = joaat("UPGRADE_PCC_RAMSKULL_01"); /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[8] = 360408116;
	iVar38[8] = func_712();
	iVar0[9] = joaat("UPGRADE_PCC_ALLIGATORSKULL_01"); /* GXTEntry: "Alligator Skull" */
	iVar19[9] = -408234235;
	iVar38[9] = func_712();
	iVar0[10] = joaat("UPGRADE_PCC_SCOUTFIREELKANTLERS_01"); /* GXTEntry: "Elk Antlers" */
	iVar19[10] = -1016007592;
	iVar38[10] = func_712();
	iVar0[11] = joaat("UPGRADE_PCC_SCOUTFIREGCOVER_01"); /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = -763678874;
	iVar38[11] = func_712();
	iVar0[12] = joaat("UPGRADE_PCC_MOUNTEDMOOSEANTLERS_01"); /* GXTEntry: "Moose Antlers" */
	iVar19[12] = -1361342903;
	iVar38[12] = func_712();
	iVar0[13] = joaat("UPGRADE_PCC_HANGINGBONES_01"); /* GXTEntry: "Hanging Bones" */
	iVar19[13] = -483001024;
	iVar38[13] = func_712();
	iVar0[14] = joaat("UPGRADE_PCC_SEATINGWOLFHEAD_01"); /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 255767990;
	iVar38[14] = func_712();
	iVar0[15] = joaat("UPGRADE_PCC_FURCOVERSCRATE_01"); /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -2048221620;
	iVar38[15] = func_712();
	iVar0[16] = joaat("UPGRADE_PCC_WOLFSKULL_01"); /* GXTEntry: "Wolf Skull" */
	iVar19[16] = 339295570;
	iVar38[16] = func_712();
	iVar0[17] = joaat("UPGRADE_PCC_BANJOSNAKESKIN_01"); /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 668976634;
	iVar38[17] = func_712();
	bVar59 = false;
	if (iParam0 == 6)
	{
		iVar57 = func_716(iVar0[Global_1357549.f_575], 3);
		bVar58 = func_717(iVar0[Global_1357549.f_575]);
		bVar59 = (iVar57 > 0 || bVar58);
		if (bVar59 || bParam1)
		{
			if (func_238(iVar19[Global_1357549.f_575]))
			{
				if (!STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
				{
					func_241(iVar19[Global_1357549.f_575], 1);
					func_718(iVar19[Global_1357549.f_575]);
				}
			}
			if (func_238(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]))
				{
					STREAMING::REMOVE_IPL_HASH(iVar38[Global_1357549.f_575]);
				}
			}
		}
		else
		{
			if (func_238(iVar19[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
				{
					func_241(iVar19[Global_1357549.f_575], 0);
					STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
				}
			}
			if (func_238(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]) == 0)
				{
					STREAMING::REQUEST_IPL_HASH(iVar38[Global_1357549.f_575]);
				}
			}
		}
	}
	if (iParam0 != 6 || func_297() != 1)
	{
		if (func_238(iVar38[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar38[Global_1357549.f_575]))
			{
				STREAMING::REMOVE_IPL_HASH(iVar38[Global_1357549.f_575]);
			}
		}
		if (func_238(iVar19[Global_1357549.f_575]))
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar19[Global_1357549.f_575]))
			{
				func_241(iVar19[Global_1357549.f_575], 0);
				STREAMING::REMOVE_IPL_HASH(iVar19[Global_1357549.f_575]);
			}
		}
	}
}

int func_477(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (iParam0 == 16)
	{
		iVar0 = Global_40.f_4283.f_312;
	}
	else
	{
		iVar0 = func_720(iParam0, 0);
	}
	return iVar0;
}

float func_478()
{
	return Global_1357549.f_1900;
}

void func_479(int iParam0, int iParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar86;
	int iVar87;

	sVar0 = 17;
	sVar0.f_1 = 4;
	sVar0.f_1.f_5 = 4;
	sVar0.f_1.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0[15 /*5*/][0] = func_712();
	sVar0[15 /*5*/][1] = func_712();
	sVar0[15 /*5*/][2] = 1079303588;
	sVar0[15 /*5*/][3] = 1079303588;
	sVar0[10 /*5*/][0] = -937893311;
	sVar0[10 /*5*/][1] = -937893311;
	sVar0[10 /*5*/][2] = -937893311;
	sVar0[10 /*5*/][3] = joaat("ABI1_ARRIVE");
	sVar0[11 /*5*/][0] = func_712();
	sVar0[11 /*5*/][1] = func_712();
	sVar0[11 /*5*/][2] = func_712();
	sVar0[11 /*5*/][3] = func_712();
	sVar0[12 /*5*/][0] = func_712();
	sVar0[12 /*5*/][1] = func_712();
	sVar0[12 /*5*/][2] = func_712();
	sVar0[12 /*5*/][3] = func_712();
	sVar0[13 /*5*/][0] = func_712();
	sVar0[13 /*5*/][1] = func_712();
	sVar0[13 /*5*/][2] = func_712();
	sVar0[13 /*5*/][3] = func_712();
	sVar0[9 /*5*/][0] = -1365193577;
	sVar0[9 /*5*/][1] = -1166561064;
	sVar0[9 /*5*/][2] = -1166561064;
	sVar0[9 /*5*/][3] = -1166561064;
	sVar0[8 /*5*/][0] = -1620486708;
	sVar0[8 /*5*/][1] = -1620486708;
	sVar0[8 /*5*/][2] = -1620486708;
	sVar0[8 /*5*/][3] = 163126540;
	sVar0[7 /*5*/][0] = 1808508475;
	sVar0[7 /*5*/][1] = 1808508475;
	sVar0[7 /*5*/][2] = 1808508475;
	sVar0[7 /*5*/][3] = 2015311123;
	sVar0[6 /*5*/][0] = -1576393943;
	sVar0[6 /*5*/][1] = -1576393943;
	sVar0[6 /*5*/][2] = -1576393943;
	sVar0[6 /*5*/][3] = -1920340119;
	sVar0[5 /*5*/][0] = -1563072795;
	sVar0[5 /*5*/][1] = -1563072795;
	sVar0[5 /*5*/][2] = 607574432;
	sVar0[5 /*5*/][3] = 607574432;
	sVar0[4 /*5*/][0] = -1987982797;
	sVar0[4 /*5*/][1] = -1987982797;
	sVar0[4 /*5*/][2] = -1987982797;
	sVar0[4 /*5*/][3] = -1933895237;
	sVar0[3 /*5*/][0] = -182995231;
	sVar0[3 /*5*/][1] = -182995231;
	sVar0[3 /*5*/][2] = 1267297807;
	sVar0[3 /*5*/][3] = 1267297807;
	sVar0[0 /*5*/][0] = func_712();
	sVar0[0 /*5*/][1] = -1150137955;
	sVar0[0 /*5*/][2] = -1150137955;
	sVar0[0 /*5*/][3] = -1150137955;
	sVar0[1 /*5*/][0] = func_712();
	sVar0[1 /*5*/][1] = func_712();
	sVar0[1 /*5*/][2] = func_712();
	sVar0[1 /*5*/][3] = func_712();
	sVar0[2 /*5*/][0] = func_712();
	sVar0[2 /*5*/][1] = func_712();
	sVar0[2 /*5*/][2] = func_712();
	sVar0[2 /*5*/][3] = func_712();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (sVar0[iVar87 /*5*/][iVar86] != func_712())
			{
				if ((iVar86 + 1 == func_720(iVar87, 1) && iParam0 == 1) && bParam2)
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(sVar0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::REQUEST_IPL_HASH(sVar0[iVar87 /*5*/][iVar86]);
						func_721(sVar0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((sVar0[iVar87 /*5*/][(func_720(iVar87, 1) - 1)] != sVar0[iVar87 /*5*/][iVar86] || iParam0 != 1) || bParam2 == 0)
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(sVar0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::REMOVE_IPL_HASH(sVar0[iVar87 /*5*/][iVar86]);
						func_721(sVar0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_480(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	struct<16> /*128*/ sVar1;
	int iVar50;
	int iVar51;
	int iVar52;

	if (fParam1 < 30.0f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75.0f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	sVar1 = 3;
	sVar1.f_1 = 3;
	sVar1.f_1.f_1 = 4;
	sVar1.f_1.f_1.f_5 = 4;
	sVar1.f_1.f_1.f_5.f_5 = 4;
	sVar1.f_1.f_16 = 3;
	sVar1.f_1.f_16.f_1 = 4;
	sVar1.f_1.f_16.f_1.f_5 = 4;
	sVar1.f_1.f_16.f_1.f_5.f_5 = 4;
	sVar1.f_1.f_16.f_16 = 3;
	sVar1.f_1.f_16.f_16.f_1 = 4;
	sVar1.f_1.f_16.f_16.f_1.f_5 = 4;
	sVar1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	sVar1[0 /*16*/][0 /*5*/][0] = func_712();
	sVar1[1 /*16*/][0 /*5*/][0] = func_712();
	sVar1[2 /*16*/][0 /*5*/][0] = func_712();
	sVar1[0 /*16*/][0 /*5*/][1] = -710911638;
	sVar1[1 /*16*/][0 /*5*/][1] = -710911638;
	sVar1[2 /*16*/][0 /*5*/][1] = -710911638;
	sVar1[0 /*16*/][0 /*5*/][2] = -942555699;
	sVar1[1 /*16*/][0 /*5*/][2] = -942555699;
	sVar1[2 /*16*/][0 /*5*/][2] = -942555699;
	sVar1[0 /*16*/][0 /*5*/][3] = -760097927;
	sVar1[1 /*16*/][0 /*5*/][3] = -760097927;
	sVar1[2 /*16*/][0 /*5*/][3] = -760097927;
	sVar1[0 /*16*/][1 /*5*/][0] = func_712();
	sVar1[1 /*16*/][1 /*5*/][0] = func_712();
	sVar1[2 /*16*/][1 /*5*/][0] = func_712();
	sVar1[0 /*16*/][1 /*5*/][1] = 2047954825;
	sVar1[1 /*16*/][1 /*5*/][1] = 2047954825;
	sVar1[2 /*16*/][1 /*5*/][1] = 2047954825;
	sVar1[0 /*16*/][1 /*5*/][2] = -2085723453;
	sVar1[1 /*16*/][1 /*5*/][2] = -2085723453;
	sVar1[2 /*16*/][1 /*5*/][2] = -2085723453;
	sVar1[0 /*16*/][1 /*5*/][3] = 1434945142;
	sVar1[1 /*16*/][1 /*5*/][3] = 1434945142;
	sVar1[2 /*16*/][1 /*5*/][3] = 1434945142;
	sVar1[0 /*16*/][2 /*5*/][0] = 1924209179;
	sVar1[1 /*16*/][2 /*5*/][0] = 1924209179;
	sVar1[2 /*16*/][2 /*5*/][0] = 1924209179;
	sVar1[0 /*16*/][2 /*5*/][1] = -2084193212;
	sVar1[1 /*16*/][2 /*5*/][1] = -2084193212;
	sVar1[2 /*16*/][2 /*5*/][1] = -2084193212;
	sVar1[0 /*16*/][2 /*5*/][2] = -838184752;
	sVar1[1 /*16*/][2 /*5*/][2] = -838184752;
	sVar1[2 /*16*/][2 /*5*/][2] = -838184752;
	sVar1[0 /*16*/][2 /*5*/][3] = -1433138716;
	sVar1[1 /*16*/][2 /*5*/][3] = -1433138716;
	sVar1[2 /*16*/][2 /*5*/][3] = -1433138716;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50] != func_712())
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_722(iVar51)) && iParam0 == 1) && bParam2)
					{
						if (!STREAMING::IS_IPL_ACTIVE_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::REQUEST_IPL_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
					else if ((sVar1[iVar0 /*16*/][iVar51 /*5*/][(func_722(iVar51) - 1)] != sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50] || iParam0 != 1) || bParam2 == 0)
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::REMOVE_IPL_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_481(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<5> /*40*/ sVar0;
	int iVar86;
	int iVar87;

	sVar0 = 17;
	sVar0.f_1 = 4;
	sVar0.f_1.f_5 = 4;
	sVar0.f_1.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0[15 /*5*/][0] = func_712();
	sVar0[15 /*5*/][1] = func_712();
	sVar0[15 /*5*/][2] = -1147256587;
	sVar0[15 /*5*/][3] = -1147256587;
	sVar0[10 /*5*/][0] = -1247551347;
	sVar0[10 /*5*/][1] = -1247551347;
	sVar0[10 /*5*/][2] = -1247551347;
	sVar0[10 /*5*/][3] = -1010466481;
	sVar0[11 /*5*/][0] = func_712();
	sVar0[11 /*5*/][1] = func_712();
	sVar0[11 /*5*/][2] = func_712();
	sVar0[11 /*5*/][3] = func_712();
	sVar0[12 /*5*/][0] = func_712();
	sVar0[12 /*5*/][1] = func_712();
	sVar0[12 /*5*/][2] = func_712();
	sVar0[12 /*5*/][3] = func_712();
	sVar0[13 /*5*/][0] = func_712();
	sVar0[13 /*5*/][1] = func_712();
	sVar0[13 /*5*/][2] = func_712();
	sVar0[13 /*5*/][3] = func_712();
	sVar0[9 /*5*/][0] = -160392273;
	sVar0[9 /*5*/][1] = 1049842342;
	sVar0[9 /*5*/][2] = 1049842342;
	sVar0[9 /*5*/][3] = 1049842342;
	sVar0[8 /*5*/][0] = 1674800958;
	sVar0[8 /*5*/][1] = 1674800958;
	sVar0[8 /*5*/][2] = 1674800958;
	sVar0[8 /*5*/][3] = 2728487;
	sVar0[7 /*5*/][0] = 1636281938;
	sVar0[7 /*5*/][1] = 1636281938;
	sVar0[7 /*5*/][2] = 1636281938;
	sVar0[7 /*5*/][3] = 1084869405;
	sVar0[6 /*5*/][0] = -1451784475;
	sVar0[6 /*5*/][1] = -1451784475;
	sVar0[6 /*5*/][2] = -1451784475;
	sVar0[6 /*5*/][3] = 1128417383;
	sVar0[5 /*5*/][0] = -2016771661;
	sVar0[5 /*5*/][1] = -2016771661;
	sVar0[5 /*5*/][2] = 202127432;
	sVar0[5 /*5*/][3] = 202127432;
	sVar0[4 /*5*/][0] = -546137515;
	sVar0[4 /*5*/][1] = -546137515;
	sVar0[4 /*5*/][2] = -546137515;
	sVar0[4 /*5*/][3] = 1679038623;
	if (bParam3)
	{
		func_723(1);
	}
	else
	{
		func_723(0);
	}
	sVar0[3 /*5*/][0] = 1742990618;
	sVar0[3 /*5*/][1] = 1742990618;
	sVar0[3 /*5*/][2] = -751959361;
	sVar0[3 /*5*/][3] = -751959361;
	sVar0[0 /*5*/][0] = func_712();
	sVar0[0 /*5*/][1] = func_712();
	sVar0[0 /*5*/][2] = -2000080725;
	sVar0[0 /*5*/][3] = -2000080725;
	sVar0[1 /*5*/][0] = 2123887232;
	sVar0[1 /*5*/][1] = 2123887232;
	sVar0[1 /*5*/][2] = 2123887232;
	sVar0[1 /*5*/][3] = 2123887232;
	sVar0[2 /*5*/][0] = 102652153;
	sVar0[2 /*5*/][1] = 102652153;
	sVar0[2 /*5*/][2] = 102652153;
	sVar0[2 /*5*/][3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (sVar0[iVar87 /*5*/][iVar86] != func_712())
			{
				if ((iVar86 + 1 == func_720(iVar87, 1) && iParam0 == 2) && bParam2)
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(sVar0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::REQUEST_IPL_HASH(sVar0[iVar87 /*5*/][iVar86]);
						func_721(sVar0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((sVar0[iVar87 /*5*/][(func_720(iVar87, 1) - 1)] != sVar0[iVar87 /*5*/][iVar86] || iParam0 != 2) || bParam2 == 0)
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(sVar0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::REMOVE_IPL_HASH(sVar0[iVar87 /*5*/][iVar86]);
						func_721(sVar0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_482(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<16> /*128*/ sVar1;
	int iVar50;
	int iVar51;
	int iVar52;

	if (fParam1 < 30.0f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75.0f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	sVar1 = 3;
	sVar1.f_1 = 3;
	sVar1.f_1.f_1 = 4;
	sVar1.f_1.f_1.f_5 = 4;
	sVar1.f_1.f_1.f_5.f_5 = 4;
	sVar1.f_1.f_16 = 3;
	sVar1.f_1.f_16.f_1 = 4;
	sVar1.f_1.f_16.f_1.f_5 = 4;
	sVar1.f_1.f_16.f_1.f_5.f_5 = 4;
	sVar1.f_1.f_16.f_16 = 3;
	sVar1.f_1.f_16.f_16.f_1 = 4;
	sVar1.f_1.f_16.f_16.f_1.f_5 = 4;
	sVar1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	sVar1[0 /*16*/][0 /*5*/][0] = func_712();
	sVar1[1 /*16*/][0 /*5*/][0] = func_712();
	sVar1[2 /*16*/][0 /*5*/][0] = func_712();
	sVar1[0 /*16*/][0 /*5*/][1] = 626928579;
	sVar1[1 /*16*/][0 /*5*/][1] = 626928579;
	sVar1[2 /*16*/][0 /*5*/][1] = 626928579;
	sVar1[0 /*16*/][0 /*5*/][2] = 313722477;
	sVar1[1 /*16*/][0 /*5*/][2] = 313722477;
	sVar1[2 /*16*/][0 /*5*/][2] = 313722477;
	sVar1[0 /*16*/][0 /*5*/][3] = 976082270;
	sVar1[1 /*16*/][0 /*5*/][3] = 976082270;
	sVar1[2 /*16*/][0 /*5*/][3] = 976082270;
	if (bParam3)
	{
		sVar1[0 /*16*/][1 /*5*/][0] = func_712();
		sVar1[1 /*16*/][1 /*5*/][0] = func_712();
		sVar1[2 /*16*/][1 /*5*/][0] = func_712();
		sVar1[0 /*16*/][1 /*5*/][1] = -1370620659;
		sVar1[1 /*16*/][1 /*5*/][1] = -1370620659;
		sVar1[2 /*16*/][1 /*5*/][1] = -1370620659;
		sVar1[0 /*16*/][1 /*5*/][2] = -624219879;
		sVar1[1 /*16*/][1 /*5*/][2] = -624219879;
		sVar1[2 /*16*/][1 /*5*/][2] = -624219879;
		sVar1[0 /*16*/][1 /*5*/][3] = 715730031;
		sVar1[1 /*16*/][1 /*5*/][3] = 715730031;
		sVar1[2 /*16*/][1 /*5*/][3] = 715730031;
		func_724(1);
	}
	else
	{
		sVar1[0 /*16*/][1 /*5*/][0] = func_712();
		sVar1[1 /*16*/][1 /*5*/][0] = func_712();
		sVar1[2 /*16*/][1 /*5*/][0] = func_712();
		sVar1[0 /*16*/][1 /*5*/][1] = 5585502;
		sVar1[1 /*16*/][1 /*5*/][1] = 5585502;
		sVar1[2 /*16*/][1 /*5*/][1] = 5585502;
		sVar1[0 /*16*/][1 /*5*/][2] = -1362716862;
		sVar1[1 /*16*/][1 /*5*/][2] = -1362716862;
		sVar1[2 /*16*/][1 /*5*/][2] = -1362716862;
		sVar1[0 /*16*/][1 /*5*/][3] = 482931525;
		sVar1[1 /*16*/][1 /*5*/][3] = 482931525;
		sVar1[2 /*16*/][1 /*5*/][3] = 482931525;
		func_724(0);
	}
	sVar1[0 /*16*/][2 /*5*/][0] = -462274808;
	sVar1[1 /*16*/][2 /*5*/][0] = -462274808;
	sVar1[2 /*16*/][2 /*5*/][0] = -462274808;
	sVar1[0 /*16*/][2 /*5*/][1] = -1906732332;
	sVar1[1 /*16*/][2 /*5*/][1] = -1906732332;
	sVar1[2 /*16*/][2 /*5*/][1] = -1906732332;
	sVar1[0 /*16*/][2 /*5*/][2] = -526829;
	sVar1[1 /*16*/][2 /*5*/][2] = -526829;
	sVar1[2 /*16*/][2 /*5*/][2] = -526829;
	sVar1[0 /*16*/][2 /*5*/][3] = -1754422016;
	sVar1[1 /*16*/][2 /*5*/][3] = -1754422016;
	sVar1[2 /*16*/][2 /*5*/][3] = -1754422016;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50] != func_712())
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_722(iVar51)) && iParam0 == 2) && bParam2)
					{
						if (!STREAMING::IS_IPL_ACTIVE_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::REQUEST_IPL_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
					else if ((sVar1[iVar0 /*16*/][iVar51 /*5*/][(func_722(iVar51) - 1)] != sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50] || iParam0 != 2) || bParam2 == 0)
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::REMOVE_IPL_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_483(int iParam0, int iParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar86;
	int iVar87;

	sVar0 = 17;
	sVar0.f_1 = 4;
	sVar0.f_1.f_5 = 4;
	sVar0.f_1.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	sVar0[10 /*5*/][0] = 2036492390;
	sVar0[10 /*5*/][1] = 2036492390;
	sVar0[10 /*5*/][2] = 2036492390;
	sVar0[10 /*5*/][3] = 1865439665;
	sVar0[11 /*5*/][0] = func_712();
	sVar0[11 /*5*/][1] = func_712();
	sVar0[11 /*5*/][2] = func_712();
	sVar0[11 /*5*/][3] = func_712();
	sVar0[12 /*5*/][0] = func_712();
	sVar0[12 /*5*/][1] = func_712();
	sVar0[12 /*5*/][2] = func_712();
	sVar0[12 /*5*/][3] = func_712();
	sVar0[13 /*5*/][0] = func_712();
	sVar0[13 /*5*/][1] = func_712();
	sVar0[13 /*5*/][2] = func_712();
	sVar0[13 /*5*/][3] = func_712();
	sVar0[9 /*5*/][0] = func_712();
	sVar0[9 /*5*/][1] = func_712();
	sVar0[9 /*5*/][2] = func_712();
	sVar0[9 /*5*/][3] = func_712();
	sVar0[8 /*5*/][0] = func_712();
	sVar0[8 /*5*/][1] = func_712();
	sVar0[8 /*5*/][2] = func_712();
	sVar0[8 /*5*/][3] = func_712();
	sVar0[7 /*5*/][0] = -621187540;
	sVar0[7 /*5*/][1] = -621187540;
	sVar0[7 /*5*/][2] = -621187540;
	sVar0[7 /*5*/][3] = 1079213989;
	sVar0[6 /*5*/][0] = -882188392;
	sVar0[6 /*5*/][1] = -882188392;
	sVar0[6 /*5*/][2] = -882188392;
	sVar0[6 /*5*/][3] = 964593693;
	sVar0[5 /*5*/][0] = func_712();
	sVar0[5 /*5*/][1] = func_712();
	sVar0[5 /*5*/][2] = func_712();
	sVar0[5 /*5*/][3] = func_712();
	sVar0[4 /*5*/][0] = -997495998;
	sVar0[4 /*5*/][1] = -997495998;
	sVar0[4 /*5*/][2] = -997495998;
	sVar0[4 /*5*/][3] = -2147051362;
	sVar0[3 /*5*/][0] = -1115840558;
	sVar0[3 /*5*/][1] = -1115840558;
	sVar0[3 /*5*/][2] = 1674493966;
	sVar0[3 /*5*/][3] = 1674493966;
	sVar0[0 /*5*/][0] = func_712();
	sVar0[0 /*5*/][1] = -1618574684;
	sVar0[0 /*5*/][2] = -1618574684;
	sVar0[0 /*5*/][3] = -1618574684;
	sVar0[1 /*5*/][0] = func_712();
	sVar0[1 /*5*/][1] = func_712();
	sVar0[1 /*5*/][2] = func_712();
	sVar0[1 /*5*/][3] = func_712();
	sVar0[2 /*5*/][0] = func_712();
	sVar0[2 /*5*/][1] = func_712();
	sVar0[2 /*5*/][2] = func_712();
	sVar0[2 /*5*/][3] = func_712();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (sVar0[iVar87 /*5*/][iVar86] != func_712())
			{
				if ((iVar86 + 1 == func_720(iVar87, 1) && iParam0 == 3) && bParam2)
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(sVar0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::REQUEST_IPL_HASH(sVar0[iVar87 /*5*/][iVar86]);
						func_721(sVar0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((sVar0[iVar87 /*5*/][(func_720(iVar87, 1) - 1)] != sVar0[iVar87 /*5*/][iVar86] || iParam0 != 3) || bParam2 == 0)
				{
					if (STREAMING::IS_IPL_ACTIVE_HASH(sVar0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::REMOVE_IPL_HASH(sVar0[iVar87 /*5*/][iVar86]);
						func_721(sVar0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_484(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	struct<16> /*128*/ sVar1;
	int iVar50;
	int iVar51;
	int iVar52;
	char* sVar53[4];
	int iVar58;

	if (fParam1 < 30.0f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75.0f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	sVar1 = 3;
	sVar1.f_1 = 3;
	sVar1.f_1.f_1 = 4;
	sVar1.f_1.f_1.f_5 = 4;
	sVar1.f_1.f_1.f_5.f_5 = 4;
	sVar1.f_1.f_16 = 3;
	sVar1.f_1.f_16.f_1 = 4;
	sVar1.f_1.f_16.f_1.f_5 = 4;
	sVar1.f_1.f_16.f_1.f_5.f_5 = 4;
	sVar1.f_1.f_16.f_16 = 3;
	sVar1.f_1.f_16.f_16.f_1 = 4;
	sVar1.f_1.f_16.f_16.f_1.f_5 = 4;
	sVar1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	sVar1[0 /*16*/][0 /*5*/][0] = func_712();
	sVar1[1 /*16*/][0 /*5*/][0] = func_712();
	sVar1[2 /*16*/][0 /*5*/][0] = func_712();
	sVar1[0 /*16*/][0 /*5*/][1] = func_712();
	sVar1[1 /*16*/][0 /*5*/][1] = func_712();
	sVar1[2 /*16*/][0 /*5*/][1] = func_712();
	sVar1[0 /*16*/][0 /*5*/][2] = func_712();
	sVar1[1 /*16*/][0 /*5*/][2] = func_712();
	sVar1[2 /*16*/][0 /*5*/][2] = func_712();
	sVar1[0 /*16*/][0 /*5*/][3] = func_712();
	sVar1[1 /*16*/][0 /*5*/][3] = func_712();
	sVar1[2 /*16*/][0 /*5*/][3] = func_712();
	sVar1[0 /*16*/][1 /*5*/][0] = func_712();
	sVar1[1 /*16*/][1 /*5*/][0] = func_712();
	sVar1[2 /*16*/][1 /*5*/][0] = func_712();
	sVar1[0 /*16*/][1 /*5*/][1] = 1155877447;
	sVar1[1 /*16*/][1 /*5*/][1] = 1155877447;
	sVar1[2 /*16*/][1 /*5*/][1] = 1155877447;
	sVar1[0 /*16*/][1 /*5*/][2] = 928165666;
	sVar1[1 /*16*/][1 /*5*/][2] = 928165666;
	sVar1[2 /*16*/][1 /*5*/][2] = 928165666;
	sVar1[0 /*16*/][1 /*5*/][3] = 2048341166;
	sVar1[1 /*16*/][1 /*5*/][3] = 2048341166;
	sVar1[2 /*16*/][1 /*5*/][3] = 2048341166;
	sVar1[0 /*16*/][2 /*5*/][0] = -414377604;
	sVar1[1 /*16*/][2 /*5*/][0] = -414377604;
	sVar1[2 /*16*/][2 /*5*/][0] = -414377604;
	sVar1[0 /*16*/][2 /*5*/][1] = -109593135;
	sVar1[1 /*16*/][2 /*5*/][1] = -109593135;
	sVar1[2 /*16*/][2 /*5*/][1] = -109593135;
	sVar1[0 /*16*/][2 /*5*/][2] = 990134505;
	sVar1[1 /*16*/][2 /*5*/][2] = 990134505;
	sVar1[2 /*16*/][2 /*5*/][2] = 990134505;
	sVar1[0 /*16*/][2 /*5*/][3] = 1279910772;
	sVar1[1 /*16*/][2 /*5*/][3] = 1279910772;
	sVar1[2 /*16*/][2 /*5*/][3] = 1279910772;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50] != func_712())
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_722(iVar51)) && iParam0 == 3) && bParam2)
					{
						if (!STREAMING::IS_IPL_ACTIVE_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::REQUEST_IPL_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
					else if ((sVar1[iVar0 /*16*/][iVar51 /*5*/][(func_722(iVar51) - 1)] != sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50] || iParam0 != 3) || bParam2 == 0)
					{
						if (STREAMING::IS_IPL_ACTIVE_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::REMOVE_IPL_HASH(sVar1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
	sVar53[0] = "";
	sVar53[1] = "shb_p_ammo01";
	sVar53[2] = "shb_p_ammo02";
	sVar53[3] = "shb_p_ammo03";
	iVar58 = INTERIOR::GET_INTERIOR_AT_COORDS(1906.472f, -1862.567f, 46.362f);
	iVar50 = 0;
	while (iVar50 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar53[iVar50]) == 0)
		{
			if (((iVar50 + 1 == func_722(0) && iParam0 == 3) && bParam2) && (Global_1357549.f_1495 & 8) != 0 == 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, sVar53[iVar50]) == 0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar58, sVar53[iVar50], 0);
				}
			}
			else if (((iParam0 != 3 || iVar50 + 1 != func_722(0)) || bParam2 == 0) || (Global_1357549.f_1495 & 8) != 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, sVar53[iVar50]))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar58, sVar53[iVar50], true);
				}
			}
		}
		iVar50++;
	}
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;

	fVar8 = 25.0f;
	switch (iParam0)
	{
		case 2:
			iVar0 = joaat("PIROGUE");
			iVar1 = 4;
			vVar3 = { 623.54f, -1251.056f, 40.2502f /*3*/ };
			fVar6 = 137.4389f;
			iVar2 = 8194;
			break;
		case 3:
			iVar0 = joaat("PIROGUE");
			iVar1 = 4;
			vVar3 = { 1908.325f, -1816.88f, 40.456f /*3*/ };
			fVar6 = 251.3719f;
			iVar2 = 8194;
			break;
		default:
			iVar0 = 0;
			iVar1 = 100;
			vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
			fVar6 = 0.0f;
			iVar2 = 0;
			break;
	}
	iVar7 = VEHICLE::GET_CLOSEST_VEHICLE(vVar3, fVar8, iVar0, iVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		Global_1357549.f_1674 = iVar7;
		ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar7, fVar6);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, true);
	}
	if (iParam1 >= iVar1 && iVar0 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674) == 0 && ENTITY::DOES_ENTITY_EXIST(iVar7) == 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1357549.f_1674 = VEHICLE::CREATE_VEHICLE(iVar0, vVar3, fVar6, true, true, false, false);
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	else
	{
		func_725();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_1357549.f_1674, true);
			VEHICLE::_0x6B53F4B811E583D2(Global_1357549.f_1674, true);
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_1357549.f_1674) != iVar0)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_1357549.f_1674));
		}
	}
}

void func_486(int iParam0, int iParam1)
{
	func_726(iParam0);
}

char* func_487(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua" /* GXTEntry: "Guarma" */;
	}
	return func_727(&(Global_1888801[func_246(iParam0) /*35*/].f_22));
}

char* func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (func_469((1 << 28)))
			{
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_teardown"))
				{
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_teardown");
				}
				return "finale1";
			}
			else
			{
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_finale1"))
				{
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_finale1");
				}
				return "teardown";
			}
			break;
	}
	return "";
}

void func_489(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_22}, 8);
	strcat_s(&cVar0, 64, "_");
	strcat_s(&cVar0, 64, func_728(iParam1));
	strcat_s(&cVar0, 64, "_");
	strcat_s(&cVar0, 64, func_729(iParam2));
	sVar8 = { cVar0 /*8*/ };
	strcat_s(&sVar8, 64, "_setup");
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&sVar8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&sVar8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

bool func_490(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_491(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_730(iParam0);
	}
	else
	{
		func_731(iParam0, iParam1);
	}
	func_732();
}

void func_492(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_493(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_494(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_495(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_496(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_497(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_498(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		func_733(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_499(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_733(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_500(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_733(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_501(bool bParam0)
{
	func_733(&Global_1955864, bParam0);
}

void func_502(bool bParam0)
{
	func_733(&(Global_1415412.f_3), bParam0);
}

void func_503(bool bParam0)
{
	if (func_734(Global_1934051.f_33))
	{
		func_735(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
	}
	func_733(&(Global_1934051.f_33), bParam0);
}

void func_504(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_737(func_736(iVar0));
		if (iVar1 != 0)
		{
			func_735(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		func_733(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_505(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_738(iVar0, -1);
		func_739(iVar0, 0);
		func_740(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
		}
		iVar0++;
	}
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case joaat("RT_NONE"):
			return 0;
		case joaat("RT_TOWN"):
			return 1;
		case joaat("RT_SETTLEMENT"):
			return 2;
		case joaat("RT_HIDEOUT"):
			return 3;
		case joaat("RT_CAMP"):
			return 4;
		case joaat("RT_LANDMARK"):
			return 5;
		case joaat("RT_HUNTINGGROUND"):
			return 6;
		case joaat("RT_HOMESTEAD"):
			return 7;
		case joaat("RT_EVENT_AREA"):
			return 8;
		case joaat("RT_SHACK"):
			return 9;
		default:
			break;
	}
	return 0;
}

Vector3 func_508(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_207(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) /*3*/ };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

bool func_509(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_342())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

void func_510(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_511(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0 + 30] = iParam1;
}

int func_512(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_741(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_513(int* iParam0)
{
	MISC::COPY_SCRIPT_STRUCT(iParam0, &(Global_1879534.f_7301), 243);
}

float func_514(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_515(int iParam0)
{
	return (Global_1392040 & iParam0) != 0;
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

var func_517(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_742(iParam0, iParam1) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

float func_518(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_519(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_528(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

int func_520()
{
	int iVar0;

	if (func_318(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_521(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_522()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_743(iVar0);
		if (func_318(func_744(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_523(int iParam0)
{
	if (func_27() != -1)
	{
		return false;
	}
	if (!func_174(iParam0))
	{
		return false;
	}
	return func_172(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_524(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_525(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 += ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1);
	*uParam0 += ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2);
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 += ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1);
	*uParam1 += ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2);
	*uParam1 += 6;
	iVar0 = func_745(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_745(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_745(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*uParam0 += ((iVar0 + iVar1) + iVar2);
}

var func_526(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_746(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

int func_527()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_747(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> /*16*/ func_528(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

var func_529(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_530(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> /*48*/ sVar2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_46(iParam0))
	{
		return;
	}
	if (func_708(iParam0))
	{
		func_748(iParam0, 0, 2);
	}
	iVar0 = func_749(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] /*6*/ };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { sVar2 /*6*/ };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { sVar2 /*6*/ };
	}
	Global_1898329--;
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_531(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_248(Global_1898330[iParam0]);
		func_750(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

int func_532(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

bool func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_1934765.f_53[iVar1], iVar2);
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar3 == 255)
	{
		return MISC::IS_BIT_SET(Global_1934765.f_53[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1055058[iVar3 /*116*/].f_72.f_28[iVar1], iVar2);
}

bool func_534(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(iParam0, Global_36);
}

void func_535(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_1934765.f_53[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40497.f_28[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72.f_28[iVar1]), iVar2);
		}
	}
}

bool func_536(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

bool func_537(int iParam0, float fParam1)
{
	Vector3 vVar0;
	var uVar3;

	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return false;
	}
	if (!STREAMING::_GET_IPL_BOUNDING_SPHERE(iParam0, &vVar0, &uVar3))
	{
		return false;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar0) <= fParam1)
	{
		return true;
	}
	return false;
}

int func_538(int iParam0)
{
	return iParam0;
}

bool func_539(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_27() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

void func_540(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ASB_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ASB_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_LCMP_FOREMAN"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("AMD_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("AMD_UNDERTAKER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("AMD_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BLW_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BLW_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BLW_POLICE_CHIEF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BRA_STABLE_HAND"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_HMSTD_FOREMAN"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_HMSTD_WORKER_1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_HMSTD_WORKER_2"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_RCAMP_FOREMAN"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EMR_FATHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EMR_SON1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("LAG_MOTHER1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("CRO_RANCHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_FENCE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_TRAIN_STAT_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_BARTENDER_SLUMS"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_SHADY"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_POLICE_CHIEF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_FREIGHT_CLERK"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_WELCOME_CENTER_CLERK"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_BUTCHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_GENERAL_STORE_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_GUNSMITH_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_BARBER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_BUTCHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_DOCTOR"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_HOTEL_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_SLUM_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VHT_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VHT_STATION_CLERK"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VHT_EXOTIC_STORE"), iParam0);
}

int func_541(int iParam0)
{
	bool bVar0;

	bVar0 = func_345(45);
	switch (iParam0)
	{
		case 0:
			if (bVar0)
			{
				return -512973841;
			}
			else
			{
				return 470037909;
			}
			break;
		case 1:
			return -904280534;
		case 3:
			return -1438750434;
		case 6:
			return -41414424;
		case 7:
			return 214708080;
		case 5:
			if (bVar0)
			{
				return -241284918;
			}
			else
			{
				return 218350989;
			}
			break;
		case 8:
			return joaat("TROLLEY_CONFIG");
		case 9:
			return joaat("TROLLEY_CONFIG_1");
		case 10:
			return joaat("TROLLEY_CONFIG_2");
		case 11:
			return 1936859429;
		case 12:
			return -272646696;
		case 2:
		case 4:
			if (bVar0)
			{
				return -634462673;
			}
			else
			{
				return 1824681511;
			}
			break;
	}
	return 0;
}

void func_542(int iParam0, int iParam1)
{
	if (!func_751(iParam0))
	{
		return;
	}
	if (Global_1425371[iParam0 /*373*/].f_8 != iParam1)
	{
		Global_1425371[iParam0 /*373*/].f_8 = iParam1;
		func_752(iParam0, 32);
	}
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 12:
			return -1360990987;
		case 11:
			return 162953686;
		default:
			break;
	}
	return func_541(iParam0);
}

bool func_544()
{
	if (func_27() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_545(int iParam0)
{
	MAP::_MAP_ENABLE_REGION_BLIP(func_506(iParam0), joaat("BLIP_STYLE_SELECTED_REGION"));
}

void func_546(int iParam0)
{
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_506(iParam0), joaat("BLIP_STYLE_SELECTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(func_506(iParam0));
	}
}

void func_547(int iParam0)
{
	int iVar0;

	if (func_275(iParam0) == 57)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else
	{
		iVar0 = joaat("BLIP_STYLE_WANTED_REGION");
		if (((func_753(iParam0) == 4 || func_753(iParam0) == 12) || func_234(func_753(iParam0)) == 4) || (func_591(func_753(iParam0), 8) && ((func_753(iParam0) == 2 || func_753(iParam0) == 0) || func_753(iParam0) == 10)))
		{
			iVar0 = joaat("BLIP_STYLE_REGION_LOCKDOWN");
		}
		MAP::_MAP_ENABLE_REGION_BLIP(iParam0, iVar0);
	}
}

bool func_548(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return func_210(iParam0, (1 << 26));
}

void func_549(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	strcpy_s(&cVar0, 64, func_276(iParam0));
	strcat_s(&cVar0, 64, "_OUTLINE");
	sVar8 = func_754(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), joaat("BLIP_STYLE_WANTED_REGION"));
}

void func_550()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_310(joaat("WS_NO_OIL_DELIVERY_WAGONS")))
	{
		func_337(941);
		func_337(943);
		func_337(944);
		func_337(942);
		func_320(941, 32);
		func_321(941, 0);
		func_320(943, 32);
		func_321(943, 0);
		func_320(944, 32);
		func_321(944, 0);
		func_320(942, 32);
		func_321(942, 0);
	}
	else if (!func_72(0, 0, 1))
	{
		func_319(941, 32);
		func_319(943, 32);
		func_319(944, 32);
		func_338(941);
		func_338(943);
		func_338(944);
	}
	if (func_70(52))
	{
		if (func_539(56, &iVar1, &iVar2, 0, 0))
		{
			iVar0 = 0;
			while (iVar0 < (iVar2 - iVar1) + 1)
			{
				func_320((iVar1 + iVar0), 32);
				func_337((iVar1 + iVar0));
				iVar0++;
			}
		}
	}
	else if (func_539(56, &iVar4, &iVar5, 0, 0))
	{
		iVar3 = 0;
		while (iVar3 < (iVar5 - iVar4) + 1)
		{
			func_319((iVar4 + iVar3), 32);
			func_338((iVar4 + iVar3));
			iVar3++;
		}
	}
	if (func_310(joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE")))
	{
		if (func_310(joaat("WS_PRONGHORN_RANCH_EXIST")))
		{
			if (!func_336(709, 32))
			{
				func_320(709, 32);
				func_337(709);
			}
		}
	}
	else if (func_336(709, 32))
	{
		func_319(709, 32);
		if (func_310(joaat("WS_PRONGHORN_RANCH_EXIST")))
		{
			func_338(709);
		}
	}
	if (func_310(joaat("WS_RHODES_ENDLESS_SUMMER")))
	{
		if (!func_336(111, 32))
		{
			func_320(111, 32);
			func_337(111);
		}
		if (!func_336(112, 32))
		{
			func_320(112, 32);
			func_337(112);
		}
		if (!func_336(113, 32))
		{
			func_320(113, 32);
			func_337(113);
		}
		if (!func_336(114, 32))
		{
			func_320(114, 32);
			func_337(114);
		}
	}
	else
	{
		if (func_336(111, 32))
		{
			func_319(111, 32);
			func_338(111);
		}
		if (func_336(112, 32))
		{
			func_320(112, 32);
			func_338(112);
		}
		if (func_336(113, 32))
		{
			func_320(113, 32);
			func_338(113);
		}
		if (func_336(114, 32))
		{
			func_320(114, 32);
			func_338(114);
		}
	}
}

void func_551()
{
	if (((!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(100);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")))
	{
		func_314(101);
	}
	if (((!func_310(joaat("WS_BEECHERS_BARN_FINISHED")) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_314(102);
	}
	if (!func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_314(103);
	}
	if (!func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_314(104);
	}
	if (!func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_314(105);
	}
	if (!func_310(joaat("WS_BEECHERS_BARN_FINISHED")) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")))
	{
		func_314(107);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(106);
	}
	if ((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(109);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(110);
	}
	if (((!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(111);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_314(112);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_314(113);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_314(114);
	}
	if (((!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(116);
	}
	if ((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(117);
	}
	if (((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"))) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_314(118);
	}
	if ((!func_310(joaat("WS_BEECHERS_SHACK")) && !func_310(joaat("WS_BEECHERS_SHACK_WITH_FIRE"))) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
	{
		func_313(-722030448);
	}
	if (((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_313(joaat("BEE_01_BARN_STAGE05"));
		func_313(1353861354);
	}
	if (((((((!func_310(joaat("WS_BEECHERS_SHACK_WITH_FIRE")) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"))) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FINISHED"))) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
	{
		func_313(578474998);
	}
	if ((((!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(-1667461262);
	}
	if ((((!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")) && !func_310(joaat("WS_BEECHERS_BARN_FINISHED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(joaat("BEE_01_HOUSE_STAGE05"));
		func_313(1467774743);
		func_313(1344772301);
		func_313(joaat("BEE_01_WATERPUMP"));
		func_313(-284612948);
	}
	if (((!func_310(joaat("WS_BEECHERS_BARN_FINISHED")) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(-692583342);
	}
	if (((!func_310(joaat("WS_BEECHERS_BARN_FINISHED")) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(joaat("BEE_01_CAMP_FIRE"));
	}
	if (((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_DECORATED"))) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_313(1236917971);
	}
	if ((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(1532009326);
		func_313(joaat("BEE_CRAFTINGFIRE01"));
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(joaat("BEE_CRAFTINGFIRE01"));
		func_313(joaat("BEE_01_GAZEBO_STAGE05"));
		func_313(637627640);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(1965249616);
		func_313(-2021605623);
		func_313(1649902358);
		func_313(1169279648);
		func_313(joaat("BEE_01_SILO_STAGE05"));
	}
	if (!func_310(joaat("WS_BEECHERS_SHACK")))
	{
		func_313(-904669171);
		func_313(774601424);
		func_313(-584332967);
		func_313(-1615103170);
		func_313(1256771838);
		func_313(-1765152778);
		func_313(-2072231077);
		func_313(19217583);
	}
	if ((!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"))) && !func_310(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_313(349494711);
	}
	if (!func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_313(1205945639);
	}
	func_313(1532774697);
	if (!func_310(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_313(431365499);
		func_313(276582710);
		func_313(1191890045);
		func_313(1864768904);
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_DECORATED")) && !func_310(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_313(-2090209059);
		func_313(1977031606);
		func_313(1929454697);
		func_313(938290967);
	}
	func_313(joaat("BEE_01_SHACK_STAGE01"));
	func_313(joaat("BEE_01_SHACK_STAGE03"));
	if (!func_310(joaat("WS_BEECHERS_SHACK_WITH_FIRE")) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
	{
		func_313(1757739778);
	}
	func_313(joaat("BEE_01_SHACK_STAGE05"));
	if (!func_310(joaat("WS_BEECHERS_SHACK")) && !func_310(joaat("WS_BEECHERS_SHACK_WITH_FIRE")))
	{
		func_313(-1012618146);
	}
	if (!func_310(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE")) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
	{
		func_313(2111816145);
	}
	if (!func_310(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES")) && !func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")))
	{
		func_313(joaat("BEE_01_CAMP"));
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")))
	{
		func_313(-974480336);
	}
	func_313(joaat("BEE_01_HOUSE_STAGE01"));
	func_313(joaat("BEE_01_HOUSE_STAGE02"));
	func_313(joaat("BEE_01_HOUSE_STAGE03"));
	func_313(joaat("BEE_01_CHIMNEY_STAGE01"));
	func_313(joaat("BEE_01_CHIMNEY_STAGE02"));
	if (func_27() == -1)
	{
		if ((((!func_310(joaat("WS_BEECHERS_SHACK")) && !func_310(joaat("WS_BEECHERS_SHACK_WITH_FIRE"))) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"))) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"))) && !func_310(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
		{
			func_313(-1253110600);
			func_313(-1402083909);
			func_313(1970695826);
			func_313(-382865315);
		}
	}
	if (!func_310(joaat("WS_BEECHERS_HOUSE_FINISHED")))
	{
		func_313(-1325016116);
	}
	func_328("nav_mesh_beech_shack");
	func_328("nav_mesh_beech_shack_with_fire");
	func_328("nav_mesh_beech_camp_with_rubble");
	func_328("nav_mesh_beech_house_finished");
	func_328("nav_mesh_beech_barn_finished");
	func_328("nav_mesh_beech_gazebo_finished");
	func_328("nav_mesh_beech_house_decor");
	func_328("nav_mesh_beech_camp_with_supplies");
}

bool func_552(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_21[iVar1], iVar2);
}

int func_553(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_756(iParam0, 1);
	func_757(iVar0);
	if (bParam1)
	{
		func_758(&Global_1899778, iVar0);
	}
	func_759(iVar0);
	return 1;
}

bool func_554(int iParam0, bool bParam1)
{
	if (func_760(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_761(5000))
		{
			return true;
		}
	}
	switch (func_762(0))
	{
		case 0:
			return false;
		case 1:
			if ((iParam0 & 1) != 0)
			{
				return true;
			}
			break;
		case 4:
			if ((iParam0 & 2) != 0)
			{
				return true;
			}
			break;
		case 6:
			if ((iParam0 & 4) != 0)
			{
				return true;
			}
			break;
		case 2:
			if ((iParam0 & 16) != 0)
			{
				return true;
			}
			break;
		case 5:
			if ((iParam0 & 32) != 0)
			{
				return true;
			}
			break;
		case 9:
			if ((iParam0 & 64) != 0)
			{
				return true;
			}
			break;
		case 8:
			if ((iParam0 & 8) != 0)
			{
				return true;
			}
			break;
		case 10:
			if ((iParam0 & (1 << 9)) != 0)
			{
				return true;
			}
			break;
		case 3:
			if ((iParam0 & 128) != 0)
			{
				return true;
			}
			break;
		case 11:
			if ((iParam0 & 256) != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_555(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_708(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_556(int iParam0)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return false;
	}
	iVar0 = func_749(func_316(iParam0));
	if (!func_763(iVar0))
	{
		return false;
	}
	return func_764(iVar0, 4);
}

int func_557(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f /*3*/ };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400.0f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f /*3*/ };
			uParam1->f_8 = 80.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300.0f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f /*3*/ };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2.0f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
			{
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
			{
				uParam1->f_5 = { -1604.0f, -1419.09f, 80.92f /*3*/ };
			}
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
			{
				uParam1->f_5 = { -1604.0f, -1419.09f, 80.92f /*3*/ };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409.0f, 80.92f /*3*/ };
			}
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.0f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0.0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f /*3*/ };
				uParam1->f_8 = 0.0f;
				uParam1->f_9 = 1.0f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.0f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200.0f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f /*3*/ };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0.0f;
				uParam1->f_5 = { 0.0f, 0.0f, 0.0f /*3*/ };
				uParam1->f_8 = 0.0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0.0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f /*3*/ };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100.0f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0.0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f /*3*/ };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150.0f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f /*3*/ };
			uParam1->f_8 = -45.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0.0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f /*3*/ };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f /*3*/ };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2.0f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0.0f, 0.0f, 0.0f /*3*/ };
				uParam1->f_8 = 0.0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f /*3*/ };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f /*3*/ };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f /*3*/ };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f /*3*/ };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f /*3*/ };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f /*3*/ };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f /*3*/ };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147.0f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f /*3*/ };
			uParam1->f_8 = 60.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100.0f;
				uParam1->f_5 = { 0.0f, 0.0f, 0.0f /*3*/ };
				uParam1->f_8 = 0.0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100.0f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000.0f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f /*3*/ };
				uParam1->f_8 = 60.0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250.0f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f /*3*/ };
			uParam1->f_8 = -63.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200.0f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f /*3*/ };
			uParam1->f_8 = 90.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250.0f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f /*3*/ };
			uParam1->f_8 = 135.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_558(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_27() != -1)
	{
		return -1;
	}
	if (Global_1899528.f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_225())
	{
		return -1;
	}
	if (!func_765(uParam0->f_1))
	{
		return -1;
	}
	if (func_285(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_755(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_766(&iVar2))
		{
			return -1;
		}
	}
	func_767(*uParam0, iVar2);
	bVar1 = func_768(uParam0->f_1, (1 << 17));
	func_769(uParam0->f_1);
	iVar3 = func_770(uParam0->f_1, *uParam0);
	Global_1392915[iVar2 /*12*/] = *uParam0;
	Global_1392915[iVar2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[iVar2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[iVar2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[iVar2 /*12*/].f_4 = iVar3;
	Global_1392915[iVar2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[iVar2 /*12*/].f_6 = { uParam0->f_5 /*3*/ };
	Global_1392915[iVar2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[iVar2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[iVar2 /*12*/].f_11 = iVar2;
	Global_1392915.f_121[iVar2 /*20*/] = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[iVar2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[iVar2 /*20*/].f_1 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_6 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[iVar2 /*20*/].f_16 = 0;
	if (Global_1392915.f_121[iVar2 /*20*/].f_12 != 0)
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[iVar2 /*20*/].f_12) /*3*/ };
	}
	else
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	if (bParam1)
	{
		func_771(uParam0->f_1, (1 << 16));
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_771(uParam0->f_1, (1 << 21));
		}
	}
	if (bVar1)
	{
		func_771(uParam0->f_1, (1 << 17));
	}
	if (func_772(iVar3) || (!func_708(iVar3) && func_76(0) != iVar3))
	{
		iVar0 = func_749(iVar3);
		if (iVar0 == -1)
		{
			func_773(iVar3);
		}
	}
	return iVar2;
}

int func_559(int iParam0, int iParam1)
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

bool func_560(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_561(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_562(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_563(int iParam0)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_564(int iParam0)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_565(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return;
	}
	iVar0 = func_774(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

void func_566(int iParam0, int iParam1)
{
	if (!func_562(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

void func_567(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_302(iParam0);
	}
	else
	{
		func_313(iParam0);
	}
}

int func_568(int iParam0, bool bParam1, bool bParam2)
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

bool func_569(int iParam0)
{
	if (func_775(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_570(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_571(int iParam0, bool bParam1)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_572(int iParam0, bool bParam1)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_573(int iParam0, bool bParam1)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_574()
{
	return true;
}

bool func_575(int iParam0)
{
	return iParam0 != 0;
}

bool func_576(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_577(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_578(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_579(Vector3 vParam0)
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_580(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_581(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_582(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_583(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = uParam2;
	sVar0.f_0 = uParam0;
	sVar0.f_2 = uParam1;
	func_776(sVar0);
}

void func_584(var uParam0)
{
	if ((func_369(Global_35, 0) && func_370(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_777(*uParam0);
	}
	if ((!func_369(Global_35, 0) || !func_370(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_587(uParam0);
	}
}

bool func_585(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

void func_586(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
		{
			MISC::SET_BIT(&Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(&Global_1347701, iParam0);
	}
}

void func_587(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_588(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = func_27() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			*uParam1 = 877;
			*uParam2 = 878;
			break;
		case 5:
		case 6:
		case 7:
			*uParam1 = 861;
			*uParam2 = 865;
			break;
		case 9:
			*uParam1 = 866;
			*uParam2 = 867;
			break;
		case 1:
			*uParam1 = 879;
			*uParam2 = 882;
			break;
		case 15:
			*uParam1 = 888;
			*uParam2 = 888;
			break;
		case 10:
			*uParam1 = 902;
			*uParam2 = 903;
			break;
		case 11:
			*uParam1 = 907;
			*uParam2 = 907;
			break;
		case 12:
			*uParam1 = 924;
			*uParam2 = 926;
			break;
		case 0:
			*uParam1 = 927;
			*uParam2 = 927;
			break;
		case 14:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
		case 13:
			*uParam1 = 875;
			*uParam2 = 876;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_589(int iParam0, bool bParam1)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_336(iParam0, 2))
	{
		return 0;
	}
	if (func_336(iParam0, 32) && !bParam1)
	{
		func_566(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_563(iParam0)));
		if (func_27() == -1)
		{
			if (func_336(iParam0, (1 << 11)))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_564(iParam0));
				func_319(iParam0, (1 << 11));
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_564(iParam0));
		}
		return 0;
	}
	if (!func_778(iParam0) && func_27() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_564(iParam0)))
	{
		func_319(iParam0, 128);
		return 1;
	}
	func_566(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_563(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_564(iParam0));
	if (func_336(iParam0, (1 << 11)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_564(iParam0));
		func_319(iParam0, (1 << 11));
	}
	return 1;
}

void func_590(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

bool func_591(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] & iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] & iParam1) != 0;
}

void func_592(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	Global_1934266.f_27[iParam0] = iParam1;
}

bool func_593()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_779())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_72(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_594(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_754(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_781(func_780(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_782(iParam0) || func_345(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN") /* GXTEntry: "Aurora Basin" */:
				sVar0 = "WATER_AURORA_BASIN" /* GXTEntry: "Aurora Basin" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON") /* GXTEntry: "Barrow Lagoon" */:
				sVar0 = "WATER_BARROW_LAGOON" /* GXTEntry: "Barrow Lagoon" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA") /* GXTEntry: "Bayou Nwa" */:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE") /* GXTEntry: "Cairn Lake" */:
				sVar0 = "WATER_CAIRN_LAKE" /* GXTEntry: "Cairn Lake" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND" /* GXTEntry: "Cattail Pond" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER") /* GXTEntry: "Dakota River" */:
				sVar0 = "WATER_DAKOTA_RIVER" /* GXTEntry: "Dakota River" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK") /* GXTEntry: "Deadboot Creek" */:
				sVar0 = "WATER_DEADBOOT_CREEK" /* GXTEntry: "Deadboot Creek" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL") /* GXTEntry: "Elysian Pool" */:
				sVar0 = "WATER_ELYSIAN_POOL" /* GXTEntry: "Elysian Pool" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK") /* GXTEntry: "Hawks Eye Creek" */:
				sVar0 = "WATER_HAWKS_EYE_CREEK" /* GXTEntry: "Hawks Eye Creek" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW") /* GXTEntry: "Heartlands Overflow" */:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS") /* GXTEntry: "Hot Springs" */:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO") /* GXTEntry: "Lake Don Julio" */:
				sVar0 = "WATER_LAKE_DON_JULIO" /* GXTEntry: "Lake Don Julio" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA") /* GXTEntry: "Lake Isabella" */:
				sVar0 = "WATER_LAKE_ISABELLA" /* GXTEntry: "Lake Isabella" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER") /* GXTEntry: "Little Creek River" */:
				sVar0 = "WATER_LITTLE_CREEK_RIVER" /* GXTEntry: "Little Creek River" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER") /* GXTEntry: "Lower Montana River" */:
				sVar0 = "WATER_LOWER_MONTANA_RIVER" /* GXTEntry: "Lower Montana River" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND") /* GXTEntry: "Mattlock Pond" */:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND") /* GXTEntry: "Moonstone Pond" */:
				sVar0 = "WATER_MOONSTONE_POND" /* GXTEntry: "Moonstone Pond" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN" /* GXTEntry: "O\'Creagh\'s Run" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA") /* GXTEntry: "Owanjila" */:
				sVar0 = "WATER_OWANJILA" /* GXTEntry: "Owanjila" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK") /* GXTEntry: "Ringneck Creek" */:
				sVar0 = "WATER_RINGNECK_CREEK" /* GXTEntry: "Ringneck Creek" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO") /* GXTEntry: "Sea of Coronado" */:
				sVar0 = "WATER_SEA_OF_CORONADO" /* GXTEntry: "Sea of Coronado" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS") /* GXTEntry: "Southfield Flats" */:
				sVar0 = "WATER_SOUTHFIELD_FLATS" /* GXTEntry: "Southfield Flats" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE") /* GXTEntry: "Spider Gorge" */:
				sVar0 = "WATER_SPIDER_GORGE" /* GXTEntry: "Spider Gorge" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK") /* GXTEntry: "Stillwater Creek" */:
				sVar0 = "WATER_STILLWATER_CREEK" /* GXTEntry: "Stillwater Creek" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER") /* GXTEntry: "Upper Montana River" */:
				sVar0 = "WATER_UPPER_MONTANA_RIVER" /* GXTEntry: "Upper Montana River" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT") /* GXTEntry: "Whinyard Strait" */:
				sVar0 = "WATER_WHINYARD_STRAIT" /* GXTEntry: "Whinyard Strait" */;
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER") /* GXTEntry: "Kamassa River" */:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER" /* GXTEntry: "Kamassa River" */;
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER") /* GXTEntry: "San Luis River" */:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN") /* GXTEntry: "Aurora Basin" */:
			return 0;
		case joaat("WATER_BARROW_LAGOON") /* GXTEntry: "Barrow Lagoon" */:
			return 0;
		case joaat("WATER_BAYOU_NWA") /* GXTEntry: "Bayou Nwa" */:
			return 2;
		case joaat("WATER_BEARTOOTH_BECK") /* GXTEntry: "Beartooth Beck" */:
			return 1;
		case joaat("WATER_CAIRN_LAKE") /* GXTEntry: "Cairn Lake" */:
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER") /* GXTEntry: "Dakota River" */:
			return 1;
		case joaat("WATER_DEADBOOT_CREEK") /* GXTEntry: "Deadboot Creek" */:
			return 1;
		case joaat("WATER_DEWBERRY_CREEK") /* GXTEntry: "Dewberry Creek" */:
			return 1;
		case joaat("WATER_ELYSIAN_POOL") /* GXTEntry: "Elysian Pool" */:
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK") /* GXTEntry: "Hawks Eye Creek" */:
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW") /* GXTEntry: "Heartlands Overflow" */:
			return 0;
		case joaat("WATER_HOT_SPRINGS") /* GXTEntry: "Hot Springs" */:
			return 0;
		case joaat("WATER_KAMASSA_RIVER") /* GXTEntry: "Kamassa River" */:
			return 1;
		case joaat("WATER_LAKE_DON_JULIO") /* GXTEntry: "Lake Don Julio" */:
			return 0;
		case joaat("WATER_LAKE_ISABELLA") /* GXTEntry: "Lake Isabella" */:
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER") /* GXTEntry: "Little Creek River" */:
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER") /* GXTEntry: "Lower Montana River" */:
			return 1;
		case joaat("WATER_MATTLOCK_POND") /* GXTEntry: "Mattlock Pond" */:
			return 0;
		case joaat("WATER_MOONSTONE_POND") /* GXTEntry: "Moonstone Pond" */:
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA") /* GXTEntry: "Owanjila" */:
			return 0;
		case joaat("WATER_RINGNECK_CREEK") /* GXTEntry: "Ringneck Creek" */:
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER") /* GXTEntry: "San Luis River" */:
			return 1;
		case joaat("WATER_SEA_OF_CORONADO") /* GXTEntry: "Sea of Coronado" */:
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS") /* GXTEntry: "Southfield Flats" */:
			return 0;
		case joaat("WATER_SPIDER_GORGE") /* GXTEntry: "Spider Gorge" */:
			return 1;
		case joaat("WATER_STILLWATER_CREEK") /* GXTEntry: "Stillwater Creek" */:
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER") /* GXTEntry: "Upper Montana River" */:
			return 1;
		case joaat("WATER_WHINYARD_STRAIT") /* GXTEntry: "Whinyard Strait" */:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE" /* GXTEntry: "Lake" */;
		case 1:
			return "WATER_TYPE_RIVER" /* GXTEntry: "River" */;
		case 2:
			return "WATER_TYPE_SWAMP" /* GXTEntry: "Swamp" */;
		default:
			break;
	}
	return "";
}

float func_597(float fParam0)
{
	return ((fParam0 * 1.8f) + 32.0f);
}

char* func_598(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING" /* GXTEntry: "~1p~" */, sParam0);
	}
	return func_783(MISC::VAR_STRING(10, "LITERAL_STRING" /* GXTEntry: "~1p~" */, sParam0), iParam1);
}

int func_599(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	Vector3 vVar13;
	int iVar16;

	sVar0 = -2;
	sVar0.f_0 = iParam2;
	sVar0.f_1 = iParam3;
	sVar0.f_2 = iParam4;
	sVar0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar16 = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&sVar0, &vVar13, bParam6, bParam7);
	return iVar16;
}

void func_600(int iParam0)
{
	if (!func_104(iParam0))
	{
		return;
	}
	Global_1934266.f_4 = iParam0;
}

void func_601(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_104(iParam0))
	{
		return;
	}
	iVar0 = func_784();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_SET_MAX_WANTED_LEVEL_2(iVar0);
	if (iParam0 == func_785())
	{
		LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_786(iParam0, iParam1);
			func_787(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_450(iParam0, 4))
		{
			if (Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_788(iParam0, 1);
			}
		}
		else if (Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_788(iParam0, 0);
		}
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/] = iParam1;
}

bool func_602(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = func_27() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 9:
			*uParam1 = 868;
			*uParam2 = 874;
			break;
		case 16:
			*uParam1 = 893;
			*uParam2 = 900;
			break;
		case 1:
			*uParam1 = 883;
			*uParam2 = 885;
			break;
		case 3:
			*uParam1 = 858;
			*uParam2 = 860;
			break;
		case 15:
			*uParam1 = 889;
			*uParam2 = 892;
			break;
		case 13:
			*uParam1 = 886;
			*uParam2 = 887;
			break;
		case 10:
			*uParam1 = 904;
			*uParam2 = 906;
			break;
		case 11:
			*uParam1 = 908;
			*uParam2 = 923;
			break;
		case 0:
			*uParam1 = 928;
			*uParam2 = 931;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_603(int iParam0)
{
	switch (iParam0)
	{
		case 709:
		case 710:
		case 711:
		case 713:
			if (((SCRIPTS::DOES_THREAD_EXIST(Global_1835011[64 /*74*/].f_7) || SCRIPTS::DOES_THREAD_EXIST(Global_1835011[67 /*74*/].f_7)) || SCRIPTS::DOES_THREAD_EXIST(Global_1835011[65 /*74*/].f_7)) || SCRIPTS::DOES_THREAD_EXIST(Global_1835011[66 /*74*/].f_7))
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return true;
}

void func_604()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_789(iVar0))
		{
			Global_1898147[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_605(int iParam0, int iParam1)
{
	if (!func_789(iParam0))
	{
		return;
	}
	if (!func_790(iParam1))
	{
		return;
	}
	Global_1898147[iParam0] = iParam1;
}

bool func_606(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1934266.f_26 != iParam0)
	{
		Global_1934266.f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_104(iParam1))
		{
			iVar0 = func_230(iParam0);
		}
		if (!func_104(iVar0))
		{
			iVar0 = func_234(func_197(Global_36));
		}
		if (!func_104(iVar0))
		{
			return false;
		}
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1934266.f_26, func_699(iVar0));
		return true;
	}
	return false;
}

void func_607(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
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

void func_608()
{
	func_331(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_331(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_331(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_331(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_331(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_331(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_331(joaat("WS_COLTER_STAGE_MP"));
}

void func_609()
{
	func_331(joaat("WS_BEECHERS_SHACK"));
	func_331(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_331(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_331(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_331(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_331(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_331(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_331(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_331(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_331(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_610(var uParam0)
{
	return func_791(*uParam0, 1);
}

bool func_611(var uParam0)
{
	return func_791(*uParam0, 2);
}

float func_612()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_613(int iParam0)
{
	return iParam0 > -1;
}

void func_614(int iParam0)
{
	if (iParam0 == 14)
	{
		if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(func_402(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549.f_1648 = 1;
		}
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(func_402(13)) == 0)
	{
		if (Global_1357549.f_1648 && !PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(func_402(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549.f_1648 = 0;
			if (func_617(func_402(14), func_402(13), 1, 1) < 20.0f)
			{
				func_404(func_402(13), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
			}
		}
	}
}

bool func_615(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_621(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_369(func_402(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_658(iParam0, 1, 0))
	{
		return false;
	}
	if (func_621(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

bool func_616(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_413(iParam0) || func_621(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == joaat("SLEEP");
}

float func_617(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_618(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_619(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

bool func_620(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_621(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return false;
		}
	}
	func_792(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_622(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return;
		}
	}
	func_792(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_623(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return;
		}
	}
	func_792(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_624(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_402(iParam0);
	if (!func_410(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_625(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_626(int iParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_793(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_708(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_576(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_793(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_794(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_616(iParam0, 0))
					{
						func_623(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_795(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) /*7*/ };
			if (!bParam6)
			{
				func_622(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_369(func_402(iParam0), 0))
			{
				return false;
			}
			if (iParam5 & iParam10)
			{
				if (!func_369(func_656(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_627(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_622(iParam0, 50, 1);
		func_622(iParam0, 48, 1);
		func_622(iParam0, 49, 1);
		func_622(iParam0, 51, 1);
		func_622(iParam0, 52, 1);
		func_622(iParam0, 54, 1);
		func_622(iParam0, 55, 1);
	}
	else
	{
		func_623(iParam0, 50, 1);
		func_623(iParam0, 48, 1);
		func_623(iParam0, 49, 1);
		func_623(iParam0, 51, 1);
		if (bParam3)
		{
			func_623(iParam0, 54, 1);
		}
		else
		{
			func_622(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_623(iParam0, 52, 1);
			if (bParam3)
			{
				func_623(iParam0, 55, 1);
			}
		}
		else
		{
			func_622(iParam0, 52, 1);
			if (!bParam3)
			{
				func_622(iParam0, 55, 1);
			}
		}
	}
}

void func_628(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_410(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_796(iParam0, bParam3);
	}
	else
	{
		func_797(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_798(iParam0, bParam3);
	}
	else
	{
		func_799(iParam0, bParam3);
	}
}

void func_629(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (iParam0 == func_800(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_801(iParam0))
	{
		if (func_802(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_318(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= (iParam5 & 4);
				func_629(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= (iParam5 & 4);
				func_629(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_318(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_318(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_318(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_318(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_318(iParam5, 129))
	{
		if (func_318(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_318(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_318(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_318(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_801(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_318(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_318(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

bool func_630(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_410(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_803(iParam0, iParam1);
	return bVar0;
}

void func_631(int iParam0, int iParam1, bool bParam2)
{
	if (!func_410(iParam0))
	{
		return;
	}
	if (!func_630(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_623(iParam0, 25, 1);
	}
}

void func_632(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_804(iParam2))
		{
			iVar0 = func_805(iParam2, -1);
			if (func_806(iParam1, iVar0))
			{
				if (func_807(iParam1, iVar0))
				{
					if (func_808(iParam1, iVar0))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_809(iParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(iParam1, iVar0);
				}
			}
		}
		func_810(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(iParam1, 0.0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_623(iParam0, 66, 0);
		}
	}
}

void func_633(int iParam0)
{
	func_811(iParam0);
	func_812(iParam0, 0);
}

void func_634(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, false);
			}
		}
	}
}

void func_635(int iParam0, int iParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return;
	}
	func_813(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_636(int iParam0)
{
	func_623(iParam0, 36, 1);
}

bool func_637(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_638(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_814(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE") /* GXTEntry: "Sadie\'s Cattleman Revolver" */, 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_814(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD") /* GXTEntry: "Sadie\'s Cattleman Revolver" */, 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_639(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_410(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_640(var uParam0)
{
	func_815(uParam0, 0.0f);
}

int func_641(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_1 = 0;
	sVar0.f_3 = iParam0;
	iVar5 = 0;
	if (func_816(sVar0, 70005598, &iVar6, 0))
	{
		iVar5 = func_817(iVar6);
	}
	return iVar5;
}

int func_642(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_1 = 0;
	sVar0.f_3 = iParam0;
	iVar5 = 1;
	if (func_818(sVar0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_263(*iParam0);
	iVar1 = func_262(*iParam0);
	iVar2 = func_261(*iParam0);
	iVar3 = func_258(*iParam0);
	iVar4 = func_259(*iParam0);
	iVar5 = func_260(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_704(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_704(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	if (!bParam7)
	{
		iVar0 += iParam6;
	}
	func_819(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_644(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_820(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_646(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_644(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_647(2, *uParam0);
		}
		else
		{
			func_648(2, *uParam0);
		}
	}
	func_821(uParam0);
}

void func_647(int iParam0, int iParam1)
{
	if (Global_1357549.f_1483 >= 25)
	{
		Global_1357549.f_1483 = 0;
	}
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483++;
}

void func_648(int iParam0, int iParam1)
{
	if (Global_1357549.f_1406 >= 50)
	{
		return;
	}
	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403++;
	Global_1357549.f_1406++;
}

void func_649(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_822(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_635(iParam0, 1, 0);
		}
	}
	func_635(iParam0, 16, bParam1);
}

void func_650(int iParam0)
{
	func_635(iParam0, 8, 0);
}

int func_651(int iParam0, bool bParam1)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_823(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_410(iParam0))
	{
		iVar1 = func_402(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179 /*PCF_0x605C7288*/, true);
			func_824(iParam0);
		}
	}
	if (func_621(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_402(iParam0), 137 /*PCF_0xE18960DE*/, true);
	}
}

void func_653(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_402(iParam0), 204 /*PCF_0x435F091E*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_402(iParam0), 204 /*PCF_0x435F091E*/, false);
	}
}

void func_654(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_410(iParam0))
	{
		return;
	}
	if (func_413(iParam0))
	{
		if (!func_825(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_621(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_651(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_402(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_826(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_623(iParam0, 2, 1);
	}
	else
	{
		func_827(iParam0);
		func_623(iParam0, 1, 1);
	}
}

void func_655(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_410(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

int func_656(int iParam0)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_657(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_613(iParam1))
	{
		return;
	}
	iVar0 = func_656(iParam1);
	if (func_828(iParam1))
	{
		if (!func_829(iParam1))
		{
			return;
		}
	}
	func_622(iParam1, 39, 1);
	func_830(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_830(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_830(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_623(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_831(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_658(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	if (func_619(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_619(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_619(iParam0, 4, 1))
	{
		return false;
	}
	if (func_621(iParam0, 33, 1))
	{
		return false;
	}
	if (func_413(iParam0))
	{
		return false;
	}
	if (func_832(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_659(int iParam0)
{
	if (func_410(iParam0))
	{
		if (func_369(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

int func_660(int iParam0)
{
	if (func_410(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT") /* GXTEntry: "Loot Innocent" */:
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL") /* GXTEntry: "Murder" */:
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE") /* GXTEntry: "Frighten" */:
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN") /* GXTEntry: "Killed Vermin" */:
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL") /* GXTEntry: "Killed Domestic Animal" */:
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE") /* GXTEntry: "Killed Horse" */:
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE") /* GXTEntry: "Stole Horse" */:
			return (1 << 9);
		case joaat("HONOR_EVENT_STEAL_DONKEY") /* GXTEntry: "Stole Donkey" */:
			return (1 << 10);
		case joaat("HONOR_EVENT_STEAL_MULE") /* GXTEntry: "Stole Mule" */:
			return (1 << 11);
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT") /* GXTEntry: "Trampled Innocent" */:
			return (1 << 12);
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return (1 << 13);
		case joaat("HONOR_EVENT_ABANDON_ANIMALS") /* GXTEntry: "Abandon Dead Animals" */:
			return (1 << 14);
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT") /* GXTEntry: "Watched Animal Bleedout" */:
			return (1 << 15);
		case joaat("HONOR_EVENT_ANTAGONIZE") /* GXTEntry: "Antagonize" */:
			return (1 << 16);
		case joaat("HONOR_EVENT_THEFT") /* GXTEntry: "Theft" */:
			return (1 << 17);
		case joaat("HONOR_EVENT_INTERVENED") /* GXTEntry: "Intervened" */:
			return (1 << 18);
		case joaat("HONOR_EVENT_WANTED_IN_CAMP") /* GXTEntry: "Wanted In Camp" */:
			return (1 << 19);
		case joaat("HONOR_EVENT_DONATED_GAME") /* GXTEntry: "Donated Game" */:
			return (1 << 20);
		case joaat("HONOR_EVENT_ITEM_REQUEST") /* GXTEntry: "Item Request" */:
			return (1 << 21);
		case joaat("HONOR_EVENT_LONG_ABSENCE") /* GXTEntry: "Long Absence" */:
			return (1 << 22);
		default:
			break;
	}
	return 0;
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_663(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_833();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_834(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 -= DECORATOR::DECOR_GET_INT(iParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1.0f;
	if (func_345(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_342())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL(((float)iParam0 * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(((float)iParam0 * fVar4));
	}
	Global_40.f_11095.f_35 += iVar5;
	Global_40.f_11095.f_35 = func_835(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_833();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_836(iVar1);
		func_838(func_837(), 0, 4000);
		func_839(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_840(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_841(func_528(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_662(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_842(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS" /* GXTEntry: "+" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT" /* GXTEntry: "+" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_841(func_528(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_662(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_842(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG" /* GXTEntry: "~COLOR_RED~-~s~" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT" /* GXTEntry: "~COLOR_RED~-~s~" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_528(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_116(10, 1);
	}
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_665(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

Vector3 func_666(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = (iParam0 & 32767);
	iVar4 = (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767);
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if ((iParam0 & (1 << 30)) == 0)
	{
		vVar0.x *= -1.0f;
	}
	if ((iParam0 & (1 << 31)) == 0)
	{
		vVar0.f_1 = (vVar0.y * -1.0f);
	}
	return vVar0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_STYLE_MINIGAME");
		case 1:
			return joaat("BLIP_STYLE_MINIGAME");
		case 2:
			return joaat("BLIP_STYLE_MINIGAME");
		case 4:
			return joaat("BLIP_STYLE_MINIGAME");
		case 5:
			return joaat("BLIP_STYLE_MINIGAME");
		case 6:
			return joaat("BLIP_STYLE_MINIGAME");
		case 7:
			return joaat("BLIP_STYLE_MINIGAME");
		case 8:
			return joaat("BLIP_STYLE_MINIGAME");
		case 9:
			return joaat("BLIP_STYLE_MINIGAME");
		case 10:
			return joaat("BLIP_STYLE_MINIGAME");
		case 11:
			return joaat("BLIP_STYLE_MINIGAME");
		case 12:
			return joaat("BLIP_STYLE_MINIGAME");
		case 14:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 13:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 15:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 16:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 17:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 18:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 19:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 20:
			return joaat("BLIP_STYLE_SHOP");
		case 21:
			return joaat("BLIP_STYLE_SHOP");
		case 22:
			return joaat("BLIP_STYLE_SHOP");
		case 23:
			return joaat("BLIP_STYLE_SHOP");
		case 24:
			return joaat("BLIP_STYLE_SHOP");
		case 25:
			return joaat("BLIP_STYLE_SHOP");
		case 26:
			return joaat("BLIP_STYLE_SHOP");
		case 28:
			return joaat("BLIP_STYLE_SHOP");
		case 29:
			return joaat("BLIP_STYLE_SHOP");
		case 33:
			return joaat("BLIP_STYLE_SHOP");
		case 34:
			return joaat("BLIP_STYLE_SHOP");
		case 30:
			return joaat("BLIP_STYLE_SHOP");
		case 32:
			return joaat("BLIP_STYLE_SHOP");
		case 31:
			return joaat("BLIP_STYLE_SHOP");
		case 41:
			return joaat("BLIP_STYLE_SHOP");
		case 42:
			return joaat("BLIP_STYLE_SHOP");
		case 35:
			return joaat("BLIP_STYLE_SHOP");
		case 36:
			return joaat("BLIP_STYLE_SHOP");
		case 37:
			return joaat("BLIP_STYLE_SHOP");
		case 38:
			return joaat("BLIP_STYLE_SHOP");
		case 39:
			return joaat("BLIP_STYLE_SHOP");
		case 27:
			return joaat("BLIP_STYLE_SHOP");
		case 45:
			return joaat("BLIP_STYLE_SHOP");
		case 40:
			return joaat("BLIP_STYLE_SHOP");
		case 43:
			return joaat("BLIP_STYLE_SHOP");
		case 44:
			return joaat("BLIP_STYLE_SHOP");
		case 46:
			return joaat("BLIP_STYLE_PROPERTY");
		case 47:
			return joaat("BLIP_STYLE_PROPERTY");
		case 48:
			return joaat("BLIP_STYLE_PROPERTY");
		case 49:
			return joaat("BLIP_STYLE_MINIGAME");
		case 50:
			return joaat("BLIP_STYLE_MINIGAME");
		case 51:
			return joaat("BLIP_STYLE_MINIGAME");
		case 52:
			return joaat("BLIP_STYLE_CAMP");
		case 53:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 54:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 55:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 56:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 57:
			return joaat("BLIP_STYLE_MP_HIDEOUT");
		case 58:
			return joaat("BLIP_STYLE_RCM");
		case 59:
			return joaat("BLIP_STYLE_MINIGAME");
		case 60:
			return joaat("BLIP_STYLE_MINIGAME");
		case 61:
			return joaat("BLIP_STYLE_MINIGAME");
		case 62:
			return joaat("BLIP_STYLE_TOWN");
		default:
			break;
	}
	return 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MG_POKER") /* GXTEntry: "Poker" */;
		case 1:
			return joaat("BLIP_MG_BLACKJACK") /* GXTEntry: "Blackjack" */;
		case 2:
			return joaat("BLIP_MG_DOMINOES") /* GXTEntry: "Dominoes" */;
		case 4:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET") /* GXTEntry: "Five Finger Fillet" */;
		case 5:
			return joaat("BLIP_SUMMER_COW") /* GXTEntry: "Cow Milking" */;
		case 6:
			return joaat("BLIP_SUMMER_HORSE") /* GXTEntry: "Cleaning Stalls" */;
		case 7:
			return joaat("BLIP_FENCE_BUILDING") /* GXTEntry: "Fence Building" */;
		case 8:
			return joaat("BLIP_MG_DOMINOES_ALL3S") /* GXTEntry: "Dominoes: All Threes" */;
		case 9:
			return joaat("BLIP_MG_DOMINOES_ALL5S") /* GXTEntry: "Dominoes: All Fives" */;
		case 10:
			return joaat("BLIP_MG_DOMINOES_DRAW") /* GXTEntry: "Dominoes: Draw" */;
		case 11:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT") /* GXTEntry: "FFF: Burnout" */;
		case 12:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS") /* GXTEntry: "FFF: Guts" */;
		case 14:
			return joaat("BLIP_PROC_LOANSHARK") /* GXTEntry: "Debtor" */;
		case 13:
			return joaat("BLIP_AMBIENT_HERD") /* GXTEntry: "Herd" */;
		case 16:
			return joaat("BLIP_PROC_BOUNTY_POSTER") /* GXTEntry: "Bounty Poster" */;
		case 17:
			return joaat("BLIP_AMBIENT_COACH") /* GXTEntry: "Wagon" */;
		case 18:
			return joaat("BLIP_AMBIENT_TRAIN") /* GXTEntry: "Train" */;
		case 19:
			return joaat("BLIP_AMBIENT_RIVERBOAT") /* GXTEntry: "Riverboat" */;
		case 20:
			return joaat("BLIP_SHOP_STORE") /* GXTEntry: "General Store" */;
		case 21:
			return joaat("BLIP_SHOP_SHADY_STORE") /* GXTEntry: "Fence" */;
		case 22:
			return joaat("BLIP_AMBIENT_QUARTERMASTER") /* GXTEntry: "Wilderness Outfitters" */;
		case 23:
			return joaat("BLIP_SHOP_GUNSMITH") /* GXTEntry: "Gunsmith" */;
		case 24:
			return joaat("BLIP_SHOP_COACH_FENCING") /* GXTEntry: "Wagon Fence" */;
		case 25:
			return joaat("BLIP_SHOP_DOCTOR") /* GXTEntry: "Doctor" */;
		case 26:
			return joaat("BLIP_SHOP_TAILOR") /* GXTEntry: "Tailor" */;
		case 28:
			return joaat("BLIP_SHOP_BLACKSMITH") /* GXTEntry: "Blacksmith" */;
		case 29:
			return joaat("BLIP_SHOP_TRAINER") /* GXTEntry: "Stable" */;
		case 33:
			return joaat("BLIP_POST_OFFICE") /* GXTEntry: "Post Office" */;
		case 34:
			return joaat("BLIP_POST_OFFICE_REC") /* GXTEntry: "Post Office" */;
		case 30:
			return joaat("BLIP_SHOP_TRAIN") /* GXTEntry: "Train Station" */;
		case 31:
			return joaat("BLIP_SHOP_BARBER") /* GXTEntry: "Barber" */;
		case 32:
			return joaat("BLIP_SHOP_BUTCHER") /* GXTEntry: "Butcher" */;
		case 35:
			return joaat("BLIP_SHOP_TACKLE") /* GXTEntry: "Bait Shop" */;
		case 36:
			return joaat("BLIP_SHOP_ANIMAL_TRAPPER") /* GXTEntry: "Trapper" */;
		case 37:
			return joaat("BLIP_SHOP_HORSE") /* GXTEntry: "Stable" */;
		case 38:
			return joaat("BLIP_SHOP_HORSE_FENCING") /* GXTEntry: "Horse Fence" */;
		case 39:
			return joaat("BLIP_SHOP_HORSE_SADDLE") /* GXTEntry: "Stable" */;
		case 27:
			return joaat("BLIP_SALOON") /* GXTEntry: "Saloon" */;
		case 40:
			return joaat("BLIP_AMBIENT_NEWSPAPER") /* GXTEntry: "Newspaper Seller" */;
		case 41:
			return joaat("BLIP_SHOP_MARKET_STALL") /* GXTEntry: "Market" */;
		case 42:
			return joaat("BLIP_SHOP_MARKET_STALL") /* GXTEntry: "Market" */;
		case 43:
			return joaat("BLIP_HOTEL_BED") /* GXTEntry: "Hotel" */;
		case 44:
			return joaat("BLIP_PHOTO_STUDIO") /* GXTEntry: "Photo Studio" */;
		case 45:
			return joaat("BLIP_STABLE") /* GXTEntry: "Stable" */;
		case 46:
			return joaat("BLIP_PROC_HOME") /* GXTEntry: "Bed" */;
		case 47:
			return joaat("BLIP_PROC_HOME_LOCKED") /* GXTEntry: "Locked Property" */;
		case 48:
			return joaat("BLIP_PROC_HOME") /* GXTEntry: "Bed" */;
		case 49:
			return joaat("BLIP_AMBIENT_TELEGRAPH") /* GXTEntry: "Telegraph Office" */;
		case 50:
			return joaat("BLIP_AMBIENT_COACH_TAXI") /* GXTEntry: "Stagecoach" */;
		case 51:
			return joaat("BLIP_AMBIENT_THEATRE") /* GXTEntry: "Show" */;
		case 52:
			return joaat("BLIP_REGION_CARAVAN") /* GXTEntry: "Caravan Camp" */;
		case 53:
			return joaat("BLIP_EVENT_APPLESEED") /* GXTEntry: "Appleseed Timber Co." */;
		case 54:
			return joaat("BLIP_EVENT_CASTOR") /* GXTEntry: "Castor\'s Ridge" */;
		case 55:
			return joaat("BLIP_EVENT_RAILROAD_CAMP") /* GXTEntry: "Central Union Railroad Camp" */;
		case 56:
			return joaat("BLIP_EVENT_RIGGS_CAMP") /* GXTEntry: "Fort Riggs" */;
		case 57:
			return joaat("BLIP_REGION_HIDEOUT") /* GXTEntry: "Gang Hideout" */;
		case 58:
			return joaat("BLIP_PROC_HOME") /* GXTEntry: "Bed" */;
		case 59:
			return joaat("BLIP_MG_FISHING") /* GXTEntry: "Fishing" */;
		case 60:
			return joaat("BLIP_AMBIENT_THEATRE") /* GXTEntry: "Show" */;
		case 61:
			return joaat("BLIP_AMBIENT_THEATRE") /* GXTEntry: "Show" */;
		case 62:
			return joaat("BLIP_TOWN") /* GXTEntry: "Town" */;
		default:
			break;
	}
	return 0;
}

bool func_669()
{
	if (!func_70(39))
	{
		return false;
	}
	if (func_70(43))
	{
		return false;
	}
	return true;
}

bool func_670(int iParam0)
{
	if (func_27() != -1)
	{
		return false;
	}
	if (!func_174(iParam0))
	{
		return false;
	}
	return func_576(Global_1347702[iParam0 /*49*/].f_15);
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_672(int iParam0, int iParam1)
{
	if (!func_220(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] & iParam1) != 0;
}

void func_673(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_844(iVar0) == iParam0 && func_430(iVar0) == iParam1)
		{
			func_738(iVar0, -1);
			func_739(iVar0, 0);
			func_740(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
				}
				MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
			}
			return;
		}
		iVar0++;
	}
}

int func_674(int iParam0, int iParam1, Vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_213(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_845(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_430(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_430(iVar0) == iParam1 && func_844(iVar0) == iParam0) && iVar2 == func_665(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_738(iVar1, iParam0);
		func_739(iVar1, iParam1);
		func_740(iVar1, iVar2);
		func_846(iVar1, iParam5);
		func_431(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(Global_36308[iVar1], iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_675(int iParam0, int iParam1, Vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_845(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36308)
	{
		if ((func_844(iVar1) == iParam0 && func_430(iVar1) == iParam1) && func_665(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar1]))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[iVar1], sParam5);
			}
			return;
		}
		iVar1++;
	}
}

void func_676(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::_BLIP_ADD_STYLE(Global_36308[iParam0], iParam1);
		}
	}
}

void func_677(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_844(iVar0) == iParam0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], joaat("BLIP_MODIFIER_URGENT_ALERT"));
			}
			return;
		}
		iVar0++;
	}
}

bool func_678(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_844(iVar0) == iParam0 && func_430(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

bool func_679(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_844(iVar0) == iParam0 && func_430(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::BLIP_REMOVE_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_680(int iParam0, Vector3 vParam1)
{
	if (func_847(iParam0))
	{
		Global_1888801[iParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false) || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_26)))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iParam0 /*35*/].f_3, vParam1))
			{
				Global_1888801[iParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
				func_848(iParam0);
				return;
			}
		}
		if (Global_1888801[iParam0 /*35*/].f_1 + 2500 > MISC::GET_GAME_TIMER())
		{
			return;
		}
	}
	if (Global_1888801[iParam0 /*35*/].f_9 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iParam0 /*35*/].f_9, 523);
				Global_1888801[iParam0 /*35*/].f_9 = 0;
			}
			else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[iParam0 /*35*/].f_9))
			{
				SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[iParam0 /*35*/].f_9);
			}
		}
		if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iParam0 /*35*/].f_9))
		{
			Global_1888801[iParam0 /*35*/].f_9 = 0;
		}
		else
		{
			return;
		}
	}
	func_280(iParam0, 8);
	switch (Global_1888801[iParam0 /*35*/].f_20)
	{
		case 1:
		case 2:
			if (func_27() == -1)
			{
				if (Global_1327479.f_6 != iParam0)
				{
					func_849(-30, 0, 1);
					Global_1327479.f_6 = iParam0;
				}
			}
			break;
		case 3:
			break;
		case 7:
			break;
		case 4:
			break;
	}
	func_280(iParam0, 11);
	if (Global_23118[iParam0 /*11*/].f_10 < 10)
	{
		Global_23118[iParam0 /*11*/].f_10 = 0;
	}
	func_850(func_229(iParam0, 1, 1));
	if (iParam0 == Global_1894899.f_2)
	{
		func_848(-1);
		func_851();
	}
}

void func_681(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	Vector3 vVar3;
	bool bVar7;
	int iVar8;

	if (!func_207(iParam0))
	{
		return;
	}
	bVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[iParam0 /*35*/].f_26)) != false;
	bVar1 = false;
	if (bVar0)
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1888801[iParam0 /*35*/].f_26)))
		{
			SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[iParam0 /*35*/].f_26));
			return;
		}
	}
	iVar2 = Global_1888801[iParam0 /*35*/].f_20;
	bVar7 = iParam0 == func_98();
	if ((bVar0 && bVar7) && Global_1879534)
	{
		bVar0 = false;
	}
	switch (iVar2)
	{
		case 3:
			if (func_852(iParam0, 1))
			{
				bVar1 = true;
			}
		default:
			break;
	}
	if (bVar0)
	{
		vVar3.x = iParam0;
		iVar8 = (1 << 10);
		if (MISC::GET_HASH_KEY(&(Global_1888801[iParam0 /*35*/].f_26)) != joaat("GENERIC_GHOSTTOWN"))
		{
			if (iVar2 == 8)
			{
				iVar8 = (1 << 9);
			}
			else if (bVar7)
			{
				iVar8 = 5000;
			}
			else if (iVar2 == 3)
			{
				iVar8 = 2049;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar8 = 5500;
		}
		if (Global_1888801[iParam0 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iParam0 /*35*/].f_9, 523);
				}
				else
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[iParam0 /*35*/].f_9);
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iParam0 /*35*/].f_9))
			{
				Global_1888801[iParam0 /*35*/].f_9 = 0;
			}
			else
			{
				return;
			}
		}
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1888801[iParam0 /*35*/].f_26))) > 0)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iParam0 /*35*/].f_26), 523);
			}
			else
			{
				SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[iParam0 /*35*/].f_26)));
			}
			return;
		}
		vVar3.f_2 = iParam1;
		Global_1888801[iParam0 /*35*/].f_9 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1888801[iParam0 /*35*/].f_26), &vVar3, 4, iVar8);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iParam0 /*35*/].f_26));
	}
	func_322(iParam0, 1);
	func_322(iParam0, 2);
	func_853(bVar1);
}

void func_682(int iParam0, Vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1572887.f_12 == -1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iVar0))
		{
			return;
		}
		if (func_77(Global_1935630, (1 << 12)))
		{
			if (!func_854())
			{
				return;
			}
		}
	}
	if (!func_847(iParam0))
	{
		if (!VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iParam0 /*35*/].f_3, vParam1))
		{
			if (Global_1894899.f_2 == iParam0)
			{
				func_848(-1);
			}
			return;
		}
		if (func_207(Global_1894899.f_2))
		{
			if (SCRIPTS::DOES_THREAD_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_9))
			{
				if (bParam4)
				{
					func_322(Global_1894899.f_2, 2);
				}
				return;
			}
		}
	}
	MemCopy(&(Global_1888801[iParam0 /*35*/].f_26), {func_855(iParam0)}, 4);
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[iParam0 /*35*/].f_26)) != 0)
	{
		SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[iParam0 /*35*/].f_26));
	}
	else
	{
		func_322(iParam0, 2);
	}
	func_322(iParam0, 1);
	if (Global_1888801[iParam0 /*35*/].f_20 != 8)
	{
		func_856(iParam0, 0);
	}
	PLAYER::_0xFA7DAAE3959E6C7B(iVar0, func_857());
	if ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !CAM::IS_SCREEN_FADED_OUT())
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_PLAYER_ARRIVAL"), Global_35, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
	}
	func_848(iParam0);
	func_858(iParam0);
	func_395(func_229(iParam0, 1, 1), -1);
}

bool func_683(int iParam0)
{
	return iParam0 != 0;
}

int func_684()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

bool func_685(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_859() && func_860());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_861(iParam0, 1);
	}
	return false;
}

void func_686(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f /*3*/ };
			*uParam2 = { 150.0f, 150.0f, 184.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f /*3*/ };
			*uParam2 = { 40.0f, 35.0f, 70.0f /*3*/ };
			*uParam3 = 45.0f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f /*3*/ };
			*uParam2 = { 43.0f, 197.0f, 70.0f /*3*/ };
			*uParam3 = 38.0f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f /*3*/ };
			*uParam2 = { 30.0f, 30.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f /*3*/ };
			*uParam2 = { 30.0f, 30.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f /*3*/ };
			*uParam2 = { 13.0f, 21.0f, 47.0f /*3*/ };
			*uParam3 = 34.0f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f /*3*/ };
			*uParam2 = { 21.0f, 21.0f, 47.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f /*3*/ };
			*uParam2 = { 40.0f, 23.0f, 47.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f /*3*/ };
			*uParam2 = { 40.0f, 25.0f, 47.0f /*3*/ };
			*uParam3 = 26.0f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f /*3*/ };
			*uParam2 = { 39.0f, 54.0f, 70.0f /*3*/ };
			*uParam3 = -46.0f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f /*3*/ };
			*uParam2 = { 104.0f, 57.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f /*3*/ };
			*uParam2 = { 23.0f, 26.0f, 70.0f /*3*/ };
			*uParam3 = 43.0f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f /*3*/ };
			*uParam2 = { 149.0f, 65.0f, 154.0f /*3*/ };
			*uParam3 = 39.0f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f /*3*/ };
			*uParam2 = { 52.0f, 40.0f, 154.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f /*3*/ };
			*uParam2 = { 334.0f, 171.0f, 277.0f /*3*/ };
			*uParam3 = -45.0f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f /*3*/ };
			*uParam2 = { 147.0f, 194.0f, 201.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f /*3*/ };
			*uParam2 = { 86.0f, 61.0f, 50.0f /*3*/ };
			*uParam3 = 11.0f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f /*3*/ };
			*uParam2 = { 34.0f, 34.0f, 100.0f /*3*/ };
			*uParam3 = -124.0f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25.0f /*3*/ };
			*uParam2 = { 25.0f, 25.0f, 45.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f /*3*/ };
			*uParam2 = { 19.0f, 18.0f, 100.0f /*3*/ };
			*uParam3 = 40.0f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f /*3*/ };
			*uParam2 = { 98.0f, 52.0f, 120.0f /*3*/ };
			*uParam3 = 51.0f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f /*3*/ };
			*uParam2 = { 40.0f, 40.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f /*3*/ };
			*uParam2 = { 40.0f, 40.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f /*3*/ };
			*uParam2 = { 31.0f, 30.0f, 40.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f /*3*/ };
			*uParam2 = { 177.0f, 126.0f, 102.0f /*3*/ };
			*uParam3 = 52.0f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120.0f /*3*/ };
			*uParam2 = { 249.0f, 112.0f, 120.0f /*3*/ };
			*uParam3 = -36.0f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f /*3*/ };
			*uParam2 = { 40.0f, 40.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f /*3*/ };
			*uParam2 = { 56.0f, 152.0f, 70.0f /*3*/ };
			*uParam3 = -36.0f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f /*3*/ };
			*uParam2 = { 180.0f, 95.0f, 100.0f /*3*/ };
			*uParam3 = 29.0f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f /*3*/ };
			*uParam2 = { 32.0f, 49.0f, 140.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25.0f /*3*/ };
			*uParam2 = { 25.0f, 25.0f, 45.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f /*3*/ };
			*uParam2 = { 36.0f, 30.0f, 30.0f /*3*/ };
			*uParam3 = -24.0f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f /*3*/ };
			*uParam2 = { 35.0f, 42.0f, 19.0f /*3*/ };
			*uParam3 = -4.0f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f /*3*/ };
			*uParam2 = { 70.0f, 67.0f, 65.0f /*3*/ };
			*uParam3 = -109.0f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f /*3*/ };
			*uParam2 = { 84.0f, 69.0f, 37.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f /*3*/ };
			*uParam2 = { 196.0f, 157.0f, 85.0f /*3*/ };
			*uParam3 = -18.0f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f /*3*/ };
			*uParam2 = { 12.0f, 12.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f /*3*/ };
			*uParam2 = { 126.0f, 86.0f, 70.0f /*3*/ };
			*uParam3 = -6.0f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f /*3*/ };
			*uParam2 = { 22.0f, 32.0f, 86.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f /*3*/ };
			*uParam2 = { 160.0f, 22.0f, 100.0f /*3*/ };
			*uParam3 = 26.0f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f /*3*/ };
			*uParam2 = { 45.0f, 46.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95.0f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95.0f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42.0f /*3*/ };
			*uParam2 = { 21.0f, 29.0f, 49.0f /*3*/ };
			*uParam3 = 52.0f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168.0f /*3*/ };
			*uParam2 = { 21.0f, 29.0f, 116.0f /*3*/ };
			*uParam3 = 56.0f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85.0f /*3*/ };
			*uParam2 = { 40.0f, 71.0f, 116.0f /*3*/ };
			*uParam3 = 70.0f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85.0f /*3*/ };
			*uParam2 = { 15.0f, 15.0f, 116.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71.0f /*3*/ };
			*uParam2 = { 25.0f, 25.0f, 50.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214.0f /*3*/ };
			*uParam2 = { 37.0f, 33.0f, 68.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
	}
}

bool func_687(Vector3 vParam0, Vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	Vector3 vVar0;
	struct<2> /*16*/ sVar3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 /*3*/ };
	sVar3.f_0 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	sVar3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((sVar3.f_0 * sVar3.f_0) / (fParam6 * fParam6)) + ((sVar3.f_1 * sVar3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1.0f;
}

int func_688(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_58();
	bVar1 = false;
	if (bVar0 && !func_70(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_70(37)) && !func_70(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_70(43)) && !func_70(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_862(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_862(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_689()
{
	return Global_40.f_1095.f_3054;
}

bool func_690(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

int func_691()
{
	if (func_58())
	{
		if (!func_70(3))
		{
			return func_458(43);
		}
		if (func_70(38) && !func_70(43))
		{
			return func_373(8);
		}
	}
	return 0;
}

Vector3 func_692(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	Vector3 vVar5;

	func_264(15, &sVar0);
	sVar0.f_2 = -1999103282;
	sVar0.f_3 = iParam0;
	sVar0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -495185473;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar5, &sVar0);
	}
	return vVar5;
}

int func_693(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	int iVar6;

	if (LAW::GET_BOUNTY(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720.f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720.f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_864(Global_1310720.f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_264(15, &sVar1);
	sVar1.f_2 = -1999103282;
	sVar1.f_3 = iParam0;
	sVar1.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar1.f_1), &sVar1))
	{
		sVar1.f_2 = 383290544;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar6, &sVar1);
		if (func_865(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_694(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_866(iParam0);
	if (func_310(joaat("WS_GUARMA_EXISTS")) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_695(int iParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_264(15, &sVar0))
	{
		return false;
	}
	sVar0.f_3 = iParam0;
	sVar0.f_2 = 303248275;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar5, &sVar0))
	{
	}
	return uVar5;
}

bool func_696(Vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;

	if (bParam5)
	{
		if (func_867(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_868(5))
	{
		if (func_869(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_197(vParam0);
	if (bParam6)
	{
		iVar1 = func_102(vParam0, 1);
		if (func_285(iVar1) || func_870(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_871(iParam3, iParam4))
	{
		return false;
	}
	if (!func_872())
	{
		if (func_873(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam8))
	{
		if (!func_874(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == func_102(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_875(iParam3, iParam4))
	{
		return false;
	}
	if (func_876(0) == 3)
	{
		if (((vParam0.x > -1480.0f && vParam0.x < -1475.0f) && vParam0.y > -359.0f) && vParam0.y < -354.0f)
		{
			return false;
		}
	}
	if (!func_877((1 << 16), 2))
	{
		if (((vParam0.x > 1673.0f && vParam0.x < 1676.0f) && vParam0.y > -1888.0f) && vParam0.y < -1885.0f)
		{
			return false;
		}
	}
	if (func_58())
	{
		if (VOLUME::DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::IS_POINT_IN_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_878(vParam0, iParam10) | func_879(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450.0f && vParam0.y < -600.0f)
		{
			return false;
		}
	}
	return true;
}

void func_697(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_698(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (sParam0.f_0 < fParam3)
	{
		if (sParam0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (sParam0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

void func_700(int iParam0)
{
	if (func_275(iParam0) == 57)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iParam0);
	}
}

void func_701(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	strcpy_s(&cVar0, 64, func_276(iParam0));
	strcat_s(&cVar0, 64, "_OUTLINE");
	sVar8 = func_754(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

int func_702(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	if (func_457(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0 /*11*/].f_3;
}

int func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_461(iParam0))
	{
		return 0;
	}
	func_880(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60.0f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60.0f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24.0f) * 60.0f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24.0f) * 60.0f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24.0f) * 60.0f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_704(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return joaat("DISTRICT_INVALID");
}

bool func_706()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[59 /*49*/].f_42, false) && !func_881(Global_1347702[59 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_707(int iParam0)
{
	switch (func_27())
	{
		case -1:
			return (Global_40.f_4283.f_3 & iParam0) != 0;
	}
	return false;
}

bool func_708(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_512(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_709()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[66 /*49*/].f_42, false) && !func_881(Global_1347702[66 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_710()
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_1663[1]))
	{
		if (func_620(Global_35, Global_1357549.f_1663[1], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_711(int iParam0)
{
	if (Global_1327590.f_10 == 14)
	{
		return true;
	}
	return false;
}

int func_712()
{
	return 0;
}

int func_713(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = func_478();
	if (fVar3 < 30.0f)
	{
		iVar1 = 0;
	}
	else if (fVar3 < 75.0f)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 2;
	}
	if (bParam2)
	{
		iVar0 = (*iParam1)[iVar1];
	}
	else
	{
		iVar0 = (*iParam0)[iVar1];
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(iVar0) == 0)
	{
		STREAMING::REQUEST_IPL_HASH(iVar0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar0 != (*iParam1)[iVar2])
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH((*iParam1)[iVar2]))
				{
					STREAMING::REMOVE_IPL_HASH((*iParam1)[iVar2]);
				}
			}
			if (iVar0 != (*iParam0)[iVar2])
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH((*iParam0)[iVar2]))
				{
					STREAMING::REMOVE_IPL_HASH((*iParam0)[iVar2]);
				}
			}
			func_882(iVar0);
			iVar2++;
		}
	}
	return iVar0;
}

bool func_714()
{
	int iVar0;

	if (func_46(Global_1898437) && func_111(Global_1898437) == 1)
	{
		iVar0 = func_113(Global_1898437);
		if ((func_560(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_715()
{
	int iVar0;

	if (func_357() == 6)
	{
		return false;
	}
	if (func_576(Global_1347702[68 /*49*/].f_15))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == 68)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_716(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;

	if (!func_883(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_884(0) /*4*/ };
	sVar0.f_4 = func_885(iParam1);
	sVar5 = { func_886(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_887(0), &sVar5, false);
	return iVar9;
}

bool func_717(int iParam0)
{
	return (Global_1357549.f_1885 == iParam0 && !func_888(&(Global_1357549.f_1901)));
}

void func_718(int iParam0)
{
	STREAMING::REQUEST_IPL_HASH(iParam0);
}

bool func_719(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_883(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_889(bParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_890(bParam0, 1))
		{
			return false;
		}
	}
	return func_745(bParam0, 0, bParam2) >= iParam1;
}

int func_720(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_721(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*iParam2 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(701.0167f, -1247.185f, 43.9899f, 3.0f, 2, -1, 0);
			}
			else
			{
				GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4.0f);
			break;
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.043f, 42.6971f, 4.0f);
			break;
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.986f, 42.7088f, 4.0f);
			break;
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.091f, 42.984f, 4.0f);
			break;
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.627f, 43.1471f, 4.0f);
			break;
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.099f, 43.2507f, 4.0f);
			break;
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.873f, 43.0153f, 4.0f);
			break;
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4.0f);
			break;
		case -379409079:
		case 1808508475:
		case 2015311123:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-111.4885f, -39.7478f, 94.8525f, 4.0f);
			break;
		case -1920340119:
		case -1576393943:
		case -413795019:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-123.9274f, -22.8559f, 95.0845f, 4.0f);
			break;
		case -1987982797:
		case -1933895237:
		case -104137172:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-147.6751f, -24.5264f, 95.2101f, 4.0f);
			break;
		case -1426249148:
		case -182995231:
		case 1267297807:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-142.3644f, -21.2133f, 95.0883f, 4.0f);
			break;
		case -638481378:
		case -621187540:
		case 1079213989:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1880.102f, -1880.512f, 41.9323f, 4.0f);
			break;
		case -882188392:
		case 773757120:
		case 964593693:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1870.625f, -1872.112f, 41.8191f, 4.0f);
			break;
		case -2147051362:
		case -997495998:
		case 266022415:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1887.52f, -1880.757f, 41.9442f, 4.0f);
			break;
		case -1910456812:
		case -1115840558:
		case 1674493966:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1877.485f, -1861f, 41.8078f, 4.0f);
			break;
	}
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_320;
		case 1:
			return Global_40.f_4283.f_318;
		case 2:
			return Global_40.f_4283.f_319;
	}
	return 1;
}

void func_723(bool bParam0)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;

	iVar0 = (func_720(3, 0) - 1);
	iVar1[0] = -916538063;
	iVar1[1] = -916538063;
	iVar1[2] = 110400393;
	iVar1[3] = 110400393;
	iVar6 = iVar1[iVar0];
	if (bParam0)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(iVar6) == 0)
		{
			STREAMING::REQUEST_IPL_HASH(iVar6);
		}
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar1[iVar7]))
			{
				if (iVar1[iVar7] != iVar6)
				{
					STREAMING::REMOVE_IPL_HASH(iVar1[iVar7]);
				}
			}
			iVar7++;
		}
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::IS_IPL_ACTIVE_HASH(iVar1[iVar7]))
			{
				STREAMING::REMOVE_IPL_HASH(iVar1[iVar7]);
			}
			iVar7++;
		}
	}
}

void func_724(bool bParam0)
{
	int iVar0[3];
	int iVar4;

	if (bParam0)
	{
		iVar0[0] = -1370620659;
		iVar0[1] = -624219879;
		iVar0[2] = 715730031;
	}
	else
	{
		iVar0[0] = 5585502;
		iVar0[1] = -1362716862;
		iVar0[2] = 482931525;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(iVar0[iVar4]))
		{
			if (iVar0[iVar4] != func_712())
			{
				STREAMING::REMOVE_IPL_HASH(iVar0[iVar4]);
			}
		}
		iVar4++;
	}
}

void func_725()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1357549.f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549.f_1674));
		}
	}
}

void func_726(int iParam0)
{
}

var func_727(var uParam0)
{
	return uParam0;
}

char* func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning" /* GXTEntry: "Morning" */;
		case 1:
			return "Day" /* GXTEntry: "Day" */;
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon" /* GXTEntry: "Afternoon" */;
		case 4:
			return "Evening" /* GXTEntry: "Evening" */;
		case 5:
			return "Night" /* GXTEntry: "Night" */;
		default:
			break;
	}
	return "";
}

int func_730(int iParam0)
{
	int iVar0;

	iVar0 = func_741(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_891(iVar0);
}

int func_731(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (Global_1058888.f_40431 >= 32)
	{
		return -1;
	}
	sVar0 = -1;
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	if (Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			func_892(iVar2);
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
	}
	if (Global_1058888.f_40431 < 31)
	{
		iVar2 = Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		if (Global_1058888.f_40431 > 32)
		{
			Global_1058888.f_40431 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_732()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

void func_733(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_738(*uParam0, -1);
		func_739(*uParam0, 0);
		func_740(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
		}
	}
	*uParam0 = -1;
}

bool func_734(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_735(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_LEADER");
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_LEADER");
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_LEADER");
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_LEADER");
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_LEADER");
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_LEADER");
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_LEADER");
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_LEADER");
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_LEADER");
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_LEADER");
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_LEADER");
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER");
		default:
			break;
	}
	return 0;
}

void func_738(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_739(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_740(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

int func_741(int iParam0)
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

struct<2> /*16*/ func_742(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return (1 << 9);
		case 9:
			return (1 << 10);
		case 10:
			return (1 << 11);
		case 11:
			return (1 << 12);
		case 12:
			return (1 << 13);
		case 13:
			return (1 << 14);
		case 14:
			return (1 << 15);
		case 15:
			return (1 << 16);
		case 16:
			return (1 << 17);
		case 17:
			return (1 << 18);
		case 18:
			return (1 << 19);
		case 19:
			return (1 << 20);
		default:
			break;
	}
	return 1;
}

int func_744()
{
	return Global_40.f_8863.f_148;
}

int func_745(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_883(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_889(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_893(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_894(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_887(bParam2), bParam0, false);
	return iVar2;
}

struct<2> /*16*/ func_746(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SP_CHAL_BAND_ROOT");
		case 1:
			return joaat("SP_CHAL_EXPL_ROOT");
		case 2:
			return joaat("SP_CHAL_GAMB_ROOT");
		case 3:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 5:
			return joaat("SP_CHAL_HUNT_ROOT");
		case 6:
			return joaat("SP_CHAL_SHOT_ROOT");
		case 7:
			return joaat("SP_CHAL_SURV_ROOT");
		case 8:
			return joaat("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

void func_748(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_46(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_576(iParam0) && !func_708(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_532(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_576(iParam0))
	{
		iParam2 = -1;
	}
	if (func_512(iParam0) == 3 || (func_512(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_532(iParam0))))
	{
		func_895(func_111(iParam0), func_532(iParam0), iParam2);
		if ((!func_46(Global_1572864.f_8) && !func_72(0, 1, 0)) && !func_77(Global_1935630, (1 << 15)))
		{
			iVar0 = func_896(iParam0);
			if (iVar0 != -1)
			{
				func_6(0);
			}
			else if (func_111(iParam0) == 8)
			{
				iVar0 = func_897();
				if (iVar0 != -1)
				{
					func_6(0);
				}
			}
		}
	}
	func_898(iParam0, 0);
	if (func_76(0) == iParam0)
	{
		func_899(1);
		func_900(0);
		func_901(1);
	}
	func_902(iParam0, 1);
	func_903(iParam0);
}

int func_749(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_750(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_249(iParam0);
	*uParam1 = func_250(iParam0);
	*uParam2 = func_904(iParam0);
}

bool func_751(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

void func_752(int iParam0, int iParam1)
{
	if (!func_751(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] |= iParam1;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_754(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_755(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

int func_756(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_905(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_906(iParam0))
	{
		return 1;
	}
	func_907(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	func_908(iVar0);
	iVar2 = func_749(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_530(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		func_909(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_757(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_910(iParam0))
	{
		return;
	}
	if (func_46(Global_1392915[iParam0 /*12*/].f_4))
	{
		func_748(Global_1392915[iParam0 /*12*/].f_4, 1, 2);
	}
	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_767(iVar0, -1);
}

void func_758(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!func_911(iVar0))
	{
		return;
	}
	if (func_734(uParam0->f_34[iVar0]))
	{
		func_733(&(uParam0->f_34[iVar0]), 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_759(int iParam0)
{
	func_912(&(Global_1392915[iParam0 /*12*/]));
	func_913(&(Global_1392915.f_121[iParam0 /*20*/]));
}

bool func_760(int iParam0)
{
	return (Global_1935630 & iParam0) != 0;
}

bool func_761(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_762(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_763(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_764(int iParam0, int iParam1)
{
	return (func_763(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 & iParam1) != 0);
}

bool func_765(int iParam0)
{
	if (!func_914(iParam0))
	{
		return false;
	}
	return (!func_58() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_766(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (func_910(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_767(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

bool func_768(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] & iParam1) != 0;
}

void func_769(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

int func_770(int iParam0, int iParam1)
{
	return func_114(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_915(iParam1)));
}

void func_771(int iParam0, int iParam1)
{
	if (!func_768(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] |= iParam1;
}

bool func_772(int iParam0)
{
	return func_293(iParam0) == 0;
}

int func_773(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> /*48*/ sVar3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_772(iParam0))
	{
		return -1;
	}
	if (func_27() != -1)
	{
		iVar2 = func_749(iParam0);
		if (iVar2 >= 0)
		{
			func_916(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { sVar3 /*6*/ };
			func_531(iVar1, 1);
			func_916(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_749(iParam0);
		if (iVar2 >= 0)
		{
			func_916(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_46(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { sVar3 /*6*/ };
					func_531(iVar0, 1);
					func_916(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_774(int iParam0)
{
	int iVar0;

	iVar0 = func_564(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

bool func_775(int iParam0)
{
	return iParam0 != 0;
}

void func_776(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_581(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_581(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_582(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_364(8);
}

void func_777(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_371(iParam0, 0);
}

bool func_778(int iParam0)
{
	if (!func_562(iParam0))
	{
		return false;
	}
	if (!func_336(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_779()
{
	if (func_27() != 0)
	{
		return true;
	}
	return true;
}

int func_780(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_440(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_781(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_782(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

char* func_783(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING" /* GXTEntry: "~HC_~1p~~~2~~s~" */, MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_784()
{
	int iVar0;

	if (func_27() == 0)
	{
		return -1;
	}
	iVar0 = func_897();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_70(24))
	{
		return 50000;
	}
	return 150000;
}

int func_785()
{
	return Global_1934266.f_4;
}

void func_786(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYAMBARINO"), iParam1);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWHANOVER"), iParam1);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYLEMOYNE"), iParam1);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYWESTELIZABETH"), iParam1);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWAUSTIN"), iParam1);
			break;
		default:
			break;
	}
}

void func_787(int iParam0)
{
	int iVar0;

	iVar0 = func_917(iParam0);
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELAMBARINO"), iVar0);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWHANOVER"), iVar0);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELLEMOYNE"), iVar0);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELWESTELIZABETH"), iVar0);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWAUSTIN"), iVar0);
			break;
		default:
			break;
	}
}

void func_788(int iParam0, bool bParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_451(iParam0, 4);
	}
	else
	{
		func_452(iParam0, 4);
	}
	func_918(iParam0, bParam1);
}

bool func_789(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_790(int iParam0)
{
	return iParam0 != 0;
}

bool func_791(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_792(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_793(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_613(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_172(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = joaat("COMPANION_OUTFIT_COLD_WEATHER");
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_919(iVar0, 9, 11))
					{
						iVar1[0] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_172(Global_1347702[63 /*49*/].f_15, 1) || func_576(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = joaat("COMPANION_OUTFIT_COOL_WEATHER_PANTS");
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_919(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_172(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_619(18, (1 << 27), 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = joaat("COMPANION_OUTFIT_COOL_WEATHER_CASUAL");
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar7 = 4;
					break;
				case 3:
					if (func_919(iVar0, 9, 11))
					{
						iVar1[0] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar1[4] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_172(Global_1347702[134 /*49*/].f_15, 1) || func_576(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = joaat("COMPANION_OUTFIT_WARM_WEATHER_PANTS");
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_172(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = joaat("COMPANION_OUTFIT_ISLAND");
					}
					break;
				default:
					iVar1[0] = joaat("COMPANION_OUTFIT_ISLAND_HOLSTER");
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar7 = 4;
					break;
				case 3:
					if (func_919(iVar0, 9, 11))
					{
						iVar1[0] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = joaat("COMPANION_OUTFIT_OUTLAW");
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING");
					iVar1[3] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL");
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = joaat("COMPANION_OUTFIT_DEFAULT");
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_920(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_172(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_402(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_630(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_794(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case joaat("COMPANION_OUTFIT_NIGHTGOWN"):
		case joaat("COMPANION_OUTFIT_SLEEPING"):
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL"):
			return true;
		default:
			break;
	}
	return false;
}

struct<7> /*56*/ func_795(int iParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_3 = { vParam2 /*3*/ };
	sVar0.f_2 = uParam8;
	sVar0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(sVar0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(sVar0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(sVar0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(sVar0.f_6), 3);
	}
	return sVar0;
}

void func_796(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	bVar0 = func_402(iParam0);
	func_921(bVar0);
	func_623(iParam0, 60, 1);
	if (bParam1)
	{
		func_922(iParam0);
	}
}

void func_797(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_923(iVar0);
	func_622(iParam0, 60, 1);
	if (bParam1)
	{
		func_924(iParam0);
	}
}

void func_798(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_925(iVar0);
	if (iParam0 == 14)
	{
		func_926(iVar0);
	}
	func_623(iParam0, 61, 1);
	if (bParam1)
	{
		func_927(iParam0);
	}
}

void func_799(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_928(iVar0);
	func_622(iParam0, 61, 1);
	if (bParam1)
	{
		func_929(iParam0);
	}
}

int func_800(var uParam0)
{
	return uParam0;
}

bool func_801(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_802(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_803(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_613(iParam0))
	{
		return false;
	}
	func_930(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_804(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_805(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("COMPANION_OUTFIT_COLD_WEATHER"):
			return joaat("META_OUTFIT_COLD_WEATHER");
		case joaat("COMPANION_OUTFIT_COLD_WEATHER_INJURED"):
			return joaat("META_OUTFIT_COLD_WEATHER_INJURED");
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case joaat("COMPANION_OUTFIT_ISLAND"):
			return joaat("META_OUTFIT_ISLAND");
		case joaat("COMPANION_OUTFIT_ISLAND_HOLSTER"):
			return joaat("META_OUTFIT_ISLAND_HOLSTER");
		case -1559986688:
			return 174754238;
		case joaat("COMPANION_OUTFIT_PRISON"):
			return joaat("META_OUTFIT_PRISON");
		case 977450639:
			return 2111449038;
		case joaat("COMPANION_OUTFIT_PROSTITUTE"):
			return joaat("META_OUTFIT_PROSTITUTE");
		case 713940276:
			return -1949892659;
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL"):
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING"):
			return joaat("META_OUTFIT_WARM_WEATHER_WORKING");
		case joaat("COMPANION_OUTFIT_OUTLAW"):
			return joaat("META_OUTFIT_OUTLAW");
		case joaat("COMPANION_OUTFIT_ROBBERY"):
			return joaat("META_OUTFIT_ROBBERY");
		case joaat("COMPANION_OUTFIT_ROBBERY_ALT"):
			return joaat("META_OUTFIT_ROBBERY_ALT");
		case joaat("COMPANION_OUTFIT_HEIST"):
			return joaat("META_OUTFIT_HEIST");
		case joaat("COMPANION_OUTFIT_HEIST_ALT"):
			return joaat("META_OUTFIT_HEIST_ALT");
		case joaat("COMPANION_OUTFIT_KIDNAPPED"):
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return joaat("META_OUTFIT_KIDNAPPED_ALT");
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case joaat("COMPANION_OUTFIT_PLAYED_TUTORIAL"):
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case joaat("COMPANION_OUTFIT_GUARD"):
			return joaat("META_OUTFIT_GUARD");
		case joaat("COMPANION_OUTFIT_POLICE_UNIFORM"):
			return 1976273473;
		case joaat("COMPANION_OUTFIT_BEATUP"):
			return joaat("META_OUTFIT_BEATUP");
		case joaat("COMPANION_OUTFIT_GALA"):
			return joaat("META_OUTFIT_GALA");
		case joaat("COMPANION_OUTFIT_DEPUTY"):
			return 491764525;
		case joaat("COMPANION_OUTFIT_DECAPITATED"):
			return joaat("META_OUTFIT_DECAPITATED");
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_PANTS"):
			return joaat("META_OUTFIT_WARM_WEATHER_PANTS");
		case joaat("COMPANION_OUTFIT_COMBAT"):
			return joaat("META_OUTFIT_COMBAT");
		case joaat("COMPANION_OUTFIT_COOL_WEATHER_PANTS"):
			return joaat("META_OUTFIT_COOL_WEATHER_PANTS");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_931(296923297, iParam1);
			return func_932(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_931(1237718549, iParam1);
			return func_932(iVar0);
		case joaat("COMPANION_OUTFIT_COOL_WEATHER_CASUAL"):
			return joaat("META_OUTFIT_COOL_WEATHER_CASUAL");
		case 1295334688:
			return 869636257;
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_INJURED"):
			return joaat("META_OUTFIT_WARM_WEATHER_INJURED");
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case joaat("COMPANION_OUTFIT_JAIL"):
			return joaat("META_OUTFIT_JAIL");
		case joaat("COMPANION_OUTFIT_JAIL_ARMED"):
			return joaat("META_OUTFIT_JAIL_ARMED");
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case joaat("COMPANION_OUTFIT_SHOOTOUT"):
			return joaat("META_OUTFIT_SHOOTOUT");
		case joaat("COMPANION_OUTFIT_SLEEPING"):
			return joaat("META_OUTFIT_SLEEPING");
		case joaat("COMPANION_OUTFIT_NIGHTGOWN"):
			return joaat("META_OUTFIT_NIGHTGOWN");
		case joaat("COMPANION_OUTFIT_HEALING"):
			return joaat("META_OUTFIT_HEALING");
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case joaat("COMPANION_OUTFIT_FISHING"):
			return joaat("META_OUTFIT_FISHING");
		case joaat("COMPANION_OUTFIT_ISLAND_INJURED"):
			return joaat("META_OUTFIT_ISLAND_INJURED");
		case -1205468859:
			return joaat("META_OUTFIT_SLEEPING");
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case joaat("COMPANION_OUTFIT_DEFAULT"):
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_806(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_807(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_808(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_806(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(iVar1);
}

void func_809(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_810(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_META_PED_USING_COMPONENT(iParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_META_PED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 1) > 0 && func_806(iParam1, 860729266))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 12)) > 0 && func_806(iParam1, 879715242))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 128) > 0 && func_806(iParam1, 1606325429))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 256) > 0 && func_806(iParam1, 1743550585))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 9)) > 0 && func_806(iParam1, 1064646155))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 10)) > 0 && func_806(iParam1, -536694793))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 11)) > 0 && func_806(iParam1, -1304053509))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 31)) > 0 && func_806(iParam1, 718939204))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 16)) > 0 && func_806(iParam1, -972364774))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 14)) > 0 && func_806(iParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(iParam1, joaat("BEARDS_COMPLETE")))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("BEARDS_COMPLETE"), 1);
		}
		if (PED::_IS_META_PED_USING_COMPONENT(iParam1, joaat("BEARD_ACCESSORIES")))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("BEARD_ACCESSORIES"), 1);
		}
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 18)) > 0 && func_806(iParam1, 1153596794))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 19)) > 0 && func_806(iParam1, 1016389820))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 20)) > 0 && func_806(iParam1, -726966617))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 21)) > 0 && func_806(iParam1, 1365901568))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 15)) > 0 && func_806(iParam1, -1658942149))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 17)) > 0 && func_806(iParam1, -1980913856))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 22)) > 0 && func_806(iParam1, 491764525))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 23)) > 0 && func_806(iParam1, -76015264))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 24)) > 0 && func_806(iParam1, 622113465))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 25)) > 0 && func_806(iParam1, 781533162))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 26)) > 0 && func_806(iParam1, -271415321))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 27)) > 0 && func_806(iParam1, -1683207356))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 28)) > 0 && func_806(iParam1, -254794762))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 29)) > 0 && func_806(iParam1, 609066278))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 30)) > 0 && func_806(iParam1, -1712783565))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 13)) > 0 && func_806(iParam1, 1544915253))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_811(int iParam0)
{
	func_933(iParam0, 1);
	func_933(iParam0, 128);
	func_933(iParam0, 256);
	func_933(iParam0, (1 << 9));
	func_933(iParam0, (1 << 10));
	func_933(iParam0, (1 << 11));
	func_933(iParam0, (1 << 12));
	func_933(iParam0, (1 << 16));
	func_933(iParam0, (1 << 14));
	func_933(iParam0, (1 << 18));
	func_933(iParam0, (1 << 19));
	func_933(iParam0, (1 << 20));
	func_933(iParam0, (1 << 21));
	func_933(iParam0, (1 << 15));
	func_933(iParam0, (1 << 17));
	func_933(iParam0, (1 << 27));
	func_933(iParam0, (1 << 30));
}

void func_812(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_813(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= (*uParam0 & iParam1);
	}
}

bool func_814(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("WEAPON_UNARMED"); /* GXTEntry: "Unarmed" */
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(bVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				strcpy_s(&cVar5, 128, WEAPON::_GET_WEAPON_NAME(bVar0));
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					strcpy_s(&cVar5, 128, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))));
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_934(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_934(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_27() == -1 && !func_935(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("WEAPON_UNARMED"); /* GXTEntry: "Unarmed" */
			}
		}
	}
	if (bVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN"); /* GXTEntry: "Cattleman Revolver" */
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_935(joaat("WEAPON_REPEATER_CARBINE") /* GXTEntry: "Carbine Repeater" */))
				{
					bVar0 = joaat("WEAPON_REPEATER_CARBINE"); /* GXTEntry: "Carbine Repeater" */
				}
				else
				{
					bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN"); /* GXTEntry: "Cattleman Revolver" */
				}
				break;
			default:
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN"); /* GXTEntry: "Cattleman Revolver" */
				break;
		}
	}
	else if (bVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		bVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN"); /* GXTEntry: "Lantern" */
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_934(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0) && bVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_936(bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_937(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_938(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, bParam4);
	}
	return bVar0;
}

void func_815(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_612() - fParam1);
	func_939(uParam0, 1);
	func_940(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_816(Vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_817(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FLOW"):
			return 7;
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
		case joaat("VIGNETTE"):
			return 10;
		case joaat("VIG_CAMP_ONLY"):
			return 11;
		case joaat("BASE"):
			return 1;
		case 1871598:
			return 9;
		case joaat("EVENT"):
			return 6;
		case joaat("ARRANGEMENT"):
			return 2;
		case joaat("GRIEFING"):
			return 4;
		case joaat("SUPPLY"):
			return 3;
		case joaat("MOOD_ARTHUR"):
			return 12;
		case joaat("MOOD_ABIGAIL"):
			return 25;
		case joaat("MOOD_BILL"):
			return 16;
		case joaat("MOOD_CHARLES"):
			return 20;
		case joaat("MOOD_DUTCH"):
			return 13;
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
		case joaat("MOOD_HOSEA"):
			return 18;
		case joaat("MOOD_JACK"):
			return 26;
		case joaat("MOOD_JAVIER"):
			return 15;
		case joaat("MOOD_JOHN"):
			return 14;
		case joaat("MOOD_KAREN"):
			return 32;
		case joaat("MOOD_LENNY"):
			return 22;
		case joaat("MOOD_MARY_BETH"):
			return 27;
		case joaat("MOOD_MICAH"):
			return 19;
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
		case joaat("MOOD_PEARSON"):
			return 29;
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
		case joaat("MOOD_STRAUSS"):
			return 30;
		case joaat("MOOD_SWANSON"):
			return 33;
		case joaat("MOOD_TILLY"):
			return 34;
		case joaat("MOOD_UNCLE"):
			return 17;
		case joaat("MOOD_TRELAWNY"):
			return 35;
		case joaat("MOOD_ODRISCOLL"):
			return 23;
		case joaat("MOOD_SEAN"):
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_818(Vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

void func_819(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_941(iParam0, iParam6);
	func_942(iParam0, iParam5);
	func_943(iParam0, iParam4);
	func_944(iParam0, iParam3);
	func_945(iParam0, iParam2);
	func_946(iParam0, iParam1);
}

int func_820(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_947(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_821(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = joaat("CSTP_NORMAL");
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_822(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_823(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_948(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

void func_824(int iParam0)
{
	if (func_410(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_402(iParam0)))
		{
			func_639(iParam0, (1 << 26), 1);
			func_622(iParam0, 19, 1);
		}
	}
}

bool func_825(int iParam0)
{
	if (!func_410(iParam0))
	{
		return false;
	}
	if (!func_413(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_826(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_402(iParam0);
	iVar1 = func_651(iParam0, 0);
	func_949(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_828(int iParam0)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_829(int iParam0)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_830(int iParam0, int iParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 -= (Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1);
	}
}

int func_831(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_613(iParam0))
	{
		return 0;
	}
	iVar0 = func_656(iParam0);
	if (func_369(iVar0, 0))
	{
		if (func_369(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_828(iParam0)) || func_829(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_950(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_951(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_952(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_953(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_953(iParam0, 0));
					func_954(iParam0);
				}
			}
			else
			{
				if (func_619(iParam0, (1 << 15), 1))
				{
					iVar2 = func_953(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_369(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_619(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_952(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_953(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_953(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_952(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_955(iParam0, 0);
	return 1;
}

bool func_832(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

int func_833()
{
	int iVar0;

	iVar0 = func_956();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_834(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_27() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1.0f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2.0f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_957(MISC::ABSF(fVar1) < 1.0f, func_957(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_835(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_837()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_838(int iParam0, bool bParam1, int iParam2)
{
	func_958((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_959(iParam0);
}

void func_839(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_960(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_840(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_961(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_962(iVar5, &bVar2, &iVar0))
			{
				if (!func_883(bVar2, 0))
				{
				}
				else
				{
					iVar1 = func_963(bVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_889(bVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_833() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_833() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_964();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

void func_841(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_842(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT") /* GXTEntry: "Loot Innocent" */:
			return "HONOR_EVENT_LOOT_INNOCENT" /* GXTEntry: "Loot Innocent" */;
		case joaat("HONOR_EVENT_AMBIENT_KILL") /* GXTEntry: "Murder" */:
			return "HONOR_EVENT_AMBIENT_KILL" /* GXTEntry: "Murder" */;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE") /* GXTEntry: "Frighten" */:
			return "HONOR_EVENT_SCARE" /* GXTEntry: "Frighten" */;
		case joaat("HONOR_EVENT_KILL_VERMIN") /* GXTEntry: "Killed Vermin" */:
			return "HONOR_EVENT_KILL_VERMIN" /* GXTEntry: "Killed Vermin" */;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL") /* GXTEntry: "Killed Domestic Animal" */:
			return "HONOR_EVENT_KILL_FARM_ANIMAL" /* GXTEntry: "Killed Domestic Animal" */;
		case joaat("HONOR_EVENT_KILL_HORSE") /* GXTEntry: "Killed Horse" */:
			return "HONOR_EVENT_KILL_HORSE" /* GXTEntry: "Killed Horse" */;
		case joaat("HONOR_EVENT_STEAL_HORSE") /* GXTEntry: "Stole Horse" */:
			return "HONOR_EVENT_STEAL_HORSE" /* GXTEntry: "Stole Horse" */;
		case joaat("HONOR_EVENT_STEAL_DONKEY") /* GXTEntry: "Stole Donkey" */:
			return "HONOR_EVENT_STEAL_DONKEY" /* GXTEntry: "Stole Donkey" */;
		case joaat("HONOR_EVENT_STEAL_MULE") /* GXTEntry: "Stole Mule" */:
			return "HONOR_EVENT_STEAL_MULE" /* GXTEntry: "Stole Mule" */;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT") /* GXTEntry: "Trampled Innocent" */:
			return "HONOR_EVENT_TRAMPLED_INNOCENT" /* GXTEntry: "Trampled Innocent" */;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS") /* GXTEntry: "Abandon Dead Animals" */:
			return "HONOR_EVENT_ABANDON_ANIMALS" /* GXTEntry: "Abandon Dead Animals" */;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT") /* GXTEntry: "Watched Animal Bleedout" */:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT" /* GXTEntry: "Watched Animal Bleedout" */;
		case joaat("HONOR_EVENT_ANTAGONIZE") /* GXTEntry: "Antagonize" */:
			return "HONOR_EVENT_ANTAGONIZE" /* GXTEntry: "Antagonize" */;
		case joaat("HONOR_EVENT_THEFT") /* GXTEntry: "Theft" */:
			return "HONOR_EVENT_THEFT" /* GXTEntry: "Theft" */;
		case joaat("HONOR_EVENT_INTERVENED") /* GXTEntry: "Intervened" */:
			return "HONOR_EVENT_INTERVENED" /* GXTEntry: "Intervened" */;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP") /* GXTEntry: "Wanted In Camp" */:
			return "HONOR_EVENT_WANTED_IN_CAMP" /* GXTEntry: "Wanted In Camp" */;
		case joaat("HONOR_EVENT_DONATED_GAME") /* GXTEntry: "Donated Game" */:
			return "HONOR_EVENT_DONATED_GAME" /* GXTEntry: "Donated Game" */;
		case joaat("HONOR_EVENT_ITEM_REQUEST") /* GXTEntry: "Item Request" */:
			return "HONOR_EVENT_ITEM_REQUEST" /* GXTEntry: "Item Request" */;
		case joaat("HONOR_EVENT_LONG_ABSENCE") /* GXTEntry: "Long Absence" */:
			return "HONOR_EVENT_LONG_ABSENCE" /* GXTEntry: "Long Absence" */;
		case joaat("HONOR_EVENT_CRUEL_DEATH") /* GXTEntry: "Cruel Death" */:
			return "HONOR_EVENT_CRUEL_DEATH" /* GXTEntry: "Cruel Death" */;
		case joaat("HONOR_EVENT_JUSTICE_SERVED") /* GXTEntry: "Justice Served" */:
			return "HONOR_EVENT_JUSTICE_SERVED" /* GXTEntry: "Justice Served" */;
		case joaat("HONOR_EVENT_CHEAT") /* GXTEntry: "Cheat" */:
			return "HONOR_EVENT_CHEAT" /* GXTEntry: "Cheat" */;
		default:
			break;
	}
	return "";
}

int func_843(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	int iVar20;

	sVar0 = -2;
	sVar0.f_1 = sParam5;
	sVar0.f_2 = sParam6;
	sVar0.f_3 = iParam7;
	sVar0.f_0 = 450;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = iParam2;
	sVar13.f_4 = iParam3;
	sVar13.f_5 = iParam4;
	sVar13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&sVar0, &sVar13, bParam8);
	func_965(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_844(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_845(struct<2> /*16*/ sParam0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(sParam0.f_0)) & 32767) | BUILTIN::SHIFT_LEFT((BUILTIN::ROUND(MISC::ABSF(sParam0.f_1)) & 32767), 15);
	if (sParam0.f_0 > 0.0f)
	{
		iVar0 |= (1 << 30);
	}
	if (sParam0.f_1 > 0.0f)
	{
		iVar0 |= (1 << 31);
	}
	return iVar0;
}

void func_846(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_3 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_3 = iParam1;
	return;
}

bool func_847(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	if (Global_1894899.f_8)
	{
		return false;
	}
	return Global_1888801[iParam0 /*35*/].f_19;
}

void func_848(int iParam0)
{
	if (iParam0 != -1 && Global_1894899.f_2 != iParam0)
	{
		TELEMETRY::_TELEMETRY_REGION(func_506(iParam0));
	}
	Global_1894899.f_2 = iParam0;
}

void func_849(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479.f_9)
	{
		return;
	}
	Global_1327479.f_4 += iParam0 * 1000;
	if (bParam2)
	{
		Global_1310750.f_16106 = { Global_36 /*3*/ };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479.f_5 += iParam0 * 500;
		}
	}
	else
	{
		Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

void func_850(int iParam0)
{
	int iVar0;

	if ((((Global_1934266.f_26 == iParam0 || iParam0 == 0) || (iParam0 == joaat("LAW_REGION_VALENTINE_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_VALENTINE"))) || (iParam0 == joaat("LAW_REGION_RHODES_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_RHODES"))) || Global_1934266.f_26 == 0)
	{
		iVar0 = func_195();
		func_395(func_394(iVar0, 1), -1);
	}
}

void func_851()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_789(iVar0))
		{
			Global_1898130[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_852(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_966(iParam0))
	{
		return false;
	}
	if (func_27() == -1)
	{
		if (func_72(6206, 1, 1))
		{
			iVar0 = func_76(0);
			iVar1 = func_111(iVar0);
			return false;
		}
		if (bParam1)
		{
			if (func_98() == iParam0)
			{
				return false;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_523(63))
					{
						return false;
					}
					if (func_70(76) || func_342())
					{
						return false;
					}
					break;
				case 125:
					if (!func_967())
					{
						return false;
					}
					break;
				case 129:
					if (!func_303())
					{
						return false;
					}
					if (func_968(19, 0))
					{
						return false;
					}
					break;
				case 114:
					if (!func_303())
					{
						return false;
					}
					if (func_968(20, 0))
					{
						return false;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_27() == 0)
	{
		return false;
	}
	else
	{
		return false;
	}
	if (func_210(iParam0, 256))
	{
		return false;
	}
	if (bParam1)
	{
		iVar2 = func_969(iParam0);
		if (!func_46(iVar2))
		{
			return false;
		}
		iVar3 = func_970(iVar2);
		if (func_971(iVar3))
		{
			func_643(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_972(iVar3, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_853(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 -= (Global_1894899 & 4);
	}
}

bool func_854()
{
	if ((((func_973() == 10 || func_973() == 11) || func_973() == 12) || func_973() == 13) || func_973() == 14)
	{
		return true;
	}
	return false;
}

struct<8> /*64*/ func_855(int iParam0)
{
	char cVar0[64];

	MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
	if (func_27() == -1)
	{
		if (iParam0 == func_98())
		{
			strcpy_s(&cVar0, 64, func_974(func_357()));
			return cVar0;
		}
	}
	switch (Global_1888801[iParam0 /*35*/].f_20)
	{
		case 3:
			if (func_27() == -1)
			{
				strcpy_s(&cVar0, 64, "hideout_");
				strcat_s(&cVar0, 64, &(Global_1888801[iParam0 /*35*/].f_23));
				if (func_345(45))
				{
					if (iParam0 == 16)
					{
						strcat_s(&cVar0, 64, "_es");
					}
					if (func_975(iParam0))
					{
						MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
					}
				}
			}
			else
			{
				strcpy_s(&cVar0, 64, "");
			}
			break;
		case 8:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				strcpy_s(&cVar0, 64, "");
			}
			else
			{
				strcpy_s(&cVar0, 64, "event_area_");
				strcat_s(&cVar0, 64, &(Global_1888801[iParam0 /*35*/].f_23));
			}
			break;
		case 5:
		case 9:
			MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
			break;
		case 4:
			if (func_27() != -1)
			{
				strcpy_s(&cVar0, 64, "generic_ghosttown");
			}
			else if (func_975(iParam0) && func_345(45))
			{
				MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
			}
			else
			{
				strcpy_s(&cVar0, 64, "generic_ghosttown");
			}
			break;
		case 6:
			strcpy_s(&cVar0, 64, "generic_ghosttown");
			break;
		case 7:
			MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
			break;
	}
	return cVar0;
}

void func_856(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_27() == 0)
	{
		return;
	}
	if (func_39(128))
	{
		return;
	}
	if (!func_976(iParam0))
	{
		return;
	}
	if (func_210(iParam0, 32))
	{
		return;
	}
	func_322(iParam0, 32);
	func_218(&Global_1935630, (1 << 13));
	func_841(func_742(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_283(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_841(func_742(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_841(func_742(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_841(func_742(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_841(func_742(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_841(func_742(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_841(func_742(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_CRAWDAD_WILLIES"));
			break;
		case 1:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MACOMBS_END"));
			break;
		case 2:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MERKINS_WALLER"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FISHING_SPOT"));
			break;
		case 6:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HAGEN_ORCHARDS"));
			break;
		case 7:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SERIAL_KILLER"));
			break;
		case 9:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SHADY_BELLE"));
			break;
		case 10:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			break;
		case 11:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY"));
			break;
		case 12:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BERYLS_DREAM"));
			break;
		case 15:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_FORT_RIGGS"));
			break;
		case 16:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HANGING_DOG_RANCH"));
			break;
		case 17:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LONE_MULE_STEAD"));
			break;
		case 21:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_PAINTED_SKY"));
			break;
		case 22:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH"));
			break;
		case 24:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_STILT_SHACK"));
			break;
		case 25:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE"));
			break;
		case 26:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE"));
			break;
		case 27:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VALLEY_VIEW"));
			break;
		case 28:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_WALLACE_OVERLOOK"));
			break;
		case 29:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WATSONS_CABIN"));
			break;
		case 30:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_CANEBREAK_MANOR"));
			break;
		case 31:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COPPERHEAD_LANDING"));
			break;
		case 121:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_COOTS_CHAPEL"));
			break;
		case 122:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE"));
			break;
		case 124:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM"));
			break;
		case 123:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RILEYS_CHARGE"));
			break;
		case 34:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FIRWOOD_RISE"));
			break;
		case 36:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SIX_POINT_CABIN"));
			break;
		case 114:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_GAPTOOTH_BREACH"));
			break;
		case 37:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BEECHERS_HOPE"));
			break;
		case 40:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ADLER_RANCH"));
			break;
		case 42:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CHEZ_PORTER"));
			break;
		case 43:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_COLTER"));
			break;
		case 44:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_FROZEN_EXPLORERS"));
			break;
		case 45:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MILLESANI_CLAIM"));
			break;
		case 54:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_THE_LOFT"));
			break;
		case 55:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VETERANS_HOMESTEAD"));
			break;
		case 49:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_EWING_BASIN"));
			break;
		case 62:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_OLD_GREENBANK_MILL"));
			break;
		case 64:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CARMODY_DELL"));
			break;
		case 65:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR"));
			break;
		case 66:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_GUTHRIE_FARM"));
			break;
		case 68:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOWNES_RANCH"));
			break;
		case 71:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK"));
			break;
		case 72:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LARNED_SOD"));
			break;
		case 74:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LUCKYS_CABIN"));
			break;
		case 77:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM"));
			break;
		case 79:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_BEAVER_HOLLOW"));
			break;
		case 63:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_BEECHERS_C"));
			break;
		case 80:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BLACK_BALSAM_RISE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_01"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_02"));
			break;
		case 82:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BUTCHER_CREEK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_POISON_LEAK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_29"));
			break;
		case 83:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOVERHILL"));
			break;
		case 85:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_ANGRY_ISOLATIONIST"));
			break;
		case 86:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_MACLEANS_HOUSE"));
			break;
		case 87:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MOSSY_FLATS"));
			break;
		case 89:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WILLARDS_REST"));
			break;
		case 91:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_VAN_HORN_MANSION"));
			break;
		case 96:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CATFISH_JACKSONS"));
			break;
		case 98:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_CLEMENS_POINT"));
			break;
		case 99:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COMPSONS_STEAD"));
			break;
		case 100:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HILL_HAVEN_RANCH"));
			break;
		case 102:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LONNIES_SHACK"));
			break;
		case 104:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_PASTURE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_HOUSE"));
			break;
		case 106:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SLAVE_PEN"));
			break;
		case 107:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_AURORA_BASIN"));
			break;
		case 109:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COCHINAY"));
			break;
		case 112:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TANNERS_REACH"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_LANDMARK_EVELYN_MILLER_CAMP"));
			break;
	}
	if (bParam1)
	{
		func_322(iParam0, 64);
	}
}

var func_857()
{
	if (func_27() != -1)
	{
		return 0;
	}
	return func_519(joaat("FAME"));
}

void func_858(int iParam0)
{
	if (func_977(iParam0))
	{
		if (!func_978(iParam0) && !func_73(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!func_979(285))
			{
				func_980(285, 0);
			}
			func_981(iParam0, 1);
		}
		if (Global_1934266.f_69 != 0.75f && !func_73(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			Global_1934266.f_69 = 0.75f;
			LAW::SET_LAW_SENSE_RANGE_MODIFIER(PLAYER::PLAYER_ID(), Global_1934266.f_69);
		}
	}
	else if (Global_1934266.f_69 != 1.0f)
	{
		Global_1934266.f_69 = 1.0f;
		LAW::SET_LAW_SENSE_RANGE_MODIFIER(PLAYER::PLAYER_ID(), Global_1934266.f_69);
	}
}

bool func_859()
{
	return Global_1935630.f_44 == joaat("WEAPON_FISHINGROD");
}

bool func_860()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1900073, false))
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FISHING_CORE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_861(int iParam0, int iParam1)
{
	return func_318(Global_1900073.f_2[iParam0], iParam1);
}

int func_862(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

int func_863(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_864(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return joaat("SHOP_SDN_FRENCH_MARKET02");
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 113:
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 115:
			return joaat("SHOP_STR_HORSE_FENCE_MP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 104:
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 82:
			return joaat("SHOP_VAN_FENCE");
		case 117:
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 121:
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 101:
			return joaat("SHOP_DYNAMIC") /* GXTEntry: "Trade" */;
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES") /* GXTEntry: "Wilderness Outfitters" */;
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 124:
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 150:
			return joaat("SHOP_CLOTHING") /* GXTEntry: "Shop at Clothing Store" */;
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 152:
			return joaat("SHOP_WARDROBE");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 59:
			return joaat("SHOP_BVH_PEARSON");
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 57:
			return joaat("SHOP_CLM_PEARSON");
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 56:
			return joaat("SHOP_HSO_PEARSON");
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 58:
			return joaat("SHOP_SHB_PEARSON");
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 119:
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
		case 122:
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 125:
			return joaat("SHOP_THL_FENCE");
		case 123:
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
		case 99:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 100:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 4:
			return joaat("SHOP_BGV_TRAPPER_1");
		case 5:
			return joaat("SHOP_BGV_TRAPPER_2");
		case 34:
			return joaat("SHOP_ROA_TRAPPER");
		case 67:
			return joaat("SHOP_TAL_TRAPPER");
		default:
			break;
	}
	return 0;
}

int func_866(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (!func_264(15, &sVar0))
	{
		return -1;
	}
	sVar0.f_3 = iParam0;
	sVar0.f_2 = -125049320;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0))
	{
		iVar6 = func_982(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_867(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = BUILTIN::SHIFT_LEFT(iParam1, 11) | iParam0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_868(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_983(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_869(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	var uVar6;
	struct<4> /*32*/ sVar7;

	func_264(15, &sVar0);
	sVar0.f_2 = -566397848;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0);
	sVar0.f_3 = iParam1;
	sVar0.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar6, &sVar0);
	func_264(15, &sVar7);
	sVar7.f_2 = -1222062814;
	sVar7.f_3 = uVar6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar7.f_1), &sVar7))
	{
		sVar7.f_2 = -1148228754;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar5, &sVar7);
	}
	return uVar5;
}

bool func_870(int iParam0, bool bParam1)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_591(iParam0, 8))
		{
			return false;
		}
	}
	if (func_591(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	bool bVar6;
	bool bVar7;
	struct<4> /*32*/ sVar8;

	func_264(15, &sVar0);
	sVar0.f_2 = -566397848;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0);
	sVar0.f_3 = iParam1;
	sVar0.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	func_264(15, &sVar8);
	sVar8.f_2 = -1222062814;
	sVar8.f_3 = uVar5;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar8.f_1), &sVar8))
	{
		sVar8.f_2 = 939842437;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&bVar6, &sVar8))
		{
			bVar7 = bVar6;
			return func_719(bVar7, 1, 0);
		}
	}
	return true;
}

bool func_872()
{
	var uVar0;

	if (func_58())
	{
		if (!func_70(4))
		{
			return true;
		}
	}
	return (PED::_IS_META_PED_USING_COMPONENT(Global_35, joaat("HATS")) || func_984(joaat("CI_CATEGORY_WARDROBE_HAT"), &uVar0));
}

bool func_873(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	var uVar6;
	struct<4> /*32*/ sVar7;

	func_264(15, &sVar0);
	sVar0.f_2 = -566397848;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0);
	sVar0.f_3 = iParam1;
	sVar0.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	func_264(15, &sVar7);
	sVar7.f_2 = -1222062814;
	sVar7.f_3 = uVar5;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar7.f_1), &sVar7))
	{
		sVar7.f_2 = 1689379704;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar6, &sVar7))
		{
			return uVar6;
		}
	}
	return false;
}

bool func_874(int iParam0)
{
	if (!func_233(Global_1310720.f_22))
	{
		return true;
	}
	if (func_870(Global_1310720.f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720.f_22) || (2 == iParam0 && 0 == Global_1310720.f_22))
	{
		return true;
	}
	return Global_1310720.f_22 == iParam0;
}

bool func_875(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;
	int iVar7;

	func_264(15, &sVar0);
	sVar0.f_2 = -1999103282;
	sVar0.f_3 = iParam0;
	sVar0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = 1563492982;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0))
		{
			iVar6 = func_985(iVar5);
			if (func_70(iVar6))
			{
				return false;
			}
		}
		sVar0.f_2 = 1975530226;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0))
		{
			iVar6 = func_985(iVar5);
			if (!func_70(iVar6))
			{
				return false;
			}
		}
		sVar0.f_2 = 108838230;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0))
		{
			iVar7 = func_986(iVar5);
			if (func_523(iVar7))
			{
				return false;
			}
		}
		sVar0.f_2 = 181294442;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0))
		{
			iVar7 = func_986(iVar5);
			if (!func_523(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_876(int iParam0)
{
	if (!func_987(iParam0))
	{
		return -1;
	}
	return Global_40.f_9096[iParam0 /*12*/];
}

bool func_877(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] & iParam0) != 0;
}

int func_878(Vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!func_46(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(func_988(iVar1), vParam0) < func_957(func_989(iVar1) == 0.0f, fParam3, func_989(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_879(Vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_968(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_990(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_880(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_991(func_177(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_881(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_882(int iParam0)
{
	switch (iParam0)
	{
		case 1261237250:
			if (STREAMING::IS_IPL_ACTIVE_HASH(-109425099))
			{
				STREAMING::REMOVE_IPL_HASH(-109425099);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(1070723367))
			{
				STREAMING::REMOVE_IPL_HASH(1070723367);
			}
			break;
		case -109425099:
		case 1070723367:
			if (STREAMING::IS_IPL_ACTIVE_HASH(1261237250))
			{
				STREAMING::REMOVE_IPL_HASH(1261237250);
			}
			break;
		case 1475953931:
			if (STREAMING::IS_IPL_ACTIVE_HASH(-316909020))
			{
				STREAMING::REMOVE_IPL_HASH(-316909020);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(-1962893335))
			{
				STREAMING::REMOVE_IPL_HASH(-1962893335);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(1351589798))
			{
				STREAMING::REMOVE_IPL_HASH(1351589798);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(300868838))
			{
				STREAMING::REMOVE_IPL_HASH(300868838);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(-1788578071))
			{
				STREAMING::REMOVE_IPL_HASH(-1788578071);
			}
			if (STREAMING::IS_IPL_ACTIVE_HASH(1157066259))
			{
				STREAMING::REMOVE_IPL_HASH(1157066259);
			}
			break;
		case -1962893335:
		case -1788578071:
		case -316909020:
		case 300868838:
		case 1157066259:
		case 1351589798:
			if (STREAMING::IS_IPL_ACTIVE_HASH(1475953931))
			{
				STREAMING::REMOVE_IPL_HASH(1475953931);
			}
			break;
	}
}

bool func_883(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

struct<4> /*32*/ func_884(bool bParam0)
{
	return func_886(joaat("CHARACTER"), func_992(), joaat("SLOTID_NONE"), bParam0);
}

int func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return joaat("SLOTID_CARAVAN_UPGRADE");
		default:
			break;
	}
	return joaat("SLOTID_SATCHEL");
}

struct<4> /*32*/ func_886(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_883(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_887(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

int func_887(bool bParam0)
{
	if (func_27() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_888(var uParam0)
{
	return func_791(*uParam0, 1);
}

int func_889(bool bParam0)
{
	Vector3 vVar0;

	if (!func_883(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_890(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_883(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_893(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_993("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_994(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_934(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_995(iVar1);
				return true;
			}
			iVar3++;
		}
		func_995(iVar1);
	}
	return false;
}

int func_891(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40431)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] /*2*/ };
		}
		iVar0++;
	}
	sVar1 = -1;
	if (Global_1058888.f_40431 < 32)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar1 /*2*/ };
	}
	Global_1058888.f_40431--;
	if (Global_1058888.f_40431 < 0)
	{
		Global_1058888.f_40431 = 0;
	}
	return 1;
}

int func_892(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = (Global_1058888.f_40431 - 1);
	sVar1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 /*2*/] /*2*/ };
		}
		iVar0--;
	}
	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { sVar1 /*2*/ };
	Global_1058888.f_40431++;
	if (Global_1058888.f_40431 > 32)
	{
		Global_1058888.f_40431 = 32;
	}
	return 1;
}

bool func_893(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_883(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_889(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_996(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_997(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_894(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_998(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_1000(&sVar0, func_999(0));
	}
	if (!func_1001(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_995(iVar18);
	return iVar19;
}

void func_895(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_27() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_STATSTRACKER_DEED_STATUS(iParam0, iParam1, iParam2, &vVar0);
}

int func_896(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_111(iParam0))
	{
		case 1:
			iVar0 = func_113(iParam0);
			return func_1002(iVar0);
		case 8:
			iVar1 = func_113(iParam0);
			if (func_117(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_1003(iVar1);
			}
			break;
	}
	return -1;
}

int func_897()
{
	if (!func_172(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_172(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_172(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_172(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_172(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_172(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_172(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_898(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	func_491(iParam0, iParam1);
}

void func_899(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_516(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_218(&Global_1935630, (1 << 22));
	}
	MISC::ENABLE_DISPATCH_SERVICE(15 /*DT_OnFoot*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6 /*DT_PoliceRiders*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1 /*DT_PoliceAutomobile*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16 /*DT_PoliceDogs*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2 /*DT_PoliceHelicopter*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3 /*DT_FireDepartment*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4 /*DT_SwatAutomobile*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5 /*DT_AmbulanceDepartment*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7 /*DT_PoliceVehicleRequest*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9 /*DT_PoliceAutomobileWaitPulledOver*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10 /*DT_PoliceAutomobileWaitCruising*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11 /*DT_Gangs*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12 /*DT_SwatHelicopter*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13 /*DT_PoliceBoat*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14 /*DT_ArmyVehicle*/, bParam0);
}

int func_900(bool bParam0)
{
	if (!bParam0 && func_310(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_901(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_902(int iParam0, bool bParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (func_76(0) != iParam0)
	{
		return;
	}
	if (func_1004(iParam0))
	{
		if (bParam1)
		{
			func_1005(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_1006(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_903(int iParam0)
{
	return func_1008(func_1007(iParam0));
}

int func_904(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

int func_905(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_906(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_905(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

void func_907(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return;
	}
	if (!func_1009(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_15 = 0;
}

int func_908(int iParam0)
{
	if (func_1010(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PROMPT_MONEY"));
		func_1011(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_909(int iParam0, int iParam1)
{
	if (!func_763(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 |= iParam1;
}

bool func_910(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

bool func_911(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return false;
	}
	return true;
}

void func_912(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_9 = 0.0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0.0f;
	uParam0->f_11 = -1;
}

void func_913(var uParam0)
{
	if (func_1010(uParam0->f_3))
	{
		func_1011(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

bool func_914(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

char* func_915(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

void func_916(int iParam0, bool bParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	if (!func_772(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_532(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_532(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_111(iParam0), func_113(iParam0), func_1012(iParam0), func_532(iParam0), Global_36);
		}
	}
	func_898(iParam0, 1);
	bParam1 = bParam1;
}

int func_917(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	if ((Global_40.f_358[iParam0 /*12*/].f_5 & 2) != 0)
	{
		return 5;
	}
	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_1013(Global_40.f_358[iParam0 /*12*/]);
	}
	return 0;
}

void func_918(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(func_1014(iParam0), joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_1014(iParam0), joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_1014(iParam0), joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(func_1014(iParam0));
	}
}

bool func_919(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_920(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1015(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_921(bool bParam0)
{
	if (func_1016(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_922(int iParam0)
{
	bool bVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_656(iParam0);
	func_921(bVar0);
	func_830(iParam0, (1 << 13), 1);
}

void func_923(bool bParam0)
{
	if (func_1016(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_924(int iParam0)
{
	bool bVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_656(iParam0);
	func_923(bVar0);
	func_830(iParam0, (1 << 13), 0);
}

void func_925(bool bParam0)
{
	if (func_1016(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575 /* Hex: 0x000FFFFF */);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_926(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_413(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_927(int iParam0)
{
	bool bVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_656(iParam0);
	func_925(bVar0);
	func_830(iParam0, (1 << 14), 1);
}

void func_928(bool bParam0)
{
	if (func_1016(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575 /* Hex: 0x000FFFFF */);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_929(int iParam0)
{
	bool bVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_656(iParam0);
	func_928(bVar0);
	func_830(iParam0, (1 << 14), 0);
}

int func_930(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1017(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_931(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_630(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_933(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 -= (Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1);
}

bool func_934(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

bool func_935(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_936(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		sVar0 = { func_1018(bParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1019((398 + iVar28), 1);
			if (func_1020(bParam0, &sVar0, iVar5, 0))
			{
				if (func_1021(bParam0, &sVar6, iVar5))
				{
					sVar29 = { func_886(bParam0, sVar0, iVar5, 0) /*4*/ };
					func_1022(bParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1023(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return 0;
					}
					func_1024(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_1025(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return 1;
			}
		}
	}
}

void func_937(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *bParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *bParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *bParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *bParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *bParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *bParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *bParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0.0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361 /*PCF_IgnoreWeaponDegradation*/, true);
	}
}

bool func_938(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

void func_939(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_940(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_941(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= (*iParam0 & (1 << 31));
	}
}

void func_942(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_943(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_262(*iParam0);
	iVar1 = func_263(*iParam0);
	if (iParam1 < 1 || iParam1 > func_704(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_944(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_945(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_946(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

int func_947(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case joaat("CSTAG_MEALTIME"):
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case joaat("CSTAG_LAST"):
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case joaat("CSTAG_SETUP"):
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case joaat("CSTAG_TEST"):
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case joaat("CSTAG_MOOD_LAST"):
			return 255;
		case joaat("CSTAG_TEARDOWN"):
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case joaat("CSTAG_FLOW_FIRST"):
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case joaat("CSTAG_MOOD_FIRST"):
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
			return 397;
			return 69;
			return 394;
			return 434;
			return 48;
			return 79;
			return 301;
			return 216;
			return 63;
			return 75;
			return 144;
			return 462;
			return 339;
			return 44;
			return 503;
			return 478;
			return 20;
			return 278;
			return 281;
			return 109;
			return 334;
			return 209;
			return 263;
			return 207;
			return 167;
			return 161;
			return 262;
			return 183;
			return 162;
			return 72;
			return 468;
			return 231;
			return 340;
			return 384;
			return 143;
			return 31;
			return 117;
			return 100;
			return 379;
			return 390;
			return 276;
			return 449;
			return 307;
			return 274;
			return 191;
			return 447;
			return 508;
			return 235;
			return 388;
			return 430;
			return 176;
			return 448;
			return 475;
			return 459;
			return 62;
			return 226;
			return 491;
			return 453;
			return 500;
			return 154;
			return 123;
			return 221;
			return 36;
			return 381;
			return 82;
			return 319;
			return 121;
			return 497;
			return 348;
			return 347;
			return 213;
			return 5;
			return 15;
			return 386;
			return 416;
			return 465;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

int func_948(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

void func_949(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1026(iParam1);
	}
}

float func_950(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0.0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_299(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_951(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_1027(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_656(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

int func_953(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_1028(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_954(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_955(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

int func_956()
{
	return Global_40.f_11095.f_35;
}

float func_957(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_958(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_1029(bParam1);
	}
}

void func_959(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_960(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_961(int iParam0)
{
	Vector3 vVar0;

	if (!func_264(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_962(int iParam0, bool bParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_264(23, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -57097983;
		sVar0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			sVar0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*bParam1 = uVar5;
			sVar0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_963(bool bParam0)
{
	return bParam0;
}

int func_964()
{
	int iVar0;

	iVar0 = func_833();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_965(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_966(int iParam0)
{
	int iVar0;

	iVar0 = func_1030(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return Global_40.f_9571[iVar0 /*10*/].f_1 == 5;
}

bool func_967()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_968(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_27() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (Global_1347702[iVar0 /*49*/].f_13 & (1 << 14)) == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_969(int iParam0)
{
	if (!func_1031(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_970(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -15;
	}
	return func_1032(iParam0);
}

bool func_971(int iParam0)
{
	return iParam0 != -15;
}

bool func_972(int iParam0, bool bParam1)
{
	return func_1033(func_177(), iParam0, bParam1);
}

int func_973()
{
	return Global_1572864.f_21;
}

char* func_974(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "camp_Lakay";
		case 6:
			return "camp_BeaverHollow";
		case 0:
			return "camp_Colter";
		case 2:
			return "camp_ClemensPoint";
		case 1:
			return "camp_HorseshoeOverlook";
		case 4:
			return "camp_Guarma";
		case 3:
			return "camp_ShadyBelle";
		case 7:
			return "camp_PronghornRanch";
		case 8:
			return "camp_BeechersHope";
		default:
			break;
	}
	return "";
}

bool func_975(int iParam0)
{
	switch (iParam0)
	{
		case 43:
		case 71:
		case 98:
			return true;
		case 9:
		case 79:
			if (func_852(iParam0, 1))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_976(int iParam0)
{
	int iVar0;

	if (func_782(iParam0))
	{
		if (!func_345(45))
		{
			return false;
		}
	}
	iVar0 = func_283(iParam0);
	if (func_58())
	{
		if (!func_172(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

int func_977(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (!func_207(iParam0))
	{
		return 0;
	}
	sVar0 = -1;
	sVar0.f_4 = -15;
	func_1034(iParam0, &sVar0);
	return func_1035(&sVar0);
}

bool func_978(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (!func_207(iParam0))
	{
		return false;
	}
	sVar0 = -1;
	sVar0.f_4 = -15;
	func_1034(iParam0, &sVar0);
	return func_1036(&sVar0);
}

bool func_979(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_27() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_980(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1037(iParam0, &iVar0, &iVar1);
	if (!func_1038(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1039(iVar0, iVar1);
}

void func_981(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;

	if (!func_207(iParam0))
	{
		return;
	}
	sVar0 = -1;
	sVar0.f_4 = -15;
	func_1034(iParam0, &sVar0);
	func_1040(&sVar0, bParam1);
	func_1041(iParam0, &sVar0);
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CC_LAKAY"):
			return 5;
		case joaat("CC_BEAVER_HOLLOW"):
			return 6;
		case joaat("CC_COLTER"):
			return 0;
		case joaat("CC_CLEMENS_POINT"):
			return 2;
		case joaat("CC_GUARMA"):
			return 4;
		case joaat("CC_HORSESHOE_OVERLOOK"):
			return 1;
		case joaat("CC_SHADY_BELLE"):
			return 3;
		case joaat("CC_PRONGHORN_RANCH"):
			return 7;
		case joaat("CC_BEECHERS_HOPE"):
			return 8;
		default:
			break;
	}
	return -1;
}

int func_983(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_11;
}

bool func_984(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_1043(func_1042(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_1044(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_985(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_986(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(Global_1347702[iVar0 /*49*/].f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_987(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

Vector3 func_988(int iParam0)
{
	return func_1045(iParam0);
}

float func_989(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50.0f;
	}
	return 0.0f;
}

Vector3 func_990(int iParam0)
{
	Vector3 vVar0;

	if (!func_174(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (func_1046(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 /*3*/ };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_991(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_1033(iParam0, iParam1, 1))
	{
		iVar0 = func_262(iParam1);
		iVar1 = func_263(iParam0);
		iVar2 = (func_263(iParam0) - func_263(iParam1));
		iVar3 = (func_262(iParam0) - func_262(iParam1));
		iVar4 = (func_261(iParam0) - func_261(iParam1));
		iVar5 = (func_258(iParam0) - func_258(iParam1));
		iVar6 = (func_259(iParam0) - func_259(iParam1));
		iVar7 = (func_260(iParam0) - func_260(iParam1));
	}
	else
	{
		iVar0 = func_262(iParam0);
		iVar1 = func_263(iParam1);
		iVar2 = (func_263(iParam1) - func_263(iParam0));
		iVar3 = (func_262(iParam1) - func_262(iParam0));
		iVar4 = (func_261(iParam1) - func_261(iParam0));
		iVar5 = (func_258(iParam1) - func_258(iParam0));
		iVar6 = (func_259(iParam1) - func_259(iParam0));
		iVar7 = (func_260(iParam1) - func_260(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_704(iVar0, iVar1);
		iVar3--;
		iVar0 = BUILTIN::ROUND(func_1047(BUILTIN::TO_FLOAT(iVar0 + 1), 0.0f, 12.0f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

struct<4> /*32*/ func_992()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_993(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_887(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_994(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_995(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_996(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, joaat("TAG_ITEM_PROPERTY")))
	{
		return true;
	}
	return false;
}

void func_997(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX") /* GXTEntry: "Revolver Cartridges - Regular" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED") /* GXTEntry: "Opened Revolver Cartridges" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS") /* GXTEntry: "Revolver Cartridges - Express" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS"); /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Revolver Cartridges - High Velocity" */:
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY"); /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX") /* GXTEntry: "Pistol Cartridges - Regular" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED") /* GXTEntry: "Opened Pistol Cartridges" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS") /* GXTEntry: "Pistol Cartridges - Express" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS"); /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Pistol Cartridges - High Velocity" */:
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY"); /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Regular" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED") /* GXTEntry: "Opened Rifle Cartridges" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS") /* GXTEntry: "Rifle Cartridges - Express" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS"); /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Rifle Cartridges - High Velocity" */:
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY"); /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX") /* GXTEntry: "Repeater Cartridges - Regular" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED") /* GXTEntry: "Opened Repeater Cartridges" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS") /* GXTEntry: "Repeater Cartridges - Express" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS"); /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Repeater Cartridges - High Velocity" */:
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY"); /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX") /* GXTEntry: "Shotgun Shells - Regular" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED") /* GXTEntry: "Opened Shotgun Shells" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG") /* GXTEntry: "Shotgun - Slug" */:
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG"); /* GXTEntry: "Shotgun - Slug" */
			break;
		case joaat("AMMO_22_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Varmint" */:
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22"); /* GXTEntry: "Rifle Cartridges - Varmint" */
			break;
	}
}

struct<18> /*144*/ func_998(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<18> /*144*/ sVar0;

	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_3 = -1;
	sVar0.f_4 = -1;
	sVar0.f_5 = -1;
	sVar0.f_6 = -1;
	sVar0.f_7 = -1;
	sVar0.f_8 = -1;
	sVar0.f_13 = -1;
	sVar0.f_14 = -1;
	sVar0.f_15 = -1;
	sVar0.f_16 = -1;
	sVar0.f_17 = -1;
	if (bParam0 != 0)
	{
		sVar0.f_0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
	{
		sVar0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
	{
		sVar0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
	{
		sVar0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		sVar0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		sVar0.f_5 = iParam5;
	}
	return sVar0;
}

struct<4> /*32*/ func_999(bool bParam0)
{
	int iVar0;

	iVar0 = func_887(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_886(joaat("CARRIED_WEAPONS"), func_884(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_886(joaat("CARRIED_WEAPONS"), func_884(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_886(joaat("CARRIED_WEAPONS"), func_884(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_1000(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_1001(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_887(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

bool func_1004(int iParam0)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	switch (func_111(iParam0))
	{
		case 1:
			switch (func_113(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_113(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_1005(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_887(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_1044(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, bVar1);
		}
		iVar0++;
	}
	func_1049(func_1048(iParam0), 6);
}

void func_1006(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_887(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_1044(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, bVar1, 0);
		}
		iVar0++;
	}
	func_1050(func_1048(iParam0), 6);
}

int func_1007(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1008(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { sVar0 /*5*/ };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { sVar0 /*5*/ };
	Global_1898164.f_162--;
	func_1051(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_1009(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = Global_1899528.f_11[iParam0];
	return *iParam1 != -1;
}

bool func_1010(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((Global_1945188[iParam0 /*18*/].f_1 & 2) == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_1011(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_1010(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1052(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1053(iVar0);
	*uParam0 = 0;
}

int func_1012(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_904(func_248(iParam0));
}

int func_1013(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 += -1;
	}
	return 0;
}

int func_1014(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	strcpy_s(&cVar0, 64, func_1054(iParam0));
	sVar8 = func_754(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

bool func_1015(int iParam0)
{
	int iVar0;
	int iVar1;

	func_820(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_1016(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

int func_1017(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("COMPANION_OUTFIT_OUTLAW"):
			return 14;
		case -2040275819:
			return 46;
		case joaat("COMPANION_OUTFIT_ISLAND"):
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case joaat("COMPANION_OUTFIT_POLICE_UNIFORM"):
			return 31;
		case joaat("COMPANION_OUTFIT_DECAPITATED"):
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case joaat("COMPANION_OUTFIT_SHOOTOUT"):
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case joaat("COMPANION_OUTFIT_BEATUP"):
			return 32;
		case joaat("COMPANION_OUTFIT_NIGHTGOWN"):
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case joaat("COMPANION_OUTFIT_JAIL_ARMED"):
			return 57;
		case -481967001:
			return 28;
		case joaat("COMPANION_OUTFIT_SLEEPING"):
			return 61;
		case joaat("COMPANION_OUTFIT_HEIST_ALT"):
			return 18;
		case joaat("COMPANION_OUTFIT_DEFAULT"):
			return 80;
		case joaat("COMPANION_OUTFIT_COOL_WEATHER_PANTS"):
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case joaat("COMPANION_OUTFIT_GUARD"):
			return 30;
		case joaat("COMPANION_OUTFIT_COOL_WEATHER_CASUAL"):
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case joaat("COMPANION_OUTFIT_COLD_WEATHER"):
			return 1;
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_WORKING"):
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case joaat("COMPANION_OUTFIT_PLAYED_TUTORIAL"):
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case joaat("COMPANION_OUTFIT_KIDNAPPED"):
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case joaat("COMPANION_OUTFIT_ISLAND_INJURED"):
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case joaat("COMPANION_OUTFIT_HEIST"):
			return 17;
		case joaat("COMPANION_OUTFIT_ROBBERY_ALT"):
			return 16;
		case joaat("COMPANION_OUTFIT_PRISON"):
			return 8;
		case joaat("COMPANION_OUTFIT_COMBAT"):
			return 41;
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_INJURED"):
			return 52;
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_PANTS"):
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case joaat("COMPANION_OUTFIT_JAIL"):
			return 56;
		case 1484386316:
			return 77;
		case joaat("COMPANION_OUTFIT_ROBBERY"):
			return 15;
		case joaat("COMPANION_OUTFIT_ISLAND_HOLSTER"):
			return 6;
		case joaat("COMPANION_OUTFIT_GALA"):
			return 33;
		case joaat("COMPANION_OUTFIT_WARM_WEATHER_CASUAL"):
			return 12;
		case 1818898449:
			return 38;
		case joaat("COMPANION_OUTFIT_DEPUTY"):
			return 34;
		case joaat("COMPANION_OUTFIT_PROSTITUTE"):
			return 10;
		case joaat("COMPANION_OUTFIT_HEALING"):
			return 67;
		case joaat("COMPANION_OUTFIT_FISHING"):
			return 74;
		case joaat("COMPANION_OUTFIT_COLD_WEATHER_INJURED"):
			return 2;
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

struct<5> /*40*/ func_1018(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_884(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_889(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_886(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_999(bParam1) /*4*/ };
			if (bParam2 && func_1055(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_1020(bParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else if (!func_1020(bParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
				else if (func_1021(bParam0, &sVar5, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			sVar0.f_4 = joaat("SLOTID_ACTIVE_HORSE");
			break;
		case joaat("EMOTE"):
			sVar0.f_4 = -813824107;
			sVar0 = { func_1056(bParam1) /*4*/ };
			switch (func_1044(bParam0))
			{
				case 664784405:
					sVar0.f_4 = -1150938404;
					break;
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_DANCE");
					break;
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_GREET");
					break;
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_TAUNT");
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_1057(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_886(joaat("KIT_CAMP") /* GXTEntry: "Camp" */, sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP") /* GXTEntry: "Camp" */);
			}
			else if (func_1057(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_886(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_1058(sVar0, &sVar27, bParam1, 0))
				{
					sVar0.f_4 = 0;
				}
				else
				{
					sVar0 = { sVar27.f_5 /*4*/ };
					sVar0.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else
			{
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

int func_1019(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -1783281882;
		case 2:
			return 1704602624;
		case 3:
			return 1214181762;
		case 4:
			return 1520605650;
		case 5:
			return 551482925;
		case 6:
			return 843929315;
		case 7:
			return 1974334822;
		case 8:
			return -1963435638;
		case 9:
			return -430578371;
		case 10:
			return -730381952;
		case 11:
			return -1500304973;
		case 12:
			return -253503777;
		case 13:
			return 1352275534;
		case 14:
			return 1666399168;
		case 15:
			return joaat("SLOTID_CAMP_DOG");
		case 16:
			return joaat("SLOTID_CAMP_DOG_COAT");
		case 17:
			return -1774867076;
		case 18:
			return joaat("SLOTID_CAMP_FLAG");
		case 19:
			return joaat("SLOTID_CAMP_FOLLOWER");
		case 20:
			return joaat("SLOTID_CAMP_FOLLOWER_OUTFIT");
		case 21:
			return joaat("SLOTID_CAMP_LOCKBOX");
		case 22:
			return joaat("SLOTID_CAMP_MUSIC");
		case 23:
			return joaat("SLOTID_CAMP_TENT");
		case 24:
			return joaat("SLOTID_CAMP_THEME");
		case 25:
			return joaat("SLOTID_CAMP_UPGRADE");
		case 26:
			return -6605744;
		case 27:
			return 953047564;
		case 28:
			return 769706682;
		case 29:
			return joaat("SLOTID_CARD_PROGRESSION");
		case 30:
			return -2047978619;
		case 31:
			return -586319254;
		case 32:
			return 249896112;
		case 33:
			return joaat("SLOTID_CARDS");
		case 34:
			return joaat("SLOTID_CARDS_DEADEYE");
		case 35:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_1");
		case 36:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_2");
		case 37:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_3");
		case 38:
			return joaat("SLOTID_CARRIED_WEAPONS");
		case 39:
			return joaat("SLOTID_CARRIED_WEAPONS_MODS");
		case 40:
			return joaat("SLOTID_CHALLENGE_PROGRESSION");
		case 41:
			return joaat("SLOTID_CHARACTER_0");
		case 42:
			return joaat("SLOTID_CHARACTER_1");
		case 43:
			return -382216265;
		case 44:
			return joaat("SLOTID_CHIPS_GAME");
		case 45:
			return 1704297235;
		case 46:
			return -1139016418;
		case 47:
			return 897705377;
		case 48:
			return 17961769;
		case 49:
			return 205582207;
		case 50:
			return 900740963;
		case 51:
			return -1369589344;
		case 52:
			return -1695823795;
		case 53:
			return -41453074;
		case 54:
			return 539767227;
		case 55:
			return 1210490314;
		case 56:
			return -399684751;
		case 57:
			return 2138893455;
		case 58:
			return -1617010487;
		case 59:
			return -832377028;
		case 60:
			return -428040245;
		case 61:
			return 1279288897;
		case 62:
			return -594897905;
		case 63:
			return -1360459240;
		case 64:
			return 1838428396;
		case 65:
			return -1467846997;
		case 66:
			return -490610263;
		case 67:
			return -1885413079;
		case 68:
			return 708884155;
		case 69:
			return -134459952;
		case 70:
			return -1912136700;
		case 71:
			return -1268031552;
		case 72:
			return 1177953227;
		case 73:
			return 2130805296;
		case 74:
			return 38093490;
		case 75:
			return -269153218;
		case 76:
			return -1995068011;
		case 77:
			return -164284834;
		case 78:
			return 1446463345;
		case 79:
			return 1501315823;
		case 80:
			return -750379482;
		case 81:
			return -929560937;
		case 82:
			return 608323241;
		case 83:
			return 1030796013;
		case 84:
			return 1915057434;
		case 85:
			return -1582276476;
		case 86:
			return 692059311;
		case 87:
			return 2062839241;
		case 88:
			return -1884531872;
		case 89:
			return -866434534;
		case 90:
			return -1252192421;
		case 91:
			return 1243288963;
		case 92:
			return -1953772189;
		case 93:
			return 754411745;
		case 94:
			return 545309006;
		case 95:
			return -1089810811;
		case 96:
			return 1957869400;
		case 97:
			return -241412332;
		case 98:
			return -1548010959;
		case 99:
			return 550150488;
		case 100:
			return 946565453;
		case 101:
			return 434443248;
		case 102:
			return -1709914938;
		case 103:
			return 366686112;
		case 104:
			return -1370063350;
		case 105:
			return 2126829550;
		case 106:
			return 226552910;
		case 107:
			return 721193431;
		case 108:
			return -315672460;
		case 109:
			return 623544501;
		case 110:
			return 259556714;
		case 111:
			return -2125361825;
		case 112:
			return 1078230356;
		case 113:
			return 1885364811;
		case 114:
			return 1630382737;
		case 115:
			return 1738245512;
		case 116:
			return 1540262216;
		case 117:
			return 1016871472;
		case 118:
			return 13829069;
		case 119:
			return 737051352;
		case 120:
			return 1734614610;
		case 121:
			return -208715295;
		case 122:
			return 1435062936;
		case 123:
			return 1483055553;
		case 124:
			return 380335002;
		case 125:
			return -1079385677;
		case 126:
			return 676610411;
		case 127:
			return 2145419552;
		case 128:
			return 657238733;
		case 129:
			return 1850579281;
		case 130:
			return -1923957384;
		case 131:
			return -1142828108;
		case 132:
			return -1400618531;
		case 133:
			return -1433857135;
		case 134:
			return 209987206;
		case 135:
			return joaat("SLOTID_COACH_INSURANCE");
		case 136:
			return joaat("SLOTID_COACH_LIVERY");
		case 137:
			return -59178517;
		case 138:
			return 2134884601;
		case 139:
			return 651707517;
		case 140:
			return -633788535;
		case 141:
			return 116394463;
		case 142:
			return -1196973875;
		case 143:
			return 801752086;
		case 144:
			return 184475332;
		case 145:
			return -1880922659;
		case 146:
			return -898138634;
		case 147:
			return -2107418444;
		case 148:
			return -679970099;
		case 149:
			return -1531392549;
		case 150:
			return 1612483376;
		case 151:
			return 463930900;
		case 152:
			return -632148238;
		case 153:
			return 55303249;
		case 154:
			return 2108322089;
		case 155:
			return -1358896714;
		case 156:
			return 74475632;
		case 157:
			return -28710953;
		case 158:
			return -1791599168;
		case 159:
			return 1605938169;
		case 160:
			return 1255242276;
		case 161:
			return 636467727;
		case 162:
			return -1567688525;
		case 163:
			return -77886679;
		case 164:
			return -1057900679;
		case 165:
			return -1960888134;
		case 166:
			return -1719717295;
		case 167:
			return -1779244911;
		case 168:
			return joaat("SLOTID_COACH_STALL_01");
		case 169:
			return 223362311;
		case 170:
			return 1150824567;
		case 171:
			return 974471191;
		case 172:
			return 1989683968;
		case 173:
			return 254804477;
		case 174:
			return 192057609;
		case 175:
			return 1553957817;
		case 176:
			return 2099829015;
		case 177:
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC") /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 178:
			return -1948423372;
		case 179:
			return 981083654;
		case 180:
			return 1283289876;
		case 181:
			return -606884489;
		case 182:
			return -100418572;
		case 183:
			return 663645231;
		case 184:
			return 1442217033;
		case 185:
			return 1410986244;
		case 186:
			return 847409839;
		case 187:
			return 923926911;
		case 188:
			return 109995826;
		case 189:
			return -747412737;
		case 190:
			return 1114341727;
		case 191:
			return -539456939;
		case 192:
			return 45887121;
		case 193:
			return 913271624;
		case 194:
			return -1652812715;
		case 195:
			return -1791365775;
		case 196:
			return -979299941;
		case 197:
			return 713062001;
		case 198:
			return -575045963;
		case 199:
			return 1852965262;
		case 200:
			return -1398836354;
		case 201:
			return -1829885298;
		case 202:
			return -1773850357;
		case 203:
			return -564258009;
		case 204:
			return 2016532685;
		case 205:
			return -1070563798;
		case 206:
			return -1619221343;
		case 207:
			return -345571691;
		case 208:
			return 544288390;
		case 209:
			return 159578294;
		case 210:
			return -76852849;
		case 211:
			return 1110295244;
		case 212:
			return 2104563477;
		case 213:
			return 1947827651;
		case 214:
			return -933072766;
		case 215:
			return 2104388648;
		case 216:
			return -1677140601;
		case 217:
			return -2133097881;
		case 218:
			return -826678792;
		case 219:
			return -513522325;
		case 220:
			return 1970588249;
		case 221:
			return -2080032591;
		case 222:
			return 1758847745;
		case 223:
			return 895010282;
		case 224:
			return joaat("SLOTID_COMPENDIUM");
		case 225:
			return joaat("SLOTID_COMPENDIUM_PAGE");
		case 226:
			return joaat("SLOTID_COMPENDIUM_STAMP");
		case 227:
			return joaat("SLOTID_COUPONS");
		case 228:
			return joaat("SLOTID_CURRENCY");
		case 229:
			return joaat("SLOTID_DEFAULT_STABLE");
		case 230:
			return joaat("SLOTID_DEFAULT_STABLE_STALLS");
		case 231:
			return -1578397674;
		case 232:
			return joaat("SLOTID_EMOTE_ACTION");
		case 233:
			return joaat("SLOTID_EMOTE_GREET");
		case 234:
			return joaat("SLOTID_EMOTE_ITEM");
		case 235:
			return joaat("SLOTID_EMOTE_REACT");
		case 236:
			return joaat("SLOTID_EMOTE_TAUNT");
		case 237:
			return joaat("SLOTID_EMOTE_TWIRL_GUN");
		case 238:
			return joaat("SLOTID_FEES");
		case 239:
			return joaat("SLOTID_FME_HERBS_EXPAND");
		case 240:
			return joaat("SLOTID_HANDGUN_BARREL");
		case 241:
			return 24047176;
		case 242:
			return joaat("SLOTID_HANDGUN_HAMMER");
		case 243:
			return joaat("SLOTID_HONOR");
		case 244:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 245:
			return joaat("SLOTID_HORSE_BLANKET");
		case 246:
			return joaat("SLOTID_HORSE_CANTLE");
		case 247:
			return joaat("SLOTID_HORSE_FENDER");
		case 248:
			return joaat("SLOTID_HORSE_HORN");
		case 249:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 250:
			return joaat("SLOTID_HORSE_LANTERN");
		case 251:
			return joaat("SLOTID_HORSE_MANE");
		case 252:
			return joaat("SLOTID_HORSE_MASK");
		case 253:
			return joaat("SLOTID_HORSE_MOUSTACHE");
		case 254:
			return joaat("SLOTID_HORSE_REINS");
		case 255:
			return joaat("SLOTID_HORSE_SADDLE");
		case 256:
			return joaat("SLOTID_HORSE_SADDLE_01");
		case 257:
			return joaat("SLOTID_HORSE_SADDLE_02");
		case 258:
			return joaat("SLOTID_HORSE_SADDLE_03");
		case 259:
			return joaat("SLOTID_HORSE_SADDLE_04");
		case 260:
			return joaat("SLOTID_HORSE_SADDLE_05");
		case 261:
			return joaat("SLOTID_HORSE_SADDLE_06");
		case 262:
			return joaat("SLOTID_HORSE_SADDLE_07");
		case 263:
			return joaat("SLOTID_HORSE_SADDLE_08");
		case 264:
			return joaat("SLOTID_HORSE_SADDLE_09");
		case 265:
			return joaat("SLOTID_HORSE_SADDLE_10");
		case 266:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 267:
			return joaat("SLOTID_HORSE_SATCHEL");
		case 268:
			return joaat("SLOTID_HORSE_SEAT");
		case 269:
			return joaat("SLOTID_HORSE_SEX");
		case 270:
			return joaat("SLOTID_HORSE_SKIRT");
		case 271:
			return joaat("SLOTID_HORSE_STALL_01");
		case 272:
			return joaat("SLOTID_HORSE_STALL_02");
		case 273:
			return joaat("SLOTID_HORSE_STALL_03");
		case 274:
			return joaat("SLOTID_HORSE_STALL_04");
		case 275:
			return joaat("SLOTID_HORSE_STALL_05");
		case 276:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 277:
			return joaat("SLOTID_HORSE_TAIL");
		case 278:
			return joaat("SLOTID_HUNTING_WAGON");
		case 279:
			return 1132377945;
		case 280:
			return 739936401;
		case 281:
			return 1201880974;
		case 282:
			return 819728896;
		case 283:
			return 1746010219;
		case 284:
			return 1433393959;
		case 285:
			return -1287636759;
		case 286:
			return -706917073;
		case 287:
			return -2166805;
		case 288:
			return -1391602433;
		case 289:
			return 1782075221;
		case 290:
			return 1282544585;
		case 291:
			return 1732594027;
		case 292:
			return -1058817012;
		case 293:
			return joaat("SLOTID_MINIGAME");
		case 294:
			return joaat("SLOTID_MISSION_TIMERS");
		case 295:
			return -1783120823;
		case 296:
			return -1535745896;
		case 297:
			return joaat("SLOTID_MOONSHINE_COOK");
		case 298:
			return joaat("SLOTID_MOONSHINE_RECIPE");
		case 299:
			return joaat("SLOTID_MOONSHINE_STILL");
		case 300:
			return joaat("SLOTID_MOONSHINER_BAR_PHOTO");
		case 301:
			return joaat("SLOTID_MOONSHINER_CRAFT_FLAVOR");
		case 302:
			return joaat("SLOTID_MOONSHINER_CRAFT_INPUT");
		case 303:
			return 1111816631;
		case 304:
			return joaat("SLOTID_MOONSHINER_LOCATION");
		case 305:
			return joaat("SLOTID_MOONSHINER_THEME");
		case 306:
			return joaat("SLOTID_MOONSHINER_UPGRADE");
		case 307:
			return joaat("SLOTID_NOTORIETY");
		case 308:
			return joaat("SLOTID_OWNED_CONTENT");
		case 309:
			return joaat("SLOTID_PLAYER_BODY_TYPE");
		case 310:
			return joaat("SLOTID_PLAYER_GENDER");
		case 311:
			return joaat("SLOTID_PLAYER_VOICE");
		case 312:
			return -708312114;
		case 313:
			return 688823508;
		case 314:
			return -1622147240;
		case 315:
			return 830292162;
		case 316:
			return 226276782;
		case 317:
			return -678416628;
		case 318:
			return -1098528034;
		case 319:
			return -629387103;
		case 320:
			return 316207340;
		case 321:
			return -1909200748;
		case 322:
			return -939652363;
		case 323:
			return joaat("SLOTID_PROGRESSION");
		case 324:
			return 2011227407;
		case 325:
			return joaat("SLOTID_PROPERTY");
		case 326:
			return joaat("SLOTID_PURCHASED_CONTENT");
		case 327:
			return joaat("SLOTID_ROLE_ITEMS");
		case 328:
			return joaat("SLOTID_SAMPLE");
		case 329:
			return joaat("SLOTID_SATCHEL");
		case 330:
			return -1045471300;
		case 331:
			return 1617414719;
		case 332:
			return -787761753;
		case 333:
			return -490616606;
		case 334:
			return joaat("SLOTID_STABLE");
		case 335:
			return -1360128126;
		case 336:
			return joaat("SLOTID_UPGRADE");
		case 337:
			return joaat("SLOTID_VOUCHERS");
		case 338:
			return joaat("SLOTID_WARDROBE");
		case 339:
			return joaat("SLOTID_WARDROBE_AGEING");
		case 340:
			return joaat("SLOTID_WARDROBE_BEARD");
		case 341:
			return joaat("SLOTID_WARDROBE_BLUSH");
		case 342:
			return joaat("SLOTID_WARDROBE_COMPLEXION");
		case 343:
			return joaat("SLOTID_WARDROBE_COMPLEXION_2");
		case 344:
			return joaat("SLOTID_WARDROBE_EYEBROWS");
		case 345:
			return joaat("SLOTID_WARDROBE_EYELINER");
		case 346:
			return joaat("SLOTID_WARDROBE_EYES");
		case 347:
			return joaat("SLOTID_WARDROBE_EYESHADOW");
		case 348:
			return joaat("SLOTID_WARDROBE_EYEWEAR");
		case 349:
			return joaat("SLOTID_WARDROBE_FACE_PAINT");
		case 350:
			return -1994943603;
		case 351:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_1");
		case 352:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_2");
		case 353:
			return joaat("SLOTID_WARDROBE_FOUNDATION");
		case 354:
			return joaat("SLOTID_WARDROBE_FRECKLES");
		case 355:
			return 755611221;
		case 356:
			return joaat("SLOTID_WARDROBE_GLOVES");
		case 357:
			return joaat("SLOTID_WARDROBE_GRIME");
		case 358:
			return joaat("SLOTID_WARDROBE_GUNBELT");
		case 359:
			return joaat("SLOTID_WARDROBE_HAIR");
		case 360:
			return joaat("SLOTID_WARDROBE_HEAD");
		case 361:
			return -246340825;
		case 362:
			return joaat("SLOTID_WARDROBE_HEADWEAR");
		case 363:
			return joaat("SLOTID_WARDROBE_LIPSTICK");
		case 364:
			return joaat("SLOTID_WARDROBE_LOADOUT_1");
		case 365:
			return joaat("SLOTID_WARDROBE_LOADOUT_2");
		case 366:
			return joaat("SLOTID_WARDROBE_LOADOUT_3");
		case 367:
			return joaat("SLOTID_WARDROBE_LOADOUT_4");
		case 368:
			return joaat("SLOTID_WARDROBE_LOADOUT_5");
		case 369:
			return joaat("SLOTID_WARDROBE_LOADOUT_6");
		case 370:
			return joaat("SLOTID_WARDROBE_LOADOUT_7");
		case 371:
			return joaat("SLOTID_WARDROBE_LOADOUT_8");
		case 372:
			return joaat("SLOTID_WARDROBE_LOADOUT_9");
		case 373:
			return joaat("SLOTID_WARDROBE_LOWER_BODY");
		case 374:
			return joaat("SLOTID_WARDROBE_LOWER_GARB");
		case 375:
			return -1384685096;
		case 376:
			return -2026728113;
		case 377:
			return joaat("SLOTID_WARDROBE_MOLES");
		case 378:
			return joaat("SLOTID_WARDROBE_NECKWEAR_1");
		case 379:
			return joaat("SLOTID_WARDROBE_NECKWEAR_2");
		case 380:
			return joaat("SLOTID_WARDROBE_OUTFIT");
		case 381:
			return joaat("SLOTID_WARDROBE_SATCHEL");
		case 382:
			return joaat("SLOTID_WARDROBE_SCAR");
		case 383:
			return joaat("SLOTID_WARDROBE_SKIN_MOTTLING");
		case 384:
			return joaat("SLOTID_WARDROBE_SPOTS");
		case 385:
			return joaat("SLOTID_WARDROBE_TEETH");
		case 386:
			return joaat("SLOTID_WARDROBE_UPPER_BODY");
		case 387:
			return joaat("SLOTID_WARDROBE_UPPER_GARB");
		case 388:
			return -1034549620;
		case 389:
			return -1293064293;
		case 390:
			return -1540142553;
		case 391:
			return -1769886012;
		case 392:
			return -1983081126;
		case 393:
			return -1106117124;
		case 394:
			return -1873108338;
		case 395:
			return -2097543219;
		case 396:
			return 155413195;
		case 397:
			return joaat("SLOTID_WATCH");
		case 398:
			return joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */;
		case 399:
			return joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */;
		case 400:
			return joaat("SLOTID_WEAPON_2");
		case 401:
			return joaat("SLOTID_WEAPON_3");
		case 402:
			return 1570861011;
		case 403:
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
		case 404:
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
		case 405:
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
		case 406:
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
		case 407:
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
		case 408:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
		case 409:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
		case 410:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
		case 411:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
		case 412:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
		case 413:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
		case 414:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
		case 415:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
		case 416:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
		case 417:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
		case 418:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
		case 419:
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
		case 420:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
		case 421:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
		case 422:
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
		case 423:
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
		case 424:
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
		case 425:
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
		case 426:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
		case 427:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
		case 428:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
		case 429:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
		case 430:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
		case 431:
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
		case 432:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
		case 433:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
		case 434:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
		case 435:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
		case 436:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
		case 437:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
		case 438:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
		case 439:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
		case 440:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
		case 441:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
		case 442:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
		case 443:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
		case 444:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
		case 445:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_CLIP");
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_LEVER");
		case 451:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
		case 452:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
		case 453:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
		case 454:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
		case 455:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
		case 456:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
		case 457:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
		case 458:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_LEVER");
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_CLIP");
		case 462:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_GRIP");
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_LEVER");
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_CLIP");
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_CLIP");
		case 475:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
		case 476:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
		case 477:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
		case 478:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
		case 479:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
		case 480:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
		case 481:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
		case 482:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
		case 483:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
		case 484:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
		case 485:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
		case 486:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
		case 487:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
		case 488:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
		case 489:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
		case 490:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_CLIP");
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SCOPE");
		case 493:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
		case 494:
			return -62390436;
		case 495:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_CLIP");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP_EXOTIC");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
			return -1150323212;
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
			return 1254273765;
			return -792172668;
			return 1905987493;
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return joaat("SLOTID_WEB_INBOX");
			return joaat("SLOTID_WEB_INBOX_AMMO");
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
			return joaat("SLOTID_WEB_INBOX_GIFTS");
			return 1084576580;
			return joaat("SLOTID_WEB_INBOX_HORSES");
			return joaat("SLOTID_WEB_INBOX_KIT");
			return joaat("SLOTID_WEB_INBOX_OFFERS");
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
			return -386012962;
			return joaat("SLOTID_CARAVAN_UPGRADE");
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return joaat("SLOTID_TEMPORARY_HORSE");
			return -319249747;
			return -16955722;
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
			return joaat("SLOTID_WARDROBE_LOADOUT");
			return joaat("SLOTID_WARDROBE_MISC");
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return joaat("SLOTID_NONE");
			return joaat("SLOTID_ANY");
			return -1150938404;
			return joaat("SLOTID_EMOTE_DANCE");
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1020(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1059(bParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_1021(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1060(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

bool func_1022(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1061(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1058(*uParam1, &sVar0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = sVar0.f_11;
	}
	else if (iParam3 > sVar0.f_11)
	{
		iParam3 = sVar0.f_11;
	}
	if (!func_1023(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_887(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1023(bool bParam0)
{
	if (func_27() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_887(bParam0));
}

int func_1024(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1062(iParam0))
	{
		return 0;
	}
	if (!func_1023(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1025(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_524(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_1026(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1027(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_613(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; // curOff = 150
		}
		iVar1++;
	}
	if (!func_613(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_1028(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_613(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_951(iParam0, 1);
		iVar1 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_1029(bool bParam0)
{
	func_1063(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
}

int func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_342() && !func_70(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

bool func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

int func_1032(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_6;
	}
	return -15;
}

bool func_1033(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_461(iParam1) || !func_461(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1034(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		*uParam1 = Global_23118[iParam0 /*11*/].f_4;
		uParam1->f_1 = Global_23118[iParam0 /*11*/].f_4.f_1;
		uParam1->f_2 = Global_23118[iParam0 /*11*/].f_4.f_2;
		uParam1->f_3 = Global_23118[iParam0 /*11*/].f_4.f_3;
		uParam1->f_4 = Global_23118[iParam0 /*11*/].f_4.f_4;
		uParam1->f_5 = Global_23118[iParam0 /*11*/].f_4.f_5;
		return;
	}
	*uParam1 = Global_1058888.f_40545[iParam0 /*11*/].f_4;
	uParam1->f_1 = Global_1058888.f_40545[iParam0 /*11*/].f_4.f_1;
	uParam1->f_2 = Global_1058888.f_40545[iParam0 /*11*/].f_4.f_2;
	uParam1->f_3 = Global_1058888.f_40545[iParam0 /*11*/].f_4.f_3;
	uParam1->f_4 = Global_1058888.f_40545[iParam0 /*11*/].f_4.f_4;
	uParam1->f_5 = Global_1058888.f_40545[iParam0 /*11*/].f_4.f_5;
}

int func_1035(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;

	if (uParam0->f_4 == -15)
	{
		return 0;
	}
	if (*uParam0 != Global_40.f_7729)
	{
		bVar0 = true;
	}
	if (func_1064(1, &iVar3))
	{
		if (uParam0->f_1 == iVar3)
		{
			bVar4 = true;
		}
	}
	else if (uParam0->f_1 == 0)
	{
		bVar4 = true;
	}
	if (func_1064(1, &iVar3))
	{
		if (uParam0->f_2 == iVar3)
		{
			bVar5 = true;
		}
	}
	else if (uParam0->f_2 == 0)
	{
		bVar5 = true;
	}
	if (func_1064(1, &iVar3))
	{
		if (uParam0->f_3 == iVar3)
		{
			bVar6 = true;
		}
	}
	else if (uParam0->f_3 == 0)
	{
		bVar6 = true;
	}
	if ((!bVar4 && !bVar5) && !bVar6)
	{
		bVar1 = true;
	}
	if (func_311(uParam0->f_5, 1) != func_1065(&uVar7))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (bVar0)
		{
			return 1;
		}
	}
	if (bVar0 && bVar1)
	{
		return 1;
	}
	return 0;
}

bool func_1036(var uParam0)
{
	return func_311(uParam0->f_5, 2);
}

void func_1037(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1038(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1066(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1067(iParam0))
	{
		return false;
	}
	if (func_1068(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_1069(iParam0, 1)) || func_39((1 << 15)))
	{
		if (!func_1069(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_1070())
	{
		return false;
	}
	return true;
}

void func_1039(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_1040(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_84(&(uParam0->f_5), 2);
	}
	else
	{
		func_85(&(uParam0->f_5), 2);
	}
}

void func_1041(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_4 = *uParam1;
		Global_23118[iParam0 /*11*/].f_4.f_1 = uParam1->f_1;
		Global_23118[iParam0 /*11*/].f_4.f_2 = uParam1->f_2;
		Global_23118[iParam0 /*11*/].f_4.f_3 = uParam1->f_3;
		Global_23118[iParam0 /*11*/].f_4.f_4 = uParam1->f_4;
		Global_23118[iParam0 /*11*/].f_4.f_5 = uParam1->f_5;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_4 = *uParam1;
	Global_1058888.f_40545[iParam0 /*11*/].f_4.f_1 = uParam1->f_1;
	Global_1058888.f_40545[iParam0 /*11*/].f_4.f_2 = uParam1->f_2;
	Global_1058888.f_40545[iParam0 /*11*/].f_4.f_3 = uParam1->f_3;
	Global_1058888.f_40545[iParam0 /*11*/].f_4.f_4 = uParam1->f_4;
	Global_1058888.f_40545[iParam0 /*11*/].f_4.f_5 = uParam1->f_5;
}

int func_1042(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_1071(iVar0);
}

int func_1043(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_8"):
			return 32;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_9"):
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			return 22;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_3"):
			return 38;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5"):
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6"):
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3"):
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4"):
			return 18;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
			return 29;
		case joaat("MP_COMPONENT_TYPE_END"):
			return 39;
		case joaat("MP_COMPONENT_TYPE_EYEWEAR"):
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7"):
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1"):
			return 34;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			return 10;
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
			return 23;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2"):
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_2"):
			return 13;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1"):
			return 15;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			return 30;
		case joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE"):
			return 14;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			return 37;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2"):
			return 35;
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

int func_1044(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_883(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

Vector3 func_1045(int iParam0)
{
	if (func_1072(iParam0))
	{
		return func_1073(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_1046(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_317(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80.0f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f /*3*/ };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((Global_1347702[iParam0 /*49*/].f_13 & (1 << 16)) != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f /*3*/ };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f /*3*/ };
			return true;
		}
	}
	return false;
}

float func_1047(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 -= ((float)BUILTIN::ROUND(((fParam0 - fParam1) / fVar0)) * fVar0);
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return 2;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return 16;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return 4;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return 8;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1049(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_1050(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_1051(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1074((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1074(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_46(Global_1898164.f_1[0 /*5*/]))
	{
		func_898(Global_1898164.f_1[0 /*5*/], 3);
	}
}

int func_1052(var uParam0)
{
	return uParam0;
}

void func_1053(int iParam0)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);
	}
	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = 0.0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1.0f;
}

char* func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY" /* GXTEntry: "Ambarino State Bounty: $~1~" */;
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY" /* GXTEntry: "New Hanover State Bounty: $~1~" */;
		case 2:
			return "LBS_LEMOYNE_BOUNTY" /* GXTEntry: "Lemoyne State Bounty: $~1~" */;
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY" /* GXTEntry: "West Elizabeth State Bounty: $~1~" */;
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY" /* GXTEntry: "New Austin State Bounty: $~1~" */;
		case 5:
			return "LBS_GUARMA_BOUNTY" /* GXTEntry: "Guarma State Bounty: $~1~" */;
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY" /* GXTEntry: "Invalid State Bounty: $~1~" */;
}

bool func_1055(bool bParam0, bool bParam1)
{
	if (func_1044(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_345(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_1056(bool bParam0)
{
	int iVar0;

	iVar0 = func_887(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_886(joaat("EMOTE_ITEM"), func_884(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_886(joaat("EMOTE_ITEM"), func_884(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_1057(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1044(bParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1058(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_887(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1059(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_883(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_886(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_887(bParam6), &sVar0, false);
	return iVar4;
}

bool func_1060(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_887(0);
	*uParam1 = { func_886(bParam0, func_999(0), iParam3, 0) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_1061(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_1062(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_1063(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_1064(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1076(iParam0, &iVar0))
	{
		return false;
	}
	*iParam1 = Global_1946054.f_1497.f_1[func_1043(iVar0, 1) /*3*/];
	return true;
}

int func_1065(var uParam0)
{
	if (joaat("MASK_UP") == func_1077(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_1078(uParam0))
		{
			return 1;
		}
	}
	else if (func_984(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		if (func_1078(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1066(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_1067(int iParam0)
{
	if (func_27() != -1)
	{
		if (func_1069(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1069(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1068(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1069(iParam0, (1 << 16)) && !func_1069(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1069(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1069(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1069(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_1070()
{
	return Global_1905944.f_5694;
}

int func_1071(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1079(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1080(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_1073(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return { -240.576f, 769.614f, 117.085f };
		case 34:
			return { 2544.982f, -1187.344f, 52.3104f };
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_1074(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

bool func_1075(int iParam0)
{
	return func_1081(iParam0, 2);
}

bool func_1076(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
			break;
		case 1:
			*iParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
			break;
		case 2:
			*iParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
			break;
		default:
			return false;
	}
	return true;
}

int func_1077(int iParam0)
{
	int iVar0;

	iVar0 = func_1043(func_1042(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_1078(var uParam0)
{
	if (func_984(joaat("CI_CATEGORY_WARDROBE_MASK"), uParam0))
	{
		return true;
	}
	if (func_984(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		return true;
	}
	return false;
}

int func_1079(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return joaat("MP_COMPONENT_TYPE_HEADWEAR");
		case 11:
			return joaat("MP_COMPONENT_TYPE_EYEWEAR");
		case 12:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_1");
		case 13:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_2");
		case 14:
			return joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE");
		case 15:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1");
		case 16:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2");
		case 17:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3");
		case 18:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4");
		case 19:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5");
		case 20:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6");
		case 21:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7");
		case 22:
			return joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE");
		case 23:
			return joaat("MP_COMPONENT_TYPE_HAND_ATTIRE");
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_5");
		case 30:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_6");
		case 31:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_7");
		case 32:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_8");
		case 33:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_9");
		case 34:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1");
		case 35:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2");
		case 36:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_1");
		case 37:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_2");
		case 38:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_3");
		case 39:
			return joaat("MP_COMPONENT_TYPE_END");
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1080(var uParam0)
{
	if (func_1082(&(uParam0->f_29), 62))
	{
		switch (func_1083())
		{
			case 1:
				if (!func_1082(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1082(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1082(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1082(&(uParam0->f_29), 32))
				{
					if (func_1082(&(uParam0->f_29), 2))
					{
						if (func_258(func_177()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

bool func_1081(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

bool func_1082(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 & iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1083()
{
	return Global_1899516;
}

