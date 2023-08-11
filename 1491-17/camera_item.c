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
	bool bLocal_9 = false;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	char cLocal_27[32] = "";
	char cLocal_31[32] = "";
	char* sLocal_35 = NULL;
	char* sLocal_36 = NULL;
	char* sLocal_37 = NULL;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	struct<113> /*904*/ sLocal_47 = { 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_160 = 0;
	float fLocal_161 = 0.0f;
	bool bLocal_162 = false;
	int iLocal_163 = 0;
	Vector3 vLocal_164 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_167 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_170 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	float fLocal_175 = 0.0f;
	float fLocal_176 = 0.0f;
	Vector3 vLocal_177 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_180 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_183 = false;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	bool bLocal_192 = false;
	char* sLocal_193[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	bool bLocal_216 = false;
	float fLocal_217 = 0.0f;
	float fLocal_218 = 0.0f;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
#pragma endregion

void __SCRIPT()
{
	int iVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	strcpy_s(&cLocal_27, 32, "");
	strcpy_s(&cLocal_31, 32, "");
	sLocal_35 = "CameraViewfinder";
	sLocal_36 = "CameraTakePicture";
	sLocal_37 = "CameraTransitionBlink";
	bLocal_46 = true;
	fLocal_176 = 0.0f;
	fLocal_218 = 0.5f;
	iLocal_220 = 4;
	iLocal_221 = -1534086282;
	iLocal_223 = joaat("DOMINOS_SET_1");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&sLocal_47, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_46)
	{
		if (iLocal_13 == 1)
		{
			func_3();
		}
		if (func_4(sLocal_47.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1357510, 5))
			{
				func_5(sLocal_47.f_1[2], 0, 1);
			}
			else
			{
				func_5(sLocal_47.f_1[2], 1, 1);
			}
		}
		if (func_4(sLocal_47.f_1[8], 1))
		{
			if (bLocal_216)
			{
				func_5(sLocal_47.f_1[8], 0, 1);
			}
			else
			{
				func_5(sLocal_47.f_1[8], 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(128);
		func_6(256);
		func_6((1 << 9));
		func_6((1 << 10));
		func_6((1 << 11));
		func_6((1 << 12));
		func_6((1 << 14));
		func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_46)
		{
			if (func_7(&sLocal_47))
			{
				bLocal_46 = true;
			}
			else
			{
				bLocal_46 = false;
			}
		}
		func_8(sLocal_47);
		func_9(&sLocal_47);
		func_10(&(sLocal_47.f_90), &(sLocal_47.f_91), &(sLocal_47.f_94), &(sLocal_47.f_95), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (func_11(sLocal_47.f_1[2], 1) || func_11(sLocal_47.f_1[7], 1))
		{
			iLocal_38 = 1;
			if (func_12(&sLocal_47) == 3)
			{
				func_13(&sLocal_47, 15);
			}
			else if (func_12(&sLocal_47) != 6)
			{
			}
			else
			{
				func_14();
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				iLocal_191 = MISC::GET_GAME_TIMER();
				bLocal_192 = true;
				func_15();
				Global_1357507 = 0;
				func_13(&sLocal_47, 4);
			}
		}
		func_16(&sLocal_47);
		iVar0 = func_12(&sLocal_47);
		if (func_17())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_18())
				{
					iLocal_13 = 0;
					iLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "cameraRollCapacityLabel", "Disabled");
					func_19();
					func_13(&sLocal_47, 1);
				}
				else
				{
					if (func_20(&sLocal_47))
					{
						GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
						iLocal_13 = 1;
						func_21(&sLocal_47);
					}
					func_13(&sLocal_47, 1);
				}
				break;
			case 1:
				if (func_20(&sLocal_47))
				{
					func_21(&sLocal_47);
				}
				func_22();
				iLocal_10 = MISC::GET_GAME_TIMER();
				func_13(&sLocal_47, 2);
				break;
			case 2:
				if (func_20(&sLocal_47))
				{
					func_21(&sLocal_47);
				}
				if (func_23())
				{
					if (func_24(iLocal_10, 0))
					{
						func_13(&sLocal_47, 12);
						HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));
						MISC::SET_GAME_PAUSED(true);
					}
				}
				else if (func_24(iLocal_10, 0) && func_25(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA"))
				{
					func_13(&sLocal_47, 3);
				}
				break;
			case 4:
				func_9(&sLocal_47);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				if (bLocal_192)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_191) > 500)
					{
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));
						CAM::SET_CAM_ACTIVE(sLocal_47.f_32, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(sLocal_47.f_32);
						CAM::DESTROY_CAM(sLocal_47.f_32, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
						func_13(&sLocal_47, 3);
						func_26();
						bLocal_192 = false;
						func_27();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_184) > 100)
				{
					func_28();
					iLocal_184 = MISC::GET_GAME_TIMER();
				}
				if (func_20(&sLocal_47))
				{
					func_29(&sLocal_47);
					func_30(3);
					func_31(1);
					func_21(&sLocal_47);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_38 == 1 && Global_1357508 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_38 = 0;
					}
					else
					{
						iLocal_38 = 1;
					}
				}
				if (Global_1357508 != 1)
				{
				}
				else
				{
					iLocal_38 = 0;
				}
				if (bLocal_183 && iLocal_38 == 0)
				{
					func_5(sLocal_47.f_1[0], 1, 1);
					if (func_32(sLocal_47.f_1[0], 1) || Global_1357508 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						if (Global_1357508 == 1)
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_15();
						HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));
						func_33();
						iLocal_160 = MISC::GET_GAME_TIMER();
						func_13(&sLocal_47, 5);
					}
				}
				else
				{
					func_5(sLocal_47.f_1[0], 0, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_163) > 600)
				{
					func_34();
					iLocal_163 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_162)
				{
					func_5(sLocal_47.f_1[1], 1, 1);
					if (func_32(sLocal_47.f_1[1], 1))
					{
						if (func_35(Global_35, 0))
						{
						}
						else
						{
							iLocal_188 = 0;
							iLocal_190 = 0;
							func_15();
							func_13(&sLocal_47, 8);
							if (!func_36(&uLocal_185))
							{
								func_37(&uLocal_185, 1);
							}
							if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(sLocal_47.f_1[1], 0, 1);
				}
				break;
			case 5:
				if (func_20(&sLocal_47))
				{
					func_21(&sLocal_47);
				}
				if (func_38() && (MISC::GET_GAME_TIMER() - iLocal_160) > 500)
				{
					func_39();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					sLocal_47.f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
					sLocal_47.f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) /*3*/ };
					sLocal_47.f_83 = { sLocal_47.f_71, sLocal_47.f_71.f_1, sLocal_47.f_71.f_2 /*3*/ };
					sLocal_47.f_77 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(sLocal_47.f_68, sLocal_47.f_71.f_2, 0.0f, 0.3f, 0.5f) /*3*/ };
					sLocal_47.f_110 = 0;
					sLocal_47.f_83 = { 0.0f, 0.0f, 0.0f /*3*/ };
					sLocal_47.f_82 = 0.0f;
					sLocal_47.f_81 = 0.0f;
					sLocal_47.f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", sLocal_47.f_77, sLocal_47.f_83, 65.0f, false, 2);
					CAM::ATTACH_CAM_TO_PED_BONE(sLocal_47.f_32, Global_35, 21030, 0.0f, 0.2f, 0.0f, true);
					CAM::SET_CAM_NEAR_CLIP(sLocal_47.f_32, 0.25f);
					sLocal_47.f_33 = 5.0f;
					sLocal_47.f_33.f_1 = 2.0f;
					sLocal_47.f_33.f_2 = 128.0f;
					sLocal_47.f_33.f_3 = 25.0f;
					sLocal_47.f_33.f_4 = 25.0f;
					sLocal_47.f_33.f_5 = 60.0f;
					sLocal_47.f_33.f_6 = 1;
					sLocal_47.f_33.f_7 = 0;
					sLocal_47.f_33.f_8 = 1;
					sLocal_47.f_33.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(sLocal_47.f_32, &(sLocal_47.f_33));
					CAM::_PAUSE_CAMERA_FOCUS(sLocal_47.f_32, sLocal_47.f_110);
					CAM::ALLOW_MOTION_BLUR_DECAY(sLocal_47.f_32, false);
					CAM::SET_CAM_ACTIVE(sLocal_47.f_32, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
					func_34();
					iLocal_163 = MISC::GET_GAME_TIMER();
					func_27();
					func_13(&sLocal_47, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				if (iLocal_39 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1357509 = 1;
					iLocal_39 = 1;
				}
				if (MISC::IS_BIT_SET(Global_1357510, 6))
				{
				}
				else
				{
					HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_20(&sLocal_47))
				{
					func_30(6);
					func_21(&sLocal_47);
				}
				func_40(&sLocal_47);
				if (iLocal_42 == 0)
				{
					if (func_41(sLocal_47.f_1[6]) && !func_42(&sLocal_47, 32))
					{
						func_29(&sLocal_47);
						if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
						}
						func_43(1);
						func_44(&sLocal_47, 32);
					}
					if (!func_42(&sLocal_47, 32))
					{
						if (func_41(sLocal_47.f_1[5]))
						{
							func_45();
						}
					}
				}
				break;
			case 11:
				if (func_20(&sLocal_47))
				{
					sLocal_47.f_1[6] = func_46("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_31(1);
					func_47("CAM_SNAP", 0, 0, 1);
					func_21(&sLocal_47);
				}
				if (func_48())
				{
					if (!func_42(&sLocal_47, 16))
					{
						func_13(&sLocal_47, 3);
					}
					else
					{
						func_13(&sLocal_47, 16);
					}
				}
				else
				{
					func_49(&sLocal_47);
				}
				break;
			case 10:
				func_50(&sLocal_47);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				iLocal_38 = 1;
				if (iLocal_189 == 0)
				{
					if (func_51(&uLocal_185) > 500)
					{
						if (CAM::DOES_CAM_EXIST(sLocal_47.f_32))
						{
							CAM::SET_CAM_ACTIVE(sLocal_47.f_32, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(sLocal_47.f_32, false);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_217);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
						func_26();
						iLocal_189 = 1;
					}
				}
				if (func_51(&uLocal_185) > 1000)
				{
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));
					func_27();
					func_52(&uLocal_185);
					func_14();
					func_13(&sLocal_47, 3);
				}
				break;
			case 8:
				func_50(&sLocal_47);
				if (iLocal_188 == 0)
				{
					if (func_51(&uLocal_185) > 500)
					{
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_164, fLocal_175, true, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						func_39();
						bLocal_216 = false;
						iLocal_188 = 1;
					}
				}
				if (iLocal_188 != 1)
				{
				}
				else if (iLocal_190 != 0)
				{
					if (func_51(&uLocal_185) > 1000)
					{
						func_52(&uLocal_185);
						func_53(&sLocal_47);
						func_27();
						func_13(&sLocal_47, 9);
					}
				}
				else if (func_51(&uLocal_185) > 300)
				{
					iLocal_190 = 1;
					func_54(&sLocal_47);
				}
				break;
			case 9:
				func_50(&sLocal_47);
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_20(&sLocal_47))
				{
					func_21(&sLocal_47);
				}
				func_53(&sLocal_47);
				if (func_32(sLocal_47.f_1[6], 1) && !func_42(&sLocal_47, 32))
				{
					func_29(&sLocal_47);
					if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					func_43(1);
					func_44(&sLocal_47, 32);
				}
				else if (func_32(sLocal_47.f_1[1], 1))
				{
					func_13(&sLocal_47, 8);
				}
				if (!func_42(&sLocal_47, 32))
				{
					if (func_41(sLocal_47.f_1[5]))
					{
						func_45();
					}
				}
				break;
			case 7:
				break;
			case 15:
				if (func_20(&sLocal_47))
				{
					func_21(&sLocal_47);
				}
				func_29(&sLocal_47);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				func_13(&sLocal_47, 16);
				break;
			case 16:
				if (func_20(&sLocal_47))
				{
					func_21(&sLocal_47);
				}
				func_2();
				func_1(&sLocal_47, 1);
				if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_55())
		{
			if (func_56(&uLocal_202) > 1.0f)
			{
				func_57();
			}
		}
		if (iVar0 == 12)
		{
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PM", 1, 0, 0, 0);
			if (func_11(sLocal_47.f_1[7], 1))
			{
				func_13(&sLocal_47, 15);
			}
			if (func_20(&sLocal_47))
			{
				func_29(&sLocal_47);
				func_30(12);
				func_31(1);
				func_21(&sLocal_47);
			}
			if (func_41(sLocal_47.f_1[6]) && !func_42(&sLocal_47, 32))
			{
				MISC::SET_GAME_PAUSED(false);
				func_29(&sLocal_47);
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_43(1);
				func_44(&sLocal_47, 32);
				bLocal_9 = true;
			}
			if (!func_42(&sLocal_47, 32))
			{
				if (bLocal_9)
				{
					MISC::SET_GAME_PAUSED(true);
					bLocal_9 = false;
				}
				if (func_41(sLocal_47.f_1[5]))
				{
					func_45();
				}
			}
		}
	}
	func_2();
	func_1(&sLocal_47, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	if (func_58())
	{
		Global_1357504 = uParam0->f_89;
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PHOTO_MODE"));
	}
	Global_1357503 = 0;
	func_59(0);
	GRAPHICS::_0xF5793BB386E1FF9C(0);
	ANIMSCENE::_0xCDCD7B2D49AEE73A(false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));
	Global_1357507 = 0;
	Global_1357508 = 0;
	AUDIO::_RELEASE_SOUNDSET("CAMERA_SOUNDSET");
	if (!func_58())
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	}
	STREAMING::REMOVE_CLIP_SET(func_60());
	STREAMING::REMOVE_ANIM_DICT(func_61());
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	func_29(uParam0);
	func_31(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_BLOCK_DELETE("CAMERA");
	if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("CAMERA_PHOTOMODE"))
	{
		func_62();
		Global_1935496.f_127 = 1;
	}
}

