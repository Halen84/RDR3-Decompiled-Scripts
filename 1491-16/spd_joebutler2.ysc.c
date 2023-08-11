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
	struct<284> /*2272*/ sLocal_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1419055257, -1914893189, -615159064, -260277067, 1689938120, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
#pragma endregion

void __SCRIPT()
{
	struct<11> /*88*/ sVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		while (true)
		{
			BUILTIN::WAIT(0);
			if (func_1(&(sLocal_14.f_158[0])))
			{
				func_2(&sLocal_14, 1);
			}
		}
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_3(&sLocal_14);
		func_4(&sLocal_14, 1);
		if ((((func_5(14, sLocal_14.f_158[0], 1, 1) && sLocal_14.f_0 > 2) && sLocal_14.f_0 < 49) || func_6(29, 1)) || func_7(&sLocal_14))
		{
			if (!func_8(sLocal_14.f_180, (1 << 10)))
			{
				if (sLocal_14.f_0 == 3 || sLocal_14.f_0 == 4)
				{
					func_10(&sLocal_14, &(sLocal_14.f_178), func_9(), 0, 1, 0);
				}
				else if (sLocal_14.f_0 == 50 || sLocal_14.f_0 == 51)
				{
					func_10(&sLocal_14, &(sLocal_14.f_178), func_11(), 0, 1, 0);
				}
				else if (sLocal_14.f_0 != 5)
				{
					func_10(&sLocal_14, &(sLocal_14.f_178), func_12(), 0, 1, 0);
				}
				else
				{
					func_10(&sLocal_14, &(sLocal_14.f_178), func_13(), 0, 1, 0);
				}
			}
			else
			{
				func_14(&sLocal_14);
				func_15(14, 1, &(sLocal_14.f_158[0]), &(sLocal_14.f_137), &(sLocal_14.f_189), sLocal_14.f_175, 1097859072, 0);
				func_16(&sLocal_14);
				func_17(&sLocal_14);
				func_18(&sLocal_14);
				func_19(&sLocal_14);
				func_20(sLocal_14.f_158[0], &(sLocal_14.f_180), 256, 14, sLocal_14.f_175);
				func_21(sLocal_14.f_158[0], &(sLocal_14.f_180), (1 << 11), (1 << 12), (1 << 13), "SPECIAL_PED_LIGHTWEIGHT_1_0", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "JoeBubble", "JoeConvo");
				func_22(&sLocal_14);
				switch (sLocal_14.f_0)
				{
					case 0:
						if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_178))
						{
							sLocal_14.f_178 = ANIMSCENE::_CREATE_ANIM_SCENE(func_23(), 0, func_24(), false, true);
						}
						if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_179))
						{
							sLocal_14.f_179 = ANIMSCENE::_CREATE_ANIM_SCENE(func_25(), 32, func_26(), false, true);
						}
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_178) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_179))
						{
							ANIMSCENE::LOAD_ANIM_SCENE(sLocal_14.f_178);
							ANIMSCENE::LOAD_ANIM_SCENE(sLocal_14.f_179);
							STREAMING::REQUEST_ANIM_DICT(func_27());
							STREAMING::REQUEST_ANIM_DICT(func_28());
							HUD::TEXT_BLOCK_REQUEST("SPJB");
							HUD::TEXT_BLOCK_REQUEST("SPJBAUD");
							HUD::TEXT_BLOCK_REQUEST("SPDEF");
							STREAMING::REQUEST_MODEL(sLocal_14.f_150, false);
							STREAMING::REQUEST_MODEL(sLocal_14.f_151, false);
							STREAMING::REQUEST_MODEL(sLocal_14.f_153, false);
							STREAMING::REQUEST_MODEL(sLocal_14.f_152, false);
							func_29(&sLocal_14);
							func_30(sLocal_14.f_163, "SP_JoeButler1_Block", 1, 0, 0, 0, -1082130432);
							POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(sLocal_14.f_165, 2500607, 0, 0, -1, -1, 10);
							POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(sLocal_14.f_165, 2238463, 0, 0, -1, -1, 0);
							sLocal_14.f_149 = func_32(14, 1, 9, func_31(14));
							if (!func_33(sLocal_14.f_149))
							{
							}
							if (func_34())
							{
								func_35(&(sLocal_14.f_1), Global_35, "JOHN", 0);
							}
							else
							{
								func_35(&(sLocal_14.f_1), Global_35, "ARTHUR", 0);
							}
							func_36(&(sLocal_14.f_283));
							func_37(&(sLocal_14.f_99));
							func_38(&(sLocal_14.f_99), 1);
							func_39(&(sLocal_14.f_99), 1);
							func_40(&(sLocal_14.f_99), 1);
							func_41(&(sLocal_14.f_99), 1);
							func_42(&(sLocal_14.f_99), 1);
							func_43(&(sLocal_14.f_99), 1);
							func_44(&(sLocal_14.f_99), 0);
							func_45(&(sLocal_14.f_99), 1);
							func_46(&(sLocal_14.f_99), 0);
							func_47(&(sLocal_14.f_99), 1);
							func_48(&(sLocal_14.f_99), 1);
							func_49(&(sLocal_14.f_99), 1);
							func_50(&(sLocal_14.f_99), 0);
							func_51(&(sLocal_14.f_99), 0);
							func_52(&(sLocal_14.f_99), 1);
							func_53(&(sLocal_14.f_99), 1);
							func_54(&(sLocal_14.f_99), 1);
							func_55(&(sLocal_14.f_99), 0);
							sLocal_14.f_182 = 9;
							if (func_33(sLocal_14.f_149))
							{
								if (!func_56(sLocal_14.f_149, 1))
								{
									func_57(&sLocal_14, 1);
								}
								else
								{
									func_57(&sLocal_14, 56);
								}
							}
						}
						break;
					case 1:
						PED::_RESERVE_AMBIENT_PEDS(1);
						if (((((((((((ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_14.f_178, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_14.f_179, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(func_27())) && STREAMING::HAS_ANIM_DICT_LOADED(func_28())) && HUD::TEXT_BLOCK_IS_LOADED("SPJB")) && HUD::TEXT_BLOCK_IS_LOADED("SPJBAUD")) && HUD::TEXT_BLOCK_IS_LOADED("SPDEF")) && STREAMING::HAS_MODEL_LOADED(sLocal_14.f_150)) && STREAMING::HAS_MODEL_LOADED(sLocal_14.f_151)) && STREAMING::HAS_MODEL_LOADED(sLocal_14.f_153)) && STREAMING::HAS_MODEL_LOADED(sLocal_14.f_152)) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1)
						{
							func_57(&sLocal_14, 2);
						}
						break;
					case 2:
						if (((func_58(&(sLocal_14.f_158[0]), sLocal_14.f_150, 1320.167f, -1291.738f, 75.23311f, 68.748f, 1, 0, 1) & func_59(&(sLocal_14.f_160), sLocal_14.f_151, 1320.96f, -1290.723f, 75.27775f)) & func_59(&(sLocal_14.f_162), sLocal_14.f_153, 1320.96f, -1290.723f, 75.27775f)) & func_59(&(sLocal_14.f_161), sLocal_14.f_152, 1321.58f, -1290.592f, 76.39468f))
						{
							if (func_60(sLocal_14.f_158[0], 0))
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(sLocal_14.f_158[0], "special_ped_group", 0.0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_158[0], true);
								func_35(&(sLocal_14.f_1), sLocal_14.f_158[0], "JOE_BUTLER", 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_14.f_158[0], 1320.167f, -1291.738f, 75.23311f, 68.748f, true, false, true);
								PED::SET_PED_CONFIG_FLAG(sLocal_14.f_158[0], 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
								PED::SET_PED_CONFIG_FLAG(sLocal_14.f_158[0], 130 /*PCF_DisableTalkTo*/, true);
								PED::SET_PED_CONFIG_FLAG(sLocal_14.f_158[0], 317 /*PCF_0x8E385F10*/, true);
								PED::SET_PED_CONFIG_FLAG(sLocal_14.f_158[0], 315 /*PCF_0xD38AEF95*/, true);
								PED::SET_PED_CONFIG_FLAG(sLocal_14.f_158[0], 153 /*PCF_0x23E3351E*/, true);
								PED::_0xFD3C31A2E45671E7(sLocal_14.f_158[0], 43312);
								PED::SET_PED_LASSO_HOGTIE_FLAG(sLocal_14.f_158[0], 0, false);
								func_61(sLocal_14.f_158[0], 1);
								PED::_SET_PED_KNOCKED_BY_ONE_HIT(sLocal_14.f_158[0], 5.0f);
								PED::_0x2E5B5D1F1453E08E(sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "JOE_BUTLER", sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "Cup", sLocal_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "COIN", sLocal_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "Crutch", sLocal_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "JOE_BUTLER", sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "Cup", sLocal_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "COIN", sLocal_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "ARTHUR", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "Crutch", sLocal_14.f_162, 0);
								func_62(&(sLocal_14.f_158[0]), &(sLocal_14.f_181), joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), 15.0f, 3600.0f);
								func_63(&sLocal_14, 0);
								PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), sLocal_14.f_158[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0.0f, 0.0f, 0.0f, 0, "JoeBubble");
								PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_167, sLocal_14.f_158[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
								if (!VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_168))
								{
									sVar0 = { func_64(5) /*11*/ };
									sLocal_14.f_168 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
									PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_168, sLocal_14.f_158[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
								}
								if (!VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_169))
								{
									sVar0 = { func_64(6) /*11*/ };
									sLocal_14.f_169 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
									PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_169, sLocal_14.f_158[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
									VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(sLocal_14.f_169, false);
									VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(sLocal_14.f_169, true);
								}
								if (!func_65(&(sLocal_14.f_172)))
								{
									sLocal_14.f_172 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(1320.674f, -1291.785f, 75.43612f, 1.25f, 1, 2, 0);
								}
								func_66(&(sLocal_14.f_180), (1 << 11));
								func_67(sLocal_14.f_158[0], 14);
								func_57(&sLocal_14, 4);
							}
						}
						break;
					case 6:
						if (func_8(sLocal_14.f_180, 1))
						{
							func_57(&sLocal_14, 49);
						}
						else if ((func_8(sLocal_14.f_180, 2) && func_8(sLocal_14.f_180, 4)) && !func_8(sLocal_14.f_180, 16))
						{
							if (func_68(&(sLocal_14.f_179)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "JOE_BUTLER", sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "Cup", sLocal_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "COIN", sLocal_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "ARTHUR", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "Crutch", sLocal_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_179, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_179, "internal_loop_end", false, false);
								if (func_10(&sLocal_14, &(sLocal_14.f_179), func_69(), 1, 0, 0))
								{
									ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_178, 0);
									func_57(&sLocal_14, 43);
								}
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_14.f_158[0], -1527527524))
						{
							if (!func_70(&(sLocal_14.f_131)))
							{
								sLocal_14.f_174 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(2, 3));
								func_71(&(sLocal_14.f_131), 0.0f);
							}
							else if (func_72(&(sLocal_14.f_131)) > sLocal_14.f_174)
							{
								func_73(&sLocal_14, &(sLocal_14.f_182));
								func_74(&(sLocal_14.f_131));
							}
						}
						break;
					case 4:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_24(), 1, 0, 0))
						{
							func_57(&sLocal_14, 37);
						}
						if (func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 38:
						if (func_8(sLocal_14.f_180, 1))
						{
							func_57(&sLocal_14, 49);
						}
						else if (func_8(sLocal_14.f_180, 16))
						{
							if (func_68(&(sLocal_14.f_178)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "JOE_BUTLER", sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "Cup", sLocal_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "COIN", sLocal_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "Crutch", sLocal_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_178, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_178, "internal_loop_end", false, false);
								if (func_10(&sLocal_14, &(sLocal_14.f_178), func_13(), 0, 1, 0))
								{
									ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_179, 0);
									func_57(&sLocal_14, 5);
								}
							}
						}
						else if (func_8(sLocal_14.f_180, 4))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_14.f_158[0], -1527527524))
							{
								func_57(&sLocal_14, 42);
							}
						}
						break;
					case 7:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_75(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 8:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_76(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 9:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_77(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 10:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_78(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 11:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_79(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 12:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_80(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 13:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_81(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 14:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_82(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 15:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_83(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 16:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_84(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 17:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_85(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 18:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_86(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 19:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_87(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 20:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_88(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 21:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_89(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 22:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_90(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 23:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_91(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 24:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_92(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 25:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_93(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 26:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_94(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 27:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_95(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 28:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_96(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 29:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_97(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 30:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_98(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 31:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_99(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 32:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_100(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 33:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_101(), 1, 0, 1))
						{
							sLocal_14.f_183++;
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 34:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_102(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 35:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_103(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 36:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_104(), 1, 0, 1))
						{
							sLocal_14.f_183 = (1 + sLocal_14.f_183);
							func_57(&sLocal_14, 37);
						}
						if ((func_8(sLocal_14.f_180, 4) && !func_8(sLocal_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_158[0])))
						{
							func_57(&sLocal_14, 37);
						}
						break;
					case 37:
						if ((func_8(sLocal_14.f_180, 2) && func_8(sLocal_14.f_180, 4)) && !func_8(sLocal_14.f_180, 16))
						{
							if (func_68(&(sLocal_14.f_179)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "JOE_BUTLER", sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "Cup", sLocal_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "COIN", sLocal_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "ARTHUR", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_179, "Crutch", sLocal_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_179, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_179, "internal_loop_end", false, false);
								func_10(&sLocal_14, &(sLocal_14.f_179), func_69(), 1, 0, 0);
								ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_178, 0);
								func_57(&sLocal_14, 43);
							}
						}
						else if (func_10(&sLocal_14, &(sLocal_14.f_178), func_105(), 0, 1, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0))
						{
							func_57(&sLocal_14, 6);
						}
						break;
					case 42:
						func_106(14, 2);
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_14.f_179, func_26()) && (ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_14.f_179) >= 0.6f || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_14.f_179, "s_base_end", true)))
						{
							func_107(&(sLocal_14.f_180), (1 << 10));
							func_108(14, (1 << 15));
							func_107(&(sLocal_14.f_180), (1 << 12));
							HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
							func_109(&(sLocal_14.f_190), 0);
							func_110(&sLocal_14, 0);
							func_111(&(sLocal_14.f_211[0 /*17*/]), 0, 0);
							func_111(&(sLocal_14.f_211[0 /*17*/]), 0, 0);
						}
						if (func_8(sLocal_14.f_180, 4))
						{
							if (func_10(&sLocal_14, &(sLocal_14.f_179), func_26(), 1, 0, 1))
							{
								func_112(&(sLocal_14.f_1), "SPJB_STILLHERE", sLocal_14.f_158[0], Global_35, 0, 0, 1, 1);
								if (!func_8(sLocal_14.f_180, 16))
								{
									func_66(&(sLocal_14.f_180), 16);
								}
								func_57(&sLocal_14, 43);
							}
						}
						break;
					case 43:
						if (func_8(sLocal_14.f_180, 16))
						{
							if (func_68(&(sLocal_14.f_178)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "JOE_BUTLER", sLocal_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "Cup", sLocal_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "COIN", sLocal_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_178, "Crutch", sLocal_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_178, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_178, "internal_loop_end", false, false);
								func_10(&sLocal_14, &(sLocal_14.f_178), func_13(), 0, 1, 0);
								ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_179, 0);
								func_57(&sLocal_14, 5);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_164, true, 0) && !func_8(sLocal_14.f_180, 16))
						{
						}
						else
						{
							func_10(&sLocal_14, &(sLocal_14.f_179), func_26(), 1, 0, 0);
							func_57(&sLocal_14, 38);
						}
						break;
					case 5:
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_13(), 0, 1, 0))
						{
							func_57(&sLocal_14, 3);
						}
						break;
					case 3:
						func_113(&sLocal_14);
						if (func_10(&sLocal_14, &(sLocal_14.f_178), func_9(), 0, 1, 0))
						{
						}
						break;
					case 50:
						if (func_8(sLocal_14.f_180, (1 << 15)))
						{
							if (func_10(&sLocal_14, &(sLocal_14.f_178), func_114(), 0, 1, 0))
							{
								func_57(&sLocal_14, 51);
							}
						}
						else if (func_10(&sLocal_14, &(sLocal_14.f_178), func_115(), 0, 1, 0))
						{
							func_57(&sLocal_14, 51);
						}
						break;
					case 51:
						func_116(&sLocal_14);
						break;
					case 48:
						break;
					case 49:
						break;
					case 56:
						break;
					case 57:
						break;
					default:
						break;
				}
				if (func_33(sLocal_14.f_149))
				{
					switch (sLocal_14.f_0)
					{
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
						case 36:
						case 37:
						case 42:
						case 43:
						case 48:
							break;
						case 38:
							break;
						case 49:
							break;
						case 56:
							func_106(14, 2);
							func_2(&sLocal_14, 1);
							break;
						case 57:
							break;
					}
				}
			}
		}
	}
}

bool func_1(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 1 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != (1 << 11))
	{
		return true;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	return false;
}

void func_2(int iParam0, bool bParam1)
{
	func_117(14);
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_155))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_155);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_156))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_156);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_157))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_157);
	}
	func_118(&(iParam0->f_283));
	if (func_33(iParam0->f_149) && (func_119(iParam0->f_149) || func_120(iParam0->f_149)))
	{
		func_121(iParam0->f_149, 0, 2);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_178, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_179, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_179, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
	}
	func_122(0);
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_163))
	{
		func_123(iParam0->f_163);
		VOLUME::DELETE_VOLUME(iParam0->f_163);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_165))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_165);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_165);
		VOLUME::DELETE_VOLUME(iParam0->f_165);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_164))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_164);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_164);
		VOLUME::DELETE_VOLUME(iParam0->f_164);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_166))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_166);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_167);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_168))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_168);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_169))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_169);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_170);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[14 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[14 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[14 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[14 /*638*/][3 /*48*/].f_47);
	}
	if (bParam1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_178))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_178);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_179))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_179);
		}
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_158[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0.0f);
				PED::_SET_REMOVE_PED_NETWORKED(iParam0->f_158[0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_158[0]));
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 153 /*PCF_0x23E3351E*/, false);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0.0f);
			PED::DELETE_PED(&(iParam0->f_158[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_160))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_160));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_161))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_161));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_162))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_162));
		}
		if (func_65(&(iParam0->f_172)))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(iParam0->f_172), 1);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "JoeBubble");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3(int iParam0)
{
	if ((*iParam0 >= 49 && *iParam0 <= 51) || func_6(29, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		if (!func_60(iParam0->f_158[0], 0))
		{
			func_2(iParam0, 1);
			func_107(&(iParam0->f_180), (1 << 10));
			func_108(14, (1 << 15));
			func_107(&(iParam0->f_180), (1 << 12));
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
			func_124(&(iParam0->f_158[0]));
			func_125(&(iParam0->f_211), 1, 1, 1, 0);
			func_57(iParam0, 49);
		}
		else if (((*iParam0 >= 2 && *iParam0 < 49) && func_126(iParam0->f_158[0], 0, &(iParam0->f_99), &(iParam0->f_127), 0, iParam0->f_175)) || PED::_GET_LASSO_TARGET(Global_35) == iParam0->f_158[0])
		{
			iParam0->f_282 = 1;
			if (!func_68(&(iParam0->f_178)))
			{
				return;
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop", false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop_end", false, false);
			}
			if (iParam0->f_127 == (1 << 11) || iParam0->f_127 == 2)
			{
				PED::_0x2E5B5D1F1453E08E(iParam0->f_158[0], 0);
				func_2(iParam0, 0);
				func_107(&(iParam0->f_180), (1 << 10));
				func_108(14, (1 << 15));
				func_107(&(iParam0->f_180), (1 << 12));
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				func_57(iParam0, 49);
			}
			else
			{
				if (*iParam0 == 3)
				{
					func_66(&(iParam0->f_180), (1 << 15));
				}
				else if (*iParam0 == 5)
				{
					if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_178) > 0.29f)
					{
						func_66(&(iParam0->f_180), (1 << 15));
					}
				}
				else if (*iParam0 == 4)
				{
					if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_178) < 0.1f)
					{
						func_66(&(iParam0->f_180), (1 << 15));
					}
				}
				func_107(&(iParam0->f_180), (1 << 10));
				func_108(14, (1 << 15));
				func_107(&(iParam0->f_180), (1 << 12));
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				func_57(iParam0, 50);
			}
		}
	}
}

