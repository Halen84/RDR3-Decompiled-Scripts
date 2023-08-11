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
	struct<274> /*2192*/ sLocal_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122377164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_288 = 0;
#pragma endregion

void __SCRIPT()
{
	int iVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&sLocal_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (sLocal_14.f_0 > 2)
		{
			func_2(20, sLocal_14.f_248, &(sLocal_14.f_146), &(sLocal_14.f_137), &(sLocal_14.f_273), 0, 1097859072, 0);
			func_3(&sLocal_14, sLocal_14.f_248);
			func_4(&sLocal_14);
			if (func_5(20, sLocal_14.f_146, 1, 1) && sLocal_14.f_0 > 2)
			{
				func_7(&sLocal_14, &(sLocal_14.f_154), func_6(2), 0, 0, 0);
			}
			else
			{
				func_8(&sLocal_14);
				func_9(&sLocal_14);
				func_10(&sLocal_14, &sLocal_14);
				func_11(sLocal_14.f_146, &(sLocal_14.f_155), 128, 20, 0);
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_146) && func_12(Global_35, sLocal_14.f_148, 0, 1))
				{
					CAM::_0xFC3F638BE2B6BB02();
				}
				switch (sLocal_14.f_0)
				{
					case 0:
						func_13(&sLocal_14);
						break;
					case 1:
						if (func_14(&sLocal_14))
						{
							func_15(&sLocal_14, 2);
						}
						break;
					case 2:
						func_16(&sLocal_14);
						break;
					case 3:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_148, true, 0))
						{
							if (sLocal_14.f_270 && !func_17(sLocal_14.f_155, 256))
							{
								func_15(&sLocal_14, 4);
							}
							else
							{
								func_15(&sLocal_14, 6);
							}
						}
						break;
					case 4:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_18(&(sLocal_14.f_155), 256);
							func_21(&(sLocal_14.f_1), func_20(func_19(sLocal_14.f_161)), 0, -1, 0, 0);
						}
						else
						{
							func_15(&sLocal_14, 5);
						}
						break;
					case 5:
						if (!AUDIO::_IS_ANY_CONVERSATION_PLAYING(true))
						{
							func_22(&(sLocal_14.f_131), 0.0f);
							sLocal_14.f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
							func_15(&sLocal_14, 8);
						}
						break;
					case 6:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_21(&(sLocal_14.f_1), func_20(func_23(sLocal_14.f_156)), 0, -1, 0, 0);
						}
						else
						{
							sLocal_14.f_156 = (1 + sLocal_14.f_156);
							func_15(&sLocal_14, 7);
						}
						break;
					case 7:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146) && sLocal_14.f_156 <= sLocal_14.f_157)
						{
							func_22(&(sLocal_14.f_131), 0.0f);
							sLocal_14.f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
							func_15(&sLocal_14, 8);
						}
						else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146) && sLocal_14.f_156 > sLocal_14.f_157)
						{
							func_15(&sLocal_14, 9);
						}
						break;
					case 8:
						if (func_24(&(sLocal_14.f_131)) > sLocal_14.f_152)
						{
							func_15(&sLocal_14, 6);
						}
						break;
					case 9:
						func_25(&sLocal_14);
						break;
					case 10:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(0), 0, 0, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 11:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(1), 0, 0, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 21:
						func_26(&sLocal_14);
						break;
					case 12:
						func_27(&sLocal_14);
						break;
					case 13:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(5), 1, 1, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 14:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(6), 1, 1, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 15:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(7), 1, 1, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 16:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(8), 1, 1, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 17:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(9), 1, 1, 0))
						{
							func_15(&sLocal_14, 21);
						}
						break;
					case 26:
						func_28(&sLocal_14);
						break;
					case 22:
						if ((!func_17(sLocal_14.f_155, (1 << 11)) && !func_17(sLocal_14.f_155, (1 << 13))) && !func_17(sLocal_14.f_155, (1 << 12)))
						{
							func_18(&(sLocal_14.f_155), (1 << 11));
						}
						func_7(&sLocal_14, &(sLocal_14.f_154), func_29(sLocal_14.f_158), 1, 0, 0);
						if (!func_30(&(sLocal_14.f_140)))
						{
							func_31(&(sLocal_14.f_140));
						}
						if (func_17(sLocal_14.f_155, (1 << 13)) || func_17(sLocal_14.f_155, (1 << 12)))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								func_32(&(sLocal_14.f_140));
								func_15(&sLocal_14, 23);
							}
						}
						else if (func_33(&(sLocal_14.f_140), 9.0f))
						{
							func_34(&(sLocal_14.f_155), (1 << 11));
							func_15(&sLocal_14, 25);
						}
						break;
					case 23:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_35(&sLocal_14);
						}
						else
						{
							func_15(&sLocal_14, 24);
						}
						break;
					case 24:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_15(&sLocal_14, 25);
						}
						break;
					case 27:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(10), 0, 0, 1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_154, false))
						{
							sLocal_14.f_272 = 0;
							func_15(&sLocal_14, 35);
						}
						break;
					case 28:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(11), 0, 0, 1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_154, false))
						{
							sLocal_14.f_272 = 0;
							func_15(&sLocal_14, 35);
						}
						break;
					case 29:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(12), 0, 0, 1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_154, false))
						{
							sLocal_14.f_272 = 0;
							func_15(&sLocal_14, 35);
						}
						break;
					case 30:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(13), 0, 0, 1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_154, false))
						{
							sLocal_14.f_272 = 0;
							func_15(&sLocal_14, 35);
						}
						break;
					case 31:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(14), 0, 0, 1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_154, false))
						{
							sLocal_14.f_272 = 0;
							func_15(&sLocal_14, 35);
						}
						break;
					case 32:
						if (!func_17(sLocal_14.f_155, (1 << 9)))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2729.398f, 704.7125f, 173.0246f, 2.0f, 20000, 0.25f, 0, -136.81f);
							func_36(sLocal_14.f_146, &iVar0, 0, 0, 1, 1);
							func_18(&(sLocal_14.f_155), (1 << 9));
						}
						else if (!func_37(sLocal_14.f_146, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || func_38(sLocal_14.f_146, -2729.398f, 704.7125f, 173.0246f, 1) <= 0.55f)
						{
							TASK::TASK_COWER(sLocal_14.f_146, -1, Global_35, 0);
							func_15(&sLocal_14, 36);
						}
						break;
					case 25:
						if (func_7(&sLocal_14, &(sLocal_14.f_154), func_6(15), 0, 0, 1))
						{
							func_34(&(sLocal_14.f_155), (1 << 10));
							func_15(&sLocal_14, 33);
						}
						break;
					case 33:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_21(&(sLocal_14.f_1), func_20(func_23(28)), 0, -1, 0, 0);
						}
						else
						{
							func_15(&sLocal_14, 34);
						}
						break;
					case 34:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_15(&sLocal_14, 35);
						}
						break;
					case 35:
						break;
					case 36:
						if (sLocal_14.f_272 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_39(&sLocal_14);
						}
						else
						{
							sLocal_14.f_272 = 0;
							func_15(&sLocal_14, 37);
						}
						break;
					case 37:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_146))
						{
							func_15(&sLocal_14, 35);
						}
						break;
					case 38:
						break;
					case 39:
						break;
					case 40:
						func_40(&(sLocal_14.f_146), 2);
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1(int iParam0)
{
	func_41(&(iParam0->f_249));
	func_42(20);
	if (func_43(iParam0->f_143))
	{
		if (iParam0->f_271)
		{
			func_44(iParam0->f_143, 1);
		}
	}
	func_45(&(iParam0->f_211), 0, 1, 1, 0);
	func_46(&(iParam0->f_190), &(iParam0->f_211));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_146))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_146, 0.0f);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_146));
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_147))
	{
		func_47(iParam0->f_147);
		VOLUME::DELETE_VOLUME(iParam0->f_147);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_149))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_149);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_149);
		VOLUME::DELETE_VOLUME(iParam0->f_149);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_148))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_148);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_148);
		VOLUME::DELETE_VOLUME(iParam0->f_148);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_150))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_150);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_48();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0.0f)
	{
		if (!func_49(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_30(uParam3))
	{
		func_22(uParam3, 0.0f);
	}
	else if (func_24(uParam3) >= 2.0f)
	{
		if (!func_50(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_51(iParam0);
			*uParam4 = 1;
			func_32(uParam3);
			return 1;
		}
		else
		{
			func_51(iParam0);
			*uParam4 = 1;
			func_32(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_52(Global_35, 0))
	{
		func_1(iParam0);
	}
	else if (!func_12(Global_35, Global_1396257[20 /*638*/][iParam1 /*48*/].f_47, 0, 1))
	{
		func_1(iParam0);
	}
	else if (func_53(20, iParam1, &(iParam0->f_249), iParam0->f_146))
	{
		func_1(iParam0);
	}
}

void func_4(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_146))
	{
		if (!func_52(iParam0->f_146, 0))
		{
			func_1(iParam0);
		}
		else if ((*iParam0 > 2 && *iParam0 < 26) || ((*iParam0 > 32 && *iParam0 < 38) && *iParam0 != 37))
		{
			if (!iParam0->f_272 && func_54(iParam0->f_146, 0, &(iParam0->f_99), &(iParam0->f_127), 0, 0))
			{
				func_55(&(iParam0->f_99), &(iParam0->f_127));
				iParam0->f_272 = 1;
				iParam0->f_271 = 1;
				AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
				func_34(&(iParam0->f_155), (1 << 10));
				func_34(&(iParam0->f_155), (1 << 11));
				if ((*iParam0 >= 4 && *iParam0 <= 8) || (*iParam0 >= 33 && *iParam0 <= 35))
				{
					func_15(iParam0, 36);
					return;
				}
				if ((*iParam0 >= 9 && *iParam0 <= 11) || *iParam0 == 25)
				{
					func_15(iParam0, 32);
					return;
				}
				if (*iParam0 != 36)
				{
					func_15(iParam0, 26);
				}
			}
		}
	}
}

bool func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_56())
		{
			return true;
		}
	}
	if (!PED::IS_PED_INJURED(bParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam1, true, false)) < 18.0f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_57(0) == 7 || func_58())
		{
			return true;
		}
	}
	if (func_59(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 10)))
	{
		return true;
	}
	return false;
}