void func_2()
{
	if (iLocal_11 == 1)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_41);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_21);
	UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(1459179713);
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_222);
	iLocal_222 = 0;
	func_26();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_37);
	}
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("CameraViewfinder");
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("CameraTransitionBlink");
	func_14();
	func_43(0);
}

void func_3()
{
	sLocal_47.f_106 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
	if (sLocal_47.f_106 == 1)
	{
	}
	if (sLocal_47.f_106 == 0)
	{
		bLocal_12 = false;
		iLocal_14 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_15 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		uLocal_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "photoModeLabel0", " ");
		uLocal_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "photoModeLabel1", " ");
		uLocal_25 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "photoModeLabel2", " ");
		uLocal_26 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "photoModeLabel3", " ");
		func_63();
		iLocal_13 = 0;
		bLocal_17 = true;
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	else if (sLocal_47.f_106 == 2)
	{
		bLocal_12 = true;
		iLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_21, "cameraRollCapacityLabel", "failed/failed");
		func_19();
		iLocal_13 = 0;
		bLocal_17 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1945188[iVar0 /*18*/].f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_64(iParam0))
	{
		return;
	}
	iVar0 = func_65(iParam0);
	if (bParam1)
	{
		func_66(iParam0, 4);
		func_67(iVar0, 1);
		func_68(iVar0, 1);
	}
	else
	{
		func_69(iParam0, 4);
		func_68(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1935496.f_29 |= iParam0;
}

bool func_7(var uParam0)
{
	if (Global_1357509 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1357509 = 0;
		return false;
	}
	if (!func_58())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.33f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
			if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_58())
	{
		if (func_70())
		{
			if (func_71(19) | func_72(Global_1914319.f_16855.f_1))
			{
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_58())
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (!func_73(Global_35, 0))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || PED::IS_PED_INJURED(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_58())
	{
		if (!func_74(joaat("WEAPON_KIT_CAMERA"), 1, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (func_12(uParam0) == 8)
		{
		}
		if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
		{
			if (func_25(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_CAMERA"))
			{
				if (func_75(uParam0) == 0)
				{
					return false;
				}
			}
		}
	}
	if (func_76())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_58())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, true)))
		{
			func_77("CAM_VEH", 10000, 0, 0, 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	return true;
}

void func_8(struct<108> /*864*/ sParam0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_35, 129 /*PRF_DisableAmbientPrompts*/, true);
	PED::SET_PED_RESET_FLAG(Global_35, 173 /*PRF_0xD984FE04*/, true);
	if (sParam0.f_107 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	if (!sParam0.f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	if (func_78(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53 /*PRF_DisableAgitation*/, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153 /*PRF_0x6AB3F2F2*/, true);
			PED::_SET_PED_MOTIVATION(iVar0, 3, 0.0f, 0);
		}
	}
}

void func_9(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((func_12(uParam0) == 8 || func_12(uParam0) == 9) || func_12(uParam0) == 10) || func_12(uParam0) == 5) || func_12(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_79(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_31) && CAM::IS_CAM_ACTIVE(uParam0->f_31))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	if (Global_1357503 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(iParam8))
	{
		*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam4));
		*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam5));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 250.0f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 250.0f));
	}
	else
	{
		*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127.0f));
		*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127.0f));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127.0f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127.0f));
	}
}

