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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	struct<108> /*864*/ sLocal_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	int iLocal_146 = 0;
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#pragma endregion

void __SCRIPT()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	var uVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	char* sVar15;
	float fVar16;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	bLocal_145 = true;
	iLocal_146 = -1;
	iLocal_153 = -1;
	iLocal_154 = -1;
	iLocal_155 = -1;
	iLocal_156 = 61;
	iLocal_157 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(0);
	}
	iVar0 = iScriptParam_0;
	iVar1 = Global_40.f_9.f_11;
	bVar6 = true;
	func_2(&sLocal_32, iVar0);
	func_3(&(sLocal_32.f_39));
	func_4();
	sLocal_32.f_93 = MISC::GET_GAME_TIMER();
	while (true)
	{
		Global_35 = PLAYER::PLAYER_PED_ID();
		bLocal_151 = CAM::_IS_IN_FULL_FIRST_PERSON_MODE();
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		if (!PED::IS_PED_INJURED(Global_35) && !bLocal_152)
		{
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		}
		if (func_5(&bVar8))
		{
			func_1(bVar8);
		}
		func_6(&sLocal_32);
		func_7();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		func_8(0);
		PED::SET_PED_RESET_FLAG(Global_35, 187 /*PRF_DisableDynamicPlayerScenarios*/, true);
		fVar2 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
		fVar3 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
		bVar9 = func_9(fVar2, fVar3);
		if (bLocal_145)
		{
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		}
		if (iLocal_29 < 8)
		{
			MISC::_0xA3A8926951471C82();
		}
		if ((iLocal_29 < 10 || bVar6) || bLocal_151)
		{
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_RESPAWN"));
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		if (iLocal_29 < 10 || bLocal_151)
		{
			func_10();
			PED::SET_PED_RESET_FLAG(Global_35, 129 /*PRF_DisableAmbientPrompts*/, true);
			PED::SET_PED_RESET_FLAG(Global_35, 103 /*PRF_0xF55B2A2A*/, true);
		}
		if (!PED::IS_PED_INJURED(sLocal_32.f_98) && !TASK::IS_PED_IN_WRITHE(sLocal_32.f_98))
		{
			PED::_SET_PED_MOTIVATION(sLocal_32.f_98, 3, 0.0f, 0);
			if (iLocal_29 >= 8)
			{
				if (!sLocal_32.f_38 && !sLocal_32.f_59)
				{
					if (!func_11(sLocal_32.f_98, joaat("SCRIPT_TASK_STAND_STILL")))
					{
						TASK::TASK_STAND_STILL(sLocal_32.f_98, -1);
					}
				}
			}
		}
		EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
		switch (iLocal_29)
		{
			case 0:
				func_12(&sLocal_32, iVar0, iVar1);
				func_13(iVar0, iVar1);
				if (!Global_1310720.f_27)
				{
					STREAMING::LOAD_SCENE_START(sLocal_32.f_39.f_1, func_14(sLocal_32.f_39.f_4), 500.0f, 1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_76)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&(sLocal_32.f_76));
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_84)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&(sLocal_32.f_84));
				}
				if (WATER::_GET_WORLD_WATER_TYPE() == 1)
				{
					if (func_15(sLocal_32.f_30) != 8)
					{
						WATER::_SET_WORLD_WATER_TYPE(0);
					}
				}
				else if (func_15(sLocal_32.f_30) == 8)
				{
					WATER::_SET_WORLD_WATER_TYPE(1);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, sLocal_32.f_30, false, false, true, true);
				func_16();
				if (func_17())
				{
					func_18(&(sLocal_32.f_39));
				}
				if (Global_1310720.f_17 >= 0)
				{
					CLOCK::SET_CLOCK_TIME(Global_1310720.f_17, 0, 0);
					Global_1310720.f_17 = -1;
				}
				CLOCK::PAUSE_CLOCK(false, 0);
				if (!func_19() && !func_20(Global_1935630, (1 << 17)))
				{
					func_21(sLocal_32.f_30, 500.0f, 0);
					func_22(sLocal_32.f_30, 500.0f, 0, 0, 0, 0, 0);
				}
				PED::INSTANTLY_FILL_PED_POPULATION();
				VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				sLocal_32.f_98 = 0;
				sLocal_32.f_99 = 0;
				sLocal_32.f_100 = { 0.0f, 0.0f, 0.0f /*3*/ };
				sLocal_32.f_103 = 0.0f;
				sLocal_32.f_104 = { 0.0f, 0.0f, 0.0f /*3*/ };
				sLocal_32.f_107 = 0.0f;
				func_23(0, &(sLocal_32.f_100), &(sLocal_32.f_103));
				func_23(1, &(sLocal_32.f_104), &(sLocal_32.f_107));
				if (!Global_1935630.f_12)
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
				}
				Global_40.f_9.f_11 = -1;
				iLocal_141 = VOLUME::CREATE_VOLUME_CYLINDER(sLocal_32.f_30, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 20.0f);
				func_21(sLocal_32.f_30, 5.0f, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(sLocal_32.f_30, 5.0f);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_141, (1 << 13), 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_141, (1 << 13), 0, 0, -1, -1, 0);
				iLocal_142 = VOLUME::CREATE_VOLUME_CYLINDER(sLocal_32.f_30, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 20.0f);
				iLocal_143 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iLocal_142, false, 7);
				sLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 1;
				break;
			case 1:
				if (func_24())
				{
					if (!Global_1310720.f_27)
					{
						STREAMING::LOAD_SCENE_STOP();
					}
					sLocal_32.f_30.f_2--;
					PED::_0x704C908E9C405136(Global_35);
					if (func_25())
					{
						func_26(17, joaat("MP_COMPONENT_TYPE_HEADWEAR"), 2, 0, 0);
					}
					iLocal_140 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_140, sLocal_32.f_30, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 20.0f);
					VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_140, sLocal_32.f_34, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 20.0f);
					POPULATION::_0x2161278C6322F740(4576, 0, 0, -1, -1, 0);
					if (!Global_1310720.f_28 && !func_20(Global_1935630, (1 << 17)))
					{
						PED::_0x9851DE7AEC10B4E1(sLocal_32.f_30, 5000.0f, 1, 0);
					}
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_140, 2232831, 0, 0, -1, -1, 0);
					POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_140, 2232831, 0, 0, -1, -1, 0);
					iLocal_153 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(sLocal_32.f_30, 3.5f, 1, iLocal_156, 0);
					iLocal_154 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(sLocal_32.f_34, 3.5f, 1, iLocal_156, 0);
					iLocal_155 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(sLocal_32.f_30, 0.5f, 2, 2, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_76)))
					{
						func_27(Global_35, &(sLocal_32.f_76), 1, 1061360239, 1053609165, 0, 0, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_84)) && !PED::IS_PED_INJURED(sLocal_32.f_98))
					{
						func_27(sLocal_32.f_98, &(sLocal_32.f_84), 1, 1061360239, 1053609165, 0, 0, 1);
					}
					func_28(1, 0, 0);
					if (!func_19())
					{
						if (bLocal_147)
						{
							iLocal_146 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
							AUDIO::PLAY_STREAM_FRONTEND(iLocal_146);
						}
						if (!func_20(Global_1935630, (1 << 17)))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_START");
							bLocal_148 = true;
						}
					}
					GRAPHICS::_0x9D1B0B5066205692();
					if (!func_29())
					{
						iLocal_29 = 3;
					}
					else
					{
						func_30();
						iLocal_29 = 2;
					}
				}
				break;
			case 2:
				if (func_31())
				{
					iLocal_29 = 3;
				}
				break;
			case 3:
				func_32();
				CAM::DO_SCREEN_FADE_OUT(0);
				sLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 4;
				break;
			case 4:
				if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
				else
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					Global_1310720.f_8 = 1;
					func_33((1 << 10));
					if (func_34(&uVar11))
					{
						func_35();
					}
					func_36(1);
					func_37();
					if (func_38(iVar0) == -1)
					{
					}
					else
					{
						func_39();
					}
					func_40(&(Global_1347343.f_11), (1 << 19));
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_30) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_30, true, false))
					{
						AUDIO::_SET_AUDIO_SCENESET("Clouds", "DEATH_FAIL_RESPAWN_SCENES");
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_30, sLocal_32.f_27, 0.0f, 0.0f, 0.0f, 2);
						LAW::_0xE9AC8466ABE484BB(true, 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_30);
						iLocal_29 = 5;
					}
					else
					{
						sLocal_32.f_93 = MISC::GET_GAME_TIMER();
						ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
						if (sLocal_32.f_59)
						{
							func_41();
						}
						iLocal_29 = 6;
					}
				}
				break;
			case 5:
				fVar12 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_30);
				if (fVar12 >= 1.0f)
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					if (!bLocal_149 && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
					{
						func_42();
						bLocal_149 = true;
					}
				}
				if (fVar12 >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_30) * 0.99f))
				{
					if (sLocal_32.f_59)
					{
						func_41();
					}
					sLocal_32.f_93 = MISC::GET_GAME_TIMER();
					if (iLocal_146 != -1)
					{
						AUDIO::STOP_STREAM(iLocal_146);
						iLocal_146 = -1;
					}
					iLocal_29 = 6;
				}
				break;
			case 6:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_30))
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_30, true);
				}
				AUDIO::_SET_AUDIO_SCENESET("Respawn", "DEATH_FAIL_RESPAWN_SCENES");
				func_43(&sLocal_32, 0);
				if (func_45(func_44()))
				{
					MISC::SET_WEATHER_TYPE(joaat("OVERCASTDARK"), true, false, false, 0.0f, true);
				}
				MISC::_SET_WEATHER_TYPE_FROZEN(true);
				GRAPHICS::_0x503941F65DBA24EC(1);
				if (!sLocal_32.f_59)
				{
					func_46();
					func_47();
				}
				if (!PED::IS_PED_INJURED(sLocal_32.f_98))
				{
					PED::SET_PED_RESET_FLAG(sLocal_32.f_98, 105 /*PRF_0xCBD6C7BA*/, true);
				}
				if (sLocal_32.f_53)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 1), "RESPAWN_LOOP", 1000.0f, -4.0f, -1, 1 | sLocal_32.f_67, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
					func_49(&sLocal_32, 1);
				}
				else if (sLocal_32.f_54)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION", 4.0f, -2.0f, -1, sLocal_32.f_68, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
					func_49(&sLocal_32, 0);
					sLocal_32.f_54 = 0;
				}
				else if (sLocal_32.f_55)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION", 1000.0f, -4.0f, -1, 67108880, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
					sLocal_32.f_55 = 0;
				}
				else if (sLocal_32.f_59)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 1), func_50(&sLocal_32, 1), 1000.0f, -4.0f, -1, 2, 0.0f, false, 268435460, false, 0, false);
					TASK::TASK_PLAY_ANIM(sLocal_32.f_98, func_48(&sLocal_32, 1), func_50(&sLocal_32, 0), 1000.0f, -4.0f, -1, 6, 0.0f, false, (1 << 28), false, 0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(sLocal_32.f_98, false, false);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				bLocal_152 = true;
				sLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 7;
				break;
			case 7:
				sLocal_32.f_93 = MISC::GET_GAME_TIMER();
				if (!func_51(0))
				{
					func_18(&(sLocal_32.f_39));
					func_52(&(sLocal_32.f_39));
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_30))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_30);
					ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
					LAW::_0xE9AC8466ABE484BB(false, 0);
				}
				if (bLocal_148)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
					bLocal_148 = false;
				}
				func_53(1);
				AUDIO::PLAY_SOUND_FRONTEND("EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				if (Global_1310720.f_12)
				{
					func_54(110, 0);
					func_54(111, 0);
					func_56(func_55(), 15000, 1000);
				}
				if ((Global_1310720.f_14 && func_57(274) < 3) && !func_58(59))
				{
					func_54(274, 1);
				}
				sLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 8;
				break;
			case 8:
				if (!bLocal_144)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					bLocal_152 = true;
					ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_32.f_98, true);
					if (!PED::IS_PED_INJURED(sLocal_32.f_98))
					{
						ENTITY::SET_ENTITY_COLLISION(sLocal_32.f_98, true, false);
					}
					func_59(&Global_1935630, (1 << 12));
					Global_1310720.f_6 = 0;
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					if (func_60())
					{
						func_61(1, 10);
					}
					bLocal_144 = true;
				}
				if (!PED::IS_PED_INJURED(sLocal_32.f_98))
				{
					PED::SET_PED_RESET_FLAG(sLocal_32.f_98, 105 /*PRF_0xCBD6C7BA*/, true);
				}
				bVar13 = func_51(1);
				if (bVar13)
				{
					func_62();
					bVar6 = false;
					iLocal_29 = 10;
				}
				else if (sLocal_32.f_56)
				{
					bVar6 = false;
					fVar4 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR"));
					fVar5 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD"));
					if ((fVar4 != 0.0f || fVar5 != 0.0f) && !bVar7)
					{
						func_52(&(sLocal_32.f_39));
						bVar7 = true;
					}
					if (bVar9)
					{
						sLocal_32.f_56 = 0;
						sLocal_32.f_53 = 0;
					}
					if (sLocal_32.f_59)
					{
						if (sLocal_32.f_25 < 0 || sLocal_32.f_25 >= sLocal_32.f_52)
						{
							sLocal_32.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, sLocal_32.f_52);
						}
						if (func_63(&sLocal_32))
						{
							if (sLocal_32.f_26 < MISC::GET_GAME_TIMER())
							{
								sLocal_32.f_26 = (45000 + MISC::GET_GAME_TIMER());
								sLocal_32.f_25++;
								if (sLocal_32.f_25 >= sLocal_32.f_52)
								{
									sLocal_32.f_25 = 0;
								}
							}
							else
							{
								sLocal_32.f_25 = 0;
							}
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 1), func_64(&sLocal_32, 1, sLocal_32.f_25), 2.0f, -4.0f, -1, 2, 0.0f, false, 268435460, false, 0, false);
							TASK::TASK_PLAY_ANIM(sLocal_32.f_98, func_48(&sLocal_32, 1), func_64(&sLocal_32, 0, sLocal_32.f_25), 2.0f, -4.0f, -1, 2, 0.0f, false, (1 << 28), false, 0, false);
						}
					}
					else
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_70)))
						{
							sLocal_32.f_70 = { func_65(&sLocal_32) /*3*/ };
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&sLocal_32, 1), "RESPAWN_LOOP", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&sLocal_32, 1), "RESPAWN_LOOP") > 0.99f)
							{
								sLocal_32.f_70 = { func_65(&sLocal_32) /*3*/ };
								TASK::TASK_PLAY_ANIM(Global_35, sLocal_32.f_13, &(sLocal_32.f_70), 4.0f, -4.0f, -1, 2, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sLocal_32.f_13, &(sLocal_32.f_70), 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, sLocal_32.f_13, &(sLocal_32.f_70)) > 0.99f)
							{
								TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 1), "RESPAWN_LOOP", 4.0f, -4.0f, -1, 2, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 1), "RESPAWN_LOOP", 4.0f, -4.0f, -1, 2, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
						}
					}
				}
				else if (sLocal_32.f_53)
				{
					if (500 + sLocal_32.f_93) < MISC::GET_GAME_TIMER()
					{
						sLocal_32.f_53 = 0;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1260366052))
				{
				}
				else
				{
					if (sLocal_32.f_54)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION", 4.0f, -1.5f, -1, sLocal_32.f_68, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
						func_49(&sLocal_32, 0);
					}
					if (sLocal_32.f_55)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION", 4.0f, -4.0f, -1, 67108880, 0.0f, false, 4 | sLocal_32.f_69, false, 0, false);
					}
					if (sLocal_32.f_59)
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						TASK::CLEAR_PED_TASKS(sLocal_32.f_98, true, false);
					}
					func_52(&(sLocal_32.f_39));
					sLocal_32.f_93 = MISC::GET_GAME_TIMER();
					iLocal_29 = 9;
				}
				break;
			case 9:
				fVar16 = 1.0f;
				if (!sLocal_32.f_59)
				{
					if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
					{
						fVar16 = 1.25f;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION", 1))
				{
					sVar15 = "RESPAWN_ACTION";
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&sLocal_32, 1), "RESPAWN_LOOP", 1))
				{
					sVar15 = "RESPAWN_LOOP";
					bVar14 = true;
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&sLocal_32, 1), func_66(&sLocal_32, 1), 1))
				{
					sVar15 = func_66(&sLocal_32, 1);
					bVar14 = true;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
				{
					fVar10 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&sLocal_32, bVar14), sVar15);
					ENTITY::_SET_ENTITY_ANIM_SPEED(Global_35, func_48(&sLocal_32, bVar14), sVar15, fVar16);
					if (4000 + sLocal_32.f_93) < MISC::GET_GAME_TIMER()
					{
						fVar10 = 1.0f;
					}
				}
				else if (2000 + sLocal_32.f_93) < MISC::GET_GAME_TIMER()
				{
					fVar10 = 1.0f;
				}
				if (!sLocal_32.f_95)
				{
					sLocal_32.f_95 = ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1675443122);
					if (sLocal_32.f_96 && sLocal_32.f_95)
					{
						func_67(&(sLocal_32.f_39), 1);
					}
				}
				if (sLocal_32.f_59)
				{
				}
				else if (sLocal_32.f_60 && !sLocal_32.f_95)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.0f);
				}
				if (func_68(bVar9, fVar10))
				{
					if (sLocal_32.f_54)
					{
						TASK::TASK_STAND_STILL(Global_35, 1);
					}
					bLocal_145 = false;
					sLocal_32.f_93 = MISC::GET_GAME_TIMER();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_29 = 10;
				}
				break;
			case 10:
				if (!sLocal_32.f_96)
				{
					func_69(&(sLocal_32.f_39));
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION", 1))
				{
					fVar10 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&sLocal_32, 0), "RESPAWN_ACTION");
				}
				else
				{
					fVar10 = 1.0f;
				}
				if ((MISC::GET_GAME_TIMER() < sLocal_32.f_93 + 750 && sLocal_32.f_54) && !sLocal_32.f_59)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.15f);
				}
				else if ((fVar10 < 1.0f && ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_64[0])) && !bLocal_151)
				{
				}
				else if (bVar9 || !bVar6)
				{
					if (bLocal_150)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
					if (func_70() != 8)
					{
						func_71(45, 0, 1);
					}
					else
					{
						func_71(22, 0, 1);
					}
					func_1(1);
				}
				break;
			default:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	func_72(Global_35, ENTITY::GET_ENTITY_MODEL(Global_35));
	TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
	LAW::_0x2001687F9562FD9D(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 360 /*PCF_0xF8AF9E5C*/, false);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_73();
	if (Global_1310720.f_29 != -1)
	{
		func_74(Global_1310720.f_29);
	}
	func_75();
	Global_1347477.f_6 = 0;
	func_76((1 << 13));
	Global_1894899.f_8 = 0;
	func_67(&(sLocal_32.f_39), 0);
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_STOP();
	}
	if (bLocal_148)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
	}
	AUDIO::_STOP_AUDIO_SCENESET("DEATH_FAIL_RESPAWN_SCENES");
	if (!PED::IS_PED_INJURED(sLocal_32.f_98))
	{
		ENTITY::FREEZE_ENTITY_POSITION(sLocal_32.f_98, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_32.f_98, false);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(sLocal_32.f_98, 0);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	}
	if (iLocal_153 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_153, 1);
	}
	if (iLocal_154 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_154, 1);
	}
	if (iLocal_155 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_155, 1);
	}
	iVar0 = 0;
	while (iVar0 < sLocal_32.f_64)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_64[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(sLocal_32.f_64[iVar0]));
		}
		if (sLocal_32.f_61[iVar0] == joaat("P_CIGARETTE_CS02X"))
		{
			func_77(joaat("CONSUMABLE_CIGARETTE_BOX"), 1);
		}
		iVar0++;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_140))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_140);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_140);
		VOLUME::DELETE_VOLUME(iLocal_140);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_141))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_141);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_141);
		VOLUME::DELETE_VOLUME(iLocal_141);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_143))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_143, false);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_142))
	{
		VOLUME::DELETE_VOLUME(iLocal_142);
	}
	VOLUME::_0xAC355980681A7F89(4);
	if (!func_20(Global_1935630, (1 << 17)))
	{
		func_78(0, -1);
	}
	func_79(1);
	func_59(&Global_1935630, (1 << 17));
	func_80((1 << 12));
	func_79((1 << 9));
	MISC::_SET_WEATHER_TYPE_FROZEN(false);
	GRAPHICS::_0x503941F65DBA24EC(0);
	func_81();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	if (!func_82(15, uParam0))
	{
		return;
	}
	uParam0->f_5 = *uParam0;
	uParam0->f_27 = { func_83(iParam1) /*3*/ };
	uParam0->f_5.f_2 = -566397848;
	uParam0->f_5.f_3 = iParam1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_5.f_1), &(uParam0->f_5)))
	{
	}
	if (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1) == 0)
	{
		uParam0->f_5 = { sVar0 /*5*/ };
		func_2(uParam0, iParam1 + 1);
	}
}

