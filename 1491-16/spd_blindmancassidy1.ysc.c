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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<191> /*1528*/ sLocal_36 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778800947, 677043675, -1893027926, -615159064, -208228129, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 1065353216;
	var uLocal_235 = 1119092736;
	var uLocal_236 = 1092616192;
	var uLocal_237 = 1085276160;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 1073741824;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 2;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 570;
	var uLocal_264 = 1065353216;
	var uLocal_265 = -1082130432;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 2;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 570;
	var uLocal_281 = 1065353216;
	var uLocal_282 = -1082130432;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 2;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 2;
#pragma endregion

void __SCRIPT()
{
	int iVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&sLocal_36, 1);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&sLocal_36, &iLocal_35);
		func_3(&sLocal_36, &iLocal_35, &uLocal_14);
		if (iLocal_35 > 2 && iLocal_35 < 81)
		{
			if (func_4(4, sLocal_36.f_143[0], 1, 1))
			{
				if (iLocal_35 == 83 || iLocal_35 == 92)
				{
					func_6(&sLocal_36, &(sLocal_36.f_165), func_5(23), 1, 0, 1.0f, 0, 0);
				}
				else
				{
					func_6(&sLocal_36, &(sLocal_36.f_165), func_5(16), 1, 0, 1.0f, 0, 0);
				}
			}
			else
			{
				func_7(4, 0, &(sLocal_36.f_143[0]), &(sLocal_36.f_133), &(sLocal_36.f_185), 0.0f, 20.0f, 1);
				func_8(&sLocal_36, &iLocal_35);
				func_9(&sLocal_36, iLocal_35);
				func_10(sLocal_36.f_143[0], &(sLocal_36.f_162), (1 << 12), 4, 0);
				func_11(&sLocal_36);
				switch (iLocal_35)
				{
					case 0:
						func_12(&sLocal_36, &iLocal_35, &uLocal_14);
						break;
					case 1:
						if (func_13(&sLocal_36, &(sLocal_36.f_163)))
						{
							func_14(&iLocal_35, 2);
						}
						break;
					case 2:
						if (func_15(&sLocal_36))
						{
							iVar0 = func_16();
							func_14(&iLocal_35, iVar0);
						}
						break;
					case 3:
						func_17(&sLocal_36, &iLocal_35);
						break;
					case 48:
						if (func_18(&sLocal_36, &(sLocal_36.f_165), 0))
						{
							func_19(&sLocal_36, &iLocal_35);
						}
						break;
					case 6:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(0), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 7:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(1), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 8:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(2), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 9:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(3), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 10:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(4), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 11:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(5), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 12:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(6), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 14:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(7), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 15:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(8), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 16:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(9), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 17:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0) && !func_20(sLocal_36.f_162, 2))
						{
							func_14(&iLocal_35, 50);
						}
						else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0) && func_20(sLocal_36.f_162, 2)) && func_20(sLocal_36.f_162, 1))
						{
							if (sLocal_36.f_178 < 2)
							{
								if (func_6(&sLocal_36, &(sLocal_36.f_165), func_21(sLocal_36.f_172), 1, 0, 1065353216, 1, 0))
								{
									func_22(&(sLocal_36.f_172));
									func_23(&sLocal_36);
								}
							}
							else if (func_6(&sLocal_36, &(sLocal_36.f_165), func_21(sLocal_36.f_172), 1, 0, 1065353216, 1, 0))
							{
								func_22(&(sLocal_36.f_172));
								func_14(&iLocal_35, 88);
							}
						}
						else if ((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0) && func_20(sLocal_36.f_162, 2)) && func_20(sLocal_36.f_162, 1))
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_165), func_21(sLocal_36.f_172), 1, 0, 1065353216, 1, 0))
							{
								func_22(&(sLocal_36.f_172));
								func_14(&iLocal_35, 88);
							}
						}
						else if (sLocal_36.f_190 >= 3)
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_165), func_21(sLocal_36.f_172), 1, 0, 1065353216, 1, 0))
							{
								func_22(&(sLocal_36.f_172));
								func_14(&iLocal_35, 3);
							}
						}
						else
						{
							func_14(&iLocal_35, 3);
						}
						break;
					case 83:
						if (func_20(sLocal_36.f_162, 4))
						{
							func_6(&sLocal_36, &(sLocal_36.f_165), func_5(23), 0, 0, 2.0f, 1, 0);
							func_24();
							func_14(&iLocal_35, 89);
						}
						else
						{
							func_6(&sLocal_36, &(sLocal_36.f_165), func_5(23), 0, 0, 1065353216, 0, 0);
						}
						func_25(&sLocal_36);
						if (((!func_20(sLocal_36.f_162, 1) && func_26(sLocal_36.f_143[0], Global_35, 15.0f, 1)) && !func_20(sLocal_36.f_162, 4)) && !func_20(sLocal_36.f_162, (1 << 19)))
						{
							func_24();
							if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_36.f_165, func_5(23)))
							{
								func_14(&iLocal_35, 84);
							}
						}
						else if ((func_20(sLocal_36.f_162, 1) && func_26(sLocal_36.f_143[0], Global_35, 6.0f, 1)) && !func_20(sLocal_36.f_162, 4))
						{
							func_23(&sLocal_36);
						}
						break;
					case 85:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(38), 1, 0, 1.0f, 0, 0))
						{
							func_24();
							func_14(&iLocal_35, 17);
						}
						break;
					case 86:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(35), 1, 0, 1.0f, 0, 0))
						{
							func_24();
							func_14(&iLocal_35, 17);
						}
						break;
					case 87:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(39), 1, 0, 1.0f, 0, 0))
						{
							func_24();
							func_14(&iLocal_35, 17);
						}
						break;
					case 84:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(25), 1, 0, 2.0f, 1, 0))
						{
							if (func_20(sLocal_36.f_162, 4))
							{
								func_14(&iLocal_35, 88);
							}
							else
							{
								func_24();
								func_14(&iLocal_35, 17);
							}
						}
						break;
					case 89:
						func_6(&sLocal_36, &(sLocal_36.f_165), func_5(28), 0, 0, 1065353216, 1, 1);
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_36.f_165, "s_Cower_Base", true))
						{
							func_14(&iLocal_35, 81);
						}
						break;
					case 90:
						func_6(&sLocal_36, &(sLocal_36.f_165), func_5(29), 0, 0, 1065353216, 1, 1);
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_36.f_165, "s_Cower_Base", true))
						{
							func_14(&iLocal_35, 81);
						}
						break;
					case 88:
						if (func_20(sLocal_36.f_162, 4) || func_20(sLocal_36.f_162, (1 << 19)))
						{
							func_6(&sLocal_36, &(sLocal_36.f_165), func_5(26), 0, 0, 1.0f, 0, 0);
						}
						else if (func_20(sLocal_36.f_162, 1) && !func_20(sLocal_36.f_162, (1 << 13)))
						{
							func_6(&sLocal_36, &(sLocal_36.f_165), func_5(24), 0, 0, 1065353216, 1, 0);
							if (!ENTITY::_IS_ENTITY_FROZEN(sLocal_36.f_148) && ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_36.f_165) >= 0.12f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(sLocal_36.f_148, true);
							}
							if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_36.f_165, "s_Sitting_BASE", true) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_36.f_165, func_5(24)))
							{
								func_27(&(sLocal_36.f_162), (1 << 13));
							}
						}
						else
						{
							func_6(&sLocal_36, &(sLocal_36.f_165), func_5(26), 0, 0, 1.0f, 1, 0);
						}
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_36.f_165, "s_Sitting_BASE", true))
						{
							func_14(&iLocal_35, 83);
						}
						break;
					case 81:
						func_6(&sLocal_36, &(sLocal_36.f_165), func_5(30), 0, 0, 1.0f, 0, 0);
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_36.f_165, "s_Cower_Base", true))
						{
							func_14(&iLocal_35, 91);
						}
						break;
					case 82:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(27), 1, 0, 1065353216, 1, 0))
						{
							func_14(&iLocal_35, 83);
						}
						break;
					case 18:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(10), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 19:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(11), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 20:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(12), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 21:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(13), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 22:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(14), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177 = (1 + sLocal_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 23:
						if (func_6(&sLocal_36, &(sLocal_36.f_165), func_5(15), 1, 0, 1065353216, 1, 0))
						{
							sLocal_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 4:
						func_28(&sLocal_36, &iLocal_35);
						break;
					case 49:
						if (func_20(sLocal_36.f_162, 2))
						{
							func_29(&(sLocal_36.f_130));
							func_14(&iLocal_35, 33);
						}
						if (!func_30(&(sLocal_36.f_130)))
						{
							func_31(&(sLocal_36.f_130), 0.0f);
						}
						else if (func_32(&(sLocal_36.f_130)) > 5000 && !func_20(sLocal_36.f_162, 2))
						{
							if (func_18(&sLocal_36, &(sLocal_36.f_169), 1))
							{
								func_29(&(sLocal_36.f_130));
								func_33(&sLocal_36, &iLocal_35);
							}
						}
						break;
					case 24:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(0), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 25:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(1), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 26:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(2), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 27:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(3), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 29:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(4), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 30:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(5), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 51:
						if (func_36(&sLocal_36, &(sLocal_36.f_169), func_34(10), &(sLocal_36.f_165), 1, 0, 1.0f, 1, func_5(16), 1))
						{
							func_14(&iLocal_35, 33);
						}
						break;
					case 33:
						if (func_20(sLocal_36.f_162, 2))
						{
							if (func_37(&sLocal_36))
							{
								if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(12), 0, 1, 1065353216, 1, 0) && func_20(sLocal_36.f_162, (1 << 15)))
								{
									func_38(&sLocal_36, 0);
									if (sLocal_36.f_186)
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
										sLocal_36.f_186 = 0;
									}
									func_39(&sLocal_36, 1, 1);
									func_14(&iLocal_35, 35);
								}
								if (!func_20(sLocal_36.f_162, (1 << 15)))
								{
									if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_36.f_169, func_34(12)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_36.f_169) >= 0.3f)
									{
										func_40(100, 0, 0, 1, 1);
										func_27(&(sLocal_36.f_162), (1 << 15));
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0))
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(10), 0, 1, 1.0f, 1, 0))
							{
								func_14(&iLocal_35, 34);
							}
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0))
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(10), 0, 1, 1.0f, 1, 0))
							{
								func_14(&iLocal_35, 36);
							}
						}
						break;
					case 35:
						func_41(0);
						if (!func_42())
						{
							if (func_36(&sLocal_36, &(sLocal_36.f_171), func_43(26), &(sLocal_36.f_169), 1, 0, 1.0f, 0, func_34(9), 0))
							{
								func_14(&iLocal_35, 5);
							}
						}
						else if (!func_44(77))
						{
							if (func_36(&sLocal_36, &(sLocal_36.f_171), func_43(26), &(sLocal_36.f_169), 1, 0, 1.0f, 0, "", 0))
							{
								func_14(&iLocal_35, 69);
							}
						}
						else if (func_36(&sLocal_36, &(sLocal_36.f_171), func_43(26), &(sLocal_36.f_169), 1, 0, 1.0f, 0, "", 0))
						{
							func_14(&iLocal_35, 69);
						}
						break;
					case 34:
						if (func_36(&sLocal_36, &(sLocal_36.f_165), func_5(16), &(sLocal_36.f_169), 0, 1, 1.0f, 0, func_34(9), 1))
						{
							func_14(&iLocal_35, 17);
						}
						break;
					case 50:
						if (func_36(&sLocal_36, &(sLocal_36.f_169), func_34(9), &(sLocal_36.f_165), 1, 0, 1.0f, 1, func_5(16), 1))
						{
							func_14(&iLocal_35, 36);
						}
						break;
					case 36:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(11), 1, 0, 1.0f, 1, 0))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 37:
						if (func_36(&sLocal_36, &(sLocal_36.f_165), func_5(16), &(sLocal_36.f_169), 0, 1, 1.0f, 0, func_34(9), 1))
						{
							func_14(&iLocal_35, 17);
						}
						break;
					case 31:
						if (func_20(sLocal_36.f_162, 2))
						{
							func_14(&iLocal_35, 33);
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0))
						{
							func_14(&iLocal_35, 33);
						}
						else
						{
							func_14(&iLocal_35, 36);
						}
						break;
					case 38:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(6), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 40:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(7), 1, 0, 1065353216, 1, 0) || func_35(&(sLocal_36.f_143[0]), &(sLocal_36.f_162), &(sLocal_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 43:
						if (func_20(sLocal_36.f_162, 2))
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(10), 1, 0, 1.0f, 1, 0))
							{
								func_14(&iLocal_35, 45);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0))
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(10), 1, 0, 1.0f, 1, 0))
							{
								func_14(&iLocal_35, 44);
							}
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0))
						{
							if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(10), 1, 0, 1.0f, 1, 0))
							{
								func_14(&iLocal_35, 46);
							}
						}
						break;
					case 45:
						if (!func_42())
						{
							if (func_36(&sLocal_36, &(sLocal_36.f_171), func_43(26), &(sLocal_36.f_169), 0, 1, 1.0f, 0, func_34(9), 0))
							{
								func_14(&iLocal_35, 5);
							}
						}
						else if (!func_44(77))
						{
							if (func_36(&sLocal_36, &(sLocal_36.f_171), func_45(), &(sLocal_36.f_165), 0, 1, 1.0f, 0, "", 0))
							{
								func_14(&iLocal_35, 5);
							}
						}
						else if (func_36(&sLocal_36, &(sLocal_36.f_171), func_43(26), &(sLocal_36.f_165), 0, 1, 1.0f, 0, "", 0))
						{
							func_14(&iLocal_35, 5);
						}
						break;
					case 44:
						if (func_36(&sLocal_36, &(sLocal_36.f_165), func_5(16), &(sLocal_36.f_169), 0, 1, 1.0f, 0, 0, 1))
						{
							func_14(&iLocal_35, 3);
						}
						break;
					case 46:
						if (func_6(&sLocal_36, &(sLocal_36.f_169), func_34(11), 1, 0, 1.0f, 1, 0))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 47:
						if (func_36(&sLocal_36, &(sLocal_36.f_165), func_5(16), &(sLocal_36.f_169), 0, 1, 1.0f, 0, 0, 1))
						{
							func_14(&iLocal_35, 17);
						}
						break;
					case 41:
						if (func_20(sLocal_36.f_162, 2))
						{
							func_14(&iLocal_35, 43);
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_36.f_156, true, 0))
						{
							func_14(&iLocal_35, 43);
						}
						else
						{
							func_14(&iLocal_35, 46);
						}
						break;
					case 5:
						func_46(&sLocal_36, &iLocal_35);
						break;
					case 52:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(0), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 1);
							func_14(&iLocal_35, 69);
						}
						break;
					case 53:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(2), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 4);
							func_14(&iLocal_35, 69);
						}
						break;
					case 54:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(3), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 8);
							func_14(&iLocal_35, 69);
						}
						break;
					case 55:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(4), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 16);
							func_14(&iLocal_35, 69);
						}
						break;
					case 56:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(5), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 32);
							func_14(&iLocal_35, 69);
						}
						break;
					case 57:
						if (func_48(&sLocal_36, 64, func_47(0)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 64);
							func_14(&iLocal_35, 69);
						}
						break;
					case 58:
						if (func_48(&sLocal_36, 128, func_47(1)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 128);
							func_14(&iLocal_35, 69);
						}
						break;
					case 59:
						if (func_48(&sLocal_36, 256, func_47(2)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 256);
							func_14(&iLocal_35, 69);
						}
						break;
					case 60:
						if (func_48(&sLocal_36, (1 << 9), func_47(3)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 9));
							func_14(&iLocal_35, 69);
						}
						break;
					case 61:
						if (func_48(&sLocal_36, (1 << 10), func_47(4)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 10));
							func_14(&iLocal_35, 69);
						}
						break;
					case 62:
						if (func_48(&sLocal_36, (1 << 11), func_47(5)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 11));
							func_14(&iLocal_35, 69);
						}
						break;
					case 63:
						if (func_48(&sLocal_36, (1 << 12), func_47(6)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 12));
							func_14(&iLocal_35, 69);
						}
						break;
					case 64:
						if (func_48(&sLocal_36, (1 << 13), func_47(7)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 13));
							func_14(&iLocal_35, 69);
						}
						break;
					case 65:
						if (func_48(&sLocal_36, 2, func_47(8)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), 2);
							func_14(&iLocal_35, 69);
						}
						break;
					case 74:
						if (func_48(&sLocal_36, (1 << 21), func_47(16)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 21));
							func_14(&iLocal_35, 69);
						}
						break;
					case 66:
						if (func_48(&sLocal_36, (1 << 14), func_47(9)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							if (!func_49(4, (1 << 24)))
							{
								func_50(4, (1 << 24), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 14));
							func_14(&iLocal_35, 69);
						}
						break;
					case 67:
						if (func_48(&sLocal_36, (1 << 15), func_47(10)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 15));
							func_14(&iLocal_35, 69);
						}
						break;
					case 68:
						if (func_48(&sLocal_36, (1 << 16), func_47(11)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 16));
							func_14(&iLocal_35, 69);
						}
						break;
					case 69:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(26), 0, 1, 1065353216, 1, 0))
						{
							func_14(&iLocal_35, 5);
						}
						break;
					case 71:
						if (func_48(&sLocal_36, (1 << 18), func_47(13)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 18));
							func_14(&iLocal_35, 69);
						}
						break;
					case 72:
						if (func_48(&sLocal_36, (1 << 19), func_47(14)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 19));
							func_14(&iLocal_35, 69);
						}
						break;
					case 73:
						if (func_48(&sLocal_36, (1 << 20), func_47(15)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 20));
							func_14(&iLocal_35, 69);
						}
						break;
					case 76:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(22), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 22));
							func_14(&iLocal_35, 69);
						}
						break;
					case 77:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(23), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 23));
							func_14(&iLocal_35, 69);
						}
						break;
					case 78:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(24), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 24));
							func_14(&iLocal_35, 69);
						}
						break;
					case 79:
						if (func_6(&sLocal_36, &(sLocal_36.f_171), func_43(25), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 25));
							func_14(&iLocal_35, 69);
						}
						break;
					case 70:
						if (func_48(&sLocal_36, (1 << 17), func_47(12)))
						{
							if (!func_20(sLocal_36.f_162, 1))
							{
								func_27(&(sLocal_36.f_162), 1);
							}
							func_27(&(sLocal_36.f_163), (1 << 17));
							func_14(&iLocal_35, 69);
						}
						break;
					case 91:
						if (!ENTITY::IS_ENTITY_DEAD(sLocal_36.f_143[0]) && FIRE::IS_ENTITY_ON_FIRE(sLocal_36.f_143[0]))
						{
							func_51(sLocal_36.f_143[0], 0, 0);
						}
						func_14(&iLocal_35, 93);
						break;
					case 92:
						break;
					case 93:
						break;
					default:
						break;
				}
				func_52(&sLocal_36, &iLocal_35);
			}
		}
	}
}