bool func_11(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_107;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	func_80(uParam0);
}

void func_14()
{
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_37);
	}
}

void func_16(var uParam0)
{
	struct<8> /*64*/ sVar0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_4(uParam0->f_1[6], 1))
	{
		if (uParam0->f_108 == 0 && iLocal_13 == 0)
		{
			func_5(uParam0->f_1[6], 1, 1);
			if (bLocal_17)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_18) > 2500)
				{
					iLocal_14 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
					func_63();
					iLocal_18 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			func_5(uParam0->f_1[6], 0, 1);
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_41);
				bLocal_12 = true;
				func_81(uParam0, 2);
				iLocal_11 = 0;
			}
			break;
		case 0:
			if (func_42(uParam0, 32))
			{
				func_29(uParam0);
				if (func_18() || bLocal_12)
				{
					func_81(uParam0, 2);
				}
				else if (iLocal_14 == iLocal_15)
				{
					if (iLocal_41 == 0)
					{
						sVar0.f_2 = 4;
						sVar0.f_2 = 0;
						sVar0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						sVar0.f_7.f_3 = 0;
						iLocal_41 = func_82(&sVar0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_81(uParam0, 1);
						iLocal_11 = 1;
					}
					else
					{
						bLocal_12 = true;
						func_81(uParam0, 2);
					}
				}
				else
				{
					func_81(uParam0, 2);
				}
			}
			if (func_42(uParam0, 128))
			{
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(1);
				func_81(uParam0, 7);
			}
			break;
		case 2:
			sLocal_47.f_112 = 0;
			func_43(0);
			func_81(uParam0, 3);
			iLocal_45 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_45) > 0)
			{
				iLocal_45 = MISC::GET_GAME_TIMER();
				if (!func_23())
				{
					func_83();
				}
				if (func_18() || bLocal_12)
				{
					func_81(uParam0, 4);
				}
				else
				{
					GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_14++;
					func_63();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_81(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 1)
			{
			}
			if (uParam0->f_106 == 0)
			{
				if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
				{
					GRAPHICS::_SET_PHOTO_SELF_STAT(true);
				}
				else
				{
					GRAPHICS::_SET_PHOTO_SELF_STAT(false);
				}
				strcpy_s(&cVar19, 32, "");
				iVar23 = func_84();
				if (func_85(iVar23))
				{
					MemCopy(&cVar19, {func_86(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_87();
					strcpy_s(&cVar19, 32, func_88(iVar24));
				}
				GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(&cVar19);
				strcpy_s(&cVar25, 16, "");
				strcpy_s(&cVar27, 16, "");
				iVar29 = func_89();
				if (func_90(iVar29))
				{
					strcpy_s(&cVar25, 16, func_91(iVar29));
					strcpy_s(&cVar27, 16, func_92(iVar29));
				}
				GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(&cVar25);
				GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_16 = 0;
				func_81(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				func_81(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_16 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_39();
				func_30(func_12(uParam0));
				func_5(uParam0->f_1[6], 0, 1);
				func_93(600, 0);
				iLocal_16 = 1;
			}
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 0)
			{
				sLocal_47.f_112 = 1;
				func_94(uParam0, 32);
				func_81(uParam0, 0);
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_106 == 2)
			{
				sLocal_47.f_112 = 1;
				func_94(uParam0, 32);
				func_81(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_45) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_94(uParam0, 32);
				func_81(uParam0, 0);
				func_39();
				func_30(func_12(uParam0));
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_93(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(1);
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, false);
				func_44(uParam0, 256);
				func_94(uParam0, 128);
				func_81(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				func_94(uParam0, 128);
				func_81(uParam0, 0);
			}
			break;
	}
}

bool func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

bool func_18()
{
	return Global_1357506;
}

void func_19()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
	strcpy_s(&cLocal_27, 32, "-");
	strcat_s(&cLocal_27, 32, " / ");
	strcpy_s(&cLocal_31, 32, "-");
	strcat_s(&cLocal_27, 32, &cLocal_31);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}

bool func_20(var uParam0)
{
	return *uParam0;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
}

void func_22()
{
	if (func_58())
	{
		HUD::TEXT_BLOCK_REQUEST("CAMERA");
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST("CAMERA");
		STREAMING::REQUEST_ANIM_DICT(func_61());
		STREAMING::REQUEST_CLIP_SET(func_60());
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("CameraViewfinder");
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("CameraTransitionBlink");
	}
}

bool func_23()
{
	return false;
}

bool func_24(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	if (func_58())
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED("CAMERA"))
		{
			if ((MISC::GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(&Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (AUDIO::PREPARE_SOUNDSET("Photo_Mode_Sounds", false) == 0)
		{
			if ((MISC::GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(&Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED("CameraViewfinder"))
		{
			iVar0 = 0;
		}
		if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED("CameraTransitionBlink"))
		{
			iVar0 = 0;
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED("CAMERA"))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_CLIP_SET_LOADED(func_60()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_61()))
		{
			iVar0 = 0;
		}
		if (!AUDIO::PREPARE_SOUNDSET("CAMERA_SOUNDSET", false))
		{
			if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_26()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_35))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_35);
	}
}

void func_27()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(sLocal_37);
	}
}

void func_28()
{
	float fVar0;
	Vector3 vVar1;

	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_167, fVar0, 0.0f, 2.0f, -0.2f) /*3*/ };
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_183 = false;
		return;
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_183 = true;
	}
	else
	{
		bLocal_183 = false;
	}
}