void func_4(int iParam0, int iParam1)
{
	if (!func_60(Global_35, 0))
	{
		func_2(iParam0, 1);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[14 /*638*/][iParam1 /*48*/].f_47, true, 0))
	{
		if (!func_70(&(iParam0->f_128)))
		{
			func_127(&(iParam0->f_128), 0);
		}
		else if (func_72(&(iParam0->f_128)) > 5.0f)
		{
			func_74(&(iParam0->f_128));
			func_2(iParam0, 1);
		}
	}
	else if (func_128(14, iParam1, &(iParam0->f_283), iParam0->f_158[0]))
	{
		if (func_129(&(iParam0->f_283)))
		{
			func_2(iParam0, 1);
		}
		else if (*iParam0 < 38 || *iParam0 > 47)
		{
			func_130(iParam0);
		}
	}
}

bool func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_131())
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
		if (func_132(0) == 7 || func_133())
		{
			return true;
		}
	}
	if (func_134(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 10)))
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0, int iParam1)
{
	if (!func_135(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15768[iParam0] & iParam1) != 0;
}

bool func_7(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		return false;
	}
	if (func_136(Global_35, iParam0->f_170, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_8(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

char[] func_9()
{
	return "pl_sit_loop_base";
}

bool func_10(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0->f_282)
	{
		case 0:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
			else
			{
				iParam0->f_282 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar0 && !bVar1)
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
			}
			if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			if (bVar0)
			{
				iParam0->f_282 = 2;
			}
			break;
		case 2:
			if (bParam5)
			{
				if (!func_137(&(iParam0->f_158[0]), 50.0f, iParam0->f_175))
				{
					return false;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar1 && bVar0)
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				return false;
			}
			else if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base_end", true) && !bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base", true) && bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_sit_loop_base", true) && bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_cower_loop_base", true) && bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			break;
	}
	return false;
}