char* func_6(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_Enter_From_Sit";
			break;
		case 1:
			sVar0 = "pbl_Enter_From_Crouch";
			break;
		case 2:
			sVar0 = "pbl_Idle_A";
			break;
		case 3:
			sVar0 = "pbl_Idle_B";
			break;
		case 4:
			sVar0 = "pbl_Idle_C";
			break;
		case 5:
			sVar0 = "pbl_SpeechA_Im_Not_The_Devil";
			break;
		case 6:
			sVar0 = "pbl_SpeechB_I_See_You_Man";
			break;
		case 7:
			sVar0 = "pbl_SpeechC_I_Dont_Want_Presents";
			break;
		case 8:
			sVar0 = "pbl_SpeechD_My_Philosophy_Is";
			break;
		case 9:
			sVar0 = "pbl_SpeechE_Nothing_Makes_Me_Long";
			break;
		case 10:
			sVar0 = "pbl_Aggro_A";
			break;
		case 11:
			sVar0 = "pbl_Aggro_B";
			break;
		case 12:
			sVar0 = "pbl_Aggro_C";
			break;
		case 13:
			sVar0 = "pbl_Aggro_D";
			break;
		case 14:
			sVar0 = "pbl_Aggro_E";
			break;
		case 15:
			sVar0 = "pbl_Walk_Exit_to_Sitting";
			break;
	}
	return sVar0;
}

bool func_7(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam1, sParam2)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
			}
			if (bParam4)
			{
				if (!func_60(&(iParam0->f_146), 0, 0))
				{
					return false;
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_Loop", bParam3, false);
				BUILTIN::WAIT(0);
				return false;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				if (((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_Idle_A", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_Idle_B", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_Idle_C", true)) || (ANIMSCENE::GET_ANIM_SCENE_PHASE(*uParam1) > 0.99f && bParam5))
				{
					if (func_61(uParam1, iParam0->f_151))
					{
						iParam0->f_151 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_8(int iParam0)
{
	if (*iParam0 >= 31 || *iParam0 <= 2)
	{
		return;
	}
	func_62(&(iParam0->f_145), iParam0->f_150, &(iParam0->f_146), &(iParam0->f_165), &(iParam0->f_134), 5000);
}

void func_9(int iParam0)
{
	if (func_17(iParam0->f_155, 64))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 17)
	{
		if (iParam0->f_162 < 2)
		{
			if (func_63(&(iParam0->f_146), 249295937))
			{
				func_18(&(iParam0->f_155), 64);
			}
		}
	}
}

void func_10(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_148, true, 0) && func_17(iParam0->f_155, (1 << 10))) && *iParam1 < 26)
	{
		iVar0 = 0;
		iVar1 = func_64(iParam0->f_246, 10240, 0);
		if (iParam0->f_246 == 0)
		{
			iVar1 |= 1;
		}
		iVar2 = func_65(&(iParam0->f_146), &(iParam0->f_190), 15.0f, &(iParam0->f_211), 0.0f, 2, 1, iVar0, iVar1, 0, 0, 2, -1082130432);
		if (func_17(iParam0->f_155, (1 << 11)))
		{
			func_66(iParam0, 1);
			func_67(iParam0, 0);
			if (iVar2 != -1)
			{
				if (iVar2 == 0)
				{
					if (func_68())
					{
						if (iParam0->f_248 == 0)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "JOHN_PLAYER", 1, 1);
						}
						else if (iParam0->f_248 == 1)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "JOHN_PLAYER", 6, 1);
						}
						else if (iParam0->f_248 == 2)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "JOHN_PLAYER", 8, 1);
						}
						else if (iParam0->f_248 == 3)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "JOHN_PLAYER", 11, 1);
						}
						else if (iParam0->f_248 == 4)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "JOHN_PLAYER", 18, 1);
						}
					}
					else if (iParam0->f_248 == 0)
					{
						func_69(Global_35, "INSULT_PHILOSOPHER_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 1)
					{
						func_69(Global_35, "INSULT_PHILOSOPHER_CONV_PART2", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 2)
					{
						func_69(Global_35, "INSULT_PHILOSOPHER_CONV_PART3", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 3)
					{
						func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "ARTHUR", 17, 1);
					}
					else if (iParam0->f_248 == 4)
					{
						func_69(Global_35, "INSULT_MALE_CONV_PART1", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, "ARTHUR", 18, 1);
					}
					func_18(&(iParam0->f_155), (1 << 13));
				}
				else if (iVar2 == 1)
				{
					func_69(Global_35, "GREET_GENERAL", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_146, 1, 0, 0, 1);
					func_18(&(iParam0->f_155), (1 << 12));
				}
				func_34(&(iParam0->f_155), (1 << 11));
				func_67(iParam0, 1);
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false))
				{
					if (!WEAPON::_IS_WEAPON_LANTERN(iVar3))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					}
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
			}
		}
		else
		{
			func_66(iParam0, 0);
			func_67(iParam0, 1);
		}
	}
	else
	{
		func_66(iParam0, 0);
		func_70(&(iParam0->f_146));
		func_71(&(iParam0->f_190), 0);
		func_45(&(iParam0->f_211), 0, 0, 1, 0);
	}
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_72(iParam3);
	if (fParam4 == 0.0f)
	{
		if (func_49(iParam0, Global_35, 15.0f, 1))
		{
			if (!func_73(*uParam1, iParam2))
			{
				if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
				{
					func_74(uParam1, iParam2);
				}
			}
		}
		else if (func_73(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_75(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15.0f)
	{
		if (!func_73(*uParam1, iParam2))
		{
			if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
			{
				func_74(uParam1, iParam2);
			}
		}
	}
	else if (func_73(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_75(uParam1, iParam2);
	}
}

bool func_12(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_13(int iParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_154))
	{
		iParam0->f_154 = ANIMSCENE::_CREATE_ANIM_SCENE(func_76(), 2, func_6(0), false, true);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_154))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_154);
		STREAMING::REQUEST_ANIM_DICT(func_77());
		STREAMING::REQUEST_MODEL(iParam0->f_144, false);
		HUD::TEXT_BLOCK_REQUEST("SPPICAU");
		HUD::TEXT_BLOCK_REQUEST("SPPC");
		func_78(iParam0);
		func_79(iParam0);
		func_80(iParam0->f_147, "SP_Philosopher1_Block", 1, 0, 0, 0, -1082130432);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_149, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0->f_149, 0, 0, 0, -1, -1, 0);
		iParam0->f_143 = func_82(20, 0, 9, func_81(20));
		if (!func_43(iParam0->f_143))
		{
		}
		iParam0->f_248 = func_83(20);
		if (iParam0->f_248 == 0)
		{
			iParam0->f_159 = 0;
			iParam0->f_160 = 0;
			iParam0->f_156 = 0;
			iParam0->f_157 = 5;
			iParam0->f_161 = 0;
		}
		else if (iParam0->f_248 == 1)
		{
			iParam0->f_159 = 1;
			iParam0->f_160 = 1;
			iParam0->f_156 = 6;
			iParam0->f_157 = 11;
			iParam0->f_161 = 1;
		}
		else if (iParam0->f_248 == 2)
		{
			iParam0->f_159 = 2;
			iParam0->f_160 = 2;
			iParam0->f_156 = 12;
			iParam0->f_157 = 17;
			iParam0->f_161 = 2;
		}
		else if (iParam0->f_248 == 3)
		{
			iParam0->f_159 = 3;
			iParam0->f_160 = 3;
			iParam0->f_156 = 18;
			iParam0->f_157 = 22;
			iParam0->f_161 = 0;
		}
		else if (iParam0->f_248 == 4)
		{
			iParam0->f_159 = 4;
			iParam0->f_160 = 4;
			iParam0->f_156 = 23;
			iParam0->f_157 = 27;
			iParam0->f_161 = 1;
		}
		iVar0 = func_84(iParam0->f_143);
		if (iVar0 != 0)
		{
			iParam0->f_270 = 1;
		}
		func_85(&(iParam0->f_249));
		func_86(&(iParam0->f_99));
		func_87(&(iParam0->f_99), 1);
		func_88(&(iParam0->f_99), 1);
		func_89(&(iParam0->f_99), 0);
		func_90(&(iParam0->f_99), 0);
		func_91(&(iParam0->f_99), 1);
		func_92(&(iParam0->f_99), 1);
		func_93(&(iParam0->f_99), 1);
		func_94(&(iParam0->f_99), 0);
		func_95(&(iParam0->f_99), 0);
		func_96(&(iParam0->f_99), 1);
		func_97(&(iParam0->f_99), 0);
		func_98(&(iParam0->f_99), 0);
		func_99(&(iParam0->f_99), 1);
		func_100(&(iParam0->f_99), 1);
		func_101(&(iParam0->f_99), 1);
		func_102(&(iParam0->f_99), 1);
		func_103(&(iParam0->f_99), 1);
		func_104(&(iParam0->f_99), 1);
		func_105(&(iParam0->f_99), 1);
		func_15(iParam0, 1);
	}
}