void func_29(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_64(uParam0->f_1[iVar0]))
		{
			func_95(&(uParam0->f_1[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_96(6, 1);
			func_96(7, 1);
			func_96(3, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			break;
		case 3:
			func_96(6, 0);
			func_96(3, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(0, 1);
			func_96(1, 1);
			func_96(2, 1);
			break;
		case 6:
			func_96(0, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 8:
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(8, 1);
			func_96(9, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 9:
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(8, 1);
			func_96(9, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 10:
			func_96(2, 0);
			func_96(0, 0);
			func_96(3, 0);
			func_96(1, 0);
			func_96(5, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			func_96(6, 0);
			func_96(9, 0);
			func_96(4, 0);
			break;
		case 7:
			func_96(2, 0);
			func_96(0, 0);
			func_96(6, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(1, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			break;
	}
}

void func_31(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

bool func_32(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_33()
{
	if (iLocal_220 == 0)
	{
		iLocal_220 = 1;
	}
}

void func_34()
{
	float fVar0;
	Vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_167, fVar0, 0.0f, 4.0f, 0.0f) /*3*/ };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50.0f), &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_167, &uVar5, false);
	if ((vLocal_167.z - fVar4) > 3.0f)
	{
		bLocal_162 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::_IS_PED_DRUNK(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_167, 2.0f) > 0)
	{
		bLocal_162 = false;
		return;
	}
	if ((fVar4 - vLocal_167.z) > 1.0f)
	{
		bLocal_162 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (func_35(Global_35, 0))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_162 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_162 = false;
		return;
	}
	fVar6 = 1.0f;
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_162 = true;
	}
	else
	{
		bLocal_162 = false;
	}
	if (bLocal_162)
	{
		vLocal_164 = { vLocal_167.x, vLocal_167.y, (vLocal_167.z - 1.0f) /*3*/ };
		fLocal_175 = fVar0;
		vLocal_170 = { vVar1.x, vVar1.y, (fVar4 + fVar6) /*3*/ };
	}
}

bool func_35(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_36(var uParam0)
{
	return func_97(*uParam0, 1);
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1 || !func_36(uParam0))
	{
		func_98(uParam0);
	}
}

bool func_38()
{
	switch (iLocal_220)
	{
		case 0:
			if (iLocal_221 == iLocal_223)
			{
			}
			break;
		case 1:
			iLocal_222 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_221);
			iLocal_220 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_222))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_222, iLocal_223);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(1459179713, iLocal_222);
				iLocal_220 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_39()
{
	if (func_23())
	{
	}
	else if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_35))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_35);
	}
}

void func_40(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	Vector3 vVar15;

	if (uParam0->f_90 > 0 && (float)uParam0->f_90 > 89.0f)
	{
		uParam0->f_90 = BUILTIN::ROUND(89.0f);
	}
	else if (uParam0->f_90 < 0 && (float)uParam0->f_90 < -89.0f)
	{
		uParam0->f_90 = BUILTIN::ROUND(-89.0f);
	}
	if (uParam0->f_91 > 0 && (float)uParam0->f_91 > 89.0f)
	{
		uParam0->f_91 = BUILTIN::ROUND(89.0f);
	}
	else if (uParam0->f_91 < 0 && (float)uParam0->f_91 < -89.0f)
	{
		uParam0->f_91 = BUILTIN::ROUND(-89.0f);
	}
	if (uParam0->f_90 != uParam0->f_92)
	{
		uParam0->f_92 = uParam0->f_90;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_90) - -89.0f) / (89.0f - -89.0f));
		uParam0->f_98 = fVar0;
	}
	else
	{
		uParam0->f_102 = 0.0f;
	}
	if (uParam0->f_91 != uParam0->f_93)
	{
		uParam0->f_93 = uParam0->f_91;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_91) - -89.0f) / (89.0f - -89.0f));
		uParam0->f_99 = fVar1;
	}
	else
	{
		uParam0->f_103 = 0.0f;
	}
	vVar6 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) /*3*/ };
	fVar4 = 50.0f;
	if ((func_99(Global_1347702[85 /*49*/].f_15) || func_99(Global_1347702[86 /*49*/].f_15)) || func_99(Global_1347702[87 /*49*/].f_15))
	{
		fVar5 = -50.0f;
	}
	else
	{
		fVar5 = -25.0f;
	}
	if ((func_99(Global_1347702[85 /*49*/].f_15) || func_99(Global_1347702[86 /*49*/].f_15)) || func_99(Global_1347702[87 /*49*/].f_15))
	{
		fVar2 = 38.0f;
		fVar3 = -40.0f;
	}
	else
	{
		fVar2 = 68.0f;
		fVar3 = -85.0f;
	}
	fVar12 = uParam0->f_81;
	fVar13 = uParam0->f_82;
	fVar11 = -1.0f;
	if (uParam0->f_94 <= 0)
	{
		fVar11 = 1.0f;
		uParam0->f_94 = MISC::ABSI(uParam0->f_94);
	}
	fVar9 = ((BUILTIN::TO_FLOAT(uParam0->f_94) - 0.0f) / (89.0f - 0.0f));
	fVar12 += (fVar9 * fVar11);
	if (fVar12 >= fVar2)
	{
		fVar12 = fVar2;
	}
	else if (fVar12 < fVar3)
	{
		fVar12 = fVar3;
	}
	uParam0->f_81 = fVar12;
	fVar11 = -1.0f;
	if (uParam0->f_95 <= 0)
	{
		fVar11 = 1.0f;
		uParam0->f_95 = MISC::ABSI(uParam0->f_95);
	}
	fVar10 = ((BUILTIN::TO_FLOAT(uParam0->f_95) - 0.0f) / (89.0f - 0.0f));
	fVar13 += (fVar10 * fVar11);
	if (fVar13 >= fVar4)
	{
		fVar13 = fVar4;
	}
	else if (fVar13 < fVar5)
	{
		fVar13 = fVar5;
	}
	uParam0->f_82 = fVar13;
	uParam0->f_83 = { Vector(vVar6.z, 0.0f, 0.0f) + Vector(uParam0->f_81, 0.0f, uParam0->f_82) /*3*/ };
	func_100(uParam0);
	func_101(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50.0f, 0, 1, 1, 2, 0, 0);
	if ((func_99(Global_1347702[85 /*49*/].f_15) || func_99(Global_1347702[86 /*49*/].f_15)) || func_99(Global_1347702[87 /*49*/].f_15))
	{
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_184) > 100)
	{
		if (iLocal_40 == 0)
		{
			fVar14 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar15 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_167, fVar14, 0.0f, 0.25f, 0.0f) /*3*/ };
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_40 = 1;
			}
		}
		iLocal_184 = MISC::GET_GAME_TIMER();
	}
}