char[] func_11()
{
	return "pl_cower_loop_base";
}

char[] func_12()
{
	return "pbl_base_reset";
}

char[] func_13()
{
	return "pl_stand_to_sit";
}

void func_14(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]) && ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!func_70(&(iParam0->f_140)))
	{
		func_71(&(iParam0->f_140), 0.0f);
	}
	else if (func_139(&(iParam0->f_140)) >= 1000)
	{
		iParam0->f_175 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_158[0], true, false), func_140(PLAYER::GET_PLAYER_INDEX()), true);
		func_74(&(iParam0->f_140));
	}
}

int func_15(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_141();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0.0f)
	{
		if (!func_142(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_70(uParam3))
	{
		func_71(uParam3, 0.0f);
	}
	else if (func_72(uParam3) >= 2.0f)
	{
		if (!func_143(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_144(iParam0);
			*uParam4 = 1;
			func_74(uParam3);
			return 1;
		}
		else
		{
			func_144(iParam0);
			*uParam4 = 1;
			func_74(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	if ((((((*iParam0 <= 2 || *iParam0 >= 49) || *iParam0 == 42) || *iParam0 == 44) || *iParam0 == 46) || *iParam0 == 3) || *iParam0 == 5)
	{
		if ((iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0)) || func_145(&(iParam0->f_211[1 /*17*/]), 1, 0))
		{
			func_109(&(iParam0->f_190), 0);
			func_111(&(iParam0->f_211[0 /*17*/]), 0, 0);
			func_111(&(iParam0->f_211[1 /*17*/]), 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (func_8(iParam0->f_180, 4))
	{
		if ((iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0)) || func_145(&(iParam0->f_211[1 /*17*/]), 1, 0))
		{
			func_109(&(iParam0->f_190), 0);
			func_111(&(iParam0->f_211[0 /*17*/]), 0, 0);
			func_111(&(iParam0->f_211[1 /*17*/]), 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_164))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	if (!func_8(iParam0->f_180, 4))
	{
		if (!func_8(iParam0->f_180, 2))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_164, true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (iParam0->f_246 != 2 || !func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
				{
					func_109(&(iParam0->f_190), 0);
					func_63(iParam0, 1);
					func_111(&(iParam0->f_211[0 /*17*/]), 1, 0);
					func_111(&(iParam0->f_211[1 /*17*/]), 1, 0);
					iParam0->f_246 = 2;
				}
				func_66(&(iParam0->f_180), 2);
			}
			else if (iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				func_109(&(iParam0->f_190), 0);
				func_111(&(iParam0->f_211[0 /*17*/]), 0, 0);
				func_111(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_164, true, 0))
		{
			if (iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				func_109(&(iParam0->f_190), 0);
				func_111(&(iParam0->f_211[0 /*17*/]), 0, 0);
				func_111(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if ((PED::IS_PED_ON_MOUNT(Global_35) || func_146(&(iParam0->f_158[0]), &(iParam0->f_157), 1071644672, 1074790400)) || func_147(&(iParam0->f_158[0]), &(iParam0->f_156), 1071644672, 1074790400))
		{
			if (iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				func_109(&(iParam0->f_190), 0);
				func_111(&(iParam0->f_211[0 /*17*/]), 0, 0);
				func_111(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (iParam0->f_246 != 2 || !func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
		{
			func_63(iParam0, 1);
			func_111(&(iParam0->f_211[0 /*17*/]), 1, 0);
			func_111(&(iParam0->f_211[1 /*17*/]), 1, 0);
			iParam0->f_246 = 2;
		}
	}
	switch (func_149(&(iParam0->f_158[0]), &(iParam0->f_190), 15.0f, &(iParam0->f_211), 0.0f, 2, 0, "", func_148(iParam0->f_246, 0, 0), 0, 0, 2, -1082130432))
	{
		case 0:
			if (!func_8(iParam0->f_180, 4))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				func_150(iParam0->f_158[0], iVar0);
				func_151();
				func_152(14, &(iParam0->f_158[0]), &(iParam0->f_180), 64);
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				func_153(Global_35, "GREET_GENERAL", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_158[0], 0, 0, 0, 1);
				func_154(14);
				func_66(&(iParam0->f_180), (1 << 12));
				func_66(&(iParam0->f_180), 4);
			}
			break;
		case 1:
			if (!func_8(iParam0->f_180, 4))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				func_150(iParam0->f_158[0], iVar1);
				func_151();
				func_152(14, &(iParam0->f_158[0]), &(iParam0->f_180), 64);
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				sVar2 = { func_155() /*2*/ };
				func_153(Global_35, sVar2.f_0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), iParam0->f_158[0], 0, 0, sVar2.f_1, 1);
				func_154(14);
				func_66(&(iParam0->f_180), (1 << 12));
				func_66(&(iParam0->f_180), 4);
			}
			break;
	}
}

void func_17(int iParam0)
{
	if ((((!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0])) && func_8(iParam0->f_180, 4)) && !func_8(iParam0->f_180, 16)) && !func_8(iParam0->f_180, 32))
	{
		func_156(&(iParam0->f_164), &(iParam0->f_155), &(iParam0->f_188));
		func_122(1);
		if (!func_8(iParam0->f_180, (1 << 10)))
		{
			func_66(&(iParam0->f_180), (1 << 10));
			func_157(14, (1 << 15));
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
		}
		if (func_159(func_158(Global_35, 0, 1, 0)) || func_159(func_158(Global_35, 1, 1, 0)))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			return;
		}
		if (!func_160())
		{
			return;
		}
		if (func_161(&Global_35, 1319.544f, -1291.12f, 76.1169f, -115.09f, &(iParam0->f_281), 20000, 1056964608, 1092616192))
		{
			if (!func_8(iParam0->f_180, 32))
			{
				func_122(0);
				func_66(&(iParam0->f_180), 32);
			}
		}
	}
}

void func_18(int iParam0)
{
	if (func_8(iParam0->f_180, 128) && iParam0->f_184 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 36)
	{
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_178) >= 0.8f)
		{
			return;
		}
		if (iParam0->f_183 < 2)
		{
			if (func_162(&(iParam0->f_158[0]), &(iParam0->f_187), &(iParam0->f_143), &(iParam0->f_184), 3, 0, 7000, 0))
			{
				func_66(&(iParam0->f_180), 128);
			}
		}
	}
}

void func_19(int iParam0)
{
	if (func_8(iParam0->f_180, (1 << 10)))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		func_163();
		func_164(&(iParam0->f_211));
		func_165();
		func_166(Global_35);
		func_166(iParam0->f_158[0]);
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_167(iParam3);
	if (fParam4 == 0.0f)
	{
		if (func_142(iParam0, Global_35, 15.0f, 1))
		{
			if (!func_168(*uParam1, iParam2))
			{
				if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
				{
					func_169(uParam1, iParam2);
				}
			}
		}
		else if (func_168(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_170(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15.0f)
	{
		if (!func_168(*uParam1, iParam2))
		{
			if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
			{
				func_169(uParam1, iParam2);
			}
		}
	}
	else if (func_168(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_170(uParam1, iParam2);
	}
}

void func_21(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_168(*uParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (func_168(*uParam1, iParam3))
	{
		if (!func_168(*uParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0.0f, 0.0f, 0.0f, 0, sParam8);
			}
			func_169(uParam1, iParam4);
		}
	}
	else if (func_168(*uParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0.0f, 0.0f, 0.0f, 0, sParam7);
		}
		func_170(uParam1, iParam4);
	}
}

void func_22(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0->f_158[0], 0, 1);
}

char* func_23()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_1@ig_1";
}

char[] func_24()
{
	return "pl_sit_to_stand";
}

char* func_25()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_3@ig_3";
}

char[] func_26()
{
	return "pbl_Interactive01";
}

char* func_27()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig1";
}

char* func_28()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig3";
}

void func_29(int iParam0)
{
	struct<11> /*88*/ sVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_163))
	{
		sVar0 = { func_64(0) /*11*/ };
		iParam0->f_163 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_164))
	{
		sVar0 = { func_64(1) /*11*/ };
		iParam0->f_164 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_165))
	{
		sVar0 = { func_64(2) /*11*/ };
		iParam0->f_165 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_166))
	{
		sVar0 = { func_64(3) /*11*/ };
		iParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		sVar0 = { func_64(4) /*11*/ };
		iParam0->f_167 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		sVar0 = { func_64(7) /*11*/ };
		iParam0->f_170 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(sVar0.f_10);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0->f_170, sVar0.f_1, sVar0.f_4, sVar0.f_7);
		sVar0 = { func_64(8) /*11*/ };
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iParam0->f_170, sVar0.f_1, sVar0.f_4, sVar0.f_7);
	}
}

