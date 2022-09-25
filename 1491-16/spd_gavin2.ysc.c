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
	struct<217> /*1736*/ sLocal_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1281122482, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1065353216, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 1073741824;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 2;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 570;
	var uLocal_259 = 1065353216;
	var uLocal_260 = -1082130432;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 2;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 570;
	var uLocal_276 = 1065353216;
	var uLocal_277 = -1082130432;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 2;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
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
	var uLocal_311 = 3;
#pragma endregion

void __EntryFunction__()
{
	struct<4> /*32*/ sVar0;
	var uVar6;
	int iVar7;
	int iVar8;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_14 = 9228;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&sLocal_15, 1);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (sLocal_15.f_129 >= 2)
		{
			func_2(&sLocal_15, &(sLocal_15.f_129));
			if (func_3(sLocal_15.f_193, (1 << 11)))
			{
				func_5(&sLocal_15, &(sLocal_15.f_205), func_4(0), 1);
				if (!func_6(11, sLocal_15.f_144, 1, 1))
				{
					func_7(&(sLocal_15.f_193), (1 << 11));
				}
			}
			else
			{
				func_8(&sLocal_15, &(sLocal_15.f_129));
				func_9(&sLocal_15);
				func_10(&sLocal_15, sLocal_15.f_129);
				func_11(sLocal_15.f_144, &(sLocal_15.f_193), 128, 11, sLocal_15.f_214);
				if (func_12(&sLocal_15, 0))
				{
					func_13(&sLocal_15);
				}
				if (func_12(&sLocal_15, 1))
				{
					sLocal_15.f_214 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(sLocal_15.f_144, true, false));
				}
				if (func_12(&sLocal_15, 2))
				{
					if (func_6(11, sLocal_15.f_144, 1, 1))
					{
						func_14(&(sLocal_15.f_193), (1 << 11));
					}
					else
					{
						func_15(11, 0, &(sLocal_15.f_144), &(sLocal_15.f_136), &(sLocal_15.f_216), sLocal_15.f_214, 1097859072, 0);
						switch (sLocal_15.f_129)
						{
							case 0:
								func_16(&sLocal_15, &(sLocal_15.f_129));
								break;
							case 1:
								if (func_17(&sLocal_15))
								{
									func_18(&sLocal_15, &(sLocal_15.f_129), 2);
								}
								break;
							case 2:
								if (func_19(&sLocal_15))
								{
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 3:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(0), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_201 = (1 + sLocal_15.f_201);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 4:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(1), 0))
								{
									sLocal_15.f_208++;
									sLocal_15.f_200++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 5:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(2), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_200++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 6:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(3), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_200++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 7:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(4), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_200 = (1 + sLocal_15.f_200);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 8:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(5), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_200++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 9:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(6), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_201++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 10:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(7), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_200++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 11:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(8), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_201++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 12:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(9), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_200++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 13:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(10), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_201++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 14:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(11), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_200 = (1 + sLocal_15.f_200);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 15:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(12), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_201++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 16:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(13), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_201++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 17:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(14), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_200 = (1 + sLocal_15.f_200);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 18:
								func_20(&sLocal_15);
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_21(15), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_201 = (1 + sLocal_15.f_201);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_200));
								break;
							case 19:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_23(0), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_202++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_202));
								break;
							case 20:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_23(1), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_202++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_202));
								break;
							case 21:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_23(2), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_202 = (1 + sLocal_15.f_202);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_202));
								break;
							case 22:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_23(3), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_202++;
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_202));
								break;
							case 23:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_23(4), 1))
								{
									sLocal_15.f_208++;
									sLocal_15.f_202 = (1 + sLocal_15.f_202);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_202));
								break;
							case 24:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_23(5), 1))
								{
									sLocal_15.f_208 = (1 + sLocal_15.f_208);
									sLocal_15.f_202 = (1 + sLocal_15.f_202);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								func_22(&sLocal_15, &(sLocal_15.f_129), &(sLocal_15.f_144), &(sLocal_15.f_193), &(sLocal_15.f_202));
								break;
							case 25:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_24(0), 0))
								{
									sLocal_15.f_203 = (1 + sLocal_15.f_203);
									func_25(&sLocal_15, 1);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 26:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_24(1), 0))
								{
									sLocal_15.f_203 = (1 + sLocal_15.f_203);
									func_25(&sLocal_15, 1);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 27:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_24(2), 0))
								{
									sLocal_15.f_203++;
									func_25(&sLocal_15, 1);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 28:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_24(3), 0))
								{
									sLocal_15.f_203 = (1 + sLocal_15.f_203);
									func_25(&sLocal_15, 1);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 29:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_24(4), 0))
								{
									sLocal_15.f_203 = (1 + sLocal_15.f_203);
									func_25(&sLocal_15, 1);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 30:
								if (func_5(&sLocal_15, &(sLocal_15.f_205), func_24(5), 0))
								{
									sLocal_15.f_203 = (1 + sLocal_15.f_203);
									func_25(&sLocal_15, 1);
									func_18(&sLocal_15, &(sLocal_15.f_129), 31);
								}
								break;
							case 31:
								if (!func_3(sLocal_15.f_193, 1) && func_3(sLocal_15.f_193, 64))
								{
									if ((func_26(&sLocal_15, &(sLocal_15.f_206)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(Global_35, true))
									{
										func_18(&sLocal_15, &(sLocal_15.f_129), 32);
									}
								}
								else if (func_3(sLocal_15.f_193, 1))
								{
									if (!func_27(sLocal_15.f_144, joaat("SCRIPT_TASK_FOLLOW_WAYPOINT_RECORDING")))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(sLocal_15.f_144, sLocal_15.f_212, 0, iLocal_14, -1, true, 0, -1);
									}
									if (func_5(&sLocal_15, &(sLocal_15.f_205), func_4(sLocal_15.f_128), 1))
									{
										func_28(&sLocal_15);
										func_29(&sLocal_15, &(sLocal_15.f_129));
									}
								}
								else
								{
									if (!func_27(sLocal_15.f_144, joaat("SCRIPT_TASK_FOLLOW_WAYPOINT_RECORDING")))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(sLocal_15.f_144, sLocal_15.f_212, 0, iLocal_14, -1, true, 0, -1);
									}
									if (func_5(&sLocal_15, &(sLocal_15.f_205), func_4(sLocal_15.f_128), 0))
									{
										if (sLocal_15.f_127 != -1)
										{
											func_28(&sLocal_15);
											func_30(&sLocal_15, &(sLocal_15.f_129));
										}
										else if (func_31(11) == -1)
										{
										}
										else
										{
											func_28(&sLocal_15);
											sLocal_15.f_147[0] = sLocal_15.f_144;
											if (func_32(&(sLocal_15.f_145), &(sLocal_15.f_147), 1, ENTITY::GET_ENTITY_COORDS(sLocal_15.f_144, true, false), 10.0f, 0, 1, 1, -1, 1, 0, -1082130432, 0, 0) > 0 || sLocal_15.f_214 < 10.0f)
											{
												func_33(&sLocal_15, &(sLocal_15.f_129));
											}
											else
											{
												func_34(&sLocal_15, &(sLocal_15.f_129));
											}
										}
									}
								}
								break;
							case 32:
								if (!func_35())
								{
								}
								else
								{
									if (!func_3(sLocal_15.f_193, (1 << 9)))
									{
										iVar7 = func_36(Global_35, 0);
										iVar8 = func_36(Global_35, 1);
										if (iVar7 != joaat("WEAPON_UNARMED") || iVar8 != joaat("WEAPON_UNARMED"))
										{
											WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										}
										if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
										{
											if (!func_27(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
											{
												TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
											}
										}
										func_14(&(sLocal_15.f_193), (1 << 9));
									}
									else if (!func_27(sLocal_15.f_144, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										func_37();
										if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_15.f_206, false))
										{
											ANIMSCENE::RESET_ANIM_SCENE(sLocal_15.f_206, 0);
										}
										func_38(&sLocal_15);
									}
									Jump @3569; // curOff = 3166
									func_39(&sLocal_15);
									if (!func_35())
									{
									}
									else
									{
										if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_15.f_206, false) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_15.f_205, false))
										{
											ANIMSCENE::RESET_ANIM_SCENE(sLocal_15.f_205, 0);
										}
										if (func_5(&sLocal_15, &(sLocal_15.f_206), func_40(0), 1) || func_3(sLocal_15.f_193, 256))
										{
											func_41(&(sLocal_15.f_193), 1);
											func_42(sLocal_15.f_144, 1);
											PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_GAVINS_FRIEND"));
											if (func_43(&(sLocal_15.f_205)))
											{
												sVar0 = { ENTITY::GET_ENTITY_COORDS(sLocal_15.f_144, true, false) /*3*/ };
												MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
												sVar0.f_2 = uVar6;
												sVar0.f_2 += 1.0f;
												sVar0.f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
												sVar0.f_3.f_2 = ENTITY::GET_ENTITY_HEADING(sLocal_15.f_144);
												ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_15.f_205, sVar0, sVar0.f_3, 2);
												ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_15.f_205, "cs_gavin", sLocal_15.f_144, 0);
												ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_15.f_205, "Internal_loop", false, false);
												if (func_44(&(sLocal_15.f_142), &(sLocal_15.f_195)))
												{
													if (func_3(sLocal_15.f_195, 1) && !func_3(sLocal_15.f_195, 2))
													{
														func_18(&sLocal_15, &(sLocal_15.f_129), 25);
													}
													else
													{
														sLocal_15.f_203++;
														func_18(&sLocal_15, &(sLocal_15.f_129), 26);
													}
												}
											}
										}
										else
										{
											PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_15.f_144, 1.5f);
										}
										Jump @3569; // curOff = 3509
										if (MISC::GET_GAME_TIMER() > sLocal_15.f_211)
										{
											func_18(&sLocal_15, &(sLocal_15.f_129), 34);
										}
										Jump @3569; // curOff = 3535
										func_1(&sLocal_15, 1);
										func_18(&sLocal_15, &(sLocal_15.f_129), 37);
										Jump @3569; // curOff = 3557
										Jump @3569; // curOff = 3560
										func_45(&sLocal_15, &(sLocal_15.f_129));
									}
								}
								default:
									break;
						}
					}
				}
			}
		}
	}
}