bool func_41(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65(iParam0);
	iVar1 = Global_1945188[iVar0 /*18*/].f_4;
	return (func_32(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0->f_109 & iParam1) != 0;
}

void func_43(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_44(var uParam0, int iParam1)
{
	uParam0->f_109 |= iParam1;
}

void func_45()
{
	UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_46(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_102(iVar0, 2))
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
				func_103(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_47(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_77(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

bool func_48()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

int func_49(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !func_42(uParam0, 32))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY("CLICK", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		func_43(1);
		func_44(uParam0, 32);
	}
	return 1;
}

void func_50(var uParam0)
{
	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_167, vLocal_164, true) > 3.0f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_164, fLocal_175, true, false, true);
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

int func_51(var uParam0)
{
	if (!func_36(uParam0))
	{
		return 0;
	}
	if (func_104(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_105() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_53(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	func_106(uParam0);
	if (PAD::HAVE_CONTROLS_CHANGED(0))
	{
		vLocal_177 = { vLocal_180 /*3*/ };
		fLocal_176 = 0.0f;
		fLocal_218 = 0.0f;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		fVar1 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_LR")) * 4.5f);
		fVar2 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_UD")) * 4.5f);
		fVar0 = func_107(vLocal_180.z, (vLocal_177.z - fVar1));
		if (fVar0 > 30.0f)
		{
			vLocal_177.f_2 = (vLocal_180.z - 30.0f);
		}
		else if (fVar0 < -30.0f)
		{
			vLocal_177.f_2 = (vLocal_180.z - -30.0f);
		}
		else
		{
			vLocal_177.f_2 = (vLocal_177.z - fVar1);
		}
		fVar0 = func_107(vLocal_180.x, (vLocal_177.x - fVar2));
		if (fVar0 > 30.0f)
		{
			vLocal_177.x = (vLocal_180.x - 30.0f);
		}
		else if (fVar0 < -30.0f)
		{
			vLocal_177.x = (vLocal_180.x - -30.0f);
		}
		else
		{
			vLocal_177.x -= fVar2;
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_176 - 0.07f) > -10.0f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.6f);
					fLocal_176 -= (0.07f * 3.0f);
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.2f);
					fLocal_176 -= 0.07f;
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_176 + 0.07f) < 10.0f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.6f);
					fLocal_176 += (0.07f * 3.0f);
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.2f);
					fLocal_176 += 0.07f;
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_218 - 0.07f) > -10.0f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_177.x -= 0.6f;
					fLocal_218 -= (0.07f * 3.0f);
				}
				else
				{
					vLocal_177.x -= 0.2f;
					fLocal_218 -= 0.07f;
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_218 + 0.07f) < 10.0f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_177.x += 0.6f;
					fLocal_218 += (0.07f * 3.0f);
				}
				else
				{
					vLocal_177.x += 0.2f;
					fLocal_218 += 0.07f;
				}
			}
		}
	}
	if (bLocal_173)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_35, vLocal_170, 3167))
		{
			bLocal_174 = false;
		}
		else
		{
			bLocal_174 = true;
		}
		bLocal_173 = false;
	}
	if ((func_32(uParam0->f_1[7], 1) || func_35(Global_35, 0)) || bLocal_174)
	{
		if (func_35(Global_35, 0))
		{
		}
		else if (func_108(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_189 = 0;
		func_29(uParam0);
		func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", func_61());
		if (!func_36(&uLocal_185))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_37(&uLocal_185, 1);
		}
	}
	if (func_109(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_193[uParam0->f_87], func_61());
		}
	}
	if (func_109(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87--;
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_193[uParam0->f_87], func_61());
		}
	}
	uParam0->f_43 = { func_110(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2.0f, 2.0f, 2.0f) + Vector(1.0f, 0.0f, 0.0f) /*3*/ };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &(uParam0->f_43));
	if (bLocal_216 == 0)
	{
		if (func_109(uParam0->f_1[8], 1, 1))
		{
			bLocal_216 = true;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_111();
		}
	}
	if (bLocal_216 == 0)
	{
		if (func_109(uParam0->f_1[8], 0, 1))
		{
			bLocal_216 = true;
			uParam0->f_88--;
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_111();
		}
	}
	if (bLocal_216)
	{
		switch (iLocal_214)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 200)
				{
					iLocal_214 = 2;
				}
				break;
			case 2:
				func_112(uParam0);
				iLocal_214 = 3;
				iLocal_215 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 500)
				{
					iLocal_214 = 4;
					iLocal_215 = MISC::GET_GAME_TIMER();
					func_27();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 700)
				{
					iLocal_214 = 0;
					bLocal_216 = false;
				}
				break;
			default:
				break;
		}
	}
	func_101(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, vLocal_177, 50.0f, 0, 1, 1, 2, 0, 0);
}