int func_30(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_171(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return joaat("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_172())
	{
		iVar2 = func_172();
	}
	iVar5 = func_173(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_174(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_174(iVar6) == 0)
			{
				return func_175(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_174(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_174(iVar6) == 0)
			{
				return func_175(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_175(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_33(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_34()
{
	if (func_176() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_177(uParam0, iParam1, sParam2))
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

void func_36(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_37(var uParam0)
{
	func_42(uParam0, 0);
	func_41(uParam0, 0);
	func_38(uParam0, 1);
	func_53(uParam0, 1);
	func_178(uParam0, 0);
	func_49(uParam0, 1);
	func_179(uParam0, 1, 1, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 256);
	}
	else
	{
		func_181(&(uParam0->f_1), 256);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 4);
	}
	else
	{
		func_181(&(uParam0->f_1), 4);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 2);
	}
	else
	{
		func_181(&(uParam0->f_1), 2);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 11));
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 14));
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 1);
	}
	else
	{
		func_181(&(uParam0->f_1), 1);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 17));
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 128);
	}
	else
	{
		func_180(uParam0, 128);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 4);
	}
	else
	{
		func_180(uParam0, 4);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 8);
	}
	else
	{
		func_181(&(uParam0->f_1), 8);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 32);
	}
	else
	{
		func_180(uParam0, 32);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 256);
	}
	else
	{
		func_180(uParam0, 256);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 2);
	}
	else
	{
		func_180(uParam0, 2);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 10));
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 16);
	}
	else
	{
		func_181(&(uParam0->f_1), 16);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 16);
	}
	else
	{
		func_180(uParam0, (1 << 26));
		func_180(uParam0, 16);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), (1 << 19));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 19));
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, (1 << 19));
	}
	else
	{
		func_180(uParam0, (1 << 19));
	}
}