void func_1(var uParam0, bool bParam1)
{
	int iVar0;

	func_53(4);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
	func_54(&(uParam0->f_224), 0, 1, 1, 0);
	func_55(&(uParam0->f_203), &(uParam0->f_224));
	func_41(0);
	func_56(uParam0);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		uParam0->f_186 = 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_145))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_145);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_146))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_146);
	}
	func_57(&uLocal_14);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_165) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_165, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_165, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_165, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_169) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_169, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_169, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_169, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_171) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_171, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_171, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_171, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, -0.1f, 0, true, true, true, false, true);
	}
	if (func_58(uParam0->f_136) && (func_59(uParam0->f_136) || func_60(uParam0->f_136)))
	{
		func_61(uParam0->f_136, 0, 2);
	}
	if (func_62(&(uParam0->f_192)))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_192), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_147));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_148));
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_149[iVar0]));
		}
		iVar0++;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_165))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_165);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_154));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_165))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_165);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_171);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_155))
	{
		func_63(uParam0->f_155);
		VOLUME::DELETE_VOLUME(uParam0->f_155);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_156))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_156);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_158))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_158);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_159))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_159);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_157))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_157);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_157);
		VOLUME::DELETE_VOLUME(uParam0->f_157);
	}
	func_64(uParam0);
	func_65(&(uParam0->f_143[0]), &(uParam0->f_176), joaat("EVENT_SHOCKING_BEAT_INTERESTING"), 20.0f, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_143[0], 0.0f);
	}
	if (bParam1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[4 /*638*/][func_66(4) /*48*/].f_47))
		{
			VOLUME::DELETE_VOLUME(Global_1396257[4 /*638*/][func_66(4) /*48*/].f_47);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 153 /*PCF_0x23E3351E*/, false);
			PED::DELETE_PED(&(uParam0->f_143[0]));
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	if (func_20(uParam0->f_162, 4))
	{
		func_67(uParam0);
	}
	if (*iParam1 <= 2 || *iParam1 >= 91)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_143[0]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]) && PED::IS_PED_RAGDOLL(uParam0->f_143[0]))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		func_51(uParam0->f_143[0], 0, 0);
		Global_40.f_11623[4 /*8*/].f_2 = func_68();
		func_69(&(uParam0->f_143[0]));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		func_14(iParam1, 91);
		return;
	}
	if (!func_70(uParam0->f_143[0], 0))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		Global_40.f_11623[4 /*8*/].f_2 = func_68();
		func_69(&(uParam0->f_143[0]));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		func_14(iParam1, 91);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_143[0], true))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		Global_40.f_11623[4 /*8*/].f_2 = func_68();
		func_69(&(uParam0->f_143[0]));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		func_14(iParam1, 91);
		return;
	}
	if (func_71(uParam0, iParam1))
	{
		return;
	}
	if (func_72(uParam0))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		func_73(4);
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_143[0]))
		{
			func_74(uParam0->f_143[0], 0);
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4 + 1);
		iVar1 = iVar0;
		sVar2 = func_75(iVar1);
		iVar3 = func_76(iVar1);
		func_77(uParam0->f_143[0], sVar2, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), Global_35, 1, "CASSIDY", iVar3, 1);
		func_39(uParam0, 1, 1);
		if (!func_20(uParam0->f_162, 4))
		{
			func_27(&(uParam0->f_162), 4);
		}
	}
}

void func_3(var uParam0, int iParam1, var uParam2)
{
	if (!func_20(uParam0->f_162, (1 << 19)))
	{
		if (func_78(4, func_66(4), uParam2, uParam0->f_143[0]))
		{
			if (*iParam1 >= 6 && *iParam1 <= 23)
			{
				func_27(&(uParam0->f_162), (1 << 19));
				func_14(iParam1, 88);
			}
			else if (*iParam1 >= 24 && *iParam1 <= 80)
			{
			}
		}
	}
	if (!func_70(Global_35, 0))
	{
		func_14(iParam1, 88);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[4 /*638*/][func_66(4) /*48*/].f_47))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[4 /*638*/][func_66(4) /*48*/].f_47, true, 0))
		{
			func_1(uParam0, 1);
			func_14(iParam1, 93);
		}
	}
	else
	{
		func_1(uParam0, 1);
		func_14(iParam1, 93);
	}
}

bool func_4(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_79())
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
		if (func_80(0) == 7 || func_81())
		{
			return true;
		}
	}
	if (func_82(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 10)))
	{
		return true;
	}
	return false;
}

char[] func_5(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PBDMC_IG1_P1_1xHELP";
			break;
		case 1:
			sVar0 = "pbl_PBDMC_IG1_P1_3xHELP";
			break;
		case 2:
			sVar0 = "pbl_PBDMC_IG1_P1_CHARITY";
			break;
		case 3:
			sVar0 = "pbl_PBDMC_IG1_P1_PENNY";
			break;
		case 4:
			sVar0 = "pbl_PBDMC_IG1_P1_COUGH";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG1_P1_GIVE";
			break;
		case 6:
			sVar0 = "pbl_PDBMC_IG1_P1_HELP_ME";
			break;
		case 7:
			sVar0 = "pbl_PDBMC_IG1_P1_HELP_ME_PLEASE";
			break;
		case 8:
			sVar0 = "pbl_PDBMC_IG1_P1_KINDNESS";
			break;
		case 9:
			sVar0 = "pbl_PDBMC_IG1_P1_YOUR_FORTUNE";
			break;
		case 10:
			sVar0 = "pbl_PDBMC_IG2_P1_BLIND_OLD_FOOL";
			break;
		case 11:
			sVar0 = "pbl_PDBMC_IG2_P1_I_TELL_THEE";
			break;
		case 12:
			sVar0 = "pbl_PDBMC_IG2_P1_OLD_BLIND_MAN";
			break;
		case 13:
			sVar0 = "pbl_PDBMC_IG2_P1_SEEK_REDEMPTION";
			break;
		case 14:
			sVar0 = "pbl_PDBMC_IG2_P1_SEEK_SALVATION";
			break;
		case 15:
			sVar0 = "pbl_PDBMC_IG2_P1_THEE_SHALL_SEE";
			break;
		case 16:
			sVar0 = "pbl_base_reset";
			break;
		case 23:
			sVar0 = "pbl_Sitting_BASE";
			break;
		case 24:
			sVar0 = "pbl_Count_Money";
			break;
		case 25:
			sVar0 = "pbl_Sit_to_Stand";
			break;
		case 26:
			sVar0 = "pbl_Stand_to_Sit";
			break;
		case 27:
			sVar0 = "pbl_Cower_to_Sitting";
			break;
		case 28:
			sVar0 = "pbl_Sit_to_Cower";
			break;
		case 29:
			sVar0 = "pbl_Stand_To_Cower";
			break;
		case 30:
			sVar0 = "pbl_Cower_Base";
			break;
		case 31:
			sVar0 = "pbl_BackLeft_Enter";
			break;
		case 32:
			sVar0 = "pbl_BackRight_Enter";
			break;
		case 33:
			sVar0 = "pbl_Walk_Enter_Right_Slow";
			break;
		case 34:
			sVar0 = "pbl_Walk_Enter_Right_Med";
			break;
		case 35:
			sVar0 = "pbl_Walk_Enter_Right_Fast";
			break;
		case 36:
			sVar0 = "pbl_Walk_Enter_Left_Slow";
			break;
		case 37:
			sVar0 = "pbl_Walk_Enter_Left_Med";
			break;
		case 38:
			sVar0 = "pbl_Walk_Enter_Left_Fast";
			break;
		case 39:
			sVar0 = "pbl_Back_Enter";
			break;
	}
	return sVar0;
}

bool func_6(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (bParam7)
		{
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
			if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam1, sParam2)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
				return false;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam1, fParam5);
				return false;
			}
		}
		else if ((!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false)) && !ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
		}
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			if (((!bParam7 && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam1, sParam2)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
			}
			if (bParam6)
			{
				if (!func_83(&(uParam0->f_143[0]), 50.0f, 0))
				{
					return false;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -973995573))
			{
				func_84(12, 0, 0, "", uParam0->f_143[0], 0, 1065353216, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1993324115))
			{
				func_77(uParam0->f_143[0], "GREET_GENERAL_STRANGER", joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), Global_35, 1, "CASSIDY", 0, 1);
			}
			if ((!bParam7 && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam1, fParam5);
				return false;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base_end", true) && !bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_ARMIN_base_end", true) && !bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base", true) && bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_ARMIN_base", true) && bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
				else if (bParam4 && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1527527524))
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_7(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_68();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0.0f)
	{
		if (!func_26(Global_35, *uParam2, fParam6, 1))
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
		func_31(uParam3, 0.0f);
	}
	else if (func_86(uParam3) >= 2.0f)
	{
		if (!func_87(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_73(iParam0);
			*uParam4 = 1;
			func_29(uParam3);
			return 1;
		}
		else
		{
			func_73(iParam0);
			*uParam4 = 1;
			func_29(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_156))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	}
	if (func_20(uParam0->f_162, 2) || func_20(uParam0->f_162, 4))
	{
		func_88(&(uParam0->f_203), 0);
		func_89(&(uParam0->f_224[0 /*17*/]), 0, 0);
		func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
		uParam0->f_259 = 3;
	}
	else
	{
		if (!func_20(uParam0->f_162, 128))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_38(uParam0, 1);
				func_89(&(uParam0->f_224[0 /*17*/]), 0, 0);
				func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
				func_27(&(uParam0->f_162), 128);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) || PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_89(&(uParam0->f_224[0 /*17*/]), 0, 0);
				func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if ((((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) || PED::IS_PED_ON_MOUNT(Global_35)) || func_90()) || func_91(&(uParam0->f_143[0]), &(uParam0->f_145), 1071644672, 1074790400)) || func_92(&(uParam0->f_143[0]), &(uParam0->f_160), &(uParam0->f_146), 1.75f, 2.25f, 2502655))
		{
			if (uParam0->f_259 != 3)
			{
				func_88(&(uParam0->f_203), 0);
				func_89(&(uParam0->f_224[0 /*17*/]), 0, 0);
				func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if ((!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_169, false) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_143[0])) || *iParam1 != 49)
		{
			if (uParam0->f_259 != 3)
			{
				func_88(&(uParam0->f_203), 0);
				func_38(uParam0, 1);
				func_89(&(uParam0->f_224[0 /*17*/]), 0, 0);
				func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if (uParam0->f_259 != 2)
		{
			func_88(&(uParam0->f_203), 0);
			func_38(uParam0, 1);
			func_89(&(uParam0->f_224[0 /*17*/]), 1, 0);
			func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
			uParam0->f_259 = 2;
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
		{
			if (func_93(1) < 100 || PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (uParam0->f_259 != 3)
				{
					func_88(&(uParam0->f_203), 0);
					func_89(&(uParam0->f_224[0 /*17*/]), 0, 0);
					func_89(&(uParam0->f_224[1 /*17*/]), 0, 0);
					uParam0->f_259 = 3;
				}
			}
		}
	}
	switch (func_95(&(uParam0->f_143[0]), &(uParam0->f_203), 18.0f, &(uParam0->f_224), 0.0f, 2, 0, "", func_94(uParam0->f_259, 0, 0), 0, 0, 2, -1082130432))
	{
		case 0:
			if (!func_20(uParam0->f_162, 2))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				func_96(uParam0->f_143[0], iVar0);
				func_97(4);
				func_98(4, &(uParam0->f_143[0]), &(uParam0->f_162), 256);
				func_99();
				func_41(1);
				func_100(uParam0);
				func_102(4, func_101());
				func_27(&(uParam0->f_162), 2);
			}
			break;
	}
}