void func_54(var uParam0)
{
	if (func_20(uParam0))
	{
		func_30(8);
		func_21(uParam0);
	}
	func_113(uParam0);
	func_114();
	func_115();
	uParam0->f_88 = 0;
	iLocal_214 = 0;
	bLocal_173 = true;
	bLocal_174 = false;
	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_PLAYER_CAMERA_MODE"));
}

bool func_55()
{
	return iLocal_205;
}

float func_56(var uParam0)
{
	if (!func_36(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_104(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_116() - uParam0->f_1);
}

void func_57()
{
	func_52(&uLocal_202);
	iLocal_205 = 0;
}

bool func_58()
{
	return Global_1357503;
}

void func_59(bool bParam0)
{
	if (bParam0)
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(true);
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		GRAPHICS::_0xEC3D8C228FE553D7(false);
	}
	else
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(false);
		ANIMSCENE::_REQUEST_PHOTO_MODE_DEFREEZE();
		GRAPHICS::_0xEC3D8C228FE553D7(true);
	}
}

char* func_60()
{
	return "facials@gen_male@portrait";
}

char* func_61()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_62()
{
	Global_1935496.f_29 = 0;
}

void func_63()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
	strcpy_s(&cLocal_27, 32, "");
	MISC::_INT_TO_STRING(iLocal_14, "%i", &cLocal_27);
	strcat_s(&cLocal_27, 32, " / ");
	strcpy_s(&cLocal_31, 32, "");
	MISC::_INT_TO_STRING(iLocal_15, "%i", &cLocal_31);
	strcat_s(&cLocal_27, 32, &cLocal_31);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}

bool func_64(int iParam0)
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

int func_65(int iParam0)
{
	return iParam0;
}