bool func_14(int iParam0)
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	if (((((STREAMING::HAS_MODEL_LOADED(iParam0->f_144) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_154, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(func_77())) && HUD::TEXT_BLOCK_IS_LOADED("SPPICAU")) && HUD::TEXT_BLOCK_IS_LOADED("SPPC")) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1)
	{
		return true;
	}
	return false;
}

void func_15(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_16(int iParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	sVar0 = { func_106(0) /*4*/ };
	if (func_107(&(iParam0->f_146), iParam0->f_144, sVar0, sVar0.f_3, 1, 0, 1))
	{
		if (func_52(iParam0->f_146, 0))
		{
			func_108(iParam0->f_146, 20);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_146, "special_ped_group", 0.0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_146, true);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam0->f_146, false);
			TASK::SET_PED_PATH_CLIMB_COST_MODIFIER(iParam0->f_146, 20.0f);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_146, joaat("REL_CIVMALE"));
			func_109(iParam0->f_146, 1);
			func_110(&(iParam0->f_1), iParam0->f_146, "PHILOSOPHER", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_146, sVar0, sVar0.f_3, true, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_154, "PHILOSOPHER", iParam0->f_146, 0);
			PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0->f_146, 0, false);
			if (((iParam0->f_248 == 1 || iParam0->f_248 == 2) || iParam0->f_248 == 3) || iParam0->f_248 == 4)
			{
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(iParam0->f_146, &uVar4));
			}
			func_15(iParam0, 3);
		}
	}
}

bool func_17(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_18(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

int func_19(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 29;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 31;
			break;
		default:
			iVar0 = 29;
			break;
	}
	return iVar0;
}

Vector3 func_20(int iParam0)
{
	Vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			strcpy_s(&cVar0, 24, "SPPIC_INTROA");
			break;
		case 1:
			strcpy_s(&cVar0, 24, "SPPIC_INTROB");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "SPPIC_INTROC");
			break;
		case 3:
			strcpy_s(&cVar0, 24, "SPPIC_INTROD");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "SPPIC_INTROE");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "SPPIC_INTROF");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "SPPIC_INTROG");
			break;
		case 7:
			strcpy_s(&cVar0, 24, "SPPIC_INTROH");
			break;
		case 8:
			strcpy_s(&cVar0, 24, "SPPIC_INTROI");
			break;
		case 9:
			strcpy_s(&cVar0, 24, "SPPIC_INTROJ");
			break;
		case 10:
			strcpy_s(&cVar0, 24, "SPPIC_INTROK");
			break;
		case 11:
			strcpy_s(&cVar0, 24, "SPPIC_INTROL");
			break;
		case 12:
			strcpy_s(&cVar0, 24, "SPPIC_INTROM");
			break;
		case 13:
			strcpy_s(&cVar0, 24, "SPPIC_INTRON");
			break;
		case 14:
			strcpy_s(&cVar0, 24, "SPPIC_GREETA");
			break;
		case 15:
			strcpy_s(&cVar0, 24, "SPPIC_GREETB");
			break;
		case 16:
			strcpy_s(&cVar0, 24, "SPPIC_GREETC");
			break;
		case 17:
			strcpy_s(&cVar0, 24, "SPPIC_GREETD");
			break;
		case 18:
			strcpy_s(&cVar0, 24, "SPPIC_GREETE");
			break;
		case 19:
			strcpy_s(&cVar0, 24, "SPPIC_GREETF");
			break;
		case 20:
			strcpy_s(&cVar0, 24, "SPPIC_GREETG");
			break;
		case 21:
			strcpy_s(&cVar0, 24, "SPPIC_GREETH");
			break;
		case 22:
			strcpy_s(&cVar0, 24, "SPPIC_GREETI");
			break;
		case 23:
			strcpy_s(&cVar0, 24, "SPPIC_GREETJ");
			break;
		case 24:
			strcpy_s(&cVar0, 24, "SPPIC_GREETK");
			break;
		case 25:
			strcpy_s(&cVar0, 24, "SPPIC_GREETL");
			break;
		case 26:
			strcpy_s(&cVar0, 24, "SPPIC_GREETM");
			break;
		case 27:
			strcpy_s(&cVar0, 24, "SPPIC_GREETN");
			break;
		case 28:
			strcpy_s(&cVar0, 24, "SPPIC_GREETO");
			break;
		case 29:
			strcpy_s(&cVar0, 24, "SPPIC_SPEECHF");
			break;
		case 30:
			strcpy_s(&cVar0, 24, "SPPIC_SPEECHG");
			break;
		case 31:
			strcpy_s(&cVar0, 24, "SPPIC_SPEECHH");
			break;
	}
	return cVar0;
}