void func_9(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, (1 << 9)) && uParam0->f_190 >= 4)
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_143[0]))
	{
		if (func_103(&(uParam0->f_143[0]), &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			func_27(&(uParam0->f_162), (1 << 9));
			return;
		}
	}
	if (iParam1 >= 6 && iParam1 <= 16)
	{
		if (func_103(&(uParam0->f_143[0]), &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			func_27(&(uParam0->f_162), (1 << 9));
			return;
		}
	}
	else if (iParam1 >= 18 && iParam1 <= 23)
	{
		if (func_103(&(uParam0->f_143[0]), &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			func_27(&(uParam0->f_162), (1 << 9));
			return;
		}
	}
}

void func_10(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_104(iParam3);
	if (fParam4 == 0.0f)
	{
		if (func_26(iParam0, Global_35, 15.0f, 1))
		{
			if (!func_105(*uParam1, iParam2))
			{
				if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
				{
					func_106(uParam1, iParam2);
				}
			}
		}
		else if (func_105(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_107(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15.0f)
	{
		if (!func_105(*uParam1, iParam2))
		{
			if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
			{
				func_106(uParam1, iParam2);
			}
		}
	}
	else if (func_105(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_107(uParam1, iParam2);
	}
}

void func_11(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_143[0]))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_143[0], 0, 1);
}

void func_12(var uParam0, int iParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	PED::_RESERVE_AMBIENT_PEDS(1);
	uParam0->f_164 = (16 - 1);
	uParam0->f_168 = 0;
	uParam0->f_170 = (26 - 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_165))
	{
		uParam0->f_165 = ANIMSCENE::_CREATE_ANIM_SCENE(func_108(), 32, func_5(16), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_169))
	{
		uParam0->f_169 = ANIMSCENE::_CREATE_ANIM_SCENE(func_109(), 32, func_34(9), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		uParam0->f_171 = ANIMSCENE::_CREATE_ANIM_SCENE(func_110(), 32, func_43(0), false, true);
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_165) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_169)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_165);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_169);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_171);
		HUD::TEXT_BLOCK_REQUEST("SPBC");
		HUD::TEXT_BLOCK_REQUEST("SPBMCAU");
		HUD::TEXT_BLOCK_REQUEST("SPDEF");
		STREAMING::REQUEST_MODEL(uParam0->f_137, false);
		STREAMING::REQUEST_MODEL(uParam0->f_138, false);
		STREAMING::REQUEST_MODEL(uParam0->f_139, false);
		STREAMING::REQUEST_MODEL(uParam0->f_140, false);
		STREAMING::REQUEST_MODEL(uParam0->f_141, false);
		func_111(uParam0);
		func_112(uParam0->f_155, "SP_BlindManCassidy1_Block", 1, 0, 0, 0, -1082130432);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_157, 2238463, 0, 0, -1, -1, 10);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_157, 2238463, 0, 0, -1, -1, 0);
		sVar0 = { func_113() /*6*/ };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_165, sVar0, sVar0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_169, sVar0, sVar0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_171, sVar0, sVar0.f_3, 2);
		uParam0->f_136 = func_115(4, 0, 9, func_114(4));
		if (!func_58(uParam0->f_136))
		{
		}
		if (func_42())
		{
			func_116(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_116(uParam0, Global_35, "ARTHUR", 0);
		}
		func_117(uParam2);
		func_118(&(uParam0->f_98), 1);
		func_119(&(uParam0->f_98), 0);
		func_120(&(uParam0->f_98), 0);
		func_121(&(uParam0->f_98), 0);
		func_122(&(uParam0->f_98), 1);
		func_123(&(uParam0->f_98), 0);
		func_124(&(uParam0->f_98), 0);
		func_125(&(uParam0->f_98), 0);
		func_126(&(uParam0->f_98), 0);
		func_127(&(uParam0->f_98), 1);
		func_128(&(uParam0->f_98), 1);
		func_129(&(uParam0->f_98), 1);
		func_130(&(uParam0->f_98), 1);
		func_131(&(uParam0->f_98), 1);
		func_132(&(uParam0->f_98), 1);
		func_133(&(uParam0->f_98), 1);
		func_134(&(uParam0->f_98), 1);
		func_135(&(uParam0->f_98), 1);
		func_136(&(uParam0->f_98), 1);
		if (func_58(uParam0->f_136))
		{
			if (!func_137(uParam0->f_136, 1))
			{
				func_14(iParam1, 1);
			}
			else
			{
				func_14(iParam1, 92);
			}
		}
	}
}

bool func_13(var uParam0, var uParam1)
{
	if ((((((((((ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_165, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_169, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_171, true, false)) && HUD::TEXT_BLOCK_IS_LOADED("SPBC")) && HUD::TEXT_BLOCK_IS_LOADED("SPBMCAU")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_137)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_138)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_139)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_140)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_141)) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1)
	{
		if (func_138(&(uParam0->f_136), uParam1))
		{
			return true;
		}
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_165, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_169, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_171, true, false))
	{
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPBC"))
	{
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPBMCAU"))
	{
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPDEF"))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_137))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_138))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_139))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_141))
	{
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() != 1)
	{
	}
	return false;
}

void func_14(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_15(var uParam0)
{
	struct<4> /*32*/ sVar0;
	Vector3 vVar4;
	Vector3 vVar8;

	sVar0 = { func_139(0) /*4*/ };
	vVar4 = { func_139(2) /*4*/ };
	vVar8 = { func_139(1) /*4*/ };
	if (((func_140(&(uParam0->f_143[0]), uParam0->f_137, sVar0, sVar0.f_3, 1, 1, 1) & func_141(&(uParam0->f_147), uParam0->f_138, vVar8)) & func_141(&(uParam0->f_148), uParam0->f_139, vVar4)) & func_141(&(uParam0->f_154), uParam0->f_141, vVar8.x, vVar8.y, (vVar8.z - 1.0f)))
	{
		if (func_70(uParam0->f_143[0], 0))
		{
			func_143(uParam0->f_143[0], func_142(sVar0));
			func_144(uParam0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_143[0], "special_ped_group", 0.0f);
			PED::ADD_RELATIONSHIP_GROUP("blind_man_cassidy", &(uParam0->f_202));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_143[0], uParam0->f_202);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, uParam0->f_202, joaat("REL_COP"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_143[0], true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 317 /*PCF_0x8E385F10*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 344 /*PCF_0x345B8591*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 26 /*PCF_DisableMelee*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 448 /*PCF_TreatAsMissionPopTypeForSpeech*/, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 153 /*PCF_0x23E3351E*/, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_143[0], 524369);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_143[0], true, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_143[0], 44 /*PCF_CowerInsteadOfFlee*/, true);
			func_116(uParam0, uParam0->f_143[0], "CASSIDY", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_143[0], sVar0, sVar0.f_3, true, false, true);
			if (func_42())
			{
				func_116(uParam0, Global_35, "JOHN", 0);
			}
			else
			{
				func_116(uParam0, Global_35, "ARTHUR", 0);
			}
			func_145(uParam0->f_143[0], 1);
			PED::_SET_PED_KNOCKED_BY_ONE_HIT(uParam0->f_143[0], 5.0f);
			PED::_0x2E5B5D1F1453E08E(uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "cs_cassidy", uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_wedgestick02x", uParam0->f_148, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^1", uParam0->f_149[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^2", uParam0->f_149[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^3", uParam0->f_149[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coinStack02", uParam0->f_154, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "cs_cassidy", uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_wedgestick02x", uParam0->f_148, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^1", uParam0->f_149[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^2", uParam0->f_149[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^3", uParam0->f_149[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coinStack02", uParam0->f_154, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "cs_cassidy", uParam0->f_143[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^1", uParam0->f_149[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^2", uParam0->f_149[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^3", uParam0->f_149[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_wedgestick02x", uParam0->f_148, 0);
			func_146(&(uParam0->f_143[0]), &(uParam0->f_176), joaat("EVENT_SHOCKING_BEAT_INTERESTING"), 20.0f, 3600.0f);
			func_38(uParam0, 0);
			func_147(uParam0->f_143[0], 4);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_143[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0.0f, 0.0f, 0.0f, 0, "SPID_BLIND_MAN_CASSIDY");
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_158, uParam0->f_143[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
			PED::_CLEAR_PED_DESIRED_LOCO_FOR_MODEL(uParam0->f_143[0]);
			PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(uParam0->f_143[0]);
			if (!func_62(&(uParam0->f_192)))
			{
				sVar0 = { func_139(3) /*4*/ };
				uParam0->f_192 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(sVar0, sVar0.f_3, 1, -1, 0);
			}
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_159, uParam0->f_143[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
			VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_159, false);
			VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_159, true);
			return true;
		}
	}
	return false;
}

int func_16()
{
	int iVar0;

	switch (func_148())
	{
		case 3:
			iVar0 = 86;
			break;
		case 9:
			iVar0 = 86;
			break;
		case 10:
			iVar0 = 85;
			break;
		case 13:
			iVar0 = 83;
			break;
		case 4:
			iVar0 = 86;
			break;
	}
	return iVar0;
}

void func_17(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, 4))
	{
		func_14(iParam1, 90);
	}
	else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) && !func_20(uParam0->f_162, 2)) && !func_20(uParam0->f_162, 1))
	{
		func_14(iParam1, 50);
	}
	else if (func_20(uParam0->f_162, 2) && !func_20(uParam0->f_162, 1))
	{
		func_14(iParam1, 51);
	}
	else
	{
		func_14(iParam1, 48);
	}
}

bool func_18(var uParam0, var uParam1, bool bParam2)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			if ((((ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1527527524) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_ARMIN_base_end", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_ARMIN_base", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base_end", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base", true))
			{
				if (bParam2)
				{
					return true;
				}
				else if (!func_30(&(uParam0->f_130)))
				{
					uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
					func_31(&(uParam0->f_130), 0.0f);
				}
				else if (func_86(&(uParam0->f_130)) > uParam0->f_161)
				{
					func_29(&(uParam0->f_130));
					return true;
				}
			}
		}
	}
	return false;
}

void func_19(var uParam0, int iParam1)
{
	if (uParam0->f_173 == -1)
	{
		uParam0->f_173 = func_149(0, (16 - 1), uParam0->f_164);
	}
	uParam0->f_164 = uParam0->f_173;
	switch (uParam0->f_173)
	{
		case 0:
			uParam0->f_173++;
			func_14(iParam1, 6);
			break;
		case 1:
			uParam0->f_173++;
			func_14(iParam1, 7);
			break;
		case 2:
			uParam0->f_173++;
			func_14(iParam1, 8);
			break;
		case 3:
			uParam0->f_173++;
			func_14(iParam1, 9);
			break;
		case 4:
			uParam0->f_173++;
			func_14(iParam1, 10);
			break;
		case 5:
			uParam0->f_173++;
			func_14(iParam1, 11);
			break;
		case 6:
			uParam0->f_173++;
			func_14(iParam1, 12);
			break;
		case 7:
			uParam0->f_173++;
			func_14(iParam1, 14);
			break;
		case 8:
			uParam0->f_173++;
			func_14(iParam1, 15);
			break;
		case 9:
			uParam0->f_173++;
			func_14(iParam1, 16);
			break;
		case 10:
			uParam0->f_173++;
			func_14(iParam1, 18);
			break;
		case 11:
			uParam0->f_173++;
			func_14(iParam1, 19);
			break;
		case 12:
			uParam0->f_173++;
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CASSIDY"));
			func_14(iParam1, 20);
			break;
		case 13:
			uParam0->f_173++;
			func_14(iParam1, 21);
			break;
		case 14:
			uParam0->f_173++;
			func_14(iParam1, 22);
			break;
		case 15:
			uParam0->f_173 = -1;
			func_14(iParam1, 23);
			break;
		case 16:
			func_14(iParam1, 17);
			break;
		default:
			uParam0->f_173 = -1;
			break;
	}
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

char[] func_21(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_IDLE_A";
			break;
		case 1:
			sVar0 = "pbl_IDLE_B";
			break;
		case 2:
			sVar0 = "pbl_IDLE_C";
			break;
		case 3:
			sVar0 = "pbl_IDLE_D";
			break;
		case 4:
			sVar0 = "pbl_IDLE_E";
			break;
		case 5:
			sVar0 = "pbl_IDLE_F";
			break;
		case 6:
			sVar0 = "pbl_Idle_G";
			break;
		case 7:
			sVar0 = "pbl_Idle_H";
			break;
		case 8:
			sVar0 = "pbl_Idle_I";
			break;
		default:
			sVar0 = "pbl_IDLE_A";
			break;
	}
	return sVar0;
}

void func_22(var uParam0)
{
	*uParam0++;
	if (*uParam0 > 5)
	{
		*uParam0 = 0;
	}
}

void func_23(var uParam0)
{
	if (uParam0->f_178 >= 5)
	{
		return;
	}
	if (!func_30(&(uParam0->f_130)))
	{
		uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(7, 10));
		func_31(&(uParam0->f_130), 0.0f);
	}
	else if (func_86(&(uParam0->f_130)) > uParam0->f_161)
	{
		if (uParam0->f_178 < 3)
		{
			func_77(uParam0->f_143[0], "PLAYER_STILL_HANGING", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), Global_35, 0, "CASSIDY", 0, 1);
		}
		else
		{
			func_77(uParam0->f_143[0], "IGNORING_YOU", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), Global_35, 0, "CASSIDY", 0, 1);
		}
		func_31(&(uParam0->f_130), 0.0f);
		func_29(&(uParam0->f_130));
		uParam0->f_178++;
	}
}

void func_24()
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
}

void func_25(var uParam0)
{
	if (AUDIO::_IS_ANY_CONVERSATION_PLAYING(true))
	{
		return;
	}
	if (func_20(uParam0->f_162, 1))
	{
		return;
	}
	if (func_20(uParam0->f_162, (1 << 19)))
	{
		return;
	}
	if (!func_30(&(uParam0->f_130)))
	{
		uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
		func_31(&(uParam0->f_130), 0.0f);
		return;
	}
	else if (func_86(&(uParam0->f_130)) > uParam0->f_161 && !AUDIO::_IS_ANY_CONVERSATION_PLAYING(true))
	{
		func_152(uParam0, func_151(func_150(uParam0->f_173)), 0, -1, 0, 0);
		uParam0->f_173++;
		func_29(&(uParam0->f_130));
		return;
	}
}