bool func_56(int iParam0, bool bParam1)
{
	switch (func_182(iParam0))
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

void func_57(int iParam0, int iParam1)
{
	iParam0->f_282 = 0;
	*iParam0 = iParam1;
}

int func_58(var uParam0, int iParam1, Vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_183(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_183(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, int iParam1, Vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_60(int iParam0, int iParam1)
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
	if (func_8(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_8(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_8(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_61(int iParam0, bool bParam1)
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

void func_62(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
}

void func_63(int iParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (bParam1)
	{
		sVar0.f_0 = "SPD_UC_GRT";
		sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	else
	{
		sVar0.f_0 = "SPD_UC_GRT";
		sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	sVar2.f_0 = "SPD_UC_ANT";
	sVar2.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
	func_184(&(iParam0->f_211[0 /*17*/]), sVar0.f_0, "", sVar0.f_1, 0, 0, 0, 1, 0);
	func_184(&(iParam0->f_211[1 /*17*/]), sVar2.f_0, "", sVar2.f_1, 0, 0, 0, 1, 0);
}

struct<11> /*88*/ func_64(int iParam0)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 1320.787f, -1291.887f, 75.307f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 55.0f, 55.0f, 55.0f /*3*/ };
			sVar0.f_10 = "RandomEventBlock";
			break;
		case 1:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1318.473f, -1290.612f, 84.303f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, -25.67596f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "Trigger";
			break;
		case 2:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 1321.154f, -1291.387f, 79.97336f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 65.0f /*3*/ };
			sVar0.f_7 = { 3.0f, 6.0f, 10.0f /*3*/ };
			sVar0.f_10 = "StayAway";
			break;
		case 3:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1316.051f, -1289.458f, 78.75141f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 155f /*3*/ };
			sVar0.f_7 = { 6.0f, 8.0f, 6.0f /*3*/ };
			sVar0.f_10 = "LookIKVolume";
			break;
		case 4:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1319.544f, -1291.433f, 84.30341f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "Focus";
			break;
		case 5:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1320.894f, -1291.958f, 76.3277f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.0f, 1.0f, 10.0f /*3*/ };
			sVar0.f_10 = "Grief";
			break;
		case 6:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1320.894f, -1291.958f, 76.3277f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.85f, 1.85f, 10.0f /*3*/ };
			sVar0.f_10 = "Grief";
			break;
		case 7:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 1325.705f, -1322.965f, 76.01214f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 74.99999f /*3*/ };
			sVar0.f_7 = { 11.0f, 12.0f, 9.0f /*3*/ };
			sVar0.f_10 = "Gunsmith";
			Jump @655; // curOff = 595
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1320.371f, -1318.493f, 78.10471f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 3.0f /*3*/ };
			sVar0.f_10 = "Gunsmith2";
			return sVar0;
		}

bool func_65(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_66(var uParam0, int iParam1)
{
	func_169(uParam0, iParam1);
}

void func_67(int iParam0, int iParam1)
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

bool func_68(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

char[] func_69()
{
	return "pbl_base_reset";
}

bool func_70(var uParam0)
{
	return func_185(*uParam0, 1);
}

void func_71(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_186() - fParam1);
	func_187(uParam0, 1);
	func_188(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

float func_72(var uParam0)
{
	if (!func_70(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_189(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_186() - uParam0->f_1);
}

void func_73(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			*uParam1++;
			func_57(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			func_57(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 32);
			}
			else
			{
				func_57(iParam0, 9);
			}
			break;
		case 3:
			*uParam1++;
			func_57(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			func_57(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 34);
			}
			else
			{
				func_57(iParam0, 12);
			}
			break;
		case 6:
			*uParam1++;
			func_57(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			func_57(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			func_57(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			func_57(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			func_57(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			func_57(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			func_57(iParam0, 19);
			break;
		case 13:
			*uParam1++;
			func_57(iParam0, 20);
			break;
		case 14:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 14);
			}
			else
			{
				func_57(iParam0, 21);
			}
			break;
		case 15:
			*uParam1++;
			func_57(iParam0, 22);
			break;
		case 16:
			*uParam1++;
			func_57(iParam0, 23);
			break;
		case 17:
			*uParam1++;
			func_57(iParam0, 24);
			break;
		case 18:
			*uParam1++;
			func_57(iParam0, 25);
			break;
		case 19:
			*uParam1++;
			func_57(iParam0, 26);
			break;
		case 20:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 17);
			}
			else
			{
				func_57(iParam0, 27);
			}
			break;
		case 21:
			*uParam1++;
			func_57(iParam0, 28);
			break;
		case 22:
			*uParam1++;
			func_57(iParam0, 29);
			break;
		case 23:
			*uParam1++;
			func_57(iParam0, 30);
			break;
		case 24:
			*uParam1++;
			func_57(iParam0, 31);
			break;
		case 25:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 22);
			}
			else
			{
				func_57(iParam0, 32);
			}
			break;
		case 26:
			*uParam1++;
			func_57(iParam0, 33);
			break;
		case 27:
			*uParam1++;
			func_57(iParam0, 34);
			break;
		case 28:
			*uParam1++;
			func_57(iParam0, 35);
			break;
		case 29:
			*uParam1 = 0;
			func_57(iParam0, 36);
			break;
		case 30:
			func_57(iParam0, 37);
			break;
		default:
			break;
	}
}

void func_74(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

char[] func_75()
{
	return "pbl_P10_Loop01";
}

char[] func_76()
{
	return "pbl_P10_loop02";
}

char[] func_77()
{
	return "pbl_P11_T01_Loop01";
}

char[] func_78()
{
	return "pbl_P1_T01_Loop01";
}

char[] func_79()
{
	return "pbl_P11_T01_Loop02";
}

char[] func_80()
{
	return "pbl_P11_T02_Loop01";
}

char[] func_81()
{
	return "pbl_P8_T03_Loop03";
}

char[] func_82()
{
	return "pbl_P1_T02_Loop01";
}

char[] func_83()
{
	return "pbl_P1_T01_Loop02";
}

char[] func_84()
{
	return "pbl_P1_T02_Loop02";
}

char[] func_85()
{
	return "pbl_P8_T03_Loop01";
}

char[] func_86()
{
	return "pbl_P8_T03_Loop02";
}

char[] func_87()
{
	return "pbl_P1_T02_Loop03";
}

char[] func_88()
{
	return "pbl_P1_T01_Loop03";
}

char[] func_89()
{
	return "pbl_P2_Loop02";
}

char[] func_90()
{
	return "pbl_P3_Loop01";
}

char[] func_91()
{
	return "pbl_P4_Loop01";
}

char[] func_92()
{
	return "pbl_P1_T01_Loop04";
}

char[] func_93()
{
	return "pbl_P4_T03_Loop02";
}

char[] func_94()
{
	return "pbl_P5_Loop01";
}

char[] func_95()
{
	return "pbl_P5_Loop02";
}

char[] func_96()
{
	return "pbl_P2_Loop01";
}

char[] func_97()
{
	return "pbl_P1_T01_Loop05";
}

char[] func_98()
{
	return "pbl_P6_T02_Loop01";
}

char[] func_99()
{
	return "pbl_P6_T03_Loop01";
}

char[] func_100()
{
	return "pbl_P7_Loop01";
}

char[] func_101()
{
	return "pbl_P1_T01_Loop06";
}

char[] func_102()
{
	return "pbl_P8_T05_Loop01";
}

char[] func_103()
{
	return "pbl_P9_Loop01";
}

char[] func_104()
{
	return "pbl_P9_Loop02";
}

char[] func_105()
{
	return "pbl_base_reset";
}

void func_106(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_107(var uParam0, int iParam1)
{
	func_170(uParam0, iParam1);
}

void func_108(int iParam0, int iParam1)
{
	func_190(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 0);
}

void func_109(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_74(&(iParam0->f_18));
}

void func_110(int iParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (bParam1)
	{
		sVar0.f_0 = "JB1_UC_GIVE";
		sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	else
	{
		sVar0.f_0 = "SPD_UC_GRT";
		sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	sVar2.f_0 = "SPD_UC_ANT";
	sVar2.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
	func_191(&(iParam0->f_211[0 /*17*/]), sVar0.f_0, 100, "", sVar0.f_1, 0, 0, 0, 1);
	func_184(&(iParam0->f_211[1 /*17*/]), sVar2.f_0, "", sVar2.f_1, 0, 0, 0, 1, 0);
}

void func_111(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_192(iParam0, 13))
	{
		func_193(iParam0, 0);
	}
	else
	{
		func_194(iParam0, 0);
	}
	if (func_195(iParam0->f_6))
	{
		if (bParam2)
		{
			func_196(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_112(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	Vector3 vVar0[24];
	int iVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_197(iParam2, iParam3, 1, 1) < 70.0f || bParam5))
	{
		strcpy_s(&cVar0, 24, sParam1);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_197(iParam2, iParam3, 1, 1) < 25.0f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_198(&uLocal_0);
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
		{
			if (func_199(sParam1))
			{
				return 1;
			}
		}
		else if (func_200(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_113(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	if (((!func_8(iParam0->f_180, 16) || iParam0->f_175 > 10.0f) || func_8(iParam0->f_180, (1 << 14))) || func_201(Global_35, 1))
	{
		if (func_70(&(iParam0->f_146)))
		{
			func_74(&(iParam0->f_146));
		}
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_158[0]))
	{
		if (func_70(&(iParam0->f_146)))
		{
			func_74(&(iParam0->f_146));
		}
		return;
	}
	if (!func_70(&(iParam0->f_146)))
	{
		func_71(&(iParam0->f_146), 0.0f);
	}
	else if (func_139(&(iParam0->f_146)) >= 12000)
	{
		func_74(&(iParam0->f_146));
		func_153(iParam0->f_158[0], "PLAYER_STILL_HANGING", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_186++;
		if (!func_8(iParam0->f_180, (1 << 14)) && iParam0->f_186 >= 2)
		{
			func_66(&(iParam0->f_180), (1 << 14));
		}
	}
}

char[] func_114()
{
	return "pbl_sit_to_cower";
}

char[] func_115()
{
	return "pl_enter_cower";
}

void func_116(int iParam0)
{
	if (func_6(29, 1) || iParam0->f_185 >= 2)
	{
		return;
	}
	if (!func_70(&(iParam0->f_131)))
	{
		iParam0->f_174 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(8, 12));
		func_71(&(iParam0->f_131), 0.0f);
	}
	else if (func_72(&(iParam0->f_131)) > iParam0->f_174)
	{
		func_153(iParam0->f_158[0], "GENERIC_FRIGHTENED_HIGH", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_185++;
		func_71(&(iParam0->f_131), 0.0f);
		func_74(&(iParam0->f_131));
	}
}

void func_117(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_202(0, -1);
	}
	func_203();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2--;
	Global_1935183.f_28 = 0;
}

void func_118(var uParam0)
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
	if (func_70(&(uParam0->f_13)))
	{
		func_74(&(uParam0->f_13));
	}
}

bool func_119(int iParam0)
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
		iVar0 = func_204(iParam0);
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

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_182(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_33(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_120(iParam0) && !func_119(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_205(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_120(iParam0))
	{
		iParam2 = -1;
	}
	if (func_204(iParam0) == 3 || (func_204(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_205(iParam0))))
	{
		func_207(func_206(iParam0), func_205(iParam0), iParam2);
		if ((!func_33(Global_1572864.f_8) && !func_208(0, 1, 0)) && !func_209(Global_1935630, (1 << 15)))
		{
			iVar0 = func_210(iParam0);
			if (iVar0 != -1)
			{
				func_211(0);
			}
			else if (func_206(iParam0) == 8)
			{
				iVar0 = func_212();
				if (iVar0 != -1)
				{
					func_211(0);
				}
			}
		}
	}
	func_213(iParam0, 0);
	if (func_214(0) == iParam0)
	{
		func_215(1);
		func_216(0);
		func_217(1);
	}
	func_218(iParam0, 1);
	func_219(iParam0);
}

void func_122(bool bParam0)
{
	bool bVar0;

	bVar0 = func_220();
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, bVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(bVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 0);
		}
	}
}

void func_123(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_221(vVar0, 0);
}

void func_124(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_125(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_195((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_196(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_126(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_222(uParam2, 1, iVar0);
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
			if (func_223(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8) != 0)
			{
				if (func_225(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_226(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 32) != 0)
			{
				if (func_227(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_228(PLAYER::PLAYER_ID(), 0, 1, (uParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(uParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_229(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4) != 0)
				{
					if (func_230(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!(uParam2->f_1 & 256) != 0)
				{
					if (func_231(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 16) != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_232(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_232(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*uParam2 & 8) != 0)
			{
				if (func_233(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*uParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_234(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2) != 0)
			{
				if (func_235(uParam2, 4000))
				{
					if ((func_236(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 0, (*uParam2 & 256) != 0) & func_237(uParam2, iParam0)) && func_238(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 2) != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if ((func_236(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 1, (*uParam2 & 256) != 0) & func_237(uParam2, iParam0)) && func_238(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*uParam2 & (1 << 17)) == 0)
						{
							if (func_239(iParam0, Global_1935630.f_41))
							{
								func_240();
								*uParam3 = 2;
								func_224(iParam0, uParam2, *uParam3);
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
						if (func_239(iParam0, Global_1935630.f_41))
						{
							func_240();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_241(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_242() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_240();
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*uParam2 & (1 << 17)) == 0)
				{
					if (func_243())
					{
						if (func_239(iParam0, Global_1935630.f_42))
						{
							func_240();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(uParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_244(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_245(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 16) != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_246(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*uParam2 & 64) != 0)
			{
				if (func_247(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if ((*uParam2 & (1 << 20)) != 0)
			{
				if (func_248(uParam2, 4000))
				{
					if (func_249(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if ((*uParam2 & (1 << 10)) != 0)
			{
				if (func_250(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_251(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1 || !func_70(uParam0))
	{
		func_198(uParam0);
	}
}

bool func_128(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_132(0) == 1 || func_132(0) == 2) || func_132(0) == 8) || func_209(Global_1935630, (1 << 11)))
			{
				func_66(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_132(0) == 11)
			{
				func_66(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_132(0) == 6)
			{
				func_66(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_66(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_252(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_252(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_141();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_252(iVar2) > func_252(iVar1))
				{
					if (func_252(iVar0) > func_252(iVar2) + 1 || func_252(iVar0) < func_252(iVar1))
					{
						func_66(uParam2, 32);
					}
				}
				else if (func_252(iVar0) > func_252(iVar2) + 1 && func_252(iVar0) < func_252(iVar1))
				{
					func_66(uParam2, 32);
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
					if (((func_253(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_253(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_254(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_254(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_255(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_66(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_146(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_256(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, (1 << 11)))
				{
					if (!func_70(&(uParam2->f_13)))
					{
						func_71(&(uParam2->f_13), 0.0f);
					}
					else if (func_139(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_74(&(uParam2->f_13));
						func_66(uParam2, (1 << 9));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_70(&(uParam2->f_13)))
					{
						func_74(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_257())
			{
				func_66(uParam2, (1 << 10));
			}
		}
		if (uParam2->f_10)
		{
			if (func_258())
			{
				func_66(uParam2, (1 << 11));
			}
		}
		if (func_209(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_66(uParam2, 128);
		}
		if (func_134(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_66(uParam2, 256);
		}
	}
	if ((((((((((func_8(*uParam2, 2) || func_8(*uParam2, 4)) || func_8(*uParam2, 8)) || func_8(*uParam2, 16)) || func_8(*uParam2, 32)) || func_8(*uParam2, 64)) || func_8(*uParam2, 128)) || func_8(*uParam2, 256)) || func_8(*uParam2, (1 << 9))) || func_8(*uParam2, (1 << 10))) || func_8(*uParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_129(var uParam0)
{
	if (((((func_8(*uParam0, 2) || func_8(*uParam0, 4)) || func_8(*uParam0, 16)) || func_8(*uParam0, 128)) || func_8(*uParam0, (1 << 10))) || func_8(*uParam0, (1 << 11)))
	{
		return true;
	}
	return false;
}

void func_130(int iParam0)
{
	if ((func_8(iParam0->f_180, (1 << 17)) || func_8(iParam0->f_180, (1 << 10))) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_158[0]))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 37)
	{
		func_66(&(iParam0->f_180), (1 << 17));
		func_57(iParam0, 5);
	}
	else if (*iParam0 >= 38 && *iParam0 <= 47)
	{
		if (func_68(&(iParam0->f_178)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop_end", false, false);
			func_66(&(iParam0->f_180), (1 << 17));
			func_57(iParam0, 5);
		}
		else if (!func_8(iParam0->f_180, (1 << 18)))
		{
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_178, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_178, true))
			{
				ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_178, 0);
			}
			func_66(&(iParam0->f_180), (1 << 18));
		}
	}
}

bool func_131()
{
	int iVar0;

	if (func_176() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_120(Global_1392915[iVar0 /*12*/].f_4))
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

int func_132(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_133()
{
	return Global_1310750.f_16077 != 0;
}

bool func_134(var uParam0, int iParam1)
{
	return func_259(*uParam0, iParam1);
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_136(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_137(var uParam0, float fParam1, float fParam2)
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
			if (func_142(Global_35, *uParam0, 25.0f, 1))
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
		if (func_142(Global_35, *uParam0, fParam1, 1))
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

bool func_138(var uParam0, char* sParam1)
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

int func_139(var uParam0)
{
	if (!func_70(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_189(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_242() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

Vector3 func_140(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_141()
{
	return Global_1899515;
}

bool func_142(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_143(int iParam0)
{
	return iParam0 != -15;
}

void func_144(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_141();
}

bool func_145(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_195(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_260(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_146(var uParam0, var uParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_261(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0, var uParam1, float fParam2, int iParam3)
{
	var uVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_262(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_148(int iParam0, int iParam1, int iParam2)
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

int func_149(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_263(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_264(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_198(&(iParam1->f_13));
		}
		if (func_265(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_266(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_149(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_124(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_267(*uParam0, 1, 1);
						}
					}
					else if (func_268(iParam1, 22))
					{
						func_267(*uParam0, 0, 1);
					}
				}
				if (func_269(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_271(iParam8);
					if (func_272(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_273(uParam3);
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
					func_274(iParam1, uParam3, fVar8);
					if (func_275(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_125(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_276(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_269(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_277(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_272(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_270(uParam0, func_269(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_271(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_125(uParam3, 0, 0, 1, 1);
					}
					func_278(iParam1, 1);
				}
				func_274(iParam1, uParam3, fVar8);
				if (func_276(uParam0, iParam1, fParam4, bVar6))
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
			func_279(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_150(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_280(iParam0);
		return func_281(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_151()
{
	func_282();
	func_283(-1, 0, 0, 0, 0);
	func_284(60, 0, 1);
}

void func_152(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_168(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_286(func_285(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_287(func_285(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_141();
	func_169(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_153(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = uParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_288(iParam0, &sVar0);
}

void func_154(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

struct<2> /*16*/ func_155()
{
	struct<2> /*16*/ sVar0;

	switch (func_289(14))
	{
		case 0:
			sVar0.f_0 = "INSULT_JOEBUTLER_CONV_PART1";
			sVar0.f_1 = 1;
			break;
		case 1:
			sVar0.f_0 = "INSULT_JOEBUTLER_CONV_PART1";
			sVar0.f_1 = 2;
			break;
		case 2:
			sVar0.f_0 = "INSULT_JOEBUTLER_CONV_PART2";
			sVar0.f_1 = 2;
			break;
		case 3:
			sVar0.f_0 = "INSULT_MALE_CONV_PART1";
			sVar0.f_1 = 6;
			break;
	}
	return sVar0;
}

void func_156(var uParam0, var uParam1, var uParam2)
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

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_GET_ENTITIES_IN_VOLUME(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *uParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_157(int iParam0, int iParam1)
{
	func_190(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 1);
}

int func_158(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_159(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_160()
{
	if (((!func_290() && !func_291(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD"))) && (!ENTITY::DOES_ENTITY_EXIST(func_220()) || !ENTITY::IS_ENTITY_IN_AIR(func_220(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return true;
	}
	if (func_292())
	{
		func_293();
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!func_291(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), func_140(PLAYER::GET_PLAYER_INDEX()), 1.0f, 8);
		}
	}
	return false;
}

bool func_161(var uParam0, Vector3 vParam1, float fParam4, var uParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;

	switch (*uParam5)
	{
		case 0:
			if (!func_291(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1.0f, iParam6, fParam4, fParam7, 0);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				*uParam5 = 1;
			}
			break;
		case 1:
			if (func_294(*uParam0, vParam1, fParam4, fParam7, fParam8, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 8)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_162(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_70(uParam2))
		{
			func_71(uParam2, 0.0f);
			return false;
		}
		else if (func_139(uParam2) > iParam6)
		{
			func_74(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0.0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return false;
			}
			fParam7 = func_197(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0.0f && fParam7 < 10.0f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10.0f && fParam7 < 20.0f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20.0f && fParam7 < 30.0f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30.0f && fParam7 < 50.0f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

void func_163()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	if (Global_1935689.f_1)
	{
		func_295(0);
	}
}

void func_164(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_193(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

void func_165()
{
	Global_1905944.f_5695 = 1;
}

int func_166(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49 /*PRF_DisableAgitationTriggers*/, true);
		return 1;
	}
	return 0;
}

char* func_167(int iParam0)
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

bool func_168(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_169(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_170(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_171(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_296(vParam0))
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
		if (func_297(vParam0))
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
	func_298(iVar0, bParam8);
	return iVar0;
}

int func_172()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_299(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_172())
	{
		return -1;
	}
	iVar0 = func_173(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_300(iVar1, 0);
	func_301(iVar1, 0);
	func_302(iVar1, 0);
	func_303(iVar1, 0);
	func_304(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_305(iVar1, iParam4);
	}
	return iVar1;
}

int func_176()
{
	return Global_1572887.f_12;
}

bool func_177(var uParam0, int iParam1, char* sParam2)
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

void func_178(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 128);
	}
	else
	{
		func_181(&(uParam0->f_1), 128);
	}
}

void func_179(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_181(uParam0, (1 << 28));
	}
	else
	{
		func_180(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_181(uParam0, (1 << 30));
	}
	else
	{
		func_180(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_181(uParam0, (1 << 29));
	}
	else
	{
		func_180(uParam0, (1 << 29));
	}
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_182(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_204(iParam0);
}

int func_183(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_306(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_184(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_195(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_307(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_308(iParam0->f_6, iParam0->f_5, 0);
			}
			func_309(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_310(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_185(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

float func_186()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_188(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_189(var uParam0)
{
	return func_185(*uParam0, 2);
}

void func_190(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_181(uParam0, iParam1);
	}
	else
	{
		func_180(uParam0, iParam1);
	}
}

void func_191(int* iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_193(iParam0, 1);
	func_184(iParam0, uParam1, sParam3, uParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

bool func_192(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_193(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_194(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_195(int iParam0)
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

void func_196(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_195(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_311(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_312(iVar0);
	*uParam0 = 0;
}

float func_197(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_198(var uParam0)
{
	func_71(uParam0, 0.0f);
}

bool func_199(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_200(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_313(cParam1, cParam0);
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

bool func_201(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_314(iVar0) | func_315(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_202(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_316(&Global_0, 8);
	}
	if (!func_317() || func_176() != -1)
	{
		return;
	}
	func_316(&Global_0, 1);
}

void func_203()
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
}

int func_204(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_318(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_205(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_206(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 0;
	}
	return func_319(func_174(iParam0));
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_176() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_208(int iParam0, bool bParam1, bool bParam2)
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
		if (func_320())
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
		iVar0 = func_321(Global_1898164.f_1[0 /*5*/]);
		if (func_322(iVar0) && func_323(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_33(Global_1898164.f_1[0 /*5*/]))
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

bool func_209(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_206(iParam0))
	{
		case 1:
			iVar0 = func_321(iParam0);
			return func_324(iVar0);
		case 8:
			iVar1 = func_321(iParam0);
			if (func_323(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_325(iVar1);
			}
			break;
	}
	return -1;
}

void func_211(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_176() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_326(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_327();
		Global_1898077.f_9 = func_328(Global_1894899.f_2);
		func_329(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_212()
{
	if (!func_56(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_56(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_56(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_56(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_56(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_56(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_56(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_213(int iParam0, int iParam1)
{
	if (!func_33(iParam0))
	{
		return;
	}
	func_300(iParam0, iParam1);
}

int func_214(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_330(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_331(&Global_1935630, (1 << 22));
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

int func_216(bool bParam0)
{
	if (!bParam0 && func_332(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_217(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_218(int iParam0, bool bParam1)
{
	if (func_176() != -1)
	{
		return;
	}
	if (func_214(0) != iParam0)
	{
		return;
	}
	if (func_333(iParam0))
	{
		if (bParam1)
		{
			func_334(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_335(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_219(int iParam0)
{
	return func_337(func_336(iParam0));
}

bool func_220()
{
	return Global_1900383.f_393;
}

void func_221(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_296(vParam0))
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
			if (func_338(vVar2, vParam0, 2.0f, 1))
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

void func_222(var uParam0, bool bParam1, int iParam2)
{
	func_339(iParam2);
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
		uParam0->f_13 = func_340(0);
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
							func_181(uParam0, (1 << 25));
						}
					}
					else if (!(*uParam0 & (1 << 13)) != 0)
					{
						if (func_341(1))
						{
							func_181(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_341(1) || (*uParam0 & (1 << 13)) != 0))
				{
					func_180(uParam0, (1 << 25));
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
			if (func_342(uParam0))
			{
				uParam0->f_15 = func_242();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_242() - uParam0->f_15) > 500)
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
	func_343(uParam0);
}

bool func_223(int iParam0, var uParam1)
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
			if (!func_344(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_345(iParam0, iVar2) <= func_346(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_224(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_347(iParam2, 1, 1, 1, 0))
	{
		func_181(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_348(uParam1, 1);
	func_349();
}

bool func_225(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_350(iParam0, !(*uParam1 & (1 << 28)) != 0, !(*uParam1 & (1 << 29)) != 0, !(*uParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_351(uParam1);
			if (func_352(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_353(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_348(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_348(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_226(int iParam0, int iParam1, var uParam2)
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
	if (func_354(iParam1, !(*uParam2 & (1 << 28)) != 0, !(*uParam2 & (1 << 29)) != 0, !(*uParam2 & (1 << 30)) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_351(uParam2);
		if (func_352(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_353(uParam2)
				{
					func_348(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_227(int iParam0, var uParam1)
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
	if (func_344(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_353(uParam1)
		{
			fVar3 = func_351(uParam1);
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

int func_228(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_355(bParam1, bParam2, bParam3);
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

bool func_229(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_242();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_356(uParam2);
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
			if (func_238(uParam2, iParam1))
			{
				func_348(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_231(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_357(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_238(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_348(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_232(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_358(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_348(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_348(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_359(iParam1, vVar0, vVar4))
					{
						func_348(uParam2, 1);
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
					func_348(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_359(iParam1, vVar0, vVar7))
					{
						func_348(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_233(int iParam0, var uParam1)
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
		if (!func_344(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_360(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_361(Global_1935630.f_34[iVar0]))
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
			if (func_362(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_363(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_364(uParam1, iParam0, fVar1, iVar0))
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

bool func_234(int iParam0, var uParam1)
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

bool func_235(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_242();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_236(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_365(iVar0, &iVar2))
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
	if (func_366(iVar0, iParam0))
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

int func_237(var uParam0, int iParam1)
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

bool func_238(var uParam0, int iParam1)
{
	if (func_367(uParam0))
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

bool func_239(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_197(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_240()
{
}

bool func_241(var uParam0, int iParam1)
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
		if (func_368(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_242();
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
						if (func_369(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_242();
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

int func_242()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_243()
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
	if ((func_242() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_244(var uParam0, int iParam1)
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
	fVar0 = func_346(uParam0);
	if (uParam0->f_12 > func_370(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_371(iParam1);
	iVar1 = func_372(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_245(int iParam0, int iParam1, var uParam2)
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
	return func_373(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_246(int iParam0, var uParam1)
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
		if (func_374(iParam0, uParam1, 1))
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
					if (!func_375(uParam1, iParam0))
					{
						if (func_369(iVar4, Global_36, 1) < 7.0f)
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

bool func_247(int iParam0, var uParam1)
{
	if (!func_376(0))
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

bool func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_242();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_249(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_250(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_242();
	}
	else if (func_242() - uParam1->f_4) > func_377(uParam1)
	{
		return func_378(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_251(var uParam0, int iParam1)
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

int func_252(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_253(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_120(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_254(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_119(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_255(int iParam0)
{
	int iVar0;

	iVar0 = func_379();
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

bool func_256(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) /*3*/ };
	if (!func_262(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return false;
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
		if (!func_380(iVar1, 0))
		{
			func_381(&iVar1, vVar8, 1083179008);
		}
		return true;
	}
	return false;
}

bool func_257()
{
	return Global_1392040.f_6;
}

bool func_258()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_259(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_260(int iParam0, bool bParam1)
{
	if (bParam1 && !func_195(iParam0))
	{
		return false;
	}
	return !func_382(iParam0, 4);
}

bool func_261(var uParam0, Vector3 vParam1, float fParam4)
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

bool func_262(var uParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6)
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
					if (func_383(Global_35, *iParam1, 0))
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

void func_263(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

float func_264(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_265(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_384(iParam0, iParam1))
		{
			if (!func_259(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_125(uParam2, 0, 0, 1, 0);
				func_181(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_259(iParam1->f_10, 1))
		{
			func_385(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_180(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_266(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_259(iParam4, 32);
		func_386(iParam1, uParam2, 0);
		iVar5 = func_387(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_125(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_259(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_259(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_259(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_259(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_259(iParam4, (1 << 23)) || func_259(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_259(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_259(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_268(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_268(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_259(iParam4, (1 << 26)))
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
				iParam6 = func_388(uParam0);
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
			if (func_259(iParam4, (1 << 28)))
			{
				iVar8 = func_389(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_390(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_268(iParam1, 23))
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
			if (func_259(iParam4, 2) || func_259(iParam4, 16))
			{
				func_267(*uParam0, 1, 1);
			}
			else
			{
				func_267(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_267(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_268(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_269(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_391(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_270(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_392(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_259(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_271(int iParam0)
{
	if (func_259(iParam0, 4))
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
	if (func_259(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_259(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_272(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_393(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_394(Global_35)) || func_395(Global_35)) || func_396(Global_35));
	fVar12 = -1.0f;
	if (func_70(&(iParam1->f_13)))
	{
		fVar12 = func_72(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_195((uParam4[iVar0 /*17*/])->f_6);
		func_397(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_398(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_399(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_125(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_400(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_386(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_401(iParam1, fParam6, iParam1->f_9))
					{
						func_198(&(iParam1->f_18));
						if (bVar6)
						{
							func_400(uParam4, 0, 0);
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
		func_402(iParam1, fParam2);
	}
	return bVar5;
}

void func_273(var uParam0)
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

void func_274(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_403(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_402(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_275(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_404(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_405(iParam1, 0);
				func_386(iParam1, uParam2, func_268(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_276(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_198(&(iParam1->f_18));
			return 0;
		}
		else if (func_70(&(iParam1->f_18)))
		{
			func_74(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_70(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0.0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_406(&(iParam1->f_18), fParam2);
	return 1;
}

void func_277(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_397(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_278(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_279(int* iParam0, var uParam1)
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
	func_386(iParam0, uParam1, 1);
	func_125(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

int func_280(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return joaat("VISIBLELOOTSLOTREQUEST_GROUP_ANY_WAIST_OR_CHEST");
				}
				else
				{
					return joaat("VISIBLELOOTSLOTREQUEST_GROUP_ANY_WAIST");
				}
			}
		}
	}
	return joaat("VISIBLELOOTSLOTREQUEST_ANY");
}

bool func_281(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	sVar0.f_0 = 1;
	sVar0.f_1[0] = iParam1;
	sVar0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &sVar0, iParam3, iVar23, 2, false);
}

void func_282()
{
	if (!func_407(Global_1327479))
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
	func_408(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_283(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_409() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_407(iVar1) && !func_410(iVar1, iParam2)) && (!bParam3 || !func_411(iVar1))) && (!bParam4 || !func_412(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_413(iVar0);
			}
		}
		iVar0++;
	}
}

void func_284(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_414(iParam0, iParam1, bParam2);
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

struct<2> /*16*/ func_285(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_286(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_288(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_289(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

bool func_290()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_292())
	{
		return true;
	}
	return false;
}

bool func_291(int iParam0, int iParam1)
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

bool func_292()
{
	if (func_415(Global_35) || func_416(Global_35))
	{
		return true;
	}
	return false;
}

int func_293()
{
	if (func_415(Global_35) || func_416(Global_35))
	{
		if (!func_291(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, func_220(), func_140(PLAYER::GET_PLAYER_INDEX()), 1.0f, 8);
		}
		return 0;
	}
	else if ((!func_415(Global_35) && !func_416(Global_35)) && !func_291(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
	{
		return 1;
	}
	return 0;
}

bool func_294(int iParam0, Vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_417(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_417(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2.0f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_295(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

bool func_296(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_297(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_298(int iParam0, bool bParam1)
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

bool func_299(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_418(iParam0);
	}
	else
	{
		func_419(iParam0, iParam1);
	}
	func_420();
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_302(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_303(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_305(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

void func_306(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_421(iParam1))
		{
			func_422(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_423(iParam0, 0, 1);
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
			func_424(iParam0, 0);
			bVar0 = true;
		}
		func_425(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_307(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_308(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_309(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (bParam1)
	{
		func_426(iParam0, 4);
		func_427(iVar0, 1);
		func_428(iVar0, 1);
	}
	else
	{
		func_429(iParam0, 4);
		func_428(iVar0, 0);
	}
}

void func_310(int* iParam0, char* sParam1)
{
	if (func_195(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_308(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_194(iParam0, 1);
}

int func_311(int iParam0)
{
	return iParam0;
}

void func_312(int iParam0)
{
	if (!func_430(iParam0))
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

void func_313(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
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

int func_314(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_317()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_318(int iParam0)
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

int func_319(int iParam0)
{
	return (iParam0 & 31);
}

bool func_320()
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

int func_321(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_431(func_174(iParam0));
}

bool func_322(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_323(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_324(int iParam0)
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

int func_325(int iParam0)
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

void func_326(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_327()
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

int func_328(int iParam0)
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

void func_329(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_330(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_331(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_332(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_432(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_333(int iParam0)
{
	if (!func_33(iParam0))
	{
		return false;
	}
	switch (func_206(iParam0))
	{
		case 1:
			switch (func_321(iParam0))
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
			switch (func_321(iParam0))
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

void func_334(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_433(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_434(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, bVar1);
		}
		iVar0++;
	}
	func_436(func_435(iParam0), 6);
}

void func_335(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_433(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_434(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, bVar1, 0);
		}
		iVar0++;
	}
	func_437(func_435(iParam0), 6);
}

int func_336(int iParam0)
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

int func_337(int iParam0)
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
	func_438(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_338(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_339(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_439();
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
			func_440(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_340(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_341(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_441(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_342(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_176() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_442(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_442(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_372(iVar0) == -1)
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

void func_343(var uParam0)
{
	if ((*uParam0 & 8) != 0 || (*uParam0 & 16) != 0)
	{
		func_443(uParam0);
	}
}

bool func_344(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_372(iParam2);
	}
	else
	{
		iVar1 = func_371(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_372(iParam0);
	}
	else
	{
		iVar0 = func_371(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_259(*uParam1, (1 << 23)))
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

float func_345(int iParam0, int iParam1)
{
	return func_197(iParam0, iParam1, 1, 1);
}

float func_346(var uParam0)
{
	return uParam0->f_26;
}

bool func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_348(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, (1 << 27));
	}
	else
	{
		func_180(uParam0, (1 << 27));
	}
}

void func_349()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_350(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_197(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_444(iVar0, 0)))
		{
			if (func_445(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_351(var uParam0)
{
	return uParam0->f_17;
}

bool func_352(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_259(*uParam0, (1 << 22)))
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

int func_353(var uParam0)
{
	return uParam0->f_18;
}

bool func_354(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_444(iVar0, 0)))
		{
			if (func_446(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_355(bool bParam0, bool bParam1, bool bParam2)
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

float func_356(var uParam0)
{
	return uParam0->f_23;
}

int func_357(var uParam0)
{
	return uParam0->f_21;
}

int func_358(var uParam0)
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

bool func_359(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_447(iParam0, vParam4, 0.5f))
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

int func_360(int iParam0)
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
	if (func_448(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_361(int iParam0)
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

bool func_362(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_449(iParam1))
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

bool func_363(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_449(iParam1))
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

bool func_364(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_449(iParam1))
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

bool func_365(int iParam0, int iParam1)
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

bool func_366(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_450(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_367(var uParam0)
{
	return !(*uParam0 & 2) != 0;
}

bool func_368(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_369(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_369(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_370(var uParam0)
{
	return uParam0->f_24;
}

int func_371(int iParam0)
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

int func_372(int iParam0)
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

int func_373(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_365(Global_35, &iVar1))
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
		fVar2 = func_197(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_197(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_374(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_441(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_375(uParam1, iVar0))
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
				if (!bParam2 || !func_375(uParam1, iVar1))
				{
					if (func_369(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_375(var uParam0, int iParam1)
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

bool func_376(int iParam0)
{
	if (func_34())
	{
		return false;
	}
	return func_56(Global_1347702[58 /*49*/].f_15, 1);
}

int func_377(var uParam0)
{
	return uParam0->f_20;
}

int func_378(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_379()
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

bool func_380(int iParam0, bool bParam1)
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

void func_381(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_291(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

bool func_382(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

bool func_383(int iParam0, int iParam1, bool bParam2)
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

bool func_384(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_451((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_385(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_403(uParam0[iVar0 /*17*/]))
		{
			func_193(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_386(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_196(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_109(iParam0, 0);
		}
	}
}

int func_387(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_452(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_195((uParam2[iVar0 /*17*/])->f_6))
		{
			func_193(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_388(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_453(*uParam0);
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

int func_389(var uParam0, int iParam1)
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

void func_390(int* iParam0, int* iParam1)
{
	if (!func_268(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_193(iParam1, 19);
			func_405(iParam0, 23);
			func_454(iParam1, 2);
		}
	}
}

bool func_391(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_455(16))
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
					func_456(16);
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

void func_392(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_452(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_393(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_394(int iParam0)
{
	return func_457(iParam0, 4) | func_457(iParam0, 5);
}

int func_395(int iParam0)
{
	return func_457(iParam0, 7);
}

int func_396(int iParam0)
{
	return func_457(iParam0, 6);
}

void func_397(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_403(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_452(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_398(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_458(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_260(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_309(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_309(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_459(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_399(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_460(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_461(iParam1, 1))
	{
		func_462(iParam1, 1);
		return true;
	}
	return false;
}

void func_400(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_111(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_401(int* iParam0, float fParam1, bool bParam2)
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

void func_402(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_403(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_404(int iParam0)
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

void func_405(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_406(var uParam0, float fParam1)
{
	if (func_463(uParam0, fParam1))
	{
		func_74(uParam0);
		return 1;
	}
	return 0;
}

bool func_407(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_408(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_409()
{
	return Global_1310750.f_16037;
}

bool func_410(int iParam0, int iParam1)
{
	if (!func_407(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_411(int iParam0)
{
	if (!func_407(iParam0))
	{
		return false;
	}
	if (func_464(64) && func_465(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_412(int iParam0)
{
	if (!func_407(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_413(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_407(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_466(iParam0);
	Global_1310750.f_16037--;
}

void func_414(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_467(iParam0, iParam1, bParam2);
}

bool func_415(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_468(iVar9);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar3, bParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = sVar3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar7);
				if (iVar8 == joaat("CARRIABLE_SADDLE") || iVar8 == joaat("CARRIABLE_SADDLE_BUNDLE"))
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

bool func_416(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	bVar0 = func_220();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(bVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

float func_417(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0.0f)
	{
		fVar0 += 360.0f;
	}
	else if (fParam0 >= 360.0f)
	{
		fVar0 -= 360.0f;
	}
	return fVar0;
}

int func_418(int iParam0)
{
	int iVar0;

	iVar0 = func_318(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_469(iVar0);
}

int func_419(int iParam0, int iParam1)
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
			func_470(iVar2);
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

void func_420()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_421(int iParam0)
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

void func_422(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_471(iParam0, iParam1))
		{
			if (func_472(iParam0, iParam1))
			{
				if (func_473(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_474(iParam0);
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

void func_423(int iParam0, int iParam1, bool bParam2)
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

void func_424(int iParam0, bool bParam1)
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

void func_425(int iParam0, bool bParam1)
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

void func_426(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_427(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_382(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_428(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_429(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_430(int iParam0)
{
	return func_382(iParam0, 2);
}

int func_431(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_432(int iParam0, int iParam1)
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

int func_433(bool bParam0)
{
	if (func_176() == -1)
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

int func_434(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_475(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_435(int iParam0)
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

void func_436(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_437(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_438(int iParam0, int iParam1)
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
			func_476((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_476(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_33(Global_1898164.f_1[0 /*5*/]))
	{
		func_213(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_439()
{
	if (func_477())
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

void func_440(var uParam0, var uParam1)
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

bool func_441(bool bParam0, int iParam1, int iParam2)
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

int func_442(var uParam0)
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

void func_443(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_180(uParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_181(uParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_444(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_445(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_446(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_446(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_447(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_448(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_449(int iParam0)
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

int func_450(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_451(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_452(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_195(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_196(&(iParam1->f_6), 0, 1);
	}
	if (!func_195(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_403(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_478(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_195(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_459(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_479(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_480(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_307(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_479(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_309(iParam1->f_6, 0, 1);
				}
				else
				{
					func_309(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_453(int iParam0)
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

void func_454(int* iParam0, int iParam1)
{
	if (!func_192(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_193(iParam0, 14);
		}
	}
}

bool func_455(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_456(int iParam0)
{
	Global_22 |= iParam0;
}

int func_457(int iParam0, int iParam1)
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

bool func_458(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_459(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_195(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	func_479(iParam0, 18, 0, 1);
	func_479(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_460(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_195(iParam0))
	{
		return false;
	}
	iVar0 = func_311(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_461(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_195(iParam0))
	{
		return false;
	}
	iVar0 = func_311(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_462(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_463(var uParam0, float fParam1)
{
	if (!func_70(uParam0))
	{
		return false;
	}
	if (func_72(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_465(int iParam0)
{
	return func_410(iParam0, Global_1310750.f_16072 | 64);
}

void func_466(int iParam0)
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

void func_467(int iParam0, int iParam1, bool bParam2)
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

int func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

int func_469(int iParam0)
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

int func_470(int iParam0)
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

bool func_471(int iParam0, int iParam1)
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

bool func_472(int iParam0, int iParam1)
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

bool func_473(int iParam0, int iParam1)
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
	if (!func_471(iParam0, iVar0))
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

void func_474(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_475(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_476(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

bool func_477()
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

int func_478(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_382(iVar0, 2))
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
				func_481(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_479(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_480(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_481(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_427(iParam0, 1);
	func_428(iParam0, 1);
	func_429(iParam0, 128);
}