bool func_21(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_111(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_112() - fParam1);
	func_113(uParam0, 1);
	func_114(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_23(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 14;
			break;
		case 3:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 6;
			break;
		case 5:
			iVar0 = 19;
			break;
		case 6:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 16;
			break;
		case 9:
			iVar0 = 15;
			break;
		case 10:
			iVar0 = 17;
			break;
		case 11:
			iVar0 = 18;
			break;
		case 12:
			iVar0 = 10;
			break;
		case 13:
			iVar0 = 12;
			break;
		case 14:
			iVar0 = 11;
			break;
		case 15:
			iVar0 = 7;
			break;
		case 16:
			iVar0 = 8;
			break;
		case 17:
			iVar0 = 27;
			break;
		case 18:
			iVar0 = 22;
			break;
		case 19:
			iVar0 = 24;
			break;
		case 20:
			iVar0 = 23;
			break;
		case 21:
			iVar0 = 21;
			break;
		case 22:
			iVar0 = 20;
			break;
		case 23:
			iVar0 = 26;
			break;
		case 24:
			iVar0 = 5;
			break;
		case 25:
			iVar0 = 13;
			break;
		case 26:
			iVar0 = 25;
			break;
		case 27:
			iVar0 = 28;
			break;
		case 28:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

float func_24(var uParam0)
{
	if (!func_30(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_112() - uParam0->f_1);
}

void func_25(int iParam0)
{
	func_117(20, func_116());
	func_18(&(sLocal_14.f_155), (1 << 10));
	func_15(iParam0, 10);
}

void func_26(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_146))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iParam0->f_159 > iParam0->f_160)
	{
		if (iParam0->f_248 == 0)
		{
			func_118(20, 1);
		}
		else if (iParam0->f_248 == 1)
		{
			func_118(20, 2);
		}
		else if (iParam0->f_248 == 2)
		{
			func_118(20, 3);
		}
		else if (iParam0->f_248 == 3)
		{
			func_118(20, 4);
		}
		else if (iParam0->f_248 == 4)
		{
			func_118(20, 12);
		}
		func_119(20);
		func_15(iParam0, 22);
		return;
	}
	if (func_49(Global_35, iParam0->f_146, 15.0f, 1))
	{
		func_15(iParam0, 12);
		func_32(&(iParam0->f_131));
		return;
	}
	if (!func_30(&(iParam0->f_131)))
	{
		iParam0->f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
		func_22(&(iParam0->f_131), 0.0f);
		return;
	}
	else if (func_24(&(iParam0->f_131)) < iParam0->f_152)
	{
		return;
	}
	switch (iParam0->f_158)
	{
		case 0:
			if (func_7(iParam0, &(iParam0->f_154), func_6(2), 0, 0, 0))
			{
				iParam0->f_158++;
				func_32(&(iParam0->f_131));
			}
			break;
		case 1:
			if (func_7(iParam0, &(iParam0->f_154), func_6(3), 0, 0, 0))
			{
				iParam0->f_158++;
				func_32(&(iParam0->f_131));
			}
			break;
		case 2:
			if (func_7(iParam0, &(iParam0->f_154), func_6(4), 0, 0, 0))
			{
				iParam0->f_158 = 0;
				func_32(&(iParam0->f_131));
			}
			break;
		default:
			if (func_7(iParam0, &(iParam0->f_154), func_6(4), 0, 0, 0))
			{
				iParam0->f_158 = 0;
				func_32(&(iParam0->f_131));
			}
			break;
	}
}

void func_27(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_146))
	{
		return;
	}
	if (!func_30(&(iParam0->f_131)))
	{
		iParam0->f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
		func_22(&(iParam0->f_131), 0.0f);
	}
	else if (func_24(&(iParam0->f_131)) < iParam0->f_152)
	{
		return;
	}
	switch (iParam0->f_159)
	{
		case 0:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 13);
			break;
		case 1:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 14);
			break;
		case 2:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 17);
			break;
		case 3:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 15);
			break;
		case 4:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 16);
			break;
		case 5:
			func_32(&(iParam0->f_131));
			func_15(iParam0, 25);
			break;
	}
}

void func_28(int iParam0)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
	{
		case 0:
			func_15(iParam0, 27);
			break;
		case 1:
			func_15(iParam0, 28);
			break;
		case 2:
			func_15(iParam0, 29);
			break;
		case 3:
			func_15(iParam0, 30);
			break;
		case 4:
			func_15(iParam0, 31);
			break;
	}
}

char[] func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_6(2);
		case 1:
			return func_6(3);
		case 2:
			return func_6(4);
		default:
			return func_6(4);
	}
	return func_6(4);
}

bool func_30(var uParam0)
{
	return func_120(*uParam0, 1);
}