bool func_26(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_27(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

void func_28(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, 4))
	{
		func_14(iParam1, 90);
	}
	else if (func_20(uParam0->f_162, 2))
	{
		func_14(iParam1, 51);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
	{
		func_14(iParam1, 51);
	}
	else
	{
		func_14(iParam1, 49);
	}
}

void func_29(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_30(var uParam0)
{
	return func_153(*uParam0, 1);
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_154() - fParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_32(var uParam0)
{
	if (!func_30(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_157(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_158() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

void func_33(var uParam0, int iParam1)
{
	switch (uParam0->f_168)
	{
		case 0:
			uParam0->f_168++;
			func_14(iParam1, 24);
			break;
		case 1:
			uParam0->f_168++;
			func_14(iParam1, 25);
			break;
		case 2:
			uParam0->f_168++;
			func_14(iParam1, 26);
			break;
		case 3:
			uParam0->f_168++;
			func_14(iParam1, 27);
			break;
		case 4:
			uParam0->f_168++;
			func_14(iParam1, 29);
			break;
		case 5:
			uParam0->f_168++;
			func_14(iParam1, 30);
			break;
		case 6:
			uParam0->f_168++;
			func_14(iParam1, 38);
			break;
		case 7:
			uParam0->f_168 = 0;
			func_14(iParam1, 40);
			break;
		case 8:
			func_14(iParam1, 31);
			break;
		default:
			break;
	}
}

char* func_34(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PDBMC_IG3_A_DOLLAR";
			break;
		case 1:
			sVar0 = "pbl_PDBMC_IG3_LEARN_ABOUT";
			break;
		case 2:
			sVar0 = "pbl_PDBMC_IG3_P1_BE_NOT_AFRAID";
			break;
		case 3:
			sVar0 = "pbl_PDBMC_IG3_P1_COME_CLOSE";
			break;
		case 4:
			sVar0 = "pbl_PDBMC_IG3_P1_WOULD_YOU";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG3_SEE_TOMORROW";
			break;
		case 6:
			sVar0 = "pbl_PDBMC_IG4_P1_BE_NOT_AFRAID";
			break;
		case 7:
			sVar0 = "pbl_PDBMC_IG4_P1_JUST_A_SAD_OLD";
			break;
		case 8:
			sVar0 = "pbl_base_reset";
			break;
		case 9:
			sVar0 = "pbl_ARMIN_base_reset";
			break;
		case 10:
			sVar0 = "pbl_HANDOUT_TO_HANDIN";
			break;
		case 11:
			sVar0 = "pbl_HANDIN_TO_HANDOUT";
			break;
		case 12:
			sVar0 = "pbl_Give_Money";
			break;
	}
	return sVar0;
}

bool func_35(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if ((func_20(*uParam1, 2) && ANIMSCENE::GET_ANIM_SCENE_PHASE(*uParam2) >= fParam3) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_36(var uParam0, var uParam1, char* sParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, char* sParam8, bool bParam9)
{
	struct<4> /*32*/ sVar0;

	if (func_159(uParam1))
	{
		sVar0 = { func_113() /*6*/ };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam1, sVar0, sVar0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "cs_cassidy", uParam0->f_143[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cuptin01x", uParam0->f_147, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_wedgestick02x", uParam0->f_148, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x", uParam0->f_149[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^1", uParam0->f_149[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^2", uParam0->f_149[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^3", uParam0->f_149[3], 0);
		if (bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
		}
		if (bParam9)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coinStack02", uParam0->f_154, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam4, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam5, false);
		func_6(uParam0, uParam1, sParam2, bParam4, bParam5, fParam6, 1, 0);
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_Cower_Base", true) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
		{
			ANIMSCENE::RESET_ANIM_SCENE(*uParam3, sParam8);
			return true;
		}
	}
	return false;
}

bool func_37(var uParam0)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar4;
	int iVar16;
	int iVar17;
	float fVar18;

	if (func_20(uParam0->f_162, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_186 = 0;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
	{
		return false;
	}
	if (!func_20(uParam0->f_162, (1 << 14)))
	{
		func_41(1);
		iVar16 = func_160(Global_35, 0);
		iVar17 = func_160(Global_35, 1);
		if (func_161(iVar16) || func_161(iVar17))
		{
			if (func_162(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAVMESH_TO_COORD_ADVANCED")))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, true);
				return false;
			}
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			return false;
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_169, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_169);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_169, func_34(12)))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_169, func_34(12));
		}
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_169, "player_zero", &sVar4, true, func_34(12), 2))
		{
			fVar18 = ENTITY::GET_ENTITY_HEADING(Global_35);
			if (!func_163(Global_35, sVar4, 0.25f, 1, 1))
			{
				if (!func_162(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAVMESH_TO_COORD_ADVANCED")))
				{
					if (!uParam0->f_186)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
						uParam0->f_186 = 1;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Global_35, sVar4, 1.0f, 15000, 0.1f, (1 << 20), sVar0, sVar4.f_3.f_2);
				}
			}
			else
			{
				if (sVar4.f_3.f_2 < 0.0f)
				{
					sVar4.f_3.f_2 += 360.0f;
				}
				if (fVar18 <= (sVar4.f_3.f_2 + 10.0f) && fVar18 >= (sVar4.f_3.f_2 - 10.0f))
				{
					func_27(&(uParam0->f_162), (1 << 14));
					return true;
				}
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_38(var uParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (bParam1)
	{
		sVar0 = { func_164(0) /*2*/ };
	}
	else
	{
		sVar0 = { func_164(1) /*2*/ };
	}
	sVar2 = { func_164(2) /*2*/ };
	func_165(&(uParam0->f_224[0 /*17*/]), sVar0.f_0, 100, "", sVar0.f_1, 0, 0, 0, 1);
	func_166(&(uParam0->f_224[1 /*17*/]), sVar2.f_0, "", sVar2.f_1, 0, 0, 0, 1, 0);
	func_167(&(uParam0->f_224[0 /*17*/]), 1);
}

void func_39(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_154));
		}
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::IS_ENTITY_VISIBLE(uParam0->f_149[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_149[iVar0], false);
			}
			iVar0++;
		}
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_168(iParam0);
	if (bParam3)
	{
		func_169(iParam0, sParam1, iParam2);
	}
}

void func_41(bool bParam0)
{
	bool bVar0;

	bVar0 = func_170();
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

bool func_42()
{
	if (func_171() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

char* func_43(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PDBMC_IG6_P1_BAD_NEWS";
			break;
		case 2:
			sVar0 = "pbl_PDBMC_IG6_P1_I_SENSE";
			break;
		case 3:
			sVar0 = "pbl_PDBMC_IG6_P1_THANKYOU_SIR";
			break;
		case 4:
			sVar0 = "pbl_PDBMC_IG6_P1_WHO_YOU_THINK";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG6_P1_YOUR_WHOLE_LIFE";
			break;
		case 23:
			sVar0 = "pbl_PDBCM_IG8_P1_COME_FOR_YOU";
			break;
		case 22:
			sVar0 = "pbl_PDBCM_IG8_P1_ENJOY_THE_WORLD";
			break;
		case 25:
			sVar0 = "pbl_PDBMC_IG8_P1_TWO_STRANGERS";
			break;
		case 24:
			sVar0 = "pbl_PDBMC_IG8_P1_YOU_HAVE_LEARNED";
			break;
		case 26:
			sVar0 = "pbl_base_reset";
			break;
		case 27:
			sVar0 = "pbl_PDBMC_IG6_P1_EXIT";
			break;
	}
	return sVar0;
}

bool func_44(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_137(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

char[] func_45()
{
	return "pbl_base_reset";
}

void func_46(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_20(uParam0->f_162, 4))
	{
		func_14(iParam1, 90);
	}
	else if (func_20(uParam0->f_162, 1))
	{
		func_172(uParam0);
		if (func_36(uParam0, &(uParam0->f_165), func_5(16), &(uParam0->f_171), 1, 0, 1.0f, 0, func_5(16), 1))
		{
			if (func_173(&(uParam0->f_136), &(uParam0->f_163)))
			{
				if (func_6(uParam0, &(uParam0->f_165), func_5(16), 1, 0, 1065353216, 1, 0))
				{
					func_14(iParam1, 17);
				}
			}
		}
	}
	else
	{
		bVar0 = func_101();
		if (func_174(uParam0, &(uParam0->f_163), bVar0))
		{
			if (bVar0)
			{
				if (func_175(uParam0))
				{
					func_176(uParam0, iParam1);
				}
			}
			else if (!func_44(77))
			{
				if (func_175(uParam0))
				{
					func_176(uParam0, iParam1);
				}
			}
			else if (func_175(uParam0))
			{
				func_176(uParam0, iParam1);
			}
		}
	}
}

char* func_47(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "SPBMC_IG6_F";
			break;
		case 1:
			sVar0 = "SPBMC_IG6_G";
			break;
		case 2:
			sVar0 = "SPBMC_IG6_H";
			break;
		case 3:
			sVar0 = "SPBMC_IG6_I";
			break;
		case 4:
			sVar0 = "SPBMC_IG6_J";
			break;
		case 5:
			sVar0 = "SPBMC_IG6_K";
			break;
		case 6:
			sVar0 = "SPBMC_IG6_L";
			break;
		case 7:
			sVar0 = "SPBMC_IG6_M";
			break;
		case 8:
			sVar0 = "SPBMC_IG6_N";
			break;
		case 16:
			sVar0 = "SPBMC_IG6_O";
			break;
		case 9:
			sVar0 = "SPBMC_IG6_P";
			break;
		case 10:
			sVar0 = "SPBMC_IG6_Q";
			break;
		case 11:
			sVar0 = "SPBMC_IG6_S";
			break;
		case 12:
			sVar0 = "SPBMC_IG6_STAY";
			break;
		case 13:
			sVar0 = "SPBMC_IG7_A";
			break;
		case 14:
			sVar0 = "SPBMC_IG7_B";
			break;
		case 15:
			sVar0 = "SPBMC_IG7_C";
			break;
	}
	return sVar0;
}

bool func_48(var uParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0[24];

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_143[0]))
	{
		return false;
	}
	cVar0 = { func_177(sParam2) /*3*/ };
	if (!func_178(&cVar0) && !func_20(uParam0->f_162, (1 << 16)))
	{
		func_152(uParam0, cVar0, 0, -1, 0, 0);
	}
	if (func_179(&cVar0))
	{
		func_27(&(uParam0->f_162), (1 << 16));
	}
	else if (func_20(uParam0->f_162, (1 << 16)))
	{
		return true;
	}
	return false;
}

bool func_49(int iParam0, int iParam1)
{
	return func_180(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

void func_50(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_181(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
	else
	{
		func_182(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
}

void func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243 /*PCF_0x0831CCD1*/, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (func_58(uParam0->f_136))
	{
		switch (*iParam1)
		{
			case 3:
			case 4:
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
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 45:
			case 46:
			case 47:
			case 70:
				break;
			case 5:
			case 52:
			case 53:
			case 54:
			case 55:
			case 56:
			case 57:
			case 58:
			case 59:
			case 60:
			case 61:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 67:
			case 68:
			case 69:
			case 71:
			case 72:
			case 73:
			case 74:
			case 76:
			case 77:
			case 78:
			case 79:
			case 80:
				break;
			case 91:
				break;
			case 92:
				func_1(uParam0, 1);
				break;
			case 93:
				break;
		}
	}
}

void func_53(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_183(0, -1);
	}
	func_184();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2--;
	Global_1935183.f_28 = 0;
}

void func_54(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_185((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_186(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_55(int* iParam0, var uParam1)
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
	func_187(iParam0, uParam1, 1);
	func_54(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_56(var uParam0)
{
	if (func_66(4) == 0)
	{
		if (((((((((((((((((func_20(uParam0->f_163, 1) && func_20(uParam0->f_163, 2)) && func_20(uParam0->f_163, 4)) && func_20(uParam0->f_163, 8)) && func_20(uParam0->f_163, 16)) && func_20(uParam0->f_163, 32)) && func_20(uParam0->f_163, 64)) && func_20(uParam0->f_163, 128)) && func_20(uParam0->f_163, 256)) && func_20(uParam0->f_163, (1 << 9))) && func_20(uParam0->f_163, (1 << 10))) && func_20(uParam0->f_163, (1 << 11))) && func_20(uParam0->f_163, (1 << 12))) && func_20(uParam0->f_163, (1 << 13))) && func_20(uParam0->f_163, (1 << 14))) && func_20(uParam0->f_163, (1 << 15))) && func_20(uParam0->f_163, (1 << 16))) && func_20(uParam0->f_163, (1 << 17)))
		{
			func_188(4, 1);
		}
	}
	else if (func_66(4) == 1)
	{
		if (((((((func_20(uParam0->f_163, (1 << 18)) && func_20(uParam0->f_163, (1 << 19))) && func_20(uParam0->f_163, (1 << 20))) && func_20(uParam0->f_163, (1 << 21))) && func_20(uParam0->f_163, (1 << 22))) && func_20(uParam0->f_163, (1 << 23))) && func_20(uParam0->f_163, (1 << 24))) && func_20(uParam0->f_163, (1 << 25)))
		{
			func_188(4, 12);
		}
	}
}

void func_57(var uParam0)
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
		func_29(&(uParam0->f_13));
	}
}

bool func_58(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_59(int iParam0)
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
		iVar0 = func_189(iParam0);
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

bool func_60(int iParam0)
{
	int iVar0;

	iVar0 = func_190(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_61(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_58(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_60(iParam0) && !func_59(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_191(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_60(iParam0))
	{
		iParam2 = -1;
	}
	if (func_189(iParam0) == 3 || (func_189(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_191(iParam0))))
	{
		func_193(func_192(iParam0), func_191(iParam0), iParam2);
		if ((!func_58(Global_1572864.f_8) && !func_194(0, 1, 0)) && !func_195(Global_1935630, (1 << 15)))
		{
			iVar0 = func_196(iParam0);
			if (iVar0 != -1)
			{
				func_197(0);
			}
			else if (func_192(iParam0) == 8)
			{
				iVar0 = func_198();
				if (iVar0 != -1)
				{
					func_197(0);
				}
			}
		}
	}
	func_199(iParam0, 0);
	if (func_200(0) == iParam0)
	{
		func_201(1);
		func_202(0);
		func_203(1);
	}
	func_204(iParam0, 1);
	func_205(iParam0);
}

bool func_62(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_63(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_206(vVar0, 0);
}

void func_64(var uParam0)
{
	func_207(uParam0->f_155);
	func_207(uParam0->f_156);
	func_207(uParam0->f_157);
	func_207(uParam0->f_158);
	func_207(uParam0->f_159);
}

void func_65(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

int func_66(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

void func_67(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;

	bVar3 = uParam0->f_143[0];
	iVar4 = uParam0->f_142;
	if (!func_208(&(uParam0->f_180)))
	{
		func_209(&(uParam0->f_180), 0);
	}
	if (uParam0->f_179 == 0)
	{
		uParam0->f_179 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000);
	}
	if (func_210(&(uParam0->f_180), uParam0->f_179))
	{
		fVar5 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bVar3, true, false));
		if (fVar5 > 25.0f)
		{
			return;
		}
		if (fVar5 < 8.0f)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1 + 1);
		}
		else
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(5, 8);
		}
		iVar4 = iVar2;
		if (uParam0->f_142 == iVar4 || iVar4 == -1)
		{
			uParam0->f_179 = BUILTIN::ROUND(((float)uParam0->f_179 * 0.5f));
			return;
		}
		sVar0 = func_75(iVar4);
		iVar1 = func_76(iVar4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bVar3))
		{
			func_77(bVar3, sVar0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), Global_35, 1, "CASSIDY", iVar1, 1);
		}
		uParam0->f_142 = iVar4;
		uParam0->f_179 = 0;
	}
}

int func_68()
{
	return Global_1899515;
}

void func_69(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

bool func_70(int iParam0, int iParam1)
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
	if (func_20(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_20(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_20(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_71(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, 4))
	{
		if ((((((uParam0->f_126 == (1 << 11) || uParam0->f_126 == 4) || uParam0->f_126 == 256) || uParam0->f_126 == 16) || uParam0->f_126 == 32) || uParam0->f_126 == 2) || uParam0->f_126 == 0)
		{
			PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_143[0], 0, false);
			if (uParam0->f_126 == 2)
			{
				ENTITY::SET_ENTITY_HEALTH(uParam0->f_143[0], 5, 0);
				PED::_0x2E5B5D1F1453E08E(uParam0->f_143[0], 0);
			}
			if (*iParam1 == 83)
			{
				Global_40.f_11623[4 /*8*/].f_2 = func_68();
				func_69(&(uParam0->f_143[0]));
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
				AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
				func_14(iParam1, 89);
			}
			else if (((((*iParam1 != 82 && *iParam1 != 88) && *iParam1 != 90) && *iParam1 != 84) && *iParam1 != 89) && *iParam1 != 81)
			{
				if (*iParam1 >= 52 && *iParam1 <= 80)
				{
					func_69(&(uParam0->f_143[0]));
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_171), 0, 0, 1.0f, 0, 0, 1))
					{
						Global_40.f_11623[4 /*8*/].f_2 = func_68();
						func_14(iParam1, 90);
					}
				}
				else if (*iParam1 >= 24 && *iParam1 <= 51)
				{
					func_69(&(uParam0->f_143[0]));
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_169), 0, 0, 1.0f, 0, 0, 1))
					{
						Global_40.f_11623[4 /*8*/].f_2 = func_68();
						func_14(iParam1, 90);
					}
				}
				else
				{
					func_69(&(uParam0->f_143[0]));
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
					Global_40.f_11623[4 /*8*/].f_2 = func_68();
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_169), 0, 0, 1.0f, 0, 0, 1))
					{
						Global_40.f_11623[4 /*8*/].f_2 = func_68();
						func_14(iParam1, 90);
					}
				}
			}
			else if (*iParam1 == 88 || *iParam1 == 84)
			{
				func_69(&(uParam0->f_143[0]));
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
				AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
				Global_40.f_11623[4 /*8*/].f_2 = func_68();
				func_14(iParam1, 90);
			}
		}
		else
		{
			func_69(&(uParam0->f_143[0]));
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
			AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
			Global_40.f_11623[4 /*8*/].f_2 = func_68();
			func_14(iParam1, 81);
		}
		return true;
	}
	return false;
}

bool func_72(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar4;

	vVar0 = { func_211(4, func_66(4), 0) /*4*/ };
	vVar4 = { vVar0 /*3*/ };
	if (PED::_0x078076AB50FB117F(uParam0->f_143[0], vVar4, 50.0f, true) && PED::_0xB7DBB2986B87E230(uParam0->f_143[0], 1.0f))
	{
		return true;
	}
	if (func_26(uParam0->f_143[0], Global_35, 50.0f, 1))
	{
		func_127(&(uParam0->f_98), 1);
	}
	else
	{
		func_127(&(uParam0->f_98), 0);
	}
	if (func_212(uParam0->f_143[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
	{
		if (func_161(Global_1935630.f_46))
		{
			if (WEAPON::_IS_WEAPON_THROWABLE(Global_1935630.f_46) && uParam0->f_126 == 4)
			{
				func_213(&(uParam0->f_98), &(uParam0->f_126));
				return false;
			}
		}
		func_84(1, 0, 0, "", uParam0->f_143[0], 0, 1065353216, 0);
		return true;
	}
	return false;
}

void func_73(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_68();
}

void func_74(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

char* func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "GREET_PLAYER_ANGRY";
		case 3:
			return "GENERIC_CURSE_MED";
		case 5:
		case 6:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "GENERIC_FRIGHTENED_HIGH";
		case 7:
			return "PANIC_HELP";
		case 4:
			return "PANIC_COMMUNICATE";
		default:
			break;
	}
	return "";
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 5:
		case 7:
			return 1;
		case 1:
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

bool func_77(bool bParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
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
	return func_214(bParam0, &sVar0);
}

bool func_78(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_80(0) == 1 || func_80(0) == 2) || func_80(0) == 8) || func_195(Global_1935630, (1 << 11)))
			{
				func_27(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_80(0) == 11)
			{
				func_27(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_80(0) == 6)
			{
				func_27(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_27(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_215(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_215(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_68();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_215(iVar2) > func_215(iVar1))
				{
					if (func_215(iVar0) > func_215(iVar2) + 1 || func_215(iVar0) < func_215(iVar1))
					{
						func_27(uParam2, 32);
					}
				}
				else if (func_215(iVar0) > func_215(iVar2) + 1 && func_215(iVar0) < func_215(iVar1))
				{
					func_27(uParam2, 32);
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
					if (((func_216(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_216(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_217(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_217(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_218(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_27(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_91(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_92(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, (1 << 11)))
				{
					if (!func_30(&(uParam2->f_13)))
					{
						func_31(&(uParam2->f_13), 0.0f);
					}
					else if (func_32(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_29(&(uParam2->f_13));
						func_27(uParam2, (1 << 9));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_30(&(uParam2->f_13)))
					{
						func_29(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_219())
			{
				func_27(uParam2, (1 << 10));
			}
		}
		if (uParam2->f_10)
		{
			if (func_220())
			{
				func_27(uParam2, (1 << 11));
			}
		}
		if (func_195(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_27(uParam2, 128);
		}
		if (func_82(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_27(uParam2, 256);
		}
	}
	if ((((((((((func_20(*uParam2, 2) || func_20(*uParam2, 4)) || func_20(*uParam2, 8)) || func_20(*uParam2, 16)) || func_20(*uParam2, 32)) || func_20(*uParam2, 64)) || func_20(*uParam2, 128)) || func_20(*uParam2, 256)) || func_20(*uParam2, (1 << 9))) || func_20(*uParam2, (1 << 10))) || func_20(*uParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_79()
{
	int iVar0;

	if (func_171() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_60(Global_1392915[iVar0 /*12*/].f_4))
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

int func_80(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_81()
{
	return Global_1310750.f_16077 != 0;
}

bool func_82(var uParam0, int iParam1)
{
	return func_180(*uParam0, iParam1);
}

bool func_83(var uParam0, float fParam1, float fParam2)
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
			if (func_26(Global_35, *uParam0, 25.0f, 1))
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
		if (func_26(Global_35, *uParam0, fParam1, 1))
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

void func_84(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_171() != -1)
	{
		return;
	}
	if ((Global_36616 & func_221(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_222(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_223(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_224(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_223(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_85(var uParam0, char* sParam1)
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

float func_86(var uParam0)
{
	if (!func_30(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_157(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_154() - uParam0->f_1);
}

bool func_87(int iParam0)
{
	return iParam0 != -15;
}

void func_88(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_29(&(iParam0->f_18));
}

void func_89(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_225(iParam0, 13))
	{
		func_226(iParam0, 0);
	}
	else
	{
		func_227(iParam0, 0);
	}
	if (func_185(iParam0->f_6))
	{
		if (bParam2)
		{
			func_186(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_90()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_228())
	{
		return true;
	}
	return false;
}

bool func_91(var uParam0, var uParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_229(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_92(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_230(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_231(iVar1, 0))
		{
			func_232(&iVar1, vVar8, 1083179008);
		}
		return true;
	}
	return false;
}

int func_93(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_94(int iParam0, int iParam1, int iParam2)
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

int func_95(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_233(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_234(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_235(&(iParam1->f_13));
		}
		if (func_236(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_237(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_95(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_69(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_238(*uParam0, 1, 1);
						}
					}
					else if (func_239(iParam1, 22))
					{
						func_238(*uParam0, 0, 1);
					}
				}
				if (func_240(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_241(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_242(iParam8);
					if (func_243(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_244(uParam3);
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
					func_245(iParam1, uParam3, fVar8);
					if (func_246(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_54(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_247(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_240(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_248(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_243(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_241(uParam0, func_240(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_242(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_54(uParam3, 0, 0, 1, 1);
					}
					func_249(iParam1, 1);
				}
				func_245(iParam1, uParam3, fVar8);
				if (func_247(uParam0, iParam1, fParam4, bVar6))
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
			func_55(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_96(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_250(iParam0);
		return func_251(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_97(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_98(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_105(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_253(func_252(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_254(func_252(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_68();
	func_106(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_99()
{
	func_255();
	func_256(-1, 0, 0, 0, 0);
	func_257(60, 0, 1);
}

void func_100(var uParam0)
{
	Vector3 vVar0[24];

	if (func_20(uParam0->f_162, (1 << 17)))
	{
		return;
	}
	if (func_42())
	{
		strcpy_s(&cVar0, 24, "SPBMC_GIVE_J");
	}
	else
	{
		strcpy_s(&cVar0, 24, "SPBMC_GIVE_A");
	}
	if (!func_178(&cVar0))
	{
		func_152(uParam0, cVar0, 0, -1, 0, 0);
	}
	if (func_179(&cVar0))
	{
		func_27(&(uParam0->f_162), (1 << 17));
	}
}

bool func_101()
{
	if (func_171() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_102(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_JN"), 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_RC_CRKPT4_1_AR"), 0);
			}
			else if (func_259(55))
			{
				func_258(joaat("JOURNAL_RC_CRKPT4_1B_JN"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_RC_CRKPT4_1A_JN"), 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_GIANT_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_GIANT_JN"), 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_JN"), 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_JN"), 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_AR"), 0);
			}
			else
			{
				func_258(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_JN"), 0);
			}
			break;
		default:
			break;
	}
}

bool func_103(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_30(uParam2))
		{
			func_31(uParam2, 0.0f);
			return false;
		}
		else if (func_32(uParam2) > iParam6)
		{
			func_29(uParam2);
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
			fParam7 = func_260(*uParam0, Global_35, 1, 1);
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

char* func_104(int iParam0)
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

bool func_105(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

char* func_108()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_1@ig_1";
}

char* func_109()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_3@ig_3";
}

char* func_110()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_6@ig_6";
}

void func_111(var uParam0)
{
	struct<11> /*88*/ sVar0;

	switch (func_261(4))
	{
		case 3:
			sVar0 = { func_262(15) /*11*/ };
			func_263(&(uParam0->f_155), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(16) /*11*/ };
			func_263(&(uParam0->f_156), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(17) /*11*/ };
			func_263(&(uParam0->f_157), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(19) /*11*/ };
			func_263(&(uParam0->f_158), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(18) /*11*/ };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
			}
			break;
		case 9:
			sVar0 = { func_262(20) /*11*/ };
			func_263(&(uParam0->f_155), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(21) /*11*/ };
			func_263(&(uParam0->f_156), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(22) /*11*/ };
			func_263(&(uParam0->f_157), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(24) /*11*/ };
			func_263(&(uParam0->f_158), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(23) /*11*/ };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
			}
			break;
		case 10:
			sVar0 = { func_262(25) /*11*/ };
			func_263(&(uParam0->f_155), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(26) /*11*/ };
			func_263(&(uParam0->f_156), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(27) /*11*/ };
			func_263(&(uParam0->f_157), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(29) /*11*/ };
			func_263(&(uParam0->f_158), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(28) /*11*/ };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
			}
			break;
		case 13:
			sVar0 = { func_262(30) /*11*/ };
			func_263(&(uParam0->f_155), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(31) /*11*/ };
			func_263(&(uParam0->f_156), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(32) /*11*/ };
			func_263(&(uParam0->f_157), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(34) /*11*/ };
			func_263(&(uParam0->f_158), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(33) /*11*/ };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
			}
			break;
		case 4:
			sVar0 = { func_262(35) /*11*/ };
			func_263(&(uParam0->f_155), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(36) /*11*/ };
			func_263(&(uParam0->f_156), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(37) /*11*/ };
			func_263(&(uParam0->f_157), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(39) /*11*/ };
			func_263(&(uParam0->f_158), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_262(38) /*11*/ };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7);
			}
			break;
	}
}

int func_112(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_264(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

struct<6> /*48*/ func_113()
{
	struct<6> /*48*/ sVar0;
	var uVar6;

	switch (func_261(4))
	{
		case 3:
			sVar0 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
			sVar0.f_3 = { 0.0f, 0.0f, 114.5882f /*3*/ };
			break;
		case 9:
			sVar0 = { 414.5646f, 412.7333f, 207.6299f /*3*/ };
			sVar0.f_3 = { 0.0f, 0.0f, 352.4153f /*3*/ };
			break;
		case 10:
			sVar0 = { 2794.157f, 1406.62f, 182.3539f /*3*/ };
			sVar0.f_3 = { 0.0f, 0.0f, 65.0766f /*3*/ };
			break;
		case 13:
			sVar0 = { -5342.929f, -2947.815f, 100.807f /*3*/ };
			sVar0.f_3 = { 0.0f, 0.0f, 20.08f /*3*/ };
			break;
		case 4:
			sVar0 = { -1208.554f, -1229.683f, 174.7918f /*3*/ };
			sVar0.f_3 = { 0.0f, 0.0f, 19.5942f /*3*/ };
			break;
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
	sVar0.f_2 = uVar6;
	return sVar0;
}

int func_114(int iParam0)
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

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_265())
	{
		iVar2 = func_265();
	}
	iVar5 = func_266(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_267(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_267(iVar6) == 0)
			{
				return func_268(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_267(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_267(iVar6) == 0)
			{
				return func_268(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_268(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_116(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_269(uParam0, iParam1, sParam2))
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

void func_117(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 14));
	}
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 17));
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 4);
	}
	else
	{
		func_182(uParam0, 4);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 8);
	}
	else
	{
		func_181(&(uParam0->f_1), 8);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 8);
	}
	else
	{
		func_182(uParam0, 8);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 32);
	}
	else
	{
		func_182(uParam0, 32);
	}
}

void func_124(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 64);
	}
	else
	{
		func_182(uParam0, 64);
	}
}

void func_125(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 16);
	}
	else
	{
		func_182(uParam0, (1 << 26));
		func_182(uParam0, 16);
	}
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 2);
	}
	else
	{
		func_182(uParam0, 2);
	}
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 256);
	}
	else
	{
		func_181(&(uParam0->f_1), 256);
	}
}

void func_128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 4);
	}
	else
	{
		func_181(&(uParam0->f_1), 4);
	}
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 16);
	}
	else
	{
		func_181(&(uParam0->f_1), 16);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 2);
	}
	else
	{
		func_181(&(uParam0->f_1), 2);
	}
}

void func_131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 11));
	}
}

void func_132(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 1);
	}
	else
	{
		func_181(&(uParam0->f_1), 1);
	}
}

void func_133(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 128);
	}
	else
	{
		func_182(uParam0, 128);
	}
}

void func_134(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, (1 << 19));
	}
	else
	{
		func_182(uParam0, (1 << 19));
	}
}

void func_135(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 256);
	}
	else
	{
		func_182(uParam0, 256);
	}
}

void func_136(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), (1 << 19));
	}
	else
	{
		func_181(&(uParam0->f_1), (1 << 19));
	}
}

bool func_137(int iParam0, bool bParam1)
{
	switch (func_190(iParam0))
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

bool func_138(var uParam0, var uParam1)
{
	if (func_58(*uParam0))
	{
		*uParam1 = func_270(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

struct<4> /*32*/ func_139(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = { func_211(4, func_66(4), 0) /*4*/ };
			break;
		case 2:
			switch (func_261(4))
			{
				case 3:
					sVar0 = { 500.4968f, 1286.531f, 181.3641f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 9:
					sVar0 = { 416.2841f, 413.2481f, 107.6271f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 10:
					sVar0 = { 2794.257f, 1404.687f, 82.29177f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 13:
					sVar0 = { -5342.084f, -2947.499f, 0.78917f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { -1207.344f, -1228.779f, 74.56038f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 1:
			switch (func_261(4))
			{
				case 3:
					sVar0 = { 502.631f, 1287.786f, 181.3201f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 9:
					sVar0 = { 415.6961f, 411.1015f, 107.566f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 10:
					sVar0 = { 2792.826f, 1405.584f, 82.4797f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 13:
					sVar0 = { -5344.361f, -2948.172f, 0.83914f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { -1209.377f, -1230.011f, 74.92408f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 3:
			switch (func_261(4))
			{
				case 3:
					sVar0 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
					sVar0.f_3 = 1.0f;
					break;
				case 9:
					sVar0 = { 414.5646f, 412.7333f, 107.6299f /*3*/ };
					sVar0.f_3 = 1.0f;
					break;
				case 10:
					sVar0 = { 2794.664f, 1407.216f, 82.32878f /*3*/ };
					sVar0.f_3 = 1.25f;
					break;
				case 13:
					sVar0 = { -5342.929f, -2947.815f, 0.80696f /*3*/ };
					sVar0.f_3 = 1.0f;
					break;
				case 4:
					sVar0 = { -1208.554f, -1229.683f, 74.7918f /*3*/ };
					sVar0.f_3 = 1.0f;
					break;
			}
			break;
	}
	return sVar0;
}

int func_140(var uParam0, int iParam1, Vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_271(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_271(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

int func_141(var uParam0, int iParam1, Vector3 vParam2)
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

int func_142(Vector3 vParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;

	fVar1 = MISC::_GET_TEMPERATURE_AT_COORDS(vParam0);
	bVar2 = fVar1 < 10.0f;
	bVar3 = fVar1 > 27.0f;
	if (bVar2)
	{
		iVar0 = joaat("META_OUTFIT_COLD_WEATHER");
	}
	else if (bVar3)
	{
		iVar0 = joaat("META_OUTFIT_WARM_WEATHER");
	}
	else
	{
		iVar0 = joaat("META_OUTFIT_COOL_WEATHER");
	}
	return iVar0;
}

void func_143(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_272(iParam0, iParam1))
		{
			if (func_273(iParam0, iParam1))
			{
				if (func_274(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_275(iParam0);
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

void func_144(var uParam0)
{
	Vector3 vVar0;
	int iVar4;

	vVar0 = { func_139(1) /*4*/ };
	iVar4 = 0;
	while (iVar4 < 4)
	{
		func_141(&(uParam0->f_149[iVar4]), uParam0->f_140, vVar0);
		iVar4++;
	}
}

void func_145(int iParam0, bool bParam1)
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

void func_146(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

void func_147(int iParam0, int iParam1)
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

int func_148()
{
	return Global_1897952.f_41;
}

int func_149(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_276())
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
			iVar0 = func_277(func_276(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_150(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 4:
			iVar0 = 6;
			break;
		case 5:
			iVar0 = 7;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 7:
			iVar0 = 9;
			break;
		case 8:
			iVar0 = 10;
			break;
		case 9:
			iVar0 = 11;
			break;
		case 10:
			iVar0 = 12;
			break;
		case 11:
			iVar0 = 13;
			break;
		case 12:
			iVar0 = 14;
			break;
		case 13:
			iVar0 = 15;
			break;
		case 14:
			iVar0 = 16;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
	}
	return iVar0;
}

Vector3 func_151(int iParam0)
{
	Vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			strcpy_s(&cVar0, 24, "SPBMC_IMTALKING");
			break;
		case 1:
			strcpy_s(&cVar0, 24, "SPBMC_STILLHERE");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_A");
			break;
		case 3:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_B");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_C");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_D");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_E");
			break;
		case 7:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_F");
			break;
		case 8:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_G");
			break;
		case 9:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_H");
			break;
		case 10:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_I");
			break;
		case 11:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_J");
			break;
		case 12:
			strcpy_s(&cVar0, 24, "SPBMC_IG1_K");
			break;
		case 13:
			strcpy_s(&cVar0, 24, "SPBMC_IG2_A");
			break;
		case 14:
			strcpy_s(&cVar0, 24, "SPBMC_IG2_B");
			break;
		case 15:
			strcpy_s(&cVar0, 24, "SPBMC_IG2_C");
			break;
		case 16:
			strcpy_s(&cVar0, 24, "SPBMC_IG2_D");
			break;
		case 17:
			strcpy_s(&cVar0, 24, "SPBMC_IG2_E");
			break;
		case 18:
			strcpy_s(&cVar0, 24, "SPBMC_IG2_F");
			break;
	}
	return cVar0;
}

bool func_152(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_278(cParam1, cParam0);
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

bool func_153(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

float func_154()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_157(var uParam0)
{
	return func_153(*uParam0, 2);
}

int func_158()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_159(var uParam0)
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

var func_160(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_161(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_162(int iParam0, int iParam1)
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

bool func_163(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_279(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

struct<2> /*16*/ func_164(int iParam0)
{
	struct<2> /*16*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0.f_0 = "BC1_UC_GIVE";
			sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			sVar0.f_0 = "SPD_UC_GRT";
			sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 2:
			sVar0.f_0 = "SPD_UC_ANT";
			sVar0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return sVar0;
}

void func_165(int* iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_226(iParam0, 1);
	func_166(iParam0, uParam1, sParam3, uParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_166(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_185(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_280(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_281(iParam0->f_6, iParam0->f_5, 0);
			}
			func_282(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_283(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_167(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 5);
	}
	else
	{
		func_227(iParam0, 5);
	}
}

void func_168(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_93(1) < iParam0)
	{
		iParam0 = func_93(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_252(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_169(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_284(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_170()
{
	return Global_1900383.f_393;
}

int func_171()
{
	return Global_1572887.f_12;
}

void func_172(var uParam0)
{
	Vector3 vVar0[24];

	if (func_20(uParam0->f_162, (1 << 18)))
	{
		return;
	}
	if (func_42())
	{
		strcpy_s(&cVar0, 24, "SPBMC_THANKS_J");
	}
	else
	{
		strcpy_s(&cVar0, 24, "SPBMC_THANKS_A");
	}
	if (!func_178(&cVar0))
	{
		func_152(uParam0, cVar0, 0, -1, 0, 0);
	}
	if (func_179(&cVar0))
	{
		func_27(&(uParam0->f_162), (1 << 18));
	}
}

bool func_173(var uParam0, var uParam1)
{
	int iVar0;

	if (func_58(*uParam0))
	{
		iVar0 = func_285(*uParam0);
		if (func_42())
		{
			iVar0++;
		}
		func_286(*uParam0, *uParam1);
		func_287(*uParam0, iVar0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_174(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar1 = func_288(uParam0, bParam2);
	if (bParam2)
	{
		iVar5 = func_148();
		if (iVar5 == 10 && !func_20(*uParam1, 2))
		{
			uParam0->f_175 = 1;
			return true;
		}
		else if (iVar1 > 4 && !func_20(*uParam1, 1))
		{
			uParam0->f_175 = 0;
			return true;
		}
		else if (iVar1 < 10)
		{
			bVar4 = true;
		}
		iVar2 = 2;
		iVar3 = 18;
	}
	else
	{
		if (iVar1 < 3)
		{
			bVar4 = true;
		}
		iVar2 = 18;
		iVar3 = 26;
	}
	if (bVar4)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		if (!func_20(*uParam1, func_289(iVar0)))
		{
			uParam0->f_175 = iVar0;
			return true;
		}
	}
	else
	{
		iVar0 = iVar2;
		while (iVar0 <= (iVar3 - 1))
		{
			if (!func_20(*uParam1, func_289(iVar0)))
			{
				uParam0->f_175 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_175(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_171))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_171, false))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_143[0], -1527527524) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_171, "pbl_base_reset"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_176(var uParam0, int iParam1)
{
	switch (uParam0->f_175)
	{
		case 0:
			func_14(iParam1, 52);
			break;
		case 2:
			func_14(iParam1, 53);
			break;
		case 3:
			func_14(iParam1, 54);
			break;
		case 4:
			func_14(iParam1, 55);
			break;
		case 5:
			func_14(iParam1, 56);
			break;
		case 6:
			func_14(iParam1, 57);
			break;
		case 7:
			func_14(iParam1, 58);
			break;
		case 8:
			func_14(iParam1, 59);
			break;
		case 9:
			func_14(iParam1, 60);
			break;
		case 10:
			func_14(iParam1, 61);
			break;
		case 11:
			func_14(iParam1, 62);
			break;
		case 12:
			func_14(iParam1, 63);
			break;
		case 13:
			func_14(iParam1, 64);
			break;
		case 1:
			func_14(iParam1, 65);
			break;
		case 21:
			func_14(iParam1, 74);
			break;
		case 14:
			func_14(iParam1, 66);
			break;
		case 15:
			func_14(iParam1, 67);
			break;
		case 16:
			func_14(iParam1, 68);
			break;
		case 18:
			func_14(iParam1, 71);
			break;
		case 19:
			func_14(iParam1, 72);
			break;
		case 20:
			func_14(iParam1, 73);
			break;
		case 22:
			func_14(iParam1, 76);
			break;
		case 25:
			func_14(iParam1, 79);
			break;
		case 23:
			func_14(iParam1, 77);
			break;
		case 24:
			func_14(iParam1, 78);
			break;
		case 26:
			func_14(iParam1, 69);
			break;
		case 17:
			func_14(iParam1, 70);
			break;
		default:
			break;
	}
}

Vector3 func_177(char* sParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, sParam0);
	return cVar0;
}

bool func_178(char* sParam0)
{
	return AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0);
}

bool func_179(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

bool func_180(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_183(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_290(&Global_0, 8);
	}
	if (!func_291() || func_171() != -1)
	{
		return;
	}
	func_290(&Global_0, 1);
}

void func_184()
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
}

bool func_185(int iParam0)
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

void func_186(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_185(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_292(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_293(iVar0);
	*uParam0 = 0;
}

void func_187(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_186(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_88(iParam0, 0);
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

int func_189(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_294(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_190(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_189(iParam0);
}

int func_191(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_192(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return func_295(func_267(iParam0));
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_171() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_194(int iParam0, bool bParam1, bool bParam2)
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
		if (func_296())
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
		iVar0 = func_297(Global_1898164.f_1[0 /*5*/]);
		if (func_298(iVar0) && func_299(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_58(Global_1898164.f_1[0 /*5*/]))
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

bool func_195(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_192(iParam0))
	{
		case 1:
			iVar0 = func_297(iParam0);
			return func_300(iVar0);
		case 8:
			iVar1 = func_297(iParam0);
			if (func_299(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_301(iVar1);
			}
			break;
	}
	return -1;
}

void func_197(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_171() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_302(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_303();
		Global_1898077.f_9 = func_304(Global_1894899.f_2);
		func_305(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_198()
{
	if (!func_137(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_137(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_137(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_137(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_137(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_137(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_137(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_199(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_306(iParam0, iParam1);
}

int func_200(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_307(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_308(&Global_1935630, (1 << 22));
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

int func_202(bool bParam0)
{
	if (!bParam0 && func_309(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_203(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_204(int iParam0, bool bParam1)
{
	if (func_171() != -1)
	{
		return;
	}
	if (func_200(0) != iParam0)
	{
		return;
	}
	if (func_310(iParam0))
	{
		if (bParam1)
		{
			func_311(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_312(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_205(int iParam0)
{
	return func_314(func_313(iParam0));
}

void func_206(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_315(vParam0))
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
			if (func_316(vVar2, vParam0, 2.0f, 1))
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

void func_207(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_208(var uParam0)
{
	return func_153(*uParam0, 1);
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1 || !func_208(uParam0))
	{
		func_317(uParam0);
	}
}

bool func_210(var uParam0, int iParam1)
{
	if (func_318(uParam0, iParam1))
	{
		func_319(uParam0);
		return true;
	}
	return false;
}

struct<4> /*32*/ func_211(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							sVar0 = { 1992.478f, -370.7957f, 40.79723f /*3*/ };
							sVar0.f_3 = 0.0f;
							break;
						case 1:
							sVar0 = { 2015.352f, -327.9001f, 40.61312f /*3*/ };
							sVar0.f_3 = 0.0f;
							break;
						case 2:
							sVar0 = { 2048.973f, -308.3546f, 40.71767f /*3*/ };
							sVar0.f_3 = 0.0f;
							break;
						case 3:
							sVar0 = { 1988.401f, -327.9046f, 40.52593f /*3*/ };
							sVar0.f_3 = 0.0f;
							break;
						case 4:
							sVar0 = { 2043.473f, -299.7293f, 40.62843f /*3*/ };
							sVar0.f_3 = 0.0f;
							break;
					}
					break;
				case 5:
					sVar0 = { 2008.711f, -330.3677f, 40.6611f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 1:
			sVar0 = { 2434.052f, -1224.941f, 45.8519f /*3*/ };
			sVar0.f_3 = -118.0f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -3704.056f, -2618.024f, -14.9192f /*3*/ };
					sVar0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							sVar0 = { -3644.674f, -2615.925f, -14.8451f /*3*/ };
							sVar0.f_3 = 349.841f;
							break;
						case 1:
							sVar0 = { -3644.674f, -2615.925f, -14.8451f /*3*/ };
							sVar0.f_3 = 349.841f;
							break;
						case 2:
							sVar0 = { -3704.056f, -2618.024f, -14.9192f /*3*/ };
							sVar0.f_3 = 23.3026f;
							break;
						case 3:
							sVar0 = { -3704.056f, -2618.024f, -14.9192f /*3*/ };
							sVar0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			sVar0 = { -1791.806f, -422.4149f, 154.8645f /*3*/ };
			sVar0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_261(4))
			{
				case 3:
					sVar0 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
					sVar0.f_3 = 114.5882f;
					break;
				case 9:
					sVar0 = { 414.5646f, 412.7333f, 107.6299f /*3*/ };
					sVar0.f_3 = 352.4153f;
					break;
				case 10:
					sVar0 = { 2794.157f, 1406.62f, 82.3539f /*3*/ };
					sVar0.f_3 = 65.0766f;
					break;
				case 13:
					sVar0 = { -5342.929f, -2947.815f, 0.80696f /*3*/ };
					sVar0.f_3 = 20.08f;
					break;
				case 4:
					sVar0 = { -1208.554f, -1229.683f, 74.7918f /*3*/ };
					sVar0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 888.6843f, 1276.612f, 234.0975f /*3*/ };
					sVar0.f_3 = 321.3007f;
					break;
				case 1:
					sVar0 = { 865.601f, 1248.82f, 179.7602f /*3*/ };
					sVar0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			sVar0 = { 2016.26f, 623.0106f, 158.6706f /*3*/ };
			sVar0.f_3 = -167.98f;
			break;
		case 5:
			sVar0 = { -1502.098f, 2458.125f, 417.4865f /*3*/ };
			sVar0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2547.377f, -1216.046f, 52.3168f /*3*/ };
					sVar0.f_3 = 87.45f;
					break;
				case 1:
					sVar0 = { 2547.377f, -1216.046f, 52.3168f /*3*/ };
					sVar0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					sVar0 = { -326.079f, 765.2856f, 121.6327f /*3*/ };
					sVar0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			sVar0 = { 2673.46f, -1391.259f, 47.50816f /*3*/ };
			sVar0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_320(11))
			{
				case 105:
					sVar0 = { 1423.438f, -1381.801f, 80.8106f /*3*/ };
					sVar0.f_3 = 352.6983f;
					return sVar0;
				case 38:
					sVar0 = { -773.2449f, -1329.082f, 42.6291f /*3*/ };
					sVar0.f_3 = 191.3503f;
					return sVar0;
				case 126:
					sVar0 = { -2378.475f, -2378.621f, 61.1724f /*3*/ };
					sVar0.f_3 = 185.2923f;
					return sVar0;
				case 5:
					sVar0 = { 2563.835f, -1378.423f, 45.1925f /*3*/ };
					sVar0.f_3 = 346.5068f;
					return sVar0;
			}
			switch (func_261(11))
			{
				case 12:
					sVar0 = { -2338.21f, -1271.362f, 147.062f /*3*/ };
					sVar0.f_3 = 356.6931f;
					break;
				case 11:
					sVar0 = { 1295.802f, -200.3015f, 99.0642f /*3*/ };
					sVar0.f_3 = 1.8815f;
					break;
				case 10:
					sVar0 = { 2428.864f, 1015.729f, 85.6131f /*3*/ };
					sVar0.f_3 = 304.652f;
					break;
				case 15:
					sVar0 = { -3157.477f, -2981.991f, 4.6224f /*3*/ };
					sVar0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					sVar0 = { 1702.736f, 2168.096f, 318.9191f /*3*/ };
					sVar0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -312.9856f, 808.8508f, 117.9822f /*3*/ };
					sVar0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			sVar0 = { 1320.745f, -1291.739f, 75.14026f /*3*/ };
			sVar0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_261(15))
			{
				case 7:
				case 9:
					sVar0 = { -727.395f, 686.1953f, 58.2244f /*3*/ };
					sVar0.f_3 = 177.0399f;
					break;
				case 13:
					sVar0 = { -6122.201f, -3803.751f, -35.2455f /*3*/ };
					sVar0.f_3 = 181.815f;
					break;
				case 10:
					sVar0 = { 2183.348f, 1502.819f, 83.6009f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { -1891.265f, -289.866f, 176.457f /*3*/ };
					sVar0.f_3 = 266.9828f;
					break;
				default:
					sVar0 = { -1891.265f, -289.866f, 176.457f /*3*/ };
					sVar0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			sVar0 = { 2636.429f, -1229.537f, 52.3795f /*3*/ };
			sVar0.f_3 = 358.7895f;
			break;
		case 17:
			sVar0 = { 2943.588f, 1336.999f, 43.22713f /*3*/ };
			sVar0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -1812.186f, -367.3066f, 161.8834f /*3*/ };
					sVar0.f_3 = 167.5016f;
					break;
				case 1:
					sVar0 = { -1807.89f, -371.5062f, 161.8662f /*3*/ };
					sVar0.f_3 = 167.5016f;
					break;
				case 2:
					sVar0 = { -1800.857f, -357.3966f, 162.9631f /*3*/ };
					sVar0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					sVar0 = { -256.365f, 753.5781f, 116.0851f /*3*/ };
					sVar0.f_3 = 284.0192f;
					break;
				case 1:
					sVar0 = { -192.9274f, 625.6254f, 113.5786f /*3*/ };
					sVar0.f_3 = 145.05f;
					break;
				default:
					sVar0 = { -256.365f, 753.5781f, 116.0851f /*3*/ };
					sVar0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			sVar0 = { -2725.277f, 709.9713f, 173.0266f /*3*/ };
			sVar0.f_3 = 359.6814f;
			break;
		case 21:
			sVar0 = { 2706.282f, 2369.827f, 170.2336f /*3*/ };
			sVar0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -5511.039f, -2929.552f, -3.278f /*3*/ };
					sVar0.f_3 = -131.907f;
					break;
				case 1:
					sVar0 = { -5497.666f, -2957.426f, -1.708f /*3*/ };
					sVar0.f_3 = 12.912f;
					break;
				case 2:
					sVar0 = { -5493.435f, -2940.703f, -1.471f /*3*/ };
					sVar0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (func_261(23))
			{
				case 0:
					sVar0 = { 1784.089f, -946.648f, 40.7225f /*3*/ };
					sVar0.f_3 = 254.7072f;
					break;
				case 2:
					sVar0 = { 2445.841f, -463.2956f, 41.1018f /*3*/ };
					sVar0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -2233.602f, -2850.517f, 62.7628f /*3*/ };
					sVar0.f_3 = 208.7791f;
					break;
				case 1:
					sVar0 = { -3198.999f, -2538.554f, 66.5911f /*3*/ };
					sVar0.f_3 = 292.1099f;
					break;
				case 2:
					sVar0 = { -2927.12f, -2860.494f, 85.7312f /*3*/ };
					sVar0.f_3 = 123.2795f;
					break;
				case 3:
					sVar0 = { -3267.86f, -3416.677f, 39.5041f /*3*/ };
					sVar0.f_3 = 332.5893f;
					break;
				case 4:
					sVar0 = { -3572.794f, -3565.222f, 33.505f /*3*/ };
					sVar0.f_3 = 260.2986f;
					break;
				case 5:
					sVar0 = { -4399.393f, -3606.746f, 48.6452f /*3*/ };
					sVar0.f_3 = 348.5519f;
					break;
				case 6:
					sVar0 = { -4988.676f, -4060.992f, 1.0884f /*3*/ };
					sVar0.f_3 = 163.9257f;
					break;
				case 7:
					sVar0 = { -5333.317f, -3534.569f, 2.0586f /*3*/ };
					sVar0.f_3 = 306.198f;
					break;
				case 8:
					sVar0 = { -5374.994f, -4053.294f, -6.2292f /*3*/ };
					sVar0.f_3 = 170.3096f;
					break;
				case 9:
					sVar0 = { -5413.131f, -2606.156f, 2.5597f /*3*/ };
					sVar0.f_3 = 255.0981f;
					break;
				case 10:
					sVar0 = { -4956.249f, -3198.202f, 26.3575f /*3*/ };
					sVar0.f_3 = 292.8281f;
					break;
				case 11:
					sVar0 = { -4594.695f, -3045.041f, 6.5776f /*3*/ };
					sVar0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			sVar0 = { 2368.588f, -859.9452f, 42.0223f /*3*/ };
			sVar0.f_3 = 198.7042f;
			break;
		case 26:
			sVar0 = { -345.2797f, 794.6578f, 115.1777f /*3*/ };
			sVar0.f_3 = 28.0552f;
			break;
		case 27:
			sVar0 = { 2644.443f, -1207.946f, 52.3368f /*3*/ };
			sVar0.f_3 = 199.0776f;
			break;
		case 28:
			sVar0 = { 3025.557f, 1779.699f, 83.2056f /*3*/ };
			sVar0.f_3 = 142.8609f;
			break;
		case 29:
			sVar0 = { 2778.292f, -1313.274f, 45.89664f /*3*/ };
			sVar0.f_3 = 216.3798f;
			break;
	}
	return sVar0;
}

bool func_212(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_321(uParam2, 1, iVar0);
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
			if (func_322(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_323(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8) != 0)
			{
				if (func_324(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_325(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 32) != 0)
			{
				if (func_326(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_327(PLAYER::PLAYER_ID(), 0, 1, (uParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(uParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_323(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_328(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4) != 0)
				{
					if (func_329(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_323(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!(uParam2->f_1 & 256) != 0)
				{
					if (func_330(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_323(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 16) != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_331(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_331(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_323(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*uParam2 & 8) != 0)
			{
				if (func_332(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*uParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_333(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2) != 0)
			{
				if (func_334(uParam2, 4000))
				{
					if ((func_335(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 0, (*uParam2 & 256) != 0) & func_336(uParam2, iParam0)) && func_337(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_323(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 2) != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if ((func_335(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 1, (*uParam2 & 256) != 0) & func_336(uParam2, iParam0)) && func_337(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*uParam2 & (1 << 17)) == 0)
						{
							if (func_338(iParam0, Global_1935630.f_41))
							{
								func_339();
								*uParam3 = 2;
								func_323(iParam0, uParam2, *uParam3);
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
						if (func_338(iParam0, Global_1935630.f_41))
						{
							func_339();
							*uParam3 = 2;
							func_323(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_340(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_158() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_339();
						*uParam3 = 2;
						func_323(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*uParam2 & (1 << 17)) == 0)
				{
					if (func_341())
					{
						if (func_338(iParam0, Global_1935630.f_42))
						{
							func_339();
							*uParam3 = 2;
							func_323(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(uParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_342(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_323(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_343(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 16) != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_344(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_323(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*uParam2 & 64) != 0)
			{
				if (func_345(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if ((*uParam2 & (1 << 20)) != 0)
			{
				if (func_346(uParam2, 4000))
				{
					if (func_347(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_323(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if ((*uParam2 & (1 << 10)) != 0)
			{
				if (func_348(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_323(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_349(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_323(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_213(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = func_158();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_350(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_214(bool bParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(bParam0, uParam1);
}

int func_215(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_216(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_60(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_217(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_59(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_218(int iParam0)
{
	int iVar0;

	iVar0 = func_351();
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

bool func_219()
{
	return Global_1392040.f_6;
}

bool func_220()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return (1 << 9);
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return (1 << 10);
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return (1 << 11);
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return (1 << 12);
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return (1 << 13);
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return (1 << 14);
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return (1 << 15);
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return (1 << 16);
		case joaat("HONOR_EVENT_THEFT"):
			return (1 << 17);
		case joaat("HONOR_EVENT_INTERVENED"):
			return (1 << 18);
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return (1 << 19);
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return (1 << 20);
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return (1 << 21);
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return (1 << 22);
		default:
			break;
	}
	return 0;
}

int func_222(int iParam0)
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

void func_223(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_352();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_353(iParam0);
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
	if (func_354(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_42())
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
	Global_40.f_11095.f_35 = func_355(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_352();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_356(iVar1);
		func_358(func_357(), 0, 4000);
		func_359(Global_40.f_11095.f_35);
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
		func_360(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_254(func_252(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_222(14))
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
					sParam4 = func_361(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_284(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_284(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_254(func_252(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_222(4))
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
					sParam4 = func_361(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_284(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_284(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_252(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_362(10, 1);
	}
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_225(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_226(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_227(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_228()
{
	if (func_363(Global_35) | func_364(Global_35))
	{
		return true;
	}
	return false;
}

bool func_229(var uParam0, Vector3 vParam1, float fParam4)
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

bool func_230(var uParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6)
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
					if (func_365(Global_35, *iParam1, 0))
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

bool func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_162(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

void func_233(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

float func_234(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_235(var uParam0)
{
	func_31(uParam0, 0.0f);
}

bool func_236(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_366(iParam0, iParam1))
		{
			if (!func_180(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_54(uParam2, 0, 0, 1, 0);
				func_181(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_180(iParam1->f_10, 1))
		{
			func_367(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_182(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_237(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_180(iParam4, 32);
		func_187(iParam1, uParam2, 0);
		iVar5 = func_368(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_54(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_180(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_180(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_180(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_180(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_180(iParam4, (1 << 23)) || func_180(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_180(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_180(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_239(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_239(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_180(iParam4, (1 << 26)))
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
				iParam6 = func_369(uParam0);
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
			if (func_180(iParam4, (1 << 28)))
			{
				iVar8 = func_370(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_371(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_239(iParam1, 23))
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
			if (func_180(iParam4, 2) || func_180(iParam4, 16))
			{
				func_238(*uParam0, 1, 1);
			}
			else
			{
				func_238(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_238(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_239(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_240(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_372(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_241(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_373(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_180(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_242(int iParam0)
{
	if (func_180(iParam0, 4))
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
	if (func_180(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_180(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_243(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_93(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_374(Global_35)) || func_375(Global_35)) || func_376(Global_35));
	fVar12 = -1.0f;
	if (func_30(&(iParam1->f_13)))
	{
		fVar12 = func_86(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_185((uParam4[iVar0 /*17*/])->f_6);
		func_377(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_378(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_379(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_54(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_380(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_187(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_381(iParam1, fParam6, iParam1->f_9))
					{
						func_235(&(iParam1->f_18));
						if (bVar6)
						{
							func_380(uParam4, 0, 0);
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
		func_382(iParam1, fParam2);
	}
	return bVar5;
}

void func_244(var uParam0)
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

void func_245(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_383(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_382(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_246(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_384(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_385(iParam1, 0);
				func_187(iParam1, uParam2, func_239(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_247(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_235(&(iParam1->f_18));
			return 0;
		}
		else if (func_30(&(iParam1->f_18)))
		{
			func_29(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_30(&(iParam1->f_18)))
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
	return func_386(&(iParam1->f_18), fParam2);
	return 1;
}

void func_248(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_377(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_249(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_250(int iParam0)
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

bool func_251(int iParam0, int iParam1, int iParam2, int iParam3)
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

struct<2> /*16*/ func_252(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_253(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_254(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_255()
{
	if (!func_387(Global_1327479))
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
	func_388(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_256(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_389() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_387(iVar1) && !func_390(iVar1, iParam2)) && (!bParam3 || !func_391(iVar1))) && (!bParam4 || !func_392(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_393(iVar0);
			}
		}
		iVar0++;
	}
}

void func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_394(iParam0, iParam1, bParam2);
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

void func_258(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_395(iParam0, 0);
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
		func_396(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_259(int iParam0)
{
	return (Global_40.f_490.f_402[iParam0] & 1) != 0;
}

float func_260(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_148())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_148())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_148())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_148())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_148())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_148())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_148())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

struct<11> /*88*/ func_262(int iParam0)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 15:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 16:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 495.042f, 1284.463f, 182.217f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, -175.784f /*3*/ };
			sVar0.f_7 = { 7.32f, 15.009f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyTrigger";
			break;
		case 17:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, -3.079914f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyStayAway";
			break;
		case 18:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.85f, 1.85f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 19:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 502.0502f, 1284.979f, 181.4051f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 40.09184f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyFocus";
			break;
		case 20:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 414.5646f, 412.7333f, 107.6299f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 21:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 418.393f, 419.451f, 107.6299f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 60.32438f /*3*/ };
			sVar0.f_7 = { 7.722f, 13.559f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyTrigger";
			break;
		case 22:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 414.5646f, 412.7333f, 107.6299f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 62.24287f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyStayAway";
			break;
		case 23:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 414.5646f, 412.7333f, 107.6299f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.85f, 1.85f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 24:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 414.5646f, 412.7333f, 107.6299f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 115.1113f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyFocus";
			break;
		case 25:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 2794.157f, 1406.62f, 82.3539f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 26:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 2787.403f, 1410.0f, 82.354f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 154.2904f /*3*/ };
			sVar0.f_7 = { 7.539f, 13.615f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyTrigger";
			break;
		case 27:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 2794.157f, 1406.62f, 82.3539f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 155.2096f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyStayAway";
			break;
		case 28:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 2794.157f, 1406.62f, 82.3539f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.85f, 1.85f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 29:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 2794.157f, 1406.62f, 82.3539f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 83.2552f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyFocus";
			break;
		case 30:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -5342.735f, -2948.708f, 0.8175f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 31:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -5343.361f, -2941.974f, 0.8519f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, -84.35735f /*3*/ };
			sVar0.f_7 = { 6.745f, 15.282f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyTrigger";
			break;
		case 32:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -5342.604f, -2949.041f, 0.8519f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 1.309033f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyStayAway";
			break;
		case 33:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -5342.604f, -2949.041f, 0.8519f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.85f, 1.85f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 34:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -5342.735f, -2948.708f, 0.8175f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 32.01331f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyFocus";
			break;
		case 35:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -1208.554f, -1229.683f, 74.7918f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 36:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1211.495f, -1221.953f, 75.375f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, -69.42678f /*3*/ };
			sVar0.f_7 = { 8.114f, 12.717f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyTrigger";
			break;
		case 37:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -1209.312f, -1227.312f, 75.3753f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 27.64894f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyStayAway";
			break;
		case 38:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1209.312f, -1227.312f, 75.3753f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 1.85f, 1.85f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 39:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1208.554f, -1229.683f, 74.7918f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 27.64894f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "BlindCassidyFocus";
			break;
	}
	return sVar0;
}

void func_263(var uParam0, int iParam1, Vector3 vParam2, Vector3 vParam5, Vector3 vParam8, char* sParam11)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam1, vParam2, vParam5, vParam8, sParam11);
}

int func_264(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_315(vParam0))
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
		if (func_397(vParam0))
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
	func_398(iVar0, bParam8);
	return iVar0;
}

int func_265()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_267(int iParam0)
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

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_399(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_265())
	{
		return -1;
	}
	iVar0 = func_266(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_306(iVar1, 0);
	func_400(iVar1, 0);
	func_401(iVar1, 0);
	func_402(iVar1, 0);
	func_403(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_404(iVar1, iParam4);
	}
	return iVar1;
}

bool func_269(var uParam0, int iParam1, char* sParam2)
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

int func_270(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_405(iParam0);
}

int func_271(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_406(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_272(int iParam0, int iParam1)
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

bool func_273(int iParam0, int iParam1)
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

bool func_274(int iParam0, int iParam1)
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
	if (!func_272(iParam0, iVar0))
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

void func_275(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_276()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

int func_277(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_278(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
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

float func_279(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_280(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_281(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_282(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (bParam1)
	{
		func_407(iParam0, 4);
		func_408(iVar0, 1);
		func_409(iVar0, 1);
	}
	else
	{
		func_410(iParam0, 4);
		func_409(iVar0, 0);
	}
}

void func_283(int* iParam0, char* sParam1)
{
	if (func_185(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_281(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_227(iParam0, 1);
}

int func_284(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_411(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_285(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_412(iParam0);
}

void func_286(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_401(iParam0, iParam1);
}

void func_287(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_402(iParam0, iParam1);
}

int func_288(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = Global_40.f_11623[4 /*8*/].f_6;
	}
	else
	{
		iVar0 = func_285(uParam0->f_136);
	}
	return iVar0;
}

int func_289(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 7:
			iVar0 = 128;
			break;
		case 8:
			iVar0 = 256;
			break;
		case 9:
			iVar0 = (1 << 9);
			break;
		case 10:
			iVar0 = (1 << 10);
			break;
		case 11:
			iVar0 = (1 << 11);
			break;
		case 12:
			iVar0 = (1 << 12);
			break;
		case 13:
			iVar0 = (1 << 13);
			break;
		case 14:
			iVar0 = (1 << 14);
			break;
		case 15:
			iVar0 = (1 << 15);
			break;
		case 16:
			iVar0 = (1 << 16);
			break;
		case 17:
			iVar0 = (1 << 17);
			break;
		case 18:
			iVar0 = (1 << 18);
			break;
		case 19:
			iVar0 = (1 << 19);
			break;
		case 20:
			iVar0 = (1 << 20);
			break;
		case 21:
			iVar0 = (1 << 21);
			break;
		case 22:
			iVar0 = (1 << 22);
			break;
		case 23:
			iVar0 = (1 << 23);
			break;
		case 24:
			iVar0 = (1 << 24);
			break;
		case 25:
			iVar0 = (1 << 25);
			break;
	}
	return iVar0;
}

void func_290(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_291()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_292(int iParam0)
{
	return iParam0;
}

void func_293(int iParam0)
{
	if (!func_413(iParam0))
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

int func_294(int iParam0)
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

int func_295(int iParam0)
{
	return (iParam0 & 31);
}

bool func_296()
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

int func_297(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_414(func_267(iParam0));
}

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_299(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
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

void func_302(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_303()
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

int func_304(int iParam0)
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

void func_305(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_306(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_415(iParam0);
	}
	else
	{
		func_416(iParam0, iParam1);
	}
	func_417();
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_418(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_310(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	switch (func_192(iParam0))
	{
		case 1:
			switch (func_297(iParam0))
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
			switch (func_297(iParam0))
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

void func_311(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_419(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_420(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, bVar1);
		}
		iVar0++;
	}
	func_422(func_421(iParam0), 6);
}

void func_312(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_419(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_420(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, bVar1, 0);
		}
		iVar0++;
	}
	func_423(func_421(iParam0), 6);
}

int func_313(int iParam0)
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

int func_314(int iParam0)
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
	func_424(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_315(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_316(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_317(var uParam0)
{
	func_425(uParam0, 0);
}

bool func_318(var uParam0, int iParam1)
{
	if (!func_208(uParam0))
	{
		return false;
	}
	if (func_426(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_319(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_427())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

void func_321(var uParam0, bool bParam1, int iParam2)
{
	func_428(iParam2);
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
		uParam0->f_13 = func_429(0);
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
						if (func_430(1))
						{
							func_181(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_430(1) || (*uParam0 & (1 << 13)) != 0))
				{
					func_182(uParam0, (1 << 25));
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
			if (func_431(uParam0))
			{
				uParam0->f_15 = func_158();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_158() - uParam0->f_15) > 500)
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
	func_432(uParam0);
}

bool func_322(int iParam0, var uParam1)
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
			if (!func_433(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_434(iParam0, iVar2) <= func_435(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_323(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_436(iParam2, 1, 1, 1, 0))
	{
		func_181(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_350(uParam1, 1);
	func_437();
}

bool func_324(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_438(iParam0, !(*uParam1 & (1 << 28)) != 0, !(*uParam1 & (1 << 29)) != 0, !(*uParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_439(uParam1);
			if (func_440(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_441(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_350(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_350(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_325(int iParam0, int iParam1, var uParam2)
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
	if (func_442(iParam1, !(*uParam2 & (1 << 28)) != 0, !(*uParam2 & (1 << 29)) != 0, !(*uParam2 & (1 << 30)) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_439(uParam2);
		if (func_440(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_441(uParam2)
				{
					func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_326(int iParam0, var uParam1)
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
	if (func_433(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_441(uParam1)
		{
			fVar3 = func_439(uParam1);
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

int func_327(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_443(bParam1, bParam2, bParam3);
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

bool func_328(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_158();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_329(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_444(uParam2);
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
			if (func_337(uParam2, iParam1))
			{
				func_350(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_330(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_445(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_337(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_331(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_446(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_350(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_447(iParam1, vVar0, vVar4))
					{
						func_350(uParam2, 1);
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
					func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_447(iParam1, vVar0, vVar7))
					{
						func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_332(int iParam0, var uParam1)
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
		if (!func_433(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_448(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_449(Global_1935630.f_34[iVar0]))
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
			if (func_450(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_451(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_452(uParam1, iParam0, fVar1, iVar0))
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

bool func_333(int iParam0, var uParam1)
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

bool func_334(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_158();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_453(iVar0, &iVar2))
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
	if (func_454(iVar0, iParam0))
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

int func_336(var uParam0, int iParam1)
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

bool func_337(var uParam0, int iParam1)
{
	if (func_455(uParam0))
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

bool func_338(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_260(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_339()
{
}

bool func_340(var uParam0, int iParam1)
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
		if (func_456(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_158();
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
						if (func_457(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_158();
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

bool func_341()
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
	if ((func_158() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_342(var uParam0, int iParam1)
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
	fVar0 = func_435(uParam0);
	if (uParam0->f_12 > func_458(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_459(iParam1);
	iVar1 = func_460(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_343(int iParam0, int iParam1, var uParam2)
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
	return func_461(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_344(int iParam0, var uParam1)
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
		if (func_462(iParam0, uParam1, 1))
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
					if (!func_463(uParam1, iParam0))
					{
						if (func_457(iVar4, Global_36, 1) < 7.0f)
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

bool func_345(int iParam0, var uParam1)
{
	if (!func_464(0))
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

bool func_346(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_158();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_347(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_348(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_158();
	}
	else if (func_158() - uParam1->f_4) > func_465(uParam1)
	{
		return func_466(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_349(var uParam0, int iParam1)
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

void func_350(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, (1 << 27));
	}
	else
	{
		func_182(uParam0, (1 << 27));
	}
}

int func_351()
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

int func_352()
{
	int iVar0;

	iVar0 = func_467();
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

int func_353(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_171() != -1)
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
	fVar1 = func_234(MISC::ABSF(fVar1) < 1.0f, func_234(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_354(int iParam0)
{
	if (!func_468(iParam0))
	{
		return false;
	}
	return func_469(iParam0);
}

int func_355(int iParam0, int iParam1, int iParam2)
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

int func_356(int iParam0)
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

int func_357()
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

void func_358(int iParam0, bool bParam1, int iParam2)
{
	func_470((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_471(iParam0);
}

void func_359(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_472(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_360(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_473(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_474(iVar5, &bVar2, &iVar0))
			{
				if (!func_475(bVar2, 0))
				{
				}
				else
				{
					iVar1 = func_476(bVar2);
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
							if (func_477(bVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_352() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_352() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_478();
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

char* func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!func_291())
	{
		return 0;
	}
	if (!func_480(iParam0, &iVar0, &iVar1))
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

int func_363(bool bParam0)
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
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
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
		iVar2 = func_481(iVar9);
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
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_364(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	bVar0 = func_170();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
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
		return 1;
	}
	return 0;
}

bool func_365(int iParam0, int iParam1, bool bParam2)
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

bool func_366(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_482((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_367(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_383(uParam0[iVar0 /*17*/]))
		{
			func_226(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_368(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_483(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_185((uParam2[iVar0 /*17*/])->f_6))
		{
			func_226(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_369(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_484(*uParam0);
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

int func_370(var uParam0, int iParam1)
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

void func_371(int* iParam0, int* iParam1)
{
	if (!func_239(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_226(iParam1, 19);
			func_385(iParam0, 23);
			func_485(iParam1, 2);
		}
	}
}

bool func_372(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_486(16))
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
					func_487(16);
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

void func_373(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_483(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_374(int iParam0)
{
	return func_488(iParam0, 4) | func_488(iParam0, 5);
}

int func_375(int iParam0)
{
	return func_488(iParam0, 7);
}

int func_376(int iParam0)
{
	return func_488(iParam0, 6);
}

void func_377(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_383(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_483(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_378(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_489(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_490(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_282(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_282(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_491(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_379(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_492(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_493(iParam1, 1))
	{
		func_494(iParam1, 1);
		return true;
	}
	return false;
}

void func_380(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_89(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_381(int* iParam0, float fParam1, bool bParam2)
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

void func_382(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_383(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_384(int iParam0)
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

void func_385(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_386(var uParam0, float fParam1)
{
	if (func_495(uParam0, fParam1))
	{
		func_29(uParam0);
		return 1;
	}
	return 0;
}

bool func_387(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_388(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_389()
{
	return Global_1310750.f_16037;
}

bool func_390(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_391(int iParam0)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	if (func_496(64) && func_497(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_392(int iParam0)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_393(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_387(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_498(iParam0);
	Global_1310750.f_16037--;
}

void func_394(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_499(iParam0, iParam1, bParam2);
}

void func_395(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_500(1);
	}
}

void func_396(int iParam0)
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
			Jump @97; // curOff = 52
		}
		else
		{
			func_395(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_500(1);
	}
}

bool func_397(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_398(int iParam0, bool bParam1)
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

bool func_399(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_400(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_401(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_402(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_403(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_404(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_405(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_406(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_501(iParam1))
		{
			func_143(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_502(iParam0, 0, 1);
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
			func_503(iParam0, 0);
			bVar0 = true;
		}
		func_504(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_407(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_408(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_505(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_409(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_410(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_411(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_412(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

bool func_413(int iParam0)
{
	return func_505(iParam0, 2);
}

int func_414(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_415(int iParam0)
{
	int iVar0;

	iVar0 = func_294(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_506(iVar0);
}

int func_416(int iParam0, int iParam1)
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
			func_507(iVar2);
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

void func_417()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_418(int iParam0, int iParam1)
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

int func_419(bool bParam0)
{
	if (func_171() == -1)
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

int func_420(bool bParam0)
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

int func_421(int iParam0)
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

void func_422(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_423(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_424(int iParam0, int iParam1)
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
			func_508((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_508(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_58(Global_1898164.f_1[0 /*5*/]))
	{
		func_199(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_158() - iParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_426(var uParam0)
{
	if (!func_208(uParam0))
	{
		func_209(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_509(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_158() - uParam0->f_1);
}

int func_427()
{
	return Global_1894899.f_2;
}

void func_428(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_510();
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
			func_511(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_429(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_430(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_512(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_431(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_171() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_513(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_513(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_460(iVar0) == -1)
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

void func_432(var uParam0)
{
	if ((*uParam0 & 8) != 0 || (*uParam0 & 16) != 0)
	{
		func_514(uParam0);
	}
}

bool func_433(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_460(iParam2);
	}
	else
	{
		iVar1 = func_459(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_460(iParam0);
	}
	else
	{
		iVar0 = func_459(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_180(*uParam1, (1 << 23)))
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

float func_434(int iParam0, int iParam1)
{
	return func_260(iParam0, iParam1, 1, 1);
}

float func_435(var uParam0)
{
	return uParam0->f_26;
}

bool func_436(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_437()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_438(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_260(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_160(iVar0, 0)))
		{
			if (func_515(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_439(var uParam0)
{
	return uParam0->f_17;
}

bool func_440(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_180(*uParam0, (1 << 22)))
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

int func_441(var uParam0)
{
	return uParam0->f_18;
}

bool func_442(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_160(iVar0, 0)))
		{
			if (func_516(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_443(bool bParam0, bool bParam1, bool bParam2)
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

float func_444(var uParam0)
{
	return uParam0->f_23;
}

int func_445(var uParam0)
{
	return uParam0->f_21;
}

int func_446(var uParam0)
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

bool func_447(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_517(iParam0, vParam4, 0.5f))
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

int func_448(int iParam0)
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
	if (func_518(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_449(int iParam0)
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

bool func_450(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_519(iParam1))
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

bool func_451(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_519(iParam1))
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

bool func_452(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_519(iParam1))
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

bool func_453(int iParam0, int iParam1)
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

bool func_454(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_520(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_455(var uParam0)
{
	return !(*uParam0 & 2) != 0;
}

bool func_456(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_457(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_457(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_458(var uParam0)
{
	return uParam0->f_24;
}

int func_459(int iParam0)
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

int func_460(int iParam0)
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

int func_461(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_453(Global_35, &iVar1))
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
		fVar2 = func_260(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_260(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_462(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_512(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_463(uParam1, iVar0))
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
				if (!bParam2 || !func_463(uParam1, iVar1))
				{
					if (func_457(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_463(var uParam0, int iParam1)
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

bool func_464(int iParam0)
{
	if (func_42())
	{
		return false;
	}
	return func_137(Global_1347702[58 /*49*/].f_15, 1);
}

int func_465(var uParam0)
{
	return uParam0->f_20;
}

int func_466(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_467()
{
	return Global_40.f_11095.f_35;
}

bool func_468(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_470(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_521(bParam1);
	}
}

void func_471(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_472(int iParam0)
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

bool func_473(int iParam0)
{
	Vector3 vVar0;

	if (!func_522(23, &vVar0))
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

bool func_474(int iParam0, bool bParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_522(23, &sVar0))
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

bool func_475(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_476(bool bParam0)
{
	return bParam0;
}

int func_477(bool bParam0)
{
	Vector3 vVar0;

	if (!func_475(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_478()
{
	int iVar0;

	iVar0 = func_352();
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

bool func_479(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_480(int iParam0, int iParam1, int iParam2)
{
	if (!func_479(iParam0))
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

int func_481(int iParam0)
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

int func_482(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_483(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_185(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_186(&(iParam1->f_6), 0, 1);
	}
	if (!func_185(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_383(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_523(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_185(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_491(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_524(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_525(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_280(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_524(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_282(iParam1->f_6, 0, 1);
				}
				else
				{
					func_282(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_484(int iParam0)
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

void func_485(int* iParam0, int iParam1)
{
	if (!func_225(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_226(iParam0, 14);
		}
	}
}

bool func_486(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_487(int iParam0)
{
	Global_22 |= iParam0;
}

int func_488(int iParam0, int iParam1)
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

bool func_489(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_490(int iParam0, bool bParam1)
{
	if (bParam1 && !func_185(iParam0))
	{
		return false;
	}
	return !func_505(iParam0, 4);
}

void func_491(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_185(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	func_524(iParam0, 18, 0, 1);
	func_524(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_492(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_185(iParam0))
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_493(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_185(iParam0))
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_494(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_495(var uParam0, float fParam1)
{
	if (!func_30(uParam0))
	{
		return false;
	}
	if (func_86(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_496(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_497(int iParam0)
{
	return func_390(iParam0, Global_1310750.f_16072 | 64);
}

void func_498(int iParam0)
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

void func_499(int iParam0, int iParam1, bool bParam2)
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

void func_500(bool bParam0)
{
	if (bParam0)
	{
		func_181(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_182(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_501(int iParam0)
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

void func_502(int iParam0, int iParam1, bool bParam2)
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

void func_503(int iParam0, bool bParam1)
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

void func_504(int iParam0, bool bParam1)
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

bool func_505(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

int func_506(int iParam0)
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

int func_507(int iParam0)
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

void func_508(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

bool func_509(var uParam0)
{
	return func_153(*uParam0, 2);
}

bool func_510()
{
	if (func_526())
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

void func_511(var uParam0, var uParam1)
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

bool func_512(bool bParam0, int iParam1, int iParam2)
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

int func_513(var uParam0)
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

void func_514(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_182(uParam0, (1 << 26));
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

bool func_515(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_516(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_516(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_517(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_518(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_519(int iParam0)
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

int func_520(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_521(bool bParam0)
{
	func_527(bParam0);
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

bool func_522(int iParam0, var uParam1)
{
	if (!func_528(iParam0))
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

int func_523(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_505(iVar0, 2))
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
				Jump @141; // curOff = 128
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_529(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_524(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_525(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_526()
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

void func_527(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_529(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_408(iParam0, 1);
	func_409(iParam0, 1);
	func_410(iParam0, 128);
}