void func_3(var uParam0)
{
	*uParam0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	uParam0->f_7 = 70.0f;
	uParam0->f_9 = -180.0f;
	uParam0->f_10 = 180.0f;
	uParam0->f_11 = -85.0f;
	uParam0->f_12 = 85.0f;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_84(&Global_1935630, (1 << 12));
	func_85();
	if (Global_1310720.f_7)
	{
		func_86(0);
	}
	if (!func_87((1 << 9)))
	{
		func_88();
		func_89(1);
		func_90(-1, 0, 0, 0, 0);
	}
	else
	{
		func_90(-1, 0, 0, 1, 0);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	LAW::CLEAR_PLAYER_PAST_CRIMES(PLAYER::PLAYER_ID());
	func_91();
	func_36(1);
	func_37();
	PERSCHAR::_0xB173599D61FAEB31();
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::_SET_PED_DIRT_CLEANED(Global_35, 0.0f, -1, true, true);
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
		if (ITEMSET::IS_ITEMSET_VALID(iVar0))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::_DELETE_CARRIABLE(&iVar1);
				}
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
		if (!func_20(Global_1935630, (1 << 17)))
		{
			func_92();
		}
	}
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	Global_1347477.f_6 = 1;
	func_93((1 << 13));
	func_94();
	func_95(0, 0);
	func_96(-70.0f);
	func_97(0, 0);
	func_98(iVar4, iVar5);
	func_99(1);
	func_100(0);
}

bool func_5(bool bParam0)
{
	*bParam0 = 0;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	if (func_101() != func_102())
	{
		return true;
	}
	if (func_103(Global_43890))
	{
		return true;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return true;
	}
	if (func_104(128))
	{
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_64)
	{
		if (iVar1 == 0)
		{
			iVar0 = 7966;
		}
		else
		{
			iVar0 = 64847;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_64[iVar1]))
		{
			if (!uParam0->f_97)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_64[iVar1], Global_35))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64[iVar1], Global_35, PED::GET_PED_BONE_INDEX(Global_35, iVar0), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, false, false, false, false, 2, true, false, false);
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("DROPCIGARETTE")))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_64[iVar1], true, true);
					uParam0->f_97 = 1;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("OBJECTEXCHANGE")))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_64[iVar1]));
			}
		}
		iVar1++;
	}
}

void func_7()
{
	if (Global_1310720.f_7 && !bLocal_159)
	{
		if (iLocal_157 < 0)
		{
			iLocal_157 = MISC::GET_GAME_TIMER();
		}
		if (func_105(Global_1935630.f_3))
		{
			if (iLocal_157 + 5000 < MISC::GET_GAME_TIMER())
			{
				func_32();
				AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT_OFF_MISSION", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				bLocal_158 = true;
			}
			else if (!CAM::IS_SCREEN_FADED_IN() && UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(Global_1935630.f_3) >= 3)
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (bLocal_158)
		{
			if (!UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1) || iLocal_157 + 5000 + 650 < MISC::GET_GAME_TIMER())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				bLocal_159 = true;
			}
		}
	}
	else
	{
		bLocal_159 = true;
	}
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		func_93(4);
	}
	func_93(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

int func_9(float fParam0, float fParam1)
{
	if ((((((((((((((((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35)) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || MISC::ABSF(fParam0) > 0.2f) || MISC::ABSF(fParam1) > 0.2f) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK2"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_ATTACK")) > 0.0f) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_JOURNAL")))
	{
		return 1;
	}
	if (sLocal_32.f_59 && PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		bLocal_150 = true;
		return 1;
	}
	if (!PED::IS_PED_INJURED(sLocal_32.f_98))
	{
		if (PED::_0xB8E2D655E1D5BD39(sLocal_32.f_98))
		{
			return 1;
		}
	}
	return 0;
}

void func_10()
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
}

bool func_11(int iParam0, int iParam1)
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

int func_12(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	struct<5> /*40*/ sVar13;
	int iVar18;

	uParam0->f_5.f_2 = 0;
	iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1);
	if (iVar0 < 0 || iParam2 >= iVar0)
	{
		return 0;
	}
	uParam0->f_5.f_3 = iParam2;
	uParam0->f_5.f_2 = 599260570;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&sVar1, &(uParam0->f_5));
	uParam0->f_14 = func_106(sVar1);
	uParam0->f_5.f_3 = iParam2;
	uParam0->f_5.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar10, &(uParam0->f_5));
	if (func_107(iVar10))
	{
		iVar10 = joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A");
	}
	uParam0->f_11 = func_108(iVar10);
	uParam0->f_15 = func_109(iVar10);
	uParam0->f_2 = -1222062814;
	uParam0->f_3 = iVar10;
	sVar13 = { *uParam0 /*5*/ };
	if (Global_40.f_9.f_12)
	{
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar13.f_1), &sVar13))
		{
			iVar18 = iVar10;
			sVar13.f_2 = -2000223992;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar10, &sVar13);
			if (iVar10 != 0)
			{
				uParam0->f_11 = func_108(iVar10);
				uParam0->f_15 = func_109(iVar10);
				uParam0->f_2 = -1222062814;
				uParam0->f_3 = iVar10;
			}
			else
			{
				iVar10 = iVar18;
			}
		}
	}
	iVar9 = iVar10;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0))
	{
		uParam0->f_5.f_2 = -1726340653;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar10, &(uParam0->f_5)))
		{
			uParam0->f_12 = func_108(iVar10);
		}
		else
		{
			uParam0->f_12 = uParam0->f_11;
		}
		uParam0->f_2 = 824674748;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_53), uParam0);
		uParam0->f_2 = -1565562604;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_54), uParam0);
		uParam0->f_2 = -233815074;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_55), uParam0);
		uParam0->f_2 = -477049661;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar11, uParam0);
		if (bVar11)
		{
			uParam0->f_67 |= 67108880;
		}
		uParam0->f_2 = -899679477;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar12, uParam0);
		if (bVar12)
		{
			uParam0->f_67 |= 49152;
			uParam0->f_68 |= 49152;
		}
		uParam0->f_2 = -62070419;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar12, uParam0);
		if (bVar12)
		{
			uParam0->f_69 |= 1;
		}
		uParam0->f_2 = -1625090004;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_57), uParam0);
		uParam0->f_2 = 76128139;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_58), uParam0);
		uParam0->f_2 = -1148228754;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_59), uParam0);
		uParam0->f_2 = 2055089342;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_60), uParam0);
		uParam0->f_2 = 660059998;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_56), uParam0);
		if (!uParam0->f_59)
		{
			if (uParam0->f_56)
			{
				uParam0->f_2 = 1514205951;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar10, uParam0);
				uParam0->f_13 = func_108(iVar10);
				uParam0->f_2 = 1597176581;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam0->f_52), uParam0);
			}
		}
		else
		{
			func_110(uParam0, iVar9);
		}
		func_111(uParam0, iParam1, MISC::GET_HASH_KEY(uParam0->f_14));
		uParam0->f_2 = -1854764018;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar10, uParam0);
		if (iVar10 != 0)
		{
			uParam0->f_61[0] = iVar10;
		}
		uParam0->f_2 = -391550498;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar10, uParam0))
		{
			uParam0->f_61[1] = iVar10;
		}
		if (uParam0->f_56)
		{
		}
	}
	return 1;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar3 = Global_40.f_9.f_16;
	while (iVar3 > iVar0 && !bVar4)
	{
		if (Global_40.f_9.f_16[iVar0] < 0)
		{
			iVar1 = iVar0;
			bVar4 = true;
		}
		iVar0++;
	}
	iVar5 = BUILTIN::SHIFT_LEFT(iParam1, 11) | iParam0;
	Global_40.f_9.f_16[iVar1] = iVar5;
	iVar2 = iVar1 + 1;
	iVar2 = func_112(iVar2 >= iVar3, 0, iVar2);
	Global_40.f_9.f_16[iVar2] = -1;
}

Vector3 func_14(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = BUILTIN::SIN(vParam0.z);
	fVar1 = BUILTIN::COS(vParam0.z);
	fVar2 = BUILTIN::SIN(vParam0.x);
	fVar3 = BUILTIN::COS(vParam0.x);
	return func_113((-fVar3 * fVar0), (fVar3 * fVar1), fVar2);
}

int func_15(Vector3 vParam0)
{
	return func_114(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_16()
{
	func_115();
}

bool func_17()
{
	return Global_1310720.f_9;
}

int func_18(var uParam0)
{
	if ((!func_116(uParam0->f_1) && !func_116(uParam0->f_4)) && uParam0->f_7 != 0.0f)
	{
		CAM::SET_CAM_COORD(*uParam0, uParam0->f_1);
		CAM::SET_CAM_ROT(*uParam0, uParam0->f_4, 2);
		CAM::SET_CAM_FOV(*uParam0, uParam0->f_7);
		CAM::SET_CAM_ACTIVE(*uParam0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

bool func_19()
{
	return Global_1310720.f_10;
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_21(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_22(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= (1 << 17);
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_23(int iParam0, var uParam1, var uParam2)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	*uParam1 = { Global_40.f_1095.f_1[iParam0 /*436*/].f_427 /*3*/ };
	*uParam2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_430;
	return 1;
}

bool func_24()
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar3 = false;
	if (!func_118(&sLocal_32))
	{
		bVar3 = true;
	}
	bVar5 = true;
	iVar4 = 0;
	while (iVar4 < sLocal_32.f_64)
	{
		if (sLocal_32.f_61[iVar4] != 0)
		{
			STREAMING::REQUEST_MODEL(sLocal_32.f_61[iVar4], false);
			if (STREAMING::HAS_MODEL_LOADED(sLocal_32.f_61[iVar4]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_64[iVar4]))
				{
					sLocal_32.f_64[iVar4] = OBJECT::CREATE_OBJECT(sLocal_32.f_61[iVar4], Global_36, true, true, false, false, true);
				}
			}
			else
			{
				bVar5 = false;
			}
		}
		iVar4++;
	}
	if (!bVar5)
	{
		bVar3 = true;
	}
	if (!bVar3)
	{
		if (sLocal_32.f_93 + 30000 < MISC::GET_GAME_TIMER())
		{
			return true;
		}
	}
	if (!func_119())
	{
		bVar3 = true;
	}
	if ((!func_17() && !bLocal_31) && !func_20(Global_1935630, (1 << 17)))
	{
		bLocal_147 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_30))
		{
			sLocal_32.f_16 = func_120(CLOCK::GET_CLOCK_HOURS());
			iLocal_30 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_32.f_16, 0, 0, false, true);
			if (iLocal_30 == -1)
			{
				bLocal_31 = true;
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_30);
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_30, true, false))
		{
			bVar3 = true;
		}
		if (!bLocal_147)
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		return false;
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE() && !Global_1310720.f_27)
	{
		if (!STREAMING::IS_LOAD_SCENE_LOADED())
		{
			return false;
		}
	}
	if (!PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED() || !VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED())
	{
		return false;
	}
	if (!PED::IS_PED_READY_TO_RENDER(Global_35))
	{
		return false;
	}
	vVar0 = { sLocal_32.f_30 /*3*/ };
	if (!func_121(&vVar0, 50, 10, 0))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_76)))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(sLocal_32.f_76)))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_32.f_84)))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(sLocal_32.f_84)))
		{
			return false;
		}
	}
	if (!bLocal_159)
	{
		return false;
	}
	if (!func_122())
	{
		return false;
	}
	if (func_29())
	{
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
	}
	if (!func_123(256))
	{
		return true;
	}
	return true;
}