void func_31(var uParam0)
{
	func_22(uParam0, 0.0f);
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_33(var uParam0, float fParam1)
{
	if (func_121(uParam0, fParam1))
	{
		func_32(uParam0);
		return true;
	}
	return false;
}

void func_34(var uParam0, int iParam1)
{
	func_75(uParam0, iParam1);
}

void func_35(int iParam0)
{
	if (iParam0->f_248 == 0)
	{
		if (func_17(sLocal_14.f_155, (1 << 12)))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN_FIRST_TIME", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR_FIRST_TIME", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			}
		}
		else if (func_17(sLocal_14.f_155, (1 << 13)))
		{
			func_69(iParam0->f_146, "GENERIC_MOCK", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
	else if (iParam0->f_248 == 1)
	{
		if (func_17(sLocal_14.f_155, (1 << 12)))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			}
		}
		else if (func_17(sLocal_14.f_155, (1 << 13)))
		{
			func_69(iParam0->f_146, "HEY_IM_TALKING", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 2, 1);
		}
	}
	else if (iParam0->f_248 == 2)
	{
		if (func_17(sLocal_14.f_155, (1 << 12)))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 2, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 2, 1);
			}
		}
		else if (func_17(sLocal_14.f_155, (1 << 13)))
		{
			func_69(iParam0->f_146, "PLAYER_STILL_HANGING", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
	else if (iParam0->f_248 == 3)
	{
		if (func_17(sLocal_14.f_155, (1 << 12)))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 3, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 3, 1);
			}
		}
		else if (func_17(sLocal_14.f_155, (1 << 13)))
		{
			func_69(iParam0->f_146, "GENERIC_GOODBYE", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 2, 1);
		}
	}
	else if (iParam0->f_248 == 4)
	{
		if (func_17(sLocal_14.f_155, (1 << 12)))
		{
			func_69(iParam0->f_146, "HOWS_IT_GOING", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
		}
		else if (func_17(sLocal_14.f_155, (1 << 13)))
		{
			func_69(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
}

void func_36(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam2 > 0.0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(bParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

bool func_37(int iParam0, int iParam1)
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

float func_38(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_39(int iParam0)
{
	int iVar0;

	iVar0 = func_122(0, 10, iParam0->f_274);
	iVar0 = func_123(iVar0, 0, 9);
	iParam0->f_274 = iVar0;
	switch (iParam0->f_274)
	{
		case 0:
			func_69(iParam0->f_146, "STOP_THAT", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 1:
			func_69(iParam0->f_146, "CUT_THAT_OUT", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 2:
			func_69(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 3:
			func_69(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 2, 1);
			break;
		case 4:
			func_69(iParam0->f_146, "VICTIMIZED_REACT", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 5:
			func_69(iParam0->f_146, "GENERIC_INSULT_MED_NEUTRAL", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 6:
			func_69(iParam0->f_146, "GENERIC_INSULT_HIGH_MALE", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 7:
			func_69(iParam0->f_146, "GENERIC_INSULT_HIGH_NEUTRAL", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 8:
			func_69(iParam0->f_146, "GENERIC_CURSE_MED", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 9:
			func_69(iParam0->f_146, "GENERIC_CURSE_HIGH", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
	}
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;

	if (func_37(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
	{
		return;
	}
	vVar1 = { func_106(iParam1) /*4*/ };
	TASK::CLEAR_PED_TASKS(*uParam0, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1.0f, 20000, 40000.0f, 0.5f, 0);
	TASK::TASK_COWER(0, -1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
}

void func_41(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_20);
	}
	if (func_30(&(uParam0->f_13)))
	{
		func_32(&(uParam0->f_13));
	}
}

void func_42(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_124(0, -1);
	}
	func_125();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2--;
	Global_1935183.f_28 = 0;
}

bool func_43(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_44(int iParam0, int iParam1)
{
	if (!func_43(iParam0))
	{
		return;
	}
	func_126(iParam0, iParam1);
}

void func_45(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_127((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_128(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_46(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<10> /*80*/ sVar22;

	sVar1.f_1 = -1;
	sVar1.f_3 = -1;
	sVar1.f_6 = -1;
	sVar1.f_12 = (1 << 30);
	sVar1.f_16 = 1;
	sVar22.f_2 = 570;
	sVar22.f_3 = 1065353216;
	sVar22.f_4 = -1082130432;
	sVar22.f_9 = 2;
	func_129(iParam0, uParam1, 1);
	func_45(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_47(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_130(vVar0, 0);
}

int func_48()
{
	return Global_1899515;
}

bool func_49(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_50(int iParam0)
{
	return iParam0 != -15;
}

void func_51(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_48();
}

bool func_52(int iParam0, int iParam1)
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
	if (func_17(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_53(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_57(0) == 1 || func_57(0) == 2) || func_57(0) == 8) || func_131(Global_1935630, (1 << 11)))
			{
				func_18(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_57(0) == 11)
			{
				func_18(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_57(0) == 6)
			{
				func_18(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_18(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_132(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_132(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_48();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_132(iVar2) > func_132(iVar1))
				{
					if (func_132(iVar0) > func_132(iVar2) + 1 || func_132(iVar0) < func_132(iVar1))
					{
						func_18(uParam2, 32);
					}
				}
				else if (func_132(iVar0) > func_132(iVar2) + 1 && func_132(iVar0) < func_132(iVar1))
				{
					func_18(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_133(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_133(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_134(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_134(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_135(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_18(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_136(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) | func_137(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, (1 << 11)))
				{
					if (!func_30(&(uParam2->f_13)))
					{
						func_22(&(uParam2->f_13), 0.0f);
					}
					else if (func_138(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_32(&(uParam2->f_13));
						func_18(uParam2, (1 << 9));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_30(&(uParam2->f_13)))
					{
						func_32(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_139())
			{
				func_18(uParam2, (1 << 10));
			}
		}
		if (uParam2->f_10)
		{
			if (func_140())
			{
				func_18(uParam2, (1 << 11));
			}
		}
		if (func_131(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_18(uParam2, 128);
		}
		if (func_59(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_18(uParam2, 256);
		}
	}
	if ((((((((((func_17(*uParam2, 2) || func_17(*uParam2, 4)) || func_17(*uParam2, 8)) || func_17(*uParam2, 16)) || func_17(*uParam2, 32)) || func_17(*uParam2, 64)) || func_17(*uParam2, 128)) || func_17(*uParam2, 256)) || func_17(*uParam2, (1 << 9))) || func_17(*uParam2, (1 << 10))) || func_17(*uParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_141(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0.0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!(uParam2->f_1 & 128) != 0)
		{
			if (func_142(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8) != 0)
			{
				if (func_144(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_145(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 32) != 0)
			{
				if (func_146(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_147(PLAYER::PLAYER_ID(), 0, 1, (uParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(uParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_148(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4) != 0)
				{
					if (func_149(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!(uParam2->f_1 & 256) != 0)
				{
					if (func_150(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 16) != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_151(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_151(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*uParam2 & 8) != 0)
			{
				if (func_152(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*uParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_153(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2) != 0)
			{
				if (func_154(uParam2, 4000))
				{
					if ((func_155(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 0, (*uParam2 & 256) != 0) & func_156(uParam2, iParam0)) && func_157(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 2) != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if ((func_155(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 1, (*uParam2 & 256) != 0) & func_156(uParam2, iParam0)) && func_157(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*uParam2 & (1 << 17)) == 0)
						{
							if (func_158(iParam0, Global_1935630.f_41))
							{
								func_159();
								*uParam3 = 2;
								func_143(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if ((*uParam2 & (1 << 17)) == 0)
					{
						if (func_158(iParam0, Global_1935630.f_41))
						{
							func_159();
							*uParam3 = 2;
							func_143(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_160(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_161() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_159();
						*uParam3 = 2;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*uParam2 & (1 << 17)) == 0)
				{
					if (func_162())
					{
						if (func_158(iParam0, Global_1935630.f_42))
						{
							func_159();
							*uParam3 = 2;
							func_143(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(uParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_163(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_164(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 16) != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_165(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*uParam2 & 64) != 0)
			{
				if (func_166(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if ((*uParam2 & (1 << 20)) != 0)
			{
				if (func_167(uParam2, 4000))
				{
					if (func_168(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if ((*uParam2 & (1 << 10)) != 0)
			{
				if (func_169(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_170(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_55(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = func_161();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_171(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_56()
{
	int iVar0;

	if (func_172() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_173(Global_1392915[iVar0 /*12*/].f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_57(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_58()
{
	return Global_1310750.f_16077 != 0;
}

bool func_59(var uParam0, int iParam1)
{
	return func_174(*uParam0, iParam1);
}

bool func_60(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0.0f)
	{
		if (fParam2 == 0.0f)
		{
			if (func_49(Global_35, *uParam0, 25.0f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25.0f)
		{
			return true;
		}
	}
	else if (fParam2 == 0.0f)
	{
		if (func_49(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_61(var uParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
	}
	return false;
}

void func_62(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_30(uParam4))
	{
		func_22(uParam4, 0.0f);
	}
	else if (func_138(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (func_175(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				iParam3->f_3 = uVar0[0];
				func_22(uParam4, 0.0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			iParam3->f_3 = Global_35;
			func_22(uParam4, 0.0f);
		}
	}
	*iParam3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iParam3->f_4 = 21030;
	iParam3->f_8 = 4;
	iParam3->f_17 = 2;
	iParam3->f_18 = 1;
	iParam3->f_19 = 3;
	iParam3->f_20 = 1;
	iParam3->f_21 = 3;
	iParam3->f_22 = 1;
	iParam3->f_13 = 3;
	iParam3->f_7 = iParam5;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam2, iParam3);
}

bool func_63(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam1, *uParam0);
		return true;
	}
	return false;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= (1 << 24);
	if (iParam1 != 0)
	{
		iVar0 |= iParam1;
	}
	if (iParam2 != 0)
	{
		iVar0 -= (iVar0 & iParam2);
	}
	return iVar0;
}

int func_65(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_176(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_177(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!(iParam8 & (1 << 21)) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184 /*PRF_DisableAutoGreets*/, true);
		}
		if ((iParam8 & (1 << 23)) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281 /*PRF_0xC5C24250*/, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_31(&(iParam1->f_13));
		}
		if (func_178(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_179(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_65(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_70(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_180(*uParam0, 1, 1);
						}
					}
					else if (func_181(iParam1, 22))
					{
						func_180(*uParam0, 0, 1);
					}
				}
				if (func_182(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_183(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_184(iParam8);
					if (func_185(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_186(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_187(iParam1, uParam3, fVar8);
					if (func_188(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_45(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_189(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_182(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_190(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_185(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_183(uParam0, func_182(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_184(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_45(uParam3, 0, 0, 1, 1);
					}
					func_191(iParam1, 1);
				}
				func_187(iParam1, uParam3, fVar8);
				if (func_189(uParam0, iParam1, fParam4, bVar6))
				{
					if ((iParam8 & (1 << 9)) != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!(iParam8 & (1 << 10)) != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_46(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_66(int iParam0, bool bParam1)
{
	func_192(&(iParam0->f_211[0 /*17*/]), bParam1, 0);
	func_192(&(iParam0->f_211[1 /*17*/]), bParam1, 0);
}

void func_67(int iParam0, bool bParam1)
{
	if (bParam1 && !iParam0->f_247)
	{
		iParam0->f_246 = 3;
		iParam0->f_247 = bParam1;
		func_71(&(iParam0->f_190), 0);
	}
	else if (!bParam1 && iParam0->f_247)
	{
		iParam0->f_246 = 0;
		iParam0->f_247 = bParam1;
		func_71(&(iParam0->f_190), 0);
	}
}

bool func_68()
{
	if (func_172() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_69(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = sParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = uParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_193(iParam0, &sVar0);
}

void func_70(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_71(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_32(&(iParam0->f_18));
}

char* func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_73(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

char* func_76()
{
	return "script@specialped@pdpic_philosopher_in_cave@ig@ig1@pdpic_ig1";
}

char* func_77()
{
	return "script_special_ped@pdpic_philosopher_in_cave@ig@ig1";
}

void func_78(int iParam0)
{
	struct<11> /*88*/ sVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_147))
	{
		sVar0 = { func_194(0) /*11*/ };
		iParam0->f_147 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_148))
	{
		sVar0 = { func_194(1) /*11*/ };
		iParam0->f_148 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_149))
	{
		sVar0 = { func_194(2) /*11*/ };
		iParam0->f_149 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_150))
	{
		sVar0 = { func_194(3) /*11*/ };
		iParam0->f_150 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
}

void func_79(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_195(0) /*2*/ };
	func_196(&(iParam0->f_211[0 /*17*/]), sVar0.f_0, "", sVar0.f_1, 0, 0, 0, 1, 0);
	func_197(&(iParam0->f_211[0 /*17*/]), 10);
	sVar0 = { func_195(1) /*2*/ };
	func_196(&(iParam0->f_211[1 /*17*/]), sVar0.f_0, "", sVar0.f_1, 0, 0, 0, 1, 0);
	func_197(&(iParam0->f_211[1 /*17*/]), 10);
}

int func_80(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	vVar3 = { VOLUME::GET_VOLUME_SCALE(iParam0) /*3*/ };
	iVar6 = func_198(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
			return 813446076;
			return joaat("SPID_BLIND_MAN_CASSIDY");
			return -161610929;
			return 419383665;
			return 1809158435;
			return 698747486;
			return 399829678;
			return -1767525506;
			return 1533318556;
			return 846763582;
			return 974338564;
			return 860809165;
			return -1682386507;
			return 420952075;
			return 1340251064;
			return -1417023286;
			return 237608522;
			return 1487910336;
			return 129290505;
			return 1231488843;
			return -499580940;
			return 1953535365;
			return -315419568;
			return -1708806962;
			return 1405526353;
			return -1903564707;
			return -1132839335;
			return 0;
		}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_199())
	{
		iVar2 = func_199();
	}
	iVar5 = func_200(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_201(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_201(iVar6) == 0)
			{
				return func_202(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_201(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_201(iVar6) == 0)
			{
				return func_202(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_202(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

var func_83(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

int func_84(int iParam0)
{
	if (!func_43(iParam0))
	{
		return -1;
	}
	return func_203(iParam0);
}

void func_85(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_86(var uParam0)
{
	func_87(uParam0, 0);
	func_103(uParam0, 0);
	func_99(uParam0, 1);
	func_95(uParam0, 1);
	func_204(uParam0, 0);
	func_96(uParam0, 1);
	func_205(uParam0, 1, 1, 1);
}

void func_87(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_207(&(uParam0->f_1), (1 << 14));
	}
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), (1 << 19));
	}
	else
	{
		func_207(&(uParam0->f_1), (1 << 19));
	}
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_207(&(uParam0->f_1), (1 << 17));
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 4);
	}
	else
	{
		func_206(uParam0, 4);
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 8);
	}
	else
	{
		func_207(&(uParam0->f_1), 8);
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 8);
	}
	else
	{
		func_206(uParam0, 8);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 32);
	}
	else
	{
		func_206(uParam0, 32);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 64);
	}
	else
	{
		func_206(uParam0, 64);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 16);
	}
	else
	{
		func_206(uParam0, (1 << 26));
		func_206(uParam0, 16);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 256);
	}
	else
	{
		func_206(uParam0, 256);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, (1 << 19));
	}
	else
	{
		func_206(uParam0, (1 << 19));
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 2);
	}
	else
	{
		func_206(uParam0, 2);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 256);
	}
	else
	{
		func_207(&(uParam0->f_1), 256);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 4);
	}
	else
	{
		func_207(&(uParam0->f_1), 4);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 16);
	}
	else
	{
		func_207(&(uParam0->f_1), 16);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 2);
	}
	else
	{
		func_207(&(uParam0->f_1), 2);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_207(&(uParam0->f_1), (1 << 11));
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 1);
	}
	else
	{
		func_207(&(uParam0->f_1), 1);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 128);
	}
	else
	{
		func_206(uParam0, 128);
	}
}

struct<4> /*32*/ func_106(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = { -2729.008f, 707.4378f, 173.027f /*3*/ };
			sVar0.f_3 = 359.6814f;
			break;
		case 1:
			sVar0 = { -2723.125f, 721.2363f, 170.1186f /*3*/ };
			sVar0.f_3 = 165.3186f;
			break;
		case 2:
			sVar0 = { -2729.008f, 707.4378f, 173.027f /*3*/ };
			sVar0.f_3 = 0.0f;
			break;
		case 3:
			sVar0 = { -2718.497f, 701.6826f, 175.8392f /*3*/ };
			sVar0.f_3 = 0.0f;
			break;
	}
	return sVar0;
}

bool func_107(var uParam0, int iParam1, Vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_208(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_208(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return true;
	}
	return false;
}

void func_108(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = iParam0;
}

void func_109(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263 /*PCF_NoCriticalHits*/, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138 /*PCF_OneShotWillKillPed*/, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488 /*PCF_DiesInstantlyToMeleeFromAnimals*/, bParam1);
	}
}

void func_110(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_209(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_111(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

float func_112()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_115(var uParam0)
{
	return func_120(*uParam0, 2);
}

bool func_116()
{
	if (func_172() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_117(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_AR"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_AR"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_JN"), 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_RC_CRKPT4_1_AR"), 0);
			}
			else if (func_211(55))
			{
				func_210(joaat("JOURNAL_RC_CRKPT4_1B_JN"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_RC_CRKPT4_1A_JN"), 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_GIANT_AR"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_GIANT_JN"), 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_AR"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_JN"), 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_AR"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_JN"), 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_AR"), 0);
			}
			else
			{
				func_210(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_JN"), 0);
			}
			break;
		default:
			break;
	}
}

void func_118(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_119(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_120(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_121(var uParam0, float fParam1)
{
	if (!func_30(uParam0))
	{
		return false;
	}
	if (func_24(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_212())
		{
			iVar0--;
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0--;
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_213(func_212(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_123(int iParam0, int iParam1, int iParam2)
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

void func_124(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_214(&Global_0, 8);
	}
	if (!func_215() || func_172() != -1)
	{
		return;
	}
	func_214(&Global_0, 1);
}

void func_125()
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
}

void func_126(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

bool func_127(int iParam0)
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

void func_128(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_127(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_216(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_217(iVar0);
	*uParam0 = 0;
}

void func_129(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_128(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_71(iParam0, 0);
		}
	}
}

void func_130(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_218(vParam0))
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
			if (func_219(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_131(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_132(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_133(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_173(Global_1835011[iParam0 /*74*/].f_1);
}

int func_134(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_220(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_135(int iParam0)
{
	int iVar0;

	iVar0 = func_221();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("HIGHPRESSURE"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("OVERCAST"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("SNOWLIGHT"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("SHOWER"):
				case joaat("SNOW"):
				case joaat("HIGHPRESSURE"):
				case joaat("SLEET"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("RAIN"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case joaat("FOG"):
				case joaat("MISTY"):
					return true;
			}
			break;
	}
	return false;
}

int func_136(var uParam0, var uParam1, float fParam2, var uParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_222(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_137(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) /*3*/ };
	if (!func_223(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1.0f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) /*3*/ };
		if (!func_224(iVar1, 0))
		{
			func_225(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_138(var uParam0)
{
	if (!func_30(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_115(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_161() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_139()
{
	return Global_1392040.f_6;
}

bool func_140()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

void func_141(var uParam0, bool bParam1, int iParam2)
{
	func_226(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1224589.f_6)
		{
			return;
		}
		if (Global_1224589.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = func_227(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if ((*uParam0 & 16) != 0)
			{
				if (!(*uParam0 & (1 << 25)) != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_207(uParam0, (1 << 25));
						}
					}
					else if (!(*uParam0 & (1 << 13)) != 0)
					{
						if (func_228(1))
						{
							func_207(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_228(1) || (*uParam0 & (1 << 13)) != 0))
				{
					func_206(uParam0, (1 << 25));
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!(uParam0->f_1 & (1 << 10)) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_229(uParam0))
			{
				uParam0->f_15 = func_161();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_161() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_230(uParam0);
}

bool func_142(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_231(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_232(iParam0, iVar2) <= func_233(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_143(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_234(iParam2, 1, 1, 1, 0))
	{
		func_207(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_171(uParam1, 1);
	func_235();
}

bool func_144(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_236(iParam0, !(*uParam1 & (1 << 28)) != 0, !(*uParam1 & (1 << 29)) != 0, !(*uParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_237(uParam1);
			if (func_238(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_239(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_171(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_171(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_145(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85.0f;
	if (func_240(iParam1, !(*uParam2 & (1 << 28)) != 0, !(*uParam2 & (1 << 29)) != 0, !(*uParam2 & (1 << 30)) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_237(uParam2);
		if (func_238(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_239(uParam2)
				{
					func_171(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_146(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_231(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_239(uParam1)
		{
			fVar3 = func_237(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, fVar3, -1.0f, -1.0f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar1, -1.0f, fVar3, -1.0f, -1.0f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_147(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_241(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &sVar0);
		if ((bParam3 || sVar0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == joaat("LAW_DISPATCH_PENDING"))
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &sVar18))
		{
			if (sVar18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(sVar18.f_0, sVar18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

bool func_148(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_161();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_242(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5.0f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)))
		{
			fVar2 = 3.0f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1.0f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= fVar2)
		{
			if (func_157(uParam2, iParam1))
			{
				func_171(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_150(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_243(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_157(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_171(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_151(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_244(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_171(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_171(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_245(iParam1, vVar0, vVar4))
					{
						func_171(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_171(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_245(iParam1, vVar0, vVar7))
					{
						func_171(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_152(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = (*uParam1 & (1 << 12)) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_231(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_246(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_247(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35.0f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
						vVar2[1 /*3*/] = { vVar9 /*3*/ };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_248(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_249(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_250(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_153(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) /*3*/ };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) /*3*/ };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_161();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true, true))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), true, true))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_251(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_252(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9 /*PCF_KilledByStealth*/, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_157(var uParam0, int iParam1)
{
	if (func_253(uParam0))
	{
		return true;
	}
	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9 /*PCF_KilledByStealth*/, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10 /*PCF_KilledByTakedown*/, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_158(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_254(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_159()
{
}

bool func_160(var uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
		if (func_255(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_161();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_38(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_161();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_161()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_162()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_161() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_163(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_233(uParam0);
	if (uParam0->f_12 > func_256(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_257(iParam1);
	iVar1 = func_258(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_164(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = (*uParam2 & 256) != false;
	bVar1 = (*uParam2 & (1 << 19)) != false;
	bVar2 = (*uParam2 & 128) != false;
	return func_259(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_165(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((*uParam1 & (1 << 26)) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if ((*uParam1 & (1 << 25)) != 0)
	{
		if (func_260(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1.0f, -1.0f, -1.0f, -1.0f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_261(uParam1, iParam0))
					{
						if (func_38(iVar4, Global_36, 1) < 7.0f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_166(int iParam0, var uParam1)
{
	if (!func_262(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90.0f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_167(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_161();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_168(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_169(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_161();
	}
	else if (func_161() - uParam1->f_4) > func_263(uParam1)
	{
		return func_264(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, (1 << 27));
	}
	else
	{
		func_206(uParam0, (1 << 27));
	}
}

int func_172()
{
	return Global_1572887.f_12;
}

bool func_173(int iParam0)
{
	int iVar0;

	iVar0 = func_265(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_174(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_175(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_266(iVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(iVar1, "bIgnoreThisPed"))
				{
					if (!func_267(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

void func_176(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

float func_177(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_178(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_268(iParam0, iParam1))
		{
			if (!func_174(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_45(uParam2, 0, 0, 1, 0);
				func_207(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_174(iParam1->f_10, 1))
		{
			func_269(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_206(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_179(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5.0f))
	{
		return false;
	}
	strcpy_s(&cVar0, 32, sParam5);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		bVar4 = func_174(iParam4, 32);
		func_129(iParam1, uParam2, 0);
		iVar5 = func_270(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_45(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_174(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_174(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_174(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_174(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_174(iParam4, (1 << 23)) || func_174(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_174(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_174(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_181(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_181(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_174(iParam4, (1 << 26)))
		{
			iVar6 |= (1 << 14);
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_271(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
			if (func_174(iParam4, (1 << 28)))
			{
				iVar8 = func_272(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_273(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_181(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331 /*PCF_0x9663C8F2*/, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493 /*PCF_0xA58B6703*/, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315 /*PCF_0xD38AEF95*/, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493 /*PCF_0xA58B6703*/, false);
			}
			if (func_174(iParam4, 2) || func_174(iParam4, 16))
			{
				func_180(*uParam0, 1, 1);
			}
			else
			{
				func_180(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_180(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_181(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_182(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = (iParam1 & 32) != false;
	bVar2 = (iParam1 & 65792) != false;
	bVar3 = (iParam1 & 1179648) != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_274(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_183(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_275(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_174(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_184(int iParam0)
{
	if (func_174(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_174(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_174(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_185(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_276(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_277(Global_35)) || func_278(Global_35)) || func_279(Global_35));
	fVar12 = -1.0f;
	if (func_30(&(iParam1->f_13)))
	{
		fVar12 = func_24(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_127((uParam4[iVar0 /*17*/])->f_6);
		func_280(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_281(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_282(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_45(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_283(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_129(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_284(iParam1, fParam6, iParam1->f_9))
					{
						func_31(&(iParam1->f_18));
						if (bVar6)
						{
							func_283(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_285(iParam1, fParam2);
	}
	return bVar5;
}

void func_186(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_187(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_286(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_285(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_188(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_287(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_288(iParam1, 0);
				func_129(iParam1, uParam2, func_181(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_189(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_31(&(iParam1->f_18));
			return false;
		}
		else if (func_30(&(iParam1->f_18)))
		{
			func_32(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_30(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0.0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_33(&(iParam1->f_18), fParam2);
	return true;
}

void func_190(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_280(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_191(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_192(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_289(iParam0, 13))
	{
		func_197(iParam0, 0);
	}
	else
	{
		func_290(iParam0, 0);
	}
	if (func_127(iParam0->f_6))
	{
		if (bParam2)
		{
			func_128(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_193(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

struct<11> /*88*/ func_194(int iParam0)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -2725.277f, 709.9713f, 173.0266f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 40.0f, 40.0f, 40.0f /*3*/ };
			sVar0.f_10 = "RandomEventBlock";
			break;
		case 1:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -2723.835f, 716.816f, 170.667f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 6.0f, 10.0f, 3.0f /*3*/ };
			sVar0.f_10 = "Trigger";
			break;
		case 2:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -2725.277f, 709.9713f, 173.0266f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 65.0f /*3*/ };
			sVar0.f_7 = { 2.0f, 2.0f, 10.0f /*3*/ };
			sVar0.f_10 = "StayAway";
			break;
		case 3:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -2725.277f, 709.9713f, 173.0266f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 155f /*3*/ };
			sVar0.f_7 = { 6.0f, 8.0f, 6.0f /*3*/ };
			sVar0.f_10 = "LookIKVolume";
			break;
	}
	return sVar0;
}

struct<2> /*16*/ func_195(int iParam0)
{
	struct<2> /*16*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0.f_0 = "PC_UC_NEG";
			sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 1:
			sVar0.f_0 = "PC_UC_POS";
			sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
	}
	return sVar0;
}

void func_196(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_127(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_291(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_292(iParam0->f_6, iParam0->f_5, 0);
			}
			func_293(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_294(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_197(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_198(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_218(vParam0))
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
		if (func_295(vParam0))
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
	func_296(iVar0, bParam8);
	return iVar0;
}

int func_199()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_201(int iParam0)
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

int func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_297(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_199())
	{
		return -1;
	}
	iVar0 = func_200(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_298(iVar1, 0);
	func_299(iVar1, 0);
	func_126(iVar1, 0);
	func_300(iVar1, 0);
	func_301(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_302(iVar1, iParam4);
	}
	return iVar1;
}

int func_203(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_204(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 128);
	}
	else
	{
		func_207(&(uParam0->f_1), 128);
	}
}

void func_205(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_207(uParam0, (1 << 28));
	}
	else
	{
		func_206(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_207(uParam0, (1 << 30));
	}
	else
	{
		func_206(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_207(uParam0, (1 << 29));
	}
	else
	{
		func_206(uParam0, (1 << 29));
	}
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_208(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_303(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_209(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			strcpy_s(&((uParam0[uParam0->f_97 /*4*/])->f_1), 24, sParam2);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_304(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_305(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_211(int iParam0)
{
	return (Global_40.f_490.f_402[iParam0] & 1) != 0;
}

bool func_212()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

int func_213(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_214(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_215()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_216(int iParam0)
{
	return iParam0;
}

void func_217(int iParam0)
{
	if (!func_306(iParam0))
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

bool func_218(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_219(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

int func_220(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_307(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_222(var uParam0, Vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_223(var uParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_308(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_224(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_225(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_37(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

void func_226(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_309();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_310(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3.0f;
					}
					else
					{
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1.0f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_227(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_228(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_311(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_229(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_172() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_312(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_312(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_258(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_230(var uParam0)
{
	if ((*uParam0 & 8) != 0 || (*uParam0 & 16) != 0)
	{
		func_313(uParam0);
	}
}

bool func_231(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_258(iParam2);
	}
	else
	{
		iVar1 = func_257(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_258(iParam0);
	}
	else
	{
		iVar0 = func_257(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_174(*uParam1, (1 << 23)))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_232(int iParam0, int iParam1)
{
	return func_254(iParam0, iParam1, 1, 1);
}

float func_233(var uParam0)
{
	return uParam0->f_26;
}

bool func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_235()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_236(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_254(iVar0, iParam0, 1, 1) <= 4.0f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_314(iVar0, 0)))
		{
			if (func_315(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_237(var uParam0)
{
	return uParam0->f_17;
}

bool func_238(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_174(*uParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if ((*uParam0 & (1 << 15)) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_239(var uParam0)
{
	return uParam0->f_18;
}

bool func_240(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_314(iVar0, 0)))
		{
			if (func_316(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_241(bool bParam0, bool bParam1, bool bParam2)
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

float func_242(var uParam0)
{
	return uParam0->f_23;
}

int func_243(var uParam0)
{
	return uParam0->f_21;
}

int func_244(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if ((*uParam0 & (1 << 24)) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_245(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_317(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5.0f)
	{
		return true;
	}
	return false;
}

int func_246(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9 /*PCF_KilledByStealth*/, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_318(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_247(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_248(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_319(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if ((*uParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_249(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_319(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if ((*uParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_250(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_319(iParam1))
	{
		return false;
	}
	if ((*uParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_1935630.f_34[iParam3], -1.0f, -1.0f, -1.0f, -1.0f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_251(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_252(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_320(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_253(var uParam0)
{
	return !(*uParam0 & 2) != 0;
}

float func_254(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_255(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_38(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_256(var uParam0)
{
	return uParam0->f_24;
}

int func_257(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_258(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_259(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true, true))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, true, true))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_251(Global_35, &iVar1))
			{
				if (fParam4 < 4.0f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0.0f)
	{
		fVar2 = func_254(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_254(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_260(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_311(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_261(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_261(uParam1, iVar1))
				{
					if (func_38(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_261(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4 /*PCF_HasBounty*/, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

int func_262(int iParam0)
{
	if (func_68())
	{
		return 0;
	}
	return func_321(Global_1347702[58 /*49*/].f_15, 1);
}

int func_263(var uParam0)
{
	return uParam0->f_20;
}

int func_264(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0.0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90.0f))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0)
{
	if (!func_43(iParam0))
	{
		return -1;
	}
	return func_307(iParam0);
}

bool func_266(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_322(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_323(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_267(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_268(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if ((iParam1->f_11 & 1) != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if ((iParam1->f_11 & 2) != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = (iParam1->f_11 & 4) != false;
	bVar1 = (iParam1->f_11 & 8) != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_324((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_269(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_286(uParam0[iVar0 /*17*/]))
		{
			func_197(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_270(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_325(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_127((uParam2[iVar0 /*17*/])->f_6))
		{
			func_197(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_326(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_272(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_273(int* iParam0, int* iParam1)
{
	if (!func_181(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_197(iParam1, 19);
			func_288(iParam0, 23);
			func_327(iParam1, 2);
		}
	}
}

bool func_274(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_328(16))
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
					func_329(16);
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

void func_275(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_325(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_276(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_277(int iParam0)
{
	return func_330(iParam0, 4) | func_330(iParam0, 5);
}

int func_278(int iParam0)
{
	return func_330(iParam0, 7);
}

int func_279(int iParam0)
{
	return func_330(iParam0, 6);
}

void func_280(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_286(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_325(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_281(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_331(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_332(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_293(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_293(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_333(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_282(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_334(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_335(iParam1, 1))
	{
		func_336(iParam1, 1);
		return true;
	}
	return false;
}

void func_283(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_192(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_284(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0.0f)
		{
			return true;
		}
	}
	return false;
}

void func_285(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_286(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_287(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_288(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_289(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_290(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_291(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_292(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_293(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (bParam1)
	{
		func_337(iParam0, 4);
		func_338(iVar0, 1);
		func_339(iVar0, 1);
	}
	else
	{
		func_340(iParam0, 4);
		func_339(iVar0, 0);
	}
}

void func_294(int* iParam0, char* sParam1)
{
	if (func_127(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_292(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_290(iParam0, 1);
}

bool func_295(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_296(int iParam0, bool bParam1)
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

bool func_297(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_298(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_341(iParam0);
	}
	else
	{
		func_342(iParam0, iParam1);
	}
	func_343();
}

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_302(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

void func_303(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_344(iParam1))
		{
			func_345(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_346(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502 /*PCF_0x5B64E56A*/, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_347(iParam0, 0);
			bVar0 = true;
		}
		func_348(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_304(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_349(1);
	}
}

void func_305(int iParam0)
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
			func_304(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_349(1);
	}
}

bool func_306(int iParam0)
{
	return func_350(iParam0, 2);
}

int func_307(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_351(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_308(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_309()
{
	if (func_352())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311 /*PRF_IsAimingWithWeapon*/);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

void func_310(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_311(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_312(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_313(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_206(uParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_207(uParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_314(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_315(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_316(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_316(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_317(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_318(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_319(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_320(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_321(int iParam0, bool bParam1)
{
	switch (func_265(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_322(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_353(), true))
	{
		return true;
	}
	return false;
}

int func_323(int iParam0, bool bParam1)
{
	return func_354(iParam0, Global_1894899.f_2, bParam1);
}

int func_324(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_325(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_127(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_128(&(iParam1->f_6), 0, 1);
	}
	if (!func_127(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_286(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_355(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_127(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_333(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_356(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_357(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_291(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_356(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_293(iParam1->f_6, 0, 1);
				}
				else
				{
					func_293(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_326(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_327(int* iParam0, int iParam1)
{
	if (!func_289(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_197(iParam0, 14);
		}
	}
}

bool func_328(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_329(int iParam0)
{
	Global_22 |= iParam0;
}

int func_330(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_331(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1.0f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_332(int iParam0, bool bParam1)
{
	if (bParam1 && !func_127(iParam0))
	{
		return false;
	}
	return !func_350(iParam0, 4);
}

void func_333(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_127(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	func_356(iParam0, 18, 0, 1);
	func_356(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_334(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_127(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_335(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_127(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_336(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

void func_337(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_338(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_350(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_339(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_340(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

int func_341(int iParam0)
{
	int iVar0;

	iVar0 = func_351(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_358(iVar0);
}

int func_342(int iParam0, int iParam1)
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
			func_359(iVar2);
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

void func_343()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_344(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_345(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_360(iParam0, iParam1))
		{
			if (func_361(iParam0, iParam1))
			{
				if (func_362(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_363(iParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_SET_PED_DIRT_CLEANED(iParam0, 0.0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_346(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_347(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_348(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1.0f);
	}
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		func_207(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_206(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_350(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

int func_351(int iParam0)
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

bool func_352()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

int func_353()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_354(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_364(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_365(iParam0, uVar0, iVar1, bParam2);
}

int func_355(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_350(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945188[iVar0 /*18*/].f_11 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945188[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; // curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_366(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_356(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_357(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_358(int iParam0)
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

int func_359(int iParam0)
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

bool func_360(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_361(int iParam0, int iParam1)
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

bool func_362(int iParam0, int iParam1)
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
	if (!func_360(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_HAS_METAPED_OUTFIT_LOADED(iVar1);
}

void func_363(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_364(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_172() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
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
			*uParam1 = 69;
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
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
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
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
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
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
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
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_365(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_367(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_368(iVar2)))
		{
			if (func_368(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_366(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_338(iParam0, 1);
	func_339(iParam0, 1);
	func_340(iParam0, 128);
}

int func_367(int iParam0)
{
	if (!func_369(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_368(int iParam0)
{
	if (!func_369(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_369(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