void func_1(var uParam0, bool bParam1)
{
	func_46(uParam0);
	func_47(11);
	func_48(&(uParam0->f_275));
	func_49(&(uParam0->f_240), 0, 1, 1, 0);
	func_50(&(uParam0->f_219), &(uParam0->f_240));
	if (func_51(uParam0->f_142) && (func_52(uParam0->f_142) || func_53(uParam0->f_142)))
	{
		func_54(uParam0->f_142, 0, 2);
	}
	if (uParam0->f_209 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_209);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_144))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, false);
		func_55(uParam0->f_144);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_144, 0.0f);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_144));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_205))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_205);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_212))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_212))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_212);
		}
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "GavinBubble");
	func_56(uParam0);
	if (bParam1 && !func_57(uParam0->f_153, 1, 1))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2(var uParam0, var uParam1)
{
	bool bVar0;

	if (*uParam1 <= 2 || *uParam1 >= 34)
	{
		return;
	}
	if (!func_58(uParam0->f_144, 0))
	{
		func_1(uParam0, 0);
		func_18(uParam0, uParam1, 34);
		return;
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_144, 49, true);
	bVar0 = PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(uParam0->f_144, ENTITY::GET_ENTITY_COORDS(uParam0->f_144, true, false), 10.0f, 256) > 0;
	if (func_59(uParam0->f_144, 0, &(uParam0->f_98), &(uParam0->f_126), 0, uParam0->f_214) || bVar0)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, false);
		if (!func_27(uParam0->f_144, joaat("SCRIPT_TASK_FLEE")))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_144, (1 << 10), true);
			TASK::TASK_SMART_FLEE_PED(uParam0->f_144, Global_35, 100.0f, -1, (1 << 12), 3.0f, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, false);
			func_55(uParam0->f_144);
		}
		func_60(11);
		func_61(uParam0->f_144, "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), Global_35, 1, "GAVINS_FRIEND", 0, 1);
		uParam0->f_211 = MISC::GET_GAME_TIMER() + 150;
		func_18(uParam0, uParam1, 35);
	}
}

bool func_3(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

char[] func_4(int iParam0)
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
			sVar0 = "pbl_IDLE_G";
			break;
		case 7:
			sVar0 = "pbl_IDLE_H";
			break;
		case 8:
			sVar0 = "pbl_IDLE_I";
			break;
		case 9:
			sVar0 = "pbl_IDLE_J";
			break;
	}
	return sVar0;
}

bool func_5(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (!func_3(uParam0->f_193, (1 << 13)))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		else
		{
			func_14(&(uParam0->f_193), (1 << 13));
		}
		return false;
	}
	if (func_3(uParam0->f_193, (1 << 15)))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_BASE", true))
		{
			if (func_62(uParam1, uParam0->f_217))
			{
				uParam0->f_217 = sParam2;
				return true;
			}
		}
		if (uParam0->f_129 == 33)
		{
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam1, false))
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		if (!func_3(uParam0->f_193, (1 << 14)))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam2))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam1, sParam2))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
				}
				return false;
			}
			else
			{
				func_14(&(uParam0->f_193), (1 << 14));
			}
		}
		if (bParam3)
		{
			if (uParam0->f_214 > 60.0f)
			{
				return false;
			}
		}
		if (!func_3(uParam0->f_193, (1 << 15)))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam2))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_loop", false, false);
				return false;
			}
			else
			{
				func_14(&(uParam0->f_193), (1 << 15));
			}
		}
	}
	return false;
}

bool func_6(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_63())
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
		if (func_64(0) == 7 || func_65())
		{
			return true;
		}
	}
	if (func_66(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 10)))
	{
		return true;
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	func_67(uParam0, iParam1);
}

void func_8(var uParam0, var uParam1)
{
	if ((*uParam1 <= 2 || *uParam1 == 32) || *uParam1 == 33)
	{
		return;
	}
	if (func_69(11, func_68(11), &(uParam0->f_275), uParam0->f_144))
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
		return;
	}
	if (func_70(Global_1396257[11 /*638*/][func_68(11) /*48*/].f_8[0], 0) | func_70(Global_1396257[11 /*638*/][func_68(11) /*48*/].f_8[1], 0))
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
		return;
	}
	if (!func_58(Global_35, 0))
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[11 /*638*/][func_68(11) /*48*/].f_47))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[11 /*638*/][func_68(11) /*48*/].f_47, true, 0))
		{
			func_1(uParam0, 1);
			func_18(uParam0, uParam1, 37);
			return;
		}
	}
	if (uParam0->f_127 != -1)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_71(uParam0->f_127), true, 0))
		{
			func_1(uParam0, 1);
			func_18(uParam0, uParam1, 37);
			return;
		}
	}
	if (func_3(uParam0->f_193, 64) && uParam0->f_214 > 125.0f)
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
	}
}

void func_9(var uParam0)
{
	struct<2> /*16*/ sVar0;

	if ((((func_3(uParam0->f_193, 8) && !func_3(uParam0->f_193, 64)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_144)) && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(uParam0->f_144, true)) && uParam0->f_129 != 19)
	{
		func_72(uParam0, 1);
	}
	else
	{
		func_72(uParam0, 0);
	}
	switch (func_74(&(uParam0->f_144), &(uParam0->f_219), 15.0f, &(uParam0->f_240), 0.0f, 2, 0, "", func_73(uParam0->f_296, 0, 0), 0, 0, 2, -1082130432))
	{
		case 0:
			if (!func_3(uParam0->f_193, 64))
			{
				func_37();
				func_75(11, &(uParam0->f_144), &(uParam0->f_193), 16);
				func_61(Global_35, "GREET_GENERAL", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), uParam0->f_144, 1, 0, 0, 1);
				func_76(&(uParam0->f_144));
				func_72(uParam0, 0);
				func_49(&(uParam0->f_240), 0, 0, 1, 0);
				func_77(uParam0);
				func_78(&(uParam0->f_240[0 /*17*/]), 0, 0);
				func_78(&(uParam0->f_240[1 /*17*/]), 0, 0);
				func_79(11);
				func_14(&(uParam0->f_193), 64);
			}
			break;
		case 1:
			if (!func_3(uParam0->f_193, 64))
			{
				func_37();
				func_75(11, &(uParam0->f_144), &(uParam0->f_193), 16);
				sVar0 = { func_80(uParam0) /*2*/ };
				func_61(Global_35, sVar0.f_0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), uParam0->f_144, 1, 0, sVar0.f_1, 1);
				func_76(&(uParam0->f_144));
				func_72(uParam0, 0);
				func_49(&(uParam0->f_240), 0, 0, 1, 0);
				func_77(uParam0);
				func_78(&(uParam0->f_240[0 /*17*/]), 0, 0);
				func_78(&(uParam0->f_240[1 /*17*/]), 0, 0);
				func_79(11);
				func_14(&(uParam0->f_193), 64);
			}
			break;
	}
}

void func_10(var uParam0, int iParam1)
{
	if (func_3(uParam0->f_193, 32) && uParam0->f_210 >= 4)
	{
		return;
	}
	if (iParam1 >= 3 && iParam1 <= 24)
	{
		if (func_81(&(uParam0->f_144), &(uParam0->f_215), &(uParam0->f_139), &(uParam0->f_210), 4, 0, 4000, 0))
		{
			func_14(&(uParam0->f_193), 32);
		}
	}
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_82(iParam3);
	if (fParam4 == 0.0f)
	{
		if (func_83(iParam0, Global_35, 15.0f, 1))
		{
			if (!func_84(*uParam1, iParam2))
			{
				if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
				{
					func_85(uParam1, iParam2);
				}
			}
		}
		else if (func_84(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_67(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15.0f)
	{
		if (!func_84(*uParam1, iParam2))
		{
			if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
			{
				func_85(uParam1, iParam2);
			}
		}
	}
	else if (func_84(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_67(uParam1, iParam2);
	}
}

bool func_12(var uParam0, int iParam1)
{
	if (uParam0->f_196[iParam1] < func_86(iParam1))
	{
		uParam0->f_196[iParam1]++;
		return false;
	}
	uParam0->f_196[iParam1] = 0;
	return true;
}

void func_13(var uParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_150, true, 0))
	{
		if (!func_3(uParam0->f_193, 8))
		{
			func_14(&(uParam0->f_193), 8);
		}
	}
	else
	{
		func_7(&(uParam0->f_193), 8);
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		func_87(&(uParam0->f_240[0 /*17*/]), 9);
		func_87(&(uParam0->f_240[1 /*17*/]), 9);
	}
}

void func_14(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_88();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0.0f)
	{
		if (!func_83(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_89(uParam3))
	{
		func_90(uParam3, 0.0f);
	}
	else if (func_91(uParam3) >= 2.0f)
	{
		if (!func_92(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_60(iParam0);
			*uParam4 = 1;
			func_93(uParam3);
			return 1;
		}
		else
		{
			func_60(iParam0);
			*uParam4 = 1;
			func_93(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	uParam0->f_127 = func_94(11);
	if (uParam0->f_127 != -1)
	{
		uParam0->f_212 = func_95(uParam0->f_127);
	}
	else
	{
		uParam0->f_212 = func_96(func_31(11));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_212))
	{
		return;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(uParam0->f_212);
	PED::_RESERVE_AMBIENT_PEDS(1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_205))
	{
		uParam0->f_205 = ANIMSCENE::_CREATE_ANIM_SCENE(func_97(), 0, func_4(0), false, true);
	}
	if (!func_98(&(uParam0->f_142), &(uParam0->f_195)))
	{
		uParam0->f_142 = func_100(11, 1, 9, func_99(11));
		if (!func_51(uParam0->f_142))
		{
		}
		return;
	}
	if (!func_3(uParam0->f_195, 1))
	{
		func_14(&(uParam0->f_195), 1);
	}
	if (!func_3(uParam0->f_195, 2))
	{
		func_14(&(uParam0->f_195), 2);
	}
	if (!func_3(uParam0->f_195, 4))
	{
		func_14(&(uParam0->f_195), 4);
	}
	if (!func_3(uParam0->f_195, 8))
	{
		func_14(&(uParam0->f_195), 8);
	}
	if (func_3(uParam0->f_195, 8) && !func_3(uParam0->f_195, 16))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_101(), 0, func_102(0), false, true);
		uParam0->f_213 = 0.85f;
	}
	else if (func_3(uParam0->f_195, 16) && !func_3(uParam0->f_195, 32))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_103(), 0, func_104(0), false, true);
	}
	func_105(&(uParam0->f_275));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_205) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_205);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_206);
		HUD::TEXT_BLOCK_REQUEST("SPGV");
		HUD::TEXT_BLOCK_REQUEST("SPGVNAU");
		STREAMING::REQUEST_MODEL(uParam0->f_143, false);
		func_106(uParam0);
		func_107(uParam0->f_149, "SP_Gavin1_Block", 1, 0, 0, 0, -1082130432);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_151, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_151, 2238463, 0, 0, -1, -1, 0);
		func_25(uParam0, 0);
		if (func_108())
		{
			func_109(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_109(uParam0, Global_35, "ARTHUR", 0);
		}
		if (func_51(uParam0->f_142))
		{
			if (func_110(uParam0))
			{
				func_111(uParam0);
				func_112(uParam0);
				func_113(uParam0);
				func_114(uParam0);
				uParam0->f_204 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
			}
			else
			{
				return;
			}
			if (!func_115(uParam0->f_142, 1))
			{
				func_18(uParam0, uParam1, 1);
			}
			else
			{
				func_18(uParam0, uParam1, 36);
			}
		}
	}
}