bool func_25()
{
	var uVar0;

	if (func_124())
	{
		if (!func_58(4))
		{
			return true;
		}
	}
	return (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HATS")) || func_125(joaat("CI_CATEGORY_WARDROBE_HAT"), &uVar0));
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_126((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_127(sVar0);
}

int func_27(bool bParam0, char* sParam1, bool bParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_CREATE_FOOTPATH_TRAIL(bParam0, sParam1, bParam2, fParam3, fParam4, iParam5, 0, 0, 0, iParam6, 0, bParam7))
	{
		return 1;
	}
	return 0;
}

int func_28(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_128(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_29()
{
	if (!MISC::IS_ORBIS_VERSION())
	{
		return false;
	}
	if (!func_20(Global_1935630, (1 << 17)))
	{
		return false;
	}
	if (!NETWORK::NETWORK_SHOULD_SHOW_PROMOTION_DLG())
	{
		return false;
	}
	return true;
}

void func_30()
{
	struct<8> /*64*/ sVar0;

	func_32();
	CAM::DO_SCREEN_FADE_OUT(0);
	sVar0.f_2 = 4;
	sVar0.f_0 = "";
	sVar0.f_1 = "";
	sVar0.f_3 = 2117985430;
	sVar0.f_7 = 1539841963;
	Global_1935630.f_3 = func_129(&sVar0, "PSPLUS_OFFER_TITLE", "PSPLUS_OFFER", 0, 1);
	NETWORK::_0xFC6FCF4C03F1BBF6();
}

bool func_31()
{
	Vector3 vVar0;

	if (!MISC::IS_ORBIS_VERSION())
	{
		return true;
	}
	if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && func_130(Global_1935630.f_3))
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
	if (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("STATUS_ALERT_FEED")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("STATUS_ALERT_FEED"), &vVar0))
		{
			switch (vVar0.x)
			{
				case joaat("ITEM_SELECTED"):
					if (vVar0.y == Global_1935630.f_3)
					{
						switch (vVar0.z)
						{
							case joaat("UI_STICKY_FEED_BUTTON_TYPE_ACCEPT"):
								NETWORK::NETWORK_SHOW_ACCOUNT_UPGRADE_UI();
								return true;
							case joaat("UI_STICKY_FEED_BUTTON_TYPE_BACK"):
								return true;
						}
					}
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("STATUS_ALERT_FEED"));
	}
	return false;
}

void func_32()
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}
}

void func_33(int iParam0)
{
	Global_1572864.f_3 |= iParam0;
}

bool func_34(var uParam0)
{
	if (joaat("MASK_UP") == func_131(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_132(uParam0))
		{
			return true;
		}
	}
	else if (func_125(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		if (func_132(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_35()
{
	bool bVar0;

	if (!func_133())
	{
		return 0;
	}
	if (!func_132(&bVar0))
	{
		return 0;
	}
	if (!func_134(bVar0))
	{
		return 0;
	}
	return func_135(bVar0, 0);
}

void func_36(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						iVar0 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/].f_2;
						if (func_136(iVar0))
						{
							if (func_137(iVar0))
							{
								func_138(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_139(Global_40.f_450[iVar0]))
		{
			if ((Global_1347702[Global_40.f_450[iVar0] /*49*/].f_14 & 2) != 0)
			{
				func_140(Global_40.f_450[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

int func_38(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (!func_82(15, &sVar0))
	{
		return -1;
	}
	sVar0.f_3 = iParam0;
	sVar0.f_2 = -125049320;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0))
	{
		iVar6 = func_141(iVar5);
		return iVar6;
	}
	return -1;
}

void func_39()
{
	struct<16> /*128*/ sVar0;

	sVar0.f_15 = joaat("DUTCH_GANG");
	sVar0.f_0 = PLAYER::PLAYER_PED_ID();
	sVar0.f_12 = 46;
	sVar0.f_4 = joaat("DUTCH_GANG");
	sVar0.f_8 = 0;
	MISC::_CREATE_AI_MEMORY(&sVar0, 17);
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_41()
{
	func_46();
	func_47();
	func_142(Global_35, sLocal_32.f_98, 0, -1, 1);
}

void func_42()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = func_143();
	iVar1 = func_144(iVar0);
	fVar2 = func_145(iVar0 < 0, 0.0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
	fVar3 = func_145(iVar0 > 0, 0.0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
	GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnSkyWithHonor", 1, fVar2);
	GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnSkyWithHonor", 3, fVar3);
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_58)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_57)
	{
		iVar0 = 1;
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 0, true);
	}
	else
	{
		iVar1 = func_146(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 1);
		if (!PED::IS_PED_INJURED(uParam0->f_98))
		{
			if (uParam0->f_59)
			{
				func_147(0);
			}
			else if (func_148(iVar1) == 4 && func_149() == iVar1)
			{
				func_147(0);
			}
			else if (func_148(iVar1) == 1)
			{
				iVar2 = Global_1888801[iVar1 /*35*/].f_4;
				if (func_150(Global_35, iVar2, 0, 0))
				{
					func_147(0);
				}
			}
		}
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		return;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_98))
	{
		iVar3 = func_151(Global_35, 0, 7, 0);
		if (func_152(iVar3))
		{
			WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar3);
		}
	}
	WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, true);
	iVar3 = func_151(Global_35, 0, 0, 0);
	if ((!func_152(iVar3) || !WEAPON::_IS_WEAPON_TWO_HANDED(iVar3)) || WEAPON::IS_WEAPON_BOW(iVar3))
	{
		iVar3 = func_151(Global_35, 0, 1, 0);
	}
	if ((!func_152(iVar3) || !WEAPON::_IS_WEAPON_TWO_HANDED(iVar3)) || WEAPON::IS_WEAPON_BOW(iVar3))
	{
		iVar3 = func_151(Global_35, 0, 9, 0);
	}
	if ((!func_152(iVar3) || !WEAPON::_IS_WEAPON_TWO_HANDED(iVar3)) || WEAPON::IS_WEAPON_BOW(iVar3))
	{
		iVar3 = func_151(Global_35, 0, 10, 0);
	}
	if (func_152(iVar3))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar3))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, true, iVar0, false, false);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iVar0, false, false);
		}
	}
}

int func_44()
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

bool func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((!PED::IS_PED_INJURED(sLocal_32.f_98) && !TASK::IS_PED_IN_WRITHE(sLocal_32.f_98)) && !func_116(sLocal_32.f_34))
	{
		func_21(sLocal_32.f_34, 10.0f, 0);
		ENTITY::SET_ENTITY_COORDS(sLocal_32.f_98, sLocal_32.f_34, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(sLocal_32.f_98, sLocal_32.f_37);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(sLocal_32.f_98, true);
		PED::_SET_PED_MOTIVATION(sLocal_32.f_98, 3, 0.0f, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_32.f_98, true);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(sLocal_32.f_98, 2);
		iVar0 = func_153(sLocal_32.f_98);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (func_154(iVar0, iVar1) < 15)
			{
				func_155(iVar0, iVar1, 15);
			}
			iVar1++;
		}
		if (!sLocal_32.f_59)
		{
			if (sLocal_32.f_38)
			{
				if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(sLocal_32.f_34, joaat("PROP_HITCHINGPOST"), 1.0f, false))
				{
					iVar2 = TASK::FIND_SCENARIO_OF_TYPE_HASH(sLocal_32.f_34, joaat("PROP_HITCHINGPOST"), 1.0f, 0, false);
					TASK::TASK_USE_SCENARIO_POINT(sLocal_32.f_98, iVar2, 0, 0, true, true, 0, false, -1.0f, false);
				}
			}
		}
	}
}

void func_47()
{
	var uVar0;

	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(sLocal_32.f_30 + Vector(1.5f, 0.0f, 0.0f), &uVar0, false))
	{
		sLocal_32.f_30.f_2 = uVar0;
	}
	ENTITY::SET_ENTITY_COORDS(Global_35, sLocal_32.f_30, false, true, true, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, sLocal_32.f_33);
}

var func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return uParam0->f_12;
	}
	return uParam0->f_11;
}

void func_49(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_64)
	{
		sVar0 = "";
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_64[iVar1]))
		{
			if ((uParam0->f_61[iVar1] == joaat("P_JOURNAL01X") || uParam0->f_61[iVar1] == joaat("S_LEV_JOURNAL_BOOK")) || uParam0->f_61[iVar1] == joaat("S_PLAYERJOURNAL01X"))
			{
				if (bParam1)
				{
					sVar0 = "respawn_loop_journal";
				}
				else
				{
					sVar0 = "respawn_action_journal";
				}
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_64[iVar1], sVar0, func_48(uParam0, bParam1), 1000.0f, bParam1, false, false, 0.0f, 0);
		}
		iVar1++;
	}
}

char* func_50(var uParam0, bool bParam1)
{
	char cVar0[64];

	if (bParam1)
	{
		strcpy_s(&cVar0, 64, "arthur_");
	}
	else
	{
		strcpy_s(&cVar0, 64, "horse_");
	}
	strcat_s(&cVar0, 64, uParam0->f_17);
	return func_156(cVar0);
}

bool func_51(int iParam0)
{
	if (!bLocal_151)
	{
		return false;
	}
	if (Global_1310720.f_25)
	{
		return true;
	}
	if (Global_1310720.f_26 & iParam0)
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_NEXT_CAMERA")))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			return true;
		}
	}
	return false;
}

int func_52(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::_FREEZE_GAMEPLAY_CAM_THIS_FRAME();
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

void func_53(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_157(0, 0, 1) || bParam0)
	{
		iVar0 = func_143();
		iVar1 = func_144(iVar0);
		fVar2 = (1.0f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_145(iVar0 < 0, 0.0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_145(iVar0 > 0, 0.0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

void func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_158(iParam0, &iVar0, &iVar1);
	if (!func_159(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_160(iVar0, iVar1);
}

float func_55()
{
	if (Global_1310720.f_13 && Global_1310720.f_15 < 2)
	{
		Global_1310720.f_15 = 2;
	}
	switch (Global_1310720.f_15)
	{
		case 1:
			return 0.05f;
		case 2:
			return 0.07f;
		case 3:
			return 0.1f;
		case 4:
			return 0.13f;
		case 5:
			return 0.15f;
		default:
			break;
	}
	return 0.2f;
}

void func_56(float fParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = MONEY::_MONEY_GET_CASH_BALANCE();
	if (iVar0 < iParam2)
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar0) * fParam0));
	if (iVar1 > iParam1)
	{
		iVar1 = iParam1;
	}
	if (iVar1 > 0)
	{
		func_161(iVar1);
		func_162(iVar1, 0, 0);
	}
}

int func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_158(iParam0, &iVar0, &iVar1);
	if (!func_163(iParam0, (1 << 16)) && !func_163(iParam0, (1 << 15)))
	{
		if (func_164(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar2 /*3*/].f_2 == iParam0)
		{
			return Global_40.f_7756[iVar2 /*3*/].f_1;
		}
		iVar2++;
	}
	return 0;
}

bool func_58(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_165(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_60()
{
	return (Global_1894899 & 2) != 0;
}

void func_61(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return;
	}
	uVar0 = func_166();
	func_167(&uVar0, 0, iParam1, 0, 0, 0, 0, 0);
	Global_1327590.f_19622[iParam0 /*14*/].f_9 = uVar0;
}

void func_62()
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(sLocal_32.f_98, false, true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	sLocal_32.f_93 = 0;
}

bool func_63(var uParam0)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, 1), func_64(uParam0, 1, uParam0->f_25), 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(uParam0, 1), func_64(uParam0, 1, uParam0->f_25)) > 0.95f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1120007597))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, 1), func_50(uParam0, 1), 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(uParam0, 1), func_50(uParam0, 1)) > 0.95f)
		{
			return true;
		}
	}
	return false;
}

char* func_64(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];

	if (bParam1)
	{
		strcpy_s(&cVar0, 64, "arthur_");
	}
	else
	{
		strcpy_s(&cVar0, 64, "horse_");
	}
	strcat_s(&cVar0, 64, uParam0->f_19[iParam2]);
	return func_156(cVar0);
}

Vector3 func_65(var uParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, "RESPAWN_IDLE_");
	StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, uParam0->f_52 + 1), 24);
	return cVar0;
}

char* func_66(var uParam0, bool bParam1)
{
	char cVar0[64];

	if (bParam1)
	{
		strcpy_s(&cVar0, 64, "arthur_");
	}
	else
	{
		strcpy_s(&cVar0, 64, "horse_");
	}
	strcat_s(&cVar0, 64, uParam0->f_18);
	return func_156(cVar0);
}

void func_67(var uParam0, bool bParam1)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	CAM::_0x3C486E334520579D();
	if (bParam1)
	{
		CAM::_0x06557F6D96C86881();
	}
}

bool func_68(bool bParam0, float fParam1)
{
	if (bLocal_151)
	{
		if (sLocal_32.f_54)
		{
			if (!sLocal_32.f_95 && fParam1 < 0.985f)
			{
				return false;
			}
		}
		return bParam0;
	}
	if (fParam1 > 0.985f || sLocal_32.f_59)
	{
		return true;
	}
	return (sLocal_32.f_95 && bParam0);
}

void func_69(var uParam0)
{
	CAM::_0x0961B089947BA6D0(uParam0->f_8);
	CAM::SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(uParam0->f_9, uParam0->f_10);
	CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(uParam0->f_11, uParam0->f_12);
}

