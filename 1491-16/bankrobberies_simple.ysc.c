#pragma region Local_Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<130> /*1040*/ sLocal_3 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> /*32*/ sScriptParam_0 = { 0, 0, 0, 0 } ;
#pragma endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&(sLocal_3.f_99), 10);
	}
	while (true)
	{
		func_2();
		if (sLocal_3.f_99 < 10)
		{
			if (func_3())
			{
				func_1(&(sLocal_3.f_99), 10);
			}
		}
		switch (sLocal_3.f_99)
		{
			case 0:
				if (func_4(&sScriptParam_0))
				{
					func_1(&(sLocal_3.f_99), 1);
				}
				break;
			case 1:
				if (func_5())
				{
					func_1(&(sLocal_3.f_99), 2);
				}
				break;
			case 2:
				if (func_6())
				{
					func_1(&(sLocal_3.f_99), 3);
				}
				break;
			case 3:
				if (func_7())
				{
					func_1(&(sLocal_3.f_99), 5);
				}
				break;
			case 5:
				if (!func_8(&(sLocal_3.f_102), 8))
				{
					func_9(&sLocal_3);
				}
				func_1(&(sLocal_3.f_99), 6);
				break;
			case 6:
				if (sLocal_3.f_129)
				{
					if (!func_8(&(sLocal_3.f_102), 8))
					{
						func_9(&sLocal_3);
					}
					if (func_10(sLocal_3.f_106, 0, 0, 0))
					{
						if (!func_11(sLocal_3.f_106.f_3))
						{
							PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), sLocal_3.f_106, 7, 2, false);
							sLocal_3.f_106.f_3 = func_13(func_12(12), joaat("INPUT_INTERACT_LOCKON_ROB"), sLocal_3.f_110[0], 1, 0, 0, 0, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0);
							func_14(sLocal_3.f_106.f_3, sLocal_3.f_106, 0, 1, -1);
							PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), sLocal_3.f_106, 7, 2, false);
						}
						else
						{
							func_15(sLocal_3.f_106.f_3, 1, 1);
						}
					}
					else if (func_11(sLocal_3.f_106.f_3))
					{
						func_16(&(sLocal_3.f_106.f_3), 0, 1);
					}
					func_1(&(sLocal_3.f_99), 7);
				}
				else if (func_17(PLAYER::PLAYER_ID(), 0, 1, 0))
				{
					if (!func_8(&(sLocal_3.f_102), 8))
					{
						func_9(&sLocal_3);
					}
					func_1(&(sLocal_3.f_99), 10);
				}
				break;
			case 7:
				if (func_17(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_1(&(sLocal_3.f_99), 10);
				}
				else if (func_18(&sLocal_3))
				{
					func_19();
					func_1(&(sLocal_3.f_99), 8);
				}
				else if (!sLocal_3.f_129)
				{
					func_16(&(sLocal_3.f_106.f_3), 1, 1);
					func_1(&(sLocal_3.f_99), 6);
				}
				break;
			case 8:
				if (func_20())
				{
					func_1(&(sLocal_3.f_99), 9);
				}
				break;
			case 9:
				break;
			case 10:
				func_21(&sLocal_3, sScriptParam_0);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_2()
{
	switch (sLocal_3.f_126)
	{
		case 1:
			sLocal_3.f_129 = func_22(&sLocal_3, 0);
			break;
		case 0:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	sLocal_3.f_126++;
	if (sLocal_3.f_126 >= 4)
	{
		sLocal_3.f_126 = 0;
	}
}

bool func_3()
{
	switch (sLocal_3.f_126)
	{
		case 0:
			if (func_23(16, 0, 1) || func_24(2))
			{
				return true;
			}
			break;
		case 1:
			if (!func_17(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (func_25())
				{
					return true;
				}
			}
			else if (func_26())
			{
				if (func_25())
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (sLocal_3.f_99 > 1)
			{
				if (!sLocal_3.f_129)
				{
					if (!func_27())
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_4(var uParam0)
{
	if (!func_28(uParam0->f_2))
	{
		return false;
	}
	if (!func_29(sLocal_3.f_106, 0, 1))
	{
		sLocal_3.f_106 = func_30(uParam0->f_2);
		sLocal_3.f_106.f_1 = uParam0->f_2;
		if (!func_29(sLocal_3.f_106, 0, 1))
		{
			return false;
		}
		PED::SET_PED_CAN_BE_TARGETTED(sLocal_3.f_106, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_3.f_106, true);
		PED::SET_PED_CONFIG_FLAG(sLocal_3.f_106, 178, true);
		PED::SET_PED_CONFIG_FLAG(sLocal_3.f_106, 130, false);
		PED::SET_PED_CONFIG_FLAG(sLocal_3.f_106, 297, true);
		PED::SET_PED_CONFIG_FLAG(sLocal_3.f_106, 234, true);
		PED::SET_PED_CONFIG_FLAG(sLocal_3.f_106, 235, true);
		sLocal_3.f_98 = uParam0->f_3;
		sLocal_3.f_103 = { func_31(sLocal_3.f_98) /*3*/ };
		return true;
	}
	return false;
}

bool func_5()
{
	func_32(&sLocal_3);
	return true;
}

bool func_6()
{
	STREAMING::REQUEST_ANIM_DICT(func_33(0));
	PED::_RESERVE_AMBIENT_PEDS(1);
	return true;
}

bool func_7()
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_33(0)))
	{
		return false;
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	return true;
}

bool func_8(var uParam0, int iParam1)
{
	return *uParam0 & iParam1 != 0;
}

void func_9(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			func_34(uParam0, 1, 0);
			break;
		case 1:
			func_34(uParam0, 2, 0);
			func_34(uParam0, 3, 0);
			break;
		case 2:
			func_34(uParam0, 2, 0);
			func_35(uParam0, 3);
			break;
		case 0:
			func_34(uParam0, 0, 0);
			func_34(uParam0, 1, 0);
			func_34(uParam0, 2, 0);
			func_34(uParam0, 3, 0);
			break;
	}
}

bool func_10(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_36(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_37(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_11(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

char* func_12(int iParam0)
{
	if (func_38(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

int func_13(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_39(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_40(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0.0f, 0.0f, 0.0f, 0.0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_11(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_42(iParam0, 18, 0, 1);
	func_42(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		func_43(iParam0, 4);
		func_44(iVar0, 1);
		func_45(iVar0, 1);
	}
	else
	{
		func_46(iParam0, 4);
		func_45(iVar0, 0);
	}
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_11(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_41(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_47(iVar0);
	*uParam0 = 0;
}

bool func_17(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_48(bParam1, bParam2, bParam3);
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

bool func_18(var uParam0)
{
	if (func_49(uParam0->f_106.f_3, 1))
	{
		EVENT::_0x7C511E91738A0828(uParam0->f_106, Global_35, 41, 0);
		func_15(uParam0->f_106.f_3, 0, 1);
	}
	if (uParam0->f_129)
	{
		if ((func_50() || PED::IS_PED_SHOOTING(Global_35)) || PED::_GET_LASSO_TARGET(Global_35) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_19()
{
	func_51(&(sLocal_3.f_102), 1);
	func_53(func_52(joaat("BANK_ROBBERIES_STARTED")), 1);
	func_54(1);
	func_55(&sLocal_3);
	func_56(&sLocal_3, 30.0f, 30.0f);
	sLocal_3.f_106 = func_57(sLocal_3.f_106.f_1, 0, 0, 0, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_3.f_106, true, true);
	func_59(Global_35, sLocal_3.f_106, func_58(&sLocal_3), "", -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
}

bool func_20()
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (!func_8(&(sLocal_3.f_102), 2))
	{
		if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 0.5f)
		{
			func_56(&sLocal_3, 60.0f, 60.0f);
		}
	}
	switch (sLocal_3.f_100)
	{
		case 0:
			if (func_29(sLocal_3.f_106, 0, 1))
			{
				func_60(sLocal_3.f_106, Global_36, 1, 0, 3);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, func_33(0), "enter_hands_up", 2.0f, -8.0f, -1, 0, 0.0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, func_33(0), "hands_up_loop", 8.0f, -8.0f, -1, 1, 0.0f, false, 0, false, 0, false);
				func_61(sLocal_3.f_106, &iVar0, 0, 0, 1, 1);
			}
			func_62(&(sLocal_3.f_100), 1);
			break;
		case 1:
			if (func_29(sLocal_3.f_106, 0, 0))
			{
				if (!func_63(&(sLocal_3.f_106.f_2), 1))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(0, func_33(0), "hands_up_loop", 1) || TASK::GET_SEQUENCE_PROGRESS(sLocal_3.f_106) > 0)
					{
						func_64(&(sLocal_3.f_106.f_2), 1);
					}
				}
				if (func_65(&sLocal_3))
				{
					func_66(&sLocal_3);
					vVar1 = { func_67(&sLocal_3) /*3*/ };
					fVar4 = func_68(&sLocal_3);
					func_70(0, &sLocal_3, sLocal_3.f_106, Global_35, func_69(&sLocal_3), 0, 1116471296, 0, 0, 0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_3.f_106, vVar1, 2.0f, 20000, 0.25f, 0, fVar4);
					func_56(&sLocal_3, 30.0f, 30.0f);
					func_62(&(sLocal_3.f_100), 2);
				}
			}
			break;
		case 2:
			if (func_29(sLocal_3.f_106, 0, 0))
			{
				vVar1 = { func_67(&sLocal_3) /*3*/ };
				fVar4 = func_68(&sLocal_3);
				if (ENTITY::IS_ENTITY_AT_COORD(sLocal_3.f_106, vVar1, 0.25f, 0.25f, 2.0f, false, true, 0))
				{
					TASK::TASK_COWER(sLocal_3.f_106, -1, 0, 0);
					func_62(&(sLocal_3.f_100), 3);
				}
				else if (!func_71(sLocal_3.f_106, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_3.f_106, vVar1, 2.0f, 20000, 0.25f, 0, fVar4);
				}
			}
			break;
		case 3:
			break;
		case 4:
			return true;
	}
	return false;
}

void func_21(var uParam0, Vector3 vParam1, var uParam4)
{
	int iVar0;

	switch (uParam0->f_127)
	{
		case 0:
			uParam0->f_127++;
			break;
		case 1:
			iVar0 = uParam0->f_128;
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_110[iVar0]))
			{
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_110[iVar0]);
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_110[iVar0]);
				func_72(uParam0->f_110[iVar0]);
			}
			if (iVar0 >= 5)
			{
				uParam0->f_128 = 0;
				uParam0->f_127++;
			}
			else
			{
				uParam0->f_128++;
			}
			break;
		case 2:
			uParam0->f_127++;
			break;
		case 3:
			if (func_73(vParam1.z, 1))
			{
				func_74(vParam1.z, 0, 1, 0, 0);
			}
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_22(var uParam0, int iParam1)
{
	return func_75(uParam0, Global_35, iParam1);
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
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
		if (func_76())
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
		iVar0 = func_77(Global_1898164.f_1[0 /*5*/]);
		if (func_78(iVar0) && func_79(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_80(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if (Global_1935630 & 40959 & (-1 - iParam0) != 0)
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
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & (1 << 9) == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_24(int iParam0)
{
	return Global_1934182.f_74 & iParam0 != 0;
}

bool func_25()
{
	if (sLocal_3.f_98 != -1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_31(sLocal_3.f_98), false) >= 60.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_26()
{
	return (Global_1894899 & 1 != 0 && func_81() != -1);
}

bool func_27()
{
	int iVar0;
	int iVar1;

	iVar0 = func_82();
	iVar1 = func_83(iVar0);
	if (iVar1 >= 7)
	{
		return true;
	}
	return false;
}

bool func_28(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_29(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_84(iParam0, iParam1);
}

int func_30(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!func_85(iParam0, 2))
	{
		return 0;
	}
	if (func_87(func_86(iParam0)))
	{
		return func_88(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_89(iParam0), 0);
}

Vector3 func_31(int iParam0)
{
	return Global_1934182[iParam0 /*18*/].f_1;
}

void func_32(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.997f, -1276.168f, 44.322f, 0.0f, 0.0f, 0.0f, 12.8f, 6.8f, 4.0f, "volBankMain");
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.998f, -1277.961f, 44.178f, 0.0f, 0.0f, 0.0f, 12.558f, 2.939f, 2.934f, "volClientArea");
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.739f, -1274.487f, 44.022f, 0.0f, 0.0f, 0.0f, 8.027f, 2.914f, 2.477f, "volClerkArea");
			break;
		case 0:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBankMain");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[0], 2645.768f, -1295.391f, 53.303f, 0.0f, 0.0f, -64.957f, 20.566f, 16.072f, 4.062f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[0], 2649.724f, -1304.401f, 52.738f, 0.0f, 0.0f, -19.794f, 3.0f, 3.0f, 3.0f);
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClientArea");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], 2645.607f, -1295.471f, 52.738f, 0.0f, 0.0f, -19.794f, 5.5f, 5.5f, 1.5f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], 2643.956f, -1291.68f, 52.76f, 0.0f, 0.0f, 24.969f, 15.917f, 12.455f, 3.0f);
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClerkArea");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 2645.607f, -1295.471f, 51.633f, 0.0f, 0.0f, -19.794f, 2.5f, 2.5f, 1.5f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 2648.707f, -1302.078f, 53.433f, 0.0f, 0.0f, 24.969f, 2.237f, 10.885f, 4.307f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 2649.545f, -1303.876f, 53.459f, 0.0f, 0.0f, 24.969f, 3.444f, 6.203f, 4.35f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 2649.368f, -1303.494f, 53.459f, 0.0f, 0.0f, 24.969f, 6.123f, 4.182f, 4.35f);
			break;
		case 1:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1288.882f, -1306.037f, 78.31914f, 0.0f, 0.0f, -39.72215f, 11.436f, 19.382f, 3.901308f, "volBankMain");
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClientArea");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], 1293.686f, -1300.426f, 77.73367f, 0.0f, 0.0f, -39.72215f, 11.48132f, 4.806484f, 4.341565f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], 1288.775f, -1299.621f, 77.73367f, 0.0f, 0.0f, -129.722f, 9.757624f, 3.109288f, 4.341565f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], 1289.892f, -1300.947f, 77.73367f, 0.0f, 0.0f, 5.277998f, 3.825557f, 1.742847f, 4.341565f);
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClerkArea");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 1282.856f, -1307.465f, 77.799f, 0.0f, 0.0f, -39.72215f, 3.978764f, 8.991151f, 3.25f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 1290.426f, -1307.595f, 77.734f, 0.0f, 0.0f, -39.72215f, 7.086f, 9.381f, 4.342f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], 1287.06f, -1305.533f, 77.734f, 0.0f, 0.0f, -39.72215f, 1.132267f, 8.370426f, 4.342f);
			break;
		case 2:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.46f, 770.943f, 119.808f, 0.0f, 0.0f, 9.999998f, 10.0f, 17.8f, 4.8f, "volBankMain");
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClientArea");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], -307.351f, 776.514f, 119.808f, 0.0f, 0.0f, 9.999998f, 9.616f, 5.0f, 4.8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], -303.311f, 775.092f, 119.808f, 0.0f, 0.0f, 9.999998f, 1.862f, 9.193705f, 4.8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[1], -304.055f, 774.803f, 119.544f, 0.0f, 0.0f, 55.55931f, 2.170487f, 2.343747f, 3.762657f);
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClerkArea");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], -308.974f, 772.681f, 119.808f, 0.0f, 0.0f, 10.57594f, 5.140851f, 4.527046f, 4.8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], -305.889f, 772.404f, 119.808f, 0.0f, 0.0f, 10.57594f, 3.724f, 2.34508f, 4.8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], -306.25f, 767.973f, 119.808f, 0.0f, 0.0f, -34.63f, 3.298415f, 2.904014f, 4.8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_110[2], -302.045f, 764.4305f, 119.808f, 0.0f, 0.0f, 9.999998f, 2.035f, 8.676f, 4.8f);
			uParam0->f_110[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-302.2949f, 769.3945f, 117.7031f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 2.0f, "lawRestriction");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_110[4], 0, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_110[4], 0, 0, 0, -1, -1, 0);
			break;
	}
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_proc@robberies@bank@valbankig1_2_teller";
		default:
			break;
	}
	return "Missing anim dict";
}

void func_34(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_90(uParam0, iParam1);
	if (!func_91(iVar0))
	{
	}
	if (bParam2)
	{
		func_92(iVar0, 1);
	}
	else
	{
		func_93(iVar0, 1);
	}
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_90(uParam0, iParam1);
	if (!func_91(iVar0))
	{
	}
	func_94(iVar0, 1);
}

bool func_36(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_37(int iParam0)
{
	Global_22 |= iParam0;
}

bool func_38(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_39(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

void func_40(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945188[iParam0 /*18*/].f_4 = iParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = iParam10;
	Global_1945188[iParam0 /*18*/].f_11 = iParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0.0f, 0.0f, 0.0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1945188[iParam0 /*18*/].f_3 = iVar0;
	func_44(iParam0, 1);
	func_45(iParam0, 1);
	func_46(iParam0, 128);
}

int func_41(int iParam0)
{
	return iParam0;
}

void func_42(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_43(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_44(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_39(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_46(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_47(int iParam0)
{
	if (!func_95(iParam0))
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

int func_48(bool bParam0, bool bParam1, bool bParam2)
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

bool func_49(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_11(iParam0))
	{
		return false;
	}
	iVar0 = func_41(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_50()
{
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		if (WEAPON::IS_PED_ARMED(Global_35, 6))
		{
			return true;
		}
	}
	return false;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

struct<2> /*16*/ func_52(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_53(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_54(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_55(var uParam0)
{
	uParam0->f_117[0] = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, -1.0f, 15.0f, 25.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
}

void func_56(var uParam0, float fParam1, float fParam2)
{
	if (!func_8(&(uParam0->f_102), 2))
	{
		func_96(1);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BANK_ROBBERY"), 0, fParam2, fParam2, false, fParam1, fParam1, 0);
		func_51(&(uParam0->f_102), 2);
	}
}

int func_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_97(iParam0, 1))
	{
		return 0;
	}
	if (func_87(func_86(iParam0)))
	{
		iVar1 = func_98(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_REVIVE_PERSCHAR(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_99(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_100(iParam0, 1);
	func_101(iParam0);
	if (bParam3)
	{
		func_100(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

char* func_58(var uParam0)
{
	if (func_102())
	{
		return "ROB_MALE";
	}
	return "ROB_GENERAL";
}

bool func_59(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_103(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_60(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, int iParam6)
{
	if (!func_84(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (bParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
		return;
	}
	if (func_104(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 6:
			PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 4:
			PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(iParam0, vParam1);
			break;
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
			break;
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
	}
}

void func_61(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0.0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_63(var uParam0, int iParam1)
{
	return *uParam0 & iParam1 != 0;
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_65(var uParam0)
{
	if (!func_63(&(uParam0->f_106.f_2), 1))
	{
		return false;
	}
	if (uParam0->f_129)
	{
		if (func_105(uParam0->f_106, 1090519040, 1103626240, 1097859072, 0))
		{
			if (func_106(&(uParam0->f_119)))
			{
				func_107(&(uParam0->f_119));
			}
			return false;
		}
	}
	func_108(&(uParam0->f_119), 0);
	if (func_109(&(uParam0->f_119), 1.0f))
	{
		return true;
	}
	return false;
}

void func_66(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 2:
			func_35(uParam0, 3);
			break;
	}
}

Vector3 func_67(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			return { -811.6213f, -1274.449f, 42.7727f };
		case 0:
			return { 2650.946f, -1301.704f, 51.2461f };
		case 1:
			return { 1284.215f, -1304.791f, 76.03969f };
		case 2:
			return { -307.9412f, 768.012f, 117.7031f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_68(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			return 269.5828f;
		case 0:
			return 268.1955f;
		case 1:
			return 25.4947f;
		case 2:
			return 211.0f;
		default:
			break;
	}
	return 0.0f;
}

char* func_69(var uParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			return "BRS_CLERK_FLEE_1";
		case 1:
			return "BRS_CLERK_FLEE_2";
		case 2:
			return "BRS_CLERK_FLEE_3";
		default:
			break;
	}
	return "BRS_CLERK_FLEE_1";
}

bool func_70(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_110(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_59(iParam2, iParam3, sParam4, sParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
}

bool func_71(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == joaat("SCRIPT_TASK_DRIVE_BY") && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_72(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_73(int iParam0, bool bParam1)
{
	if (func_111() != -1)
	{
		return false;
	}
	if (!func_28(iParam0))
	{
		return false;
	}
	if (!func_99(iParam0) && bParam1)
	{
		return false;
	}
	return func_85(iParam0, 1);
}

void func_74(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_28(iParam0))
	{
		return;
	}
	if (!func_85(iParam0, 1))
	{
		return;
	}
	if (!func_85(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_99(iParam0)) && func_112(iParam0))
	{
		return;
	}
	func_113(iParam0, 1);
	func_114(iParam0);
	if (func_87(func_86(iParam0)))
	{
		iVar0 = func_98(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_113(iParam0, 16);
	}
	if (func_85(iParam0, 128) && !bParam3)
	{
		func_115(iParam0, 0);
	}
}

int func_75(var uParam0, int iParam1, int iParam2)
{
	if (func_116(iParam1, uParam0->f_110[iParam2], 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_76()
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
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_77(int iParam0)
{
	if (!func_80(iParam0))
	{
		return -1;
	}
	return func_118(func_117(iParam0));
}

bool func_78(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_79(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_80(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_81()
{
	return Global_1894899.f_2;
}

var func_82()
{
	return Global_1899515;
}

int func_83(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_84(int iParam0, int iParam1)
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
	if (func_119(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_119(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_119(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_85(int iParam0, int iParam1)
{
	if (func_111() != -1)
	{
		return false;
	}
	if (!func_28(iParam0))
	{
		return false;
	}
	return Global_24887[iParam0 /*2*/] & iParam1 != 0;
}

int func_86(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_87(int iParam0)
{
	return iParam0 != 0;
}

int func_88(int iParam0)
{
	int iVar0;

	iVar0 = func_98(iParam0);
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

int func_89(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

int func_90(var uParam0, int iParam1)
{
	switch (uParam0->f_98)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 531022111;
				case 1:
					return 2117902999;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -977211145;
				case 1:
					return -1206757990;
				case 2:
					return 1634148892;
				case 3:
					return 2058564250;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -408139633;
				case 1:
					return -1652509687;
				case 2:
					return 1340831050;
				case 3:
					return -576346876;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1830999060;
				case 1:
					return 965922748;
				case 2:
					return 1634115439;
				case 3:
					return 1751238140;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_91(int iParam0)
{
	return iParam0 != 0;
}

void func_92(int iParam0, int iParam1)
{
	func_120(iParam0, 1, 0, 0, 1, 0, 0, 0);
}

void func_93(int iParam0, int iParam1)
{
	func_120(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_94(int iParam0, int iParam1)
{
	func_120(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_95(int iParam0)
{
	return func_39(iParam0, 2);
}

void func_96(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_121(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_122(&Global_1935630, (1 << 22));
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

bool func_97(int iParam0, bool bParam1)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	if ((func_85(iParam0, 1) && !func_99(iParam0)) && func_112(iParam0))
	{
		return false;
	}
	if (!func_85(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_123(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_98(int iParam0)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_99(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_100(int iParam0, int iParam1)
{
	if (func_111() != -1)
	{
		return;
	}
	if (!func_28(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_101(int iParam0)
{
	if (!func_28(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_102()
{
	if (func_111() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_103(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1.0f)
	{
		if (func_26())
		{
			fParam4 = 50.0f;
		}
		else
		{
			fParam4 = 75.0f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_124(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL_ALLOWPLAYAFTERDEATH")) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_125(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_126(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_127(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				sVar3.f_5 = 1;
				sVar3.f_6 = 1;
				sVar3.f_0 = sParam2;
				sVar3.f_3 = iParam11;
				sVar3.f_4 = iParam1;
				sVar3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				sVar3.f_6 = iParam15;
				sVar3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(sVar3.f_7), 3);
					MISC::SET_BIT(&(sVar3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &sVar3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_129(func_128(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_104(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_105(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630.f_27 && !bParam4)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = func_125(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_130(PLAYER::PLAYER_PED_ID(), 0);
				if (func_131(iVar3) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
				}
				vVar7 = { func_132(0) /*3*/ };
				vVar10 = { func_133(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) /*3*/ };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_106(var uParam0)
{
	return func_134(*uParam0, 1);
}

void func_107(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1 || !func_106(uParam0))
	{
		func_126(uParam0);
	}
}

bool func_109(var uParam0, float fParam1)
{
	if (!func_106(uParam0))
	{
		return false;
	}
	if (func_135(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_110(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	Vector3 vVar0[24];
	int iVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_125(iParam2, iParam3, 1, 1) < 70.0f || bParam5))
	{
		strcpy_s(&cVar0, 24, sParam1);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_125(iParam2, iParam3, 1, 1) < 25.0f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_126(&uLocal_0);
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
		{
			if (func_136(sParam1))
			{
				return 1;
			}
		}
		else if (func_137(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	return Global_1572887.f_12;
}

bool func_112(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_113(int iParam0, int iParam1)
{
	if (func_111() != -1)
	{
		return;
	}
	if (!func_28(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= Global_24887[iParam0 /*2*/] & iParam1;
}

void func_114(int iParam0)
{
	int iVar0;

	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_115(int iParam0, bool bParam1)
{
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!func_85(iParam0, 2))
	{
		return 0;
	}
	if (func_86(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_98(iParam0)))
	{
		return 1;
	}
	if (func_85(iParam0, 1) && !bParam1)
	{
		func_100(iParam0, 128);
		return 1;
	}
	func_113(iParam0, 129);
	func_114(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_98(iParam0));
	func_138(iParam0, 0);
	return 1;
}

bool func_116(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_117(int iParam0)
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

int func_118(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_119(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_120(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_139(iParam0, 0, 0);
	if (func_140(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_141(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_142(iParam0, 1);
			}
			else
			{
				func_143(iParam0, 1);
			}
		}
		else
		{
			func_144(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_145())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_123(int iParam0, bool bParam1)
{
	if (func_111() != -1)
	{
		return false;
	}
	if (!func_28(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_98(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_88(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_98(iParam0));
}

float func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_125(Global_35, iParam0, bParam1, bParam2);
}

float func_125(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_126(var uParam0)
{
	func_146(uParam0, 0.0f);
}

bool func_127(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25.0f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_128(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = bParam4;
	sVar0.f_6 = iParam7;
	return func_147(iParam0, &sVar0);
}

int func_129(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

var func_130(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_131(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

Vector3 func_132(int iParam0)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) /*3*/ };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) /*3*/ };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_133((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_133(Vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		fVar1 = (1.0f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) /*3*/ };
	}
	else
	{
		vParam0.x = 0.0f;
		vParam0.f_1 = 0.0f;
		vParam0.f_2 = 0.0f;
	}
	return vParam0;
}

bool func_134(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_135(var uParam0)
{
	if (!func_106(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_148(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_149() - uParam0->f_1);
}

bool func_136(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_137(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_150(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_138(int iParam0, int iParam1)
{
	if (!func_28(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
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

bool func_140(int iParam0)
{
	if (func_91(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_141(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_140(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_142(int iParam0, bool bParam1)
{
	if (func_140(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (func_140(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (func_140(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_145()
{
	return true;
}

void func_146(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_149() - fParam1);
	func_151(uParam0, 1);
	func_152(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_147(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_148(var uParam0)
{
	return func_134(*uParam0, 2);
}

float func_149()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_150(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