bool func_17(var uParam0)
{
	if ((((((ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_205, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_206, true, false)) && HUD::TEXT_BLOCK_IS_LOADED("SPGV")) && HUD::TEXT_BLOCK_IS_LOADED("SPGVNAU")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_143)) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_212))
	{
		uParam0->f_194 = 0;
		return true;
	}
	return false;
}

void func_18(var uParam0, var uParam1, int iParam2)
{
	func_7(&(uParam0->f_193), (1 << 12));
	func_7(&(uParam0->f_193), (1 << 13));
	func_7(&(uParam0->f_193), (1 << 14));
	func_7(&(uParam0->f_193), (1 << 15));
	*uParam1 = iParam2;
}

bool func_19(var uParam0)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_116(uParam0, 0) /*4*/ };
	if (func_117(&(uParam0->f_144), uParam0->f_143, sVar0, sVar0.f_3, 1, 1, 1))
	{
		if (func_58(uParam0->f_144, 0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_144, "special_ped_group", 0.0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_144, joaat("REL_CIVMALE"));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_144, 17, true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_144, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_144, true, true);
			func_109(uParam0, uParam0->f_144, "GAVINS_FRIEND", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_144, sVar0, sVar0.f_3, true, false, true);
			func_118(uParam0);
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), uParam0->f_144, 7, 0, true);
			uParam0->f_209 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), uParam0->f_144, 0.0f, 7.0f, 7.0f, 6.0f, -1.0f, 180.0f, false, false, -1, -1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_205, "cs_gavin", uParam0->f_144, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "cs_gavin", uParam0->f_144, 0);
			if (func_108())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "player_three", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "player_zero", Global_35, 0);
			}
			if (func_108())
			{
				func_119(uParam0->f_144, 1689938120);
			}
			else
			{
				func_119(uParam0->f_144, joaat("META_OUTFIT_DEFAULT"));
			}
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_151, uParam0->f_144, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_150, uParam0->f_144, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_152, uParam0->f_144, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
			VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_152, false);
			VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_152, true);
			func_120(uParam0->f_144, joaat("DOCUMENT_LETTER_GAVIN_FRIEND"), 1);
			func_77(uParam0);
			func_72(uParam0, 0);
			func_14(&(uParam0->f_193), (1 << 10));
			func_121(uParam0->f_144, 11);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_144, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0.0f, 0.0f, 0.0f, 0, "GavinBubble");
			if (func_122(Global_40.f_11623[11 /*8*/].f_1, (1 << 22)))
			{
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_144, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_NIGEL"));
			}
			return true;
		}
	}
	return false;
}

void func_20(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_145[0]) && uParam0->f_214 > 10.0f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 0.25f);
	}
	else if (uParam0->f_214 < 10.0f)
	{
		func_123(uParam0);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 0.25f);
	}
}

char[] func_21(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_WILDERNESS_A";
			break;
		case 1:
			sVar0 = "pbl_WILDERNESS_B";
			break;
		case 2:
			sVar0 = "pbl_WILDERNESS_C";
			break;
		case 3:
			sVar0 = "pbl_WILDERNESS_D";
			break;
		case 4:
			sVar0 = "pbl_WILDERNESS_E";
			break;
		case 5:
			sVar0 = "pbl_WILDERNESS_F";
			break;
		case 6:
			sVar0 = "pbl_WILDERNESS_G";
			break;
		case 7:
			sVar0 = "pbl_WILDERNESS_H";
			break;
		case 8:
			sVar0 = "pbl_WILDERNESS_I";
			break;
		case 9:
			sVar0 = "pbl_WILDERNESS_J";
			break;
		case 10:
			sVar0 = "pbl_WILDERNESS_K";
			break;
		case 11:
			sVar0 = "pbl_WILDERNESS_L";
			break;
		case 12:
			sVar0 = "pbl_WILDERNESS_M";
			break;
		case 13:
			sVar0 = "pbl_WILDERNESS_N";
			break;
		case 14:
			sVar0 = "pbl_WILDERNESS_O";
			break;
		case 15:
			sVar0 = "pbl_WILDERNESS_P";
			break;
	}
	return sVar0;
}

void func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_3(*uParam3, 64))
	{
		return;
	}
	if (((AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2) || AUDIO::_IS_PED_IN_ANY_CONVERSATION(*uParam2, true)) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) || AUDIO::_IS_PED_IN_ANY_CONVERSATION(Global_35, true))
	{
		return;
	}
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, true, false);
	*uParam4++;
	func_18(uParam0, uParam1, 31);
}

char[] func_23(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_SEARCH_TOWN_A";
			break;
		case 1:
			sVar0 = "pbl_SEARCH_TOWN_B";
			break;
		case 2:
			sVar0 = "pbl_SEARCH_TOWN_C";
			break;
		case 3:
			sVar0 = "pbl_SEARCH_TOWN_D";
			break;
		case 4:
			sVar0 = "pbl_SEARCH_TOWN_E";
			break;
		case 5:
			sVar0 = "pbl_SEARCH_TOWN_F";
			break;
	}
	return sVar0;
}

char[] func_24(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_RETURN_TO_SEARCH_A";
			break;
		case 1:
			sVar0 = "pbl_RETURN_TO_SEARCH_B";
			break;
		case 2:
			sVar0 = "pbl_RETURN_TO_SEARCH_C";
			break;
		case 3:
			sVar0 = "pbl_RETURN_TO_SEARCH_D";
			break;
		case 4:
			sVar0 = "pbl_RETURN_TO_SEARCH_E";
			break;
		case 5:
			sVar0 = "pbl_RETURN_TO_SEARCH_F";
			break;
	}
	return sVar0;
}

void func_25(var uParam0, bool bParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_124(uParam0, &(uParam0->f_144), bParam1) /*6*/ };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_206, sVar0, sVar0.f_3, 2);
	if (!bParam1)
	{
		sVar0.f_2 += 1.0f;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_205, sVar0, sVar0.f_3, 2);
}

bool func_26(var uParam0, var uParam1)
{
	if (func_43(uParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "cs_gavin", uParam0->f_144, 0);
		if (!func_108())
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_three", Global_35, 0);
		}
		return true;
	}
	return false;
}

bool func_27(int iParam0, int iParam1)
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

void func_28(var uParam0)
{
	uParam0->f_204++;
	if (uParam0->f_204 > 9)
	{
		uParam0->f_204 = 0;
	}
	uParam0->f_128 = uParam0->f_204;
}

void func_29(var uParam0, var uParam1)
{
	if (uParam0->f_203 > 5)
	{
		uParam0->f_203 = 1;
	}
	switch (uParam0->f_203)
	{
		case 0:
			func_18(uParam0, uParam1, 25);
			break;
		case 1:
			func_18(uParam0, uParam1, 26);
			break;
		case 2:
			func_18(uParam0, uParam1, 27);
			break;
		case 3:
			func_18(uParam0, uParam1, 28);
			break;
		case 4:
			func_18(uParam0, uParam1, 29);
			break;
		case 5:
			func_18(uParam0, uParam1, 30);
			break;
		default:
			break;
	}
}

void func_30(var uParam0, var uParam1)
{
	if (uParam0->f_202 > 5)
	{
		uParam0->f_202 = 0;
	}
	switch (uParam0->f_202)
	{
		case 0:
			func_18(uParam0, uParam1, 19);
			break;
		case 1:
			func_18(uParam0, uParam1, 20);
			break;
		case 2:
			func_18(uParam0, uParam1, 21);
			break;
		case 3:
			func_18(uParam0, uParam1, 22);
			break;
		case 4:
			func_18(uParam0, uParam1, 23);
			break;
		case 5:
			func_18(uParam0, uParam1, 24);
			break;
		default:
			break;
	}
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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

int func_32(var uParam0, var uParam1, int iParam2, Vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0.0f)
	{
		iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_126(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_127(iVar0);
	return iVar1;
}

void func_33(var uParam0, var uParam1)
{
	if (uParam0->f_201 > 6)
	{
		uParam0->f_201 = 0;
	}
	switch (uParam0->f_201)
	{
		case 0:
			func_18(uParam0, uParam1, 3);
			break;
		case 1:
			func_18(uParam0, uParam1, 9);
			break;
		case 2:
			func_18(uParam0, uParam1, 11);
			break;
		case 3:
			func_18(uParam0, uParam1, 13);
			break;
		case 4:
			func_18(uParam0, uParam1, 15);
			break;
		case 5:
			func_18(uParam0, uParam1, 16);
			break;
		case 6:
			func_18(uParam0, uParam1, 18);
			break;
		default:
			break;
	}
}

void func_34(var uParam0, var uParam1)
{
	if (uParam0->f_200 > 8)
	{
		uParam0->f_200 = 0;
	}
	switch (uParam0->f_200)
	{
		case 0:
			func_18(uParam0, uParam1, 4);
			break;
		case 1:
			func_18(uParam0, uParam1, 5);
			break;
		case 2:
			func_18(uParam0, uParam1, 6);
			break;
		case 3:
			func_18(uParam0, uParam1, 7);
			break;
		case 4:
			func_18(uParam0, uParam1, 8);
			break;
		case 5:
			func_18(uParam0, uParam1, 10);
			break;
		case 6:
			func_18(uParam0, uParam1, 12);
			break;
		case 7:
			func_18(uParam0, uParam1, 14);
			break;
		case 8:
			func_18(uParam0, uParam1, 17);
			break;
		default:
			break;
	}
}

bool func_35()
{
	if (((!func_128() && !func_27(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD"))) && (!ENTITY::DOES_ENTITY_EXIST(func_129()) || !ENTITY::IS_ENTITY_IN_AIR(func_129(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return true;
	}
	if (func_130())
	{
		func_131();
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!func_27(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), func_132(PLAYER::GET_PLAYER_INDEX()), 1.0f, 8);
		}
	}
	return false;
}

int func_36(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_37()
{
	func_133();
	func_134(-1, 0, 0, 0, 0);
	func_135(60, 0, 1);
}

void func_38(var uParam0)
{
	func_136(uParam0->f_144, Global_35, &(uParam0->f_154), -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, (1 << 30), 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
	if (!func_3(uParam0->f_195, 1))
	{
		func_14(&(uParam0->f_195), 1);
	}
	else if (func_3(uParam0->f_195, 1) && !func_3(uParam0->f_195, 2))
	{
		func_14(&(uParam0->f_195), 2);
	}
	else if (func_3(uParam0->f_195, 2) && !func_3(uParam0->f_195, 4))
	{
		func_14(&(uParam0->f_195), 4);
	}
	else if (func_3(uParam0->f_195, 4) && !func_3(uParam0->f_195, 8))
	{
		func_14(&(uParam0->f_195), 8);
	}
	else if (func_3(uParam0->f_195, 8) && !func_3(uParam0->f_195, 16))
	{
		func_14(&(uParam0->f_195), 16);
	}
	else if (func_3(uParam0->f_195, 16) && !func_3(uParam0->f_195, 32))
	{
		func_14(&(uParam0->f_195), 32);
	}
	func_18(uParam0, &(uParam0->f_129), 33);
}

void func_39(var uParam0)
{
	if (!func_3(uParam0->f_193, 256))
	{
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_144) > 1.5f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 1.5f);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_206, false))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_206) > uParam0->f_213)
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
					func_42(uParam0->f_144, 1);
					func_14(&(uParam0->f_193), 256);
				}
			}
		}
		if ((uParam0->f_214 > 10.0f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_144))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
			func_42(uParam0->f_144, 1);
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_206, false);
			func_14(&(uParam0->f_193), 256);
		}
	}
}