int func_70()
{
	return Global_1897952.f_41;
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_168(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 /= 2;
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_72(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_169(iParam1);
	PED::_0xB285AD0EC870B2DF(uParam0, iVar0);
	func_170();
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_146(Global_36, 1);
	iVar1 = func_70();
	iVar2 = func_171();
	if (func_172(iVar0) && 32 != iVar0)
	{
		iVar3 = Global_1888801[iVar0 /*35*/].f_4;
		if (VOLUME::DOES_VOLUME_EXIST(iVar3) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iVar3, false, 0))
		{
			func_174(iVar0, iVar1, iVar2, func_173(0), -1, 1);
		}
		else
		{
			func_174(-1, iVar1, iVar2, func_173(0), -1, 1);
		}
	}
	else
	{
		func_174(iVar0, iVar1, iVar2, func_173(0), -1, 1);
	}
}

void func_74(int iParam0)
{
	Global_40.f_9422[iParam0 /*7*/] = func_175();
}

void func_75()
{
	func_59(&Global_1935630, (1 << 12));
	func_176();
	func_97(0, 0);
	func_177();
	func_178(0.0f, 0.0f, 0.0f);
	Global_40.f_9.f_15 = -1;
	func_179(0);
	Global_1310720.f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0.0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_180(0);
	func_181(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_182(1);
	func_183(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

void func_76(int iParam0)
{
	Global_1900383.f_316 -= (Global_1900383.f_316 & iParam0);
}

void func_77(bool bParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<6> /*48*/ sVar22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;

	sVar0.f_1 = 20;
	if ((func_184(bParam0, joaat("CI_TAG_ITEM_HERB")) || func_184(bParam0, joaat("CI_TAG_ITEM_MUSHROOM"))) || func_184(bParam0, joaat("CI_TAG_ITEM_BERRY")))
	{
		bVar37 = true;
	}
	if (func_185(bParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam0, &sVar0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < sVar0.f_0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar0.f_1[iVar29], &sVar22))
			{
			}
			else if (joaat("EFFECT_HEALTH") == sVar22.f_1)
			{
				fVar30 = func_186(0, sVar22.f_2);
				func_97(sVar22.f_2, 1);
				func_187(0, 7000);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE") == sVar22.f_1)
			{
				fVar31 = func_186(2, sVar22.f_2);
				func_188(sVar22.f_2);
				func_187(2, 7000);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA") == sVar22.f_1)
			{
				fVar32 = func_186(1, sVar22.f_2);
				func_189(sVar22.f_2);
				func_187(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == sVar22.f_1)
			{
				fVar33 = func_190(sVar22.f_2, sVar22.f_5);
				if (func_191(&uVar38, &uVar39, fVar33))
				{
					func_192(fVar33, 1, bVar37, bParam1);
					func_187(0, 7000);
				}
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == sVar22.f_1)
			{
				fVar34 = func_190(sVar22.f_2, sVar22.f_5);
				if (func_191(&uVar38, &uVar39, fVar34))
				{
					func_193(fVar34, 1, bVar37, bParam1);
					func_187(2, 7000);
				}
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == sVar22.f_1)
			{
				fVar35 = func_190(sVar22.f_2, sVar22.f_5);
				if (func_191(&uVar38, &uVar39, fVar35))
				{
					func_194(fVar35, 1, bVar37, bParam1);
					func_187(1, 7000);
				}
			}
			else if (joaat("EFFECT_HEALTH_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_196(19, fVar36);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_196(20, fVar36);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_196(18, fVar36);
			}
			else if (joaat("EFFECT_HEALTH_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_196(0, fVar36);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_196(2, fVar36);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_196(1, fVar36);
			}
			else if (joaat("EFFECT_CALORIES") == sVar22.f_1)
			{
				func_197(BUILTIN::TO_FLOAT(sVar22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0.0f || fVar30 > 0.0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_184(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
		{
			func_199(func_198(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_184(bParam0, joaat("CI_TAG_ITEM_PROVISION")))
		{
			func_199(func_198(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			func_199(func_198(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2.0f)), BUILTIN::ROUND((fVar35 / 2.0f)), BUILTIN::ROUND((fVar34 / 2.0f)));
	}
}

void func_78(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_200(&Global_0, 8);
	}
	if (!func_124() || func_201() != -1)
	{
		return;
	}
	func_200(&Global_0, 1);
}

void func_79(int iParam0)
{
	Global_1310750.f_16035 -= (Global_1310750.f_16035 & iParam0);
}

void func_80(int iParam0)
{
	Global_1572864.f_3 -= (Global_1572864.f_3 & iParam0);
}

void func_81()
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_ARROW_CONFUSION"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_ARROW_DISORIENT"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_ARROW_DRAIN"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_ARROW_TRAIL"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_ARROW_WOUND"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_THROWING_KNIVES_CONFUSE"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_THROWING_KNIVES_DISORIENT"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_THROWING_KNIVES_DRAIN"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_THROWING_KNIVES_TRAIL"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("AMMO_THROWING_KNIVES_WOUND"));
}

bool func_82(int iParam0, var uParam1)
{
	if (!func_202(iParam0))
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

Vector3 func_83(int iParam0)
{
	struct<4> /*32*/ sVar0;
	Vector3 vVar5;

	if (!func_82(15, &sVar0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	sVar0.f_3 = iParam0;
	sVar0.f_2 = -786414325;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vVar5, &sVar0);
	sVar0.f_2 = -1756016266;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar5.f_1), &sVar0);
	sVar0.f_2 = -1264284652;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar5.f_2), &sVar0);
	return vVar5;
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_85()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 955)
	{
		if (func_203(iVar0, (1 << 21)))
		{
			func_204(iVar0);
		}
		iVar0++;
	}
}

void func_86(bool bParam0)
{
	if (func_201() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_54(89, 1);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_54(90, 1);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	func_205(1, bParam0, 1);
	func_206();
	Global_40.f_11095.f_43 = bParam0;
}

bool func_87(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

void func_88()
{
	if (!func_207(Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
		}
	}
	func_208(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_89(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_90(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_209() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_207(iVar1) && !func_210(iVar1, iParam2)) && (!bParam3 || !func_211(iVar1))) && (!bParam4 || !func_212(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_213(iVar0);
			}
		}
		iVar0++;
	}
}

void func_91()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_214(iVar0))
		{
			func_215(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_92()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 2);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 20);
}

void func_93(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

void func_94()
{
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(0), func_218(BUILTIN::ROUND(func_217(0))));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(2), func_218(BUILTIN::ROUND(func_217(2))));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(1), func_218(BUILTIN::ROUND(func_217(1))));
}

void func_95(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_152(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), joaat("ADD_REASON_DEFAULT"));
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_188(1);
	}
}

void func_96(float fParam0)
{
	if (func_217(1) < fParam0)
	{
		func_219(1, fParam0, 0);
	}
	if (func_217(2) < fParam0)
	{
		func_219(2, fParam0, 0);
	}
	if (func_217(0) < fParam0)
	{
		func_219(0, fParam0, 0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_98(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_99(int iParam0)
{
	func_220(1);
}

void func_100(int iParam0)
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
			func_221(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_222(1);
	}
}

int func_101()
{
	return Global_1572864;
}

int func_102()
{
	return Global_1572864.f_1;
}

bool func_103(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_104(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_105(int iParam0)
{
	return iParam0 != 0;
}

char* func_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_107(int iParam0)
{
	return false;
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED"):
			return "SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED";
		case joaat("SADDLE_LEAN_FWD_PETWHISPERS_LT"):
			return "SADDLE_LEAN_FWD_PETWHISPERS_LT";
		case joaat("SADDLE_LEAN_FWD_PETWHISPERS_RT"):
			return "SADDLE_LEAN_FWD_PETWHISPERS_RT";
		case joaat("SADDLE_LEAN_FWD_FLYSWAT1"):
			return "SADDLE_LEAN_FWD_FLYSWAT1";
		case joaat("SADDLE_LEAN_FWD_SPITWIPE_LT"):
			return "SADDLE_LEAN_FWD_SPITWIPE_LT";
		case joaat("SADDLE_LEAN_FWD_LOOKING_IDLE"):
			return "SADDLE_LEAN_FWD_LOOKING_IDLE";
		case joaat("SADDLE_LEAN_FWD_EXIT_ADJUST"):
			return "SADDLE_LEAN_FWD_EXIT_ADJUST";
		case joaat("SADDLE_LEAN_FWD_EXIT_LEG_STRETCH"):
			return "SADDLE_LEAN_FWD_EXIT_LEG_STRETCH";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES";
		default:
			break;
	}
	return "";
}

char* func_109(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A"):
			return "UNARMED@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B"):
			return "UNARMED@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A"):
			return "LHAND@CRACK_NECK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B"):
			return "LHAND@CRACK_NECK@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A"):
			return "UNARMED@CLOSE_JOURNAL@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B"):
			return "UNARMED@CLOSE_JOURNAL@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A"):
			return "UNARMED@CROUCH_STREAM_WASH@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B"):
			return "UNARMED@CROUCH_STREAM_WASH@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C"):
			return "UNARMED@CROUCH_STREAM_WASH@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A"):
			return "LHAND@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A"):
			return "UNARMED@CROUCH_STREAM_DRINK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A"):
			return "UNARMED@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A"):
			return "LHAND@STAND_LEAN_BACK_FLASK@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT"):
			return "UNARMED@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT"):
			return "UNARMED@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT"):
			return "UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A"):
			return "UNARMED@SITTING_JOURNAL_WRITING@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B"):
			return "UNARMED@SITTING_JOURNAL_WRITING@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C"):
			return "UNARMED@SITTING_JOURNAL_WRITING@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING"):
			return "LHAND@SITTING_JOURNAL_WRITING";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT"):
			return "LHAND@SITTING_JOURNAL_WRITING@FRONT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT"):
			return "LHAND@SITTING_JOURNAL_WRITING@LEFT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT"):
			return "LHAND@SITTING_JOURNAL_WRITING@RIGHT";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A"):
			return "LHAND@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A"):
			return "UNARMED@STAND_BOOT_CLEAN@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A"):
			return "UNARMED@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B"):
			return "UNARMED@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C"):
			return "UNARMED@STAND_ADJUST_BELT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A"):
			return "LHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B"):
			return "LHAND@STAND_ADJUST_BELT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A"):
			return "RHAND@STAND_ADJUST_BELT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A"):
			return "UNARMED@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A"):
			return "LHAND@CROUCH_SMOKE_END@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B"):
			return "LHAND@CROUCH_SMOKE_END@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A"):
			return "UNARMED@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B"):
			return "UNARMED@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C"):
			return "UNARMED@SWAT_FLIES@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A"):
			return "LHAND@SWAT_FLIES@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B"):
			return "LHAND@SWAT_FLIES@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A"):
			return "LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A"):
			return "RHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B"):
			return "RHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A"):
			return "LHAND@WIPE_BROW@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B"):
			return "LHAND@WIPE_BROW@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A"):
			return "UNARMED@SPIT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B"):
			return "UNARMED@SPIT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C"):
			return "UNARMED@SPIT@C";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A"):
			return "LHAND@SPIT@A";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B"):
			return "LHAND@SPIT@B";
		case joaat("SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C"):
			return "LHAND@SPIT@C";
		case joaat("SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED"):
			return "HORSE@MOUNTED_UNARMED";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A"):
			return "UNARMED@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A"):
			return "LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A"):
			return "LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A"):
			return "UNARMED_HAT@SIT_WAKE_UP@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A"):
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A"):
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A"):
			return "UNARMED@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A"):
			return "LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES"):
			return "2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES"):
			return "UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES"):
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES"):
			return "UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
		case joaat("SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES"):
			return "LHAND@SIT_LEAN_FORWARDS@A@IDLES";
		default:
			break;
	}
	return "";
}

void func_110(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	struct<5> /*40*/ sVar6;
	int iVar11;

	func_82(15, &sVar1);
	sVar1.f_2 = -1374679209;
	sVar1.f_3 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar1.f_1), &sVar1))
	{
		sVar1.f_2 = 805008619;
		sVar1.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar1.f_0, sVar1.f_1));
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, &sVar1);
		uParam0->f_17 = func_108(iVar0);
	}
	sVar1 = { sVar6 /*5*/ };
	func_82(15, &sVar1);
	sVar1.f_2 = 669343399;
	sVar1.f_3 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar1.f_1), &sVar1))
	{
		sVar1.f_2 = 1312010450;
		sVar1.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar1.f_0, sVar1.f_1));
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, &sVar1);
		uParam0->f_18 = func_108(iVar0);
	}
	sVar1 = { sVar6 /*5*/ };
	func_82(15, &sVar1);
	sVar1.f_2 = 908023140;
	sVar1.f_3 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar1.f_1), &sVar1))
	{
		while (iVar11 < DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar1.f_0, sVar1.f_1))
		{
			sVar1.f_2 = -1100654060;
			sVar1.f_3 = iVar11;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, &sVar1);
			uParam0->f_19[iVar11] = func_108(iVar0);
			iVar11++;
		}
		uParam0->f_52 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar1.f_0, sVar1.f_1);
		uParam0->f_25 = (uParam0->f_52 - 1);
	}
}

void func_111(var uParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	func_82(15, &sVar0);
	sVar0.f_2 = -1571721931;
	sVar0.f_3 = iParam1;
	sVar0.f_4 = iParam2;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -495185473;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(uParam0->f_30), &sVar0);
		sVar0.f_2 = -1276360309;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(uParam0->f_33), &sVar0);
		sVar0.f_2 = 1081618208;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(uParam0->f_39.f_1), &sVar0);
		sVar0.f_2 = -1993680615;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(uParam0->f_39.f_4), &sVar0);
		sVar0.f_2 = 151706215;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(uParam0->f_39.f_7), &sVar0);
		sVar0.f_2 = 1075437165;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(uParam0->f_34), &sVar0);
		sVar0.f_2 = 482880665;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(uParam0->f_37), &sVar0);
		sVar0.f_2 = 1818584824;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_38), &sVar0);
		sVar0.f_2 = -2069884107;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &sVar0);
		if (iVar5 == joaat("WEATHER_INVALID") || iVar5 == 0)
		{
			uParam0->f_73 = 0;
		}
		else
		{
			uParam0->f_73 = iVar5;
		}
		sVar0.f_2 = 2009151738;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam0->f_74), &sVar0);
		sVar0.f_2 = -1565059035;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam0->f_75), &sVar0);
		sVar0.f_2 = 1786497406;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(uParam0->f_96), &sVar0);
		sVar0.f_2 = -182204340;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam0->f_76), &sVar0);
		sVar0.f_2 = -2016118713;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam0->f_84), &sVar0);
	}
}

int func_112(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_113(Vector3 vParam0)
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

int func_114(int iParam0)
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

void func_115()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		func_223(iVar0);
		iVar0++;
	}
}

bool func_116(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_117(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_118(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, 0)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, 0));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, 0)))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, 1)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, 1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, 1)))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_13))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_13);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_13))
		{
			return false;
		}
	}
	return true;
}