void func_66(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_67(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_102(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_69(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_70()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

int func_71(int iParam0)
{
	if (func_70())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;

	if (!func_117(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_118(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_73(int iParam0, int iParam1)
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
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
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

bool func_74(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_120(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
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
		if (!func_122(iParam0, 1))
		{
			return false;
		}
	}
	return func_123(iParam0, 0, bParam2) >= iParam1;
}

int func_75(var uParam0)
{
	return uParam0->f_108;
}

bool func_76()
{
	return Global_1935689.f_1;
}

int func_77(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_78(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_79(bool bParam0)
{
	if (bParam0)
	{
		func_124(4);
	}
	func_124(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

void func_80(var uParam0)
{
	*uParam0 = 1;
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_82(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	sVar0.f_0 = iParam4;
	sVar0.f_1 = iParam3;
	sVar0.f_2 = sParam1;
	sVar0.f_3 = sParam2;
	iVar4 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(uParam0, &sVar0, bParam5);
	return iVar4;
}

void func_83()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_36))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_36);
	}
}

int func_84()
{
	return Global_1894899.f_2;
}

bool func_85(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_86(int iParam0)
{
	char[] cVar0[8];

	if (!func_85(iParam0))
	{
		strcpy_s(&cVar0, 8, "UNK");
		return cVar0;
	}
	return Global_1888801[iParam0 /*35*/].f_22;
}

int func_87()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_89()
{
	return Global_1897952.f_41;
}

bool func_90(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	return "No State Label!";
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_125(iParam0, &iVar0, &iVar1);
	if (!func_126(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_127(iVar0, iVar1);
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_109 -= (uParam0->f_109 & iParam1);
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_64(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_65(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_128(iVar0);
	*uParam0 = 0;
}

void func_96(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_64(sLocal_47.f_1[iParam0]))
		{
			if (iParam0 == 9)
			{
				sLocal_47.f_1[iParam0] = func_130(func_129(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 8)
			{
				sLocal_47.f_1[iParam0] = func_130(func_129(iParam0), joaat("INPUT_CAMERA_POSE_PREV"), joaat("INPUT_CAMERA_POSE_NEXT"), 0);
			}
			else if (iParam0 == 3)
			{
				if (sLocal_47.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				sLocal_47.f_1[iParam0] = func_132(sVar0, func_131(iParam0), 2, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				sLocal_47.f_1[iParam0] = func_132(func_129(iParam0), func_131(iParam0), 2, 0, 0, 0, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				func_133(sLocal_47.f_1[iParam0], 11, 1, 1);
			}
			func_134(sLocal_47.f_1[iParam0], -857683846, 0, 1);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[sLocal_47.f_1[iParam0] /*18*/].f_3, true);
		}
	}
	else if (func_64(sLocal_47.f_1[iParam0]))
	{
		func_95(&(sLocal_47.f_1[iParam0]), 1, 1);
	}
}

bool func_97(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_98(var uParam0)
{
	func_135(uParam0, 0.0f);
}

bool func_99(int iParam0)
{
	int iVar0;

	iVar0 = func_136(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_100(var uParam0)
{
	fLocal_161 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_161 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 60.0f)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				uParam0->f_33.f_3 += (0.6f * 4.0f);
			}
			else
			{
				uParam0->f_33.f_3 += 0.6f;
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_19)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_19 = true;
			}
		}
		else if (bLocal_19)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_19 = false;
		}
	}
	else if (bLocal_19)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_19 = false;
	}
	if (fLocal_161 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 25.0f)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				uParam0->f_33.f_3 -= (0.6f * 4.0f);
			}
			else
			{
				uParam0->f_33.f_3 -= 0.6f;
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_20)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_20 = false;
		}
	}
	else if (bLocal_20)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_20 = false;
	}
}

void func_101(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_42 == 0)
	{
		if (func_41(uParam0->f_1[3]))
		{
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_43 = MISC::GET_GAME_TIMER();
			iLocal_42 = 1;
			iLocal_44 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_43) > 300 && iLocal_44 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = func_65(sLocal_47.f_1[3]);
			HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = func_65(sLocal_47.f_1[3]);
			HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar1 /*18*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_PAUSE_CAMERA_FOCUS(uParam0->f_32, uParam0->f_110);
		iLocal_44 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 850)
		{
			iLocal_42 = 0;
			iLocal_44 = 0;
		}
	}
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_103(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_67(iParam0, 1);
	func_68(iParam0, 1);
	func_69(iParam0, 128);
}

bool func_104(var uParam0)
{
	return func_97(*uParam0, 2);
}

int func_105()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_106(var uParam0)
{
	fLocal_161 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_161 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 90.0f)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				uParam0->f_33.f_3 += (0.9f * 4.0f);
			}
			else
			{
				uParam0->f_33.f_3 += 0.9f;
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_19)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_19 = true;
			}
		}
		else if (bLocal_19)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_19 = false;
		}
	}
	else if (bLocal_19)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_19 = false;
	}
	if (fLocal_161 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 30.0f)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				uParam0->f_33.f_3 -= (0.9f * 4.0f);
			}
			else
			{
				uParam0->f_33.f_3 -= 0.9f;
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_20)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_20 = false;
		}
	}
	else if (bLocal_20)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_20 = false;
	}
}

float func_107(float fParam0, float fParam1)
{
	float fVar0;

	fVar0 = ((fParam0 - fParam1) + 180.0f);
	fVar0 /= 360.0f;
	fVar0 = (((fVar0 - (float)BUILTIN::FLOOR(fVar0)) * 360.0f) - 180.0f);
	return fVar0;
}

int func_108(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_137(bParam1, bParam2, bParam3);
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

bool func_109(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

Vector3 func_110(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_111()
{
	bLocal_216 = true;
	iLocal_215 = MISC::GET_GAME_TIMER();
	iLocal_214 = 1;
	func_15();
}

void func_112(var uParam0)
{
	func_138(uParam0);
	switch (iLocal_206[uParam0->f_88])
	{
		case 0:
			func_139(Global_35);
			break;
		case 1:
			func_140(joaat("WORLD_HUMAN_STARE_STOIC"), "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_140(joaat("WORLD_HUMAN_STERNGUY_IDLES"), "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_140(joaat("WORLD_HUMAN_SMOKE"), "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_140(joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT"), "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			ENTITY::SET_ENTITY_HEADING(Global_35, (fLocal_217 + 180.0f));
			break;
		case 6:
			func_140(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

void func_113(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	fLocal_217 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	uParam0->f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) /*3*/ };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180.0f) /*3*/ };
	uParam0->f_77 = { vLocal_170 /*3*/ };
	uParam0->f_110 = 0;
	fLocal_176 = 0.0f;
	fLocal_218 = 0.5f;
	vLocal_177 = { uParam0->f_83 /*3*/ };
	vLocal_177.x += 1.0f;
	vLocal_180 = { vLocal_177 /*3*/ };
	uParam0->f_43.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_43.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		fVar0 = 50.0f;
		uParam0->f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_77, uParam0->f_83, fVar0, true, 2);
	}
	uParam0->f_33 = 25.0f;
	uParam0->f_33.f_1 = 2.0f;
	uParam0->f_33.f_2 = 128.0f;
	uParam0->f_33.f_3 = 30.0f;
	uParam0->f_33.f_4 = 30.0f;
	uParam0->f_33.f_5 = 90.0f;
	uParam0->f_33.f_6 = 1;
	uParam0->f_33.f_7 = 0;
	uParam0->f_33.f_8 = 1;
	uParam0->f_33.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
	CAM::_PAUSE_CAMERA_FOCUS(uParam0->f_32, uParam0->f_110);
	CAM::ALLOW_MOTION_BLUR_DECAY(uParam0->f_32, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_32, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_114()
{
	sLocal_193[0] = "portrait_normal";
	sLocal_193[1] = "portrait_happy";
	sLocal_193[2] = "portrait_pensive";
	sLocal_193[3] = "portrait_pensive_2";
	sLocal_193[4] = "portrait_relaxed";
	sLocal_193[5] = "portrait_angry";
	sLocal_193[6] = "portrait_angry_2";
	sLocal_193[7] = "portrait_annoyed";
}

void func_115()
{
	iLocal_206[0] = 0;
	iLocal_206[1] = 1;
	iLocal_206[2] = 2;
	iLocal_206[3] = 3;
	iLocal_206[4] = 4;
	iLocal_206[5] = 5;
	iLocal_206[6] = 6;
}

float func_116()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_117(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_118(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

bool func_119(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_121(int iParam0)
{
	Vector3 vVar0;

	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_122(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_141(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_142("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_143(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_144(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_145(iVar1);
				return true;
			}
			iVar3++;
		}
		func_145(iVar1);
	}
	return false;
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_141(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_146(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam2), iParam0, false);
	return iVar2;
}

void func_124(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_126(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_148(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_149(iParam0))
	{
		return false;
	}
	if (func_150(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_151(iParam0, 1)) || func_152((1 << 15)))
	{
		if (!func_151(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_153())
	{
		return false;
	}
	return true;
}

void func_127(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_128(int iParam0)
{
	if (!func_154(iParam0))
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

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "CAM_PUT_AWAY";
		case 0:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_FOCUS_LOCK";
		case 1:
			return "CAM_SELFIE";
		case 8:
			return "CAM_POSES";
		case 9:
			return "CAM_EXPRESSIONS";
		case 7:
			return "CAM_BACK";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	if (iParam0 == 6)
	{
		if (func_23())
		{
			return "CAM_SAVE_PHOTO";
		}
		else
		{
			return "CAM_TAKE_PHOTO";
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_130(char* sParam0, int iParam1, int iParam2, int iParam3)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_102(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_103(iVar1, iParam1, sParam0, 0, 3, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, (1 << 30), 0, 1065353216, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_CAMERA_BACK");
		case 0:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_DOF");
		case 1:
			return joaat("INPUT_CAMERA_SELFIE");
		case 4:
			return joaat("INPUT_CAMERA_ZOOM");
		case 8:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 9:
			return joaat("INPUT_CAMERA_POSE_PREV");
		case 6:
			return joaat("INPUT_CAMERA_TAKE_PHOTO");
		case 5:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		default:
			break;
	}
	return 0;
}

int func_132(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_102(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_103(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_64(iParam0))
	{
		return;
	}
	iVar0 = func_65(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_134(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_64(iParam0))
	{
		return;
	}
	iVar0 = func_65(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_135(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_116() - fParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_136(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_158(iParam0);
}

int func_137(bool bParam0, bool bParam1, bool bParam2)
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

void func_138(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_217);
}

void func_139(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::TASK_STAND_STILL(iParam0, -1);
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0, 0);
	}
}

void func_140(int iParam0, char* sParam1)
{
	iLocal_219 = TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vLocal_164, fLocal_217, 0.0f, 0.0f, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_219, 25, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_219, 23, true);
	TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_219, sParam1, -1, false, true, 0, false, 0.0f, false);
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_159(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_160(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_142(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_147(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_143(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_144(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_145(int iParam0)
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

int func_146(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_161(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_163(&sVar0, func_162(0));
	}
	if (!func_164(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_145(iVar18);
	return iVar19;
}

int func_147(bool bParam0)
{
	if (func_165() == -1)
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

bool func_148(int iParam0, int iParam1)
{
	if (func_165() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_149(int iParam0)
{
	if (func_165() != -1)
	{
		if (func_151(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_151(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_151(iParam0, (1 << 16)) && !func_151(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_151(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_151(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_151(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_152(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_153()
{
	return Global_1905944.f_5694;
}

bool func_154(int iParam0)
{
	return func_102(iParam0, 2);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_157(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_158(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_166(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_159(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_160(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
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

struct<18> /*144*/ func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (iParam0 != 0)
	{
		sVar0.f_0 = iParam0;
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

struct<4> /*32*/ func_162(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_168(joaat("CARRIED_WEAPONS"), func_167(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_168(joaat("CARRIED_WEAPONS"), func_167(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_168(joaat("CARRIED_WEAPONS"), func_167(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_163(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_164(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_147(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_165()
{
	return Global_1572887.f_12;
}

int func_166(int iParam0)
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

struct<4> /*32*/ func_167(bool bParam0)
{
	return func_168(joaat("CHARACTER"), func_169(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_168(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_120(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_147(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

struct<4> /*32*/ func_169()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