char[] func_40(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_42(bool bParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, 0);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(bParam0, -1);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(bParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
	}
}

bool func_43(var uParam0)
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

bool func_44(var uParam0, var uParam1)
{
	if (func_51(*uParam0))
	{
		func_137(*uParam0, *uParam1);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_45(var uParam0, var uParam1)
{
	if (func_51(uParam0->f_142))
	{
		switch (*uParam1)
		{
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
			case 23:
			case 24:
			case 31:
				break;
			case 32:
			case 33:
				break;
			case 34:
				break;
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 36:
				if (func_3(uParam0->f_195, 8))
				{
					func_138(11, 1);
				}
				if (func_3(uParam0->f_195, 32))
				{
					func_138(11, 12);
				}
				break;
			case 37:
				break;
		}
	}
}

int func_46(var uParam0)
{
	switch (uParam0->f_200)
	{
		case 0:
			func_14(&(uParam0->f_194), 1);
			break;
		case 1:
			func_14(&(uParam0->f_194), 2);
			break;
		case 2:
			func_14(&(uParam0->f_194), 4);
			break;
		case 3:
			func_14(&(uParam0->f_194), 8);
			break;
		case 4:
			func_14(&(uParam0->f_194), 16);
			break;
		case 5:
			func_14(&(uParam0->f_194), 32);
			break;
		case 6:
			func_14(&(uParam0->f_194), 64);
			break;
	}
	switch (uParam0->f_201)
	{
		case 0:
			func_14(&(uParam0->f_194), 128);
			break;
		case 1:
			func_14(&(uParam0->f_194), 256);
			break;
		case 2:
			func_14(&(uParam0->f_194), (1 << 9));
			break;
		case 3:
			func_14(&(uParam0->f_194), (1 << 10));
			break;
		case 4:
			func_14(&(uParam0->f_194), (1 << 11));
			break;
		case 5:
			func_14(&(uParam0->f_194), (1 << 12));
			break;
		case 6:
			func_14(&(uParam0->f_194), (1 << 13));
			break;
		case 7:
			func_14(&(uParam0->f_194), (1 << 14));
			break;
		case 8:
			func_14(&(uParam0->f_194), (1 << 15));
			break;
	}
	switch (uParam0->f_202)
	{
		case 0:
			func_14(&(uParam0->f_194), (1 << 16));
			break;
		case 1:
			func_14(&(uParam0->f_194), (1 << 17));
			break;
		case 2:
			func_14(&(uParam0->f_194), (1 << 18));
			break;
		case 3:
			func_14(&(uParam0->f_194), (1 << 19));
			break;
		case 4:
			func_14(&(uParam0->f_194), (1 << 20));
			break;
		case 5:
			func_14(&(uParam0->f_194), (1 << 21));
			break;
	}
	switch (uParam0->f_203)
	{
		case 0:
			func_14(&(uParam0->f_194), (1 << 22));
			break;
		case 1:
			func_14(&(uParam0->f_194), (1 << 23));
			break;
		case 2:
			func_14(&(uParam0->f_194), (1 << 24));
			break;
		case 3:
			func_14(&(uParam0->f_194), (1 << 25));
			break;
		case 4:
			func_14(&(uParam0->f_194), (1 << 26));
			break;
		case 5:
			func_14(&(uParam0->f_194), (1 << 27));
			break;
	}
	if (func_51(uParam0->f_142))
	{
		func_139(uParam0->f_142, uParam0->f_194);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_47(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_140(0, -1);
	}
	func_141();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2--;
	Global_1935183.f_28 = 0;
}

void func_48(var uParam0)
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
	if (func_89(&(uParam0->f_13)))
	{
		func_93(&(uParam0->f_13));
	}
}

void func_49(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_142((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_143(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_50(int* iParam0, var uParam1)
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
	func_144(iParam0, uParam1, 1);
	func_49(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

bool func_51(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_52(int iParam0)
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
		iVar0 = func_145(iParam0);
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

bool func_53(int iParam0)
{
	int iVar0;

	iVar0 = func_146(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_54(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_51(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_53(iParam0) && !func_52(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_147(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_53(iParam0))
	{
		iParam2 = -1;
	}
	if (func_145(iParam0) == 3 || (func_145(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_147(iParam0))))
	{
		func_149(func_148(iParam0), func_147(iParam0), iParam2);
		if ((!func_51(Global_1572864.f_8) && !func_150(0, 1, 0)) && !func_151(Global_1935630, (1 << 15)))
		{
			iVar0 = func_152(iParam0);
			if (iVar0 != -1)
			{
				func_153(0);
			}
			else if (func_148(iParam0) == 8)
			{
				iVar0 = func_154();
				if (iVar0 != -1)
				{
					func_153(0);
				}
			}
		}
	}
	func_155(iParam0, 0);
	if (func_156(0) == iParam0)
	{
		func_157(1);
		func_158(0);
		func_159(1);
	}
	func_160(iParam0, 1);
	func_161(iParam0);
}

void func_55(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 7, 0, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 3, 2, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 4, 2, true);
}

void func_56(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_149))
	{
		func_162(uParam0->f_149);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_151))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_151);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_151);
	}
	func_127(Global_1396257[11 /*638*/][0 /*48*/].f_47);
	func_127(uParam0->f_149);
	func_127(uParam0->f_150);
	func_127(uParam0->f_151);
	func_127(uParam0->f_152);
}

bool func_57(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::DOES_VOLUME_EXIST(Global_1954750[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1954750[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_58(int iParam0, int iParam1)
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
	if (func_3(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_3(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_3(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_59(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_163(uParam2, 1, iVar0);
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
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_164(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_166(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_167(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_168(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_169(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & (1 << 19) == 0))
		{
			if (!uParam2->f_1 & (1 << 14) != 0)
			{
				*uParam3 = (1 << 14);
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_170(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_171(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_172(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_173(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_173(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_174(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_175(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_176(uParam2, 4000))
				{
					if (func_177(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) & func_178(uParam2, iParam0) && func_179(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if (func_177(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) & func_178(uParam2, iParam0) && func_179(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & (1 << 17) == 0)
						{
							if (func_180(iParam0, Global_1935630.f_41))
							{
								func_181();
								*uParam3 = 2;
								func_165(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & (1 << 17) == 0)
					{
						if (func_180(iParam0, Global_1935630.f_41))
						{
							func_181();
							*uParam3 = 2;
							func_165(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_182(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_183() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_181();
						*uParam3 = 2;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & (1 << 17) == 0)
				{
					if (func_184())
					{
						if (func_180(iParam0, Global_1935630.f_42))
						{
							func_181();
							*uParam3 = 2;
							func_165(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & (1 << 10) != 0)
		{
			if (func_185(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & (1 << 11) != 0)
			{
				if (func_186(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_187(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_188(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if (*uParam2 & (1 << 20) != 0)
			{
				if (func_189(uParam2, 4000))
				{
					if (func_190(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & (1 << 10) != 0)
			{
				if (func_191(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_192(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_60(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_88();
}

bool func_61(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
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

bool func_62(var uParam0, char* sParam1)
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

bool func_63()
{
	int iVar0;

	if (func_194() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_53(Global_1392915[iVar0 /*12*/].f_4))
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

int func_64(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_65()
{
	return Global_1310750.f_16077 != 0;
}

bool func_66(var uParam0, int iParam1)
{
	return func_122(*uParam0, iParam1);
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_68(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

bool func_69(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_64(0) == 1 || func_64(0) == 2) || func_64(0) == 8) || func_151(Global_1935630, (1 << 11)))
			{
				func_14(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_64(0) == 11)
			{
				func_14(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_64(0) == 6)
			{
				func_14(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_14(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_195(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_195(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_88();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_195(iVar2) > func_195(iVar1))
				{
					if (func_195(iVar0) > func_195(iVar2) + 1 || func_195(iVar0) < func_195(iVar1))
					{
						func_14(uParam2, 32);
					}
				}
				else if (func_195(iVar0) > func_195(iVar2) + 1 && func_195(iVar0) < func_195(iVar1))
				{
					func_14(uParam2, 32);
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
					if (((func_196(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_196(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_197(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_197(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_198(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_14(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_199(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) | func_200(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, (1 << 11)))
				{
					if (!func_89(&(uParam2->f_13)))
					{
						func_90(&(uParam2->f_13), 0.0f);
					}
					else if (func_201(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_93(&(uParam2->f_13));
						func_14(uParam2, (1 << 9));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_89(&(uParam2->f_13)))
					{
						func_93(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_202())
			{
				func_14(uParam2, (1 << 10));
			}
		}
		if (uParam2->f_10)
		{
			if (func_203())
			{
				func_14(uParam2, (1 << 11));
			}
		}
		if (func_151(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_14(uParam2, 128);
		}
		if (func_66(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_14(uParam2, 256);
		}
	}
	if ((((((((((func_3(*uParam2, 2) || func_3(*uParam2, 4)) || func_3(*uParam2, 8)) || func_3(*uParam2, 16)) || func_3(*uParam2, 32)) || func_3(*uParam2, 64)) || func_3(*uParam2, 128)) || func_3(*uParam2, 256)) || func_3(*uParam2, (1 << 9))) || func_3(*uParam2, (1 << 10))) || func_3(*uParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_194() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & (1 << 14) == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_72(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_3(uParam0->f_193, (1 << 10)))
		{
			func_205(&(uParam0->f_219), 0);
			func_78(&(uParam0->f_240[0 /*17*/]), 1, 0);
			func_78(&(uParam0->f_240[1 /*17*/]), 1, 0);
			uParam0->f_296 = 2;
			func_14(&(uParam0->f_193), (1 << 10));
		}
	}
	else if (func_3(uParam0->f_193, (1 << 10)))
	{
		func_205(&(uParam0->f_219), 0);
		func_78(&(uParam0->f_240[0 /*17*/]), 0, 0);
		func_78(&(uParam0->f_240[1 /*17*/]), 0, 0);
		uParam0->f_296 = 3;
		func_7(&(uParam0->f_193), (1 << 10));
	}
}

int func_73(int iParam0, int iParam1, int iParam2)
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
		iVar0 -= iVar0 & iParam2;
	}
	return iVar0;
}

int func_74(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_206(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_207(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & (1 << 21) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & (1 << 23) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_208(&(iParam1->f_13));
		}
		if (func_209(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_210(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_74(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_76(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_211(*uParam0, 1, 1);
						}
					}
					else if (func_212(iParam1, 22))
					{
						func_211(*uParam0, 0, 1);
					}
				}
				if (func_213(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_214(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_215(iParam8);
					if (func_216(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_217(uParam3);
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
					func_218(iParam1, uParam3, fVar8);
					if (func_219(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_49(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_220(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_213(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_221(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_216(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_214(uParam0, func_213(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_215(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_49(uParam3, 0, 0, 1, 1);
					}
					func_222(iParam1, 1);
				}
				func_218(iParam1, uParam3, fVar8);
				if (func_220(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & (1 << 9) != 0)
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
	else if (!iParam8 & (1 << 10) != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_50(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_75(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_84(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_224(func_223(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_225(func_223(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_88();
	func_85(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_76(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_77(var uParam0)
{
	func_226(&(uParam0->f_240[0 /*17*/]), "GAV_UC_TALK", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_226(&(uParam0->f_240[1 /*17*/]), "GAV_UC_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_78(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_227(iParam0, 13))
	{
		func_87(iParam0, 0);
	}
	else
	{
		func_228(iParam0, 0);
	}
	if (func_142(iParam0->f_6))
	{
		if (bParam2)
		{
			func_143(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_79(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

struct<2> /*16*/ func_80(var uParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_3(uParam0->f_195, 1))
	{
		sVar0.f_0 = "INSULT_MALE_CONV_PART1";
		sVar0.f_1 = 2;
	}
	else if (func_3(uParam0->f_195, 1) && !func_3(uParam0->f_195, 2))
	{
		sVar0.f_0 = "INSULT_GAVINSFRIEND_CONV_PART1";
		sVar0.f_1 = 2;
	}
	else if (func_3(uParam0->f_195, 2) && !func_3(uParam0->f_195, 4))
	{
		sVar0.f_0 = "INSULT_MET_EARLIER_CONV_PART1";
		sVar0.f_1 = 1;
	}
	else if (func_3(uParam0->f_195, 4) && !func_3(uParam0->f_195, 8))
	{
		sVar0.f_0 = "INSULT_MET_EARLIER_CONV_PART1";
		sVar0.f_1 = 2;
	}
	else if (func_3(uParam0->f_195, 8) && !func_3(uParam0->f_195, 16))
	{
		sVar0.f_0 = "INSULT_MALE_CONV_PART1";
		sVar0.f_1 = 11;
	}
	else if (func_3(uParam0->f_195, 16) && !func_3(uParam0->f_195, 32))
	{
		sVar0.f_0 = "INSULT_MUSICIAN_CONV_PART1";
		sVar0.f_1 = 4;
	}
	return sVar0;
}

bool func_81(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_89(uParam2))
		{
			func_90(uParam2, 0.0f);
			return false;
		}
		else if (func_201(uParam2) > iParam6)
		{
			func_93(uParam2);
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
			fParam7 = func_229(*uParam0, Global_35, 1, 1);
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

char* func_82(int iParam0)
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

bool func_83(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_84(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 60;
		case 2:
			return 150;
		default:
			break;
	}
	return 0;
}

void func_87(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

var func_88()
{
	return Global_1899515;
}

bool func_89(var uParam0)
{
	return func_230(*uParam0, 1);
}

void func_90(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_231() - fParam1);
	func_232(uParam0, 1);
	func_233(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

float func_91(var uParam0)
{
	if (!func_89(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_234(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_231() - uParam0->f_1);
}

bool func_92(int iParam0)
{
	return iParam0 != -15;
}

void func_93(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

int func_94(int iParam0)
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
			switch (func_235())
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

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return "spd_gav_rhodes";
		case 38:
			return "spd_gav_blackwater";
		case 126:
			return "spd_gav_macfarlane";
		case 5:
			return "spd_gav_saintdenis";
		default:
			break;
	}
	return "";
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return "spd_gav_talltrees";
		case 10:
			return "spd_gav_roanoke";
		case 15:
			return "spd_gav_cholla_springs";
		default:
			break;
	}
	return "";
}

char* func_97()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_1@ig_1";
}

bool func_98(var uParam0, var uParam1)
{
	if (func_51(*uParam0))
	{
		*uParam1 = func_236(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int func_99(int iParam0)
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_237())
	{
		iVar2 = func_237();
	}
	iVar5 = func_238(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_239(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_239(iVar6) == 0)
			{
				return func_240(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_239(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_239(iVar6) == 0)
			{
				return func_240(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_240(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

char* func_101()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_6@ig_6";
}

char* func_102(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

char* func_103()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_7@ig_7";
}

char* func_104(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

void func_105(var uParam0)
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

void func_106(var uParam0)
{
	struct<11> /*88*/ sVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_152))
	{
		uParam0->f_152 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.85f, 1.85f, 2.0f);
	}
	switch (uParam0->f_127)
	{
		case 105:
			sVar0 = { func_241(0) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(1) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(2) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 26:
			sVar0 = { func_241(3) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(4) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(5) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 5:
			sVar0 = { func_241(15) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(16) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(17) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 76:
			sVar0 = { func_241(6) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(7) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(8) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 110:
			sVar0 = { func_241(9) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(10) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(11) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 38:
			sVar0 = { func_241(12) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(13) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(14) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 127:
			sVar0 = { func_241(18) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(19) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(20) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 126:
			sVar0 = { func_241(21) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(22) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(23) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
		case 120:
			sVar0 = { func_241(24) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(25) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(26) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			return;
	}
	switch (func_31(11))
	{
		case 12:
			sVar0 = { func_241(27) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(28) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(29) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			break;
		case 11:
			sVar0 = { func_241(30) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(31) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(32) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			break;
		case 10:
			sVar0 = { func_241(33) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(34) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(35) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			break;
		case 16:
			sVar0 = { func_241(36) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(37) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(38) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			break;
		case 15:
			sVar0 = { func_241(39) /*11*/ };
			func_242(&(uParam0->f_149), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(40) /*11*/ };
			func_242(&(uParam0->f_150), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			sVar0 = { func_241(41) /*11*/ };
			func_242(&(uParam0->f_151), sVar0.f_0, sVar0.f_1, sVar0.f_4, sVar0.f_7, sVar0.f_10);
			break;
	}
}

int func_107(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_243(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_108()
{
	if (func_194() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_109(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_244(uParam0, iParam1, sParam2))
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

bool func_110(var uParam0)
{
	if (func_51(uParam0->f_142))
	{
		uParam0->f_194 = func_245(uParam0->f_142);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_111(var uParam0)
{
	if (func_3(uParam0->f_194, 1))
	{
		uParam0->f_201 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, 2))
	{
		uParam0->f_201 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, 4))
	{
		uParam0->f_201 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, 8))
	{
		uParam0->f_201 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, 16))
	{
		uParam0->f_201 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, 32))
	{
		uParam0->f_201 = 6;
		return;
	}
	else if (func_3(uParam0->f_194, 64))
	{
		uParam0->f_201 = 0;
		return;
	}
	uParam0->f_201 = 0;
}

void func_112(var uParam0)
{
	if (func_3(uParam0->f_194, 128))
	{
		uParam0->f_200 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, 256))
	{
		uParam0->f_200 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 9)))
	{
		uParam0->f_200 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 10)))
	{
		uParam0->f_200 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 11)))
	{
		uParam0->f_200 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 12)))
	{
		uParam0->f_200 = 6;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 13)))
	{
		uParam0->f_200 = 7;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 14)))
	{
		uParam0->f_200 = 8;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 15)))
	{
		uParam0->f_200 = 0;
		return;
	}
	uParam0->f_200 = 0;
}

void func_113(var uParam0)
{
	if (func_3(uParam0->f_194, (1 << 22)))
	{
		uParam0->f_203 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 23)))
	{
		uParam0->f_203 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 24)))
	{
		uParam0->f_203 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 25)))
	{
		uParam0->f_203 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 26)))
	{
		uParam0->f_203 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 27)))
	{
		uParam0->f_203 = 0;
		return;
	}
	uParam0->f_203 = 0;
}

void func_114(var uParam0)
{
	if (func_3(uParam0->f_194, (1 << 16)))
	{
		uParam0->f_202 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 17)))
	{
		uParam0->f_202 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 18)))
	{
		uParam0->f_202 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 19)))
	{
		uParam0->f_202 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 20)))
	{
		uParam0->f_202 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, (1 << 21)))
	{
		uParam0->f_202 = 0;
		return;
	}
	uParam0->f_202 = 0;
}

bool func_115(int iParam0, bool bParam1)
{
	switch (func_146(iParam0))
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

struct<4> /*32*/ func_116(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (iParam1)
	{
		case 0:
			sVar0 = { func_246(11, 0, 0) /*4*/ };
			break;
		case 1:
			switch (uParam0->f_127)
			{
				case 105:
					sVar0 = { 1358.015f, -1369.316f, 78.3282f /*3*/ };
					sVar0.f_3 = 300.6034f;
					return sVar0;
				case 26:
					sVar0 = { -1826.825f, -424.025f, 159.689f /*3*/ };
					sVar0.f_3 = 101.0226f;
					return sVar0;
				case 76:
					sVar0 = { -272.9171f, 633.0108f, 112.46f /*3*/ };
					sVar0.f_3 = 131.3773f;
					return sVar0;
				case 5:
					sVar0 = { 2563.835f, -1378.423f, 45.1925f /*3*/ };
					sVar0.f_3 = 346.5068f;
					return sVar0;
				case 110:
					sVar0 = { -1988.987f, -1637.129f, 116.1275f /*3*/ };
					sVar0.f_3 = 261.0204f;
					return sVar0;
				case 38:
					sVar0 = { -773.2449f, -1329.082f, 42.6291f /*3*/ };
					sVar0.f_3 = 191.3503f;
					return sVar0;
				case 127:
					sVar0 = { -1408.907f, -2314.77f, 42.1056f /*3*/ };
					sVar0.f_3 = 86.7896f;
					return sVar0;
				case 126:
					sVar0 = { -2378.475f, -2378.621f, 61.1724f /*3*/ };
					sVar0.f_3 = 185.2923f;
					return sVar0;
				case 120:
					sVar0 = { -3674.969f, -2619.971f, -14.8162f /*3*/ };
					sVar0.f_3 = 4.9799f;
					return sVar0;
			}
			switch (func_31(11))
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
				case 16:
					sVar0 = { -1565.447f, -2695.09f, 64.7772f /*3*/ };
					sVar0.f_3 = 340.7221f;
					break;
				case 15:
					sVar0 = { -3157.477f, -2981.991f, 4.6224f /*3*/ };
					sVar0.f_3 = 86.239f;
					break;
			}
			break;
	}
	return sVar0;
}

bool func_117(var uParam0, int iParam1, Vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_247(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_247(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

void func_118(var uParam0)
{
	func_248(&(uParam0->f_98), uParam0->f_144);
	func_249(&(uParam0->f_98), 1);
	func_250(&(uParam0->f_98), 1);
	func_251(&(uParam0->f_98), 1);
	func_252(&(uParam0->f_98), 1);
	func_253(&(uParam0->f_98), 1);
	func_254(&(uParam0->f_98), 1);
	func_255(&(uParam0->f_98), 1);
	func_256(&(uParam0->f_98), 1);
	func_257(&(uParam0->f_98), 1);
	func_258(&(uParam0->f_98), 1);
	func_259(&(uParam0->f_98), 1);
	func_260(&(uParam0->f_98), 1);
	func_261(&(uParam0->f_98), 1);
	func_262(&(uParam0->f_98), 0);
	func_263(&(uParam0->f_98), 1);
	func_264(&(uParam0->f_98), 0);
	func_265(&(uParam0->f_98), 0);
	func_266(&(uParam0->f_98), 0);
	func_267(&(uParam0->f_98), 0);
	func_268(&(uParam0->f_98), 0);
	func_269(&(uParam0->f_98), 0);
	func_270(&(uParam0->f_98), 0);
	func_271(&(uParam0->f_98), 1, 1, 1);
}

void func_119(int iParam0, int iParam1)
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

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_276(iParam0);
		sVar1.f_1 = 10;
		sVar1.f_12 = 10;
		sVar1.f_0 = 1;
		sVar1.f_1[0] = iParam1;
		sVar1.f_12[0] = iParam2;
		iVar24 = 10;
		ENTITY::_0xA88E215CEB0435C0(iParam0, &sVar1, iVar0, iVar24, 3, false);
	}
}

void func_121(int iParam0, int iParam1)
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

bool func_122(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_123(var uParam0)
{
	struct<14> /*112*/ sVar0;

	if (uParam0->f_214 < 10.0f)
	{
		sVar0.f_4 = -1;
		sVar0.f_8 = 2;
		sVar0.f_9 = 1;
		sVar0.f_10 = 1;
		sVar0.f_11 = 1;
		sVar0.f_13 = 1;
		sVar0.f_14 = 2;
		sVar0.f_15 = 2;
		sVar0.f_16 = 3;
		sVar0.f_19 = 3;
		sVar0.f_20 = 1;
		sVar0.f_21 = 3;
		sVar0.f_22 = 3;
		sVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
		sVar0.f_3 = Global_35;
		sVar0.f_4 = 21030;
		sVar0.f_8 = 4;
		sVar0.f_13 = 3;
		sVar0.f_7 = 5000;
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uParam0->f_144, &sVar0);
	}
}

struct<6> /*48*/ func_124(var uParam0, var uParam1, bool bParam2)
{
	struct<6> /*48*/ sVar0;
	var uVar6;

	if (!bParam2)
	{
		switch (uParam0->f_127)
		{
			case 105:
				sVar0 = { 1358.015f, -1369.316f, 178.3282f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 300.6034f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 26:
				sVar0 = { -1826.825f, -424.025f, 259.689f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 101.0226f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 76:
				sVar0 = { -272.9171f, 633.0108f, 212.46f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 131.3773f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 5:
				sVar0 = { 2563.835f, -1378.423f, 45.1925f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 346.5068f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 110:
				sVar0 = { -1988.987f, -1637.129f, 216.1275f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 261.0204f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 38:
				sVar0 = { -773.2449f, -1329.082f, 142.6291f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 191.3503f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 127:
				sVar0 = { -1408.907f, -2314.77f, 142.1056f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 86.7896f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 126:
				sVar0 = { -2378.475f, -2378.621f, 161.1724f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 185.2923f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
			case 120:
				sVar0 = { -3674.969f, -2619.971f, 94.8162f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 4.9799f /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
				sVar0.f_2 = uVar6;
				return sVar0;
		}
		switch (func_31(11))
		{
			case 12:
				sVar0 = { -2338.21f, -1271.362f, 247.062f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 356.6931f /*3*/ };
				break;
			case 11:
				sVar0 = { 1295.802f, -200.3015f, 199.0642f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 1.8815f /*3*/ };
				break;
			case 10:
				sVar0 = { 2428.864f, 1015.729f, 185.6131f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 304.652f /*3*/ };
				break;
			case 16:
				sVar0 = { -1565.447f, -2695.09f, 164.7772f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 340.7221f /*3*/ };
				break;
			case 15:
				sVar0 = { -3157.477f, -2981.991f, 104.6224f /*3*/ };
				sVar0.f_3 = { 0.0f, 0.0f, 86.239f /*3*/ };
				break;
		}
		MISC::GET_GROUND_Z_FOR_3D_COORD(sVar0, &uVar6, false);
		sVar0.f_2 = uVar6;
	}
	else
	{
		sVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) /*3*/ };
		sVar0.f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
		sVar0.f_3.f_2 = ENTITY::GET_ENTITY_HEADING(*uParam1);
	}
	return sVar0;
}

int func_125()
{
	return Global_1897952.f_41;
}

int func_126(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_277(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_278(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_127(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_128()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_130())
	{
		return true;
	}
	return false;
}

var func_129()
{
	return Global_1900383.f_393;
}

bool func_130()
{
	if (func_279(Global_35) || func_280(Global_35))
	{
		return true;
	}
	return false;
}

int func_131()
{
	if (func_279(Global_35) || func_280(Global_35))
	{
		if (!func_27(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, func_129(), func_132(PLAYER::GET_PLAYER_INDEX()), 1.0f, 8);
		}
		return 0;
	}
	else if ((!func_279(Global_35) && !func_280(Global_35)) && !func_27(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
	{
		return 1;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_133()
{
	if (!func_281(Global_1327479))
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
	func_282(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_134(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_283() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_281(iVar1) && !func_284(iVar1, iParam2)) && (!bParam3 || !func_285(iVar1))) && (!bParam4 || !func_286(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_287(iVar0);
			}
		}
		iVar0++;
	}
}

void func_135(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_288(iParam0, iParam1, bParam2);
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

void func_136(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> /*56*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), bParam1, -1.0f);
		sVar0.f_1 = 1050253722;
		sVar0.f_2 = 1067030938;
		sVar0.f_5 = -1082130432;
		sVar0.f_6 = -1082130432;
		sVar0.f_3 = iParam16;
		sVar0.f_1 = iParam14;
		sVar0.f_2 = iParam15;
		sVar0.f_4 = iParam17;
		sVar0.f_5 = iParam20;
		sVar0.f_6 = iParam21;
		if (bParam8)
		{
			sVar0.f_0 = 0;
		}
		else
		{
			sVar0.f_0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &sVar0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, bParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_289(iParam0, bParam1, iParam18);
	}
}

void func_137(int iParam0, int iParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_290(iParam0, iParam1);
}

void func_138(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_139(int iParam0, var uParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_291(iParam0, uParam1);
}

void func_140(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_292(&Global_0, 8);
	}
	if (!func_293() || func_194() != -1)
	{
		return;
	}
	func_292(&Global_0, 1);
}

void func_141()
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
}

bool func_142(int iParam0)
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

void func_143(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_142(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_294(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_295(iVar0);
	*uParam0 = 0;
}

void func_144(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_143(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_205(iParam0, 0);
		}
	}
}

int func_145(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_296(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_146(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_145(iParam0);
}

int func_147(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_148(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0;
	}
	return func_297(func_239(iParam0));
}

void func_149(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_194() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_150(int iParam0, bool bParam1, bool bParam2)
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
		if (func_298())
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
		iVar0 = func_299(Global_1898164.f_1[0 /*5*/]);
		if (func_300(iVar0) && func_301(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_51(Global_1898164.f_1[0 /*5*/]))
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

bool func_151(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_152(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_148(iParam0))
	{
		case 1:
			iVar0 = func_299(iParam0);
			return func_302(iVar0);
		case 8:
			iVar1 = func_299(iParam0);
			if (func_301(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_303(iVar1);
			}
			break;
	}
	return -1;
}

void func_153(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_194() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_304(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_305();
		Global_1898077.f_9 = func_306(Global_1894899.f_2);
		func_307(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_154()
{
	if (!func_115(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_115(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_115(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_115(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_115(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_115(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_115(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_155(int iParam0, int iParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_308(iParam0, iParam1);
}

int func_156(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_157(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_309(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_310(&Global_1935630, (1 << 22));
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

int func_158(bool bParam0)
{
	if (!bParam0 && func_311(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_159(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_160(int iParam0, bool bParam1)
{
	if (func_194() != -1)
	{
		return;
	}
	if (func_156(0) != iParam0)
	{
		return;
	}
	if (func_312(iParam0))
	{
		if (bParam1)
		{
			func_313(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_314(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_161(int iParam0)
{
	return func_316(func_315(iParam0));
}

void func_162(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_317(vVar0, 0);
}

void func_163(var uParam0, bool bParam1, int iParam2)
{
	func_318(iParam2);
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
		uParam0->f_13 = func_319(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & (1 << 25) != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_41(uParam0, (1 << 25));
						}
					}
					else if (!*uParam0 & (1 << 13) != 0)
					{
						if (func_320(1))
						{
							func_41(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_320(1) || *uParam0 & (1 << 13) != 0))
				{
					func_321(uParam0, (1 << 25));
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
	if (!uParam0->f_1 & (1 << 10) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_322(uParam0))
			{
				uParam0->f_15 = func_183();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_183() - uParam0->f_15) > 500)
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
	func_323(uParam0);
}

bool func_164(int iParam0, var uParam1)
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
			if (!func_324(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_325(iParam0, iVar2) <= func_326(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_165(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_327(iParam2, 1, 1, 1, 0))
	{
		func_41(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_328(uParam1, 1);
	func_329();
}

bool func_166(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_330(iParam0, !*uParam1 & (1 << 28) != 0, !*uParam1 & (1 << 29) != 0, !*uParam1 & (1 << 30) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_331(uParam1);
			if (func_332(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_333(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_328(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_328(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_167(int iParam0, int iParam1, var uParam2)
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
	if (func_334(iParam1, !*uParam2 & (1 << 28) != 0, !*uParam2 & (1 << 29) != 0, !*uParam2 & (1 << 30) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_331(uParam2);
		if (func_332(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_333(uParam2)
				{
					func_328(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_168(int iParam0, var uParam1)
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
	if (func_324(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_333(uParam1)
		{
			fVar3 = func_331(uParam1);
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

int func_169(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_335(bParam1, bParam2, bParam3);
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

bool func_170(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_183();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_336(uParam2);
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
			if (func_179(uParam2, iParam1))
			{
				func_328(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_172(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_337(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_179(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_328(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_173(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_338(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_328(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_328(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_339(iParam1, vVar0, vVar4))
					{
						func_328(uParam2, 1);
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
					func_328(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_339(iParam1, vVar0, vVar7))
					{
						func_328(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_174(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = *uParam1 & (1 << 12) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_324(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_340(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_341(Global_1935630.f_34[iVar0]))
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
			if (func_342(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_343(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_344(uParam1, iParam0, fVar1, iVar0))
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

bool func_175(int iParam0, var uParam1)
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

bool func_176(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_183();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_345(iVar0, &iVar2))
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
	if (func_346(iVar0, iParam0))
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
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_178(var uParam0, int iParam1)
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

bool func_179(var uParam0, int iParam1)
{
	if (func_347(uParam0))
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
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
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

bool func_180(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_229(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_181()
{
}

bool func_182(var uParam0, int iParam1)
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
		if (func_348(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_183();
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
						if (func_349(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_183();
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

int func_183()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_184()
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
	if ((func_183() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_185(var uParam0, int iParam1)
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
	fVar0 = func_326(uParam0);
	if (uParam0->f_12 > func_350(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_351(iParam1);
	iVar1 = func_352(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_186(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & (1 << 19) != false;
	bVar2 = *uParam2 & 128 != false;
	return func_353(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_187(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & (1 << 26) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & (1 << 25) != 0)
	{
		if (func_354(iParam0, uParam1, 1))
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
					if (!func_355(uParam1, iParam0))
					{
						if (func_349(iVar4, Global_36, 1) < 7.0f)
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

bool func_188(int iParam0, var uParam1)
{
	if (!func_356(0))
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

bool func_189(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_183();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_191(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_183();
	}
	else if (func_183() - uParam1->f_4) > func_357(uParam1)
	{
		return func_358(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_192(var uParam0, int iParam1)
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

bool func_193(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_194()
{
	return Global_1572887.f_12;
}

int func_195(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_196(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_53(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_197(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_52(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_198(int iParam0)
{
	int iVar0;

	iVar0 = func_359();
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

int func_199(var uParam0, var uParam1, float fParam2, var uParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_360(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_361(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_362(iVar1, 0))
		{
			func_363(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_201(var uParam0)
{
	if (!func_89(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_234(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_183() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_202()
{
	return Global_1392040.f_6;
}

bool func_203()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_205(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_93(&(iParam0->f_18));
}

void func_206(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | (1 << 24);
	}
}

float func_207(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_208(var uParam0)
{
	func_90(uParam0, 0.0f);
}

bool func_209(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_364(iParam0, uParam1))
		{
			if (!func_122(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_49(uParam2, 0, 0, 1, 0);
				func_41(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_122(uParam1->f_10, 1))
		{
			func_365(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_321(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_210(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_122(iParam4, 32);
		func_144(iParam1, uParam2, 0);
		iVar5 = func_366(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_49(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_122(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_122(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_122(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_122(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_122(iParam4, (1 << 23)) || func_122(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_122(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_122(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_212(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_212(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_122(iParam4, (1 << 26)))
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
				iParam6 = func_367(uParam0);
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
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_122(iParam4, (1 << 28)))
			{
				iVar8 = func_368(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_369(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_212(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_122(iParam4, 2) || func_122(iParam4, 16))
			{
				func_211(*uParam0, 1, 1);
			}
			else
			{
				func_211(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_211(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_212(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_213(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_370(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_214(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_371(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_122(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_215(int iParam0)
{
	if (func_122(iParam0, 4))
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
	if (func_122(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_122(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_216(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_372(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_373(Global_35)) || func_374(Global_35)) || func_375(Global_35));
	fVar12 = -1.0f;
	if (func_89(&(iParam1->f_13)))
	{
		fVar12 = func_91(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_142((uParam4[iVar0 /*17*/])->f_6);
		func_376(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_377(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_378(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_49(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_379(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_144(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_380(iParam1, fParam6, iParam1->f_9))
					{
						func_208(&(iParam1->f_18));
						if (bVar6)
						{
							func_379(uParam4, 0, 0);
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
		func_381(iParam1, fParam2);
	}
	return bVar5;
}

void func_217(var uParam0)
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

void func_218(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_382(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_381(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_219(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_383(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_384(iParam1, 0);
				func_144(iParam1, uParam2, func_212(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_220(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_208(&(iParam1->f_18));
			return false;
		}
		else if (func_89(&(iParam1->f_18)))
		{
			func_93(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_89(&(iParam1->f_18)))
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
	return func_385(&(iParam1->f_18), fParam2);
	return true;
}

void func_221(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_376(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_222(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

struct<2> /*16*/ func_223(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_224(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_225(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_226(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_142(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_386(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_387(iParam0->f_6, iParam0->f_5, 0);
			}
			func_388(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_389(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_227(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_228(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

float func_229(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_230(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_231()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_234(var uParam0)
{
	return func_230(*uParam0, 2);
}

int func_235()
{
	return Global_1894899.f_2;
}

int func_236(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_390(iParam0);
}

int func_237()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	return iParam2 & 31 | BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) | BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_239(int iParam0)
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

int func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_391(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_237())
	{
		return -1;
	}
	iVar0 = func_238(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_308(iVar1, 0);
	func_392(iVar1, 0);
	func_290(iVar1, 0);
	func_291(iVar1, 0);
	func_393(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_394(iVar1, iParam4);
	}
	return iVar1;
}

struct<11> /*88*/ func_241(int iParam0)
{
	struct<11> /*88*/ sVar0;
	float fVar11;

	fVar11 = 6.0f;
	switch (iParam0)
	{
		case 0:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 1407.135f, -1373.595f, 80.78f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 1:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1358.015f, -1369.316f, 78.3282f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 2:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 1358.015f, -1369.316f, 78.3282f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 3:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -1826.825f, -424.025f, 159.689f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 4:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1826.825f, -424.025f, 159.689f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 5:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -1826.825f, -424.025f, 159.689f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 6:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -272.9171f, 633.0108f, 112.46f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 7:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -272.9171f, 633.0108f, 112.46f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 8:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -272.9171f, 633.0108f, 112.46f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 15:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 2590.084f, -1348.206f, 45.193f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 90.0f, 90.0f, 90.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 16:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 2563.835f, -1378.423f, 45.1925f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 346.5068f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 17:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 2563.835f, -1378.423f, 45.1925f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 346.5068f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 9:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -1988.987f, -1637.129f, 116.1275f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 10:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1988.987f, -1637.129f, 116.1275f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 11:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -1988.987f, -1637.129f, 116.1275f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 12:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -799.974f, -1330.227f, 42.6291f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 80.0f, 80.0f, 80.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 13:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -773.2449f, -1329.082f, 42.6291f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 14:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -773.2449f, -1329.082f, 42.6291f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 18:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -1408.907f, -2314.77f, 42.1056f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 19:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1408.907f, -2314.77f, 42.1056f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 20:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -1408.907f, -2314.77f, 42.1056f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 21:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -2350.174f, -2392.17f, 61.172f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 70.0f, 70.0f, 70.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 22:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -2378.475f, -2378.621f, 61.1724f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 23:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -2378.475f, -2378.621f, 61.1724f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 24:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -3674.969f, -2619.971f, -14.8162f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 25:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -3674.969f, -2619.971f, -14.8162f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 26:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -3674.969f, -2619.971f, -14.8162f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 27:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -2336.584f, -1264.266f, 147.062f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 28:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -2338.21f, -1271.362f, 147.062f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 29:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -2338.21f, -1271.362f, 147.062f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 30:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 1295.802f, -200.3015f, 99.0642f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 31:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 1295.802f, -200.3015f, 99.0642f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 32:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 1295.802f, -200.3015f, 99.0642f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 33:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { 2420.433f, 1020.558f, 87.236f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 110.0f, 110.0f, 110.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 34:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { 2428.864f, 1015.729f, 85.6131f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 35:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { 2428.864f, 1015.729f, 85.6131f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 36:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -1565.447f, -2695.09f, 64.7772f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 60.0f, 60.0f, 60.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 37:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -1565.447f, -2695.09f, 64.7772f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 38:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -1565.447f, -2695.09f, 64.7772f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
		case 39:
			sVar0.f_0 = joaat("VOLSPHERE");
			sVar0.f_1 = { -3158.572f, -3010.584f, 3.689f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_7 = { 100.0f, 100.0f, 100.0f /*3*/ };
			sVar0.f_10 = "GAVINRandomEventBlock";
			break;
		case 40:
			sVar0.f_0 = joaat("VOLCYLINDER");
			sVar0.f_1 = { -3157.477f, -2981.991f, 4.6224f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 48.00007f /*3*/ };
			sVar0.f_7 = { fVar11, fVar11, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINTrigger";
			break;
		case 41:
			sVar0.f_0 = joaat("VOLBOX");
			sVar0.f_1 = { -3157.477f, -2981.991f, 4.6224f /*3*/ };
			sVar0.f_4 = { 0.0f, 0.0f, 45.48975f /*3*/ };
			sVar0.f_7 = { 3.0f, 3.0f, 10.0f /*3*/ };
			sVar0.f_10 = "GAVINStayAway";
			break;
	}
	return sVar0;
}

void func_242(var uParam0, int iParam1, Vector3 vParam2, Vector3 vParam5, Vector3 vParam8, char* sParam11)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam1, vParam2, vParam5, vParam8, sParam11);
}

int func_243(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_395(vParam0))
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
		if (func_396(vParam0))
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
	func_397(iVar0, bParam8);
	return iVar0;
}

bool func_244(var uParam0, int iParam1, char* sParam2)
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

int func_245(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_398(iParam0);
}

struct<4> /*32*/ func_246(int iParam0, int iParam1, int iParam2)
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
			switch (func_31(4))
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
			switch (func_94(11))
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
			switch (func_31(11))
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
			switch (func_31(15))
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
			switch (func_31(23))
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

int func_247(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_399(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_248(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 8);
	}
	else
	{
		func_41(&(uParam0->f_1), 8);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 8);
	}
	else
	{
		func_321(uParam0, 8);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 256);
	}
	else
	{
		func_41(&(uParam0->f_1), 256);
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 4);
	}
	else
	{
		func_41(&(uParam0->f_1), 4);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 2);
	}
	else
	{
		func_41(&(uParam0->f_1), 2);
	}
}

void func_254(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_41(&(uParam0->f_1), (1 << 14));
	}
}

void func_255(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 128);
	}
	else
	{
		func_41(&(uParam0->f_1), 128);
	}
}

void func_256(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 256);
	}
	else
	{
		func_321(uParam0, 256);
	}
}

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, (1 << 23));
	}
	else
	{
		func_321(uParam0, (1 << 23));
	}
}

void func_258(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_41(&(uParam0->f_1), (1 << 11));
	}
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 128);
	}
	else
	{
		func_321(uParam0, 128);
	}
}

void func_260(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 16);
	}
	else
	{
		func_321(uParam0, (1 << 26));
		func_321(uParam0, 16);
	}
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 16);
	}
	else
	{
		func_41(&(uParam0->f_1), 16);
	}
}

void func_262(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, (1 << 19));
	}
	else
	{
		func_321(uParam0, (1 << 19));
	}
}

void func_263(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), (1 << 19));
	}
	else
	{
		func_41(&(uParam0->f_1), (1 << 19));
	}
}

void func_264(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_41(&(uParam0->f_1), (1 << 17));
	}
}

void func_265(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 4);
	}
	else
	{
		func_321(uParam0, 4);
	}
}

void func_266(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 64);
	}
	else
	{
		func_321(uParam0, 64);
	}
}

void func_267(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 2);
	}
	else
	{
		func_321(uParam0, 2);
	}
}

void func_268(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_41(&(uParam0->f_1), (1 << 10));
	}
}

void func_269(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 1);
	}
	else
	{
		func_41(&(uParam0->f_1), 1);
	}
}

void func_270(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 32);
	}
	else
	{
		func_321(uParam0, 32);
	}
}

void func_271(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_41(uParam0, (1 << 28));
	}
	else
	{
		func_321(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_41(uParam0, (1 << 30));
	}
	else
	{
		func_321(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_41(uParam0, (1 << 29));
	}
	else
	{
		func_321(uParam0, (1 << 29));
	}
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

int func_276(int iParam0)
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

bool func_277(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_400(iParam0))
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
		if (func_401(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_278(int iParam0, var uParam1)
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

bool func_279(bool bParam0)
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
		iVar2 = func_402(iVar9);
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

bool func_280(int iParam0)
{
	int iVar0;
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
	iVar0 = func_129();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
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
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
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

bool func_281(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_282(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_283()
{
	return Global_1310750.f_16037;
}

bool func_284(int iParam0, int iParam1)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_285(int iParam0)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	if (func_403(64) && func_404(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_286(int iParam0)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_287(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_281(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_405(iParam0);
	Global_1310750.f_16037--;
}

void func_288(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_406(iParam0, iParam1, bParam2);
}

void func_289(int iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(bParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, bParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_290(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_291(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_292(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_293()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_294(int iParam0)
{
	return iParam0;
}

void func_295(int iParam0)
{
	if (!func_407(iParam0))
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

int func_296(int iParam0)
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

int func_297(int iParam0)
{
	return iParam0 & 31;
}

bool func_298()
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

int func_299(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_408(func_239(iParam0));
}

bool func_300(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_301(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_302(int iParam0)
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

int func_303(int iParam0)
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

void func_304(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_305()
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

int func_306(int iParam0)
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

void func_307(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_308(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_409(iParam0);
	}
	else
	{
		func_410(iParam0, iParam1);
	}
	func_411();
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_412(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_312(int iParam0)
{
	if (!func_51(iParam0))
	{
		return false;
	}
	switch (func_148(iParam0))
	{
		case 1:
			switch (func_299(iParam0))
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
			switch (func_299(iParam0))
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

void func_313(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_413(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_414(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, bVar1);
		}
		iVar0++;
	}
	func_416(func_415(iParam0), 6);
}

void func_314(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_413(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_414(bVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, bVar1, 0);
		}
		iVar0++;
	}
	func_417(func_415(iParam0), 6);
}

int func_315(int iParam0)
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

int func_316(int iParam0)
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
	func_418(iParam0, Global_1898164.f_162);
	return 1;
}

void func_317(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_395(vParam0))
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
			if (func_419(vVar2, vParam0, 2.0f, 1))
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

void func_318(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_420();
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
			func_421(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_319(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_320(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_422(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_322(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_194() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_423(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_423(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_352(iVar0) == -1)
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

void func_323(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_424(uParam0);
	}
}

bool func_324(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_352(iParam2);
	}
	else
	{
		iVar1 = func_351(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_352(iParam0);
	}
	else
	{
		iVar0 = func_351(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_122(*uParam1, (1 << 23)))
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

float func_325(int iParam0, int iParam1)
{
	return func_229(iParam0, iParam1, 1, 1);
}

float func_326(var uParam0)
{
	return uParam0->f_26;
}

bool func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_328(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, (1 << 27));
	}
	else
	{
		func_321(uParam0, (1 << 27));
	}
}

void func_329()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_330(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_229(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_36(iVar0, 0)))
		{
			if (func_425(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_331(var uParam0)
{
	return uParam0->f_17;
}

bool func_332(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_122(*uParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if (*uParam0 & (1 << 15) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_333(var uParam0)
{
	return uParam0->f_18;
}

bool func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_36(iVar0, 0)))
		{
			if (func_426(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_335(bool bParam0, bool bParam1, bool bParam2)
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

float func_336(var uParam0)
{
	return uParam0->f_23;
}

int func_337(var uParam0)
{
	return uParam0->f_21;
}

int func_338(var uParam0)
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
	if (*uParam0 & (1 << 24) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_339(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_427(iParam0, vParam4, 0.5f))
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

int func_340(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
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
	if (func_428(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_341(int iParam0)
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

bool func_342(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_429(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if (*uParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_429(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if (*uParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_344(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_429(iParam1))
	{
		return false;
	}
	if (*uParam0 & (1 << 16) != 0)
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

bool func_345(int iParam0, int iParam1)
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

bool func_346(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_430(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_347(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_348(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_349(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_349(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_350(var uParam0)
{
	return uParam0->f_24;
}

int func_351(int iParam0)
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

int func_352(int iParam0)
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

int func_353(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_345(Global_35, &iVar1))
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
		fVar2 = func_229(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_229(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_354(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_422(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_355(uParam1, iVar0))
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
				if (!bParam2 || !func_355(uParam1, iVar1))
				{
					if (func_349(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_355(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
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

bool func_356(int iParam0)
{
	if (func_108())
	{
		return false;
	}
	return func_115(Global_1347702[58 /*49*/].f_15, 1);
}

int func_357(var uParam0)
{
	return uParam0->f_20;
}

int func_358(int iParam0, var uParam1, bool bParam2, float fParam3)
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

var func_359()
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

bool func_360(var uParam0, Vector3 vParam1, float fParam4)
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

bool func_361(var uParam0, var uParam1, Vector3 vParam2, float fParam5, float fParam6)
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
		*uParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_431(Global_35, *uParam1, 0))
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

bool func_362(int iParam0, bool bParam1)
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

void func_363(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_27(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

bool func_364(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_432((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_365(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_382(uParam0[iVar0 /*17*/]))
		{
			func_87(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_366(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_433(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_142((uParam2[iVar0 /*17*/])->f_6))
		{
			func_87(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_367(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_434(*uParam0);
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

int func_368(var uParam0, int iParam1)
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

void func_369(int* iParam0, int* iParam1)
{
	if (!func_212(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_87(iParam1, 19);
			func_384(iParam0, 23);
			func_435(iParam1, 2);
		}
	}
}

bool func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_436(16))
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
					func_437(16);
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

void func_371(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_433(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_372(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_373(int iParam0)
{
	return func_438(iParam0, 4) | func_438(iParam0, 5);
}

int func_374(int iParam0)
{
	return func_438(iParam0, 7);
}

int func_375(int iParam0)
{
	return func_438(iParam0, 6);
}

void func_376(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_382(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_433(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_377(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_439(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_440(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_388(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_388(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_441(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_378(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_442(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_443(iParam1, 1))
	{
		func_444(iParam1, 1);
		return true;
	}
	return false;
}

void func_379(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_380(int* iParam0, float fParam1, bool bParam2)
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

void func_381(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_382(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_383(int iParam0)
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

void func_384(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_385(var uParam0, float fParam1)
{
	if (func_445(uParam0, fParam1))
	{
		func_93(uParam0);
		return 1;
	}
	return 0;
}

void func_386(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_387(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_388(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (bParam1)
	{
		func_446(iParam0, 4);
		func_447(iVar0, 1);
		func_448(iVar0, 1);
	}
	else
	{
		func_449(iParam0, 4);
		func_448(iVar0, 0);
	}
}

void func_389(int* iParam0, char* sParam1)
{
	if (func_142(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_387(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_228(iParam0, 1);
}

int func_390(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_391(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_392(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_393(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_394(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

bool func_395(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_396(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_397(int iParam0, bool bParam1)
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

int func_398(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

void func_399(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_450(iParam1))
		{
			func_119(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_451(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
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
			func_452(iParam0, 0);
			bVar0 = true;
		}
		func_453(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_400(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_454(), true))
	{
		return true;
	}
	return false;
}

int func_401(int iParam0, bool bParam1)
{
	return func_455(iParam0, Global_1894899.f_2, bParam1);
}

int func_402(int iParam0)
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

bool func_403(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_404(int iParam0)
{
	return func_284(iParam0, Global_1310750.f_16072 | 64);
}

void func_405(int iParam0)
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

void func_406(int iParam0, int iParam1, bool bParam2)
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

bool func_407(int iParam0)
{
	return func_456(iParam0, 2);
}

int func_408(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_409(int iParam0)
{
	int iVar0;

	iVar0 = func_296(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_457(iVar0);
}

int func_410(int iParam0, int iParam1)
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
			func_458(iVar2);
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

void func_411()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_412(int iParam0, int iParam1)
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

int func_413(bool bParam0)
{
	if (func_194() == -1)
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

int func_414(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_459(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_415(int iParam0)
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

void func_416(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= Global_1946054.f_2657.f_26.f_6 & iParam0;
}

void func_417(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_418(int iParam0, int iParam1)
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
			func_460((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_460(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_51(Global_1898164.f_1[0 /*5*/]))
	{
		func_155(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_419(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

bool func_420()
{
	if (func_461())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

void func_421(var uParam0, var uParam1)
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

bool func_422(bool bParam0, int iParam1, int iParam2)
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

int func_423(var uParam0)
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

void func_424(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_321(uParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_41(uParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_425(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_426(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_426(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_427(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_428(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_429(int iParam0)
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

int func_430(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_431(int iParam0, int iParam1, bool bParam2)
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

int func_432(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_433(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_142(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_143(&(iParam1->f_6), 0, 1);
	}
	if (!func_142(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_382(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_462(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_142(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_441(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_463(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_464(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_386(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_463(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_388(iParam1->f_6, 0, 1);
				}
				else
				{
					func_388(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_434(int iParam0)
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

void func_435(int* iParam0, int iParam1)
{
	if (!func_227(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_87(iParam0, 14);
		}
	}
}

bool func_436(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_437(int iParam0)
{
	Global_22 |= iParam0;
}

int func_438(int iParam0, int iParam1)
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

bool func_439(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_440(int iParam0, bool bParam1)
{
	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	return !func_456(iParam0, 4);
}

void func_441(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	func_463(iParam0, 18, 0, 1);
	func_463(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_442(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_294(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_443(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_294(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_444(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_445(var uParam0, float fParam1)
{
	if (!func_89(uParam0))
	{
		return false;
	}
	if (func_91(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_446(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_447(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_456(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_448(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_449(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_450(int iParam0)
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

void func_451(int iParam0, int iParam1, bool bParam2)
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

void func_452(int iParam0, bool bParam1)
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

void func_453(int iParam0, bool bParam1)
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

int func_454()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_455(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_465(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_466(iParam0, uVar0, iVar1, bParam2);
}

bool func_456(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

int func_457(int iParam0)
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

int func_458(int iParam0)
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

bool func_459(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_460(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

bool func_461()
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

int func_462(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_456(iVar0, 2))
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
				func_467(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_463(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_464(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_465(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_194() != -1;
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

int func_466(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_468(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_469(iVar2)))
		{
			if (func_469(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_467(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_447(iParam0, 1);
	func_448(iParam0, 1);
	func_449(iParam0, 128);
}

int func_468(int iParam0)
{
	if (!func_470(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_469(int iParam0)
{
	if (!func_470(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_470(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