bool func_119()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3;
	var uVar6;
	Vector3 vVar7;
	var uVar10;
	Vector3 vVar11;
	int iVar14;
	int iVar15;
	struct<11> /*88*/ sVar16;
	bool bVar27;
	Vector3 vVar28;
	float fVar31;
	Vector3 vVar32;
	float fVar35;
	Vector3 vVar36;
	int iVar39;
	float fVar40;
	int iVar41;
	Vector3 vVar42;
	Vector3 vVar45;
	var uVar48;
	Vector3 vVar49;
	int iVar52;
	struct<11> /*88*/ sVar53;

	if (func_116(sLocal_32.f_34))
	{
		return true;
	}
	if (!func_224(&bVar0, &bVar1))
	{
		if (func_225())
		{
			bVar0 = true;
		}
		else
		{
			return true;
		}
	}
	bVar2 = false;
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_98))
	{
		bVar2 = true;
	}
	if (!bVar2 && bVar0)
	{
		vVar3 = { sLocal_32.f_34 /*3*/ };
		uVar6 = sLocal_32.f_37;
		if (func_226(0))
		{
			vVar7 = { sLocal_32.f_100 /*3*/ };
			uVar10 = sLocal_32.f_103;
			if (!func_116(vVar7))
			{
				vVar3 = { vVar7 /*3*/ };
				uVar6 = uVar10;
			}
		}
		vVar11 = { vVar3 /*3*/ };
		if (!func_121(&vVar11, 50, 10, 0))
		{
		}
		if ((vVar11.z - 0.5f) < vVar3.z && (vVar11.z + 6.0f) > vVar3.z)
		{
			vVar3 = { vVar11 /*3*/ };
		}
		iVar14 = 0;
		if (func_227() == 0)
		{
			iVar14 = 1;
		}
		sVar16.f_10 = 7;
		sVar16.f_10 = 0;
		sVar16.f_0 = 1;
		sVar16.f_2 = 1;
		sVar16.f_4 = iVar14;
		sVar16.f_5 = 1;
		sVar16.f_6 = { vVar3 /*3*/ };
		sVar16.f_9 = uVar6;
		sLocal_32.f_98 = func_228(&iVar15, &sVar16);
		if (iVar15 == 2 && ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_98))
		{
			bVar2 = true;
		}
		else if (iVar15 == 1)
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	bVar27 = false;
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_99))
	{
		bVar27 = true;
	}
	if (!bVar27 && bVar1)
	{
		vVar28 = { sLocal_32.f_34 /*3*/ };
		fVar31 = sLocal_32.f_37;
		if (bVar0)
		{
			vVar32 = { sLocal_32.f_104 /*3*/ };
			fVar35 = sLocal_32.f_107;
			if (!func_116(vVar32))
			{
				vVar28 = { vVar32 /*3*/ };
				fVar31 = fVar35;
				iVar39 = 0;
				while (iVar39 < 9)
				{
					iVar41 = -1;
					if (iVar39 == func_229())
					{
						iVar41 = func_230();
					}
					if (iVar41 != -1 && func_231(iVar39, iVar41))
					{
						vVar36 = { func_232(iVar39) /*3*/ };
						if (!func_116(vVar36))
						{
							fVar40 = BUILTIN::VDIST2(vVar36, vVar28);
							if (fVar40 <= 100.0f)
							{
								vVar28 = { func_233(iVar39, -1) /*3*/ };
								fVar31 = func_234(iVar39);
							}
						}
					}
					iVar39++;
				}
			}
			else
			{
				vVar42 = { -2.0f, -2.0f, 0.0f /*3*/ };
				vVar28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar28, 0.0f, vVar42) /*3*/ };
			}
		}
		if (func_226(1))
		{
			func_23(1, &vVar45, &uVar48);
			if (!func_116(vVar45))
			{
				vVar28 = { vVar45 /*3*/ };
				fVar31 = fVar31;
			}
		}
		vVar49 = { vVar28 /*3*/ };
		if (!func_121(&vVar49, 50, 10, 0))
		{
		}
		if ((vVar49.z - 0.5f) < vVar28.z && (vVar49.z + 6.0f) > vVar28.z)
		{
			vVar28 = { vVar49 /*3*/ };
		}
		sVar53.f_10 = 7;
		sVar53.f_10 = 1;
		sVar53.f_0 = 1;
		sVar53.f_2 = 1;
		sVar53.f_5 = 1;
		sVar53.f_6 = { vVar28 /*3*/ };
		sVar53.f_9 = fVar31;
		sLocal_32.f_99 = func_228(&iVar52, &sVar53);
		if (!bVar0)
		{
			sLocal_32.f_98 = sLocal_32.f_99;
		}
		if (iVar52 == 2 && ENTITY::DOES_ENTITY_EXIST(sLocal_32.f_99))
		{
			bVar27 = true;
		}
		else if (iVar52 == 1)
		{
		}
	}
	else
	{
		bVar27 = true;
	}
	if (bVar2 && bVar27)
	{
		return true;
	}
	return false;
}

char* func_120(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_44();
	strcpy_s(&cVar1, 64, "script@respawn@sky@SkyTL_");
	if (iParam0 >= 23 || iParam0 < 1)
	{
		strcat_s(&cVar1, 64, "0000");
	}
	else if (iParam0 >= 20)
	{
		strcat_s(&cVar1, 64, "2100");
	}
	else if (iParam0 >= 17)
	{
		strcat_s(&cVar1, 64, "1800");
	}
	else if (iParam0 >= 14)
	{
		strcat_s(&cVar1, 64, "1500");
	}
	else if (iParam0 >= 11)
	{
		strcat_s(&cVar1, 64, "1200");
	}
	else if (iParam0 >= 8)
	{
		strcat_s(&cVar1, 64, "0900");
	}
	else if (iParam0 >= 5)
	{
		strcat_s(&cVar1, 64, "0600");
	}
	else
	{
		strcat_s(&cVar1, 64, "0300");
	}
	switch (iVar0)
	{
		case joaat("HIGHPRESSURE"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
		case joaat("SNOWCLEARING"):
			strcat_s(&cVar1, 64, "_01Clear");
			break;
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
			strcat_s(&cVar1, 64, "_03Clouds");
			break;
		case joaat("SANDSTORM"):
		case joaat("OVERCASTDARK"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			strcat_s(&cVar1, 64, "_04Storm");
			break;
		default:
			break;
	}
	return func_235(cVar1);
}

bool func_121(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_236(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 /*3*/ };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + (float)iParam1);
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - (float)iParam1);
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - (float)iParam1);
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1898330)
	{
		if (!func_103(Global_1898330[iVar1]))
		{
		}
		else
		{
			func_237(iVar1, 0);
			if (func_103(Global_1898330[iVar1]))
			{
				switch (func_238(Global_1898330[iVar1]))
				{
					case 1:
						if (func_239(iVar1, 16) && !func_239(iVar1, 4))
						{
							iVar0 = 0;
						}
						break;
				}
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_450)
	{
		if (func_139(Global_40.f_450[iVar2]))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[Global_40.f_450[iVar2] /*49*/].f_42, false))
			{
				if (!func_240(Global_1347702[Global_40.f_450[iVar2] /*49*/].f_13, 64))
				{
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_123(int iParam0)
{
	return (Global_21 & iParam0) != 0;
}

bool func_124()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_125(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_242(func_241(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_243(bVar0) == iParam0)
		{
			*iParam1 = bVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_126(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_127(struct<4> /*32*/ sParam0)
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
			if (func_244(sParam0.f_0))
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
			func_245(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_126(8);
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
			if (func_244(sParam0.f_0))
			{
				return;
			}
			func_245(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_126(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_246(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

bool func_128(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_247(iParam0, 1, 0))
	{
		if (func_248(iParam0))
		{
			iVar0 = func_249(iParam0, 0);
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar0))
				{
					return false;
				}
				if (bParam3 && !PED::IS_PED_READY_TO_RENDER(func_250(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !func_251(func_250(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar0);
					func_252(iParam0, 0);
					if (iParam2 & func_253(Global_1360165[iParam0 /*1157*/].f_63))
					{
						func_254(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_129(var uParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	Vector3 vVar0;
	int iVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	iVar3 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(uParam0, &vVar0, bParam4);
	return iVar3;
}

bool func_130(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

int func_131(int iParam0)
{
	int iVar0;

	iVar0 = func_242(func_241(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_132(int iParam0)
{
	if (func_125(joaat("CI_CATEGORY_WARDROBE_MASK"), iParam0))
	{
		return true;
	}
	if (func_125(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		return true;
	}
	return false;
}

bool func_133()
{
	return Global_1946054.f_2792;
}

bool func_134(bool bParam0)
{
	if (func_255())
	{
		return false;
	}
	if (!func_256(bParam0, 0))
	{
		return false;
	}
	if (!func_257(bParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_135(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_258(bParam0);
	if (func_184(bParam0, joaat("CI_TAG_ITEM_MASK")))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_34(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_259();
			}
			else
			{
				iVar0 = func_260();
			}
		}
		else if (func_261(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_262();
		}
		else
		{
			iVar0 = func_263();
		}
	}
	else if (func_132(&bVar2))
	{
		if (func_184(bVar2, joaat("CI_TAG_ITEM_MASK")))
		{
			iVar0 = func_259();
		}
		else
		{
			iVar0 = func_260();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_262();
	}
	else
	{
		iVar0 = func_263();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, bParam0, iVar0, 1, iParam1, -1.0f);
		return 1;
	}
	return 0;
}

bool func_136(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_137(int iParam0)
{
	return (Global_1835011[iParam0 /*74*/].f_63 & 64512) != 0;
}

void func_138(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_136(iParam0))
	{
		return;
	}
	if (func_264(&(Global_1835011[iParam0 /*74*/]), (1 << 13)))
	{
		bVar0 = true;
	}
	Global_1835011[iParam0 /*74*/].f_63 = 0;
	if (!bParam1 && bVar0)
	{
		Global_1835011[iParam0 /*74*/].f_63 |= 2;
		Global_1835011[iParam0 /*74*/].f_63 |= (1 << 13);
	}
}

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_140(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_139(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	}
	func_265(&(Global_1347702[iParam0 /*49*/].f_14));
	func_266(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 14));
	func_267(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 12));
	if (bVar0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 20)) != 0 && (Global_1347702[iParam0 /*49*/].f_13 & (1 << 11)) == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				func_269(iParam0, func_268(iParam0), 0, 0);
			}
		}
		else if (Global_1347702[iParam0 /*49*/].f_18 > -1.0f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				func_269(iParam0, func_270(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
		}
	}
}

int func_141(int iParam0)
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

int func_142(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

int func_143()
{
	int iVar0;

	iVar0 = func_271();
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

int func_144(int iParam0)
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

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_146(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_272();
	if (func_273(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_274(vParam0, iParam3);
}

void func_147(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_275(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || func_276(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_148(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

int func_149()
{
	return Global_40.f_4283.f_1;
}

bool func_150(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_151(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_152(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_153(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_154(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_277(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_279(iVar0, iParam1, func_154(iParam0, iParam1));
	func_280(iVar0, iParam1);
}

char* func_156(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_157(int iParam0, bool bParam1, bool bParam2)
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
		if (func_281())
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
		iVar0 = func_282(Global_1898164.f_1[0 /*5*/]);
		if (func_139(iVar0) && func_283(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_103(Global_1898164.f_1[0 /*5*/]))
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

void func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_164(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_284(iParam0))
	{
		return false;
	}
	if (func_285(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_163(iParam0, 1)) || func_104((1 << 15)))
	{
		if (!func_163(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_286())
	{
		return false;
	}
	return true;
}

void func_160(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_161(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_287(1) < iParam0)
	{
		iParam0 = func_287(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_198(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_162(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_288(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_163(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_164(int iParam0, int iParam1)
{
	if (func_201() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_165(int iParam0, bool bParam1)
{
	switch (func_289(iParam0))
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

var func_166()
{
	return Global_1899515;
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_290(*uParam0);
	iVar1 = func_291(*uParam0);
	iVar2 = func_292(*uParam0);
	iVar3 = func_293(*uParam0);
	iVar4 = func_294(*uParam0);
	iVar5 = func_295(*uParam0);
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
	iVar6 = func_296(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_296(iVar1, iVar0);
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
	func_297(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_168(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_298(iParam0, iParam1, bParam2);
}

int func_169(int iParam0)
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

void func_170()
{
	if (func_169(ENTITY::GET_ENTITY_MODEL(Global_35)) == joaat("JOHN"))
	{
		PED::_0x2B4CE170DE09F346(Global_35, joaat("DUTCH_GANG"));
		PED::_0x2B4CE170DE09F346(Global_35, joaat("JOHN"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER_JOHN"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("JOHN_CONV_CLOSER_REPLIES"));
	}
}

int func_171()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

bool func_172(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_299(iParam0));
}

bool func_173(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_300() && func_301());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_302(iParam0, 1);
	}
	return false;
}

void func_174(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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

	if (!func_303())
	{
		return;
	}
	sVar1 = func_304(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_214(iParam4))
	{
		if (func_273(iParam0))
		{
			iParam4 = func_306(func_305(iParam0));
		}
		else
		{
			iParam4 = func_306(iParam1);
		}
	}
	if (func_214(iParam4))
	{
		iVar3 = func_307(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_309(func_308(iParam2));
	}
	else if ((func_310(iParam1, 2) || func_311(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((func_273(iParam0) && func_312(iParam0, (1 << 24))) && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = func_293(func_175());
		iVar5 = func_294(func_175());
		if (iVar5 < 10)
		{
			strcat_s(&cVar6, 8, "0");
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 -= 12;
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_313(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_314(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_314(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_313(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_314(&cVar6, joaat("COLOR_PURE_WHITE")), func_314(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_315(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

int func_175()
{
	return Global_1899515;
}

void func_176()
{
	int iVar0;
	bool bVar1;
	struct<12> /*96*/ sVar2;
	int iVar19;
	struct<11> /*88*/ sVar20;
	int iVar37;

	iVar0 = func_316();
	bVar1 = (!func_20(Global_1935630, (1 << 22)) || Global_1935630.f_17 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1935630.f_13 = (LAW::ARE_WITNESSES_ACTIVE(iVar0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iVar0, false, 0));
			Global_1935630.f_15 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1935630.f_14 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1935630.f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630.f_17 = LAW::GET_WANTED_SCORE(iVar0);
			Global_1935630.f_26 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1935630.f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1935630.f_18 = LAW::IS_LAW_INCIDENT_ACTIVE(iVar0);
			if (Global_1935630.f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&sVar2);
				Global_1935630.f_19 = sVar2.f_10;
				Global_1935630.f_23 = sVar2.f_11 == 6;
			}
			Global_1935630.f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::GET_PLAYER_REGISTERED_CRIME(iVar0, iVar19, &sVar20))
				{
					if (sVar20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(sVar20.f_0, 0);
						if (iVar37 > Global_1935630.f_20)
						{
							Global_1935630.f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_317();
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		Global_1935630.f_41 = Global_1935630.f_40;
	}
	Global_1935630.f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1935630.f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!Global_1935630.f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630.f_44), false, 0, false);
		Global_1935630.f_40 = PED::GET_MOUNT(Global_35);
		if (Global_1572887.f_12 == -1 && (Global_1935630 & (1 << 18)) != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174 /*PRF_0xE3667800*/, true);
		}
		if (Global_1572887.f_12 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154 /*PRF_0x8A63AAF1*/, true);
		}
		else if ((Global_1935630 & (1 << 16)) != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154 /*PRF_0x8A63AAF1*/, true);
		}
		if (Global_1572887.f_12 == -1)
		{
			if (!func_318(9))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 135 /*PRF_0x50E07A43*/, true);
			}
			if (!func_318(14))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 144 /*PRF_0xEA31EF02*/, true);
			}
			if (!func_318(36))
			{
				HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
				HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if ((CAM::IS_SCREEN_FADED_OUT() && func_319()) && !func_157(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25 /*PRF_CannotBeTargetedByAI*/, true);
			}
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
			}
			if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			}
		}
	}
	else
	{
		if (func_201() == -1 && CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
		{
			HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1935630.f_44 = 0;
		Global_1935630.f_40 = 0;
	}
}

void func_177()
{
	if (func_201() != -1)
	{
		return;
	}
	func_320();
}

void func_178(Vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 /*3*/ };
}

void func_179(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

void func_180(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

void func_181(int iParam0)
{
	Global_1310720.f_10 = iParam0;
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_59(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_84(&Global_1935630, (1 << 22));
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

int func_183(bool bParam0)
{
	if (!bParam0 && func_321(joaat("WS_GUARMA_EXISTS")))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

bool func_184(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_185(bool bParam0)
{
	Vector3 vVar0;

	if (!func_256(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_186(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2.0f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = ((float)(iVar0 * iParam1) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2.0f);
}

void func_187(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_188(int iParam0)
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_189(int iParam0)
{
	int iVar0;

	if (func_201() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100.0f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_190(int iParam0, float fParam1)
{
	return func_322(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

bool func_191(var uParam0, var uParam1, float fParam2)
{
	if (func_201() != -1)
	{
		return true;
	}
	if (!func_323(0))
	{
		return true;
	}
	if (fParam2 <= 0.0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		func_324(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_54(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_324(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_192(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_201() == 0)
	{
		func_325(0, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_217(0);
	if (bParam1)
	{
		func_326(fVar0);
	}
	if (fVar0 >= (100.0f - 1.0f))
	{
		func_327();
	}
	if (bParam2)
	{
		fParam0 = func_328(0, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_219(0, func_329(fParam0, -100.0f, 100.0f), bParam1);
}

void func_193(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_201() == 0)
	{
		func_325(2, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_217(2);
	if (bParam1)
	{
		func_326(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_328(2, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_219(2, func_329(fParam0, -100.0f, 100.0f), bParam1);
}

void func_194(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_201() == 0)
	{
		func_325(1, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_217(1);
	if (bParam1)
	{
		func_326(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_328(1, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_219(1, func_329(fParam0, -100.0f, 100.0f), bParam1);
}

float func_195(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2.0f);
		case 2:
			return (fParam0 * 120.0f);
		case 3:
			return (fParam0 * 2880.0f);
		default:
			break;
	}
	return fParam0;
}

void func_196(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1.0f)
	{
		if (func_330(iParam0))
		{
			fParam1 = 30.0f;
		}
		else
		{
			fParam1 = 30.0f;
		}
	}
	else if (fParam1 <= 0.0f)
	{
		return;
	}
	fParam1 *= (1.0f + Global_40.f_11095.f_70);
	switch (iParam0)
	{
		case 0:
			sVar1 = func_331(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_332(-1);
			func_86(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_331(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_333(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_331(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_334(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_335(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_335(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_335(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_197(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_336(13);
	if (fParam0 > 10.0f)
	{
		fParam0 = 10.0f;
	}
	if (!func_318(17))
	{
		return;
	}
	if (func_337())
	{
		iVar1 = func_338(fVar0);
		fVar0 += fParam0;
		iVar2 = func_338(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = func_175();
			func_167(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_339(&fVar3, &fVar4);
		func_340(13, func_329(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_54(94, 0);
		}
	}
}

struct<2> /*16*/ func_198(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_199(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_200(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

int func_201()
{
	return Global_1572887.f_12;
}

bool func_202(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_203(int iParam0, int iParam1)
{
	if (func_201() != -1)
	{
		return false;
	}
	if (!func_341(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

int func_204(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_342(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_342(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_342(iParam0), false)))
		{
			return 0;
		}
	}
	return 1;
}

void func_205(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_206()
{
	func_343();
	func_344();
	func_345();
}

bool func_207(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_208(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_209()
{
	return Global_1310750.f_16037;
}

bool func_210(int iParam0, int iParam1)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_211(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	if (func_87(64) && func_346(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_212(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_213(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_207(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_347(iParam0);
	Global_1310750.f_16037--;
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_215(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_273(iVar0))
		{
			if (func_349(func_348(iVar0, 1, 1)) == iParam0)
			{
				func_350(iVar0, 0);
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_217(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

int func_218(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

void func_219(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_201() != -1)
	{
		return;
	}
	if (!func_318(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_218(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(iParam0), iVar0);
	func_352(func_351(iParam0), (100.0f * (BUILTIN::TO_FLOAT(iVar0) / 100.0f)), 0);
	if (((fParam1 <= func_353(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_54(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_54(func_354(iParam0), 1);
	}
	sVar1 = func_355(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

void func_220(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_221(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_222(1);
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		func_356(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_357(&(Global_40.f_12019.f_42), 1);
	}
}

void func_223(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_116(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_358(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20.0f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0.0f;
	if (func_359(iParam0, (1 << 23)))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = (1 << 23);
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != func_360())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_360();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	func_361(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		func_358(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

bool func_224(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*bParam0 = 0;
	*bParam1 = 0;
	bVar0 = func_124();
	bVar1 = false;
	if (bVar0 && !func_58(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_58(37)) && !func_58(43))
	{
		*bParam0 = 0;
		*bParam1 = 0;
		return false;
	}
	bVar2 = false;
	if ((bVar0 && func_58(43)) && !func_58(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return true;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_362(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_362(1) == 1)
		{
			*bParam1 = 1;
		}
	}
	if (*bParam0 || *bParam1)
	{
		return true;
	}
	return false;
}

bool func_225()
{
	return true;
}

bool func_226(int iParam0)
{
	iParam0 = func_117(iParam0);
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

int func_227()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_228(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> /*16*/ sVar8;
	struct<6> /*48*/ sVar10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_117(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_116(uParam1->f_6))
		{
		}
	}
	bVar0 = func_124();
	if (*uParam1)
	{
		if (bVar0 && !func_165(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_363(5))
			{
				func_364(5);
				func_365(5);
				func_366(0);
				func_367(0);
			}
		}
	}
	if (func_15(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_165(Global_1835011[37 /*74*/].f_1, 1)) && !func_165(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_165(Global_1835011[43 /*74*/].f_1, 1)) && !func_165(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_278(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_368(iVar1))
	{
		bVar3 = true;
		if (func_369(iVar1))
		{
			bVar4 = true;
		}
		if (func_370(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_371(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_363(0) && func_363(1))
			{
				func_372(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_373())
			{
				func_374();
			}
			func_366(0);
			func_367(0);
			func_375(uParam1->f_6);
		}
	}
	if (!func_368(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_376(uParam1->f_10) == 0 || func_377(uParam1->f_10) == 0) || func_362(uParam1->f_10) == 0)
			{
				func_378(uParam1->f_10);
			}
			func_379(uParam1->f_10);
			func_380(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_278(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_368(iVar1))
	{
		bVar3 = true;
		if (func_369(iVar1))
		{
			bVar4 = true;
		}
		if (func_370(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_116(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_381(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			sVar8 = { func_382(uParam1->f_10) /*2*/ };
			sVar10 = { func_383() /*6*/ };
			func_384(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186 /*PCF_CorpseIsPersistent*/, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_385(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_386(uParam1->f_10);
		if (uParam1->f_2 && !func_116(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_UNHITCH_HORSE(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_387(uParam1->f_10);
	if (func_385(uParam1->f_10))
	{
		iVar16 = func_388(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_229()
{
	return Global_40.f_4283;
}

int func_230()
{
	return Global_40.f_4283.f_4;
}

bool func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return true;
			}
			break;
		case 8:
			return func_58(73);
	}
	return false;
}

Vector3 func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { -107.0047f, -32.0697f, 94.9574f };
		case 2:
			return { 703.7057f, -1228.871f, 44.2991f };
		case 3:
			return { 1849.943f, -1837.089f, 42.2036f };
		case 5:
			return { 2278.213f, -751.9426f, 41.0419f };
		case 6:
			return { 2370.389f, 1340.97f, 105.1306f };
		case 7:
			return { -2591.632f, 466.4086f, 145.2065f };
		case 8:
			if (!func_389())
			{
				return { -1665.274f, -1330.899f, 82.9343f };
			}
			else
			{
				return { -1643.673f, -1375.62f, 82.9683f };
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return { -106.1076f, -31.1365f, 94.9429f };
				case 0:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-106.1076f, -31.1365f, 94.9429f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
				case 1:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-106.1076f, -31.1365f, 94.9429f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1:
					return { 702.1609f, -1228.529f, 44.1236f };
				case 0:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(702.1609f, -1228.529f, 44.1236f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
				case 1:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(702.1609f, -1228.529f, 44.1236f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -1:
					return { 1850.179f, -1838.022f, 42.1198f };
				case 0:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1850.179f, -1838.022f, 42.1198f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
				case 1:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1850.179f, -1838.022f, 42.1198f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1:
					return { 2279.944f, -751.8282f, 40.9738f };
				case 0:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2279.944f, -751.8282f, 40.9738f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
				case 1:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2279.944f, -751.8282f, 40.9738f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1:
					return { 2371.779f, 1341.602f, 105.1376f };
				case 0:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2371.779f, 1341.602f, 105.1376f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
				case 1:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2371.779f, 1341.602f, 105.1376f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case -1:
					return { -2590.321f, 464.9799f, 145.1713f };
				case 0:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-2590.321f, 464.9799f, 145.1713f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
				case 1:
					return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-2590.321f, 464.9799f, 145.1713f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_389())
					{
						return { -1665.684f, -1332.361f, 82.8786f };
					}
					else
					{
						return { -1644.99f, -1376.751f, 82.9679f };
					}
					break;
				case 0:
					if (!func_389())
					{
						return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1665.684f, -1332.361f, 82.8786f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
					}
					else
					{
						return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1644.99f, -1376.751f, 82.9679f, func_234(iParam0), 0.75f, 0.0f, 0.0f) };
					}
					break;
				case 1:
					if (!func_389())
					{
						return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1665.684f, -1332.361f, 82.8786f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
					}
					else
					{
						return { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1644.99f, -1376.751f, 82.9679f, func_234(iParam0), -0.75f, 0.0f, 0.0f) };
					}
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_234(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 164.6267f;
		case 2:
			return 253.0561f;
		case 3:
			return 46.2992f;
		case 5:
			return 70.2681f;
		case 6:
			return 109.4813f;
		case 7:
			return 81.6192f;
		case 8:
			if (!func_389())
			{
				return 21.0508f;
			}
			else
			{
				return 329.6172f;
			}
			break;
	}
	return 0.0f;
}

char* func_235(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_236(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_237(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_390(Global_1898330[iParam0]);
		func_391(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

int func_238(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return func_392(func_390(iParam0));
}

bool func_239(int iParam0, int iParam1)
{
	return (func_393(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 & iParam1) != 0);
}

bool func_240(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_241(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_394(iVar0);
}

int func_242(int iParam0, int iParam1)
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

int func_243(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_256(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_244(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_245(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_246(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = uParam2;
	sVar0.f_0 = uParam0;
	sVar0.f_2 = uParam1;
	func_395(sVar0);
}

bool func_247(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_396(iParam0))
	{
		return false;
	}
	if (func_397(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_397(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_397(iParam0, 4, 1))
	{
		return false;
	}
	if (func_398(iParam0, 33, 1))
	{
		return false;
	}
	if (func_399(iParam0))
	{
		return false;
	}
	if (func_400(iParam0))
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

bool func_248(int iParam0)
{
	if (func_401(iParam0))
	{
		if (func_402(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

int func_249(int iParam0, bool bParam1)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_403(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

int func_250(int iParam0)
{
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_251(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_404(iParam0, Global_36, 1);
	}
	if (fParam2 > 0.0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			if (fParam4 > 0.0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_252(int iParam0, bool bParam1)
{
	int iVar0;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_249(iParam0, 0)))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(func_249(iParam0, 0));
		if (iVar0 != Global_1360165[iParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[iParam0 /*1157*/].f_47 = iVar0;
			strcpy_s(&(Global_1360165[iParam0 /*1157*/].f_48), 64, PERSCHAR::_0x9C7F95946E304778(func_249(iParam0, 0), Global_1360165[iParam0 /*1157*/].f_47));
			Global_1360165[iParam0 /*1157*/].f_56 = 1;
		}
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_254(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_396(iParam0))
		{
			return;
		}
	}
	func_405(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_255()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_406())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_256(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_257(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_256(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_185(bParam0);
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
		if (!func_407(bParam0, 1))
		{
			return false;
		}
	}
	return func_408(bParam0, 0, bParam2) >= iParam1;
}

int func_258(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_132(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_259()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_409())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_260()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_409())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_261(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_262()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_409())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_263()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_409())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_264(var uParam0, int iParam1)
{
	return (uParam0->f_63 & iParam1) != 0;
}

void func_265(var uParam0)
{
	*uParam0 = 0;
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_267(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

Vector3 func_268(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return { 1794.04f, -1314.792f, 43.0923f };
		case 26:
			return { -235.2066f, 763.6583f, 117.085f };
		case 30:
			return { 1288.87f, -1397.85f, 77.93f };
		case 32:
			return { 1234.24f, -1425.58f, 71.18f };
		case 33:
			return { 905.92f, -421.19f, 88.23f };
		case 36:
			return { -2476.07f, 832.13f, 141.25f };
		case 38:
			return { -329.32f, -366.6f, 87.0f };
		case 39:
			return { 97.4f, -212.47f, 111.6f };
		case 43:
			return { 2586.494f, -1009.154f, 43.24f };
		case 41:
			return { 337.3075f, -684.5404f, 41.8362f };
		case 49:
			return { -2178.646f, -245.6886f, 191.1569f };
		case 51:
			return { -1709.38f, -335.07f, 176.95f };
		case 53:
			return { 2480.1f, -1377.69f, 45.32f };
		case 56:
			return { 2011.776f, -504.0132f, 40.983f };
		case 57:
			return { 1383.38f, -1336.83f, 77.59f };
		case 65:
			return { -2095.11f, 656.32f, 119.87f };
		case 69:
			return { 2943.93f, 1377.15f, 43.22f };
		case 70:
			return { 2945.42f, 1342.78f, 43.92f };
		case 77:
			return { 2793.35f, -1174.5f, 46.89f };
		case 78:
			return { 2734.359f, -1207.682f, 48.6752f };
		case 80:
			return { 2740.808f, -1312.805f, 46.648f };
		case 81:
			return { 2503.755f, -1164.531f, 48.1928f };
		case 84:
			return { -73.18f, -392.3f, 70.84f };
		case 88:
			return { 2480.53f, -399.62f, 41.42f };
		case 89:
			return { 1576.261f, -251.85f, 79.21f };
		case 91:
			return { 1496.348f, -1083.286f, 54.1105f };
		case 92:
			return { 1407.31f, 316.83f, 88.9555f };
		case 94:
			return { 1414.4f, 248.2f, 88.85f };
		case 101:
			return { -1378.656f, -735.3399f, 90.8243f };
		case 102:
			return { -1666.59f, 610.82f, 124.03f };
		case 103:
			return { 1356.44f, 533.95f, 86.12f };
		case 104:
			return { 2407.0f, -585.32f, 40.66f };
		case 105:
			return { -219.25f, 212.93f, 94.15f };
		case 116:
			return { 211.99f, 512.98f, 126.54f };
		case 117:
			return { -329.2f, 797.9f, 116.89f };
		case 118:
			return { -300.3652f, 814.9069f, 117.4111f };
		case 119:
			return { -1043.989f, 434.5095f, 53.6802f };
		case 121:
			return { 2520.88f, 421.94f, 65.91f };
		case 127:
			return { 2834.68f, -1048.04f, 42.86f };
		case 133:
			return { 2688.427f, -1121.766f, 49.6782f };
		case 135:
			return { -576.08f, 524.9f, 97.86f };
		case 136:
			return { 1248.01f, -1280.07f, 75.17f };
		case 143:
			return { 2954.45f, 523.05f, 44.47f };
		case 144:
			return { 2304.697f, -0.13289f, 45.70486f };
		case 151:
			return { 556.271f, 172.08f, 133.3435f };
		case 152:
			return { 556.271f, 172.08f, 133.3435f };
		case 146:
			return { -585.6761f, -347.216f, 81.28532f };
		default:
			break;
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_269(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3[24];
	char* sVar6;

	if (!func_139(iParam0))
	{
		return;
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & 256) != 0 && func_157(0, 0, 1))
	{
		return;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 16) != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (func_104((1 << 15)))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = func_410(iParam0);
	if (!bParam5 && func_411(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_268(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		func_412(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_SEAN"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	func_413(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (func_201() == -1)
	{
		func_414(iParam0);
		iVar0 = func_415(Global_40.f_4283);
		if (func_273(iVar0) && func_416(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = func_417(iVar0);
		}
		if (func_418(iParam0, bVar1, iVar0))
		{
			func_419(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & 1) == 0)
	{
		func_420(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!func_411(iParam0) || func_283(Global_1347702[iParam0 /*49*/].f_12, 1)) || func_283(Global_1347702[iParam0 /*49*/].f_12, (1 << 9))) || func_240(Global_1347702[iParam0 /*49*/].f_13, (1 << 11)))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		}
	}
	if ((Global_1347702[iParam0 /*49*/].f_13 & (1 << 15)) == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && (Global_1347702[iParam0 /*49*/].f_12 & 1) == 0) && (Global_1347702[iParam0 /*49*/].f_12 & 2) != 0)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		}
		else
		{
			func_420(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 15));
		}
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 8) != 0 && (Global_40.f_490.f_402[iParam0] & 2) == 0)
	{
		if (func_421(iParam0))
		{
			if (iParam0 == 97)
			{
				func_54(185, 0);
			}
			else
			{
				func_54(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			strcat_s(&cVar3, 24, "_FIRST");
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = func_422(MISC::VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_423(iParam0, 2);
	}
}

Vector3 func_270(int iParam0)
{
	Vector3 vVar0;

	if (!func_139(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (func_424(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 /*3*/ };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

var func_271()
{
	return Global_40.f_11095.f_35;
}

int func_272()
{
	return Global_1894899.f_2;
}

bool func_273(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_274(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_425(vParam0);
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

int func_275(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_276(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_277(int iParam0, int iParam1, int iParam2)
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

int func_278(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_277(iParam2, 0, 100);
	if (func_426(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0, iParam2);
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_426(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_427(iParam1);
	sVar2 = func_428(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iParam0, sVar2, true, -1);
		}
		else
		{
			PED::_REMOVE_PED_BLACKBOARD_BOOL(iParam0, sVar2);
		}
	}
}

bool func_281()
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

int func_282(int iParam0)
{
	if (!func_103(iParam0))
	{
		return -1;
	}
	return func_429(func_390(iParam0));
}

bool func_283(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_284(int iParam0)
{
	if (func_201() != -1)
	{
		if (func_163(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_163(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_163(iParam0, (1 << 16)) && !func_163(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_163(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_163(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_286()
{
	return Global_1905944.f_5694;
}

int func_287(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_288(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	int iVar20;

	sVar0 = -2;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam7;
	sVar0.f_0 = 450;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = iParam2;
	sVar13.f_4 = iParam3;
	sVar13.f_5 = iParam4;
	sVar13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&sVar0, &sVar13, bParam8);
	func_430(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_289(int iParam0)
{
	if (!func_103(iParam0))
	{
		return -1;
	}
	return func_431(iParam0);
}

int func_290(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_112(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_291(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_292(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_293(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_294(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_295(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_296(int iParam0, int iParam1)
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

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_432(iParam0, iParam6);
	func_433(iParam0, iParam5);
	func_434(iParam0, iParam4);
	func_435(iParam0, iParam3);
	func_436(iParam0, iParam2);
	func_437(iParam0, iParam1);
}

void func_298(int iParam0, int iParam1, bool bParam2)
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

bool func_299(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_438())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_300()
{
	return Global_1935630.f_44 == joaat("WEAPON_FISHINGROD");
}

bool func_301()
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

bool func_302(int iParam0, int iParam1)
{
	return func_261(Global_1900073.f_2[iParam0], iParam1);
}

bool func_303()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_439())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_157(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_304(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_156(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_441(func_440(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_442(iParam0) || func_318(45))
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
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
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

int func_305(int iParam0)
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

int func_306(int iParam0)
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

int func_307(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_443(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] & iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] & iParam1) != 0;
}

bool func_311(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

bool func_312(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

float func_313(float fParam0)
{
	return ((fParam0 * 1.8f) + 32.0f);
}

char* func_314(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_444(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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

int func_316()
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

void func_317()
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
}

bool func_318(int iParam0)
{
	if (!func_445(iParam0))
	{
		return false;
	}
	return func_446(iParam0);
}

bool func_319()
{
	if (func_201() != -1)
	{
		return false;
	}
	if (!func_124())
	{
		return false;
	}
	if (!func_165(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_165(Global_1835011[2 /*74*/].f_1, 1) && func_165(Global_1347702[120 /*49*/].f_15, 1)) && !func_165(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_165(Global_1835011[37 /*74*/].f_1, 1) && !func_165(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_165(Global_1835011[57 /*74*/].f_1, 1) && !func_165(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_165(Global_1835011[26 /*74*/].f_1, 1) && !func_165(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_165(Global_1835011[62 /*74*/].f_1, 1) && func_165(Global_1835011[63 /*74*/].f_1, 1)) && !func_165(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_165(Global_1835011[75 /*74*/].f_1, 1) && !func_165(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_165(Global_1835011[76 /*74*/].f_1, 1) && !func_165(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_165(Global_1835011[40 /*74*/].f_1, 1) && func_165(Global_1835011[41 /*74*/].f_1, 1)) && !func_165(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_165(Global_1835011[62 /*74*/].f_1, 1) && func_165(Global_1835011[63 /*74*/].f_1, 1)) && !func_165(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_165(Global_1835011[65 /*74*/].f_1, 1) && func_165(Global_1835011[66 /*74*/].f_1, 1)) && !func_165(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_320()
{
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(PLAYER::PLAYER_ID(), true);
	if (func_318(47))
	{
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), true);
	}
	else
	{
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), false);
	}
}

bool func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_447(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

float func_322(float fParam0, float fParam1)
{
	if (fParam1 != 0.0f)
	{
		return ((fParam1 / 100.0f) * 200.0f);
	}
	return ((fParam0 / 8.0f) * 200.0f);
}

bool func_323(int iParam0)
{
	if (func_438())
	{
		return false;
	}
	return func_165(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_324(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_448(iParam0, &sVar0);
}

void func_325(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_328(iParam0, fParam1, 1);
	}
	func_450(iParam0, (func_449(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_326(float fParam0)
{
	if (fParam0 >= (100.0f - 1.0f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_327()
{
	Global_40.f_11095.f_11[14] = 100.0f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_328(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_175();
	func_451(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_452(iParam0, 2);
	if (func_454(iVar0, func_453(iParam0, 2), 1))
	{
		func_455(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_54(88, bParam2);
		return 0.0f;
	}
	func_456(iParam0, func_175(), 2);
	func_455(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_329(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_332(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_457(2);
	func_458(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_333(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_459(2);
	func_460(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_461(2);
	func_462(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_335(int iParam0, bool bParam1, bool bParam2)
{
	func_450(iParam0, 100.0f, bParam1, bParam2, 1, 2);
}

float func_336(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

bool func_337()
{
	if (func_201() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return func_463(Global_1347477.f_195, 0);
}

int func_338(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

void func_339(float fParam0, float fParam1)
{
	if (!func_124())
	{
		*fParam0 = -100.0f;
		*fParam1 = 100.0f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_340(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0.0f;
		sVar2 = func_464(fParam1 < 0.0f, "rpg_cold", "rpg_hot");
		func_465(1, bVar1, 1, sVar2);
		func_466(!bVar1, fParam1 < 0.0f, bVar1);
		iVar0 = func_218(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_206();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_218(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_218(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_342(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

float func_343()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_467())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_217(2);
	}
	if (Global_1347477.f_119)
	{
		return func_217(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_468();
	fVar2 = func_469();
	fVar3 = func_470();
	fVar4 = func_471();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_472());
	fVar7 = (func_217(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_473(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_474(3, fVar9, fVar9 > 100.0f);
	return func_329(fVar7, -100.0f, 100.0f);
}

float func_344()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_467())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_217(1);
	}
	if (Global_1347477.f_119)
	{
		return func_217(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_468();
	fVar2 = func_469();
	fVar3 = func_470();
	fVar4 = func_471();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_472());
	fVar7 = (func_217(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_473(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_474(2, fVar9, fVar9 > 100.0f);
	return func_329(fVar7, -100.0f, 100.0f);
}

float func_345()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_467())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_217(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_475())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_476())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_217(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_468();
	fVar2 = func_469();
	fVar3 = func_470();
	fVar4 = func_471();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_472());
	fVar7 = (func_217(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_473(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_474(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_217(0);
	}
	return func_329(fVar7, -100.0f, 100.0f);
}

bool func_346(int iParam0)
{
	return func_210(iParam0, Global_1310750.f_16072 | 64);
}

void func_347(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
	{
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;
	}
	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_348(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_477(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_477(iParam0))
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
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_318(45))
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
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_318(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_165(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_165(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_318(45))
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
			if (iParam0 == func_149())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_318(45))
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
		iVar0 = func_478(iParam0);
		if (iVar0 != -1)
		{
			return func_479(iVar0, bParam1);
		}
	}
	return 0;
}

int func_349(int iParam0)
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

void func_350(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_273(iParam0))
	{
		return;
	}
	bVar0 = func_312(iParam0, (1 << 26));
	if (bParam1)
	{
		if (((!bVar0 && func_148(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_480(iParam0, func_175());
			func_481(iParam0, (1 << 26));
		}
	}
	else if (bVar0)
	{
		func_482(iParam0, (1 << 26));
		func_480(iParam0, -15);
	}
	func_483(iParam0);
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_352(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_484(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_353(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100.0f);
	return ((fVar0 * 200.0f) - 100.0f);
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

void func_356(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_357(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_358(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_116(vParam0))
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
			if (func_485(vVar2, vParam0, 2.0f, 1))
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

bool func_359(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return func_486(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

int func_360()
{
	return 0;
}

void func_361(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

int func_362(int iParam0)
{
	iParam0 = func_117(iParam0);
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

bool func_363(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_362(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_364(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_368(iParam0))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	func_487(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_488(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_489(iParam0, 0);
	func_490(iParam0);
}

void func_365(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	strcpy_s(&(Global_40.f_1095.f_1[iParam0 /*436*/]), 64, "");
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_491(&sVar0);
	func_492(iParam0, sVar0);
	func_493(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_494(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_495(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_496(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_497(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_498(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_499(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_500(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_501(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0.0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_31 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_34 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_366(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_367(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

bool func_368(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

bool func_369(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_368(iParam0))
	{
		return false;
	}
	iVar0 = func_278(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_370(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_368(iParam0))
	{
		return false;
	}
	iVar0 = func_278(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_371(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_368(iParam0))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_372(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_502(iParam0);
	func_502(iParam0);
	func_503(iParam0, iParam1);
	func_504(iParam0, iParam1);
	func_505(iParam0, iParam1);
	iVar1 = func_278(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_506(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar1)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	iVar3 = func_278(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_506(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar3)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_507();
}

bool func_373()
{
	int iVar0;

	iVar0 = func_508();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_374()
{
	int iVar0;

	iVar0 = func_508();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_509(0);
}

void func_375(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

int func_376(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_377(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_378(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_510(&uVar0, &uVar1, &uVar2);
	func_511(iParam0, uVar0);
	func_512(iParam0, uVar1);
	func_513(iParam0, uVar2);
	func_514(iParam0, 1);
	func_515(iParam0, 1);
}

void func_379(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_516(iParam0, 1);
}

void func_380(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_381(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_517(iParam0, 1);
}

struct<2> /*16*/ func_382(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_518(iParam0, &uVar2))
	{
	}
	if (!func_519(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_383()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_520(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_520(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_520(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_520(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_520(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_520(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_384(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return;
	}
	func_521(iParam0);
	func_522(iParam0, uParam1);
	func_523(iParam0);
	func_524(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_525(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

bool func_385(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_386(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_387(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_388(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_490(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_490(iParam0);
	}
}

int func_388(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

bool func_389()
{
	return func_58(70);
}

int func_390(int iParam0)
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

void func_391(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_392(iParam0);
	*uParam1 = func_429(iParam0);
	*uParam2 = func_526(iParam0);
}

int func_392(int iParam0)
{
	return (iParam0 & 31);
}

bool func_393(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_394(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_527(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

void func_395(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_244(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_244(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_245(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_126(8);
}

bool func_396(int iParam0)
{
	return iParam0 > -1;
}

bool func_397(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_396(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

bool func_398(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_396(iParam0))
		{
			return false;
		}
	}
	func_405(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

bool func_399(int iParam0)
{
	return func_397(iParam0, 16, 1);
}

bool func_400(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_401(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_402(int iParam0, int iParam1)
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
	if (func_261(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_261(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_261(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_261(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_261(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_261(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_261(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_261(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_403(int iParam0)
{
	int iVar0;

	if (!func_396(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_528(iParam0);
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

float func_404(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_405(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_406()
{
	int iVar0;

	iVar0 = Global_1946054.f_529[9];
	iVar0 += Global_1946054.f_529[4];
	iVar0 += Global_1946054.f_529[10];
	iVar0 += Global_1946054.f_529[1];
	iVar0 += Global_1946054.f_529[2];
	iVar0 += Global_1946054.f_529[6];
	iVar0 += Global_1946054.f_529[29];
	iVar0 += Global_1946054.f_529[26];
	iVar0 += Global_1946054.f_529[18];
	iVar0 += Global_1946054.f_529[19];
	return iVar0 > 0;
}

bool func_407(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_256(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_529(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_530("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_531(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_152(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_532(iVar1);
				return true;
			}
			iVar3++;
		}
		func_532(iVar1);
	}
	return false;
}

int func_408(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_256(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_185(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_529(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_533(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_534(bParam2), bParam0, false);
	return iVar2;
}

int func_409()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_276(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_276(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;

	iVar0 = joaat("BLIP_STYLE_RCM");
	if (!func_139(iParam0))
	{
		return iVar0;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		iVar0 = joaat("BLIP_STYLE_MISSION");
	}
	else if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 9)) != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = joaat("BLIP_STYLE_RCM_TRACKED");
		}
		else
		{
			iVar0 = joaat("BLIP_STYLE_RCM");
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = joaat("BLIP_STYLE_RCM_TRACKED");
	}
	else
	{
		iVar0 = joaat("BLIP_STYLE_RCM");
	}
	return iVar0;
}

bool func_411(int iParam0)
{
	if (func_201() != -1)
	{
		return false;
	}
	if (!func_139(iParam0))
	{
		return false;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 20)) != 0 && (Global_1347702[iParam0 /*49*/].f_13 & (1 << 11)) != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 > -1.0f)
	{
		return true;
	}
	return false;
}

void func_412(int iParam0)
{
	switch (func_201())
	{
		case -1:
			Global_1357549.f_1494 |= iParam0;
			break;
	}
}

void func_413(int iParam0)
{
	if (!func_411(iParam0))
	{
		if ((Global_1347702[iParam0 /*49*/].f_13 & 16) != 0)
		{
			if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
				}
				func_420(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			}
			func_267(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

void func_414(int iParam0)
{
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}
}

int func_415(int iParam0)
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

bool func_416(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_417(int iParam0)
{
	if (!func_535(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_536(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_537(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_537(iParam0), false) <= func_538();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_538();
	}
	return func_60();
}

bool func_418(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && (Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

void func_419(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_103(iParam0))
	{
		return;
	}
	switch (func_238(iParam0))
	{
		case 1:
			iVar0 = func_282(iParam0);
			if (func_539(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_540(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && (Global_1835011[iVar0 /*74*/].f_63 & 2) == 0)
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				}
				else
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
				}
			}
			else if ((func_540(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && (Global_1835011[iVar0 /*74*/].f_63 & 2) == 0)
			{
				iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS");
			}
			else
			{
				iVar2 = joaat("BLIP_STYLE_MISSION");
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!func_541(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
				}
				if (func_264(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_282(iParam0);
			if (func_542(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_410(iVar1))
				{
					case joaat("BLIP_STYLE_RCM"):
						iVar2 = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						iVar2 = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						iVar2 = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
					case joaat("BLIP_STYLE_MISSION"):
						iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
					default:
						iVar2 = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				iVar2 = func_410(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_414(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

void func_420(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_421(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

int func_422(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&sVar0, &sVar13, bParam5);
	return iVar15;
}

void func_423(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] |= iParam1;
}

bool func_424(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_543(Global_1347702[iParam0 /*49*/].f_15) != 0)
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

int func_425(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_544(vParam0, 0.0f, 0.0f, 0, 2);
	return func_544(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_426(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		case 1:
			*uParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

char* func_427(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_428(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_429(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

void func_430(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_431(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_545(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_432(int iParam0, int iParam1)
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

void func_433(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_291(*iParam0);
	iVar1 = func_290(*iParam0);
	if (iParam1 < 1 || iParam1 > func_296(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_435(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_436(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_437(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_438()
{
	if (func_201() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_439()
{
	if (func_201() != 0)
	{
		return true;
	}
	return true;
}

int func_440(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_546(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_441(int iParam0)
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

bool func_442(int iParam0)
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

bool func_443(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_444(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_445(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_447(int iParam0, int iParam1)
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
		case 657241756:
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case 682839815:
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
		case 1067254646:
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

bool func_448(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_449(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_547();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
		default:
			break;
	}
	return -1.0f;
}

int func_450(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_547();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100.0f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_548(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100.0f)
	{
		fParam1 = 100.0f;
	}
	else if (fParam1 < 0.0f)
	{
		fParam1 = 0.0f;
	}
	func_549(iVar0, iParam0, fParam1);
	func_550(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_216(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_290(*iParam0);
	iVar1 = func_291(*iParam0);
	iVar2 = func_292(*iParam0);
	iVar3 = func_293(*iParam0);
	iVar4 = func_294(*iParam0);
	iVar5 = func_295(*iParam0);
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
	iVar5 -= iParam1;
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 -= iParam2;
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 -= iParam3;
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 -= iParam4;
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_296(iVar6, iVar0);
		iVar2 += iVar7;
	}
	iVar1 -= iParam5;
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 -= iParam6;
	func_297(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_452(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_547();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_453(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_547();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

bool func_454(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_551(iParam1) || !func_551(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_456(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_457(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_547();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
		case 1:
			return Global_1954819.f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_458(float fParam0, int iParam1)
{
	if (fParam0 == 0.0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

int func_459(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_547();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
		case 1:
			return Global_1954819.f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_460(float fParam0)
{
	int iVar0;

	if (fParam0 == 0.0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iVar0, fParam0);
}

int func_461(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_547();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
		case 1:
			return Global_1954819.f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_462(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0) && fParam0 > 0.0f)
	{
		return;
	}
	if (fParam0 == 0.0f)
	{
		return;
	}
	fVar2 = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(iVar0);
	if (fParam0 < 0.0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, 1.0f);
	}
	if (fParam0 > 0.0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, fVar2);
	}
}

bool func_463(int iParam0, bool bParam1)
{
	return func_454(func_175(), iParam0, bParam1);
}

char* func_464(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_465(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_466(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_484(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

bool func_467()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_468()
{
	float fVar0;
	int iVar1;

	fVar0 = func_336(13);
	iVar1 = func_338(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0.0f;
}

float func_469()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_470()
{
	if (func_552())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_471()
{
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 0.0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0.0f;
}

float func_472()
{
	return Global_1954815.f_3;
}

void func_473(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_484(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_474(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_484(iParam0, 2, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100.0f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100.0f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

bool func_475()
{
	return func_336(12) <= -99.0f;
}

bool func_476()
{
	return func_336(12) >= 99.0f;
}

bool func_477(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return func_312(iParam0, (1 << 25));
}

int func_478(int iParam0)
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

int func_479(int iParam0, bool bParam1)
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
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_318(45))
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
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_318(45))
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
			if (!bParam1 || func_201() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_318(45))
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

void func_480(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_2 = iParam1;
}

void func_481(int iParam0, int iParam1)
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

void func_482(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= (Global_23118[iParam0 /*11*/] & iParam1);
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= (Global_1058888.f_40545[iParam0 /*11*/] & iParam1);
}

void func_483(int iParam0)
{
	if (!func_273(iParam0))
	{
		return;
	}
	if (func_553(iParam0))
	{
		func_554(iParam0);
	}
	else
	{
		func_555(iParam0);
	}
}

char* func_484(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_464(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_464(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_485(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

bool func_486(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_487(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_556(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar2, bVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = sVar2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_488(int iParam0)
{
	if (!func_557(iParam0))
	{
		return false;
	}
	if (!func_558())
	{
		return true;
	}
	return false;
}

void func_489(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_490(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

void func_491(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_492(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_559(iParam0, sParam1.f_0))
	{
	}
	if (!func_560(iParam0, sParam1.f_1))
	{
	}
}

void func_493(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_561(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_494(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_495(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_496(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0.0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0.0f;
		}
		iVar0++;
	}
}

void func_497(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_498(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_499(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_500(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_501(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_502(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

void func_503(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_504(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_505(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_562(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_562(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_563(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_564(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_565(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_566(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, iParam0, false);
	PED::_0xB8B6430EAD2D2437(iParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(iParam0, false);
	if (func_567(iParam0))
	{
		iVar3 = func_153(iParam0);
		if (func_568(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324 /*PCF_0x8D1AEDEF*/, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211 /*PCF_GiveAmbientDefaultTaskIfMissionPed*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208 /*PCF_0x010FB89C*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209 /*PCF_0xC44343FA*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400 /*PCF_0x3EECBCF6*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136 /*PCF_CannotBeMounted*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312 /*PCF_DisableHorseGunshotFleeResponse*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113 /*PCF_DisableShockingEvents*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277 /*PCF_0x5FE313B3*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319 /*PCF_EnableAsVehicleTransitionDestination*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6 /*PCF_DontInfluenceWantedLevel*/, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_507()
{
	if (func_368(0))
	{
		func_569(0);
	}
	if (func_368(1))
	{
		func_569(1);
	}
	if (func_368(5))
	{
		func_569(5);
	}
	if (func_368(6))
	{
		func_502(6);
	}
}

int func_508()
{
	return Global_1900383.f_393;
}

void func_509(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_510(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_124())
	{
		if (func_570())
		{
			bVar0 = false;
			if (!func_165(Global_1835011[15 /*74*/].f_1, 1) && !func_318(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_571();
				*iParam1 = func_572();
				*uParam2 = func_573();
				return 1;
			}
			else
			{
				*uParam0 = func_574();
				*iParam1 = func_575();
				*uParam2 = func_576();
				return 1;
			}
		}
		else if (func_438())
		{
			if (!func_165(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_577();
				*iParam1 = func_578();
				*uParam2 = func_579();
				return 1;
			}
			else
			{
				*uParam0 = func_580();
				*iParam1 = func_581();
				*uParam2 = func_582();
				return 1;
			}
		}
	}
	else if (func_570())
	{
		*uParam0 = func_583();
		*iParam1 = func_584();
		*uParam2 = func_585();
		return 1;
	}
	else if (func_438())
	{
		*uParam0 = func_586();
		*iParam1 = func_587();
		*uParam2 = func_588();
		return 1;
	}
	return 0;
}

void func_511(int iParam0, var uParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_512(int iParam0, var uParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_513(int iParam0, var uParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_514(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_376(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_510(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_589(iParam1);
	iVar5 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar5, iVar7);
}

void func_516(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 |= iParam1;
}

bool func_517(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 & iParam1) != 0;
}

bool func_518(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_562(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_590(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_256(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_562(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_590(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_256(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_520(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_591(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_592() /*4*/ };
	*uParam1 = func_590(sVar0, iParam0, 0);
	if (!func_256(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_521(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_522(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_593(iParam0, *uParam1);
	func_593(iParam0, uParam1->f_1);
}

void func_523(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_524(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_593(iParam0, *uParam1);
	func_593(iParam0, uParam1->f_1);
	func_593(iParam0, uParam1->f_2);
	func_593(iParam0, uParam1->f_3);
	func_593(iParam0, uParam1->f_4);
	func_593(iParam0, uParam1->f_5);
}

int func_525(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
	return 1;
}

int func_526(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

int func_527(int iParam0, int iParam1)
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

int func_528(int iParam0)
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

bool func_529(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_256(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_185(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_184(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_594(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_530(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_534(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_531(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_532(int iParam0)
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

int func_533(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_595(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_597(&sVar0, func_596(0));
	}
	if (!func_598(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_532(iVar18);
	return iVar19;
}

int func_534(bool bParam0)
{
	if (func_201() == -1)
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

bool func_535(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_536(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_537(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return { -2578.509f, 389.3037f, 148.3825f };
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_538()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70.0f;
	}
	return 25.0f;
}

bool func_539(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_599(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_540(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_600(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

int func_541(int iParam0)
{
	return func_601(iParam0);
}

bool func_542(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_418(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_543(int iParam0)
{
	if (!func_103(iParam0))
	{
		return -1;
	}
	return func_602(iParam0);
}

int func_544(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_545(int iParam0)
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

bool func_546(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;
	struct<2> /*16*/ sVar3;
	var uVar6;

	func_603(iParam3, &vVar0, &sVar3, &uVar6);
	if (func_604(vParam0, vVar0, sVar3.f_0, sVar3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

int func_547()
{
	if (func_605())
	{
		return 1;
	}
	return 0;
}

void func_548(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_549(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_355(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_606(iParam1), fParam2, -1);
	}
}

void func_550(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_547();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_607(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_608(iParam0, iVar0, iParam3);
	}
}

bool func_551(int iParam0)
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
	iVar0 = func_295(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_294(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_293(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_290(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_291(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_292(iParam0);
	if (iVar5 < 1 || iVar5 > func_296(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_552()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_553(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return func_312(iParam0, (1 << 26));
}

void func_554(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	strcpy_s(&cVar0, 64, func_609(iParam0));
	strcat_s(&cVar0, 64, "_OUTLINE");
	sVar8 = func_156(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), joaat("BLIP_STYLE_WANTED_REGION"));
}

void func_555(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	strcpy_s(&cVar0, 64, func_609(iParam0));
	strcat_s(&cVar0, 64, "_OUTLINE");
	sVar8 = func_156(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_557(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_558()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_559(int iParam0, bool bParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_562(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_610(bParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_611(sVar29, 1);
}

bool func_560(int iParam0, bool bParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_562(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_610(bParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_611(sVar29, 1);
}

void func_561(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_562(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_612(iParam0))
	{
		return false;
	}
	iVar0 = func_563(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_613(0) /*4*/ };
	if (!func_614(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_615(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return joaat("SLOTID_TEMPORARY_HORSE");
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_564(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_616(bParam10))
	{
		return func_617(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_619(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_534(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_611(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_565(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_616(bParam9))
	{
		return func_620(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_619(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar0, bParam9, 1) || !func_618(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_619(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_534(0);
	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(iVar28, &sParam0, &sParam4))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam0, sVar14.f_10 | iParam8))
	{
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam4, sVar0.f_10 | iParam8))
	{
	}
	return true;
}

bool func_566(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_621(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_567(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_153(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_568(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_569(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	Vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_517(iParam0, 64))
	{
		func_502(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_318(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_622(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_502(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_623(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_624(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_517(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_625(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	fVar15 = func_626(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_627(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1.0f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1.0f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_628(Global_1900383[iParam0 /*45*/].f_26);
		func_629(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == joaat("BLIP_MODIFIER_OBJECTIVE"))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	if (func_630(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		}
		else if (iVar5 == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}
	iVar21 = func_623(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

bool func_570()
{
	if (func_201() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_571()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_572()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_573()
{
	return 1;
}

int func_574()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_575()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_576()
{
	return 1;
}

int func_577()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_578()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_579()
{
	return 2;
}

int func_580()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_581()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_582()
{
	return 1;
}

int func_583()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_584()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_585()
{
	return 1;
}

int func_586()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_587()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_588()
{
	return 1;
}

void func_589(int iParam0)
{
	if (func_631() < iParam0)
	{
		func_632(iParam0);
	}
}

int func_590(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_633(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_591(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_243(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_634(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> /*32*/ func_592()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_613(0) /*4*/ };
	return func_610(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

void func_593(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == joaat("HORSE_EQUIPMENT_MANE_DEFAULT") || iParam1 == joaat("HORSE_EQUIPMENT_TAIL_DEFAULT"))
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, false, false);
}

void func_594(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<18> /*144*/ func_595(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_596(bool bParam0)
{
	int iVar0;

	iVar0 = func_534(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_610(joaat("CARRIED_WEAPONS"), func_613(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_610(joaat("CARRIED_WEAPONS"), func_613(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_610(joaat("CARRIED_WEAPONS"), func_613(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_597(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_598(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_534(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_599(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_600(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_635(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_602(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_603(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_604(Vector3 vParam0, Vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

bool func_605()
{
	return Global_1954819.f_866;
}

char* func_606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_607(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

char* func_609(int iParam0)
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

struct<4> /*32*/ func_610(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_256(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_534(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_611(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_616(0))
	{
		return func_636(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_534(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_612(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_563(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_613(0) /*4*/ };
	if (func_637(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> /*32*/ func_613(bool bParam0)
{
	return func_610(joaat("CHARACTER"), func_638(), joaat("SLOTID_NONE"), bParam0);
}

bool func_614(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_534(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_615(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_534(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_616(bool bParam0)
{
	if (func_201() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_534(bParam0));
}

int func_617(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> /*96*/ sVar0;
	int iVar14;
	int iVar15;
	struct<17> /*136*/ sVar16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_619(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_639(sVar0.f_4, sParam4, iParam8, 0);
	iVar15 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(sVar0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + sVar0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			sVar0.f_11 = (iVar15 - iVar14);
		}
	}
	sVar16 = { func_640(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_641(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_618(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_534(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_619(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_620(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	struct<17> /*136*/ sVar28;
	struct<17> /*136*/ sVar45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	if (func_619(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar0, 1, 0) || !func_618(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_619(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_640(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_640(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_642(iVar62, joaat("MOVEITEMS"), &sVar28) && func_642(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_643(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_641(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_641(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

bool func_621(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

void func_622(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_645(func_644(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_570())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_438();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_623(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_624(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_645(func_644(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_570())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_438())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_625(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_626(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_627(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_376(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_623(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_623(iParam0) + 1;
	fVar6 = func_646(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_647(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_628(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
}

void func_629(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

bool func_630(int iParam0)
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

int func_631()
{
	return Global_40.f_1095.f_3135;
}

void func_632(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_633(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_534(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_618(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_634(bool bParam0)
{
	int iVar0;

	if (!func_256(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_243(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_635(var uParam0)
{
	if (func_648(&(uParam0->f_29), 62))
	{
		switch (func_649())
		{
			case 1:
				if (!func_648(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_648(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_648(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_648(&(uParam0->f_29), 32))
				{
					if (func_648(&(uParam0->f_29), 2))
					{
						if (func_293(func_175()) < 5)
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

int func_636(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar15;
	struct<29> /*232*/ sVar16;
	struct<18> /*144*/ sVar45;
	struct<17> /*136*/ sVar63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return iVar0;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_185(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_650(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_651(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_652(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_653(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_640(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_641(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_637(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_534(bParam2), uParam0, iParam1);
}

struct<4> /*32*/ func_638()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_639(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_256(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_610(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_534(bParam6), &sVar0, false);
	return iVar4;
}

struct<17> /*136*/ func_640(var uParam0)
{
	struct<17> /*136*/ sVar0;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	sVar0 = { *uParam0 /*4*/ };
	sVar0.f_4 = { uParam0->f_5 /*4*/ };
	sVar0.f_8 = uParam0->f_4;
	sVar0.f_9 = uParam0->f_11;
	sVar0.f_11 = uParam0->f_9;
	sVar0.f_10 = uParam0->f_10;
	return sVar0;
}

int func_641(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_642(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_643(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_643(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_643(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_642(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_643(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_654(iParam0, iParam1);
}

char* func_644(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_655(37, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1224589.f_16[iParam0])
	{
		return sVar0;
	}
	if (func_655(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_645(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_444(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_646(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_647(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_648(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 & iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_649()
{
	return Global_1899516;
}

struct<29> /*232*/ func_650(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> /*232*/ sVar0;
	struct<29> /*232*/ sVar29;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_534(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_640(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_651(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_656(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_643(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_643(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_643(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_652(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> /*144*/ sVar0;
	struct<15> /*120*/ sVar18;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar18.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_534(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_640(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_653(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_657(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_643(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_643(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_643(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_654(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1223212 < 20)
	{
		Global_1223212++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223212.f_1[iVar0 /*9*/] = { Global_1223212.f_1[iVar0 + 1 /*9*/] /*9*/ };
			iVar0++;
		}
	}
	sVar1 = -1;
	sVar1.f_0 = iParam0;
	sVar1.f_1 = iParam1;
	Global_1223212.f_1[(Global_1223212 - 1) /*9*/] = { sVar1 /*9*/ };
}

bool func_655(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_658(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_659())
	{
		return func_658(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_658(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_656(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_657(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_658(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_659()
{
	return Global_1109000.f_245;
}

